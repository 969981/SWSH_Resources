/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012232f0; name: FUN_012232f0
 */


bool FUN_012232f0(char *param_1,char *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  if (param_1[1] != param_2[1]) {
    return false;
  }
  if ((float)*(undefined8 *)(param_1 + 0x10) != (float)*(undefined8 *)(param_2 + 0x10)) {
    return false;
  }
  if ((float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) !=
      (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) {
    return false;
  }
  if ((float)*(undefined8 *)(param_1 + 0x18) == (float)*(undefined8 *)(param_2 + 0x18)) {
    return *(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20);
  }
  return false;
}


