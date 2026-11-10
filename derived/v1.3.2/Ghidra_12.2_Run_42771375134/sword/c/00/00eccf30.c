/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eccf30; name: FUN_00eccf30
 */


bool FUN_00eccf30(long param_1,int param_2)

{
  return *(int *)(param_1 + 0x4c0) == param_2;
}


