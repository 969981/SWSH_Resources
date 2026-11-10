/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935590; name: FUN_00935590
 */


int FUN_00935590(long param_1)

{
  return (*(uint *)(param_1 + 0x10) >> 8 & 0x3f) - *(int *)(param_1 + 0x18);
}


