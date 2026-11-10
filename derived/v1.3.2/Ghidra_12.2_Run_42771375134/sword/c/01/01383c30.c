/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01383c30; name: FUN_01383c30
 */


void FUN_01383c30(long *param_1,byte param_2)

{
  if (((*(char *)((long)param_1 + 0x81) != '\0' ^ param_2) & 1) == 0) {
    return;
  }
  *(byte *)((long)param_1 + 0x81) = param_2 & 1;
  if ((param_2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01383c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01383c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}


