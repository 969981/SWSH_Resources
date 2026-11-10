/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00815cc0; name: FUN_00815cc0
 */


void FUN_00815cc0(int param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  uVar2 = param_1 << 3 | 3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
  }
  else {
    pbVar4 = *(byte **)(param_3 + 8);
    if (uVar2 < 0x80) {
      pbVar5 = pbVar4;
    }
    else {
      pbVar6 = pbVar4;
      uVar7 = uVar2;
      do {
        uVar2 = uVar7 >> 7;
        uVar1 = uVar7 >> 0xe;
        pbVar5 = pbVar6 + 1;
        *pbVar6 = (byte)uVar7 | 0x80;
        pbVar6 = pbVar5;
        uVar7 = uVar2;
      } while (uVar1 != 0);
    }
    *pbVar5 = (byte)uVar2;
    iVar3 = ((int)pbVar5 + 1) - (int)pbVar4;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar3;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar3;
  }
  (**(code **)(*param_2 + 0x68))(param_2,param_3);
  uVar2 = param_1 << 3 | 4;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
    return;
  }
  pbVar4 = *(byte **)(param_3 + 8);
  if (uVar2 < 0x80) {
    pbVar5 = pbVar4;
  }
  else {
    pbVar6 = pbVar4;
    uVar7 = uVar2;
    do {
      uVar2 = uVar7 >> 7;
      uVar1 = uVar7 >> 0xe;
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)uVar7 | 0x80;
      pbVar6 = pbVar5;
      uVar7 = uVar2;
    } while (uVar1 != 0);
  }
  *pbVar5 = (byte)uVar2;
  iVar3 = ((int)pbVar5 + 1) - (int)pbVar4;
  *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar3;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar3;
  return;
}


