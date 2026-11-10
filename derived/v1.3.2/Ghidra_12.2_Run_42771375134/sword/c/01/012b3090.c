/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b3090; name: FUN_012b3090
 */


void FUN_012b3090(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_70;
  long local_68 [2];
  undefined1 *local_58;
  long local_50;
  long local_48;
  long local_38;
  
  local_70 = (**(code **)(*param_1 + 0x50))();
  FUN_008d4da0(local_68,&local_70);
  FUN_00d96d30(&local_38,*(undefined8 *)PTR_DAT_02710788,0,local_68,0,param_1[0x4d],0);
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
    param_1[0x29] = 0;
  }
  param_1[0x29] = local_38;
  if (local_38 != 0) {
    plVar2 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((param_1[0x2a] != 0) || (param_1[0x3a] != 0)) {
      FUN_006e1e70(local_38,param_1 + 0x28,1);
    }
    FUN_006e1be0(local_38);
    (**(code **)(*plVar2 + 0x18))(plVar2);
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
  lVar1 = FUN_00d975c0(local_68,param_1[0x4d]);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (param_1[0x4a] != 0) {
    (**(code **)(*(long *)(param_1[0x4a] + 0x48) + 0x18))();
    param_1[0x4a] = 0;
  }
  param_1[0x4a] = lVar1;
  FUN_00788d40(lVar1,param_1 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*param_1 + 0x80))(param_1);
  FUN_00788e30(param_1[0x4a]);
  return;
}


