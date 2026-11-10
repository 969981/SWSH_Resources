/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00677d90; name: FUN_00677d90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00677d90(long param_1,uint *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  undefined1 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  uVar2 = *param_2;
  uVar5 = param_2[1];
  uVar3 = param_2[2];
  uVar6 = param_2[3];
  uVar4 = param_2[4];
  uVar7 = param_2[5];
  plVar8 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                             (*(long **)(param_1 + 8),0x48,0x10,
                              "../../../../Include\\SiCore/SiCore_Map.h",0x3cb);
  *plVar8 = param_1;
  *(uint *)(plVar8 + 1) = uVar2;
  *(uint *)((long)plVar8 + 0xc) = uVar5;
  *(uint *)(plVar8 + 2) = uVar3;
  *(uint *)((long)plVar8 + 0x14) = uVar6;
  *(uint *)(plVar8 + 3) = uVar4;
  *(uint *)((long)plVar8 + 0x1c) = uVar7;
  plVar8[4] = param_3;
  plVar8[5] = 0;
  *(undefined1 *)(plVar8 + 8) = 1;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar9 = (long *)(param_1 + 0x18);
  lVar11 = *plVar9;
  if (*plVar9 == 0) {
    uVar10 = 0;
    plVar12 = plVar9;
  }
  else {
    do {
      while ((lVar13 = lVar11, *(uint *)(lVar13 + 8) <= uVar2 &&
             ((*(uint *)(lVar13 + 8) < uVar2 ||
              ((*(int *)(lVar13 + 0xc) <= (int)uVar5 &&
               ((*(int *)(lVar13 + 0xc) < (int)uVar5 ||
                ((*(uint *)(lVar13 + 0x10) <= uVar3 &&
                 ((*(uint *)(lVar13 + 0x10) < uVar3 ||
                  ((*(int *)(lVar13 + 0x14) <= (int)uVar6 &&
                   ((*(int *)(lVar13 + 0x14) < (int)uVar6 ||
                    ((*(uint *)(lVar13 + 0x18) <= uVar4 &&
                     ((*(uint *)(lVar13 + 0x18) < uVar4 || (*(uint *)(lVar13 + 0x1c) <= uVar7)))))))
                   )))))))))))))) {
        lVar11 = *(long *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) == 0) {
          plVar12 = (long *)(lVar13 + 0x38);
          goto LAB_00677e94;
        }
      }
      lVar11 = *(long *)(lVar13 + 0x30);
    } while (*(long *)(lVar13 + 0x30) != 0);
    plVar12 = (long *)(lVar13 + 0x30);
LAB_00677e94:
    plVar8[5] = lVar13;
    uVar10 = 1;
  }
  *plVar12 = (long)plVar8;
  *(undefined1 *)(plVar8 + 8) = uVar10;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  if (*(long **)(param_1 + 0x18) == plVar8) {
    *(undefined1 *)(plVar8 + 8) = 0;
    return 1;
  }
  while( true ) {
    lVar11 = plVar8[5];
    if (*(char *)(lVar11 + 0x40) == '\0') {
      return 1;
    }
    if (lVar11 == 0) break;
    lVar13 = *(long *)(lVar11 + 0x28);
    if (lVar13 == 0) goto LAB_00677f4c;
    lVar14 = *(long *)(lVar13 + 0x30);
    if (lVar11 == lVar14) {
      lVar14 = *(long *)(lVar13 + 0x38);
    }
    if ((lVar14 == 0) || (*(char *)(lVar14 + 0x40) == '\0')) goto LAB_00677f4c;
    *(undefined1 *)(lVar11 + 0x40) = 0;
    *(undefined1 *)(lVar14 + 0x40) = 0;
    *(undefined1 *)(*(long *)(lVar14 + 0x28) + 0x40) = 1;
    plVar8 = *(long **)(lVar14 + 0x28);
    if (plVar8 == (long *)*plVar9) {
      *(undefined1 *)(plVar8 + 8) = 0;
      if (plVar8 == (long *)*plVar9) {
        return 1;
      }
    }
    else if (plVar8 == (long *)*plVar9) {
      return 1;
    }
  }
  lVar13 = _DAT_00000028;
LAB_00677f4c:
  plVar12 = plVar8 + 5;
  if ((plVar8 == *(long **)(lVar11 + 0x38)) && (lVar11 == *(long *)(lVar13 + 0x30))) {
    if (plVar8 != (long *)0x0) {
      *(long *)(lVar11 + 0x38) = plVar8[6];
      if (plVar8[6] != 0) {
        *(long *)(plVar8[6] + 0x28) = lVar11;
      }
    }
    if (*plVar9 == lVar11) {
      *plVar9 = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        *plVar12 = 0;
        goto LAB_00678150;
      }
    }
    else {
      lVar13 = *(long *)(lVar11 + 0x28);
      if (plVar8 != (long *)0x0) {
        *plVar12 = lVar13;
      }
      if (lVar13 != 0) {
        lVar14 = 0x30;
        if (*(long *)(lVar13 + 0x30) != lVar11) {
          lVar14 = 0x38;
        }
        *(long **)(lVar13 + lVar14) = plVar8;
      }
      if (plVar8 != (long *)0x0) {
LAB_00678150:
        plVar8[6] = lVar11;
      }
    }
    *(long **)(lVar11 + 0x28) = plVar8;
    plVar8 = plVar8 + 6;
LAB_0067818c:
    plVar8 = (long *)*plVar8;
    plVar12 = plVar8 + 5;
    *(undefined1 *)(*plVar12 + 0x40) = 0;
    if (plVar8 != (long *)0x0) goto LAB_00677f84;
    lVar11 = 0;
  }
  else {
    if ((plVar8 == *(long **)(lVar11 + 0x30)) && (lVar11 == *(long *)(lVar13 + 0x38))) {
      if (plVar8 != (long *)0x0) {
        *(long *)(lVar11 + 0x30) = plVar8[7];
        if (plVar8[7] != 0) {
          *(long *)(plVar8[7] + 0x28) = lVar11;
        }
      }
      if (*plVar9 == lVar11) {
        *plVar9 = (long)plVar8;
        if (plVar8 != (long *)0x0) {
          *plVar12 = 0;
          goto LAB_00678180;
        }
      }
      else {
        lVar13 = *(long *)(lVar11 + 0x28);
        if (plVar8 != (long *)0x0) {
          *plVar12 = lVar13;
        }
        if (lVar13 != 0) {
          lVar14 = 0x30;
          if (*(long *)(lVar13 + 0x30) != lVar11) {
            lVar14 = 0x38;
          }
          *(long **)(lVar13 + lVar14) = plVar8;
        }
        if (plVar8 != (long *)0x0) {
LAB_00678180:
          plVar8[7] = lVar11;
        }
      }
      *(long **)(lVar11 + 0x28) = plVar8;
      plVar8 = plVar8 + 7;
      goto LAB_0067818c;
    }
    *(undefined1 *)(lVar11 + 0x40) = 0;
LAB_00677f84:
    lVar11 = 0;
    if (plVar8[5] != 0) {
      lVar11 = *(long *)(plVar8[5] + 0x28);
    }
  }
  *(undefined1 *)(lVar11 + 0x40) = 1;
  lVar13 = *plVar12;
  if (plVar8 == *(long **)(lVar13 + 0x30)) {
    if (lVar13 == *(long *)(lVar11 + 0x30)) {
      if (lVar13 != 0) {
        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar13 + 0x38);
        if (*(long *)(lVar13 + 0x38) != 0) {
          *(long *)(*(long *)(lVar13 + 0x38) + 0x28) = lVar11;
        }
      }
      if (*plVar9 == lVar11) {
        *plVar9 = lVar13;
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(long *)(lVar13 + 0x38) = lVar11;
        }
      }
      else {
        lVar14 = *(long *)(lVar11 + 0x28);
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x28) = lVar14;
        }
        if (lVar14 != 0) {
          lVar1 = 0x30;
          if (*(long *)(lVar14 + 0x30) != lVar11) {
            lVar1 = 0x38;
          }
          *(long *)(lVar14 + lVar1) = lVar13;
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x38) = lVar11;
        }
      }
      goto LAB_00678024;
    }
  }
  else if (lVar11 == 0) {
    return 1;
  }
  lVar13 = *(long *)(lVar11 + 0x38);
  if (lVar13 != 0) {
    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar13 + 0x30);
    if (*(long *)(lVar13 + 0x30) != 0) {
      *(long *)(*(long *)(lVar13 + 0x30) + 0x28) = lVar11;
    }
  }
  if (*plVar9 == lVar11) {
    *plVar9 = lVar13;
    if (lVar13 == 0) goto LAB_00678024;
    *(undefined8 *)(lVar13 + 0x28) = 0;
  }
  else {
    lVar14 = *(long *)(lVar11 + 0x28);
    if (lVar13 != 0) {
      *(long *)(lVar13 + 0x28) = lVar14;
    }
    if (lVar14 != 0) {
      lVar1 = 0x30;
      if (*(long *)(lVar14 + 0x30) != lVar11) {
        lVar1 = 0x38;
      }
      *(long *)(lVar14 + lVar1) = lVar13;
    }
    if (lVar13 == 0) goto LAB_00678024;
  }
  *(long *)(lVar13 + 0x30) = lVar11;
LAB_00678024:
  *(long *)(lVar11 + 0x28) = lVar13;
  return 1;
}


