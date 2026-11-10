/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01001f90; name: FUN_01001f90
 */


void FUN_01001f90(long param_1,undefined8 param_2)

{
  long *plVar1;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  long local_28;
  
  FUN_010020c0(local_60,"bin/battle/data_table/battle_effect.prmb");
  FUN_006dccd0(&local_28,*(undefined8 *)PTR_DAT_02710788,1,local_60,0,param_2,0);
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(long *)(param_1 + 0x58) = local_28;
  if (local_28 != 0) {
    plVar1 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((*(long *)(param_1 + 0x60) != 0) || (*(long *)(param_1 + 0xe0) != 0)) {
      FUN_006e1e70(local_28,param_1 + 0x50,1);
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


