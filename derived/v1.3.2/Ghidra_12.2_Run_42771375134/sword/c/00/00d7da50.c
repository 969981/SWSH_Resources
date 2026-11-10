/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7da50; name: FUN_00d7da50
 */


void FUN_00d7da50(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  FUN_00d70930(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  FUN_00d70990(&local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  lVar1 = local_50;
  local_60 = local_50;
  local_58 = 0x5242abbb709d5a24;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_68 = local_48;
  if (local_48 == 0) {
    local_70 = -0x372ac50e40bf892d;
    FUN_00d80740(param_1,param_2 + 0x18,&local_58,&local_60,&local_68,&local_70);
  }
  else {
    plVar2 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    local_70 = -0x372ac50e40bf892d;
    FUN_00d80740(param_1,param_2 + 0x18,&local_58,&local_60,&local_68,&local_70);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_68 = 0;
  }
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_60 = 0;
  }
  lVar1 = local_50;
  local_58 = -0x445bb3fe1dbf1b37;
  local_78 = local_50;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_80 = local_48;
  if (local_48 == 0) {
    local_70 = -0x372ac60e40bf8ae0;
    FUN_00d80740(param_1,param_2 + 0x20,&local_58,&local_78,&local_80,&local_70);
  }
  else {
    plVar2 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    local_70 = -0x372ac60e40bf8ae0;
    FUN_00d80740(param_1,param_2 + 0x20,&local_58,&local_78,&local_80,&local_70);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_80 = 0;
  }
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    local_78 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


