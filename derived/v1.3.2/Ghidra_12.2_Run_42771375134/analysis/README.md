# Sword/Shield 1.3.2 — Ghidra decompiler failure audit

Source: Ghidra 12.2 analysis Actions #42771375134, result success.

| Game | Ghidra functions | C output OK | Failed/empty |
| --- | ---: | ---: | ---: |
| sword | 47,983 | 47,978 | 5 |
| shield | 47,984 | 47,979 | 5 |

## Failed function entries

- **sword** 0051b060 (FAILED): Exception while decompiling 0051b060: process: timeout 
- **sword** 00add620 (FAILED): Exception while decompiling 00add620: process: timeout 
- **sword** 00b1c010 (FAILED): Exception while decompiling 00b1c010: process: timeout 
- **sword** 00f7af20 (FAILED): Exception while decompiling 00f7af20: process: timeout 
- **sword** 0199e900 (FAILED): Exception while decompiling 0199e900: process: timeout 
- **shield** 0051b060 (FAILED): Exception while decompiling 0051b060: process: timeout 
- **shield** 00add620 (FAILED): Exception while decompiling 00add620: process: timeout 
- **shield** 00b1c010 (FAILED): Exception while decompiling 00b1c010: process: timeout 
- **shield** 00f7af50 (FAILED): Exception while decompiling 00f7af50: process: timeout 
- **shield** 0199e990 (FAILED): Exception while decompiling 0199e990: process: timeout 

Full Ghidra error strings are preserved in decompiler_failures.csv/json.
These entries require manual inspection; no fabricated C is emitted.
