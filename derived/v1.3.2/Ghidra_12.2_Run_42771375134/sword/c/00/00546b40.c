/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546b40; name: FUN_00546b40
 */


uint FUN_00546b40(uint param_1,uint param_2)

{
  param_1 = param_1 >> (ulong)(param_2 & 0x1f);
  if (param_1 < 2) {
    param_1 = 1;
  }
  return param_1;
}


