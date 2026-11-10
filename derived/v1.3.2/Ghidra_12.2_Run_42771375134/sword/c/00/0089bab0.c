/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0089bab0; name: FUN_0089bab0
 */


void FUN_0089bab0(long param_1)

{
  undefined8 local_28;
  undefined8 local_18;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  FUN_008a0be0(&local_18,local_28,&local_28);
  if (*(long *)(param_1 + 0x5f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f8) = 0;
  }
  local_28 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x5f8) = local_18;
  FUN_008a0be0(&local_18,local_28,&local_28);
  if (*(long *)(param_1 + 0x600) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x600) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x600) = 0;
  }
  local_28 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x600) = local_18;
  FUN_008a0be0(&local_18,local_28,&local_28);
  if (*(long *)(param_1 + 0x608) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x608) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
  local_28 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x608) = local_18;
  FUN_008a0be0(&local_18,local_28,&local_28);
  if (*(long *)(param_1 + 0x610) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x610) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x610) = 0;
  }
  *(undefined8 *)(param_1 + 0x610) = local_18;
  return;
}


