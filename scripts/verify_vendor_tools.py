#!/usr/bin/env python3
"""Check Git tree identity of the pinned SWSH vendor snapshots (not game compatibility)."""
from __future__ import annotations

import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / "tools" / "upstream.json"
EXPECTED_NAMES = {"gftool", "PokeDocs", "pkNX", "Switch-Toolbox", "SCVI_Extract", "nx2elf"}


def git(*args: str) -> str:
    result = subprocess.run(
        ["git", "-C", str(ROOT), *args], check=True, capture_output=True, text=True
    )
    return result.stdout.strip()


def main() -> int:
    if not MANIFEST.is_file():
        print("ERROR: tools/upstream.json not found; import has not completed", file=sys.stderr)
        return 2
    data = json.loads(MANIFEST.read_text(encoding="utf-8"))
    entries = data.get("tools", [])
    names = {entry.get("name") for entry in entries}
    if names != EXPECTED_NAMES or len(entries) != len(EXPECTED_NAMES):
        print(f"ERROR: unexpected tool set {sorted(str(n) for n in names)}", file=sys.stderr)
        return 2

    failures = 0
    for entry in entries:
        name = entry["name"]
        expected = entry["sourceTreeSha"]
        source_path = f"tools/{name}"
        if not (ROOT / source_path).is_dir():
            print(f"FAIL {name}: missing checked-out directory")
            failures += 1
            continue
        try:
            actual = git("rev-parse", f"HEAD:{source_path}")
            mode_line = git("ls-tree", "HEAD", source_path)
            mode = mode_line.split()[0]
        except subprocess.CalledProcessError as exc:
            print(f"FAIL {name}: git tree lookup failed: {exc}")
            failures += 1
            continue
        if actual != expected or mode != "040000":
            print(f"FAIL {name}: tree={actual} expected={expected}, mode={mode}")
            failures += 1
        else:
            print(f"PASS {name}: {actual}")

    links = [
        line for line in git("ls-tree", "-r", "HEAD", "tools").splitlines()
        if line.startswith("160000 ")
    ]
    if links:
        print(f"FAIL: {len(links)} unexpected vendor gitlinks")
        failures += 1

    print(f"source={data.get('sourceRepository')}@{data.get('sourceCommit')}")
    if failures:
        print(f"FAILED: {failures} issue(s)")
        return 1
    print("PASS: all six tool trees match the pinned snapshot (runtime behavior untested)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
