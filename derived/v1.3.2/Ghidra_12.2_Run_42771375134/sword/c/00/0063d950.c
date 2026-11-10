/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063d950; name: FUN_0063d950
 */


void FUN_0063d950(long param_1,int param_2,long *param_3,int param_4,int param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    plVar2 = (long *)(param_1 + 0x60);
  }
  else {
    if (*(int *)(param_1 + 0x20) != 1) {
      return;
    }
    plVar2 = (long *)(param_1 + 0x58);
  }
  if (((((-1 < param_2) && (lVar13 = *plVar2, lVar13 != 0)) && (param_2 < *(int *)(lVar13 + 0x38)))
      && ((*(int *)(*(long *)(lVar13 + 0x50) + (long)param_2 * 0x28) == 2 &&
          (param_3 != (long *)0x0)))) &&
     ((uVar6 = *(uint *)(*(long *)(lVar13 + 0x50) + (long)param_2 * 0x28 + 8), uVar6 < 0xe &&
      (piVar8 = (int *)(**(code **)(*param_3 + 0x40))(param_3), *piVar8 == 10)))) {
    iVar4 = *(int *)((long)param_3 + 0xbc);
    if (0 < param_5) {
      iVar4 = param_5;
    }
    if (param_3[0x20] != 0) {
      uVar9 = (ulong)(int)uVar6;
      lVar10 = uVar9 * 4 + 0xd48;
      lVar11 = uVar9 * 8 + 0xaa8;
      lVar1 = param_3[0x20] +
              (long)(param_4 + *(int *)((long)param_3 + 0x154) * *(int *)((long)param_3 + 0xbc));
      uVar7 = *(uint *)(lVar13 + uVar9 * 4 + 0x2c8);
      puVar12 = &DAT_0213678c;
      lVar13 = -0x318;
      do {
        if (((*puVar12 & uVar7) != 0) && (*(long *)(param_1 + lVar11) != lVar1)) {
          *(long *)(param_1 + lVar11) = lVar1;
          lVar3 = param_1 + lVar13;
          *(int *)(param_1 + lVar10) = iVar4;
          uVar5 = uVar6;
          if ((int)*(uint *)(lVar3 + 0x2ac4) <= (int)uVar6) {
            uVar5 = *(uint *)(lVar3 + 0x2ac4);
          }
          *(uint *)(lVar3 + 0x2ac4) = uVar5;
          uVar5 = uVar6;
          if ((int)uVar6 <= (int)*(uint *)(lVar3 + 0x2ac8)) {
            uVar5 = *(uint *)(lVar3 + 0x2ac8);
          }
          *(uint *)(lVar3 + 0x2ac8) = uVar5;
          *(ulong *)(lVar3 + 0x2ad0) = *(ulong *)(lVar3 + 0x2ad0) | 1L << (uVar9 & 0x3f);
        }
        puVar12 = puVar12 + 1;
        lVar10 = lVar10 + 0x38;
        lVar11 = lVar11 + 0x70;
        lVar13 = lVar13 + 0x18;
      } while (lVar13 != 0);
    }
  }
  return;
}


