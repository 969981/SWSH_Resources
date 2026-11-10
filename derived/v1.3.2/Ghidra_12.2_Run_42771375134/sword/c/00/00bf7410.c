/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf7410; name: FUN_00bf7410
 */


void FUN_00bf7410(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 local_28;
  
  uVar1 = FUN_00ffdc80(param_1 + 0x100,"grid_TopMenu");
  local_28 = 0;
  FUN_016b7990(uVar1,&local_28,1,0);
  FUN_00befe50(param_1,1);
  plVar2 = (long *)FUN_00ffdc80(param_1 + 0x100,"grid_TopMenu");
  (**(code **)(*plVar2 + 0x50))();
  return;
}


