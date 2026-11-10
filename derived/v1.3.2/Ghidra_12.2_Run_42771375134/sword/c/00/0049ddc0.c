/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049ddc0; name: FUN_0049ddc0
 */


void FUN_0049ddc0(long *param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulong *puVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  
  if (param_3 == 0) {
    return;
  }
  uVar16 = 0;
LAB_0049dfec:
  uVar17 = 1L << (uVar16 & 0x3f);
  iVar15 = (int)uVar16;
  if ((uVar17 & param_3) != 0) {
    uVar8 = *(uint *)(param_1 + 4);
    if (uVar8 != 0) {
      uVar11 = iVar15 + (int)param_2;
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar11 / uVar8;
      }
      for (plVar14 = *(long **)(param_1[3] + (ulong)(uVar11 - uVar5 * uVar8) * 8);
          plVar14 != (long *)0x0; plVar14 = (long *)plVar14[2]) {
        if ((*plVar14 == param_2) && ((int)plVar14[1] == iVar15)) {
          if ((int)plVar14[0xb] != 0) {
            lVar18 = plVar14[10];
            goto LAB_0049dec0;
          }
          break;
        }
      }
    }
    goto LAB_0049e03c;
  }
  goto LAB_0049e040;
  while (lVar9 = lVar9 + -8, puVar10 = puVar10 + 1, lVar9 != 0) {
LAB_0049df18:
    if ((long *)*puVar10 == plVar14) goto LAB_0049df38;
  }
  puVar10 = puVar1;
LAB_0049df38:
  if (puVar1 != puVar10) {
    uVar8 = uVar8 - 1;
    if (-1 < (int)uVar8) {
      iVar2 = (int)plVar14[9];
      iVar12 = 0;
      uVar11 = uVar8;
LAB_0049df58:
      do {
        iVar4 = uVar11 - iVar12;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = iVar12 + (iVar4 >> 1);
        plVar13 = (long *)puVar7[iVar4];
        iVar3 = (int)plVar13[9];
        if ((iVar2 < iVar3) || (plVar14 < plVar13 && iVar2 == iVar3)) goto LAB_0049dfb4;
        if ((iVar2 == iVar3 || iVar2 < iVar3) && (plVar14 <= plVar13 || iVar2 != iVar3)) {
          puVar7 = puVar7 + iVar4;
          if (puVar7 < puVar1 + -1) {
            uVar16 = uVar16 * 8 + -9 + (long)iVar4 * -8;
            uVar8 = ((uint)(uVar16 >> 3) & 0x1fffffff) + 1;
            if ((uVar8 & 7) != 0) {
              lVar9 = -((ulong)uVar8 & 7);
              puVar10 = puVar7;
              do {
                puVar7 = puVar10 + 1;
                *puVar10 = *puVar7;
                lVar9 = lVar9 + 1;
                puVar10 = puVar7;
              } while (lVar9 != 0);
            }
            if (0x37 < uVar16) {
              do {
                *puVar7 = puVar7[1];
                puVar7[1] = puVar7[2];
                puVar7[2] = puVar7[3];
                puVar7[3] = puVar7[4];
                puVar7[4] = puVar7[5];
                puVar7[5] = puVar7[6];
                puVar7[6] = puVar7[7];
                puVar10 = puVar7 + 8;
                puVar7[7] = *puVar10;
                puVar7 = puVar10;
              } while (puVar10 < puVar1 + -1);
            }
            uVar8 = puVar6[0x18] - 1;
          }
          puVar6[0x18] = uVar8;
          puVar7 = (ulong *)FUN_00478b70(puVar6 + 0x12,plVar14);
          goto joined_r0x0049dea8;
        }
        iVar12 = iVar4 + 1;
      } while (iVar12 <= (int)uVar11);
    }
LAB_0049dfc0:
    puVar7 = (ulong *)FUN_00478b70(puVar6 + 0x12,plVar14);
joined_r0x0049dea8:
    if (puVar7 != (ulong *)0x0) {
      *puVar7 = (ulong)plVar14;
    }
  }
  while (lVar18 = lVar18 + 0x18, lVar18 != plVar14[10] + (ulong)*(uint *)(plVar14 + 0xb) * 0x18) {
LAB_0049dec0:
    uVar8 = *(uint *)(param_1 + 1);
    if (uVar8 != 0) {
      uVar11 = *(uint *)(lVar18 + 4);
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar11 / uVar8;
      }
      for (puVar6 = *(uint **)(*param_1 + (ulong)(uVar11 - uVar5 * uVar8) * 8);
          puVar6 != (uint *)0x0; puVar6 = *(uint **)(puVar6 + 2)) {
        if (*puVar6 == uVar11) {
          puVar7 = *(ulong **)(puVar6 + 0x16);
          uVar8 = puVar6[0x18];
          uVar16 = (ulong)uVar8;
          puVar1 = puVar7 + uVar16;
          puVar10 = puVar7;
          if (uVar8 == 0) goto LAB_0049df38;
          lVar9 = uVar16 << 3;
          goto LAB_0049df18;
        }
      }
    }
  }
LAB_0049e03c:
  param_3 = param_3 & (uVar17 ^ 0xffffffffffffffff);
LAB_0049e040:
  uVar16 = (ulong)(iVar15 + 1);
  if (param_3 == 0) {
    return;
  }
  goto LAB_0049dfec;
LAB_0049dfb4:
  uVar11 = iVar4 - 1;
  if ((int)uVar11 < iVar12) goto LAB_0049dfc0;
  goto LAB_0049df58;
}


