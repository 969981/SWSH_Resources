/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d7240; name: FUN_004d7240
 */


bool FUN_004d7240(long param_1)

{
  if ((*(int *)(param_1 + 0x50) == 0) && (2 < *(byte *)(param_1 + 0x5d))) {
    return (*(byte *)(param_1 + 0x5c) & 0xfc) != 4;
  }
  return false;
}


