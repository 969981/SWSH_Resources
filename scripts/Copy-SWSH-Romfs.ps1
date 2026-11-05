[CmdletBinding(SupportsShouldProcess = $true, ConfirmImpact = "Medium")]
param(
    [string]$SourceRoot = "X:\ROMS\Nintendo Switch\Pokemon\Pokemon Sword\v1.3.2\f13bc7b678b5c86998ff4e847e180142_NCA\1",
    [string]$DestinationRoot = "E:\Test\SWSH_Unpack\v1.3.2\1",
    [string]$RepositoryRoot = "E:\Test\SWSH_Unpack",
    [string]$ManifestPath = "",
    [string]$StateRoot = "E:\Test\SWSH_Unpack-Work\v1.3.2",
    [string]$SevenZipPath = "D:\Tool\7-Zip\7z.exe",
    [string]$SourceInventoryPath = "",
    [string]$SourceNcaRoot = "f13bc7b678b5c86998ff4e847e180142_NCA",
    [long]$ThresholdBytes = 94371840,
    [string]$VolumeSize = "90m",
    [ValidateRange(1, 4)][int]$MaxParallelArchives = 2,
    [ValidateRange(1, 32)][int]$HashThreads = 8
)
Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"
. (Join-Path $PSScriptRoot "SWSH-Romfs.Common.ps1")

if ([string]::IsNullOrWhiteSpace($ManifestPath)) {
    $ManifestPath = Join-Path $RepositoryRoot "docs\sword-v1.3.2-archive-manifest.csv"
}
if ([string]::IsNullOrWhiteSpace($SourceInventoryPath)) {
    $SourceInventoryPath = Join-Path $RepositoryRoot "sword_1.3.2_file_inventory_full.csv"
}
foreach ($path in @($SourceRoot, $SevenZipPath)) {
    if (-not (Test-Path -LiteralPath $path)) { throw "Required path is missing: $path" }
}
if (-not (Test-Path -LiteralPath $SourceRoot -PathType Container)) { throw "Source root is not a directory: $SourceRoot" }
$SourceRoot = [System.IO.Path]::GetFullPath($SourceRoot).TrimEnd("\")
$DestinationRoot = [System.IO.Path]::GetFullPath($DestinationRoot).TrimEnd("\")
$RepositoryRoot = [System.IO.Path]::GetFullPath($RepositoryRoot).TrimEnd("\")
$StateRoot = [System.IO.Path]::GetFullPath($StateRoot).TrimEnd("\")
$checkpointDirectory = Join-Path $StateRoot "checkpoint"
$logDirectory = Join-Path $StateRoot "logs"
$temporaryRoot = Join-Path $StateRoot "temp"
$runLog = Join-Path $logDirectory ("copy-" + (Get-Date -Format "yyyyMMdd-HHmmss") + ".log")
$checkpointPath = Join-Path $StateRoot "copy-checkpoint.json"

$sourceFiles = @(Get-ChildItem -LiteralPath $SourceRoot -File -Recurse -Force -ErrorAction Stop | Sort-Object FullName)
if ($sourceFiles.Count -eq 0) { throw "No source files found under $SourceRoot" }

$inventoryBySubpath = @{}
$inventoryRows = @()
if (Test-Path -LiteralPath $SourceInventoryPath -PathType Leaf) {
    $prefix = "$SourceNcaRoot/1/"
    $allRows = @(Import-Csv -LiteralPath $SourceInventoryPath)
    foreach ($row in $allRows) {
        $inventoryPath = ConvertTo-SWSHRelativePath ([string]$row.RelativePath)
        if ($inventoryPath.StartsWith($prefix, [StringComparison]::OrdinalIgnoreCase)) {
            $subpath = $inventoryPath.Substring($prefix.Length).Replace("/", "\")
            $inventoryBySubpath[$subpath] = $row
            $inventoryRows += $row
        }
    }
    if ($inventoryRows.Count -ne $sourceFiles.Count) {
        throw "Source/inventory file count mismatch: source=$($sourceFiles.Count), inventory=$($inventoryRows.Count)"
    }
}

$records = New-Object System.Collections.Generic.List[object]
$directInfo = New-Object System.Collections.Generic.List[object]
$largeInfo = New-Object System.Collections.Generic.List[object]
foreach ($file in $sourceFiles) {
    $subpath = $file.FullName.Substring($SourceRoot.Length).TrimStart("\")
    $sourceRelativePath = "$SourceNcaRoot/1/" + (ConvertTo-SWSHRelativePath $subpath)
    $expectedHash = ""
    if ($inventoryBySubpath.ContainsKey($subpath)) {
        $inventoryRow = $inventoryBySubpath[$subpath]
        if ([long]$inventoryRow.SizeBytes -ne [long]$file.Length) {
            throw "Source size differs from inventory: $sourceRelativePath"
        }
        $expectedHash = ([string]$inventoryRow.SHA256).ToLowerInvariant()
        if ($expectedHash -notmatch "^[0-9a-f]{64}$") {
            throw "Inventory has no valid SHA-256 for $sourceRelativePath"
        }
    }
    else {
        $expectedHash = Get-SWSHFileSha256 -Path $file.FullName
    }

    $targetRelativePath = "v1.3.2/1/" + (ConvertTo-SWSHRelativePath $subpath)
    $mode = if ($file.Length -le $ThresholdBytes) { "COPY" } else { "7Z" }
    $record = [PSCustomObject]@{
        relative_path = $sourceRelativePath
        source_subpath = ConvertTo-SWSHRelativePath $subpath
        original_size = [long]$file.Length
        original_sha256 = $expectedHash
        processing_mode = $mode
        archive_part_count = 0
        output_size = [long]0
        verification_status = "PENDING"
        git_batch = ""
        commit_sha = ""
        push_status = "PENDING"
        output_relative_paths = ""
        pushed_output_paths = ""
    }
    $records.Add($record)
    $item = [PSCustomObject]@{ File = $file; Record = $record; TargetRelativePath = $targetRelativePath }
    if ($mode -eq "COPY") { $directInfo.Add($item) } else { $largeInfo.Add($item) }
}

$plannedBytes = [long](($sourceFiles | Measure-Object -Property Length -Sum).Sum)
if ($WhatIfPreference) {
    [PSCustomObject]@{
        PlannedFiles = $sourceFiles.Count
        PlannedBytes = $plannedBytes
        DirectFiles = $directInfo.Count
        ArchivedFiles = $largeInfo.Count
        ThresholdBytes = $ThresholdBytes
        DestinationRoot = $DestinationRoot
        ManifestPath = $ManifestPath
    }
    return
}
if (-not $PSCmdlet.ShouldProcess($DestinationRoot, "Copy and archive $($sourceFiles.Count) source files")) { return }

New-Item -ItemType Directory -Path $DestinationRoot, $checkpointDirectory, $logDirectory, $temporaryRoot -Force | Out-Null
Add-Content -LiteralPath $runLog -Value ("START " + (Get-Date -Format o) + " sourceFiles=$($sourceFiles.Count) sourceBytes=$plannedBytes")
$largeNames = @($largeInfo | ForEach-Object { $_.File.Name } | Select-Object -Unique)
$robocopyArguments = @($SourceRoot, $DestinationRoot, "/E", "/COPY:DAT", "/DCOPY:DAT", "/MT:32", "/R:2", "/W:1", "/XJ", "/NFL", "/NDL", "/NP", "/NJH", "/NJS", "/LOG:$runLog")
if ($largeNames.Count -gt 0) {
    $robocopyArguments += "/XF"
    $robocopyArguments += $largeNames
}
$robocopyResult = Invoke-SWSHNativeProcess -FilePath "$env:SystemRoot\System32\robocopy.exe" -Arguments $robocopyArguments -WorkingDirectory $SourceRoot -LogRoot $logDirectory -LogName ("robocopy-" + [guid]::NewGuid().ToString("N"))
if ($robocopyResult.ExitCode -ge 8) {
    Add-Content -LiteralPath $runLog -Value "ROBOCOPY_FAILED exit=$($robocopyResult.ExitCode) stderr=$($robocopyResult.StdErr)"
    throw "Robocopy failed with exit code $($robocopyResult.ExitCode). See $runLog"
}

# Robocopy excludes by basename; copy any same-named small files explicitly.
foreach ($item in $directInfo) {
    if ($largeNames -contains $item.File.Name) {
        $target = Join-Path $DestinationRoot $item.Record.source_subpath.Replace("/", "\")
        New-Item -ItemType Directory -Path (Split-Path -Parent $target) -Force | Out-Null
        [System.IO.File]::Copy($item.File.FullName, $target, $true)
    }
}

if (-not ([System.Management.Automation.PSTypeName]"SWSHArchiveFileHasher").Type) {
    Add-Type -TypeDefinition @"
using System;
using System.Collections.Concurrent;
using System.IO;
using System.Security.Cryptography;
using System.Threading.Tasks;
public static class SWSHArchiveFileHasher {
    public static ConcurrentDictionary<string, string> HashFiles(string[] paths, int degree) {
        var results = new ConcurrentDictionary<string, string>(StringComparer.OrdinalIgnoreCase);
        Parallel.ForEach(paths, new ParallelOptions { MaxDegreeOfParallelism = degree }, path => {
            using (var sha = SHA256.Create())
            using (var stream = new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.Read, 1048576, FileOptions.SequentialScan)) {
                results[path] = BitConverter.ToString(sha.ComputeHash(stream)).Replace("-", "").ToLowerInvariant();
            }
        });
        return results;
    }
}
"@
}
$directTargets = @($directInfo | ForEach-Object { Join-Path $DestinationRoot $_.Record.source_subpath.Replace("/", "\") } | Where-Object { Test-Path -LiteralPath $_ -PathType Leaf })
$directHashes = [SWSHArchiveFileHasher]::HashFiles([string[]]$directTargets, $HashThreads)
$directDone = 0
foreach ($item in $directInfo) {
    $target = Join-Path $DestinationRoot $item.Record.source_subpath.Replace("/", "\")
    try {
        if (-not (Test-Path -LiteralPath $target -PathType Leaf) -or (Get-Item -LiteralPath $target).Length -ne $item.Record.original_size -or $directHashes[$target] -ne $item.Record.original_sha256) {
            New-Item -ItemType Directory -Path (Split-Path -Parent $target) -Force | Out-Null
            [System.IO.File]::Copy($item.File.FullName, $target, $true)
            $actualHash = Get-SWSHFileSha256 -Path $target
        }
        else { $actualHash = $directHashes[$target] }
        if ($actualHash -ne $item.Record.original_sha256) { throw "SHA-256 mismatch after recopy: $($item.Record.relative_path)" }
        $item.Record.output_size = [long](Get-Item -LiteralPath $target).Length
        $item.Record.output_relative_paths = $item.TargetRelativePath
        $item.Record.verification_status = "VERIFIED"
    }
    catch {
        $item.Record.verification_status = "FAILED"
        Add-Content -LiteralPath $runLog -Value ("FAILED " + $item.Record.relative_path + " " + $_.Exception.Message)
    }
    $directDone++
    if (($directDone % 1000) -eq 0 -or $directDone -eq $directInfo.Count) {
        Write-SWSHAtomicJson -Path $checkpointPath -Value ([PSCustomObject]@{
            UpdatedUtc = (Get-Date).ToUniversalTime().ToString("o")
            Stage = "DIRECT_COPY"
            CompletedDirect = $directDone
            TotalDirect = $directInfo.Count
            Verified = @($records | Where-Object { $_.verification_status -eq "VERIFIED" }).Count
            Failed = @($records | Where-Object { $_.verification_status -eq "FAILED" }).Count
            SourceBytes = $plannedBytes
        })
    }
    if ($directInfo.Count -gt 0) {
        Write-Progress -Activity "Copying and verifying ROMFS" -Status "$directDone/$($directInfo.Count) direct files verified" -PercentComplete ([int](100 * $directDone / $directInfo.Count))
    }
}

$pendingArchives = New-Object System.Collections.Generic.List[object]
foreach ($item in $largeInfo) {
    $target = Join-Path $DestinationRoot $item.Record.source_subpath.Replace("/", "\")
    $targetDirectory = Split-Path -Parent $target
    $archiveBaseName = (Split-Path -Leaf $target) + ".7z"
    $existingVolumes = @(Get-SWSHArchiveVolumes -Directory $targetDirectory -ArchiveBaseName $archiveBaseName)
    if ($existingVolumes.Count -gt 0) {
        try {
            $checked = Test-SWSHArchiveRoundTrip -SevenZipPath $SevenZipPath -FirstVolumePath $existingVolumes[0].FullName -ExpectedFileName $item.File.Name -ExpectedSize $item.Record.original_size -ExpectedSha256 $item.Record.original_sha256 -TemporaryRoot $temporaryRoot -LogRoot $logDirectory
            $item.Record.archive_part_count = $checked.PartCount
            $item.Record.output_size = $checked.OutputSize
            $item.Record.output_relative_paths = (($checked.VolumePaths | ForEach-Object { ConvertTo-SWSHRelativePath ($_.Substring($RepositoryRoot.Length).TrimStart("\")) }) -join "|")
            $item.Record.verification_status = "VERIFIED"
            continue
        }
        catch { Add-Content -LiteralPath $runLog -Value ("REPAIR_ARCHIVE " + $item.Record.relative_path + " " + $_.Exception.Message) }
    }
    $temporaryDirectory = Join-Path $temporaryRoot ("compress-" + (Get-SWSHTextSha256 $item.Record.relative_path))
    if (Test-Path -LiteralPath $temporaryDirectory) {
        Remove-Item -LiteralPath $temporaryDirectory -Recurse -Force
    }
    New-Item -ItemType Directory -Path $temporaryDirectory -Force | Out-Null
    $pendingArchives.Add([PSCustomObject]@{
        Item = $item
        Target = $target
        TargetDirectory = $targetDirectory
        ArchiveBaseName = $archiveBaseName
        TemporaryDirectory = $temporaryDirectory
        TemporaryBase = (Join-Path $temporaryDirectory $archiveBaseName)
        Started = $null
    })
}

$queue = New-Object System.Collections.Generic.Queue[object]
foreach ($task in $pendingArchives) { $queue.Enqueue($task) }
$running = New-Object System.Collections.Generic.List[object]
while ($queue.Count -gt 0 -or $running.Count -gt 0) {
    while ($queue.Count -gt 0 -and $running.Count -lt $MaxParallelArchives) {
        $task = $queue.Dequeue()
        $args = @("a", "-t7z", "-mx=1", "-mmt=on", "-v$VolumeSize", $task.TemporaryBase, $task.Item.File.Name)
        $logName = "compress-" + (Get-SWSHTextSha256 $task.Item.Record.relative_path)
        $task.Started = Start-SWSHNativeProcess -FilePath $SevenZipPath -Arguments $args -WorkingDirectory $task.Item.File.DirectoryName -StdOutPath (Join-Path $logDirectory "$logName.out.log") -StdErrPath (Join-Path $logDirectory "$logName.err.log")
        $task.Item.Record.verification_status = "COMPRESSING"
        $running.Add($task)
        Add-Content -LiteralPath $runLog -Value ("COMPRESS_START " + $task.Item.Record.relative_path)
    }
    $finished = @($running | Where-Object { $_.Started.Process.HasExited })
    if ($finished.Count -eq 0) { Start-Sleep -Milliseconds 500; continue }
    foreach ($task in $finished) {
        $completion = Complete-SWSHNativeProcess -Started $task.Started
        $exitCode = $completion.ExitCode
        try {
            if ($exitCode -ne 0) { throw "7-Zip compression exited with code $exitCode. $($completion.StdErr)" }
            $temporaryVolumes = @(Get-SWSHArchiveVolumes -Directory $task.TemporaryDirectory -ArchiveBaseName $task.ArchiveBaseName)
            if ($temporaryVolumes.Count -eq 0) { throw "7-Zip produced no split volumes." }
            $roundTrip = Test-SWSHArchiveRoundTrip -SevenZipPath $SevenZipPath -FirstVolumePath $temporaryVolumes[0].FullName -ExpectedFileName $task.Item.File.Name -ExpectedSize $task.Item.Record.original_size -ExpectedSha256 $task.Item.Record.original_sha256 -TemporaryRoot $temporaryRoot -LogRoot $logDirectory
            New-Item -ItemType Directory -Path $task.TargetDirectory -Force | Out-Null
            $oldVolumes = @(Get-SWSHArchiveVolumes -Directory $task.TargetDirectory -ArchiveBaseName $task.ArchiveBaseName)
            foreach ($old in $oldVolumes) { Remove-Item -LiteralPath $old.FullName -Force }
            foreach ($volume in $temporaryVolumes) { Move-Item -LiteralPath $volume.FullName -Destination $task.TargetDirectory -Force }
            $finalFirst = Join-Path $task.TargetDirectory ($task.ArchiveBaseName + ".001")
            $finalTest = Invoke-SWSHNativeProcess -FilePath $SevenZipPath -Arguments @("t", $finalFirst) -WorkingDirectory $task.TargetDirectory -LogRoot $logDirectory -LogName ("final-test-" + (Get-SWSHTextSha256 $task.Item.Record.relative_path))
            if ($finalTest.ExitCode -ne 0) { throw "Final 7-Zip volume test failed: $($finalTest.StdErr)" }
            $finalVolumes = @(Get-SWSHArchiveVolumes -Directory $task.TargetDirectory -ArchiveBaseName $task.ArchiveBaseName)
            $task.Item.Record.archive_part_count = $finalVolumes.Count
            $task.Item.Record.output_size = [long](($finalVolumes | Measure-Object -Property Length -Sum).Sum)
            $task.Item.Record.output_relative_paths = (($finalVolumes | ForEach-Object { ConvertTo-SWSHRelativePath ($_.FullName.Substring($RepositoryRoot.Length).TrimStart("\")) }) -join "|")
            $task.Item.Record.verification_status = "VERIFIED"
            Add-Content -LiteralPath $runLog -Value ("VERIFIED_7Z " + $task.Item.Record.relative_path + " parts=$($finalVolumes.Count) restoredHash=$($roundTrip.RestoredSha256)")
        }
        catch {
            $task.Item.Record.verification_status = "FAILED"
            Add-Content -LiteralPath $runLog -Value ("FAILED_7Z " + $task.Item.Record.relative_path + " " + $_.Exception.Message)
        }
        finally {
            Remove-Item -LiteralPath $task.TemporaryDirectory -Recurse -Force -ErrorAction SilentlyContinue
            [void]$running.Remove($task)
            $completedArchives = @($largeInfo | Where-Object { $_.Record.verification_status -in @("VERIFIED", "FAILED") }).Count
            if ($largeInfo.Count -gt 0) {
                Write-Progress -Activity "Copying and verifying ROMFS" -Status "$completedArchives/$($largeInfo.Count) large files archived and verified" -PercentComplete ([int](100 * $completedArchives / $largeInfo.Count))
            }
            Write-SWSHAtomicJson -Path $checkpointPath -Value ([PSCustomObject]@{
                UpdatedUtc = (Get-Date).ToUniversalTime().ToString("o")
                Stage = "ARCHIVE"
                CompletedArchives = $completedArchives
                TotalArchives = $largeInfo.Count
                Verified = @($records | Where-Object { $_.verification_status -eq "VERIFIED" }).Count
                Failed = @($records | Where-Object { $_.verification_status -eq "FAILED" }).Count
                SourceBytes = $plannedBytes
            })
        }
    }
}

$directSubpaths = New-Object "System.Collections.Generic.HashSet[string]" ([System.StringComparer]::OrdinalIgnoreCase)
foreach ($item in $directInfo) {
    if ($item.Record.verification_status -eq "VERIFIED") {
        [void]$directSubpaths.Add((ConvertTo-SWSHRelativePath $item.Record.source_subpath))
    }
}
foreach ($volume in (Get-ChildItem -LiteralPath $DestinationRoot -File -Recurse -Filter "*.7z.*" -Force -ErrorAction SilentlyContinue)) {
    $relativeVolume = ConvertTo-SWSHRelativePath ($volume.FullName.Substring($DestinationRoot.Length).TrimStart("\"))
    $originalRelative = [regex]::Replace($relativeVolume, "\.7z\.\d+$", "", [System.Text.RegularExpressions.RegexOptions]::IgnoreCase)
    if ($directSubpaths.Contains($originalRelative)) { Remove-Item -LiteralPath $volume.FullName -Force }
}

$manifestRows = @($records | Sort-Object relative_path)
Write-SWSHAtomicCsv -Path $ManifestPath -Rows $manifestRows
$verifiedCount = @($records | Where-Object { $_.verification_status -eq "VERIFIED" }).Count
$failedCount = @($records | Where-Object { $_.verification_status -eq "FAILED" }).Count
$directCount = @($records | Where-Object { $_.processing_mode -eq "COPY" -and $_.verification_status -eq "VERIFIED" }).Count
$archiveCount = @($records | Where-Object { $_.processing_mode -eq "7Z" -and $_.verification_status -eq "VERIFIED" }).Count
$partCount = [int](($records | Measure-Object -Property archive_part_count -Sum).Sum)
$outputBytes = [long](($records | Measure-Object -Property output_size -Sum).Sum)
Add-Content -LiteralPath $runLog -Value ("END verified=$verifiedCount failed=$failedCount outputBytes=$outputBytes")
Write-Progress -Activity "Copying and verifying ROMFS" -Completed
$summary = [PSCustomObject]@{
    TotalFiles = $records.Count
    OriginalBytes = $plannedBytes
    DirectFiles = $directCount
    ArchivedFiles = $archiveCount
    TotalVolumes = $partCount
    OutputBytes = $outputBytes
    VerifiedFiles = $verifiedCount
    Failed = $failedCount
    ManifestPath = $ManifestPath
    LogPath = $runLog
}
$summary
if ($failedCount -gt 0) { throw "$failedCount files failed. See manifest and log; rerun to resume." }
