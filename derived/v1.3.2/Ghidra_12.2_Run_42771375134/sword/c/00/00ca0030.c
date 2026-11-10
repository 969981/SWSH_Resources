/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca0030; name: FUN_00ca0030
 */


bool FUN_00ca0030(long param_1,int *param_2)

{
  if (*(int *)(param_1 + 0xd0) != *param_2) {
    return false;
  }
  if (*(char *)(param_1 + 0xd4) != (char)param_2[1]) {
    return false;
  }
  if (*(long *)(param_1 + 0xd8) == *(long *)(param_2 + 2)) {
    return *(long *)(param_1 + 0xe0) == *(long *)(param_2 + 4);
  }
  return false;
}


