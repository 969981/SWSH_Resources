/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01398210; name: FUN_01398210
 */


void FUN_01398210(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = PTR_DAT_02728ac8 + 0xb8;
  puVar2 = PTR_DAT_02728ac8 + 0x128;
  *param_1 = (long)(PTR_DAT_02728ac8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x10] != 0) {
    FUN_00794740();
  }
  if (param_1[0x11] != 0) {
    FUN_00794740();
  }
  if (param_1[0x12] != 0) {
    FUN_00794740();
  }
  if (param_1[0x13] != 0) {
    FUN_00794740();
  }
  if (param_1[0x15] != 0) {
    FUN_00794700();
    FUN_00794740(param_1[0x15]);
  }
  if (param_1[0x16] != 0) {
    FUN_00794740();
  }
  local_40 = 0x607b556ee40fe832;
  local_38 = "Camp_PotBoiling";
  local_30 = 0xf;
  local_28 = 0;
  FUN_008962a0(0,*(long *)PTR_DAT_027107a8 + 0x108,&local_40,0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  local_40 = 0x595fb6fcbbea83bb;
  local_38 = "Stop_Camp_Cooking_PotBoiling_lp";
  local_30 = 0x1f;
  local_28 = 0;
  FUN_012d6d40(&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (param_1[0x16] != 0) {
    (**(code **)(*(long *)(param_1[0x16] + 0x48) + 0x18))();
    param_1[0x16] = 0;
  }
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
    param_1[0x15] = 0;
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
    param_1[0x10] = 0;
  }
  puVar1 = PTR_DAT_02715098 + 0x90;
  puVar2 = PTR_DAT_02715098 + 0x100;
  *param_1 = (long)(PTR_DAT_02715098 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  puVar1 = PTR_DAT_027150a0 + 0x50;
  puVar2 = PTR_DAT_027150a0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027150a0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


