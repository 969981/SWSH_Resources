/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01145be0; name: FUN_01145be0
 */


void FUN_01145be0(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar6 == 0) {
    return;
  }
  plVar5 = (long *)(lVar6 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar4 = FUN_0150e130(lVar6);
  if ((uVar4 & 1) != 0) goto LAB_01145fc8;
  cVar1 = *(char *)(*(long *)(param_1 + 0x88) + 0x3ba);
  if (cVar1 == '\0') {
LAB_01145cf0:
    plVar7 = *(long **)(*(long *)(param_1 + 0x88) + 0x420);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 9;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar2 = FUN_00884820(plVar7);
      if (iVar2 != 0) {
        uVar9 = 0;
        do {
          lVar6 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar9);
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          uVar4 = FUN_0087d610(lVar6,2);
          if ((uVar4 & 1) == 0) {
            FUN_00878310(lVar6);
          }
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          }
          uVar9 = uVar9 + 1 & 0xff;
          uVar3 = FUN_00884820(plVar7);
        } while (uVar9 < uVar3);
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (cVar1 != '\x02') goto LAB_01145da8;
LAB_01145e60:
    plVar7 = *(long **)(*(long *)(param_1 + 0x88) + 0x430);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 9;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar2 = FUN_00884820(plVar7);
      if (iVar2 != 0) {
        uVar9 = 0;
        do {
          lVar6 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar9);
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          uVar4 = FUN_0087d610(lVar6,2);
          if ((uVar4 & 1) == 0) {
            FUN_00878310(lVar6);
          }
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          }
          uVar9 = uVar9 + 1 & 0xff;
          uVar3 = FUN_00884820(plVar7);
        } while (uVar9 < uVar3);
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (cVar1 == '\x04') goto LAB_01145fc8;
  }
  else {
    plVar7 = *(long **)(*(long *)(param_1 + 0x88) + 0x418);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 9;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar2 = FUN_00884820(plVar7);
      if (iVar2 != 0) {
        uVar9 = 0;
        do {
          lVar6 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar9);
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          uVar4 = FUN_0087d610(lVar6,2);
          if ((uVar4 & 1) == 0) {
            FUN_00878310(lVar6);
          }
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          }
          uVar9 = uVar9 + 1 & 0xff;
          uVar3 = FUN_00884820(plVar7);
        } while (uVar9 < uVar3);
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (cVar1 != '\x01') goto LAB_01145cf0;
LAB_01145da8:
    plVar7 = *(long **)(*(long *)(param_1 + 0x88) + 0x428);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 9;
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar2 = FUN_00884820(plVar7);
      if (iVar2 != 0) {
        uVar9 = 0;
        do {
          lVar6 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar9);
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          uVar4 = FUN_0087d610(lVar6,2);
          if ((uVar4 & 1) == 0) {
            FUN_00878310(lVar6);
          }
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          }
          uVar9 = uVar9 + 1 & 0xff;
          uVar3 = FUN_00884820(plVar7);
        } while (uVar9 < uVar3);
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (cVar1 != '\x03') goto LAB_01145e60;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x88) + 0x438);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 9;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    iVar2 = FUN_00884820(plVar7);
    if (iVar2 != 0) {
      uVar9 = 0;
      do {
        lVar6 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar9);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        uVar4 = FUN_0087d610(lVar6,2);
        if ((uVar4 & 1) == 0) {
          FUN_00878310(lVar6);
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        uVar9 = uVar9 + 1 & 0xff;
        uVar3 = FUN_00884820(plVar7);
      } while (uVar9 < uVar3);
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
LAB_01145fc8:
                    /* WARNING: Could not recover jumptable at 0x01145fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


