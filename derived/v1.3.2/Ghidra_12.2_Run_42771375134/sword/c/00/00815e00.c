/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00815e00; name: FUN_00815e00
 */


void FUN_00815e00(int param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  
  uVar4 = param_1 << 3 | 2;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
  }
  else {
    pbVar7 = *(byte **)(param_3 + 8);
    if (uVar4 < 0x80) {
      pbVar8 = pbVar7;
    }
    else {
      pbVar9 = pbVar7;
      uVar10 = uVar4;
      do {
        uVar4 = uVar10 >> 7;
        uVar1 = uVar10 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar10 | 0x80;
        pbVar9 = pbVar8;
        uVar10 = uVar4;
      } while (uVar1 != 0);
    }
    *pbVar8 = (byte)uVar4;
    iVar6 = ((int)pbVar8 + 1) - (int)pbVar7;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar6;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar6;
  }
  uVar3 = (**(code **)(*param_2 + 0x78))(param_2);
  uVar5 = uVar3 & 0xffffffff;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
  }
  else {
    pbVar7 = *(byte **)(param_3 + 8);
    if ((uint)uVar3 < 0x80) {
      pbVar8 = pbVar7;
    }
    else {
      pbVar9 = pbVar7;
      uVar3 = uVar3 & 0xffffffff;
      do {
        uVar5 = uVar3 >> 7;
        uVar2 = uVar3 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = (byte)uVar3 | 0x80;
        pbVar9 = pbVar8;
        uVar3 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar8 = (byte)uVar5;
    iVar6 = ((int)pbVar8 + 1) - (int)pbVar7;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar6;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00815f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))(param_2,param_3);
  return;
}


