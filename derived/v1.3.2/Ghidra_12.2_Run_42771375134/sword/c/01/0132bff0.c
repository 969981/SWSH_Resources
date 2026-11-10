/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132bff0; name: FUN_0132bff0
 */


void FUN_0132bff0(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  bVar1 = FUN_013092d0(param_2);
  if (bVar1 == 0xfd) {
    lVar7 = *(long *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x68) == 0) {
      lVar2 = FUN_013092c0(param_2);
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x68) + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = FUN_013092c0(param_2);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x60);
    if (lVar2 != lVar7) {
      plVar4 = (long *)(param_1 + 0x78);
      lVar7 = *plVar4;
      if (*(long *)(param_1 + 0x80) == 0) {
        lVar2 = FUN_013092c0(param_2);
      }
      else {
        plVar5 = (long *)(*(long *)(param_1 + 0x80) + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar2 = FUN_013092c0(param_2);
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      if (lVar2 != lVar7) {
        plVar4 = (long *)(param_1 + 0x90);
        lVar7 = *plVar4;
        if (*(long *)(param_1 + 0x98) == 0) {
          lVar2 = FUN_013092c0(param_2);
        }
        else {
          plVar5 = (long *)(*(long *)(param_1 + 0x98) + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          lVar2 = FUN_013092c0(param_2);
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        if (lVar2 != lVar7) {
          plVar4 = (long *)(param_1 + 0xa8);
          lVar7 = *plVar4;
          if (*(long *)(param_1 + 0xb0) == 0) {
            lVar2 = FUN_013092c0(param_2);
          }
          else {
            plVar5 = (long *)(*(long *)(param_1 + 0xb0) + 0x48);
            (**(code **)(*plVar5 + 0x10))(plVar5);
            lVar2 = FUN_013092c0(param_2);
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          if (lVar2 != lVar7) {
            return;
          }
        }
      }
    }
    lVar7 = (long)plVar4 - (param_1 + 0x60);
    piVar3 = (int *)(param_1 + lVar7 + 0x70);
    if (*piVar3 != 1) {
      lVar7 = lVar7 >> 3;
      plVar4 = (long *)(param_1 + lVar7 * 8 + 0x60);
      if (*plVar4 != 0) {
        *piVar3 = 1;
        *plVar4 = 0;
        *(undefined1 *)(param_1 + lVar7 * 8 + 0x74) = 1;
      }
    }
  }
  else {
    uVar6 = (ulong)bVar1;
    plVar4 = (long *)(param_1 + uVar6 * 0x18 + 0x60);
    if (*plVar4 == 0) {
      lVar7 = FUN_013092c0(param_2);
      *plVar4 = lVar7;
      lVar7 = param_1 + uVar6 * 0x18;
      *(undefined4 *)(lVar7 + 0x70) = 0;
      plVar5 = (long *)FUN_0130a5d0(param_2);
      plVar4 = (long *)(lVar7 + 0x68);
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar2 = *plVar4;
      *plVar4 = lVar7;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      *(undefined1 *)(param_1 + uVar6 * 0x18 + 0x74) = 1;
    }
  }
  return;
}


