/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ca7d0; name: FUN_011ca7d0
 */


void FUN_011ca7d0(long param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x140) == 0 && param_2 < 7) {
                    /* WARNING: Could not recover jumptable at 0x011ca828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_02167b8c + *(int *)(&DAT_02167b8c + (ulong)param_2 * 4)))();
    return;
  }
  return;
}


