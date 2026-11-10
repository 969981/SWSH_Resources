/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9bf30; name: FUN_00e9bf30
 */


void FUN_00e9bf30(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined **local_80;
  undefined4 *local_78;
  undefined8 *puStack_70;
  long *local_60;
  long local_48;
  long local_40;
  long local_38;
  undefined4 local_24;
  
  local_24 = param_3;
  FUN_00c58c00(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar1 = local_38;
  *param_1 = 0;
  (**(code **)(*param_2 + 0x10))(&local_48,param_2);
  local_40 = local_48;
  local_80 = &PTR_LAB_0265d758;
  local_78 = &local_24;
  local_48 = 0;
  puStack_70 = param_1;
  local_60 = (long *)&local_80;
  FUN_00c7a390(lVar1,&local_40,&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00e9bfe4;
    pcVar2 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar2)();
LAB_00e9bfe4:
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
  }
  return;
}


