#!/usr/bin/env python3
"""Build auditable SWSH 1.3.2 archive-aware workload shards (planning only).

Does not unpack proprietary data or pretend that unrecognized files were decoded.
"""
from __future__ import annotations
import argparse
import csv
import heapq
import json
from collections import Counter
from pathlib import Path, PurePosixPath

SOURCE_NCA = "f13bc7b678b5c86998ff4e847e180142_NCA"
SOURCE_PREFIX = f"{SOURCE_NCA}/1/"


def valid_subpath(value: str) -> str:
    path = value.replace("\\", "/")
    parts = PurePosixPath(path).parts
    if not path or path.startswith("/") or any(part in (".", "..", "") for part in parts) or ":" in path or "//" in path:
        raise ValueError(f"Unsafe input path: {value!r}")
    return path


def load_inventory(path: Path, nca_root: str) -> dict[str, dict]:
    prefix = f"{nca_root}/1/"
    result: dict[str, dict] = {}
    with path.open(newline="", encoding="utf-8-sig") as stream:
        for line_no, row in enumerate(csv.DictReader(stream), 2):
            raw = row.get("RelativePath", "").replace("\\", "/")
            if not raw.startswith(prefix):
                continue
            subpath = valid_subpath(raw[len(prefix):])
            if subpath in result:
                raise ValueError(f"Duplicate inventory path {subpath!r} line {line_no}")
            size = int(row["SizeBytes"])
            sha = (row.get("SHA256") or "").lower()
            if size < 0 or len(sha) != 64 or any(c not in "0123456789abcdef" for c in sha):
                raise ValueError(f"Invalid size/sha for {subpath!r}")
            result[subpath] = {
                "source_id": raw, "subpath": subpath, "size_bytes": size,
                "sha256": sha, "extension": row.get("Extension") or Path(subpath).suffix,
            }
    if not result:
        raise ValueError("No RomFS records were found for the requested NCA root")
    return result


def load_archives(path: Path, inventory: dict[str, dict]) -> None:
    seen: set[str] = set()
    with path.open(newline="", encoding="utf-8-sig") as stream:
        for line_no, row in enumerate(csv.DictReader(stream), 2):
            subpath = valid_subpath(row.get("source_subpath", ""))
            if subpath in seen or subpath not in inventory:
                raise ValueError(f"Duplicate/unlisted archive path at line {line_no}: {subpath}")
            seen.add(subpath)
            source = inventory[subpath]
            expected_sha = (row.get("original_sha256") or "").lower()
            expected_size = int(row["original_size"])
            if expected_size != source["size_bytes"] or expected_sha != source["sha256"]:
                raise ValueError(f"Archive manifest differs from inventory: {subpath}")
            mode = row.get("processing_mode")
            outputs = [valid_subpath(p) for p in row.get("output_relative_paths", "").split("|") if p]
            count = int(row.get("archive_part_count") or 0)
            if mode not in ("COPY", "7Z") or len(outputs) != (1 if mode == "COPY" else count) or not outputs:
                raise ValueError(f"Bad mode or volume count: {subpath}")
            prefix = f"v1.3.2/1/{subpath}"
            if mode == "COPY":
                if outputs != [prefix]:
                    raise ValueError(f"Unexpected copy path: {subpath}")
            else:
                expected = [f"{prefix}.7z.{i:03d}" for i in range(1, count + 1)]
                if outputs != expected:
                    raise ValueError(f"Non-contiguous/unexpected volumes: {subpath}")
            source.update({"mode": mode, "source_files": outputs,
                           "archive_parts": count, "verification_status": row.get("verification_status")})
    missing = set(inventory) - seen
    if missing:
        raise ValueError(f"Archive manifest missing {len(missing)} inventory rows; first={min(missing)}")


def assign_shards(items: dict[str, dict], shards: int) -> list[list[dict]]:
    if shards < 1 or shards > 256:
        raise ValueError("shards must be in [1, 256]")
    buckets: list[list[dict]] = [[] for _ in range(shards)]
    # Factor in fixed per-file overhead. A split archive has extra restoration cost.
    def work(item: dict) -> int:
        return max(item["size_bytes"], 1024 * 1024) * (3 if item["mode"] == "7Z" else 1)
    queue = [(0, i) for i in range(shards)]
    heapq.heapify(queue)
    for item in sorted(items.values(), key=lambda x: (-work(x), x["subpath"])):
        used, idx = heapq.heappop(queue)
        buckets[idx].append(item)
        heapq.heappush(queue, (used + work(item), idx))
    return buckets


def generate(inventory: Path, manifest: Path, out: Path, shards: int, nca_root: str, expected_count: int) -> dict:
    records = load_inventory(inventory, nca_root)
    if expected_count and len(records) != expected_count:
        raise ValueError(f"Inventory count {len(records)} != expected {expected_count}")
    load_archives(manifest, records)
    buckets = assign_shards(records, shards)
    out.mkdir(parents=True, exist_ok=True)
    matrix = {"shard": list(range(shards))}
    (out / "matrix.json").write_text(json.dumps(matrix, separators=(",", ":")) + "\n", encoding="utf-8")
    summary: dict = {"source_count": len(records), "shards": shards,
                     "mode_counts": dict(Counter(item["mode"] for item in records.values())),
                     "total_bytes": sum(item["size_bytes"] for item in records.values()),
                     "archive_volumes": sum(item["archive_parts"] for item in records.values()),
                     "shard_stats": []}
    for idx, items in enumerate(buckets):
        items.sort(key=lambda x: x["subpath"])
        name = f"shard-{idx:03d}"
        with (out / f"{name}.jsonl").open("w", encoding="utf-8") as stream:
            for item in items:
                stream.write(json.dumps(item, ensure_ascii=False, separators=(",", ":")) + "\n")
        paths = sorted({p for item in items for p in item["source_files"]})
        # Git sparse-checkout --no-cone input. Source path patterns are anchored at repo root.
        (out / f"{name}.sparse").write_text("\n".join("/" + p for p in paths) + "\n", encoding="utf-8")
        summary["shard_stats"].append({"shard": idx, "files": len(items),
            "bytes": sum(item["size_bytes"] for item in items), "checkout_paths": len(paths)})
    (out / "summary.json").write_text(json.dumps(summary, indent=2, ensure_ascii=False) + "\n", encoding="utf-8")
    return summary


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--inventory", type=Path, default=Path("sword_1.3.2_file_inventory_full.csv"))
    parser.add_argument("--archive-manifest", type=Path, default=Path("docs/sword-v1.3.2-archive-manifest.csv"))
    parser.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-unpack-plan"))
    parser.add_argument("--shards", type=int, default=16)
    parser.add_argument("--nca-root", default=SOURCE_NCA)
    parser.add_argument("--expected-count", type=int, default=50494)
    args = parser.parse_args()
    result = generate(args.inventory, args.archive_manifest, args.out_dir, args.shards, args.nca_root, args.expected_count)
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
