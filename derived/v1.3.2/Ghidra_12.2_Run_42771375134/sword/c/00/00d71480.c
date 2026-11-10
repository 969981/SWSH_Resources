/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d71480; name: FUN_00d71480
 */


byte FUN_00d71480(long param_1)

{
  if (*(int *)(param_1 + 4) == 0xc) {
    return *(byte *)(param_1 + 0x39) >> 1 & 1;
  }
  return 0;
}


