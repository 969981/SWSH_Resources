/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aeea0; name: FUN_014aeea0
 */


void FUN_014aeea0(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long local_48;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  plVar4 = *(long **)(lVar6 + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  iVar1 = FUN_00884820(plVar4);
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      lVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar5);
      uVar3 = FUN_0087d610(lVar6,2);
      if ((uVar3 & 1) == 0) {
        if (lVar6 == 0) {
          local_48 = 0;
        }
        else {
          plVar7 = (long *)(lVar6 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          local_48 = lVar6;
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        (*(code *)*param_1)(param_1 + 4,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
      }
      uVar5 = uVar5 + 1;
      uVar2 = FUN_00884820(plVar4);
    } while (uVar5 < uVar2);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  }
  return;
}


