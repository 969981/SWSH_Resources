/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b03c0; name: FUN_011b03c0
 */


void FUN_011b03c0(void)

{
  if (*(long **)PTR_DAT_02725560 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02725560 + 8))();
  }
  if (DAT_02a64b30 != (long *)0x0) {
    (**(code **)(*DAT_02a64b30 + 8))();
  }
  if (*(long **)PTR_DAT_02725568 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02725568 + 8))();
  }
  if (DAT_02a64b40 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011b0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02a64b40 + 8))();
  return;
}


