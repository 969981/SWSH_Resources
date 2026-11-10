/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946d60; name: FUN_00946d60
 */


uint FUN_00946d60(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  return (param_1 & 7) << 0x19 | (param_2 & 7) << 0x16 | (param_3 & 0x3f) << 0x10 |
         (param_4 & 7) << 0xd | param_5 & 0x1fff;
}


