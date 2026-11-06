#!/usr/bin/env python3
"""Full Sword 1.3.2 shard runner: 7z restoration, SHA verify, parallel decoder processes, reconciliation.

Read-only source. Every source is explicitly accounted for, including unsupported formats.
"""
from __future__ import annotations
import argparse
import concurrent.futures as cf
import hashlib
import json
import os
import shutil
import subprocess
import sys
from collections import Counter
from pathlib import Path
from tempfile import TemporaryDirectory


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for data in iter(lambda: f.read(1024 * 1024), b""):
            h.update(data)
    return h.hexdigest()


def inside(root: Path, subpath: str) -> Path:
    if not subpath or subpath.startswith("/") or "\\" in subpath or ":" in subpath:
        raise ValueError(f"Unsafe path: {subpath}")
    parts = subpath.split("/")
    if any(s in ("", ".", "..") for s in parts):
        raise ValueError(f"Unsafe path: {subpath}")
    root = root.resolve()
    result = root.joinpath(*parts).resolve()
    if not result.is_relative_to(root):
        raise ValueError(f"Input escapes root: {subpath}")
    return result


def file_result(item: dict, status: str, message: str) -> dict:
    return {"Path": item["subpath"], "Status": status, "Parser": "source-recovery",
            "Sha256": item["sha256"], "Bytes": item["size_bytes"],
            "Outputs": [], "Error": message}


def restore_one(item: dict, repo: Path, work: Path, sevenzip: str) -> tuple[dict, Path | None, dict | None]:
    sub = item["subpath"]
    try:
        paths = [inside(repo, p) for p in item["source_files"]]
        if not paths or any(not p.is_file() for p in paths):
            return item, None, file_result(item, "MISSING_SOURCE", "Missing original or 7z volume")
        mode = item["mode"]
        if mode == "COPY":
            if len(paths) != 1:
                raise ValueError("Expected exactly one direct source")
            original = paths[0]
        elif mode == "7Z":
            if len(paths) != item["archive_parts"]:
                raise ValueError("Archive parts count mismatch")
            for i, p in enumerate(paths, 1):
                if not p.name.endswith(f".7z.{i:03d}"):
                    raise ValueError("Archive part sequence mismatch")
            target = inside(work / "restored", sub)
            target.parent.mkdir(parents=True, exist_ok=True)
            # An interrupted job may leave a partial restore; only accept exact size and hash.
            if target.is_file() and target.stat().st_size == item["size_bytes"] and digest(target) == item["sha256"]:
                original = target
            else:
                with TemporaryDirectory(dir=str(work)) as td:
                    check = subprocess.run([sevenzip, "t", str(paths[0])], stdout=subprocess.DEVNULL,
                                           stderr=subprocess.PIPE, text=True, timeout=1800)
                    if check.returncode != 0:
                        raise RuntimeError(f"7z integrity test failed: {check.stderr[-400:]}")
                    extract = subprocess.run([sevenzip, "x", "-y", f"-o{td}", str(paths[0])],
                                             stdout=subprocess.DEVNULL, stderr=subprocess.PIPE,
                                             text=True, timeout=1800)
                    if extract.returncode != 0:
                        raise RuntimeError(f"7z extraction failed: {extract.stderr[-400:]}")
                    extracted = [p for p in Path(td).rglob("*") if p.is_file()]
                    if len(extracted) != 1 or extracted[0].name != Path(sub).name:
                        raise RuntimeError("Archive must restore exactly one expected file")
                    if extracted[0].stat().st_size != item["size_bytes"] or digest(extracted[0]) != item["sha256"]:
                        raise RuntimeError("Archive recovered bytes disagree with original inventory")
                    shutil.move(str(extracted[0]), str(target))
                    original = target
        else:
            raise ValueError(f"Unknown source archive mode: {mode}")
        if original.stat().st_size != item["size_bytes"]:
            return item, None, file_result(item, "HASH_MISMATCH", "Restored/direct source has wrong size")
        if digest(original) != item["sha256"]:
            return item, None, file_result(item, "HASH_MISMATCH", "Restored/direct SHA-256 does not match inventory")
        return item, original, None
    except (subprocess.TimeoutExpired, FileNotFoundError) as e:
        return item, None, file_result(item, "FAILED", f"Restore/dependency: {e}")
    except Exception as e:
        return item, None, file_result(item, "FAILED", f"{type(e).__name__}: {e}")


def run_decoder(job: tuple[int, list[tuple[dict, Path]], Path, Path, Path, int]) -> tuple[int, list[dict], int, str]:
    index, items, work, output, decoder, threads = job
    selection = work / f"selection-{index:02d}.tsv"
    report = work / f"decoder-{index:02d}.jsonl"
    selection.write_text("".join(f"{entry['subpath']}\t{path}\n" for entry, path in items), encoding="utf-8")
    command = ["dotnet", str(decoder), str(selection), str(output), str(report), str(threads)]
    try:
        completed = subprocess.run(command, text=True, capture_output=True, timeout=10800)
        results = [json.loads(line) for line in report.read_text(encoding="utf-8").splitlines()] if report.exists() else []
        return index, results, completed.returncode, (completed.stderr or completed.stdout)[-2000:]
    except Exception as e:
        return index, [], 1, str(e)


def run(args: argparse.Namespace) -> int:
    repo = args.repo_root.resolve()
    work = args.work_dir.resolve()
    output = args.output_root.resolve()
    decoder = args.decoder.resolve()
    work.mkdir(parents=True, exist_ok=True)
    output.mkdir(parents=True, exist_ok=True)
    items = [json.loads(line) for line in args.shard_file.read_text(encoding="utf-8").splitlines() if line]
    by_path = {i["subpath"]: i for i in items}
    if len(by_path) != len(items):
        raise ValueError("Duplicate source_id within shard")
    if not decoder.is_file():
        raise FileNotFoundError(f"Decoder not found: {decoder}")
    verified = []
    failures = []
    with cf.ThreadPoolExecutor(max_workers=args.io_workers) as pool:
        tasks = (pool.submit(restore_one, item, repo, work, args.sevenzip) for item in items)
        for future in cf.as_completed(list(tasks)):
            item, path, error = future.result()
            if error:
                failures.append(error)
            else:
                verified.append((item, path))
    verified.sort(key=lambda x: x[0]["subpath"])
    partitions = [verified[i::args.cpu_processes] for i in range(args.cpu_processes)]
    jobs = [(i, part, work, output, decoder, args.decoder_threads) for i, part in enumerate(partitions) if part]
    results = list(failures)
    with cf.ThreadPoolExecutor(max_workers=args.cpu_processes) as pool:
        for finished in cf.as_completed([pool.submit(run_decoder, job) for job in jobs]):
            index, decoded, rc, log = finished.result()
            # Each decoder writes its own independent JSONL; all records are merged and checked below.
            results.extend(decoded)
            if rc:
                print(f"Decoder process {index} nonzero: {log}", file=sys.stderr)
    seen: set[str] = set()
    duplicates: list[str] = []
    for result in results:
        name = result.get("Path", "")
        if name in seen or name not in by_path:
            duplicates.append(name)
        seen.add(name)
    if duplicates:
        raise ValueError(f"Duplicate/unexpected decoder results: {duplicates[:5]}")
    for item in items:
        if item["subpath"] not in seen:
            results.append(file_result(item, "FAILED", "Decoder did not return a result"))
    results.sort(key=lambda x: x["Path"])
    report = output / "per-file.jsonl"
    tmp = report.with_suffix(".jsonl.tmp")
    with tmp.open("w", encoding="utf-8") as f:
        for value in results:
            f.write(json.dumps(value, ensure_ascii=False, separators=(",", ":")) + "\n")
    tmp.replace(report)
    counts = Counter(x["Status"] for x in results)
    summary = {"expected": len(items), "reported": len(results),
               "source_verified": len(verified), "status": dict(counts),
               "result": "PASS" if counts.get("PARSED", 0) == len(items) else "PARTIAL"}
    (output / "summary.json").write_text(json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(summary, ensure_ascii=False))
    return 1 if len(results) != len(items) or any(x["Status"] in
        ("FAILED", "HASH_MISMATCH", "MISSING_SOURCE") for x in results) else 0


def reconcile(args: argparse.Namespace) -> int:
    expected: set[str] = set()
    for plan in sorted(args.plan_dir.glob("shard-*.jsonl")):
        for line in plan.read_text(encoding="utf-8").splitlines():
            p = json.loads(line)["subpath"]
            if p in expected:
                raise ValueError(f"Duplicate planned source: {p}")
            expected.add(p)
    reported: dict[str, dict] = {}
    duplicates = []
    for report in sorted(args.reports_dir.glob("shard-*/per-file.jsonl")):
        for line in report.read_text(encoding="utf-8").splitlines():
            result = json.loads(line)
            p = result["Path"]
            if p in reported:
                duplicates.append(p)
            reported[p] = result
    missing = sorted(expected - reported.keys())
    unexpected = sorted(reported.keys() - expected)
    counts = Counter(x["Status"] for x in reported.values())
    summary = {"expected": len(expected), "reported": len(reported), "status": dict(counts),
               "missing_count": len(missing), "duplicates_count": len(duplicates),
               "unexpected_count": len(unexpected),
               "missing_examples": missing[:100], "unexpected_examples": unexpected[:100],
               "result": "PASS" if len(expected) == args.expected_count and
                    not (missing or duplicates or unexpected) and
                    counts.get("PARSED", 0) == len(expected) else "PARTIAL"}
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(summary, ensure_ascii=False))
    return 0 if summary["result"] == "PASS" else 1


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    a = sub.add_parser("run")
    a.add_argument("--shard-file", type=Path, required=True)
    a.add_argument("--repo-root", type=Path, default=Path("."))
    a.add_argument("--work-dir", type=Path, required=True)
    a.add_argument("--output-root", type=Path, required=True)
    a.add_argument("--decoder", type=Path, required=True)
    a.add_argument("--sevenzip", default="7z")
    a.add_argument("--io-workers", type=int, default=4)
    a.add_argument("--cpu-processes", type=int, default=2)
    a.add_argument("--decoder-threads", type=int, default=2)
    b = sub.add_parser("reconcile")
    b.add_argument("--plan-dir", type=Path, required=True)
    b.add_argument("--reports-dir", type=Path, required=True)
    b.add_argument("--out", type=Path, required=True)
    b.add_argument("--expected-count", type=int, default=50494)
    args = parser.parse_args()
    if args.command == "run":
        if not 1 <= args.io_workers <= 32 or not 1 <= args.cpu_processes <= 8 or not 1 <= args.decoder_threads <= 8:
            parser.error("Invalid worker limits")
        return run(args)
    return reconcile(args)


if __name__ == "__main__":
    raise SystemExit(main())
