/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a69d70; name: FUN_00a69d70
 */


void FUN_00a69d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long local_50 [2];
  undefined1 *local_40;
  long local_38;
  long local_30;
  
  FUN_00a85c40(local_50,"bin/archive/battle/effect/");
  FUN_00a85d70(param_1,local_50,param_3,".gfpak");
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


