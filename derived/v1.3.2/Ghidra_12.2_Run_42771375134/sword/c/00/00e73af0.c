/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73af0; name: FUN_00e73af0
 */


void FUN_00e73af0(long *param_1)

{
  *(undefined1 *)(param_1 + 0xd) = 0;
                    /* WARNING: Could not recover jumptable at 0x00e73afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}


