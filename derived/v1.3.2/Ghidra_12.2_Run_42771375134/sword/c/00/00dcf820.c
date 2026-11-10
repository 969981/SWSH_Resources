/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcf820; name: FUN_00dcf820
 */


void FUN_00dcf820(long param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  uVar6 = *(ulong *)(param_1 + (long)param_3 * 0x58 + 0x50);
  if (uVar6 != 0) {
    uVar4 = *param_2;
    uVar7 = uVar6 - 1;
    lVar15 = (long)param_3;
    uVar1 = uVar7 & uVar6;
    if (uVar1 == 0) {
      uVar10 = uVar7 & uVar4;
    }
    else {
      uVar10 = uVar4;
      if (uVar6 <= uVar4) {
        uVar10 = 0;
        if (uVar6 != 0) {
          uVar10 = uVar4 / uVar6;
        }
        uVar10 = uVar4 - uVar10 * uVar6;
      }
    }
    plVar8 = (long *)(param_1 + lVar15 * 0x58 + 0x48);
    lVar9 = *plVar8;
    puVar11 = *(undefined8 **)(lVar9 + uVar10 * 8);
    if ((puVar11 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar11, plVar14 != (long *)0x0)) {
      if (uVar1 == 0) {
        do {
          uVar12 = plVar14[1];
          if (uVar12 != uVar4 && (uVar12 & uVar7) != uVar10) {
            return;
          }
          if ((uVar12 == uVar4) && (plVar14[2] == uVar4)) goto LAB_00dcf914;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar4) {
            if (plVar14[2] == uVar4) goto LAB_00dcf914;
          }
          else {
            if (uVar6 <= uVar12) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar12 / uVar6;
              }
              uVar12 = uVar12 - uVar2 * uVar6;
            }
            if (uVar12 != uVar10) {
              return;
            }
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  return;
LAB_00dcf914:
  if (uVar1 == 0) {
    uVar4 = uVar4 & uVar7;
  }
  else if (uVar6 <= uVar4) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar4 / uVar6;
    }
    uVar4 = uVar4 - uVar10 * uVar6;
  }
  plVar3 = *(long **)(lVar9 + uVar4 * 8);
  do {
    plVar13 = plVar3;
    plVar3 = (long *)*plVar13;
  } while ((long *)*plVar13 != plVar14);
  if (plVar13 != (long *)(param_1 + lVar15 * 0x58 + 0x70)) {
    uVar10 = plVar13[1];
    if (uVar1 == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar6 <= uVar10) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar12 * uVar6;
    }
    if (uVar10 == uVar4) goto LAB_00dcf9c4;
  }
  if (*plVar14 != 0) {
    uVar10 = *(ulong *)(*plVar14 + 8);
    if (uVar1 == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar6 <= uVar10) {
      uVar12 = 0;
      if (uVar6 != 0) {
        uVar12 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar12 * uVar6;
    }
    if (uVar10 == uVar4) goto LAB_00dcf9c4;
  }
  *(undefined8 *)(lVar9 + uVar4 * 8) = 0;
LAB_00dcf9c4:
  lVar9 = *plVar14;
  if (lVar9 != 0) {
    uVar10 = *(ulong *)(lVar9 + 8);
    if (uVar1 == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar6 <= uVar10) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar1 * uVar6;
    }
    if (uVar10 != uVar4) {
      *(long **)(*plVar8 + uVar10 * 8) = plVar13;
      lVar9 = *plVar14;
    }
  }
  lVar5 = param_1 + lVar15 * 0x58;
  *plVar13 = lVar9;
  *plVar14 = 0;
  *(long *)(lVar5 + 0x90) = *(long *)(lVar5 + 0x90) + -1;
  puVar11 = (undefined8 *)plVar14[3];
  plVar14[3] = 0;
  if (puVar11 != (undefined8 *)0x0) {
    (**(code **)*puVar11)(puVar11);
    (**(code **)(*(long *)plVar14[4] + 0x18))((long *)plVar14[4],puVar11,plVar14[5],plVar14[6]);
  }
  plVar8 = *(long **)(param_1 + lVar15 * 0x58 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00dcfa84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,plVar14,0x38,8);
  return;
}


