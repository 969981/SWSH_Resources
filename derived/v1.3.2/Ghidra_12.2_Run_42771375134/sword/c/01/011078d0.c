/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011078d0; name: FUN_011078d0
 */


undefined8 FUN_011078d0(long param_1)

{
  if ((*(char *)(param_1 + 0x7c) == '\0') && (0.0 < *(float *)(param_1 + 0x84))) {
    return 1;
  }
  return 0;
}


