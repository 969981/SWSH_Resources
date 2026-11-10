/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00474080; name: FUN_00474080
 */


bool FUN_00474080(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    return true;
  }
  if (*(int *)(param_1 + 0x68) == 3) {
    return true;
  }
  if (*(int *)(param_1 + 0x6c) < 2) {
    return *(int *)(param_1 + 0x74) == 0;
  }
  return false;
}


