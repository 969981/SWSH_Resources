/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00784060; name: FUN_00784060
 */


void FUN_00784060(undefined8 param_1,long param_2)

{
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  long local_28;
  
  local_48 = FUN_006f8300(param_2,0);
  local_44 = FUN_006f8380(param_2,0);
  uStack_40 = 1;
  local_3c = *(undefined4 *)(param_2 + 0x4a0);
  local_38 = *(undefined4 *)(param_2 + 0x4a4);
  local_34 = *(undefined4 *)(param_2 + 0x74);
  local_60 = FUN_006f8300(param_2,1);
  local_5c = FUN_006f8380(param_2,1);
  uStack_58 = 1;
  local_54 = *(undefined4 *)(param_2 + 0x4a0);
  local_50 = *(undefined4 *)(param_2 + 0x4a4);
  local_4c = *(undefined4 *)(param_2 + 0x68);
  local_78 = FUN_006f8300(param_2,2);
  local_74 = FUN_006f8380(param_2,2);
  uStack_70 = 1;
  local_6c = *(undefined4 *)(param_2 + 0x4a0);
  local_68 = *(undefined4 *)(param_2 + 0x4a4);
  local_64 = *(undefined4 *)(param_2 + 0x74);
  local_28 = *(long *)(param_2 + 0x208);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  local_80 = *(long *)(param_2 + 0x350);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  local_88 = *(long *)(param_2 + 0x498);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  FUN_006fbf60(param_1,&local_28,&local_80,&local_88,&local_48,&local_60,&local_78);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


