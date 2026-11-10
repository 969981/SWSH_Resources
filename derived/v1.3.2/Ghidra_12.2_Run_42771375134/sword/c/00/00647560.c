/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00647560; name: FUN_00647560
 */


undefined8 FUN_00647560(long param_1)

{
  if (*(char *)(param_1 + 0x184) == '\0') {
    return 0;
  }
  FUN_006475b0(param_1,1,0);
  *(undefined1 *)(param_1 + 0x184) = 0;
  return 1;
}


