/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00474710; name: FUN_00474710
 */


void FUN_00474710(int *param_1,long param_2)

{
  *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
  *(undefined8 *)(param_2 + 8) = 0;
  if (*(long *)(param_1 + 4) == 0) {
    *(long *)(param_1 + 4) = param_2;
  }
  else {
    *(long *)(*(long *)(param_1 + 2) + 8) = param_2;
  }
  *(long *)(param_1 + 2) = param_2;
  *param_1 = *param_1 + 1;
  return;
}


