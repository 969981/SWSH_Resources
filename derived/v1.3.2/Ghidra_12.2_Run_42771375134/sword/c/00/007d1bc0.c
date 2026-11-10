/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d1bc0; name: FUN_007d1bc0
 */


void FUN_007d1bc0(void)

{
  if (*(long **)PTR_DAT_02716cc0 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02716cc0 + 8))();
  }
  if (DAT_029f52b0 != (void *)0x0) {
    operator_delete(DAT_029f52b0);
  }
  if (DAT_029f52b8 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007d1c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_029f52b8 + 8))();
  return;
}


