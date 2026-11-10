/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00113750; name: FUN_00113750
 */


int FUN_00113750(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((int)param_1[1] == 0) {
    iVar1 = (int)param_1[2];
    *(int *)(param_1 + 2) = iVar1 + 1;
  }
  else {
    uVar2 = (int)param_1[1] - 1;
    iVar1 = *(int *)(*param_1 + (ulong)uVar2 * 4);
    *(uint *)(param_1 + 1) = uVar2;
  }
  iVar1 = iVar1 << 6;
  FUN_00115750(param_1 + 0x16,param_2,param_3,param_4 & 1,iVar1);
  FUN_00115750(param_1 + 0x62,param_2,param_3,param_4 & 1,iVar1);
  return iVar1;
}


