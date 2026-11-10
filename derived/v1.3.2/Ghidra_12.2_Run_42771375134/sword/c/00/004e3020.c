/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e3020; name: FUN_004e3020
 */


void FUN_004e3020(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfb | (param_2 & 1) << 2;
  return;
}


