/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb3260; name: FUN_00cb3260
 */


void FUN_00cb3260(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long local_28;
  
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00c80dd0(&local_28);
  }
  puVar1 = (undefined8 *)FUN_00cbe970(local_28,0x1f);
  *param_2 = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00c80dd0(&local_28);
  }
  puVar1 = (undefined8 *)FUN_00cbe970(local_28,0x18);
  param_2[1] = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00c80dd0(&local_28);
  }
  puVar1 = (undefined8 *)FUN_00cbe970(local_28,0x19);
  param_2[2] = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00c80dd0(&local_28);
  }
  puVar1 = (undefined8 *)FUN_00cbe970(local_28,0x1a);
  param_2[3] = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00c80dd0(&local_28);
  }
  puVar1 = (undefined8 *)FUN_00cbe970(local_28,0x1b);
  param_2[4] = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00c80dd0(&local_28);
  }
  puVar1 = (undefined8 *)FUN_00cbe970(local_28,0x1c);
  param_2[5] = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00c80dd0(&local_28);
  }
  puVar1 = (undefined8 *)FUN_00cbe970(local_28,0x1d);
  param_2[6] = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_28 = 0;
  }
  else {
    FUN_00c80dd0(&local_28);
  }
  puVar1 = (undefined8 *)FUN_00cbe970(local_28,0x1e);
  param_2[7] = *puVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


