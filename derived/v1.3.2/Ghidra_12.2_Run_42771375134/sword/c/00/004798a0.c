/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004798a0; name: FUN_004798a0
 */


void FUN_004798a0(long *param_1)

{
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    *(int *)(param_1[1] + 0x7c) = *(int *)(param_1[1] + 0x7c) + -1;
  }
  return;
}


