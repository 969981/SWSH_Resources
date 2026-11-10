/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d762f0; name: FUN_00d762f0
 */


void FUN_00d762f0(long param_1)

{
  long *plVar1;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  char *pcStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined1 auStack_70 [24];
  long local_58;
  long local_50;
  long local_48 [2];
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  FUN_00c58c00(local_48 + 4,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  local_48[1] = 0xf59caea256a76c84;
  pcStack_38 = "fi_action_trigger";
  local_30 = 0x11;
  local_48[0] = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  plVar1 = *(long **)(param_1 + 0xf0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x10))();
  }
  (**(code **)(*plVar1 + 0x10))(&local_98,plVar1);
  local_50 = local_98;
  local_98 = 0;
  FUN_006cf0a0(auStack_70,local_48 + 1);
  FUN_00ca1a80(local_48,&local_50,auStack_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
  if (local_48[0] != 0) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
    local_48[0] = 0;
  }
  local_78 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  plVar1 = *(long **)(param_1 + 0xf8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x10))();
  }
  (**(code **)(*plVar1 + 0x10))(&local_98,plVar1);
  local_80 = local_98;
  local_98 = 0;
  FUN_006cf0a0(auStack_70,local_48 + 1);
  FUN_00ca1a80(&local_78,&local_80,auStack_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  local_98 = -0x413b6c97739aa1c7;
  pcStack_90 = "fi_action_number";
  local_88 = 0x10;
  local_a0 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  plVar1 = *(long **)(param_1 + 0xf0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x10))();
  }
  (**(code **)(*plVar1 + 0x10))(&local_b0,plVar1);
  local_a8 = local_b0;
  local_b0 = 0;
  FUN_006cf0a0(auStack_70,&local_98);
  FUN_00ca1060(&local_a0,&local_a8,auStack_70,1);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  local_b8 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  plVar1 = *(long **)(param_1 + 0xf8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x10))();
  }
  (**(code **)(*plVar1 + 0x10))(&local_b0,plVar1);
  local_c0 = local_b0;
  local_b0 = 0;
  FUN_006cf0a0(auStack_70,&local_98);
  FUN_00ca1060(&local_b8,&local_c0,auStack_70,1);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


