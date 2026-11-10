/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008807c0; name: FUN_008807c0
 */


uint FUN_008807c0(uint param_1,uint param_2)

{
  return param_1 & 0xffff0000 | param_1 & 0xff | (param_2 & 0xff) << 8;
}


