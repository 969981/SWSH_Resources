/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8b90; name: FUN_008f8b90
 */


undefined4 FUN_008f8b90(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x150) != 2) {
    iVar1 = **(int **)(param_1 + 0x88);
    if (iVar1 - 2U < 2) {
      return 2;
    }
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) {
      uVar2 = 1;
      if ((*(byte *)(*(int **)(param_1 + 0x88) + 0x29d) & 4) != 0) {
        uVar2 = 2;
      }
      return uVar2;
    }
  }
  return 1;
}


