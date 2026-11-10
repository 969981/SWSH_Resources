/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d62e10; name: FUN_00d62e10
 */


void FUN_00d62e10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long local_68 [2];
  undefined1 *local_58;
  long local_50;
  long local_48;
  long local_38;
  
  FUN_00a7a060(local_68,param_3);
  FUN_00d633a0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_68,0,param_4,0);
  if (*(long *)(param_2 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 8) = 0;
  }
  *(long *)(param_2 + 8) = local_38;
  if (local_38 != 0) {
    plVar1 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((*(long *)(param_2 + 0x10) != 0) || (*(long *)(param_2 + 0x90) != 0)) {
      FUN_006e1e70(local_38,param_2,1);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if ((local_50 != 0) && (local_68[0] != 0)) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
  }
  local_68[0] = 0;
  local_68[1] = 0xcbf29ce484222645;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_00d62f50(param_1,param_2);
  return;
}


