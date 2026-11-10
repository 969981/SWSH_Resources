/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004da6e0; name: FUN_004da6e0
 */


void FUN_004da6e0(long *param_1)

{
  if ((int)param_1[0x10] == 0) {
    FUN_004ddaf0(param_1[0xe]);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  if ((int)param_1[0x10] == 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004da73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}


