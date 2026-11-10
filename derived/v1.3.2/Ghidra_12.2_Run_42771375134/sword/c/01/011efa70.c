/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011efa70; name: FUN_011efa70
 */


void FUN_011efa70(void)

{
  if (*(long **)PTR_DAT_02725ca8 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02725ca8 + 8))();
  }
  if (DAT_02a65530 != (void *)0x0) {
    operator_delete(DAT_02a65530);
  }
  if (DAT_02a65538 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011efabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02a65538 + 8))();
  return;
}


