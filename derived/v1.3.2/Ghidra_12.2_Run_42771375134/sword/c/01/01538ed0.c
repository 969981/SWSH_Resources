/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01538ed0; name: FUN_01538ed0
 */


uint FUN_01538ed0(long param_1,uint param_2)

{
  if (0x98967e < param_2) {
    param_2 = 9999999;
  }
  *(uint *)(param_1 + 100) = param_2;
  return param_2;
}


