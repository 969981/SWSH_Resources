/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9fc00; name: FUN_00d9fc00
 */


void FUN_00d9fc00(long param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  
  lVar14 = param_1 + (long)param_2 * 0x58;
  plVar15 = (long *)(lVar14 + 0x70);
  plVar13 = (long *)*plVar15;
  if (plVar13 == (long *)0x0) {
LAB_00d9fe24:
    plVar13 = (long *)(param_1 + (long)param_2 * 0x58 + 0x90);
    if (*plVar13 != 0) {
      plVar3 = (long *)(lVar14 + 0x48);
      FUN_01010a60(plVar3,*plVar15);
      *plVar15 = 0;
      uVar6 = *(ulong *)(param_1 + (long)param_2 * 0x58 + 0x50);
      if (uVar6 != 0) {
        uVar5 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            lVar8 = lVar14 * 8;
            lVar14 = lVar14 + 4;
            *(undefined8 *)(*plVar3 + lVar8) = 0;
            *(undefined8 *)(*plVar3 + lVar8 + 8) = 0;
            *(undefined8 *)(*plVar3 + lVar8 + 0x10) = 0;
            *(undefined8 *)(*plVar3 + lVar8 + 0x18) = 0;
          } while (uVar6 - uVar5 != lVar14);
        }
        if (uVar5 != 0) {
          lVar14 = lVar14 << 3;
          lVar8 = -uVar5;
          do {
            *(undefined8 *)(*plVar3 + lVar14) = 0;
            lVar14 = lVar14 + 8;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0);
        }
      }
      *plVar13 = 0;
    }
    return;
  }
LAB_00d9fd54:
  do {
    uVar6 = *(ulong *)(param_1 + 0x470);
    if (uVar6 != 0) {
      uVar4 = plVar13[2];
      uVar7 = uVar6 - 1;
      uVar5 = uVar7 & uVar6;
      if (uVar5 == 0) {
        uVar9 = uVar7 & uVar4;
        lVar8 = *(long *)(param_1 + 0x468);
        puVar11 = *(undefined8 **)(lVar8 + uVar9 * 8);
      }
      else {
        uVar9 = uVar4;
        if (uVar6 <= uVar4) {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = uVar4 / uVar6;
          }
          uVar9 = uVar4 - uVar9 * uVar6;
        }
        lVar8 = *(long *)(param_1 + 0x468);
        puVar11 = *(undefined8 **)(lVar8 + uVar9 * 8);
      }
      if ((puVar11 != (undefined8 *)0x0) && (plVar3 = (long *)*puVar11, plVar3 != (long *)0x0)) {
        if (uVar5 == 0) {
          do {
            uVar12 = plVar3[1];
            if (uVar12 != uVar4 && (uVar12 & uVar7) != uVar9) break;
            if ((uVar12 == uVar4) && (plVar3[2] == uVar4)) goto LAB_00d9fc34;
            plVar3 = (long *)*plVar3;
          } while (plVar3 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar3[1];
            if (uVar12 == uVar4) {
              if (plVar3[2] == uVar4) goto LAB_00d9fc34;
            }
            else {
              if (uVar6 <= uVar12) {
                uVar1 = 0;
                if (uVar6 != 0) {
                  uVar1 = uVar12 / uVar6;
                }
                uVar12 = uVar12 - uVar1 * uVar6;
              }
              if (uVar12 != uVar9) break;
            }
            plVar3 = (long *)*plVar3;
          } while (plVar3 != (long *)0x0);
        }
      }
    }
    plVar13 = (long *)*plVar13;
  } while (plVar13 != (long *)0x0);
  goto LAB_00d9fe24;
LAB_00d9fc34:
  if (uVar5 == 0) {
    uVar4 = uVar4 & uVar7;
  }
  else if (uVar6 <= uVar4) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar4 / uVar6;
    }
    uVar4 = uVar4 - uVar9 * uVar6;
  }
  plVar2 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar10 = plVar2;
    plVar2 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar3);
  if (plVar10 != (long *)(param_1 + 0x490)) {
    uVar9 = plVar10[1];
    if (uVar5 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar12 * uVar6;
    }
    if (uVar9 == uVar4) goto LAB_00d9fcd8;
  }
  if (*plVar3 != 0) {
    uVar9 = *(ulong *)(*plVar3 + 8);
    if (uVar5 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar12 * uVar6;
    }
    if (uVar9 == uVar4) goto LAB_00d9fcd8;
  }
  *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
LAB_00d9fcd8:
  if (*plVar3 != 0) {
    uVar9 = *(ulong *)(*plVar3 + 8);
    if (uVar5 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar5 * uVar6;
    }
    if (uVar9 != uVar4) {
      *(long **)(*(long *)(param_1 + 0x468) + uVar9 * 8) = plVar10;
    }
  }
  *plVar10 = *plVar3;
  *plVar3 = 0;
  *(long *)(param_1 + 0x4b0) = *(long *)(param_1 + 0x4b0) + -1;
  (**(code **)(**(long **)(param_1 + 0x498) + 0x18))(*(long **)(param_1 + 0x498),plVar3,0x20,8);
  plVar13 = (long *)*plVar13;
  if (plVar13 == (long *)0x0) goto LAB_00d9fe24;
  goto LAB_00d9fd54;
}


