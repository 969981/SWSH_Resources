/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053dcb0; name: FUN_0053dcb0
 */


undefined8 FUN_0053dcb0(int *param_1)

{
  if (*param_1 != 0) {
    return 0;
  }
  if (*(long **)(param_1 + 2) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 2) + 0x18))();
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if (*(long **)(param_1 + 4) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 4) + 0x18))();
    param_1[4] = 0;
    param_1[5] = 0;
  }
  *param_1 = 1;
  return 0;
}


