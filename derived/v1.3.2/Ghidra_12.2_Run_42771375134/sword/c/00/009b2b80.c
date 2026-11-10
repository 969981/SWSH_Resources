/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b2b80; name: FUN_009b2b80
 */


undefined8 FUN_009b2b80(long param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x238);
  if (((piVar1 == (int *)0x0) || ((char)piVar1[1] != *(char *)(param_1 + 0x211))) || (*piVar1 != 1))
  {
    return 0;
  }
  return 1;
}


