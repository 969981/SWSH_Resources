/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00780090; name: FUN_00780090
 */


void FUN_00780090(long param_1,int param_2,undefined1 param_3)

{
  if (param_2 < 4) {
    *(int *)(param_1 + 0x90) = param_2;
    *(undefined1 *)(param_1 + 0xa2) = param_3;
    *(undefined1 *)(param_1 + 0xa3) = 0;
  }
  return;
}


