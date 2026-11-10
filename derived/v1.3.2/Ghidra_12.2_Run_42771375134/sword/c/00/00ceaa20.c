/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ceaa20; name: FUN_00ceaa20
 */


void FUN_00ceaa20(long param_1)

{
  long *plVar1;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  long local_28;
  
  FUN_008d48d0(local_60,&DAT_02a57e18);
  FUN_006dccd0(&local_28,*(undefined8 *)PTR_DAT_02710788,1,local_60,0,
               *(undefined8 *)(param_1 + 0x58),0);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = local_28;
  if (local_28 != 0) {
    plVar1 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
      FUN_006e1e70(local_28,param_1 + 0x60,1);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
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


