/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa510; name: FUN_008fa510
 */


bool FUN_008fa510(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x88) + 0xb40) >> 4 & 1) == 0) {
    return *(short *)(param_1 + 0x166) != 0;
  }
  return false;
}


