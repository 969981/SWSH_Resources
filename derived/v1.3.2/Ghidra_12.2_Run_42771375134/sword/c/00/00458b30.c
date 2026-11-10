/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00458b30; name: FUN_00458b30
 */


void FUN_00458b30(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (param_1 != *(long *)(param_1 + 0x18)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (param_1 + 0x28 != *(long *)(param_1 + 0x30)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


