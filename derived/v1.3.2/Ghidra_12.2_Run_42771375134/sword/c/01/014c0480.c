/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c0480; name: FUN_014c0480
 */


void FUN_014c0480(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long local_90 [2];
  undefined1 *local_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  undefined8 local_28;
  
  FUN_008d48d0(local_60);
  if (local_48 == 0) {
    local_68 = 0;
    local_90[0] = 0;
    local_90[1] = 0xcbf29ce484222645;
    local_70 = 0;
    local_80 = &DAT_01d38550;
    local_78 = 0;
  }
  else {
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (local_60[0] != 0) {
      puVar1 = (undefined8 *)(local_60[0] + 0x60);
    }
    local_28 = *puVar1;
    FUN_014c08a0(local_90,&local_28,&DAT_01cf4206,local_38);
  }
  FUN_014bfd20(param_1,local_90 + 1,param_3);
  if ((local_78 != 0) && (local_90[0] != 0)) {
    (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
  }
  local_90[0] = 0;
  local_90[1] = 0xcbf29ce484222645;
  local_80 = &DAT_01d38550;
  local_78 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


