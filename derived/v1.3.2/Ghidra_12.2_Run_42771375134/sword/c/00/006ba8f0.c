/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ba8f0; name: FUN_006ba8f0
 */


void FUN_006ba8f0(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_006bbf10(plVar1[6]);
  }
  for (plVar1 = *(long **)(param_1 + 0x88); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_006bbf10(plVar1[6]);
  }
  return;
}


