/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f2970; name: FUN_006f2970
 */


long FUN_006f2970(long param_1,int param_2,int param_3)

{
  return *(long *)(param_1 + (long)*(int *)(*(long *)PTR_DAT_02710910 + 0x70) * 0x198 + 400) +
         (ulong)(uint)(param_2 + *(int *)(param_1 + 0x58c) * param_3) * 0x48;
}


