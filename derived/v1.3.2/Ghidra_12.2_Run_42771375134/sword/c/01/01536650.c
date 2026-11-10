/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01536650; name: FUN_01536650
 */


void FUN_01536650(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x9af8) = param_2 & 1;
  return;
}


