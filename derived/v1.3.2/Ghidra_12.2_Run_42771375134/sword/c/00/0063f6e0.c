/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063f6e0; name: FUN_0063f6e0
 */


bool FUN_0063f6e0(int *param_1,int *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  if ((*param_1 == 0xc) && (param_1[7] != param_2[7])) {
    return false;
  }
  if (param_1[1] != param_2[1]) {
    return false;
  }
  if (param_1[2] != param_2[2]) {
    return false;
  }
  if (param_1[3] != param_2[3]) {
    return false;
  }
  if (DAT_01cd5208 <= ABS((double)(float)param_1[4] - (double)(float)param_2[4])) {
    return false;
  }
  if (DAT_01cd5208 <= ABS((double)(float)param_1[5] - (double)(float)param_2[5])) {
    return false;
  }
  if (ABS((double)(float)param_1[6] - (double)(float)param_2[6]) < DAT_01cd5208) {
    if (param_1[8] != param_2[8]) {
      return false;
    }
    if (DAT_01cd5208 <= ABS((double)(float)param_1[9] - (double)(float)param_2[9])) {
      return false;
    }
    if (DAT_01cd5208 <= ABS((double)(float)param_1[10] - (double)(float)param_2[10])) {
      return false;
    }
    if (ABS((double)(float)param_1[0xb] - (double)(float)param_2[0xb]) < DAT_01cd5208) {
      return ABS((double)(float)param_1[0xc] - (double)(float)param_2[0xc]) < DAT_01cd5208;
    }
    return false;
  }
  return false;
}


