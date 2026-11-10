/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011e530; name: FUN_0011e530
 */


void FUN_0011e530(long param_1,uint param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0011e544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6e8) + 0x18))
            (*(long **)(param_1 + 0x6e8),param_2 & 1,param_3 & 1);
  return;
}


