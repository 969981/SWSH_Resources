/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01164bd0; name: FUN_01164bd0
 */


void FUN_01164bd0(long param_1,ulong param_2,byte param_3)

{
  *(byte *)(*(long *)(param_1 + 0x60) + (param_2 & 0xff) * 0x24 + 0xd8) = param_3 & 1;
  return;
}


