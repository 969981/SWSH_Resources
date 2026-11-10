/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039a960; name: FUN_0039a960
 */


void FUN_0039a960(long param_1,ulong param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + (param_2 & 1) * 0x30);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2 >> 1);
  return;
}


