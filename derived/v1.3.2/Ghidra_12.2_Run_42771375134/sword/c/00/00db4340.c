/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db4340; name: FUN_00db4340
 */


void FUN_00db4340(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined **local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  long local_48;
  long local_38;
  
  FUN_00c58c00(&local_80,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  ppuVar1 = local_80;
  if (local_80 != (undefined **)0x0) {
    (**(code **)(local_80[9] + 0x18))();
    local_80 = (undefined **)0x0;
  }
  (**(code **)(*param_1 + 0x10))(&local_48,param_1);
  local_38 = local_48;
  local_48 = 0;
  local_80 = &PTR_LAB_0264f7f0;
  plStack_78 = param_1;
  local_70 = param_2;
  uStack_68 = param_3;
  local_60 = (long *)&local_80;
  FUN_00c7a320(ppuVar1,&local_38,&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00db4408;
    pcVar2 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar2)();
LAB_00db4408:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


