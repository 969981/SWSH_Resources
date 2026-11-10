/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d77d20; name: FUN_00d77d20
 */


void FUN_00d77d20(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  lVar1 = FUN_00e7e260();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar1 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar1 == 0) {
    uVar3 = FUN_01524df0(0);
    local_38 = local_28;
  }
  else {
    plVar4 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar3 = FUN_01524df0(lVar1);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    local_38 = local_28;
  }
  local_28 = local_38;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  (**(code **)(**(long **)(param_1 + 0x90) + 0x10))(&local_48);
  local_40 = local_48;
  local_48 = 0;
  FUN_00ca3a20(&local_38,&local_40,uVar3);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


