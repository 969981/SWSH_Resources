/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c4e20; name: FUN_013c4e20
 */


void FUN_013c4e20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  long local_50;
  long local_48;
  long local_38;
  
  if ((param_3 == 0) || (lVar1 = *(long *)(param_3 + 8), lVar1 == 0)) {
    FUN_014bb440(local_80,param_2);
    FUN_00a8ba70(&local_50,*(undefined8 *)PTR_DAT_02710788,1,local_80,0,*param_1,0);
    if (param_1[3] != 0) {
      (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
      param_1[3] = 0;
    }
    param_1[3] = local_50;
    if (local_50 != 0) {
      plVar2 = (long *)(local_50 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((param_1[4] != 0) || (param_1[0x14] != 0)) {
        FUN_006e1e70(local_50,param_1 + 2,1);
      }
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if ((local_68 != 0) && (local_80[0] != 0)) {
      (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    }
    local_80[0] = 0;
    local_80[1] = 0xcbf29ce484222645;
    local_70 = &DAT_01d38550;
    local_68 = 0;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    }
  }
  else {
    FUN_006e2db0(&local_50,lVar1,*(undefined8 *)(lVar1 + 400));
    FUN_014bb440(local_80,param_2);
    FUN_00a8ba70(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_80,0,*param_1,&local_50);
    if (param_1[3] != 0) {
      (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
      param_1[3] = 0;
    }
    param_1[3] = local_38;
    if (local_38 != 0) {
      plVar2 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((param_1[4] != 0) || (param_1[0x14] != 0)) {
        FUN_006e1e70(local_38,param_1 + 2,1);
      }
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
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
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


