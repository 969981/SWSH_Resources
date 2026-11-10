/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d94e60; name: FUN_00d94e60
 */


void FUN_00d94e60(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long local_70 [2];
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined8 local_40;
  long local_38;
  
  local_40 = param_2;
  FUN_008d4da0(local_70,&local_40);
  FUN_00d96d30(&local_38,*(undefined8 *)PTR_DAT_02710788,0,local_70,0,
               *(undefined8 *)(param_1 + 0x3b8),0);
  if (*(long *)(param_1 + 0x4b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4b8) = 0;
  }
  *(long *)(param_1 + 0x4b8) = local_38;
  if (local_38 != 0) {
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(param_1 + 0x4c0) != 0) || (*(long *)(param_1 + 0x540) != 0)) {
      FUN_006e1e70(local_38,param_1 + 0x4b0,1);
    }
    FUN_006e1be0(local_38);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if ((local_58 != 0) && (local_70[0] != 0)) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  local_70[0] = 0;
  local_70[1] = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar1 = FUN_00d975c0(local_70,*(undefined8 *)(param_1 + 0x3b8));
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5c0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5c0) = 0;
  }
  *(long *)(param_1 + 0x5c0) = lVar1;
  FUN_00788d40(lVar1,param_1 + 0x4b0);
  return;
}


