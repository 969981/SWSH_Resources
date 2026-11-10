/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479bb0; name: FUN_00479bb0
 */


void FUN_00479bb0(long *param_1,int param_2,undefined8 param_3)

{
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    if (*(int *)(param_1[1] + 0x6c) == param_2) {
      FUN_00479360(param_3);
    }
  }
  return;
}


