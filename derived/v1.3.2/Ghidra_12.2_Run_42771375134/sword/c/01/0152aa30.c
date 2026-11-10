/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152aa30; name: FUN_0152aa30
 */


long FUN_0152aa30(long param_1,uint param_2)

{
  if (param_2 < 0x97) {
    param_1 = param_1 + (long)(int)param_2 * 0xb0;
  }
  return param_1 + 0x68;
}


