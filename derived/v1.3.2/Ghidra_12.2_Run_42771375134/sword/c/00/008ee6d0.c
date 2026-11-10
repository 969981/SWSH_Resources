/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ee6d0; name: FUN_008ee6d0
 */


uint FUN_008ee6d0(uint param_1)

{
  if (param_1 < 3) {
    return 0x40301 >> (ulong)((param_1 & 3) << 3);
  }
  return 3;
}


