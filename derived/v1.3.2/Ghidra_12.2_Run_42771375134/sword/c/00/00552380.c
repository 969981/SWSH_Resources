/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552380; name: FUN_00552380
 */


void FUN_00552380(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 < 2) {
    param_3 = 1;
  }
  if ((param_4 < 0) || (*param_2 < param_3)) {
    FUN_00550fe0(param_1,&DAT_01d38550);
    return;
  }
  iVar1 = *param_2 + 1;
  iVar2 = iVar1 - param_3;
  if (param_3 + param_4 <= iVar1) {
    iVar2 = param_4;
  }
  FUN_00551100(param_1,*(long *)(param_2 + 2) + (long)(param_3 + -1),iVar2,iVar2);
  return;
}


