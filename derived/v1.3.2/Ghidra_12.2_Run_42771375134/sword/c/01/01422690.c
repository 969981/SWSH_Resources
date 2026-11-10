/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01422690; name: FUN_01422690
 */


void FUN_01422690(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  plVar5 = &local_60;
  plVar1 = &local_60;
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar2 = *(long *)(local_38 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_50 = lVar2;
  local_48 = lVar2;
  if (lVar2 == 0) {
    FUN_01422900(param_1,0xc8580fce2a808bd3,0xa8aa932117c691e2,&local_48,0);
    FUN_01422900(param_1,0xc85810ce2a808d86,0xde7e0b99f1f72e5b,&local_50,0);
  }
  else {
    plVar4 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_01422900(param_1,0xc8580fce2a808bd3,0xa8aa932117c691e2,&local_48,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_48 = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_01422900(param_1,0xc85810ce2a808d86,0xde7e0b99f1f72e5b,&local_50,0);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_50 = 0;
  }
  if ((param_2 & 1) == 0) {
    uVar3 = 0xc85812ce2a8090ec;
    if (lVar2 == 0) {
      local_60 = 0;
      goto LAB_014228d4;
    }
    local_60 = lVar2;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))((long *)(lVar2 + 0x48));
  }
  else {
    uVar3 = 0xc85811ce2a808f39;
    if (lVar2 == 0) {
      plVar1 = &local_58;
      local_58 = 0;
LAB_014228d4:
      FUN_01422900(param_1,uVar3,0xbf1d9e0744fe1aa8,plVar1,0);
      return;
    }
    plVar5 = &local_58;
    local_58 = lVar2;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))((long *)(lVar2 + 0x48));
  }
  plVar1 = (long *)(lVar2 + 0x48);
  FUN_01422900(param_1,uVar3,0xbf1d9e0744fe1aa8,plVar5,0);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  *plVar5 = 0;
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}


