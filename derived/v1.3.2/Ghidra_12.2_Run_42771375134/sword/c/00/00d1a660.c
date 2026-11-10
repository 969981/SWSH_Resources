/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d1a660; name: FUN_00d1a660
 */


undefined8 FUN_00d1a660(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long local_28;
  int local_14;
  
  local_14 = param_2;
  if (param_2 < 0) {
    if (*(long *)(param_1 + 0x90) == 0) {
      local_28 = 0;
    }
    else {
      FUN_00d1a020(&local_28);
    }
    puVar1 = (undefined8 *)FUN_00d11ca0(local_28 + 0xf8,param_1 + 0x60);
    uVar2 = *puVar1;
  }
  else {
    if (*(long *)(param_1 + 0x90) == 0) {
      local_28 = 0;
    }
    else {
      FUN_00d1a020(&local_28);
    }
    puVar1 = (undefined8 *)FUN_00d11ca0(local_28 + 0xf8,&local_14);
    uVar2 = *puVar1;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar2;
}


