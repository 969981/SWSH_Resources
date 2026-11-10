/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d837a0; name: FUN_00d837a0
 */


void FUN_00d837a0(long *param_1)

{
  FUN_00d837d0();
                    /* WARNING: Could not recover jumptable at 0x00d837c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1);
  return;
}


