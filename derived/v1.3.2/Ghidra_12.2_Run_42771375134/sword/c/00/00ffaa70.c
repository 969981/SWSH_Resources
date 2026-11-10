/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffaa70; name: FUN_00ffaa70
 */


bool FUN_00ffaa70(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 0x5a0) + 0x18))();
  return plVar1[1] != *plVar1;
}


