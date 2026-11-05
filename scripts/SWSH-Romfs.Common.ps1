function Get-SWSHTextSha256([string]$Text) {
    $bytes = [System.Text.Encoding]::UTF8.GetBytes($Text)
    $sha = [System.Security.Cryptography.SHA256]::Create()
    try {
        ([System.BitConverter]::ToString($sha.ComputeHash($bytes))).Replace("-", "").ToLowerInvariant()
    }
    finally {
        $sha.Dispose()
    }
}

function Get-SWSHFileSha256([string]$Path) {
    (Get-FileHash -LiteralPath $Path -Algorithm SHA256 -ErrorAction Stop).Hash.ToLowerInvariant()
}

function ConvertTo-SWSHRelativePath([string]$Path) {
    $Path.Replace("\", "/").TrimStart("/")
}

function Get-SWSHManifestOutputPaths($Row) {
    if ([string]::IsNullOrWhiteSpace([string]$Row.output_relative_paths)) { return @() }
    @(([string]$Row.output_relative_paths).Split("|") | Where-Object { -not [string]::IsNullOrWhiteSpace($_) })
}

function Get-SWSHArchiveVolumes([string]$Directory, [string]$ArchiveBaseName) {
    if (-not (Test-Path -LiteralPath $Directory -PathType Container)) { return @() }
    $pattern = [regex]::Escape($ArchiveBaseName) + "\.(\d+)$"
    @(Get-ChildItem -LiteralPath $Directory -File -ErrorAction SilentlyContinue |
        Where-Object { $_.Name -match $pattern } |
        Sort-Object { [int]([regex]::Match($_.Name, "\.(\d+)$").Groups[1].Value) })
}

function Write-SWSHAtomicText([string]$Path, [string]$Text) {
    $directory = Split-Path -Parent $Path
    if (-not (Test-Path -LiteralPath $directory -PathType Container)) {
        New-Item -ItemType Directory -Path $directory -Force | Out-Null
    }
    $temporaryPath = "$Path.$([guid]::NewGuid().ToString('N')).tmp"
    $encoding = New-Object System.Text.UTF8Encoding($false)
    try {
        [System.IO.File]::WriteAllText($temporaryPath, $Text, $encoding)
        if (Test-Path -LiteralPath $Path -PathType Leaf) {
            $backupPath = "$Path.$([guid]::NewGuid().ToString('N')).bak"
            [System.IO.File]::Replace($temporaryPath, $Path, $backupPath)
            Remove-Item -LiteralPath $backupPath -Force -ErrorAction SilentlyContinue
        }
        else {
            [System.IO.File]::Move($temporaryPath, $Path)
        }
    }
    finally {
        if (Test-Path -LiteralPath $temporaryPath -PathType Leaf) {
            Remove-Item -LiteralPath $temporaryPath -Force -ErrorAction SilentlyContinue
        }
    }
}

function Write-SWSHAtomicJson([string]$Path, $Value) {
    $json = ConvertTo-Json -InputObject $Value -Depth 8
    Write-SWSHAtomicText -Path $Path -Text $json
}

function Write-SWSHAtomicCsv([string]$Path, [object[]]$Rows) {
    $lines = @($Rows | ConvertTo-Csv -NoTypeInformation)
    $text = ($lines -join "`r`n") + "`r`n"
    Write-SWSHAtomicText -Path $Path -Text $text
}

function ConvertTo-SWSHProcessArgument([string]$Value) {
    if ($Value -match '[\s"]') {
        return '"' + $Value.Replace('"', '\"') + '"'
    }
    $Value
}

function Start-SWSHNativeProcess(
    [string]$FilePath,
    [string[]]$Arguments,
    [string]$WorkingDirectory,
    [string]$StdOutPath,
    [string]$StdErrPath,
    [AllowNull()][string]$StandardInputText = $null
) {
    foreach ($logPath in @($StdOutPath, $StdErrPath)) {
        $logDirectory = Split-Path -Parent $logPath
        if (-not (Test-Path -LiteralPath $logDirectory -PathType Container)) {
            New-Item -ItemType Directory -Path $logDirectory -Force | Out-Null
        }
        Remove-Item -LiteralPath $logPath -Force -ErrorAction SilentlyContinue
    }
    $argumentLine = (($Arguments | ForEach-Object { ConvertTo-SWSHProcessArgument ([string]$_) }) -join " ")
    $startInfo = New-Object System.Diagnostics.ProcessStartInfo
    $startInfo.FileName = $FilePath
    $startInfo.Arguments = $argumentLine
    $startInfo.WorkingDirectory = $WorkingDirectory
    $startInfo.UseShellExecute = $false
    $startInfo.CreateNoWindow = $true
    $startInfo.RedirectStandardOutput = $true
    $startInfo.RedirectStandardError = $true
    $startInfo.RedirectStandardInput = $null -ne $StandardInputText
    $process = New-Object System.Diagnostics.Process
    $process.StartInfo = $startInfo
    if (-not $process.Start()) { throw "Could not start process: $FilePath" }
    $stdOutTask = $process.StandardOutput.ReadToEndAsync()
    $stdErrTask = $process.StandardError.ReadToEndAsync()
    if ($null -ne $StandardInputText) {
        $process.StandardInput.Write($StandardInputText)
        $process.StandardInput.Close()
    }
    [PSCustomObject]@{
        Process = $process
        StdOutTask = $stdOutTask
        StdErrTask = $stdErrTask
        StdOutPath = $StdOutPath
        StdErrPath = $StdErrPath
        Arguments = $argumentLine
    }
}

function Complete-SWSHNativeProcess($Started) {
    $Started.Process.WaitForExit()
    $stdout = [string]$Started.StdOutTask.Result
    $stderr = [string]$Started.StdErrTask.Result
    [System.IO.File]::WriteAllText($Started.StdOutPath, $stdout, [System.Text.Encoding]::UTF8)
    [System.IO.File]::WriteAllText($Started.StdErrPath, $stderr, [System.Text.Encoding]::UTF8)
    [PSCustomObject]@{
        ExitCode = [int]$Started.Process.ExitCode
        StdOut = $stdout
        StdErr = $stderr
        Arguments = $Started.Arguments
    }
}

function Invoke-SWSHNativeProcess(
    [string]$FilePath,
    [string[]]$Arguments,
    [string]$WorkingDirectory,
    [string]$LogRoot,
    [string]$LogName,
    [AllowNull()][string]$StandardInputText = $null
) {
    $safeName = $LogName -replace '[^A-Za-z0-9_.-]', "_"
    $started = Start-SWSHNativeProcess -FilePath $FilePath -Arguments $Arguments -WorkingDirectory $WorkingDirectory -StdOutPath (Join-Path $LogRoot "$safeName.out.log") -StdErrPath (Join-Path $LogRoot "$safeName.err.log") -StandardInputText $StandardInputText
    Complete-SWSHNativeProcess -Started $started
}

function Test-SWSHArchiveRoundTrip(
    [string]$SevenZipPath,
    [string]$FirstVolumePath,
    [string]$ExpectedFileName,
    [long]$ExpectedSize,
    [string]$ExpectedSha256,
    [string]$TemporaryRoot,
    [string]$LogRoot
) {
    if (-not (Test-Path -LiteralPath $FirstVolumePath -PathType Leaf)) {
        throw "Archive first volume is missing: $FirstVolumePath"
    }
    $archiveDirectory = Split-Path -Parent $FirstVolumePath
    $archiveBaseName = [regex]::Replace((Split-Path -Leaf $FirstVolumePath), "\.\d+$", "")
    $volumes = @(Get-SWSHArchiveVolumes -Directory $archiveDirectory -ArchiveBaseName $archiveBaseName)
    if ($volumes.Count -eq 0) { throw "No archive volumes found for $FirstVolumePath" }
    for ($index = 0; $index -lt $volumes.Count; $index++) {
        $expectedSuffix = "." + ("{0:D3}" -f ($index + 1))
        if (-not $volumes[$index].Name.EndsWith($expectedSuffix, [StringComparison]::OrdinalIgnoreCase)) {
            throw "Archive volume sequence has a gap before $($volumes[$index].Name)"
        }
    }

    $testLogName = "test-" + [guid]::NewGuid().ToString("N")
    $test = Invoke-SWSHNativeProcess -FilePath $SevenZipPath -Arguments @("t", $FirstVolumePath) -WorkingDirectory $archiveDirectory -LogRoot $LogRoot -LogName $testLogName
    if ($test.ExitCode -ne 0) {
        throw "7-Zip test failed for $FirstVolumePath (exit $($test.ExitCode)). $($test.StdErr)"
    }

    $extractPath = Join-Path $TemporaryRoot ("verify-" + [guid]::NewGuid().ToString("N"))
    New-Item -ItemType Directory -Path $extractPath -Force | Out-Null
    try {
        $extractLogName = "extract-" + [guid]::NewGuid().ToString("N")
        $extract = Invoke-SWSHNativeProcess -FilePath $SevenZipPath -Arguments @("x", "-y", "-o$extractPath", $FirstVolumePath) -WorkingDirectory $archiveDirectory -LogRoot $LogRoot -LogName $extractLogName
        if ($extract.ExitCode -ne 0) {
            throw "7-Zip extraction failed for $FirstVolumePath (exit $($extract.ExitCode)). $($extract.StdErr)"
        }
        $restoredFiles = @(Get-ChildItem -LiteralPath $extractPath -File -Recurse -Force)
        if ($restoredFiles.Count -ne 1) {
            throw "Archive should restore exactly one file; restored $($restoredFiles.Count) files."
        }
        if ($restoredFiles[0].Name -cne $ExpectedFileName) {
            throw "Archive restored '$($restoredFiles[0].Name)' instead of '$ExpectedFileName'."
        }
        if ($restoredFiles[0].Length -ne $ExpectedSize) {
            throw "Restored size mismatch for $ExpectedFileName."
        }
        $restoredHash = Get-SWSHFileSha256 -Path $restoredFiles[0].FullName
        if ($restoredHash -ne $ExpectedSha256) {
            throw "Restored SHA-256 mismatch for $ExpectedFileName."
        }
        [PSCustomObject]@{
            PartCount = $volumes.Count
            OutputSize = [long](($volumes | Measure-Object -Property Length -Sum).Sum)
            RestoredSize = [long]$restoredFiles[0].Length
            RestoredSha256 = $restoredHash
            VolumePaths = @($volumes | ForEach-Object { $_.FullName })
        }
    }
    finally {
        Remove-Item -LiteralPath $extractPath -Recurse -Force -ErrorAction SilentlyContinue
    }
}
