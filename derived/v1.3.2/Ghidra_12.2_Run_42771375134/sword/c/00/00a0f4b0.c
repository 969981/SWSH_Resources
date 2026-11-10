/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0f4b0; name: FUN_00a0f4b0
 */


byte FUN_00a0f4b0(long param_1)

{
  if (*(long *)(param_1 + 0x68) == 0) {
    return 0;
  }
  return *(byte *)(*(long *)(param_1 + 0x68) + 0x58) & 1;
}


