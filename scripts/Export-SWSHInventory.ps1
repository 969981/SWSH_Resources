# Safe local wrapper: scans but never alters source files.
[CmdletBinding()]
param(
    [Parameter(Mandatory = $true)]
    [string] $Root,
    [string] $Output = "artifacts\swsh_inventory.csv",
    [switch] $SkipHash
)
$ErrorActionPreference = "Stop"
$tool = Join-Path $PSScriptRoot "export_inventory.py"
$python = Get-Command python -ErrorAction SilentlyContinue
if (-not $python) {
    throw "Python 3 is required. Check: python --version"
}
$arguments = @($tool, "--root", $Root, "--out", $Output)
if ($SkipHash) {
    $arguments += "--skip-hash"
}
& $python.Source @arguments
if ($LASTEXITCODE -ne 0) {
    throw "Inventory export failed with exit code $LASTEXITCODE"
}
