/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c9f860; name: FUN_00c9f860
 */


bool FUN_00c9f860(long param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x88) != *param_2) {
    return false;
  }
  if (*(char *)(param_1 + 0x8c) != (char)param_2[1]) {
    return false;
  }
  if (*(long *)(param_1 + 0x90) == *(long *)(param_2 + 2)) {
    return *(long *)(param_1 + 0x98) == *(long *)(param_2 + 4);
  }
  return false;
}


