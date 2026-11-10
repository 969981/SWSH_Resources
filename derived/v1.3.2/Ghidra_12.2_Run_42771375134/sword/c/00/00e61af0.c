/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e61af0; name: FUN_00e61af0
 */


void FUN_00e61af0(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0xbe0) == 0 || 3 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e61b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_02160c7c + *(int *)(&DAT_02160c7c + (ulong)param_2 * 4)))(param_1);
  return;
}


