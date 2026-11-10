/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fffb90; name: FUN_00fffb90
 */


void FUN_00fffb90(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_38;
  
  lVar1 = FUN_00fffd10(param_1 + 0x50);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)*param_2;
    local_38 = lVar1;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    FUN_00ffff30(uVar2,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar3 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar1 == 0) {
      FUN_00fffb90(0,param_2,1);
    }
    else {
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_00fffb90(lVar1,param_2,1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    plVar3 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar1 = *(long *)(param_1 + 0x70);
    if (lVar1 == 0) {
      FUN_00fffb90(0,param_2,1);
    }
    else {
      plVar3 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_00fffb90(lVar1,param_2,1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  return;
}


