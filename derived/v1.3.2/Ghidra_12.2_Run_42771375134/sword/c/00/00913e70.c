/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00913e70; name: FUN_00913e70
 */


undefined8 FUN_00913e70(char *param_1,char param_2)

{
  if ((*param_1 != '\0') && (param_1[2] == param_2)) {
    return 0;
  }
  if ((param_1[3] != '\0') && (param_1[5] == param_2)) {
    return 1;
  }
  if ((param_1[6] != '\0') && (param_1[8] == param_2)) {
    return 2;
  }
  if ((param_1[9] != '\0') && (param_1[0xb] == param_2)) {
    return 3;
  }
  if ((param_1[0xc] == '\0') || (param_1[0xe] != param_2)) {
    return 5;
  }
  return 4;
}


