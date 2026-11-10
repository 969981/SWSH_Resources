/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dc480; name: FUN_012dc480
 */


void FUN_012dc480(long *param_1,byte param_2)

{
  if (((*(char *)((long)param_1 + 0x75) != '\0' ^ param_2) & 1) == 0) {
    return;
  }
  *(byte *)((long)param_1 + 0x75) = param_2 & 1;
  if ((param_2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x012dc4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x90))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012dc4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}


