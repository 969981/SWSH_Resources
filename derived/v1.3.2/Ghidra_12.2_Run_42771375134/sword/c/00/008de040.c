/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008de040; name: FUN_008de040
 */


undefined8 FUN_008de040(uint param_1)

{
  param_1 = param_1 & 0xffff;
  if ((((param_1 - 0x30a < 0x31) &&
       ((1L << ((ulong)(param_1 - 0x30a) & 0x3f) & 0x1000000001e45U) != 0)) ||
      ((param_1 - 0x296 < 0x2a && ((1L << ((ulong)(param_1 - 0x296) & 0x3f) & 0x20000008005U) != 0))
      )) || (param_1 == 0x122)) {
    return 1;
  }
  return 0;
}


