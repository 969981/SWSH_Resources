/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01301500; name: FUN_01301500
 */


void FUN_01301500(void)

{
  if (*(long **)PTR_DAT_02727d18 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02727d18 + 8))();
  }
  if (DAT_02a6cd60 != (void *)0x0) {
    operator_delete(DAT_02a6cd60);
  }
  if (DAT_02a6cd68 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0130154c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02a6cd68 + 8))();
  return;
}


