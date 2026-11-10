/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01511300; name: FUN_01511300
 */


void FUN_01511300(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0xcbf29ce484222645) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0xa10);
  uVar2 = plVar4[1];
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2 - 1;
  if ((uVar3 & uVar2) == 0) {
    uVar6 = uVar3 & param_2;
    plVar7 = *(long **)(*plVar4 + uVar6 * 8);
  }
  else {
    uVar6 = param_2;
    if (uVar2 <= param_2) {
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = param_2 / uVar2;
      }
      uVar6 = param_2 - uVar6 * uVar2;
    }
    plVar7 = *(long **)(*plVar4 + uVar6 * 8);
  }
  if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
  goto joined_r0x015113dc;
  if ((uVar3 & uVar2) == 0) {
    do {
      uVar8 = plVar7[1];
      if (uVar8 != param_2 && (uVar8 & uVar3) != uVar6) break;
      if ((uVar8 == param_2) && (plVar7[2] == param_2)) goto LAB_015114ac;
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  else {
    do {
      uVar8 = plVar7[1];
      if (uVar8 == param_2) {
        if (plVar7[2] == param_2) goto LAB_015114ac;
      }
      else {
        if (uVar2 <= uVar8) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar8 / uVar2;
          }
          uVar8 = uVar8 - uVar1 * uVar2;
        }
        if (uVar8 != uVar6) break;
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  iVar5 = 0;
joined_r0x015114b0:
  if (uVar2 == 0) {
    return;
  }
  param_3 = iVar5 + param_3;
joined_r0x015113dc:
  if ((uVar3 & uVar2) == 0) {
    uVar6 = uVar3 & param_2;
    plVar4 = *(long **)(*plVar4 + uVar6 * 8);
  }
  else {
    uVar6 = param_2;
    if (uVar2 <= param_2) {
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = param_2 / uVar2;
      }
      uVar6 = param_2 - uVar6 * uVar2;
    }
    plVar4 = *(long **)(*plVar4 + uVar6 * 8);
  }
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      if ((uVar3 & uVar2) == 0) {
        do {
          uVar2 = plVar4[1];
          if (uVar2 != param_2 && (uVar2 & uVar3) != uVar6) {
            return;
          }
          if ((uVar2 == param_2) && (plVar4[2] == param_2)) goto LAB_015114b8;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar4[1];
          if (uVar3 == param_2) {
            if (plVar4[2] == param_2) {
LAB_015114b8:
              *(int *)(plVar4 + 3) = param_3;
              return;
            }
          }
          else {
            if (uVar2 <= uVar3) {
              uVar8 = 0;
              if (uVar2 != 0) {
                uVar8 = uVar3 / uVar2;
              }
              uVar3 = uVar3 - uVar8 * uVar2;
            }
            if (uVar3 != uVar6) {
              return;
            }
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  return;
LAB_015114ac:
  iVar5 = (int)plVar7[3];
  goto joined_r0x015114b0;
}


