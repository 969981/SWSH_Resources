/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564ee0; name: FUN_01564ee0
 */


void FUN_01564ee0(long *param_1)

{
  FUN_0076ca70();
  *(long **)((long)param_1 + 0xe4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x01564f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,0);
  return;
}


