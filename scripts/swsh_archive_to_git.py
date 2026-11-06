#!/usr/bin/env python3
"""Persist one audited SWSH derived Actions artifact under Git Unpack/.

Run from a sparse master checkout. Every input is verified against its
per-file JSONL before publishing. No missing/unverified format is invented.
Large files are stored as <=90 MiB 7z volumes; pushes are budgeted <2 GiB.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
import shutil
import subprocess
import tempfile
import time
from pathlib import Path, PurePosixPath

MIB = 1024 * 1024
VOLUME_BYTES = 90 * MIB
DEFAULT_BATCH_BYTES = 650 * MIB
DEST_ROOT = Path("Unpack/v1.3.2")


def safe_rel(value: str) -> Path:
    if not isinstance(value, str) or not value or "\\" in value or value.startswith("/") or ":" in value:
        raise ValueError(f"Unsafe path: {value!r}")
    parts = value.split("/")
    if any(part in ("", ".", "..") for part in parts) or "\x00" in value:
        raise ValueError(f"Unsafe path: {value!r}")
    return Path(*parts)


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(4 * MIB), b""):
            h.update(block)
    return h.hexdigest()


def call(args: list[str], **kwargs) -> subprocess.CompletedProcess:
    return subprocess.run(args, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                          check=True, **kwargs)


def publish_target(rel: str) -> Path:
    name = safe_rel(rel)
    # Actual GFPack / SARC members are extracted native binary bytes.
    # Text, tables and manifests are parsed representations.
    top = "extracted" if ".files" in name.parts[:-1] or any(
        component.endswith(".files") for component in name.parts[:-1]) else "parsed"
    return DEST_ROOT / top / name


def split_large(source: Path, destination: Path, state_dir: Path, sevenzip: str) -> list[Path]:
    with tempfile.TemporaryDirectory(dir=state_dir) as tmp:
        archive = Path(tmp) / (destination.name + ".7z")
        call([sevenzip, "a", "-t7z", "-mx=0", "-bd", "-y", "-mtc=off", "-mtm=off",
              "-mta=off", "-v90m", str(archive), source.name], cwd=source.parent, timeout=1800)
        parts = sorted(Path(tmp).glob(archive.name + ".*"))
        if not parts or any(not p.name.endswith(f".{i:03d}") for i, p in enumerate(parts, 1)):
            raise RuntimeError(f"Missing or nonconsecutive 7z volumes for {source}")
        if any(p.stat().st_size > VOLUME_BYTES for p in parts):
            raise RuntimeError(f"7z volumes larger than 90 MiB for {source}")
        call([sevenzip, "t", str(parts[0])], cwd=source.parent, timeout=1800)
        destination.parent.mkdir(parents=True, exist_ok=True)
        published = []
        for part in parts:
            target = destination.with_name(destination.name + ".7z." + part.name.rsplit(".", 1)[-1])
            os.replace(part, target)
            published.append(target)
        return published


def plan_batches(paths: list[Path], budget: int) -> list[list[Path]]:
    if budget <= VOLUME_BYTES:
        raise ValueError("Batch budget must exceed 90 MiB")
    batches: list[list[Path]] = []
    current: list[Path] = []
    used = 0
    for path in sorted(set(paths), key=lambda p: p.as_posix()):
        length = path.stat().st_size
        if length > 100 * MIB:
            raise ValueError(f"GitHub hard file-size limit exceeded: {path}: {length}")
        if current and used + length > budget:
            batches.append(current)
            current, used = [], 0
        current.append(path)
        used += length
    if current:
        batches.append(current)
    return batches


def persist_one_shard(args: argparse.Namespace) -> tuple[list[Path], dict]:
    repo = args.repo.resolve()
    state = args.state.resolve()
    root = args.incoming.resolve() / f"shard-{args.shard:03d}"
    if not root.is_dir():
        raise FileNotFoundError(f"Artifact must contain {root}")
    state.mkdir(parents=True, exist_ok=True)
    report = root / "per-file.jsonl"
    summary = root / "summary.json"
    if not report.is_file() or not summary.is_file():
        raise RuntimeError("Missing audit JSONL/summary from derived artifact")
    rows = [json.loads(line) for line in report.read_text(encoding="utf-8").splitlines() if line]
    if not rows:
        raise RuntimeError("Empty source processing report")
    source_names = set()
    outputs = {}
    status_counts = {}
    for row in rows:
        source = str(safe_rel(row["Path"])).replace(os.sep, "/")
        if source in source_names:
            raise ValueError(f"Duplicate source audit row: {source}")
        source_names.add(source)
        status = row["Status"]
        status_counts[status] = status_counts.get(status, 0) + 1
        if status not in ("PARSED", "UNSUPPORTED_FORMAT"):
            raise RuntimeError(f"Non-publishable source status {status}: {source}")
        for output in row["Outputs"]:
            rel = output["Path"]
            safe_rel(rel)
            if rel in outputs:
                raise RuntimeError(f"Two output records for {rel}")
            outputs[rel] = output
    declared = json.loads(summary.read_text(encoding="utf-8"))
    if declared.get("expected") != len(rows) or declared.get("reported") != len(rows):
        raise RuntimeError("Shard source audit count mismatch")
    if declared.get("status") != status_counts:
        raise RuntimeError("Shard status counts disagree")
    actual = {p.relative_to(root).as_posix() for p in root.rglob("*") if p.is_file()}
    expected = set(outputs) | {"per-file.jsonl", "summary.json"}
    if actual != expected:
        raise RuntimeError(f"Artifact inventory mismatch: missing={list(expected-actual)[:3]} "
                           f"unexpected={list(actual-expected)[:3]}")

    published: list[Path] = []
    manifest: list[dict] = []
    direct = split = 0
    for rel in sorted(outputs):
        item = outputs[rel]
        source = root / safe_rel(rel)
        actual_bytes = source.stat().st_size
        if actual_bytes != item["Bytes"] or sha256(source) != item["Sha256"]:
            raise RuntimeError(f"Artifact content SHA-256 mismatch: {rel}")
        destination_rel = publish_target(rel)
        destination = repo / destination_rel
        destination.parent.mkdir(parents=True, exist_ok=True)
        if actual_bytes > VOLUME_BYTES:
            volumes = split_large(source, destination, state, args.sevenzip)
            split += 1
            stored = volumes
        else:
            # An existing checked-out object must not be silently overwritten.
            if destination.exists() and sha256(destination) != item["Sha256"]:
                raise RuntimeError(f"Conflicting existing Git file: {destination_rel}")
            os.replace(source, destination)
            direct += 1
            stored = [destination]
        published.extend(p.relative_to(repo) for p in stored)
        manifest.append({
            "source_output": rel,
            "source_bytes": actual_bytes,
            "source_sha256": item["Sha256"],
            "encoding": "7z-volume" if len(stored) > 1 or actual_bytes > VOLUME_BYTES else "direct",
            "git_files": [
                {"path": p.relative_to(repo).as_posix(), "bytes": p.stat().st_size,
                 "sha256": sha256(p)} for p in stored
            ]
        })
    audit = repo / DEST_ROOT / "reports" / "artifacts" / str(args.run_id) / f"shard-{args.shard:03d}"
    audit.mkdir(parents=True, exist_ok=True)
    for input_file in (report, summary):
        target = audit / input_file.name
        shutil.copy2(input_file, target)
        published.append(target.relative_to(repo))
    manifest_file = audit / "archive-manifest.jsonl"
    with manifest_file.open("w", encoding="utf-8") as file:
        for item in manifest:
            file.write(json.dumps(item, ensure_ascii=False, separators=(",", ":")) + "\n")
    published.append(manifest_file.relative_to(repo))
    stats = {
        "source_run": args.run_id, "shard": args.shard,
        "source_records": len(rows), "source_statuses": status_counts,
        "derived_outputs": len(outputs), "direct_outputs": direct,
        "split_archives": split, "git_file_count": len(published),
        "git_bytes": sum((repo / p).stat().st_size for p in published)
    }
    stats_file = audit / "publish-summary.json"
    stats_file.write_text(json.dumps(stats, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    published.append(stats_file.relative_to(repo))
    return published, stats


def publish(repo: Path, files: list[Path], budget: int, run_id: int, shard: int) -> None:
    if not files:
        raise RuntimeError("Nothing to publish")
    call(["git", "-C", str(repo), "config", "user.name", "github-actions[bot]"])
    call(["git", "-C", str(repo), "config", "user.email", "41898282+github-actions[bot]@users.noreply.github.com"])
    batches = plan_batches([repo / p for p in files], budget)
    print(f"Shard {shard}: {len(files)} Git paths in {len(batches)} batches", flush=True)
    for number, batch in enumerate(batches, 1):
        relative = [p.relative_to(repo).as_posix() for p in batch]
        # Git sparse-checkout is intentional: do not download the >13GB
        # source ROMFS or the previous 15 shards just to add this shard.
        command = ["git", "-C", str(repo), "add", "--sparse", "-f",
                   "--pathspec-from-file=-", "--pathspec-file-nul"]
        nul = "\x00".join(relative) + "\x00"
        subprocess.run(command, input=nul.encode("utf-8"), check=True,
                       stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        staged = subprocess.run(["git", "-C", str(repo), "diff", "--cached", "--quiet"])
        if staged.returncode == 0:
            print(f"Batch {number}: unchanged, skip", flush=True)
            continue
        if staged.returncode != 1:
            raise RuntimeError("git diff --cached check failed")
        title = f"data: archive SWSH 1.3.2 run {run_id} shard {shard:02d} [{number}/{len(batches)}] [skip ci]"
        call(["git", "-C", str(repo), "commit", "-m", title], timeout=600)
        # Each push is materially below the 2 GiB request.
        for attempt in range(3):
            result = subprocess.run(["git", "-C", str(repo), "push", "origin", "HEAD:refs/heads/master"],
                                    text=True, capture_output=True, timeout=1800)
            if result.returncode == 0:
                print(f"Batch {number}/{len(batches)} pushed: "
                      f"{sum(p.stat().st_size for p in batch) / MIB:.1f} MiB; "
                      f"{len(batch)} files", flush=True)
                break
            if attempt == 2:
                raise RuntimeError(f"git push failed after 3 attempts: {result.stderr[-2500:]}")
            time.sleep(4 * (attempt + 1))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--incoming", type=Path, required=True)
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--state", type=Path, default=Path("artifacts/swsh-publish-work"))
    parser.add_argument("--shard", type=int, required=True)
    parser.add_argument("--run-id", type=int, default=42141830700)
    parser.add_argument("--sevenzip", default="7z")
    parser.add_argument("--push-budget-mib", type=int, default=650)
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()
    if args.shard not in range(16):
        parser.error("Shard must be 0..15")
    if not 128 <= args.push_budget_mib <= 1024:
        parser.error("Commit budget must be 128..1024 MiB (<2GiB)")
    files, stats = persist_one_shard(args)
    print(json.dumps(stats, ensure_ascii=False), flush=True)
    if not args.dry_run:
        publish(args.repo.resolve(), files, args.push_budget_mib * MIB, args.run_id, args.shard)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
