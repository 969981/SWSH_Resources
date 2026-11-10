/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00485880; name: FUN_00485880
 */


long * FUN_00485880(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 uVar18;
  long *plVar19;
  uint uVar20;
  
  if (param_2 == 0) {
    FUN_00499400(*(undefined8 *)PTR_DAT_02712d20,param_1);
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
      return *(long **)(param_1 + 0x50);
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined1 *)(*(long *)(param_1 + 0x60) + 0x24);
    }
    plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
    puVar5 = PTR_DAT_02713050;
    if (plVar8 != (long *)0x0) {
      *(undefined1 *)(plVar8 + 4) = uVar18;
      plVar8[2] = 0;
      plVar8[3] = 0;
      *plVar8 = (long)(puVar5 + 0x10);
      plVar8[1] = param_1;
    }
    *(long **)(param_1 + 0x50) = plVar8;
    return plVar8;
  }
  plVar8 = *(long **)(param_1 + 0x58);
  if (plVar8 == (long *)0x0) {
    puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
    *(undefined8 **)(param_1 + 0x58) = puVar9;
    plVar8 = (long *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      plVar8 = *(long **)(param_1 + 0x58);
    }
    if (plVar8 == (long *)0x0) {
      return (long *)0x0;
    }
  }
  puVar5 = PTR_DAT_02712a90;
  plVar11 = (long *)*plVar8;
  uVar14 = *(uint *)(plVar8 + 1);
  plVar8 = plVar11;
  if (uVar14 == 0) {
LAB_0048593c:
    if (plVar8 != plVar11 + (ulong)uVar14 * 2) {
      return (long *)plVar8[1];
    }
  }
  else {
    lVar15 = (ulong)uVar14 << 4;
    do {
      if (*plVar8 == param_2) goto LAB_0048593c;
      lVar15 = lVar15 + -0x10;
      plVar8 = plVar8 + 2;
    } while (lVar15 != 0);
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined1 *)(*(long *)(param_1 + 0x60) + 0x24);
  }
  plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
  puVar6 = PTR_DAT_02713050;
  if (plVar8 == (long *)0x0) {
    return (long *)0x0;
  }
  *(undefined1 *)(plVar8 + 4) = uVar18;
  plVar8[2] = param_2;
  plVar8[3] = 0;
  *plVar8 = (long)(puVar6 + 0x10);
  plVar8[1] = param_1;
  plVar19 = *(long **)(param_1 + 0x58);
  plVar12 = (long *)*plVar19;
  uVar14 = *(uint *)(plVar19 + 1);
  plVar11 = plVar12;
  if (uVar14 == 0) {
LAB_004859d8:
    if (plVar11 == plVar12 + (ulong)uVar14 * 2) goto LAB_004859fc;
    plVar11[1] = (long)plVar8;
    lVar15 = FUN_00485d10(param_2);
  }
  else {
    lVar15 = (ulong)uVar14 << 4;
    do {
      if (*plVar11 == param_2) goto LAB_004859d8;
      lVar15 = lVar15 + -0x10;
      plVar11 = plVar11 + 2;
    } while (lVar15 != 0);
LAB_004859fc:
    uVar20 = *(uint *)((long)plVar19 + 0xc);
    if (uVar20 <= uVar14) {
      uVar20 = uVar20 + 1;
      puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar5,(ulong)uVar20 << 4);
      if (puVar9 == (undefined8 *)0x0) goto LAB_00485cd4;
      puVar10 = (undefined8 *)*plVar19;
      if ((puVar10 != (undefined8 *)0x0) && (puVar10 != puVar9)) {
        uVar3 = *(uint *)(plVar19 + 1);
        if (uVar3 != 0) {
          puVar9[1] = puVar10[1];
          *puVar9 = *puVar10;
          if (uVar3 != 1) {
            uVar2 = uVar3 + 3 & 3;
            if ((ulong)uVar3 - 2 < 3) {
              lVar13 = 1;
            }
            else {
              lVar13 = 1;
              lVar15 = 0x40;
              do {
                lVar17 = *plVar19;
                puVar10 = (undefined8 *)((long)puVar9 + lVar15);
                puVar10[-5] = *(undefined8 *)(lVar17 + lVar15 + -0x28);
                puVar10[-6] = *(undefined8 *)(lVar17 + lVar15 + -0x30);
                lVar17 = *plVar19;
                puVar10[-3] = *(undefined8 *)(lVar17 + lVar15 + -0x18);
                puVar10[-4] = *(undefined8 *)(lVar17 + lVar15 + -0x20);
                lVar17 = *plVar19;
                puVar10[-1] = *(undefined8 *)(lVar17 + lVar15 + -8);
                puVar10[-2] = *(undefined8 *)(lVar17 + lVar15 + -0x10);
                puVar1 = (undefined8 *)(*plVar19 + lVar15);
                lVar15 = lVar15 + 0x40;
                *puVar10 = *puVar1;
                lVar13 = lVar13 + 4;
                puVar10[1] = puVar1[1];
              } while ((ulong)uVar3 - (ulong)uVar2 != lVar13);
            }
            if (uVar2 != 0) {
              lVar13 = lVar13 << 4;
              lVar15 = -(ulong)uVar2;
              do {
                puVar10 = (undefined8 *)(*plVar19 + lVar13);
                puVar1 = (undefined8 *)((long)puVar9 + lVar13);
                lVar13 = lVar13 + 0x10;
                puVar1[1] = puVar10[1];
                lVar15 = lVar15 + 1;
                *puVar1 = *puVar10;
              } while (lVar15 != 0);
            }
          }
          puVar10 = (undefined8 *)*plVar19;
        }
        FUN_00404870(*(undefined4 *)puVar5,puVar10);
      }
      *plVar19 = (long)puVar9;
      *(uint *)((long)plVar19 + 0xc) = uVar20;
    }
    if (uVar20 <= uVar14) goto LAB_00485cd4;
    uVar14 = *(uint *)(plVar19 + 1);
    lVar15 = *plVar19;
    *(uint *)(plVar19 + 1) = uVar14 + 1;
    plVar11 = (long *)(lVar15 + (ulong)uVar14 * 0x10);
    if (plVar11 == (long *)0x0) goto LAB_00485cd4;
    *plVar11 = param_2;
    *(long **)(lVar15 + (ulong)uVar14 * 0x10 + 8) = plVar8;
    lVar15 = FUN_00485d10(param_2);
  }
  if ((lVar15 != 0) && (iVar7 = FUN_00495f80(lVar15,param_1), iVar7 == 1)) {
    return plVar8;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x58);
  plVar19 = (long *)*puVar9;
  uVar14 = *(uint *)(puVar9 + 1);
  uVar16 = (ulong)uVar14;
  plVar11 = plVar19 + uVar16 * 2;
  plVar12 = plVar19;
  if (uVar14 == 0) {
LAB_00485c14:
    if (plVar11 != plVar12) {
      if (plVar12 < plVar11 + -2) {
        uVar16 = (long)plVar19 + ~(ulong)plVar12 + uVar16 * 0x10 + -0x10;
        uVar14 = ((uint)(uVar16 >> 4) & 0xfffffff) + 1;
        if ((uVar14 & 7) != 0) {
          lVar15 = -((ulong)uVar14 & 7);
          plVar19 = plVar12;
          do {
            plVar12 = plVar19 + 2;
            *plVar19 = *plVar12;
            plVar19[1] = plVar19[3];
            lVar15 = lVar15 + 1;
            plVar19 = plVar12;
          } while (lVar15 != 0);
        }
        if (0x6f < uVar16) {
          do {
            *plVar12 = plVar12[2];
            plVar12[1] = plVar12[3];
            plVar12[2] = plVar12[4];
            plVar12[3] = plVar12[5];
            plVar12[4] = plVar12[6];
            plVar12[5] = plVar12[7];
            plVar12[6] = plVar12[8];
            plVar12[7] = plVar12[9];
            plVar12[8] = plVar12[10];
            plVar12[9] = plVar12[0xb];
            plVar12[10] = plVar12[0xc];
            plVar12[0xb] = plVar12[0xd];
            plVar12[0xc] = plVar12[0xe];
            plVar12[0xd] = plVar12[0xf];
            plVar19 = plVar12 + 0x10;
            plVar12[0xe] = *plVar19;
            plVar12[0xf] = plVar12[0x11];
            plVar12 = plVar19;
          } while (plVar19 < plVar11 + -2);
        }
        uVar14 = *(uint *)(puVar9 + 1);
      }
      *(uint *)(puVar9 + 1) = uVar14 - 1;
    }
  }
  else {
    lVar15 = uVar16 << 4;
    do {
      if (*plVar12 == param_2) goto LAB_00485c14;
      lVar15 = lVar15 + -0x10;
      plVar12 = plVar12 + 2;
    } while (lVar15 != 0);
  }
LAB_00485cd4:
  uVar4 = *(undefined4 *)puVar5;
  FUN_004a6600(plVar8);
  FUN_00404870(uVar4,plVar8);
  return (long *)0x0;
}


