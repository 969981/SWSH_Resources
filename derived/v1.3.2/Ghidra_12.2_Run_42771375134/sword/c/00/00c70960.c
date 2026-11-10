/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c70960; name: FUN_00c70960
 */


bool FUN_00c70960(long param_1,int param_2)

{
  if (param_2 < 6) {
    return *(char *)(param_1 + param_2 + 0x1c8) != '\0';
  }
  return false;
}


