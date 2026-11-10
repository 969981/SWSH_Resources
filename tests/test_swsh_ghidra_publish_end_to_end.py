#!/usr/bin/env python3
"""Synthetic end-to-end Ghidra publisher test using only homemade ELF/event data."""
from __future__ import annotations

import json
import shutil
import sys
import tarfile
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "ghidra"))
sys.path.insert(0, str(ROOT / "tests"))

import swsh_build_sqlite
import swsh_extract_c
import swsh_publish_split
import swsh_restore_split
import swsh_compare
from test_swsh_ghidra_pipeline import GhidraPipelineTest


@unittest.skipUnless(shutil.which("zstd"), "zstd required for actual native project archival")
class EndToEndSyntheticPublisherTest(unittest.TestCase):
    def test_native_ghidra_project_and_both_game_datasets(self):
        with tempfile.TemporaryDirectory() as t:
            root = Path(t)
            incoming = root / "incoming"
            dest = root / "derived"
            dest.mkdir()
            restored = {}
            fixture = GhidraPipelineTest()
            for game in ("sword", "shield"):
                scratch = root / ("scratch_" + game)
                scratch.mkdir()
                elf, events, db_path, source_hash = fixture.make_source(
                    scratch, game, "hash_" + game
                )
                swsh_publish_split.EXPECTED_SHA[game] = source_hash
                paths = {}
                for kind in ("sqlite", "ndjson", "c", "project"):
                    folder = incoming / f"SWSH-{game}-{kind}"
                    folder.mkdir(parents=True)
                    paths[kind] = folder
                shutil.copy2(db_path, paths["sqlite"] / (game + ".sqlite"))
                sqlite_manifest = {
                    "status": "COMPLETE",
                    "elf_sha256": source_hash,
                    "counts": {"function": 2, "instruction": 2,
                               "reference": 0, "decompile": 2}
                }
                (paths["sqlite"] / (game + "_sqlite_manifest.json")).write_text(
                    json.dumps(sqlite_manifest) + "\n"
                )
                shutil.copy2(events, paths["ndjson"] / (game + "_events.ndjson.gz"))
                swsh_extract_c.run(
                    events,
                    paths["c"] / (game + "_all_c.zip"),
                    paths["c"] / (game + "_decompiled_index.csv"),
                    paths["c"] / (game + "_decompiled_manifest.json"),
                    source_hash
                )
                stem = "SWSH_" + game
                project_dir = scratch / "project"
                (project_dir / (stem + ".rep")).mkdir(parents=True)
                (project_dir / (stem + ".gpr")).write_bytes(b"synthetic gpr")
                (project_dir / (stem + ".rep") / "store.bin").write_bytes(
                    b"synthetic project bytes"
                )
                # tarfile cannot write zstd by itself; pipe a plain tar through zstd.
                raw_tar = scratch / "project.tar"
                with tarfile.open(raw_tar, mode="w") as tar:
                    tar.add(project_dir / (stem + ".gpr"), arcname=stem + ".gpr")
                    tar.add(project_dir / (stem + ".rep"), arcname=stem + ".rep")
                import subprocess
                with (paths["project"] / (game + "_ghidra_project.tar.zst")).open("wb") as out:
                    subprocess.run(["zstd", "-q", "-c", str(raw_tar)], stdout=out, check=True)

                manifest = swsh_publish_split.publish_game(
                    incoming, dest / game, 987654321, game
                )
                self.assertEqual(2, manifest["sqlite_counts"]["functions"])
                self.assertEqual(1, manifest["c_success"])
                self.assertEqual(1, manifest["c_failed_or_empty"])
                self.assertTrue((dest / game / "project" / (stem + ".gpr")).is_file())
                self.assertTrue((dest / game / "c" / "00" / "00001000.c").is_file())
                restore_path = root / ("restore_" + game)
                audit = swsh_restore_split.restore(dest / game, restore_path)
                self.assertEqual("REASSEMBLED_AND_SHA256_VERIFIED", audit["status"])
                self.assertEqual(b"synthetic project bytes",
                                 (restore_path / "project" / (stem + ".rep") / "store.bin").read_bytes())
                restored[game] = restore_path / (game + ".sqlite")
            diff = swsh_compare.compare(restored["sword"], restored["shield"],
                                        dest / "comparison")
            self.assertEqual(1, diff["same_entry_comparison_counts"]["SAME_ENTRY_MATCHED_MACHINE_BYTES"])
            self.assertEqual(1, diff["same_entry_comparison_counts"]["SAME_ENTRY_DIFFERENT_MACHINE_BYTES"])


if __name__ == "__main__":
    unittest.main()
