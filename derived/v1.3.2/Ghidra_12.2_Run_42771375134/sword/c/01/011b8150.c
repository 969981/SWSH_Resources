/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b8150; name: FUN_011b8150
 */


undefined8 FUN_011b8150(long *param_1,int param_2)

{
  int *piVar1;
  
  if ((((*param_1 != 0) && (piVar1 = *(int **)(*param_1 + 0x60), piVar1 != (int *)0x0)) &&
      (*piVar1 != 0)) && (piVar1[3] == param_2)) {
    return 1;
  }
  if (((param_1[1] != 0) && (piVar1 = *(int **)(param_1[1] + 0x60), piVar1 != (int *)0x0)) &&
     ((*piVar1 != 0 && (piVar1[3] == param_2)))) {
    return 0x100000001;
  }
  if (((param_1[2] != 0) && (piVar1 = *(int **)(param_1[2] + 0x60), piVar1 != (int *)0x0)) &&
     ((*piVar1 != 0 && (piVar1[3] == param_2)))) {
    return 0x200000001;
  }
  if ((((param_1[3] != 0) && (piVar1 = *(int **)(param_1[3] + 0x60), piVar1 != (int *)0x0)) &&
      (*piVar1 != 0)) && (piVar1[3] == param_2)) {
    return 0x300000001;
  }
  if (((param_1[4] != 0) && (piVar1 = *(int **)(param_1[4] + 0x60), piVar1 != (int *)0x0)) &&
     ((*piVar1 != 0 && (piVar1[3] == param_2)))) {
    return 0x400000001;
  }
  if (((param_1[5] == 0) || (piVar1 = *(int **)(param_1[5] + 0x60), piVar1 == (int *)0x0)) ||
     ((*piVar1 == 0 || (piVar1[3] != param_2)))) {
    return 0x600000000;
  }
  return 0x500000001;
}


