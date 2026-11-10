/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ca430; name: FUN_004ca430
 */


bool FUN_004ca430(long *param_1)

{
  long lVar1;
  
  if (*param_1 == 0) {
    return false;
  }
  lVar1 = *(long *)(*param_1 + 0xb0);
  if (lVar1 == 0) {
    return false;
  }
  return *(int *)(lVar1 + 4) != 0;
}


