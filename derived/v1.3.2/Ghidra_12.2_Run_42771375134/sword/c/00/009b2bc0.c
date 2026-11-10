/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b2bc0; name: FUN_009b2bc0
 */


undefined4 FUN_009b2bc0(long param_1,long *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x238);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if ((char)piVar1[1] != *(char *)(param_1 + 0x211)) {
    return 0;
  }
  if (*piVar1 == 1) {
    *param_2 = (long)(piVar1 + 3);
    return *(undefined4 *)(*(long *)(param_1 + 0x238) + 0x2720);
  }
  return 0;
}


