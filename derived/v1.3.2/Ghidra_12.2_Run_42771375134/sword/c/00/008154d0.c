/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008154d0; name: FUN_008154d0
 */


void FUN_008154d0(int param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_1 << 3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
  }
  else {
    pbVar3 = *(byte **)(param_3 + 8);
    if (uVar7 < 0x80) {
      pbVar4 = pbVar3;
    }
    else {
      pbVar5 = pbVar3;
      uVar6 = uVar7;
      do {
        uVar7 = uVar6 >> 7;
        uVar1 = uVar6 >> 0xe;
        pbVar4 = pbVar5 + 1;
        *pbVar5 = (byte)uVar6 | 0x80;
        pbVar5 = pbVar4;
        uVar6 = uVar7;
      } while (uVar1 != 0);
    }
    *pbVar4 = (byte)uVar7;
    iVar2 = ((int)pbVar4 + 1) - (int)pbVar3;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar2;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  }
  if ((int)param_2 < 0) {
    FUN_0080e0c0(param_3,(long)(int)param_2);
    return;
  }
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3,param_2);
    return;
  }
  pbVar3 = *(byte **)(param_3 + 8);
  if (param_2 < 0x80) {
    pbVar4 = pbVar3;
  }
  else {
    pbVar5 = pbVar3;
    uVar7 = param_2;
    do {
      param_2 = uVar7 >> 7;
      uVar6 = uVar7 >> 0xe;
      pbVar4 = pbVar5 + 1;
      *pbVar5 = (byte)uVar7 | 0x80;
      pbVar5 = pbVar4;
      uVar7 = param_2;
    } while (uVar6 != 0);
  }
  *pbVar4 = (byte)param_2;
  iVar2 = ((int)pbVar4 + 1) - (int)pbVar3;
  *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar2;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar2;
  return;
}


