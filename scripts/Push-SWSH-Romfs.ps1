[CmdletBinding(SupportsShouldProcess = $true, ConfirmImpact = "Medium")]
param(
    [string]$RepositoryRoot = "E:\Test\SWSH_Unpack",
    [string]$ManifestPath = "",
    [string]$ReportPath = "",
    [string]$StateRoot = "E:\Test\SWSH_Unpack-Work\v1.3.2",
    [string]$GitExe = "D:\Tool\Git\cmd\git.exe",
    [long]$BatchTargetBytes = 576716800,
    [long]$BatchMaxBytes = 629145600,
    [ValidateRange(1, 50000)][int]$BatchMaxFiles = 5000,
    [long]$PushHardLimitBytes = 2147483648
)
Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"
. (Join-Path $PSScriptRoot "SWSH-Romfs.Common.ps1")

if ([string]::IsNullOrWhiteSpace($ManifestPath)) { $ManifestPath = Join-Path $RepositoryRoot "docs\sword-v1.3.2-archive-manifest.csv" }
if ([string]::IsNullOrWhiteSpace($ReportPath)) { $ReportPath = Join-Path $RepositoryRoot "docs\sword-v1.3.2-archive-report.md" }
foreach ($path in @($RepositoryRoot, $ManifestPath, $ReportPath, $GitExe)) {
    if (-not (Test-Path -LiteralPath $path)) { throw "Required path is missing: $path" }
}
$RepositoryRoot = [System.IO.Path]::GetFullPath($RepositoryRoot).TrimEnd("\")
$StateRoot = [System.IO.Path]::GetFullPath($StateRoot).TrimEnd("\")
$logDirectory = if ($WhatIfPreference) { Join-Path $env:TEMP "swsh-romfs-push-whatif\logs" } else { Join-Path $StateRoot "logs" }
$statePath = Join-Path $StateRoot "push-checkpoint.json"
New-Item -ItemType Directory -Path $logDirectory -Force -WhatIf:$false | Out-Null

function Invoke-Git([string[]]$Arguments, [string]$Name, [string]$InputText = $null) {
    $result = Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments (@("-C", $RepositoryRoot, "-c", "core.compression=1", "-c", "gc.auto=0", "-c", "maintenance.auto=false") + $Arguments) -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName $Name -StandardInputText $InputText
    if ($result.ExitCode -ne 0) {
        throw "Git command failed (exit $($result.ExitCode)): git $($Arguments -join ' '). $($result.StdErr)"
    }
    $result
}
function Get-GitText([string[]]$Arguments, [string]$Name) {
    (Invoke-Git -Arguments $Arguments -Name $Name).StdOut.Trim()
}
function Add-UniqueValue([string]$Current, [string]$NewValue) {
    $values = @()
    if (-not [string]::IsNullOrWhiteSpace($Current)) { $values += $Current.Split("|") }
    if ($NewValue -and $values -notcontains $NewValue) { $values += $NewValue }
    $values -join "|"
}
function Split-NulPathList([string]$Text) {
    if ([string]::IsNullOrEmpty($Text)) { return @() }
    @($Text.Split([char[]]@([char]0), [System.StringSplitOptions]::RemoveEmptyEntries))
}
function Update-ManifestPushState([object[]]$Rows, [object[]]$BatchItems, [string]$BatchNumber, [string]$CommitSha) {
    foreach ($item in $BatchItems) {
        $row = $item.Row
        $row.git_batch = Add-UniqueValue ([string]$row.git_batch) $BatchNumber
        $row.commit_sha = Add-UniqueValue ([string]$row.commit_sha) $CommitSha
        $row.pushed_output_paths = Add-UniqueValue ([string]$row.pushed_output_paths) $item.RelativePath
        $all = @(Get-SWSHManifestOutputPaths $row)
        $pushed = @(([string]$row.pushed_output_paths).Split("|") | Where-Object { $_ })
        $row.push_status = if (@($all | Where-Object { $pushed -notcontains $_ }).Count -eq 0) { "PUSHED" } else { "PUSHED_PARTIAL" }
    }
}
function Get-PendingObjectUpperBound([string]$RemoteRef, [string]$BatchTag) {
    $revisionList = Invoke-Git -Arguments @("rev-list", "--objects", "$RemoteRef..HEAD") -Name "objects-$BatchTag"
    $objectIds = @($revisionList.StdOut -split "[\r\n]+" | ForEach-Object { if ($_ -match "^([0-9a-fA-F]{40,64})") { $Matches[1] } } | Select-Object -Unique)
    if ($objectIds.Count -eq 0) { return [long]0 }
    $inputText = ($objectIds -join [Environment]::NewLine) + [Environment]::NewLine
    $sizes = Invoke-Git -Arguments @("cat-file", "--batch-check=%(objectsize)") -Name "object-sizes-$BatchTag" -InputText $inputText
    $objectBytes = [long](($sizes.StdOut -split "[\r\n]+" | Where-Object { $_ -match "^\d+$" } | Measure-Object -Sum).Sum)
    $objectBytes + ([long]$objectIds.Count * 256)
}
function Get-RemoteTree([string]$RemoteRef, [string]$BatchTag) {
    $result = Invoke-Git -Arguments @("ls-tree", "-r", "--name-only", "-z", $RemoteRef, "--", "v1.3.2/1") -Name "remote-tree-$BatchTag"
    $set = New-Object "System.Collections.Generic.HashSet[string]" ([System.StringComparer]::OrdinalIgnoreCase)
    foreach ($path in (Split-NulPathList $result.StdOut)) {
        [void]$set.Add((ConvertTo-SWSHRelativePath $path))
    }
    return ,$set
}
function Save-PushState($State) {
    Write-SWSHAtomicJson -Path $statePath -Value $State
}
function Test-PushAction {
    [CmdletBinding(SupportsShouldProcess = $true, ConfirmImpact = "Medium")]
    param([string]$Target, [string]$Action)
    $PSCmdlet.ShouldProcess($Target, $Action)
}

$rows = @(Import-Csv -LiteralPath $ManifestPath)
if ($rows.Count -eq 0) { throw "Archive manifest is empty." }
foreach ($row in $rows) {
    if ($row.verification_status -ne "VERIFIED") { throw "Cannot publish unverified output: $($row.relative_path)" }
    if (-not $row.PSObject.Properties["pushed_output_paths"]) { $row | Add-Member -NotePropertyName pushed_output_paths -NotePropertyValue "" }
    if (-not $row.PSObject.Properties["push_status"]) { $row | Add-Member -NotePropertyName push_status -NotePropertyValue "PENDING" }
    if (-not $row.PSObject.Properties["git_batch"]) { $row | Add-Member -NotePropertyName git_batch -NotePropertyValue "" }
    if (-not $row.PSObject.Properties["commit_sha"]) { $row | Add-Member -NotePropertyName commit_sha -NotePropertyValue "" }
}

$branch = Get-GitText @("branch", "--show-current") "branch"
if ([string]::IsNullOrWhiteSpace($branch)) { throw "Detached HEAD cannot be pushed." }
$originUrl = Get-GitText @("remote", "get-url", "origin") "origin-url"
if ([string]::IsNullOrWhiteSpace($originUrl)) { throw "origin is not configured." }
$remoteRef = "refs/remotes/origin/$branch"
$remoteShort = "origin/$branch"
$head = Get-GitText @("rev-parse", "HEAD") "head"
$remoteHead = Get-GitText @("rev-parse", $remoteRef) "remote-head"
$state = [PSCustomObject]@{ completed_batches = @(); pending_batch = $null }
if (Test-Path -LiteralPath $statePath -PathType Leaf) {
    $state = Get-Content -LiteralPath $statePath -Raw | ConvertFrom-Json
    if (-not $state.completed_batches) { $state.completed_batches = @() }
}

if ($WhatIfPreference -and $state.pending_batch) {
    [PSCustomObject]@{
        Branch = $branch
        Origin = $originUrl
        PendingBatch = $state.pending_batch.batch
        PendingCommit = $state.pending_batch.commit_sha
        WouldResumePush = $true
    }
    return
}

if ($state.pending_batch) {
    $pending = $state.pending_batch
    if ($head -ne $pending.commit_sha) { throw "Pending batch commit is not HEAD; inspect local history before continuing." }
    if ($remoteHead -ne $pending.commit_sha) {
        $parent = Get-GitText @("rev-parse", "HEAD^") "pending-parent"
        if ($parent -ne $remoteHead) { throw "Remote changed after pending batch; stop and reconcile before pushing." }
        if (-not (Test-PushAction -Target $remoteShort -Action "Resume push of batch $($pending.batch)")) { return }
        $retry = Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments @("-C", $RepositoryRoot, "-c", "core.compression=1", "-c", "gc.auto=0", "-c", "maintenance.auto=false", "push", "origin", "HEAD:refs/heads/$branch") -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName ("push-retry-" + $pending.batch)
        if ($retry.ExitCode -ne 0) { throw "Retry push failed for batch $($pending.batch): $($retry.StdErr)" }
        Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments @("-C", $RepositoryRoot, "-c", "gc.auto=0", "-c", "maintenance.auto=false", "fetch", "origin") -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName ("fetch-retry-" + $pending.batch) | Out-Null
        $remoteHead = Get-GitText @("rev-parse", $remoteRef) "remote-head-retry"
        if ($remoteHead -ne $pending.commit_sha) { throw "Remote did not confirm pending batch $($pending.batch)." }
    }
    $state.completed_batches += $pending
    $state.pending_batch = $null
    Save-PushState $state
}

$fetch = Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments @("-C", $RepositoryRoot, "-c", "gc.auto=0", "-c", "maintenance.auto=false", "fetch", "origin") -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName "fetch-before-push"
if ($fetch.ExitCode -ne 0) { throw "git fetch origin failed: $($fetch.StdErr)" }
$head = Get-GitText @("rev-parse", "HEAD") "head-after-fetch"
$remoteHead = Get-GitText @("rev-parse", $remoteRef) "remote-head-after-fetch"
$aheadCount = [int](Get-GitText @("rev-list", "--count", "$remoteShort..HEAD") "ahead-count")
if ($aheadCount -gt 0) { throw "There are $aheadCount unpushed local commits without a recorded pending batch; inspect history first." }
if ($head -ne $remoteHead) { throw "Local HEAD does not match $remoteRef after fetch; refusing to rebase or overwrite history." }
$staged = (Invoke-Git @("diff", "--cached", "--name-only", "-z") "staged-check").StdOut
if (-not [string]::IsNullOrEmpty($staged)) { throw "The index already contains staged files; refusing to mix them with archive batches." }

$remoteTree = Get-RemoteTree -RemoteRef $remoteShort -BatchTag "initial"
$items = New-Object System.Collections.Generic.List[object]
foreach ($row in $rows) {
    $outputPaths = @(Get-SWSHManifestOutputPaths $row)
    foreach ($relative in $outputPaths) {
        $relative = ConvertTo-SWSHRelativePath $relative
        $full = Join-Path $RepositoryRoot $relative.Replace("/", "\")
        if (-not (Test-Path -LiteralPath $full -PathType Leaf)) { throw "Verified output is missing: $relative" }
        $size = [long](Get-Item -LiteralPath $full).Length
        if ($size -ge 104857600) { throw "GitHub single-file limit risk: $relative is $size bytes (must be below 100 MiB)." }
        if ($remoteTree.Contains($relative)) {
            $row.pushed_output_paths = Add-UniqueValue ([string]$row.pushed_output_paths) $relative
            continue
        }
        $items.Add([PSCustomObject]@{ RelativePath = $relative; FullPath = $full; Size = $size; Row = $row })
    }
}
foreach ($row in $rows) {
    $all = @(Get-SWSHManifestOutputPaths $row)
    $pushed = @(([string]$row.pushed_output_paths).Split("|") | Where-Object { $_ })
    $row.push_status = if (@($all | Where-Object { $pushed -notcontains $_ }).Count -eq 0) { "PUSHED" } elseif ($pushed.Count -gt 0) { "PUSHED_PARTIAL" } else { "PENDING" }
}

$orderedItems = @($items | Sort-Object RelativePath)
$batches = New-Object System.Collections.Generic.List[object]
$currentItems = New-Object System.Collections.Generic.List[object]
$currentBytes = [long]0
foreach ($item in $orderedItems) {
    if ($item.Size -gt $BatchMaxBytes) { throw "Single file exceeds the batch maximum: $($item.RelativePath)" }
    if ($currentItems.Count -gt 0 -and (($currentBytes + $item.Size) -gt $BatchTargetBytes -or $currentItems.Count -ge $BatchMaxFiles)) {
        $batches.Add([PSCustomObject]@{ Items = $currentItems.ToArray(); DataBytes = $currentBytes })
        $currentItems = New-Object System.Collections.Generic.List[object]
        $currentBytes = [long]0
    }
    $currentItems.Add($item)
    $currentBytes += $item.Size
}
if ($currentItems.Count -gt 0) { $batches.Add([PSCustomObject]@{ Items = $currentItems.ToArray(); DataBytes = $currentBytes }) }

$metadataPaths = @(
    (ConvertTo-SWSHRelativePath ($ManifestPath.Substring($RepositoryRoot.Length).TrimStart("\"))),
    (ConvertTo-SWSHRelativePath ($ReportPath.Substring($RepositoryRoot.Length).TrimStart("\")))
) | Select-Object -Unique
$existingBatchNumbers = @()
$subjects = Get-GitText @("log", "--format=%s", $remoteShort) "remote-subjects"
foreach ($match in [regex]::Matches($subjects, "archive Sword v1\.3\.2 romfs batch (\d{3,})")) {
    $existingBatchNumbers += [int]$match.Groups[1].Value
}
$nextBatch = if ($existingBatchNumbers.Count -gt 0) { [int](($existingBatchNumbers | Measure-Object -Maximum).Maximum) + 1 } else { 1 }

if ($WhatIfPreference) {
    $preview = @()
    foreach ($batch in $batches) {
        $preview += [PSCustomObject]@{ Batch = "{0:D3}" -f $nextBatch; Files = $batch.Items.Count; DataBytes = $batch.DataBytes; IncludesManifest = $true }
        $nextBatch++
    }
    [PSCustomObject]@{ Branch = $branch; Origin = $originUrl; PlannedBatches = $batches.Count; DataFiles = $orderedItems.Count; Preview = $preview }
    return
}

if ($batches.Count -eq 0 -and $rows.Count -gt 0) {
    if (Test-PushAction -Target $remoteShort -Action "Finalize archive manifest and report") {
        Write-SWSHAtomicCsv -Path $ManifestPath -Rows $rows
    }
}

$allCommits = New-Object System.Collections.Generic.List[string]
$successfulPushes = 0
$batchNo = $nextBatch
for ($batchIndex = 0; $batchIndex -lt $batches.Count; $batchIndex++) {
    $batch = $batches[$batchIndex]
    $batchNumber = "{0:D3}" -f $batchNo
    $batchNo++
    $preFetch = Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments @("-C", $RepositoryRoot, "-c", "gc.auto=0", "-c", "maintenance.auto=false", "fetch", "origin") -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName ("fetch-" + $batchNumber)
    if ($preFetch.ExitCode -ne 0) { throw "Fetch failed before batch ${batchNumber}: $($preFetch.StdErr)" }
    $remoteHead = Get-GitText @("rev-parse", $remoteRef) ("remote-before-" + $batchNumber)
    $head = Get-GitText @("rev-parse", "HEAD") ("head-before-" + $batchNumber)
    if ($head -ne $remoteHead) { throw "Remote changed before batch $batchNumber; local HEAD does not match origin." }
    $aheadCount = [int](Get-GitText @("rev-list", "--count", "$remoteShort..HEAD") ("ahead-before-" + $batchNumber))
    if ($aheadCount -ne 0) { throw "Unpushed history exists before batch $batchNumber." }

    $dataPaths = @($batch.Items | ForEach-Object { $_.RelativePath })
    $pathspecPaths = @($dataPaths + $metadataPaths | Select-Object -Unique)
    $requiredStagedPaths = @($dataPaths)
    foreach ($metadataRelative in $metadataPaths) {
        $metadataStatus = Invoke-Git @("status", "--porcelain", "-z", "--", $metadataRelative) ("metadata-status-" + $batchNumber)
        if (-not [string]::IsNullOrEmpty($metadataStatus.StdOut)) { $requiredStagedPaths += $metadataRelative }
    }
    $batchBytes = [long]$batch.DataBytes
    foreach ($metadataRelative in $metadataPaths) {
        $metadataFull = Join-Path $RepositoryRoot $metadataRelative.Replace("/", "\")
        if (Test-Path -LiteralPath $metadataFull -PathType Leaf) { $batchBytes += [long](Get-Item -LiteralPath $metadataFull).Length }
    }
    if ($batchBytes -gt $BatchMaxBytes) { throw "Batch $batchNumber exceeds BatchMax before staging: $batchBytes bytes." }

    $pathspecFile = Join-Path $StateRoot ("pathspec-" + $batchNumber + ".nul")
    $pathspecText = ($pathspecPaths -join [char]0) + [char]0
    [System.IO.File]::WriteAllText($pathspecFile, $pathspecText, [System.Text.UTF8Encoding]::new($false))
    $add = Invoke-Git @("add", "--pathspec-from-file=$pathspecFile", "--pathspec-file-nul") ("add-" + $batchNumber)
    $stagedOutput = (Invoke-Git @("diff", "--cached", "--name-only", "-z") ("staged-" + $batchNumber)).StdOut
    $stagedPaths = @(Split-NulPathList $stagedOutput | ForEach-Object { ConvertTo-SWSHRelativePath $_ })
    $expectedSet = New-Object "System.Collections.Generic.HashSet[string]" ([System.StringComparer]::OrdinalIgnoreCase)
    foreach ($path in $pathspecPaths) { [void]$expectedSet.Add((ConvertTo-SWSHRelativePath $path)) }
    foreach ($path in $stagedPaths) {
        if (-not $expectedSet.Contains($path)) { throw "Unexpected staged path: $path" }
    }
    foreach ($path in $requiredStagedPaths) {
        if (-not ($stagedPaths -contains (ConvertTo-SWSHRelativePath $path))) { throw "Expected path was not staged: $path" }
    }

    $commitMessage = "chore(swsh): archive Sword v1.3.2 romfs batch $batchNumber"
    if (-not (Test-PushAction -Target $RepositoryRoot -Action "Commit $($batch.Items.Count) archive files for batch $batchNumber")) { return }
    $commit = Invoke-Git @("commit", "-m", $commitMessage) ("commit-" + $batchNumber)
    $commitSha = Get-GitText @("rev-parse", "HEAD") ("commit-sha-" + $batchNumber)
    $objectUpperBound = Get-PendingObjectUpperBound -RemoteRef $remoteShort -BatchTag $batchNumber
    if ($objectUpperBound -ge $PushHardLimitBytes) {
        throw "Batch $batchNumber outgoing object upper bound is $objectUpperBound bytes; refusing push at the 2 GB limit."
    }
    if ($batchBytes -gt $BatchMaxBytes) { throw "Batch $batchNumber staged bytes exceed the 600 MiB maximum." }

    $pendingRecord = [PSCustomObject]@{
        batch = $batchNumber
        commit_sha = $commitSha
        path_count = $pathspecPaths.Count
        file_count = $batch.Items.Count
        payload_bytes = $batchBytes
        object_upper_bound_bytes = $objectUpperBound
        paths = @($batch.Items | ForEach-Object { $_.RelativePath })
    }
    $state.pending_batch = $pendingRecord
    Save-PushState $state
    $push = Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments @("-C", $RepositoryRoot, "-c", "core.compression=1", "-c", "gc.auto=0", "-c", "maintenance.auto=false", "push", "origin", "HEAD:refs/heads/$branch") -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName ("push-" + $batchNumber)
    if ($push.ExitCode -ne 0) { throw "Push failed for batch $batchNumber. Commit $commitSha remains local; inspect remote and retry safely. $($push.StdErr)" }
    $afterFetch = Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments @("-C", $RepositoryRoot, "-c", "gc.auto=0", "-c", "maintenance.auto=false", "fetch", "origin") -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName ("confirm-fetch-" + $batchNumber)
    if ($afterFetch.ExitCode -ne 0) { throw "Push returned success but fetch confirmation failed for batch $batchNumber." }
    $confirmedRemote = Get-GitText @("rev-parse", $remoteRef) ("confirm-remote-" + $batchNumber)
    if ($confirmedRemote -ne $commitSha) { throw "Remote did not confirm batch $batchNumber; remote=$confirmedRemote expected=$commitSha." }

    Update-ManifestPushState -Rows $rows -BatchItems $batch.Items -BatchNumber $batchNumber -CommitSha $commitSha
    $state.completed_batches += $pendingRecord
    $state.pending_batch = $null
    Save-PushState $state
    Write-SWSHAtomicCsv -Path $ManifestPath -Rows $rows
    $successfulPushes++
    $allCommits.Add($commitSha)
    Write-Host "PUSHED batch=$batchNumber files=$($batch.Items.Count) payloadBytes=$batchBytes objectUpperBound=$objectUpperBound commit=$commitSha"
}

$finalRemoteTree = Get-RemoteTree -RemoteRef $remoteShort -BatchTag "final"
$allOutputsPushed = $true
foreach ($row in $rows) {
    $outputs = @(Get-SWSHManifestOutputPaths $row)
    $pushed = @(([string]$row.pushed_output_paths).Split("|") | Where-Object { $_ })
    foreach ($output in $outputs) {
        if (-not $finalRemoteTree.Contains((ConvertTo-SWSHRelativePath $output))) { $allOutputsPushed = $false }
        if ($pushed -notcontains $output) {
            $row.pushed_output_paths = Add-UniqueValue ([string]$row.pushed_output_paths) $output
            $row.push_status = "PUSHED"
        }
    }
}
$verified = @($rows | Where-Object { $_.verification_status -eq "VERIFIED" }).Count
$pushedRows = @($rows | Where-Object { $_.push_status -eq "PUSHED" }).Count
$batchCount = @($state.completed_batches).Count
$lastDataCommit = if ($state.completed_batches.Count -gt 0) { $state.completed_batches[$state.completed_batches.Count - 1].commit_sha } else { $head }
$finalStatus = if ($allOutputsPushed -and $verified -eq $rows.Count -and $pushedRows -eq $rows.Count) { "PASS" } else { "PARTIAL" }
$reportText = Get-Content -LiteralPath $ReportPath -Raw
$reportText = [regex]::Replace($reportText, "(?m)^- Git batches:.*$", "- Git batches: $batchCount")
$reportText = [regex]::Replace($reportText, "(?m)^- Successful commits:.*$", "- Successful commits: $batchCount")
$reportText = [regex]::Replace($reportText, "(?m)^- Successful pushes:.*$", "- Successful pushes: $batchCount data batches")
$reportText = [regex]::Replace($reportText, "(?m)^- Unpushed batches:.*$", "- Unpushed batches: 0")
$reportText = [regex]::Replace($reportText, "(?m)^- Latest local commit:.*$", "- Latest local commit before report finalization: $lastDataCommit")
$reportText = [regex]::Replace($reportText, "(?m)^- Latest origin commit:.*$", "- Latest origin commit before report finalization: $confirmedRemote")
$reportText = [regex]::Replace($reportText, "(?m)^Final status:.*$", "Final status: $finalStatus")
Write-SWSHAtomicCsv -Path $ManifestPath -Rows $rows
Write-SWSHAtomicText -Path $ReportPath -Text $reportText

# Commit the final manifest/report update separately so the last batch metadata is also stored remotely.
$stagedBeforeFinal = (Invoke-Git @("diff", "--cached", "--name-only", "-z") "final-index-check").StdOut
if (-not [string]::IsNullOrEmpty($stagedBeforeFinal)) { throw "Unexpected staged changes before final metadata commit." }
$finalPaths = @($metadataPaths)
$finalPathspec = Join-Path $StateRoot "pathspec-final.nul"
[System.IO.File]::WriteAllText($finalPathspec, (($finalPaths -join [char]0) + [char]0), [System.Text.UTF8Encoding]::new($false))
Invoke-Git @("add", "--pathspec-from-file=$finalPathspec", "--pathspec-file-nul") "add-final-metadata" | Out-Null
$finalStaged = (Invoke-Git @("diff", "--cached", "--name-only", "-z") "final-staged-check").StdOut
if (-not [string]::IsNullOrEmpty($finalStaged)) {
    if (-not (Test-PushAction -Target $RepositoryRoot -Action "Commit final archive manifest and report")) { return }
    Invoke-Git @("commit", "-m", "chore(swsh): finalize Sword v1.3.2 archive manifest") "commit-final-metadata" | Out-Null
    $finalCommitSha = Get-GitText @("rev-parse", "HEAD") "final-commit-sha"
    $finalObjectUpperBound = Get-PendingObjectUpperBound -RemoteRef $remoteShort -BatchTag "final"
    if ($finalObjectUpperBound -ge $PushHardLimitBytes) { throw "Final metadata push exceeds the hard push-size limit." }
    $finalPush = Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments @("-C", $RepositoryRoot, "-c", "core.compression=1", "-c", "gc.auto=0", "-c", "maintenance.auto=false", "push", "origin", "HEAD:refs/heads/$branch") -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName "push-final-metadata"
    if ($finalPush.ExitCode -ne 0) { throw "Final metadata push failed. Commit $finalCommitSha remains local. $($finalPush.StdErr)" }
    $confirmFinal = Invoke-SWSHNativeProcess -FilePath $GitExe -Arguments @("-C", $RepositoryRoot, "-c", "gc.auto=0", "-c", "maintenance.auto=false", "fetch", "origin") -WorkingDirectory $RepositoryRoot -LogRoot $logDirectory -LogName "fetch-final-metadata"
    if ($confirmFinal.ExitCode -ne 0) { throw "Final metadata push confirmation fetch failed." }
    $confirmedRemote = Get-GitText @("rev-parse", $remoteRef) "remote-final"
    if ($confirmedRemote -ne $finalCommitSha) { throw "Final metadata commit was not confirmed on origin." }
    $allCommits.Add($finalCommitSha)
    $successfulPushes++
}
$finalHead = Get-GitText @("rev-parse", "HEAD") "final-head"
$finalRemote = Get-GitText @("rev-parse", $remoteRef) "final-remote-head"
if ($finalHead -ne $finalRemote) { throw "Final local and origin commits differ." }
$unverified = @($rows | Where-Object { $_.verification_status -ne "VERIFIED" }).Count
$notPushed = @($rows | Where-Object { $_.push_status -ne "PUSHED" }).Count
[PSCustomObject]@{
    Branch = $branch
    Origin = $originUrl
    GitBatches = $batchCount
    SuccessfulCommits = $batchCount
    SuccessfulPushes = $batchCount
    UnverifiedFiles = $unverified
    UnpushedRows = $notPushed
    LatestLocalCommit = $finalHead
    LatestOriginCommit = $finalRemote
    FinalStatus = if ($allOutputsPushed -and $unverified -eq 0 -and $notPushed -eq 0) { "PASS" } else { "PARTIAL" }
}
