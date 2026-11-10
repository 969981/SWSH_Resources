/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9f900; name: FUN_00d9f900
 */


void FUN_00d9f900(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar5 = *(ulong *)(param_1 + 0x470);
  if (uVar5 != 0) {
    uVar3 = *param_2;
    uVar6 = uVar5 - 1;
    uVar4 = uVar6 & uVar5;
    if (uVar4 == 0) {
      uVar8 = uVar6 & uVar3;
      lVar7 = *(long *)(param_1 + 0x468);
      puVar10 = *(undefined8 **)(lVar7 + uVar8 * 8);
    }
    else {
      uVar8 = uVar3;
      if (uVar5 <= uVar3) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar3 / uVar5;
        }
        uVar8 = uVar3 - uVar8 * uVar5;
      }
      lVar7 = *(long *)(param_1 + 0x468);
      puVar10 = *(undefined8 **)(lVar7 + uVar8 * 8);
    }
    if ((puVar10 != (undefined8 *)0x0) && (plVar2 = (long *)*puVar10, plVar2 != (long *)0x0)) {
      if (uVar4 == 0) {
        do {
          uVar11 = plVar2[1];
          if (uVar11 != uVar3 && (uVar11 & uVar6) != uVar8) break;
          if ((uVar11 == uVar3) && (plVar2[2] == uVar3)) goto LAB_00d9f9e4;
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar2[1];
          if (uVar11 == uVar3) {
            if (plVar2[2] == uVar3) goto LAB_00d9f9e4;
          }
          else {
            if (uVar5 <= uVar11) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar11 / uVar5;
              }
              uVar11 = uVar11 - uVar1 * uVar5;
            }
            if (uVar11 != uVar8) break;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  goto LAB_00d9fafc;
LAB_00d9f9e4:
  if (uVar4 == 0) {
    uVar3 = uVar3 & uVar6;
  }
  else if (uVar5 <= uVar3) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar8 * uVar5;
  }
  plVar9 = *(long **)(lVar7 + uVar3 * 8);
  do {
    plVar12 = plVar9;
    plVar9 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar2);
  if (plVar12 == (long *)(param_1 + 0x490)) {
LAB_00d9fa50:
    if (*plVar2 != 0) {
      uVar8 = *(ulong *)(*plVar2 + 8);
      if (uVar4 == 0) {
        uVar8 = uVar8 & uVar6;
      }
      else if (uVar5 <= uVar8) {
        uVar11 = 0;
        if (uVar5 != 0) {
          uVar11 = uVar8 / uVar5;
        }
        uVar8 = uVar8 - uVar11 * uVar5;
      }
      if (uVar8 == uVar3) goto LAB_00d9fa8c;
    }
    *(undefined8 *)(lVar7 + uVar3 * 8) = 0;
  }
  else {
    uVar8 = plVar12[1];
    if (uVar4 == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar11 = 0;
      if (uVar5 != 0) {
        uVar11 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar11 * uVar5;
    }
    if (uVar8 != uVar3) goto LAB_00d9fa50;
  }
LAB_00d9fa8c:
  lVar7 = *plVar2;
  if (lVar7 != 0) {
    uVar8 = *(ulong *)(lVar7 + 8);
    if (uVar4 == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar4 * uVar5;
    }
    if (uVar8 != uVar3) {
      *(long **)(*(long *)(param_1 + 0x468) + uVar8 * 8) = plVar12;
      lVar7 = *plVar2;
    }
  }
  *plVar12 = lVar7;
  *plVar2 = 0;
  *(long *)(param_1 + 0x4b0) = *(long *)(param_1 + 0x4b0) + -1;
  (**(code **)(**(long **)(param_1 + 0x498) + 0x18))(*(long **)(param_1 + 0x498),plVar2,0x20,8);
LAB_00d9fafc:
  plVar2 = (long *)(param_1 + 0x48);
LAB_00d9fb04:
  do {
    uVar5 = plVar2[1];
    if (uVar5 != 0) {
      uVar4 = *param_2;
      uVar3 = uVar5 - 1;
      if ((uVar3 & uVar5) == 0) {
        uVar6 = uVar3 & uVar4;
        plVar9 = *(long **)(*plVar2 + uVar6 * 8);
      }
      else {
        uVar6 = uVar4;
        if (uVar5 <= uVar4) {
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = uVar4 / uVar5;
          }
          uVar6 = uVar4 - uVar6 * uVar5;
        }
        plVar9 = *(long **)(*plVar2 + uVar6 * 8);
      }
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if ((uVar3 & uVar5) == 0) {
          do {
            uVar5 = plVar9[1];
            if (uVar5 != uVar4 && (uVar5 & uVar3) != uVar6) break;
            if ((uVar5 == uVar4) && (plVar9[2] == uVar4)) goto LAB_00d9fbdc;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar3 = plVar9[1];
            if (uVar3 == uVar4) {
              if (plVar9[2] == uVar4) goto LAB_00d9fbdc;
            }
            else {
              if (uVar5 <= uVar3) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar3 / uVar5;
                }
                uVar3 = uVar3 - uVar8 * uVar5;
              }
              if (uVar3 != uVar6) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    plVar2 = plVar2 + 0xb;
    if (plVar2 == (long *)(param_1 + 0x468)) {
      return;
    }
  } while( true );
LAB_00d9fbdc:
  FUN_00da14c0(plVar2);
  plVar2 = plVar2 + 0xb;
  if (plVar2 == (long *)(param_1 + 0x468)) {
    return;
  }
  goto LAB_00d9fb04;
}


