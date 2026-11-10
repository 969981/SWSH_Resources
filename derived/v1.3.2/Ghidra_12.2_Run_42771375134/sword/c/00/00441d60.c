/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441d60; name: FUN_00441d60
 */


void FUN_00441d60(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xc5) = param_2 & 1;
  return;
}


