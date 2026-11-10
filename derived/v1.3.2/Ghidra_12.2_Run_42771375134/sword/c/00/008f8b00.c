/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8b00; name: FUN_008f8b00
 */


undefined8 FUN_008f8b00(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x88);
  if ((piVar2[0x29c] & 0x400c5c00U) != 0) {
    return 0;
  }
  if ((piVar2[0x29d] & 0xb0U) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x150) == 2) {
    return 0;
  }
  iVar1 = *piVar2;
  if (1 < iVar1 - 2U && iVar1 != 0) {
    if (iVar1 != 1) {
      return 0;
    }
    if (((uint)piVar2[0x29d] >> 2 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}


