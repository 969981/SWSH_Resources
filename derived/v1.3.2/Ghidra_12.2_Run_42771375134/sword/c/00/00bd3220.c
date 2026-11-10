/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd3220; name: FUN_00bd3220
 */


bool FUN_00bd3220(long param_1)

{
  FUN_00bd2440();
  if (*(char *)(param_1 + 0x301b) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x3027) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x3033) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x303f) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x304b) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x3057) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x3063) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x306f) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x307b) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x3087) != '\0') {
    return true;
  }
  if (*(char *)(param_1 + 0x3093) == '\0') {
    return *(char *)(param_1 + 0x309f) != '\0';
  }
  return true;
}


