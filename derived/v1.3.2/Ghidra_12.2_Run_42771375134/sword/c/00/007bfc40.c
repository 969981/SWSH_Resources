/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007bfc40; name: FUN_007bfc40
 */


void FUN_007bfc40(void)

{
  if (*(long **)PTR_DAT_02716b30 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02716b30 + 8))();
  }
  if (DAT_029f5080 != (void *)0x0) {
    operator_delete(DAT_029f5080);
  }
  if (DAT_029f5088 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007bfc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_029f5088 + 8))();
  return;
}


