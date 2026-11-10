/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecda80; name: FUN_00ecda80
 */


void FUN_00ecda80(long param_1)

{
  if (*(long **)(param_1 + 0x60) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ecda90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x58))();
  return;
}


