/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed1d0; name: FUN_005ed1d0
 */


uint FUN_005ed1d0(int param_1)

{
  if (param_1 - 0x46U < 0x1e) {
    return 0x3f007fffU >> (ulong)(param_1 - 0x46U & 0x1f) & 1;
  }
  return 0;
}


