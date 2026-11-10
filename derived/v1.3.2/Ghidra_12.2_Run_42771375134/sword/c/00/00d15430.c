/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d15430; name: FUN_00d15430
 */


void FUN_00d15430(long param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_48 [8];
  
  switch(*(undefined4 *)(param_1 + 0x2c4)) {
  case 0:
    plVar7 = *(long **)(*(long *)(param_1 + 0x2b8) + 0x120);
    if (plVar7 != (long *)0x0) {
      do {
        lVar8 = plVar7[3];
        if (*(long *)(lVar8 + 0x108) != 0) {
          plVar9 = *(long **)(lVar8 + 0x100);
          do {
            lVar4 = *plVar9;
            if (lVar4 == 0) {
              FUN_00d34d20(0);
            }
            else {
              plVar5 = (long *)(lVar4 + 0x48);
              (**(code **)(*plVar5 + 0x10))(plVar5);
              (**(code **)(*plVar5 + 0x10))(plVar5);
              FUN_00d34d20(lVar4);
              (**(code **)(*plVar5 + 0x18))(plVar5);
              (**(code **)(*plVar5 + 0x18))(plVar5);
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != (long *)(*(long *)(lVar8 + 0x100) + *(long *)(lVar8 + 0x108) * 8));
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      break;
    }
    iVar3 = 1;
    goto LAB_00d15620;
  case 1:
    plVar7 = *(long **)(*(long *)(param_1 + 0x2b8) + 0x120);
    if (plVar7 == (long *)0x0) {
      iVar3 = 2;
      goto LAB_00d15620;
    }
    do {
      lVar4 = plVar7[3];
      lVar8 = *(long *)(lVar4 + 0x108);
      if (lVar8 != 0) {
        plVar5 = *(long **)(lVar4 + 0x100);
        plVar9 = plVar5;
        do {
          while (lVar6 = *plVar9, lVar6 != 0) {
            plVar5 = (long *)(lVar6 + 0x48);
            (**(code **)(*plVar5 + 0x10))(plVar5);
            (**(code **)(*plVar5 + 0x10))(plVar5);
            cVar1 = *(char *)(lVar6 + 0xb7);
            (**(code **)(*plVar5 + 0x18))(plVar5);
            (**(code **)(*plVar5 + 0x18))(plVar5);
            if (cVar1 == '\0') {
              return;
            }
            plVar5 = *(long **)(lVar4 + 0x100);
            lVar8 = *(long *)(lVar4 + 0x108);
            plVar9 = plVar9 + 1;
            if (plVar9 == plVar5 + lVar8) goto LAB_00d155ac;
          }
          if (DAT_000000b7 == '\0') {
            return;
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar5 + lVar8);
      }
LAB_00d155ac:
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    break;
  case 2:
    FUN_00d67860(*(undefined8 *)(param_1 + 0x2b8));
    FUN_0102d640(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x150));
    lVar4 = *(long *)(param_1 + 0x2b8);
    lVar8 = 0;
    do {
      lVar6 = *(long *)(lVar4 + 0x2c8 + lVar8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_01679380(lVar6);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x120);
    break;
  case 3:
    FUN_0102bd20(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x150));
    uVar2 = FUN_0102d7d0(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x150));
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x2b8);
    lVar8 = 0;
    do {
      lVar6 = *(long *)(lVar4 + 0x2c8 + lVar8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uVar2 = FUN_016794e0(lVar6);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x120);
    lVar8 = *(long *)(param_1 + 0x2b8);
    plVar7 = *(long **)(lVar8 + 200);
    if (plVar7 != (long *)0x0) {
      do {
        FUN_00d17e50(plVar7[3],auStack_48);
        if (plVar7[3] != 0) {
          (**(code **)(*(long *)(plVar7[3] + 0x48) + 0x18))();
          plVar7[3] = 0;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      lVar8 = *(long *)(param_1 + 0x2b8);
    }
    if (*(long *)(lVar8 + 0x158) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + 0x158) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + 0x158) = 0;
      lVar8 = *(long *)(param_1 + 0x2b8);
    }
    if (*(long *)(lVar8 + 0x150) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + 0x150) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + 0x150) = 0;
      lVar8 = *(long *)(param_1 + 0x2b8);
    }
    if (*(long *)(lVar8 + 0x98) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar8 + 0x98) + 0x48) + 0x18))();
      *(undefined8 *)(lVar8 + 0x98) = 0;
    }
    if (*(long *)(param_1 + 0x348) == 0) {
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    else {
      FUN_006e2100(*(long *)(param_1 + 0x348),param_1 + 0x340);
      lVar8 = *(long *)(param_1 + 0x348);
      *(undefined8 *)(param_1 + 0x348) = 0;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
    }
    break;
  case 4:
    FUN_01063680();
    *(undefined8 *)(param_1 + 0x2c0) = 6;
  default:
    goto switchD_00d15468_default;
  }
  iVar3 = *(int *)(param_1 + 0x2c4) + 1;
LAB_00d15620:
  *(int *)(param_1 + 0x2c4) = iVar3;
switchD_00d15468_default:
  return;
}


