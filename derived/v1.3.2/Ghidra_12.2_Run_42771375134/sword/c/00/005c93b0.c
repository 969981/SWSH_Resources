/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c93b0; name: FUN_005c93b0
 */


void FUN_005c93b0(void)

{
  long *plVar1;
  long *plVar2;
  
  nn::os::GetSystemTick();
  plVar1 = (long *)FUN_005bf860();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x78))();
  if ((plVar1 != (long *)0x0) && (plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(), 0 < *plVar2)) {
    plVar1 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    DAT_029e7a98 = 1.0 / (double)*plVar1;
  }
  return;
}


