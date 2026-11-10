/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01024e10; name: FUN_01024e10
 */


void FUN_01024e10(long param_1,undefined8 param_2)

{
  long *plVar1;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  long local_28;
  
  FUN_008d48d0(local_60,&DAT_02a62098);
  FUN_006dccd0(&local_28,*(undefined8 *)PTR_DAT_02710788,0,local_60,0,param_2,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(long *)(param_1 + 0x18) = local_28;
  if (local_28 != 0) {
    plVar1 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0xa0) != 0)) {
      FUN_006e1e70(local_28,param_1 + 0x10,1);
    }
    FUN_006e1be0(local_28);
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
    local_40 = 0;
  }
  FUN_012b4da0(local_60,*(undefined8 *)(*(long *)(param_1 + 0x18) + 400),
               *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x180));
  FUN_012b4070(param_1 + 0x120,local_60);
  return;
}


