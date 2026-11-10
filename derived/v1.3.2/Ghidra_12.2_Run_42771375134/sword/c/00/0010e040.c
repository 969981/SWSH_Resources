/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0010e040; name: FUN_0010e040
 */


long * FUN_0010e040(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  
  puVar1 = (ulong *)(param_2 + 2);
  puVar2 = (ulong *)(param_2 + 3);
  puVar4 = puVar1;
  if (param_2[5] != 0) {
    puVar4 = puVar2;
  }
  uVar14 = *puVar4;
  param_2[1] = uVar14;
  uVar11 = param_1[1];
  if ((uVar11 == 0) || (*(float *)(param_1 + 10) * (float)uVar11 < (float)(param_1[9] + 1))) {
    uVar14 = 1;
    if (2 < uVar11) {
      uVar14 = (ulong)((uVar11 - 1 & uVar11) != 0);
    }
    uVar14 = uVar14 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
    FUN_0010e3c0(param_1,uVar11);
    uVar11 = param_1[1];
    uVar14 = param_2[1];
    uVar12 = uVar11 - 1;
    uVar3 = uVar12 & uVar11;
  }
  else {
    uVar12 = uVar11 - 1;
    uVar3 = uVar12 & uVar11;
  }
  if (uVar3 == 0) {
    uVar13 = uVar12 & uVar14;
    plVar15 = *(long **)(*param_1 + uVar13 * 8);
  }
  else {
    uVar13 = uVar14;
    if (uVar11 <= uVar14) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar14 / uVar11;
      }
      uVar13 = uVar14 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*param_1 + uVar13 * 8);
  }
  if (plVar15 == (long *)0x0) {
    plVar15 = param_1 + 5;
    *param_2 = *plVar15;
    *plVar15 = (long)param_2;
    *(long **)(*param_1 + uVar13 * 8) = plVar15;
    if (*param_2 != 0) {
      uVar14 = *(ulong *)(*param_2 + 8);
      if (uVar3 == 0) {
        uVar14 = uVar14 & uVar12;
      }
      else if (uVar11 <= uVar14) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar14 / uVar11;
        }
        uVar14 = uVar14 - uVar3 * uVar11;
      }
      *(long **)(*param_1 + uVar14 * 8) = param_2;
    }
  }
  else {
    bVar8 = false;
    if (uVar3 == 0) {
LAB_0010e294:
      do {
        bVar9 = bVar8;
        plVar16 = plVar15;
        plVar15 = (long *)*plVar16;
        if ((plVar15 == (long *)0x0) || ((plVar15[1] & uVar12) != uVar13)) break;
        if (plVar15[1] == uVar14) {
          bVar8 = bVar9;
          if ((int)plVar15[7] == (int)param_2[7]) {
            puVar4 = (ulong *)(plVar15 + 2);
            if (plVar15[5] != 0) {
              puVar4 = (ulong *)(plVar15 + 3);
            }
            puVar5 = puVar1;
            if (param_2[5] != 0) {
              puVar5 = puVar2;
            }
            bVar10 = *puVar4 == *puVar5;
            if (((param_2[5] == 0) || (plVar15[5] == 0)) || (*puVar4 != *puVar5)) goto LAB_0010e274;
            uVar18 = plVar15[2];
            plVar6 = (long *)PTR_DAT_02710920;
            if (uVar18 != 0) {
              plVar6 = (long *)(uVar18 + 0x58);
            }
            plVar7 = (long *)PTR_DAT_02710920;
            if (*puVar1 != 0) {
              plVar7 = (long *)(*puVar1 + 0x58);
            }
            bVar8 = (bool)(bVar9 | *plVar6 == *plVar7);
            if (*plVar6 == *plVar7) goto LAB_0010e294;
          }
        }
        else {
          bVar10 = false;
LAB_0010e274:
          bVar8 = (bool)(bVar9 | bVar10);
          if (bVar10) goto LAB_0010e294;
        }
      } while (!bVar9);
    }
    else {
LAB_0010e1b8:
      do {
        bVar9 = bVar8;
        plVar16 = plVar15;
        plVar15 = (long *)*plVar16;
        if (plVar15 == (long *)0x0) break;
        uVar17 = plVar15[1];
        uVar18 = uVar17;
        if (uVar11 <= uVar17) {
          uVar18 = 0;
          if (uVar11 != 0) {
            uVar18 = uVar17 / uVar11;
          }
          uVar18 = uVar17 - uVar18 * uVar11;
        }
        if (uVar18 != uVar13) break;
        if (uVar17 == uVar14) {
          bVar8 = bVar9;
          if ((int)plVar15[7] == (int)param_2[7]) {
            puVar4 = (ulong *)(plVar15 + 2);
            if (plVar15[5] != 0) {
              puVar4 = (ulong *)(plVar15 + 3);
            }
            puVar5 = puVar1;
            if (param_2[5] != 0) {
              puVar5 = puVar2;
            }
            bVar10 = *puVar4 == *puVar5;
            if (((param_2[5] == 0) || (plVar15[5] == 0)) || (*puVar4 != *puVar5)) goto LAB_0010e198;
            uVar18 = plVar15[2];
            plVar6 = (long *)PTR_DAT_02710920;
            if (uVar18 != 0) {
              plVar6 = (long *)(uVar18 + 0x58);
            }
            plVar7 = (long *)PTR_DAT_02710920;
            if (*puVar1 != 0) {
              plVar7 = (long *)(*puVar1 + 0x58);
            }
            bVar8 = (bool)(bVar9 | *plVar6 == *plVar7);
            if (*plVar6 == *plVar7) goto LAB_0010e1b8;
          }
        }
        else {
          bVar10 = false;
LAB_0010e198:
          bVar8 = (bool)(bVar9 | bVar10);
          if (bVar10) goto LAB_0010e1b8;
        }
      } while (!bVar9);
    }
    *param_2 = *plVar16;
    *plVar16 = (long)param_2;
    if (*param_2 != 0) {
      uVar14 = *(ulong *)(*param_2 + 8);
      if (uVar3 == 0) {
        uVar14 = uVar14 & uVar12;
      }
      else if (uVar11 <= uVar14) {
        uVar3 = 0;
        if (uVar11 != 0) {
          uVar3 = uVar14 / uVar11;
        }
        uVar14 = uVar14 - uVar3 * uVar11;
      }
      if (uVar14 != uVar13) {
        *(long **)(*param_1 + uVar14 * 8) = param_2;
      }
    }
  }
  param_1[9] = param_1[9] + 1;
  return param_2;
}


