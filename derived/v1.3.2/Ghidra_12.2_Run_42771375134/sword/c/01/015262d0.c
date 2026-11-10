/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015262d0; name: FUN_015262d0
 */


bool FUN_015262d0(long param_1,int param_2,int *param_3)

{
  return *(long *)(param_1 + (long)param_2 * 0xa68 + (long)*param_3 * 0x18 + 0x60) ==
         0xcf9069c673b98d1;
}


