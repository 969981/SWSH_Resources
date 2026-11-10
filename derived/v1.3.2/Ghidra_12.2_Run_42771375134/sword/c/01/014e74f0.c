/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e74f0; name: FUN_014e74f0
 */


bool FUN_014e74f0(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x240);
  if (plVar1 == (long *)0x0) {
    return true;
  }
  if ((ulong)*(uint *)(param_2 + 4) < (ulong)(plVar1[1] - *plVar1 >> 2)) {
    return *(int *)(*plVar1 + (ulong)*(uint *)(param_2 + 4) * 4) == 0;
  }
  return true;
}


