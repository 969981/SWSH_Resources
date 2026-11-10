/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524db0; name: FUN_01524db0
 */


void FUN_01524db0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x106) = *(byte *)(param_1 + 0x106) & 0xfb | (param_2 & 1) << 2;
  return;
}


