param(
    [string]$RepoRoot = "E:\Test\SWSH_Unpack"
)
Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"

$sevenZip = "D:\Tool\7-Zip\7z.exe"
$copyScript = Join-Path $RepoRoot "scripts\Copy-SWSH-Romfs.ps1"
$verifyScript = Join-Path $RepoRoot "scripts\Verify-SWSH-Romfs.ps1"
$pushScript = Join-Path $RepoRoot "scripts\Push-SWSH-Romfs.ps1"
if (-not (Test-Path -LiteralPath $copyScript)) { throw "Copy script missing: $copyScript" }
if (-not (Test-Path -LiteralPath $verifyScript)) { throw "Verify script missing: $verifyScript" }
if (-not (Test-Path -LiteralPath $pushScript)) { throw "Push script missing: $pushScript" }
if (-not (Test-Path -LiteralPath $sevenZip)) { throw "7-Zip missing: $sevenZip" }
. (Join-Path (Split-Path $copyScript -Parent) "SWSH-Romfs.Common.ps1")

function Assert-True([bool]$Condition, [string]$Message) {
    if (-not $Condition) { throw $Message }
}
function Get-Sha256([string]$Path) {
    (Get-FileHash -LiteralPath $Path -Algorithm SHA256).Hash.ToLowerInvariant()
}

$testRoot = Join-Path $env:TEMP ("swsh-romfs-test-" + [guid]::NewGuid().ToString("N"))
$source = Join-Path $testRoot "source"
$repo = Join-Path $testRoot "repo"
$destination = Join-Path $repo "v1.3.2\1"
$manifest = Join-Path $repo "docs\sword-v1.3.2-archive-manifest.csv"
$state = Join-Path $testRoot "state"
$report = Join-Path $repo "docs\sword-v1.3.2-archive-report.md"
$gitExe = "D:\Tool\Git\cmd\git.exe"
$gitLogs = Join-Path $testRoot "git-logs"
$gitCounter = 0
function Invoke-TestGit([string]$Path, [string[]]$Arguments) {
    $script:gitCounter++
    $result = Invoke-SWSHNativeProcess -FilePath $script:gitExe -Arguments (@("-C", $Path) + $Arguments) -WorkingDirectory $Path -LogRoot $script:gitLogs -LogName ("git-" + $script:gitCounter)
    if ($result.ExitCode -ne 0) { throw "Synthetic git command failed: git $($Arguments -join ' '). $($result.StdErr)" }
    $result
}
$testPassed = $false
try {
    New-Item -ItemType Directory -Path (Join-Path $source "sub"), (Join-Path $repo "docs"), $state -Force | Out-Null
    [System.IO.File]::WriteAllText((Join-Path $source "sub\small.txt"), "synthetic small fixture")
    $rng = [System.Security.Cryptography.RandomNumberGenerator]::Create()
    $largePath = Join-Path $source "sub\large.bin"
    $stream = [System.IO.File]::Create($largePath)
    try {
        $buffer = New-Object byte[] (1MB)
        for ($i = 0; $i -lt 3; $i++) {
            $rng.GetBytes($buffer)
            $stream.Write($buffer, 0, $buffer.Length)
        }
    }
    finally {
        $stream.Dispose()
        $rng.Dispose()
    }
    $expectedSmallHash = Get-Sha256 (Join-Path $source "sub\small.txt")
    $expectedLargeHash = Get-Sha256 $largePath

    $first = & $copyScript -SourceRoot $source -DestinationRoot $destination -RepositoryRoot $repo -ManifestPath $manifest -StateRoot $state -SevenZipPath $sevenZip -ThresholdBytes 1024 -VolumeSize "1m" -MaxParallelArchives 1
    Assert-True ($first.Failed -eq 0) "First copy run reported failures."
    Assert-True ((Get-Sha256 (Join-Path $destination "sub\small.txt")) -eq $expectedSmallHash) "Small file was not copied byte-for-byte."
    $parts = @(Get-ChildItem -LiteralPath (Join-Path $destination "sub") -Filter "large.bin.7z.*" -File)
    Assert-True ($parts.Count -ge 2) "Large fixture did not create multiple volumes."

    $verification = & $verifyScript -SourceRoot $source -DestinationRoot $destination -RepositoryRoot $repo -ManifestPath $manifest -SevenZipPath $sevenZip -ThresholdBytes 1024 -VolumeSize "1m" -ReportPath $report
    Assert-True ($verification.FailedFiles -eq 0) "Verifier reported a failed file."
    Assert-True ($verification.VerifiedFiles -eq 2) "Verifier did not account for both source files."
    Assert-True ((Test-Path -LiteralPath $report) -and ((Get-Item $report).Length -gt 0)) "Verification report was not written."

    [System.IO.File]::WriteAllText((Join-Path $destination "sub\small.txt"), "corrupt")
    $resume = & $copyScript -SourceRoot $source -DestinationRoot $destination -RepositoryRoot $repo -ManifestPath $manifest -StateRoot $state -SevenZipPath $sevenZip -ThresholdBytes 1024 -VolumeSize "1m" -MaxParallelArchives 1
    Assert-True ($resume.Failed -eq 0) "Resume run reported failures."
    Assert-True ((Get-Sha256 (Join-Path $destination "sub\small.txt")) -eq $expectedSmallHash) "Resume did not repair a corrupted direct copy."
    Assert-True ((Get-Sha256 $largePath) -eq $expectedLargeHash) "Source fixture changed during processing."
    [System.IO.File]::WriteAllText($parts[0].FullName, "corrupt archive volume")
    $resumeArchive = & $copyScript -SourceRoot $source -DestinationRoot $destination -RepositoryRoot $repo -ManifestPath $manifest -StateRoot $state -SevenZipPath $sevenZip -ThresholdBytes 1024 -VolumeSize "1m" -MaxParallelArchives 1
    Assert-True ($resumeArchive.Failed -eq 0) "Resume run reported archive repair failures."
    $verificationAfterResume = & $verifyScript -SourceRoot $source -DestinationRoot $destination -RepositoryRoot $repo -ManifestPath $manifest -SevenZipPath $sevenZip -ThresholdBytes 1024 -VolumeSize "1m" -ReportPath $report
    Assert-True ($verificationAfterResume.FailedFiles -eq 0) "Verifier failed after resume repair."

    $whatIfDestination = Join-Path $testRoot "whatif\v1.3.2\1"
    $whatIfManifest = Join-Path $testRoot "whatif\docs\manifest.csv"
    $whatIfState = Join-Path $testRoot "whatif-state"
    & $copyScript -SourceRoot $source -DestinationRoot $whatIfDestination -RepositoryRoot (Join-Path $testRoot "whatif") -ManifestPath $whatIfManifest -StateRoot $whatIfState -SevenZipPath $sevenZip -ThresholdBytes 1024 -VolumeSize "1m" -MaxParallelArchives 1 -WhatIf
    Assert-True (-not (Test-Path -LiteralPath (Join-Path $whatIfDestination "sub\small.txt"))) "WhatIf wrote a destination file."
    Assert-True (-not (Test-Path -LiteralPath $whatIfManifest)) "WhatIf wrote a manifest."

    $bareRemote = Join-Path $testRoot "origin.git"
    Invoke-TestGit $testRoot @("init", "--bare", $bareRemote) | Out-Null
    Invoke-TestGit $repo @("init", "-b", "master") | Out-Null
    Invoke-TestGit $repo @("config", "user.name", "Synthetic Test") | Out-Null
    Invoke-TestGit $repo @("config", "user.email", "synthetic@example.invalid") | Out-Null
    [System.IO.File]::WriteAllText((Join-Path $repo "seed.txt"), "seed")
    Invoke-TestGit $repo @("add", "seed.txt") | Out-Null
    Invoke-TestGit $repo @("commit", "-m", "seed") | Out-Null
    Invoke-TestGit $repo @("remote", "add", "origin", $bareRemote) | Out-Null
    Invoke-TestGit $repo @("push", "-u", "origin", "master") | Out-Null
    $pushState = Join-Path $testRoot "push-state"
    $headBeforeWhatIf = (Invoke-TestGit $repo @("rev-parse", "HEAD")).StdOut.Trim()
    & $pushScript -RepositoryRoot $repo -ManifestPath $manifest -ReportPath $report -StateRoot $pushState -GitExe $gitExe -BatchTargetBytes 1048576 -BatchMaxBytes 2097152 -PushHardLimitBytes 20971520 -WhatIf | Out-Null
    $headAfterWhatIf = (Invoke-TestGit $repo @("rev-parse", "HEAD")).StdOut.Trim()
    Assert-True ($headAfterWhatIf -eq $headBeforeWhatIf) "Push WhatIf changed local Git history."
    $stagedAfterWhatIf = (Invoke-TestGit $repo @("diff", "--cached", "--name-only")).StdOut
    Assert-True ([string]::IsNullOrWhiteSpace($stagedAfterWhatIf)) "Push WhatIf staged files."
    $pushResult = & $pushScript -RepositoryRoot $repo -ManifestPath $manifest -ReportPath $report -StateRoot $pushState -GitExe $gitExe -BatchTargetBytes 1048576 -BatchMaxBytes 2097152 -PushHardLimitBytes 20971520
    Assert-True ($pushResult.UnpushedRows -eq 0) "Push script left synthetic manifest rows unpushed."
    $remoteHead = (Invoke-TestGit $bareRemote @("rev-parse", "refs/heads/master")).StdOut.Trim()
    $localHead = (Invoke-TestGit $repo @("rev-parse", "HEAD")).StdOut.Trim()
    Assert-True ($remoteHead -eq $localHead) "Synthetic remote did not receive the final commit."
    $pushedRows = @(Import-Csv -LiteralPath $manifest | Where-Object { $_.push_status -ne "PUSHED" })
    Assert-True ($pushedRows.Count -eq 0) "Synthetic manifest has non-pushed file rows."

    Write-Output "PASS: synthetic copy, multi-volume archive, resume repair, verify, WhatIf, and batched local Git pushes."
    $testPassed = $true
}
finally {
    if ($testPassed) {
        Remove-Item -LiteralPath $testRoot -Recurse -Force -ErrorAction SilentlyContinue
    }
    else {
        Write-Output "Test artifacts retained at $testRoot"
    }
}
