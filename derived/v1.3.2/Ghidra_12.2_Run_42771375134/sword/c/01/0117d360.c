/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117d360; name: FUN_0117d360
 */


void FUN_0117d360(void)

{
  if (*(long **)PTR_DAT_027250d8 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_027250d8 + 8))();
  }
  if (DAT_02a64398 != (void *)0x0) {
    operator_delete(DAT_02a64398);
  }
  if (DAT_02a643a0 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0117d3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02a643a0 + 8))();
  return;
}


