/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d8bf0; name: FUN_009d8bf0
 */


void FUN_009d8bf0(void)

{
  if (*(long **)PTR_DAT_02718a38 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02718a38 + 8))();
  }
  if (DAT_02a50468 != (void *)0x0) {
    operator_delete(DAT_02a50468);
  }
  if (DAT_02a50470 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009d8c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02a50470 + 8))();
  return;
}


