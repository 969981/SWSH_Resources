/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8fff0; name: FUN_00e8fff0
 */


void FUN_00e8fff0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x520) = param_2 & 1;
  return;
}


