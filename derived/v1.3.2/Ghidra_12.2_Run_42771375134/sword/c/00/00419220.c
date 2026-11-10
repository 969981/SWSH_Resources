/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419220; name: FUN_00419220
 */


long FUN_00419220(long *param_1,long param_2)

{
  return (*(long *)(*param_1 + 8) + param_2) - (ulong)*(uint *)(param_1[1] + 0x88);
}


