/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100d230; name: FUN_0100d230
 */


undefined4 FUN_0100d230(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0x688) == 0) {
    iVar1 = -1;
    if (*(int *)(param_1 + 0x47c) < 0) goto LAB_0100d278;
  }
  else {
    iVar1 = FUN_006e7220();
    if (*(int *)(param_1 + 0x47c) <= iVar1) {
LAB_0100d278:
      if (iVar1 < *(int *)(param_1 + 0x480)) {
        return 1;
      }
      uVar2 = 2;
      if (*(int *)(param_1 + 0x484) <= iVar1) {
        uVar2 = 3;
      }
      return uVar2;
    }
  }
  return 0;
}


