/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776310; name: FUN_00776310
 */


void FUN_00776310(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long local_48;
  
  FUN_0010d170(&local_48,*(undefined8 *)(param_2 + 8));
  uVar7 = *(ulong *)(param_1 + 0x228);
  puVar1 = (ulong *)PTR_DAT_02710920;
  if (local_48 != 0) {
    puVar1 = (ulong *)(local_48 + 0x58);
  }
  if (uVar7 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    uVar5 = *puVar1;
    uVar8 = uVar7 - 1;
    if ((uVar8 & uVar7) == 0) {
      uVar6 = uVar8 & uVar5;
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x220) + uVar6 * 8);
    }
    else {
      uVar6 = uVar5;
      if (uVar7 <= uVar5) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar5 / uVar7;
        }
        uVar6 = uVar5 - uVar6 * uVar7;
      }
      puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x220) + uVar6 * 8);
    }
    if (puVar9 == (undefined8 *)0x0) {
LAB_0077648c:
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)*puVar9;
      if (plVar12 != (long *)0x0) {
        if ((uVar8 & uVar7) == 0) {
          do {
            uVar7 = plVar12[1];
            if (uVar7 != uVar5 && (uVar7 & uVar8) != uVar6) goto LAB_0077648c;
            if (uVar7 == uVar5) {
              puVar1 = (ulong *)PTR_DAT_02710920;
              if (plVar12[2] != 0) {
                puVar1 = (ulong *)(plVar12[2] + 0x58);
              }
              if (*puVar1 == uVar5) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar12[1];
            if (uVar8 == uVar5) {
              puVar1 = (ulong *)PTR_DAT_02710920;
              if (plVar12[2] != 0) {
                puVar1 = (ulong *)(plVar12[2] + 0x58);
              }
              if (*puVar1 == uVar5) break;
            }
            else {
              if (uVar7 <= uVar8) {
                uVar11 = 0;
                if (uVar7 != 0) {
                  uVar11 = uVar8 / uVar7;
                }
                uVar8 = uVar8 - uVar11 * uVar7;
              }
              if (uVar8 != uVar6) goto LAB_0077648c;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (plVar12 == (long *)0x0) {
    return;
  }
  uVar8 = *(ulong *)(param_1 + 0x228);
  lVar3 = plVar12[3];
  uVar6 = uVar8 - 1;
  uVar5 = plVar12[1];
  uVar7 = uVar6 & uVar8;
  if (uVar7 == 0) {
    uVar5 = uVar6 & uVar5;
  }
  else if (uVar8 <= uVar5) {
    uVar11 = 0;
    if (uVar8 != 0) {
      uVar11 = uVar5 / uVar8;
    }
    uVar5 = uVar5 - uVar11 * uVar8;
  }
  plVar4 = *(long **)(*(long *)(param_1 + 0x220) + uVar5 * 8);
  do {
    plVar10 = plVar4;
    plVar4 = (long *)*plVar10;
  } while ((long *)*plVar10 != plVar12);
  if (plVar10 != (long *)(param_1 + 0x248)) {
    uVar11 = plVar10[1];
    if (uVar7 == 0) {
      uVar11 = uVar11 & uVar6;
    }
    else if (uVar8 <= uVar11) {
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar2 * uVar8;
    }
    if (uVar11 == uVar5) goto LAB_0077652c;
  }
  if (*plVar12 != 0) {
    uVar11 = *(ulong *)(*plVar12 + 8);
    if (uVar7 == 0) {
      uVar11 = uVar11 & uVar6;
    }
    else if (uVar8 <= uVar11) {
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar2 * uVar8;
    }
    if (uVar11 == uVar5) goto LAB_0077652c;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x220) + uVar5 * 8) = 0;
LAB_0077652c:
  if (*plVar12 != 0) {
    uVar11 = *(ulong *)(*plVar12 + 8);
    if (uVar7 == 0) {
      uVar11 = uVar11 & uVar6;
    }
    else if (uVar8 <= uVar11) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar11 / uVar8;
      }
      uVar11 = uVar11 - uVar7 * uVar8;
    }
    if (uVar11 != uVar5) {
      *(long **)(*(long *)(param_1 + 0x220) + uVar11 * 8) = plVar10;
    }
  }
  *plVar10 = *plVar12;
  *plVar12 = 0;
  *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x268) + -1;
  if (plVar12[2] != 0) {
    (**(code **)(*(long *)(plVar12[2] + 0x48) + 0x18))();
    plVar12[2] = 0;
  }
  (**(code **)(**(long **)(param_1 + 0x250) + 0x18))(*(long **)(param_1 + 0x250),plVar12,0x20,8);
  FUN_00778610(param_1 + 0x1a8,param_2,(int)lVar3,param_3,param_4);
  return;
}


