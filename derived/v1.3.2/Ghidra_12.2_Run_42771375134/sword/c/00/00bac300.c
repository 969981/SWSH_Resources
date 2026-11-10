/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bac300; name: FUN_00bac300
 */


void FUN_00bac300(long param_1)

{
  long *plVar1;
  undefined8 local_18;
  
  local_18 = 0x6aeb7356315d2e51;
  plVar1 = (long *)FUN_00ffde30(param_1 + 0x100,&local_18);
  FUN_016b2d70(plVar1,1);
  (**(code **)(*plVar1 + 0x50))(plVar1);
  return;
}


