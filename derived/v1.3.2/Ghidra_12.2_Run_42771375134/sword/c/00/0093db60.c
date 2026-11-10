/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093db60; name: FUN_0093db60
 */


bool FUN_0093db60(char *param_1)

{
  if (*param_1 == '\0') {
    return false;
  }
  return param_1[2] != '\0';
}


