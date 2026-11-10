/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ecd90; name: FUN_004ecd90
 */


undefined8 FUN_004ecd90(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  
  puVar2 = PTR_DAT_02713640;
  uVar6 = *(uint *)(param_1 + 0x30);
  if (uVar6 != 0) {
    lVar7 = (ulong)uVar6 << 3;
    plVar5 = *(long **)(param_1 + 0x28);
    do {
      if (*plVar5 == param_2) {
        return 1;
      }
      lVar7 = lVar7 + -8;
      plVar5 = plVar5 + 1;
    } while (lVar7 != 0);
  }
  uVar14 = *(uint *)(param_1 + 0x34);
  if (uVar6 < uVar14) {
LAB_004ece68:
    if (uVar6 < uVar14) {
      plVar5 = (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8);
      uVar6 = *(uint *)(param_1 + 0x30) + 1;
      *(uint *)(param_1 + 0x30) = uVar6;
      if (plVar5 == (long *)0x0) goto LAB_004ed19c;
      *plVar5 = param_2;
      puVar2 = PTR_DAT_02713640;
      if ((param_3 & 1) == 0) {
        return 1;
      }
      uVar6 = *(uint *)(param_2 + 0x30);
      if (uVar6 != 0) {
        lVar7 = (ulong)uVar6 << 3;
        plVar5 = *(long **)(param_2 + 0x28);
        do {
          if (*plVar5 == param_1) {
            return 1;
          }
          lVar7 = lVar7 + -8;
          plVar5 = plVar5 + 1;
        } while (lVar7 != 0);
      }
      uVar14 = *(uint *)(param_2 + 0x34);
      if (uVar6 < uVar14) {
LAB_004ecf44:
        if (uVar14 <= uVar6) goto LAB_004ecf78;
        plVar5 = (long *)(*(long *)(param_2 + 0x28) + (ulong)*(uint *)(param_2 + 0x30) * 8);
        uVar6 = *(uint *)(param_2 + 0x30) + 1;
        *(uint *)(param_2 + 0x30) = uVar6;
        if (plVar5 != (long *)0x0) {
          *plVar5 = param_1;
          return 1;
        }
      }
      else {
        uVar14 = uVar14 + 8;
        puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar14 << 3);
        if (puVar3 != (undefined8 *)0x0) {
          puVar4 = *(undefined8 **)(param_2 + 0x28);
          if ((puVar4 != (undefined8 *)0x0) && (puVar4 != puVar3)) {
            uVar1 = *(uint *)(param_2 + 0x30);
            if (uVar1 != 0) {
              *puVar3 = *puVar4;
              if (uVar1 != 1) {
                if (uVar1 == 2) {
                  lVar8 = 1;
                }
                else {
                  lVar7 = 0;
                  do {
                    lVar8 = lVar7;
                    puVar3[lVar8 + 1] = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar8 * 8 + 8);
                    puVar3[lVar8 + 2] =
                         *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar8 * 8 + 0x10);
                    lVar7 = lVar8 + 2;
                  } while (((ulong)uVar1 - 1) - (ulong)(~uVar1 & 1) != lVar8 + 2);
                  lVar8 = lVar8 + 3;
                  if ((~uVar1 & 1) == 0) goto LAB_004ecf30;
                }
                puVar3[lVar8] = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar8 * 8);
              }
LAB_004ecf30:
              puVar4 = *(undefined8 **)(param_2 + 0x28);
            }
            FUN_00404870(*(undefined4 *)puVar2,puVar4);
          }
          *(undefined8 **)(param_2 + 0x28) = puVar3;
          *(uint *)(param_2 + 0x34) = uVar14;
          goto LAB_004ecf44;
        }
LAB_004ecf78:
        uVar6 = *(uint *)(param_2 + 0x30);
      }
      if (uVar6 != 0) {
        plVar5 = *(long **)(param_2 + 0x28);
        lVar7 = (ulong)uVar6 * 8;
        plVar10 = plVar5 + uVar6;
        do {
          if (*plVar5 == param_1) {
            uVar14 = *(uint *)(param_1 + 0x30);
            uVar11 = (ulong)uVar14;
            if (uVar14 == 0) goto LAB_004ed110;
            plVar13 = *(long **)(param_1 + 0x28);
            lVar7 = uVar11 * 8;
            plVar9 = plVar13;
            goto LAB_004ed010;
          }
          plVar5 = plVar5 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
  }
  else {
    uVar14 = uVar14 + 8;
    puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar14 << 3);
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      if ((puVar4 != (undefined8 *)0x0) && (puVar4 != puVar3)) {
        uVar1 = *(uint *)(param_1 + 0x30);
        if (uVar1 != 0) {
          *puVar3 = *puVar4;
          if (uVar1 != 1) {
            if (uVar1 == 2) {
              lVar8 = 1;
            }
            else {
              lVar7 = 0;
              do {
                lVar8 = lVar7;
                puVar3[lVar8 + 1] = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8 * 8 + 8);
                puVar3[lVar8 + 2] = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8 * 8 + 0x10);
                lVar7 = lVar8 + 2;
              } while (((ulong)uVar1 - 1) - (ulong)(~uVar1 & 1) != lVar8 + 2);
              lVar8 = lVar8 + 3;
              if ((~uVar1 & 1) == 0) goto LAB_004ece54;
            }
            puVar3[lVar8] = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8 * 8);
          }
LAB_004ece54:
          puVar4 = *(undefined8 **)(param_1 + 0x28);
        }
        FUN_00404870(*(undefined4 *)puVar2,puVar4);
      }
      *(undefined8 **)(param_1 + 0x28) = puVar3;
      *(uint *)(param_1 + 0x34) = uVar14;
      goto LAB_004ece68;
    }
  }
LAB_004ed198:
  uVar6 = *(uint *)(param_1 + 0x30);
LAB_004ed19c:
  if (uVar6 != 0) {
    plVar5 = *(long **)(param_1 + 0x28);
    lVar7 = (ulong)uVar6 * 8;
    plVar10 = plVar5 + uVar6;
    do {
      if (*plVar5 == param_2) {
        uVar14 = *(uint *)(param_2 + 0x30);
        uVar11 = (ulong)uVar14;
        if (uVar14 == 0) goto joined_r0x004ed208;
        plVar13 = *(long **)(param_2 + 0x28);
        lVar7 = uVar11 * 8;
        plVar9 = plVar13;
        goto LAB_004ed1e8;
      }
      plVar5 = plVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return 0x34;
LAB_004ed010:
  if (*plVar9 != param_2) goto code_r0x004ed01c;
  if (plVar9 < plVar13 + (uVar11 - 1)) {
    uVar12 = (long)plVar13 + ~(ulong)plVar9 + uVar11 * 8 + -8;
    uVar6 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
    if ((uVar6 & 3) != 0) {
      lVar7 = -((ulong)uVar6 & 3);
      plVar10 = plVar9;
      do {
        plVar9 = plVar10 + 1;
        *plVar10 = *plVar9;
        lVar7 = lVar7 + 1;
        plVar10 = plVar9;
      } while (lVar7 != 0);
    }
    if (0x17 < uVar12) {
      do {
        *plVar9 = plVar9[1];
        plVar9[1] = plVar9[2];
        plVar9[2] = plVar9[3];
        plVar10 = plVar9 + 4;
        plVar9[3] = *plVar10;
        plVar9 = plVar10;
      } while (plVar10 < plVar13 + (uVar11 - 1));
    }
    uVar14 = *(uint *)(param_1 + 0x30);
  }
  *(uint *)(param_1 + 0x30) = uVar14 - 1;
  uVar6 = *(uint *)(param_2 + 0x30);
  plVar10 = (long *)(*(long *)(param_2 + 0x28) + (ulong)uVar6 * 8);
LAB_004ed110:
  if (plVar5 < plVar10 + -1) {
    uVar11 = (long)plVar10 + (~(ulong)plVar5 - 8);
    uVar6 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
    if ((uVar6 & 3) != 0) {
      lVar7 = -((ulong)uVar6 & 3);
      plVar9 = plVar5;
      do {
        plVar5 = plVar9 + 1;
        *plVar9 = *plVar5;
        lVar7 = lVar7 + 1;
        plVar9 = plVar5;
      } while (lVar7 != 0);
    }
    if (0x17 < uVar11) {
      do {
        *plVar5 = plVar5[1];
        plVar5[1] = plVar5[2];
        plVar5[2] = plVar5[3];
        plVar9 = plVar5 + 4;
        plVar5[3] = *plVar9;
        plVar5 = plVar9;
      } while (plVar9 < plVar10 + -1);
    }
    uVar6 = *(uint *)(param_2 + 0x30);
  }
  *(uint *)(param_2 + 0x30) = uVar6 - 1;
  goto LAB_004ed198;
code_r0x004ed01c:
  plVar9 = plVar9 + 1;
  lVar7 = lVar7 + -8;
  if (lVar7 == 0) goto LAB_004ed110;
  goto LAB_004ed010;
LAB_004ed1e8:
  if (*plVar9 == param_1) {
    if (plVar9 < plVar13 + (uVar11 - 1)) {
      uVar12 = (long)plVar13 + ~(ulong)plVar9 + uVar11 * 8 + -8;
      uVar6 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
      if ((uVar6 & 3) != 0) {
        lVar7 = -((ulong)uVar6 & 3);
        plVar10 = plVar9;
        do {
          plVar9 = plVar10 + 1;
          *plVar10 = *plVar9;
          lVar7 = lVar7 + 1;
          plVar10 = plVar9;
        } while (lVar7 != 0);
      }
      if (0x17 < uVar12) {
        do {
          *plVar9 = plVar9[1];
          plVar9[1] = plVar9[2];
          plVar9[2] = plVar9[3];
          plVar10 = plVar9 + 4;
          plVar9[3] = *plVar10;
          plVar9 = plVar10;
        } while (plVar10 < plVar13 + (uVar11 - 1));
      }
      uVar14 = *(uint *)(param_2 + 0x30);
    }
    *(uint *)(param_2 + 0x30) = uVar14 - 1;
    uVar6 = *(uint *)(param_1 + 0x30);
    plVar10 = (long *)(*(long *)(param_1 + 0x28) + (ulong)uVar6 * 8);
joined_r0x004ed208:
    if (plVar5 < plVar10 + -1) {
      uVar11 = (long)plVar10 + (~(ulong)plVar5 - 8);
      uVar6 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
      if ((uVar6 & 3) != 0) {
        lVar7 = -((ulong)uVar6 & 3);
        plVar9 = plVar5;
        do {
          plVar5 = plVar9 + 1;
          *plVar9 = *plVar5;
          lVar7 = lVar7 + 1;
          plVar9 = plVar5;
        } while (lVar7 != 0);
      }
      if (0x17 < uVar11) {
        do {
          *plVar5 = plVar5[1];
          plVar5[1] = plVar5[2];
          plVar5[2] = plVar5[3];
          plVar9 = plVar5 + 4;
          plVar5[3] = *plVar9;
          plVar5 = plVar9;
        } while (plVar9 < plVar10 + -1);
      }
      uVar6 = *(uint *)(param_1 + 0x30);
    }
    *(uint *)(param_1 + 0x30) = uVar6 - 1;
    return 0x34;
  }
  plVar9 = plVar9 + 1;
  lVar7 = lVar7 + -8;
  if (lVar7 == 0) goto joined_r0x004ed208;
  goto LAB_004ed1e8;
}


