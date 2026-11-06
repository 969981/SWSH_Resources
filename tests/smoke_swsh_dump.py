#!/usr/bin/env python3
"""Synthetic end-to-end smoke checks against the compiled SWSH headless decoder."""
from __future__ import annotations
import json
import struct
import subprocess
import sys
from pathlib import Path
from tempfile import TemporaryDirectory


def wave_header() -> bytes:
    return b"RIFF" + struct.pack("<I", 36) + b"WAVEfmt " + struct.pack("<I", 16) + struct.pack("<HHIIHH", 1, 1, 8000, 16000, 2, 16) + b"data" + struct.pack("<I", 0)


def main(decoder: Path) -> None:
    fixtures = {
        "bin/pml/evolution/evo_000.bin": (bytes(72), "PARSED"),
        "bin/pml/tamagowaza/tamagowaza_0000.bin": (bytes(4), "PARSED"),
        "bin/trainer/trainer_data/trainer_data_000.bin": (bytes(20), "PARSED"),
        "bin/trainer/trainer_poke/trainer_poke_000.bin": (bytes(32), "PARSED"),
        "bin/trainer/trainer_type/trainer_type_000.bin": (bytes(280), "PARSED"),
        "bin/pml/personal/personal_total.bin": (bytes(176), "PARSED"),
        "bin/sound/NX64/test.wav": (wave_header(), "PARSED"),
        "bin/message/grammar/English.dat": (bytes(86), "UNSUPPORTED_FORMAT"),
        "bin/appli/icon_item/test.bntx": (b"BNTX" + bytes(24), "UNSUPPORTED_FORMAT"),
    }
    with TemporaryDirectory() as tmp:
        root = Path(tmp)
        selection = root / "selection.tsv"
        with selection.open("w", encoding="utf-8") as writer:
            for relative, (data, _) in fixtures.items():
                p = root / "input" / relative
                p.parent.mkdir(parents=True, exist_ok=True)
                p.write_bytes(data)
                writer.write(f"{relative}\t{p}\n")
        report = root / "report.jsonl"
        out = root / "output"
        result = subprocess.run(["dotnet", str(decoder.resolve()), str(selection), str(out), str(report), "2"],
                                capture_output=True, text=True, timeout=90)
        if result.returncode:
            raise AssertionError(f"Smoke decoding failed rc={result.returncode}: {result.stderr} {result.stdout}")
        rows = {v["Path"]: v for v in (json.loads(line) for line in report.read_text(encoding="utf-8").splitlines())}
        assert len(rows) == len(fixtures), (len(rows), len(fixtures))
        for relative, (_, expected) in fixtures.items():
            actual = rows[relative]["Status"]
            assert actual == expected, (relative, expected, actual, rows[relative].get("Error"))
            if expected == "PARSED":
                assert rows[relative]["Outputs"], relative
                for record in rows[relative]["Outputs"]:
                    assert (out / record["Path"]).is_file(), record
        print(f"Smoke PASS: {len(fixtures)} synthetic assets, 7 parsed, 2 unsupported (as expected)")


if __name__ == "__main__":
    main(Path(sys.argv[1]))
