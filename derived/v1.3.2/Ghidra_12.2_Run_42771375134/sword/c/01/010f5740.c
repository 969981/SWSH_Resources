/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f5740; name: FUN_010f5740
 */


uint FUN_010f5740(long *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_010f0730();
  iVar1 = (int)param_1[0xce] + -1;
  if (((int)param_1[0xce] < 1) || (*(int *)(param_1 + 0xce) = iVar1, iVar1 != 0)) {
    return uVar2 & 1;
  }
  FUN_00ffa160(param_1,1,1);
  (**(code **)(*param_1 + 0xa8))(param_1);
  return uVar2 & 1;
}


