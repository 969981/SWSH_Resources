/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011aa650; name: FUN_011aa650
 */


void FUN_011aa650(void)

{
  if (*(long **)PTR_DAT_02725470 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02725470 + 8))();
  }
  if (DAT_02a64a00 != (long *)0x0) {
    (**(code **)(*DAT_02a64a00 + 8))();
  }
  if (*(long **)PTR_DAT_02725478 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02725478 + 8))();
  }
  if (DAT_02a64a10 != (long *)0x0) {
    (**(code **)(*DAT_02a64a10 + 8))();
  }
  if (*(long **)PTR_DAT_02725480 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_02725480 + 8))();
  }
  if (DAT_02a64a20 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011aa6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_02a64a20 + 8))();
  return;
}


