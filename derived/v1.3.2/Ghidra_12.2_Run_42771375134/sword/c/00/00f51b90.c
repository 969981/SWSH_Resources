/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f51b90; name: FUN_00f51b90
 */


void FUN_00f51b90(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_40;
  byte *pbStack_38;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_01760c90(lVar5,0xfff0b9d8,(long)(int)param_2[1]);
    if (*param_2 != lVar5) {
      FUN_0175edc0(*param_2,lVar5,1);
    }
  }
  lVar5 = *param_2;
  pbVar3 = (byte *)FUN_00f51d70();
  pbStack_38 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbStack_38 = pbVar3 + 1;
  }
  local_40 = lVar5;
  puVar4 = (undefined8 *)FUN_00f51eb0(lVar5);
  *puVar4 = param_3;
  FUN_00f52070(&local_40);
  iVar1 = FUN_0175ef10(*param_2);
  iVar1 = iVar1 + -1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  FUN_01761c00(*param_2,1,0xffffffff,0,0);
  iVar2 = FUN_0175ef10(*param_2);
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  *(int *)((long)param_1 + 0xc) = (1 - iVar1) + iVar2;
  return;
}


