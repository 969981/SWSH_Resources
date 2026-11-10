/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3e030; name: FUN_00e3e030
 */


void FUN_00e3e030(long param_1,byte param_2)

{
  *(byte *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0xa0) + 0xd8) = param_2 & 1;
  return;
}


