/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00814e50; name: FUN_00814e50
 */


void FUN_00814e50(int param_1,int param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar3 = param_1 << 3;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
    iVar4 = *(int *)(param_3 + 0x10);
  }
  else {
    pbVar5 = *(byte **)(param_3 + 8);
    if (uVar3 < 0x80) {
      pbVar6 = pbVar5;
    }
    else {
      pbVar7 = pbVar5;
      uVar8 = uVar3;
      do {
        uVar3 = uVar8 >> 7;
        uVar1 = uVar8 >> 0xe;
        pbVar6 = pbVar7 + 1;
        *pbVar7 = (byte)uVar8 | 0x80;
        pbVar7 = pbVar6;
        uVar8 = uVar3;
      } while (uVar1 != 0);
    }
    *pbVar6 = (byte)uVar3;
    iVar4 = ((int)pbVar6 + 1) - (int)pbVar5;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar4;
    iVar4 = *(int *)(param_3 + 0x10) - iVar4;
    *(int *)(param_3 + 0x10) = iVar4;
  }
  if (iVar4 < 5) {
    FUN_0080dfa0(param_3);
    return;
  }
  uVar3 = param_2 << 1 ^ param_2 >> 0x1f;
  pbVar5 = *(byte **)(param_3 + 8);
  if (uVar3 < 0x80) {
    pbVar6 = pbVar5;
  }
  else {
    pbVar7 = pbVar5;
    uVar9 = (ulong)uVar3;
    do {
      uVar3 = (uint)(uVar9 >> 7);
      uVar2 = uVar9 >> 0xe;
      pbVar6 = pbVar7 + 1;
      *pbVar7 = (byte)uVar9 | 0x80;
      pbVar7 = pbVar6;
      uVar9 = uVar9 >> 7;
    } while (uVar2 != 0);
  }
  *pbVar6 = (byte)uVar3;
  iVar4 = ((int)pbVar6 + 1) - (int)pbVar5;
  *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar4;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar4;
  return;
}


