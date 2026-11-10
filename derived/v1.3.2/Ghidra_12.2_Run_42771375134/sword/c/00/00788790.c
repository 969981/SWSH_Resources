/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00788790; name: FUN_00788790
 */


void FUN_00788790(long param_1,byte param_2)

{
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return;
  }
  *(byte *)(param_1 + 3) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x007887ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}


