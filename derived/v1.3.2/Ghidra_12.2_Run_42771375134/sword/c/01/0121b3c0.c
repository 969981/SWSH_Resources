/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121b3c0; name: FUN_0121b3c0
 */


bool FUN_0121b3c0(short *param_1,short *param_2)

{
  if (*param_1 != *param_2) {
    return true;
  }
  if (*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
    return true;
  }
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    return param_1[6] != param_2[6];
  }
  return true;
}


