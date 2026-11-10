/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c59f0; name: FUN_003c59f0
 */


bool FUN_003c59f0(long param_1)

{
  if ((*(long *)(param_1 + 0x78) != 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x78) + 0x50) + 0x2c) & 1) == 0)) {
    return true;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    return false;
  }
  return (*(byte *)(*(long *)(*(long *)(param_1 + 0x80) + 0x50) + 0x2c) & 1) == 0;
}


