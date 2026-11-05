#!/usr/bin/env python3
"""Compare Sword/Shield 15-column inventories by normalized path and SHA-256."""
from __future__ import annotations

import argparse
import csv
import json
import re
from collections import Counter
from pathlib import Path

REQUIRED = {"RelativePath", "Region", "SizeBytes", "SHA256"}
OUTPUT_FIELDS = [
    "NormalizedPath", "Region", "Status",
    "SwordOriginalPath", "ShieldOriginalPath",
    "SwordSizeBytes", "ShieldSizeBytes", "SwordSHA256", "ShieldSHA256",
]


def normalize_path(path: str) -> str:
    """Remove edition-specific NCA root; keep internal 0/ or 1/ original path."""
    cleaned = path.strip().replace("\\", "/")
    match = re.search(r"(?:^|/)([01])/(.+)$", cleaned)
    if not match:
        raise ValueError(f"No NCA 0/ or 1/ segment in RelativePath: {path!r}")
    return f"{match.group(1)}/{match.group(2)}"


def load_inventory(path: Path) -> dict[str, dict[str, str]]:
    rows: dict[str, dict[str, str]] = {}
    with path.open("r", encoding="utf-8-sig", newline="") as stream:
        reader = csv.DictReader(stream)
        missing = REQUIRED.difference(reader.fieldnames or [])
        if missing:
            raise ValueError(f"{path}: missing columns: {sorted(missing)}")
        for lineno, row in enumerate(reader, 2):
            if not row["RelativePath"]:
                raise ValueError(f"{path}:{lineno}: empty RelativePath")
            normalized = normalize_path(row["RelativePath"])
            if normalized in rows:
                raise ValueError(f"{path}:{lineno}: duplicate normalized path: {normalized}")
            rows[normalized] = row
    return rows


def compare(sword: dict[str, dict[str, str]],
            shield: dict[str, dict[str, str]]) -> list[dict[str, str]]:
    results = []
    for path in sorted(sword.keys() | shield.keys()):
        left, right = sword.get(path), shield.get(path)
        ls = (left or {}).get("SHA256", "").strip().upper()
        rs = (right or {}).get("SHA256", "").strip().upper()
        lb = (left or {}).get("SizeBytes", "").strip()
        rb = (right or {}).get("SizeBytes", "").strip()
        if not left:
            status = "ONLY_SHIELD"
        elif not right:
            status = "ONLY_SWORD"
        elif ls and rs:
            status = "IDENTICAL" if ls == rs else "CONTENT_DIFFERENT"
        elif lb and rb and lb != rb:
            status = "SIZE_DIFFERENT_HASH_MISSING"
        else:
            status = "HASH_MISSING"
        results.append({
            "NormalizedPath": path,
            "Region": (left or right or {}).get("Region", ""),
            "Status": status,
            "SwordOriginalPath": (left or {}).get("RelativePath", ""),
            "ShieldOriginalPath": (right or {}).get("RelativePath", ""),
            "SwordSizeBytes": lb,
            "ShieldSizeBytes": rb,
            "SwordSHA256": ls,
            "ShieldSHA256": rs,
        })
    return results


def write_csv(path: Path, rows: list[dict[str, str]]) -> None:
    with path.open("w", newline="", encoding="utf-8-sig") as handle:
        writer = csv.DictWriter(handle, fieldnames=OUTPUT_FIELDS)
        writer.writeheader()
        writer.writerows(rows)


def export_comparison(sword_path: Path, shield_path: Path, output_dir: Path
                      ) -> dict[str, object]:
    sword = load_inventory(sword_path)
    shield = load_inventory(shield_path)
    results = compare(sword, shield)
    output_dir.mkdir(parents=True, exist_ok=True)
    write_csv(output_dir / "comparison_all.csv", results)
    write_csv(output_dir / "comparison_differences.csv",
              [r for r in results if r["Status"] != "IDENTICAL"])
    counts = dict(sorted(Counter(r["Status"] for r in results).items()))
    by_region = {
        region: dict(sorted(Counter(r["Status"] for r in results
                                    if r["NormalizedPath"].startswith(prefix)).items()))
        for region, prefix in (("ExeFS", "0/"), ("RomFS", "1/"))
    }
    summary: dict[str, object] = {
        "sword_rows": len(sword),
        "shield_rows": len(shield),
        "normalized_paths": len(results),
        "status_counts": counts,
        "by_region": by_region,
        "note": "Only matching nonempty SHA-256 is IDENTICAL; no hash is not proof.",
    }
    (output_dir / "summary.json").write_text(
        json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    return summary


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--sword", type=Path, required=True)
    p.add_argument("--shield", type=Path, required=True)
    p.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-compare"))
    p.add_argument("--fail-on-unverified", action="store_true",
                   help="Return nonzero if any row lacks both SHA-256 hashes")
    args = p.parse_args()
    try:
        summary = export_comparison(args.sword, args.shield, args.out_dir)
    except (OSError, ValueError, csv.Error) as exc:
        p.error(str(exc))
    print(json.dumps(summary, ensure_ascii=False, indent=2))
    return int(args.fail_on_unverified and any(
        status in summary["status_counts"] for status in
        ("HASH_MISSING", "SIZE_DIFFERENT_HASH_MISSING")))


if __name__ == "__main__":
    raise SystemExit(main())
