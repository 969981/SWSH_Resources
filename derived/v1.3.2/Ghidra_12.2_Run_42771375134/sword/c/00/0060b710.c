/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060b710; name: FUN_0060b710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0060b710(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  uVar9 = *param_2;
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x38))
                             (*(long **)(param_1 + 8),0x38,0x10,
                              "../../../../Include\\SiCore/SiCore_Map.h",0x3cb);
  plVar2[2] = param_3;
  *plVar2 = param_1;
  plVar2[1] = uVar9;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *(undefined1 *)(plVar2 + 6) = 1;
  plVar3 = (long *)(param_1 + 0x18);
  lVar5 = *plVar3;
  if (*plVar3 == 0) {
    uVar4 = 0;
    plVar6 = plVar3;
  }
  else {
    do {
      while (lVar7 = lVar5, *(ulong *)(lVar7 + 8) <= uVar9) {
        lVar5 = *(long *)(lVar7 + 0x28);
        if (*(long *)(lVar7 + 0x28) == 0) {
          plVar6 = (long *)(lVar7 + 0x28);
          goto LAB_0060b7b4;
        }
      }
      lVar5 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
    plVar6 = (long *)(lVar7 + 0x20);
LAB_0060b7b4:
    plVar2[3] = lVar7;
    uVar4 = 1;
  }
  *plVar6 = (long)plVar2;
  *(undefined1 *)(plVar2 + 6) = uVar4;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  if (*(long **)(param_1 + 0x18) == plVar2) {
    *(undefined1 *)(plVar2 + 6) = 0;
    return 1;
  }
  while( true ) {
    lVar5 = plVar2[3];
    if (*(char *)(lVar5 + 0x30) == '\0') {
      return 1;
    }
    if (lVar5 == 0) break;
    lVar7 = *(long *)(lVar5 + 0x18);
    if (lVar7 == 0) goto LAB_0060b860;
    lVar8 = *(long *)(lVar7 + 0x20);
    if (lVar5 == lVar8) {
      lVar8 = *(long *)(lVar7 + 0x28);
    }
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x30) == '\0')) goto LAB_0060b860;
    *(undefined1 *)(lVar5 + 0x30) = 0;
    *(undefined1 *)(lVar8 + 0x30) = 0;
    *(undefined1 *)(*(long *)(lVar8 + 0x18) + 0x30) = 1;
    plVar2 = *(long **)(lVar8 + 0x18);
    if (plVar2 == (long *)*plVar3) {
      *(undefined1 *)(plVar2 + 6) = 0;
      if (plVar2 == (long *)*plVar3) {
        return 1;
      }
    }
    else if (plVar2 == (long *)*plVar3) {
      return 1;
    }
  }
  lVar7 = _SUB_00000018;
LAB_0060b860:
  plVar6 = plVar2 + 3;
  if ((plVar2 == *(long **)(lVar5 + 0x28)) && (lVar5 == *(long *)(lVar7 + 0x20))) {
    if (plVar2 != (long *)0x0) {
      *(long *)(lVar5 + 0x28) = plVar2[4];
      if (plVar2[4] != 0) {
        *(long *)(plVar2[4] + 0x18) = lVar5;
      }
    }
    if (*plVar3 == lVar5) {
      *plVar3 = (long)plVar2;
      if (plVar2 != (long *)0x0) {
        *plVar6 = 0;
        goto LAB_0060ba5c;
      }
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x18);
      if (plVar2 != (long *)0x0) {
        *plVar6 = lVar7;
      }
      if (lVar7 != 0) {
        lVar8 = 0x20;
        if (*(long *)(lVar7 + 0x20) != lVar5) {
          lVar8 = 0x28;
        }
        *(long **)(lVar7 + lVar8) = plVar2;
      }
      if (plVar2 != (long *)0x0) {
LAB_0060ba5c:
        plVar2[4] = lVar5;
      }
    }
    *(long **)(lVar5 + 0x18) = plVar2;
    plVar2 = plVar2 + 4;
LAB_0060ba98:
    plVar2 = (long *)*plVar2;
    plVar6 = plVar2 + 3;
    *(undefined1 *)(*plVar6 + 0x30) = 0;
    if (plVar2 != (long *)0x0) goto LAB_0060b898;
    lVar5 = 0;
  }
  else {
    if ((plVar2 == *(long **)(lVar5 + 0x20)) && (lVar5 == *(long *)(lVar7 + 0x28))) {
      if (plVar2 != (long *)0x0) {
        *(long *)(lVar5 + 0x20) = plVar2[5];
        if (plVar2[5] != 0) {
          *(long *)(plVar2[5] + 0x18) = lVar5;
        }
      }
      if (*plVar3 == lVar5) {
        *plVar3 = (long)plVar2;
        if (plVar2 != (long *)0x0) {
          *plVar6 = 0;
          goto LAB_0060ba8c;
        }
      }
      else {
        lVar7 = *(long *)(lVar5 + 0x18);
        if (plVar2 != (long *)0x0) {
          *plVar6 = lVar7;
        }
        if (lVar7 != 0) {
          lVar8 = 0x20;
          if (*(long *)(lVar7 + 0x20) != lVar5) {
            lVar8 = 0x28;
          }
          *(long **)(lVar7 + lVar8) = plVar2;
        }
        if (plVar2 != (long *)0x0) {
LAB_0060ba8c:
          plVar2[5] = lVar5;
        }
      }
      *(long **)(lVar5 + 0x18) = plVar2;
      plVar2 = plVar2 + 5;
      goto LAB_0060ba98;
    }
    *(undefined1 *)(lVar5 + 0x30) = 0;
LAB_0060b898:
    lVar5 = 0;
    if (plVar2[3] != 0) {
      lVar5 = *(long *)(plVar2[3] + 0x18);
    }
  }
  *(undefined1 *)(lVar5 + 0x30) = 1;
  lVar7 = *plVar6;
  if (plVar2 == *(long **)(lVar7 + 0x20)) {
    if (lVar7 == *(long *)(lVar5 + 0x20)) {
      if (lVar7 != 0) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar7 + 0x28);
        if (*(long *)(lVar7 + 0x28) != 0) {
          *(long *)(*(long *)(lVar7 + 0x28) + 0x18) = lVar5;
        }
      }
      if (*plVar3 == lVar5) {
        *plVar3 = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *(long *)(lVar7 + 0x28) = lVar5;
        }
      }
      else {
        lVar8 = *(long *)(lVar5 + 0x18);
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x18) = lVar8;
        }
        if (lVar8 != 0) {
          lVar1 = 0x20;
          if (*(long *)(lVar8 + 0x20) != lVar5) {
            lVar1 = 0x28;
          }
          *(long *)(lVar8 + lVar1) = lVar7;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x28) = lVar5;
        }
      }
      goto LAB_0060b938;
    }
  }
  else if (lVar5 == 0) {
    return 1;
  }
  lVar7 = *(long *)(lVar5 + 0x28);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar7 + 0x20);
    if (*(long *)(lVar7 + 0x20) != 0) {
      *(long *)(*(long *)(lVar7 + 0x20) + 0x18) = lVar5;
    }
  }
  if (*plVar3 == lVar5) {
    *plVar3 = lVar7;
    if (lVar7 == 0) goto LAB_0060b938;
    *(undefined8 *)(lVar7 + 0x18) = 0;
  }
  else {
    lVar8 = *(long *)(lVar5 + 0x18);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x18) = lVar8;
    }
    if (lVar8 != 0) {
      lVar1 = 0x20;
      if (*(long *)(lVar8 + 0x20) != lVar5) {
        lVar1 = 0x28;
      }
      *(long *)(lVar8 + lVar1) = lVar7;
    }
    if (lVar7 == 0) goto LAB_0060b938;
  }
  *(long *)(lVar7 + 0x20) = lVar5;
LAB_0060b938:
  *(long *)(lVar5 + 0x18) = lVar7;
  return 1;
}


