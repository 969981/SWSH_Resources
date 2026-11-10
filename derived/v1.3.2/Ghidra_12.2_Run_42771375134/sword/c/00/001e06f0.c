/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e06f0; name: FUN_001e06f0
 */


void FUN_001e06f0(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) != param_2) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  *plVar1 = 0;
  return;
}


