/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150aec0; name: FUN_0150aec0
 */


bool FUN_0150aec0(long param_1,uint param_2)

{
  if (param_2 < 6) {
    return (1 << (ulong)(param_2 & 0x1f) & (uint)*(byte *)(param_1 + 0x56c)) != 0;
  }
  return false;
}


