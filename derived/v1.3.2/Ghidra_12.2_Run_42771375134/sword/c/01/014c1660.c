/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c1660; name: FUN_014c1660
 */


void FUN_014c1660(long param_1)

{
  long *plVar1;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  long local_28;
  
  FUN_014c43a0(param_1 + 0x270,0,*(undefined8 *)(param_1 + 0x1b8),0);
  FUN_014c43a0(param_1 + 0x3a0,1,*(undefined8 *)(param_1 + 0x1b8),0);
  FUN_014c43a0(param_1 + 0x4d0,2,*(undefined8 *)(param_1 + 0x1b8),0);
  FUN_014c43a0(param_1 + 0x600,3,*(undefined8 *)(param_1 + 0x1b8),0);
  FUN_014c43a0(param_1 + 0x730,4,*(undefined8 *)(param_1 + 0x1b8),0);
  FUN_014c43a0(param_1 + 0x860,5,*(undefined8 *)(param_1 + 0x1b8),0);
  FUN_014c43a0(param_1 + 0x990,6,*(undefined8 *)(param_1 + 0x1b8),0);
  FUN_014c2150(local_60,"bin/font/font_data.prmb");
  FUN_006dccd0(&local_28,*(undefined8 *)PTR_DAT_02710788,1,local_60,0,
               *(undefined8 *)(param_1 + 0x1b8),0);
  if (*(long *)(param_1 + 0xb18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb18) = 0;
  }
  *(long *)(param_1 + 0xb18) = local_28;
  if (local_28 != 0) {
    plVar1 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((*(long *)(param_1 + 0xb20) != 0) || (*(long *)(param_1 + 0xba0) != 0)) {
      FUN_006e1e70(local_28,param_1 + 0xb10,1);
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


