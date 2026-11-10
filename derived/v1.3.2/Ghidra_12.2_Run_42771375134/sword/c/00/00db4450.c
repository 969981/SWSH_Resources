/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db4450; name: FUN_00db4450
 */


void FUN_00db4450(long *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined **local_70;
  undefined8 uStack_68;
  long *local_50;
  long local_40;
  long local_38;
  
  FUN_00c58c00(&local_70,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  ppuVar1 = local_70;
  if (local_70 != (undefined **)0x0) {
    (**(code **)(local_70[9] + 0x18))();
    local_70 = (undefined **)0x0;
  }
  (**(code **)(*param_1 + 0x10))(&local_40,param_1);
  local_38 = local_40;
  local_40 = 0;
  local_70 = &PTR_LAB_0264f838;
  uStack_68 = param_2;
  local_50 = (long *)&local_70;
  FUN_00c7a320(ppuVar1,&local_38,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00db450c;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00db450c:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


