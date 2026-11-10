/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00815f30; name: FUN_00815f30
 */


void FUN_00815f30(int param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar5 = param_1 << 3 | 2;
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3);
  }
  else {
    pbVar8 = *(byte **)(param_3 + 8);
    if (uVar5 < 0x80) {
      pbVar9 = pbVar8;
    }
    else {
      pbVar10 = pbVar8;
      uVar11 = uVar5;
      do {
        uVar5 = uVar11 >> 7;
        uVar2 = uVar11 >> 0xe;
        pbVar9 = pbVar10 + 1;
        *pbVar10 = (byte)uVar11 | 0x80;
        pbVar10 = pbVar9;
        uVar11 = uVar5;
      } while (uVar2 != 0);
    }
    *pbVar9 = (byte)uVar5;
    iVar7 = ((int)pbVar9 + 1) - (int)pbVar8;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar7;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar7;
  }
  uVar5 = (**(code **)(*param_2 + 0x78))(param_2);
  if (*(int *)(param_3 + 0x10) < 5) {
    FUN_0080dfa0(param_3,(ulong)uVar5);
    iVar7 = *(int *)(param_3 + 0x10);
    iVar3 = iVar7 - uVar5;
  }
  else {
    pbVar8 = *(byte **)(param_3 + 8);
    if (uVar5 < 0x80) {
      pbVar9 = pbVar8;
      uVar11 = uVar5;
    }
    else {
      pbVar10 = pbVar8;
      uVar12 = (ulong)uVar5;
      do {
        uVar11 = (uint)(uVar12 >> 7);
        uVar4 = uVar12 >> 0xe;
        pbVar9 = pbVar10 + 1;
        *pbVar10 = (byte)uVar12 | 0x80;
        pbVar10 = pbVar9;
        uVar12 = uVar12 >> 7;
      } while (uVar4 != 0);
    }
    *pbVar9 = (byte)uVar11;
    iVar7 = ((int)pbVar9 + 1) - (int)pbVar8;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar7;
    iVar7 = *(int *)(param_3 + 0x10) - iVar7;
    *(int *)(param_3 + 0x10) = iVar7;
    iVar3 = iVar7 - uVar5;
  }
  if ((int)uVar5 <= iVar7) {
    lVar6 = *(long *)(param_3 + 8);
    *(long *)(param_3 + 8) = lVar6 + (int)uVar5;
    *(int *)(param_3 + 0x10) = iVar3;
    if (lVar6 != 0) {
      puVar1 = PTR_DAT_02716fa8;
      if (*(char *)(param_3 + 0x1a) != '\0') {
        puVar1 = (undefined1 *)(param_3 + 0x1b);
      }
                    /* WARNING: Could not recover jumptable at 0x008160a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x80))(param_2,*puVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x008160c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x68))(param_2,param_3);
  return;
}


