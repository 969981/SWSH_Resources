/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bb330; name: FUN_004bb330
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004bb330(long *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  ulong *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  float fVar20;
  
  if (param_2 == 0) {
    return 0x34;
  }
  uVar4 = *(uint *)(param_1 + 4);
  plVar17 = param_1 + 3;
  uVar19 = (uint)param_2;
  if (uVar4 != 0) {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar19 / uVar4;
    }
    for (plVar18 = *(long **)(*plVar17 + (ulong)(uVar19 - uVar6 * uVar4) * 8);
        plVar18 != (long *)0x0; plVar18 = (long *)plVar18[1]) {
      if (*plVar18 == param_2) {
        uVar4 = *(uint *)(param_1 + 1);
        if (uVar4 == 0) goto LAB_004bb55c;
        uVar6 = *(uint *)(plVar18 + 2);
        uVar16 = 0;
        if (uVar4 != 0) {
          uVar16 = uVar6 / uVar4;
        }
        puVar5 = *(uint **)(*param_1 + (ulong)(uVar6 - uVar16 * uVar4) * 8);
        goto joined_r0x004bb420;
      }
    }
  }
  plVar18 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
  if (plVar18 == (long *)0x0) {
    bVar2 = false;
    goto LAB_004bb594;
  }
  *(undefined1 *)((long)plVar18 + 0x14) = 1;
  *plVar18 = param_2;
  *(undefined4 *)(plVar18 + 2) = param_3;
  uVar4 = *(uint *)(param_1 + 4);
  if ((uVar4 == 0) ||
     (fVar20 = (float)NEON_ucvtf((int)param_1[5]), DAT_01d4bee0 < fVar20 / (float)uVar4)) {
    FUN_004bc4d0(plVar17);
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar4 != 0) {
      lVar7 = *plVar18;
      goto LAB_004bb440;
    }
  }
  else {
    lVar7 = param_2;
LAB_004bb440:
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = (uint)lVar7 / uVar4;
    }
    lVar7 = (ulong)((uint)lVar7 - uVar6 * uVar4) * 8;
    plVar18[1] = *(long *)(*plVar17 + lVar7);
    *(long **)(*plVar17 + lVar7) = plVar18;
    *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  }
LAB_004bb560:
  bVar2 = plVar18 != (long *)0x0;
  lVar7 = FUN_004bb880(param_1,param_3);
  if ((lVar7 != 0) && (puVar3 = (ulong *)FUN_004bc870(lVar7 + 0x28,plVar18), puVar3 != (ulong *)0x0)
     ) {
    *puVar3 = (ulong)plVar18;
    return 1;
  }
LAB_004bb594:
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 != 0) {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar19 / uVar4;
    }
    plVar17 = (long *)(*plVar17 + (ulong)(uVar19 - uVar6 * uVar4) * 8);
    plVar9 = (long *)*plVar17;
    if (plVar9 != (long *)0x0) {
      plVar11 = (long *)0x0;
      do {
        plVar10 = plVar9;
        if (*plVar10 == param_2) {
          if (plVar11 != (long *)0x0) {
            plVar17 = plVar11 + 1;
          }
          *plVar17 = plVar10[1];
          *(int *)(param_1 + 5) = (int)param_1[5] + -1;
          break;
        }
        plVar9 = (long *)plVar10[1];
        plVar11 = plVar10;
      } while ((long *)plVar10[1] != (long *)0x0);
    }
  }
  if (bVar2) {
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar4 != 0) {
      uVar19 = *(uint *)(plVar18 + 2);
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar19 / uVar4;
      }
      for (puVar5 = *(uint **)(*param_1 + (ulong)(uVar19 - uVar6 * uVar4) * 8);
          puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
        if (*puVar5 == uVar19) {
          uVar4 = puVar5[0xc];
          uVar19 = uVar4 - 1;
          if (-1 < (int)uVar19) {
            lVar7 = *(long *)(puVar5 + 10);
            iVar14 = 0;
            uVar6 = uVar19;
            goto LAB_004bb650;
          }
          break;
        }
      }
    }
LAB_004bb724:
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar18);
  }
  return 0x34;
joined_r0x004bb420:
  if (puVar5 == (uint *)0x0) goto LAB_004bb55c;
  if (*puVar5 == uVar6) {
    uVar4 = puVar5[0xc];
    uVar6 = uVar4 - 1;
    if (-1 < (int)uVar6) {
      lVar7 = *(long *)(puVar5 + 10);
      iVar14 = 0;
      uVar16 = uVar6;
      goto LAB_004bb488;
    }
    goto LAB_004bb55c;
  }
  puVar5 = *(uint **)(puVar5 + 2);
  goto joined_r0x004bb420;
LAB_004bb488:
  iVar1 = uVar16 - iVar14;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar14 + (iVar1 >> 1);
  plVar9 = *(long **)(lVar7 + (long)iVar1 * 8);
  if (plVar18 < plVar9) goto code_r0x004bb4a8;
  if (plVar9 < plVar18) {
    iVar14 = iVar1 + 1;
    if ((int)uVar16 < iVar14) goto LAB_004bb55c;
    goto LAB_004bb488;
  }
  puVar8 = (undefined8 *)(lVar7 + (long)iVar1 * 8);
  puVar13 = (undefined8 *)(lVar7 + (ulong)uVar4 * 8 + -8);
  if (puVar8 < puVar13) {
    uVar12 = (ulong)uVar4 * 8 + -9 + (long)iVar1 * -8;
    uVar4 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
    if ((uVar4 & 3) != 0) {
      lVar7 = -((ulong)uVar4 & 3);
      puVar15 = puVar8;
      do {
        puVar8 = puVar15 + 1;
        *puVar15 = *puVar8;
        lVar7 = lVar7 + 1;
        puVar15 = puVar8;
      } while (lVar7 != 0);
    }
    if (0x17 < uVar12) {
      do {
        *puVar8 = puVar8[1];
        puVar8[1] = puVar8[2];
        puVar8[2] = puVar8[3];
        puVar15 = puVar8 + 4;
        puVar8[3] = *puVar15;
        puVar8 = puVar15;
      } while (puVar15 < puVar13);
    }
    uVar6 = puVar5[0xc] - 1;
  }
  puVar5[0xc] = uVar6;
LAB_004bb55c:
  *(undefined4 *)(plVar18 + 2) = param_3;
  goto LAB_004bb560;
code_r0x004bb4a8:
  uVar16 = iVar1 - 1;
  if ((int)uVar16 < iVar14) goto LAB_004bb55c;
  goto LAB_004bb488;
LAB_004bb650:
  do {
    iVar1 = uVar6 - iVar14;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar14 + (iVar1 >> 1);
    plVar17 = *(long **)(lVar7 + (long)iVar1 * 8);
    if (plVar17 <= plVar18) {
      if (plVar17 < plVar18) goto code_r0x004bb684;
      puVar8 = (undefined8 *)(lVar7 + (long)iVar1 * 8);
      puVar13 = (undefined8 *)(lVar7 + (ulong)uVar4 * 8 + -8);
      if (puVar8 < puVar13) {
        uVar12 = (ulong)uVar4 * 8 + -9 + (long)iVar1 * -8;
        uVar4 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
        if ((uVar4 & 3) != 0) {
          lVar7 = -((ulong)uVar4 & 3);
          puVar15 = puVar8;
          do {
            puVar8 = puVar15 + 1;
            *puVar15 = *puVar8;
            lVar7 = lVar7 + 1;
            puVar15 = puVar8;
          } while (lVar7 != 0);
        }
        if (0x17 < uVar12) {
          do {
            *puVar8 = puVar8[1];
            puVar8[1] = puVar8[2];
            puVar8[2] = puVar8[3];
            puVar15 = puVar8 + 4;
            puVar8[3] = *puVar15;
            puVar8 = puVar15;
          } while (puVar15 < puVar13);
        }
        uVar19 = puVar5[0xc] - 1;
      }
      puVar5[0xc] = uVar19;
      break;
    }
    uVar6 = iVar1 - 1;
  } while (iVar14 <= (int)uVar6);
  goto LAB_004bb724;
code_r0x004bb684:
  iVar14 = iVar1 + 1;
  if ((int)uVar6 < iVar14) goto LAB_004bb724;
  goto LAB_004bb650;
}


