/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007af330; name: FUN_007af330
 */


void FUN_007af330(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x28);
  if ((((*plVar1 == param_2) || (plVar1 = (long *)(param_1 + 0x30), *plVar1 == param_2)) ||
      (plVar1 = (long *)(param_1 + 0x38), *plVar1 == param_2)) ||
     (plVar1 = (long *)(param_1 + 0x40), *plVar1 == param_2)) {
    *plVar1 = 0;
    return;
  }
  return;
}


