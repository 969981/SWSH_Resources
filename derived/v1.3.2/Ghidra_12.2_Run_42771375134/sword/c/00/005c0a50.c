/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c0a50; name: FUN_005c0a50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_005c0a50(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *param_2;
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                             (*(long **)(param_1 + 8),0x38,0x10,
                              "../../../../Include\\SiCore/SiCore_Map.h",0x3cb);
  plVar2[2] = param_3;
  *plVar2 = param_1;
  plVar2[1] = lVar7;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *(undefined1 *)(plVar2 + 6) = 1;
  plVar8 = (long *)(param_1 + 0x18);
  lVar4 = *plVar8;
  if (*plVar8 != 0) {
    do {
      lVar7 = FUN_005c56e0(lVar7,*(undefined8 *)(lVar4 + 8),1);
      if (lVar7 < 0) {
        lVar6 = *(long *)(lVar4 + 0x20);
        if (lVar6 == 0) {
          plVar3 = (long *)(lVar4 + 0x20);
          goto LAB_005c0b08;
        }
      }
      else {
        lVar6 = *(long *)(lVar4 + 0x28);
        if (lVar6 == 0) goto LAB_005c0b04;
      }
      lVar7 = plVar2[1];
      lVar4 = lVar6;
    } while( true );
  }
  uVar5 = 0;
  plVar3 = plVar8;
LAB_005c0b10:
  *plVar3 = (long)plVar2;
  *(undefined1 *)(plVar2 + 6) = uVar5;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  if (*(long **)(param_1 + 0x18) == plVar2) {
    *(undefined1 *)(plVar2 + 6) = 0;
    return 1;
  }
  while( true ) {
    lVar4 = plVar2[3];
    if (*(char *)(lVar4 + 0x30) == '\0') {
      return 1;
    }
    if (lVar4 == 0) break;
    lVar7 = *(long *)(lVar4 + 0x18);
    if (lVar7 == 0) goto LAB_005c0bb4;
    lVar6 = *(long *)(lVar7 + 0x20);
    if (lVar4 == lVar6) {
      lVar6 = *(long *)(lVar7 + 0x28);
    }
    if ((lVar6 == 0) || (*(char *)(lVar6 + 0x30) == '\0')) goto LAB_005c0bb4;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(undefined1 *)(lVar6 + 0x30) = 0;
    *(undefined1 *)(*(long *)(lVar6 + 0x18) + 0x30) = 1;
    plVar2 = *(long **)(lVar6 + 0x18);
    if (plVar2 == (long *)*plVar8) {
      *(undefined1 *)(plVar2 + 6) = 0;
      if (plVar2 == (long *)*plVar8) {
        return 1;
      }
    }
    else if (plVar2 == (long *)*plVar8) {
      return 1;
    }
  }
  lVar7 = _SUB_00000018;
LAB_005c0bb4:
  plVar3 = plVar2 + 3;
  if ((plVar2 == *(long **)(lVar4 + 0x28)) && (lVar4 == *(long *)(lVar7 + 0x20))) {
    if (plVar2 != (long *)0x0) {
      *(long *)(lVar4 + 0x28) = plVar2[4];
      if (plVar2[4] != 0) {
        *(long *)(plVar2[4] + 0x18) = lVar4;
      }
    }
    if (*plVar8 == lVar4) {
      *plVar8 = (long)plVar2;
      if (plVar2 != (long *)0x0) {
        *plVar3 = 0;
        goto LAB_005c0db4;
      }
    }
    else {
      lVar7 = *(long *)(lVar4 + 0x18);
      if (plVar2 != (long *)0x0) {
        *plVar3 = lVar7;
      }
      if (lVar7 != 0) {
        lVar6 = 0x20;
        if (*(long *)(lVar7 + 0x20) != lVar4) {
          lVar6 = 0x28;
        }
        *(long **)(lVar7 + lVar6) = plVar2;
      }
      if (plVar2 != (long *)0x0) {
LAB_005c0db4:
        plVar2[4] = lVar4;
      }
    }
    *(long **)(lVar4 + 0x18) = plVar2;
    plVar2 = plVar2 + 4;
LAB_005c0df0:
    plVar2 = (long *)*plVar2;
    plVar3 = plVar2 + 3;
    *(undefined1 *)(*plVar3 + 0x30) = 0;
    if (plVar2 != (long *)0x0) goto LAB_005c0bec;
    lVar4 = 0;
  }
  else {
    if ((plVar2 == *(long **)(lVar4 + 0x20)) && (lVar4 == *(long *)(lVar7 + 0x28))) {
      if (plVar2 != (long *)0x0) {
        *(long *)(lVar4 + 0x20) = plVar2[5];
        if (plVar2[5] != 0) {
          *(long *)(plVar2[5] + 0x18) = lVar4;
        }
      }
      if (*plVar8 == lVar4) {
        *plVar8 = (long)plVar2;
        if (plVar2 != (long *)0x0) {
          *plVar3 = 0;
          goto LAB_005c0de4;
        }
      }
      else {
        lVar7 = *(long *)(lVar4 + 0x18);
        if (plVar2 != (long *)0x0) {
          *plVar3 = lVar7;
        }
        if (lVar7 != 0) {
          lVar6 = 0x20;
          if (*(long *)(lVar7 + 0x20) != lVar4) {
            lVar6 = 0x28;
          }
          *(long **)(lVar7 + lVar6) = plVar2;
        }
        if (plVar2 != (long *)0x0) {
LAB_005c0de4:
          plVar2[5] = lVar4;
        }
      }
      *(long **)(lVar4 + 0x18) = plVar2;
      plVar2 = plVar2 + 5;
      goto LAB_005c0df0;
    }
    *(undefined1 *)(lVar4 + 0x30) = 0;
LAB_005c0bec:
    lVar4 = 0;
    if (plVar2[3] != 0) {
      lVar4 = *(long *)(plVar2[3] + 0x18);
    }
  }
  *(undefined1 *)(lVar4 + 0x30) = 1;
  lVar7 = *plVar3;
  if (plVar2 == *(long **)(lVar7 + 0x20)) {
    if (lVar7 == *(long *)(lVar4 + 0x20)) {
      if (lVar7 != 0) {
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar7 + 0x28);
        if (*(long *)(lVar7 + 0x28) != 0) {
          *(long *)(*(long *)(lVar7 + 0x28) + 0x18) = lVar4;
        }
      }
      if (*plVar8 == lVar4) {
        *plVar8 = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *(long *)(lVar7 + 0x28) = lVar4;
        }
      }
      else {
        lVar6 = *(long *)(lVar4 + 0x18);
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x18) = lVar6;
        }
        if (lVar6 != 0) {
          lVar1 = 0x20;
          if (*(long *)(lVar6 + 0x20) != lVar4) {
            lVar1 = 0x28;
          }
          *(long *)(lVar6 + lVar1) = lVar7;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x28) = lVar4;
        }
      }
      goto LAB_005c0c8c;
    }
  }
  else if (lVar4 == 0) {
    return 1;
  }
  lVar7 = *(long *)(lVar4 + 0x28);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar7 + 0x20);
    if (*(long *)(lVar7 + 0x20) != 0) {
      *(long *)(*(long *)(lVar7 + 0x20) + 0x18) = lVar4;
    }
  }
  if (*plVar8 == lVar4) {
    *plVar8 = lVar7;
    if (lVar7 == 0) goto LAB_005c0c8c;
    *(undefined8 *)(lVar7 + 0x18) = 0;
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x18);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x18) = lVar6;
    }
    if (lVar6 != 0) {
      lVar1 = 0x20;
      if (*(long *)(lVar6 + 0x20) != lVar4) {
        lVar1 = 0x28;
      }
      *(long *)(lVar6 + lVar1) = lVar7;
    }
    if (lVar7 == 0) goto LAB_005c0c8c;
  }
  *(long *)(lVar7 + 0x20) = lVar4;
LAB_005c0c8c:
  *(long *)(lVar4 + 0x18) = lVar7;
  return 1;
LAB_005c0b04:
  plVar3 = (long *)(lVar4 + 0x28);
LAB_005c0b08:
  uVar5 = 1;
  plVar2[3] = lVar4;
  goto LAB_005c0b10;
}


