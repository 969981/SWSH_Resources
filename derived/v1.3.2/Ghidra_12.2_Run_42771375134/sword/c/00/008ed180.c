/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed180; name: FUN_008ed180
 */


uint FUN_008ed180(uint param_1,uint param_2,uint param_3)

{
  return (param_1 & 0x1f) << 3 | 4 | (param_2 & 0x3f) << 0xe | (param_3 & 0x3f) << 8;
}


