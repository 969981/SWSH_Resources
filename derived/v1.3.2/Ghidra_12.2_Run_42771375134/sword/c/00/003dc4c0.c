/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dc4c0; name: FUN_003dc4c0
 */


void FUN_003dc4c0(long param_1,byte param_2)

{
  *(byte *)(*(long *)(param_1 + 0x720) + 0xa40) = param_2 & 1;
  return;
}


