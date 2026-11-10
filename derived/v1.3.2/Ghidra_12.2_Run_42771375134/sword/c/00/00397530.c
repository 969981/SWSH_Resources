/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397530; name: FUN_00397530
 */


void FUN_00397530(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 != 0) {
    lVar15 = *(long *)(param_1 + 8);
    uVar14 = 0;
    uVar6 = 0;
    do {
      plVar1 = (long *)(lVar15 + uVar14 * 0x10);
      uVar3 = *(uint *)(plVar1 + 1);
      if (uVar3 != 0) {
        lVar17 = *plVar1;
        uVar16 = 0;
        do {
          puVar10 = (undefined4 *)(lVar17 + uVar16 * 0x28);
          puVar7 = (undefined4 *)(param_2 + uVar6 * 0x1c);
          *puVar7 = *puVar10;
          puVar7[1] = puVar10[1];
          puVar7[2] = puVar10[2];
          puVar7[3] = puVar10[3];
          puVar7[4] = puVar10[4];
          puVar7[5] = puVar10[5];
          uVar11 = *(ulong *)(puVar10 + 6);
          if (uVar11 == 0) {
            lVar8 = lVar17 + uVar16 * 0x28;
            uVar5 = (*(uint *)(lVar8 + 0x24) & 0xf) << 1 | *(int *)(lVar8 + 0x20) << 5 | 1;
          }
          else {
            uVar12 = 0;
            iVar4 = 0;
            puVar13 = (uint *)(lVar15 + 8);
            do {
              uVar18 = *(ulong *)(puVar13 + -2);
              if (uVar18 <= uVar11 && uVar11 < uVar18 + (ulong)*puVar13 * 0x28) {
                iVar9 = (int)(uVar11 - uVar18 >> 3) * -0x33333333;
                goto LAB_00397618;
              }
              uVar12 = uVar12 + 1;
              iVar4 = *puVar13 + iVar4;
              puVar13 = puVar13 + 4;
            } while (uVar12 < uVar2);
            iVar9 = -1;
LAB_00397618:
            uVar5 = (iVar9 + iVar4) * 2;
          }
          uVar16 = uVar16 + 1;
          *(uint *)(param_2 + uVar6 * 0x1c + 0x18) = uVar5;
          uVar6 = (ulong)((int)uVar6 + 1);
        } while (uVar16 < uVar3);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar2);
  }
  return;
}


