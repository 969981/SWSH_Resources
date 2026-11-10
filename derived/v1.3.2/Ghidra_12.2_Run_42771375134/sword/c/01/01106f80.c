/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01106f80; name: FUN_01106f80
 */


void FUN_01106f80(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf) = param_2;
                    /* WARNING: Could not recover jumptable at 0x01106f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}


