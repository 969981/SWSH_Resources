/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045a110; name: FUN_0045a110
 */


void FUN_0045a110(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (param_1 + 0x20 != *(long *)(param_1 + 0x38)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (param_1 + 0x48 != *(long *)(param_1 + 0x50)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (param_1 + 0x60 != *(long *)(param_1 + 0x78)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (param_1 + 0x88 != *(long *)(param_1 + 0x90)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (param_1 + 0xa0 != *(long *)(param_1 + 0xa8)) {
      FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  *(bool *)(param_1 + 0xb9) = *(long *)PTR_DAT_02712d18 == param_1;
  return;
}


