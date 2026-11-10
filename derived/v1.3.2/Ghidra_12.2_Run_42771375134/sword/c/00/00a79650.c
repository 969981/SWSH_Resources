/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a79650; name: FUN_00a79650
 */


void FUN_00a79650(undefined8 param_1,undefined8 param_2)

{
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  long local_50 [2];
  undefined1 *local_40;
  long local_38;
  long local_30;
  
  FUN_00a785d0(local_50,param_1,param_2,0);
  FUN_00a7a060(local_80,local_50);
  FUN_00a79ee0(param_1,local_80,0);
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if ((local_38 != 0) && (local_50[0] != 0)) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  local_50[0] = 0;
  local_50[1] = 0xcbf29ce484222645;
  local_40 = &DAT_01d38550;
  local_38 = 0;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


