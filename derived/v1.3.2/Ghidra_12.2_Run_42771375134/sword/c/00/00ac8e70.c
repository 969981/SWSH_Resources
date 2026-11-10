/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac8e70; name: FUN_00ac8e70
 */


bool FUN_00ac8e70(long param_1,int param_2)

{
  if (param_2 == 1) {
    return *(char *)(param_1 + 0x471) != '\0';
  }
  if (param_2 == 0) {
    return *(char *)(param_1 + 0x470) != '\0';
  }
  if ((*(char *)(param_1 + 0x470) == '\0') && (*(char *)(param_1 + 0x471) == '\0')) {
    return false;
  }
  return true;
}


