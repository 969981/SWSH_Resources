/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00600ae0; name: FUN_00600ae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00600ae0(long param_1,uint *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = *param_2;
  plVar1 = (long *)(param_1 + 0x18);
  *(long *)(param_3 + 0x48) = param_3;
  *(uint *)(param_3 + 0x40) = uVar3;
  if (param_3 != 0) {
    lVar4 = *plVar1;
    if (*plVar1 == 0) {
      uVar5 = 0;
      plVar6 = plVar1;
    }
    else {
      do {
        while (lVar7 = lVar4, uVar3 < *(uint *)(lVar7 + 0x40)) {
          lVar4 = *(long *)(lVar7 + 0x28);
          if (*(long *)(lVar7 + 0x28) == 0) {
            plVar6 = (long *)(lVar7 + 0x28);
            goto LAB_00600b38;
          }
        }
        lVar4 = *(long *)(lVar7 + 0x30);
      } while (*(long *)(lVar7 + 0x30) != 0);
      plVar6 = (long *)(lVar7 + 0x30);
LAB_00600b38:
      *(long *)(param_3 + 0x20) = lVar7;
      uVar5 = 1;
    }
    *plVar6 = param_3;
    *(undefined1 *)(param_3 + 0x38) = uVar5;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  }
  if (*plVar1 == param_3) {
    *(undefined1 *)(param_3 + 0x38) = 0;
    return 1;
  }
  while( true ) {
    lVar4 = *(long *)(param_3 + 0x20);
    if (*(char *)(lVar4 + 0x38) == '\0') {
      return 1;
    }
    if (lVar4 == 0) break;
    lVar7 = *(long *)(lVar4 + 0x20);
    if (lVar7 == 0) goto LAB_00600bec;
    lVar8 = *(long *)(lVar7 + 0x28);
    if (lVar4 == lVar8) {
      lVar8 = *(long *)(lVar7 + 0x30);
    }
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x38) == '\0')) goto LAB_00600bec;
    *(undefined1 *)(lVar4 + 0x38) = 0;
    *(undefined1 *)(lVar8 + 0x38) = 0;
    *(undefined1 *)(*(long *)(lVar8 + 0x20) + 0x38) = 1;
    param_3 = *(long *)(lVar8 + 0x20);
    lVar4 = *plVar1;
    if (param_3 == lVar4) {
      *(undefined1 *)(param_3 + 0x38) = 0;
      lVar4 = *plVar1;
    }
    if (param_3 == lVar4) {
      return 1;
    }
  }
  lVar7 = _SUB_00000020;
LAB_00600bec:
  plVar6 = (long *)(param_3 + 0x20);
  if ((param_3 == *(long *)(lVar4 + 0x30)) && (lVar4 == *(long *)(lVar7 + 0x28))) {
    if (param_3 != 0) {
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_3 + 0x28);
      if (*(long *)(param_3 + 0x28) != 0) {
        *(long *)(*(long *)(param_3 + 0x28) + 0x20) = lVar4;
      }
    }
    if (*plVar1 == lVar4) {
      *plVar1 = param_3;
      if (param_3 != 0) {
        *plVar6 = 0;
        goto LAB_00600de8;
      }
    }
    else {
      lVar7 = *(long *)(lVar4 + 0x20);
      if (param_3 != 0) {
        *plVar6 = lVar7;
      }
      if (lVar7 != 0) {
        lVar8 = 0x28;
        if (*(long *)(lVar7 + 0x28) != lVar4) {
          lVar8 = 0x30;
        }
        *(long *)(lVar7 + lVar8) = param_3;
      }
      if (param_3 != 0) {
LAB_00600de8:
        *(long *)(param_3 + 0x28) = lVar4;
      }
    }
    *(long *)(lVar4 + 0x20) = param_3;
    plVar6 = (long *)(param_3 + 0x28);
LAB_00600e2c:
    param_3 = *plVar6;
    plVar6 = (long *)(param_3 + 0x20);
    *(undefined1 *)(*plVar6 + 0x38) = 0;
    if (param_3 != 0) goto LAB_00600c24;
    lVar4 = 0;
  }
  else {
    if ((param_3 == *(long *)(lVar4 + 0x28)) && (lVar4 == *(long *)(lVar7 + 0x30))) {
      if (param_3 != 0) {
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_3 + 0x30);
        if (*(long *)(param_3 + 0x30) != 0) {
          *(long *)(*(long *)(param_3 + 0x30) + 0x20) = lVar4;
        }
      }
      if (*plVar1 == lVar4) {
        *plVar1 = param_3;
        if (param_3 != 0) {
          *plVar6 = 0;
          goto LAB_00600e20;
        }
      }
      else {
        lVar7 = *(long *)(lVar4 + 0x20);
        if (param_3 != 0) {
          *plVar6 = lVar7;
        }
        if (lVar7 != 0) {
          lVar8 = 0x28;
          if (*(long *)(lVar7 + 0x28) != lVar4) {
            lVar8 = 0x30;
          }
          *(long *)(lVar7 + lVar8) = param_3;
        }
        if (param_3 != 0) {
LAB_00600e20:
          *(long *)(param_3 + 0x30) = lVar4;
        }
      }
      *(long *)(lVar4 + 0x20) = param_3;
      plVar6 = (long *)(param_3 + 0x30);
      goto LAB_00600e2c;
    }
    *(undefined1 *)(lVar4 + 0x38) = 0;
LAB_00600c24:
    lVar4 = 0;
    if (*(long *)(param_3 + 0x20) != 0) {
      lVar4 = *(long *)(*(long *)(param_3 + 0x20) + 0x20);
    }
  }
  *(undefined1 *)(lVar4 + 0x38) = 1;
  lVar7 = *plVar6;
  if (param_3 == *(long *)(lVar7 + 0x28)) {
    if (lVar7 == *(long *)(lVar4 + 0x28)) {
      if (lVar7 != 0) {
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar7 + 0x30);
        if (*(long *)(lVar7 + 0x30) != 0) {
          *(long *)(*(long *)(lVar7 + 0x30) + 0x20) = lVar4;
        }
      }
      if (*plVar1 == lVar4) {
        *plVar1 = lVar7;
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x20) = 0;
          *(long *)(lVar7 + 0x30) = lVar4;
          *(long *)(lVar4 + 0x20) = lVar7;
          return 1;
        }
      }
      else {
        lVar8 = *(long *)(lVar4 + 0x20);
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x20) = lVar8;
        }
        if (lVar8 != 0) {
          lVar2 = 0x28;
          if (*(long *)(lVar8 + 0x28) != lVar4) {
            lVar2 = 0x30;
          }
          *(long *)(lVar8 + lVar2) = lVar7;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x30) = lVar4;
          *(long *)(lVar4 + 0x20) = lVar7;
          return 1;
        }
      }
      goto LAB_00600cc8;
    }
  }
  else if (lVar4 == 0) {
    return 1;
  }
  lVar7 = *(long *)(lVar4 + 0x30);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar7 + 0x28);
    if (*(long *)(lVar7 + 0x28) != 0) {
      *(long *)(*(long *)(lVar7 + 0x28) + 0x20) = lVar4;
    }
  }
  if (*plVar1 == lVar4) {
    *plVar1 = lVar7;
    if (lVar7 == 0) goto LAB_00600cc8;
    *(undefined8 *)(lVar7 + 0x20) = 0;
  }
  else {
    lVar8 = *(long *)(lVar4 + 0x20);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x20) = lVar8;
    }
    if (lVar8 != 0) {
      lVar2 = 0x28;
      if (*(long *)(lVar8 + 0x28) != lVar4) {
        lVar2 = 0x30;
      }
      *(long *)(lVar8 + lVar2) = lVar7;
    }
    if (lVar7 == 0) goto LAB_00600cc8;
  }
  *(long *)(lVar7 + 0x28) = lVar4;
LAB_00600cc8:
  *(long *)(lVar4 + 0x20) = lVar7;
  return 1;
}


