/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090e2b0; name: FUN_0090e2b0
 */


void FUN_0090e2b0(long param_1)

{
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_009c4ed0();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_009c4ed0();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_009c4ed0();
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_009c4ed0();
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_009c4ed0();
  }
  FUN_008da5e0(*(undefined8 *)(param_1 + 0x608));
  return;
}


