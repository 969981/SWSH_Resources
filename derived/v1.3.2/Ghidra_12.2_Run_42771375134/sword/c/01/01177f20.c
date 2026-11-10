/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01177f20; name: FUN_01177f20
 */


void FUN_01177f20(long *param_1,long *param_2)

{
  if (param_2 == param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01177f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


