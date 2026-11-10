/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9de0; name: FUN_007a9de0
 */


void FUN_007a9de0(void)

{
  if (DAT_029f4e00 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007a9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_029f4e00 + 0x20))();
  return;
}


