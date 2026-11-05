[CmdletBinding(SupportsShouldProcess = $true, ConfirmImpact = "Low")]
param(
    [string]$SourceRoot = "X:\ROMS\Nintendo Switch\Pokemon\Pokemon Sword\v1.3.2\f13bc7b678b5c86998ff4e847e180142_NCA\1",
    [string]$DestinationRoot = "E:\Test\SWSH_Unpack\v1.3.2\1",
    [string]$RepositoryRoot = "E:\Test\SWSH_Unpack",
    [string]$ManifestPath = "",
    [string]$ReportPath = "",
    [string]$StateRoot = "E:\Test\SWSH_Unpack-Work\v1.3.2",
    [string]$SevenZipPath = "D:\Tool\7-Zip\7z.exe",
    [string]$SourceInventoryPath = "",
    [string]$SourceNcaRoot = "f13bc7b678b5c86998ff4e847e180142_NCA",
    [long]$ThresholdBytes = 94371840,
    [string]$VolumeSize = "90m",
    [ValidateRange(1, 32)][int]$HashThreads = 8
)
Set-StrictMode -Version Latest
$ErrorActionPreference = "Stop"
. (Join-Path $PSScriptRoot "SWSH-Romfs.Common.ps1")
if ([string]::IsNullOrWhiteSpace($ManifestPath)) { $ManifestPath = Join-Path $RepositoryRoot "docs\sword-v1.3.2-archive-manifest.csv" }
if ([string]::IsNullOrWhiteSpace($ReportPath)) { $ReportPath = Join-Path $RepositoryRoot "docs\sword-v1.3.2-archive-report.md" }
if ([string]::IsNullOrWhiteSpace($SourceInventoryPath)) { $SourceInventoryPath = Join-Path $RepositoryRoot "sword_1.3.2_file_inventory_full.csv" }
foreach ($path in @($SourceRoot, $DestinationRoot, $ManifestPath, $SevenZipPath)) {
    if (-not (Test-Path -LiteralPath $path)) { throw "Required path is missing: $path" }
}
if (-not (Test-Path -LiteralPath $ManifestPath -PathType Leaf)) { throw "Archive manifest is missing: $ManifestPath" }
$SourceRoot = [System.IO.Path]::GetFullPath($SourceRoot).TrimEnd("\")
$DestinationRoot = [System.IO.Path]::GetFullPath($DestinationRoot).TrimEnd("\")
$RepositoryRoot = [System.IO.Path]::GetFullPath($RepositoryRoot).TrimEnd("\")
$StateRoot = [System.IO.Path]::GetFullPath($StateRoot).TrimEnd("\")
$logDirectory = Join-Path $StateRoot "logs"
$temporaryRoot = Join-Path $StateRoot "temp"
New-Item -ItemType Directory -Path $logDirectory, $temporaryRoot -Force | Out-Null

$manifestRows = @(Import-Csv -LiteralPath $ManifestPath)
$sourceFiles = @(Get-ChildItem -LiteralPath $SourceRoot -File -Recurse -Force -ErrorAction Stop | Sort-Object FullName)
$rowsBySubpath = @{}
foreach ($row in $manifestRows) {
    $subpath = ([string]$row.source_subpath).Replace("/", "\")
    if ($rowsBySubpath.ContainsKey($subpath)) { throw "Duplicate source path in manifest: $subpath" }
    $rowsBySubpath[$subpath] = $row
}
$errors = New-Object System.Collections.Generic.List[string]
if ($sourceFiles.Count -ne $manifestRows.Count) { $errors.Add("Source/manifest count mismatch: source=$($sourceFiles.Count), manifest=$($manifestRows.Count)") }

$inventoryBySubpath = @{}
if (Test-Path -LiteralPath $SourceInventoryPath -PathType Leaf) {
    $prefix = "$SourceNcaRoot/1/"
    foreach ($row in (Import-Csv -LiteralPath $SourceInventoryPath)) {
        $inventoryPath = ConvertTo-SWSHRelativePath ([string]$row.RelativePath)
        if ($inventoryPath.StartsWith($prefix, [StringComparison]::OrdinalIgnoreCase)) {
            $subpath = $inventoryPath.Substring($prefix.Length).Replace("/", "\")
            $inventoryBySubpath[$subpath] = $row
        }
    }
    if ($inventoryBySubpath.Count -ne $sourceFiles.Count) { $errors.Add("Source/inventory count mismatch.") }
}

$directChecks = New-Object System.Collections.Generic.List[object]
$archiveChecks = New-Object System.Collections.Generic.List[object]
$expectedOutputSet = New-Object "System.Collections.Generic.HashSet[string]" ([System.StringComparer]::OrdinalIgnoreCase)
$sourceSet = New-Object "System.Collections.Generic.HashSet[string]" ([System.StringComparer]::OrdinalIgnoreCase)
foreach ($file in $sourceFiles) {
    $subpath = $file.FullName.Substring($SourceRoot.Length).TrimStart("\")
    $sourceSet.Add($subpath) | Out-Null
    if (-not $rowsBySubpath.ContainsKey($subpath)) { $errors.Add("Source file missing from manifest: $subpath"); continue }
    $row = $rowsBySubpath[$subpath]
    if ([long]$row.original_size -ne [long]$file.Length) { $errors.Add("Source size differs: $($row.relative_path)") }
    if ($inventoryBySubpath.ContainsKey($subpath)) {
        $inventoryRow = $inventoryBySubpath[$subpath]
        if ([long]$inventoryRow.SizeBytes -ne [long]$file.Length) { $errors.Add("Inventory size differs: $($row.relative_path)") }
        if (([string]$inventoryRow.SHA256).ToLowerInvariant() -ne ([string]$row.original_sha256).ToLowerInvariant()) {
            $errors.Add("Manifest SHA-256 differs from inventory: $($row.relative_path)")
        }
    }
    if ($row.verification_status -ne "VERIFIED") { $errors.Add("Manifest status not VERIFIED: $($row.relative_path)") }
    if ($file.Length -le $ThresholdBytes -and $row.processing_mode -ne "COPY") { $errors.Add("Wrong small-file mode: $($row.relative_path)") }
    if ($file.Length -gt $ThresholdBytes -and $row.processing_mode -ne "7Z") { $errors.Add("Wrong large-file mode: $($row.relative_path)") }

    $outputs = @(Get-SWSHManifestOutputPaths $row)
    foreach ($output in $outputs) {
        $normalized = ConvertTo-SWSHRelativePath $output
        $expectedOutputSet.Add($normalized) | Out-Null
        if (-not $normalized.StartsWith("v1.3.2/1/", [StringComparison]::OrdinalIgnoreCase)) { $errors.Add("Output outside target: $normalized") }
    }
    if ($row.processing_mode -eq "COPY") {
        if ($outputs.Count -ne 1) { $errors.Add("Direct copy needs one output: $($row.relative_path)"); continue }
        $directChecks.Add([PSCustomObject]@{
            File = $file
            Row = $row
            OutputPath = Join-Path $RepositoryRoot $outputs[0].Replace("/", "\")
        })
    }
    elseif ($row.processing_mode -eq "7Z") {
        if ($outputs.Count -ne [int]$row.archive_part_count -or $outputs.Count -lt 1) {
            $errors.Add("Archive volume count differs: $($row.relative_path)")
            continue
        }
        $outputDirectory = Join-Path $RepositoryRoot (Split-Path $outputs[0].Replace("/", "\") -Parent)
        $archiveBase = (Split-Path -Leaf $file.FullName) + ".7z"
        $volumes = @(Get-SWSHArchiveVolumes -Directory $outputDirectory -ArchiveBaseName $archiveBase)
        if ($volumes.Count -ne $outputs.Count) { $errors.Add("On-disk volume count differs: $($row.relative_path)"); continue }
        for ($i = 0; $i -lt $volumes.Count; $i++) {
            $suffix = "." + ("{0:D3}" -f ($i + 1))
            if (-not $volumes[$i].Name.EndsWith($suffix, [StringComparison]::OrdinalIgnoreCase)) { $errors.Add("Missing volume sequence: $($row.relative_path)") }
            $volumeLimit = [long]([regex]::Match($VolumeSize, "^(\d+)([kmg])$", [System.Text.RegularExpressions.RegexOptions]::IgnoreCase).Groups[1].Value)
            $unit = [regex]::Match($VolumeSize, "^(\d+)([kmg])$", [System.Text.RegularExpressions.RegexOptions]::IgnoreCase).Groups[2].Value.ToLowerInvariant()
            if (-not $unit) { throw "Unsupported volume size: $VolumeSize" }
            if ($unit -eq "k") { $volumeLimit *= 1KB }
            if ($unit -eq "m") { $volumeLimit *= 1MB }
            if ($unit -eq "g") { $volumeLimit *= 1GB }
            if ([long]$volumes[$i].Length -gt $volumeLimit) { $errors.Add("Volume exceeds ${VolumeSize}: $($volumes[$i].FullName)") }
            $relative = ConvertTo-SWSHRelativePath ($volumes[$i].FullName.Substring($RepositoryRoot.Length).TrimStart("\"))
            if ($relative -ne (ConvertTo-SWSHRelativePath $outputs[$i])) { $errors.Add("Manifest volume path differs: $($row.relative_path)") }
        }
        $archiveChecks.Add([PSCustomObject]@{ File = $file; Row = $row; FirstVolume = $volumes[0].FullName; Volumes = $volumes })
    }
    else { $errors.Add("Unknown mode: $($row.processing_mode)") }
}
foreach ($row in $manifestRows) {
    $subpath = ([string]$row.source_subpath).Replace("/", "\")
    if (-not $sourceSet.Contains($subpath)) { $errors.Add("Manifest source path missing: $($row.relative_path)") }
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
$existingDirect = @($directChecks | Where-Object { Test-Path -LiteralPath $_.OutputPath -PathType Leaf })
$directHashes = [SWSHArchiveFileHasher]::HashFiles([string[]]@($existingDirect | ForEach-Object { $_.OutputPath }), $HashThreads)
foreach ($check in $directChecks) {
    try {
        if (-not (Test-Path -LiteralPath $check.OutputPath -PathType Leaf)) { throw "Direct output missing." }
        if ((Get-Item -LiteralPath $check.OutputPath).Length -ne [long]$check.Row.original_size) { throw "Direct output size differs." }
        if ($directHashes[$check.OutputPath] -ne ([string]$check.Row.original_sha256).ToLowerInvariant()) { throw "Direct output SHA-256 differs." }
        $check.Row.output_size = [string](Get-Item -LiteralPath $check.OutputPath).Length
        $check.Row.verification_status = "VERIFIED"
    }
    catch {
        $check.Row.verification_status = "FAILED"
        $errors.Add("$($check.Row.relative_path): $($_.Exception.Message)")
    }
}
foreach ($check in $archiveChecks) {
    try {
        $roundTrip = Test-SWSHArchiveRoundTrip -SevenZipPath $SevenZipPath -FirstVolumePath $check.FirstVolume -ExpectedFileName $check.File.Name -ExpectedSize ([long]$check.Row.original_size) -ExpectedSha256 ([string]$check.Row.original_sha256).ToLowerInvariant() -TemporaryRoot $temporaryRoot -LogRoot $logDirectory
        if ($roundTrip.PartCount -ne [int]$check.Row.archive_part_count) { throw "Archive part count differs from manifest." }
        if ($roundTrip.OutputSize -ne [long]$check.Row.output_size) { throw "Archive output size differs from manifest." }
        $check.Row.verification_status = "VERIFIED"
    }
    catch {
        $check.Row.verification_status = "FAILED"
        $errors.Add("$($check.Row.relative_path): $($_.Exception.Message)")
    }
}

$actualOutputPaths = @(Get-ChildItem -LiteralPath $DestinationRoot -File -Recurse -Force -ErrorAction SilentlyContinue)
$extraOutputs = New-Object System.Collections.Generic.List[string]
foreach ($file in $actualOutputPaths) {
    $relative = ConvertTo-SWSHRelativePath ($file.FullName.Substring($RepositoryRoot.Length).TrimStart("\"))
    if (-not $expectedOutputSet.Contains($relative)) { $extraOutputs.Add($relative) }
}
foreach ($expected in $expectedOutputSet) {
    if (-not (Test-Path -LiteralPath (Join-Path $RepositoryRoot $expected.Replace("/", "\")) -PathType Leaf)) {
        $errors.Add("Expected output missing: $expected")
    }
}
foreach ($extra in $extraOutputs) { $errors.Add("Unexpected output: $extra") }

$verifiedCount = @($manifestRows | Where-Object { $_.verification_status -eq "VERIFIED" }).Count
$failedCount = @($manifestRows | Where-Object { $_.verification_status -eq "FAILED" }).Count
$directCount = @($manifestRows | Where-Object { $_.processing_mode -eq "COPY" }).Count
$archiveCount = @($manifestRows | Where-Object { $_.processing_mode -eq "7Z" }).Count
$totalSourceBytes = [long](($manifestRows | Measure-Object -Property original_size -Sum).Sum)
$totalOutputBytes = [long](($manifestRows | Measure-Object -Property output_size -Sum).Sum)
$totalVolumes = [int](($manifestRows | Measure-Object -Property archive_part_count -Sum).Sum)
$status = if ($errors.Count -eq 0 -and $actualOutputPaths.Count -eq $expectedOutputSet.Count) { "PASS (local verification)" } else { "PARTIAL" }
$report = @(
    "# Pokemon Sword v1.3.2 ROMFS archive report",
    "",
    "- Source: $SourceRoot",
    "- Destination: $DestinationRoot",
    "- Git repository: $RepositoryRoot",
    "",
    "## Results",
    "",
    "- Original files: $($sourceFiles.Count)",
    "- Original total size: $totalSourceBytes bytes",
    "- Files copied directly: $directCount",
    "- Files archived: $archiveCount",
    "- Total 7-Zip volumes: $totalVolumes",
    "- Final output size: $totalOutputBytes bytes",
    "- Verified files: $verifiedCount",
    "- Failed files: $failedCount",
    "- Unprocessed files: $($sourceFiles.Count - $verifiedCount - $failedCount)",
    "- Extra output files: $($extraOutputs.Count)",
    "- Git batches: pending",
    "- Successful commits: pending",
    "- Successful pushes: pending",
    "- Unpushed batches: pending",
    "",
    "Final status: $status",
    "",
    "## Verification",
    "",
    "- Source paths and sizes reconciled against the original extraction inventory.",
    "- Direct output SHA-256 values checked against the inventory.",
    "- Each 7-Zip archive tested and extracted; restored size and SHA-256 compared.",
    "- Missing and extra target files checked."
)
if ($errors.Count -gt 0) {
    $report += @("", "## Errors", "")
    foreach ($errorLine in $errors) { $report += "- $errorLine" }
}
if ($PSCmdlet.ShouldProcess($ManifestPath, "Write verification statuses and report")) {
    Write-SWSHAtomicCsv -Path $ManifestPath -Rows $manifestRows
    Write-SWSHAtomicText -Path $ReportPath -Text ($report -join [Environment]::NewLine)
}
[PSCustomObject]@{
    SourceFiles = $sourceFiles.Count
    VerifiedFiles = $verifiedCount
    FailedFiles = $failedCount
    ExtraFiles = $extraOutputs.Count
    OriginalBytes = $totalSourceBytes
    OutputBytes = $totalOutputBytes
    TotalVolumes = $totalVolumes
    ReportPath = $ReportPath
    FinalStatus = $status
}
if ($errors.Count -gt 0) { throw "$($errors.Count) verification issue(s). See $ReportPath" }
