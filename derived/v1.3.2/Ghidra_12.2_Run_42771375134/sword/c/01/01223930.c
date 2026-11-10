/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01223930; name: FUN_01223930
 */


bool FUN_01223930(char *param_1,char *param_2)

{
  if (*param_1 != *param_2) {
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
  if (param_1[0x10] != param_2[0x10]) {
    return false;
  }
  if (param_1[0x11] != param_2[0x11]) {
    return false;
  }
  if ((float)*(undefined8 *)(param_1 + 0x20) != (float)*(undefined8 *)(param_2 + 0x20)) {
    return false;
  }
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) !=
      (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20)) {
    return false;
  }
  if ((float)*(undefined8 *)(param_1 + 0x28) != (float)*(undefined8 *)(param_2 + 0x28)) {
    return false;
  }
  if (*(float *)(param_1 + 0x30) != *(float *)(param_2 + 0x30)) {
    return false;
  }
  if (param_1[0x40] != param_2[0x40]) {
    return false;
  }
  if (param_1[0x41] != param_2[0x41]) {
    return false;
  }
  if ((float)*(undefined8 *)(param_1 + 0x50) != (float)*(undefined8 *)(param_2 + 0x50)) {
    return false;
  }
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) !=
      (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20)) {
    return false;
  }
  if ((float)*(undefined8 *)(param_1 + 0x58) != (float)*(undefined8 *)(param_2 + 0x58)) {
    return false;
  }
  if (*(float *)(param_1 + 0x60) != *(float *)(param_2 + 0x60)) {
    return false;
  }
  if (param_1[0x70] != param_2[0x70]) {
    return false;
  }
  if (param_1[0x71] != param_2[0x71]) {
    return false;
  }
  if ((float)*(undefined8 *)(param_1 + 0x80) != (float)*(undefined8 *)(param_2 + 0x80)) {
    return false;
  }
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) !=
      (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20)) {
    return false;
  }
  if ((float)*(undefined8 *)(param_1 + 0x88) != (float)*(undefined8 *)(param_2 + 0x88)) {
    return false;
  }
  if (*(float *)(param_1 + 0x90) == *(float *)(param_2 + 0x90)) {
    return param_1[0xa0] == param_2[0xa0];
  }
  return false;
}


