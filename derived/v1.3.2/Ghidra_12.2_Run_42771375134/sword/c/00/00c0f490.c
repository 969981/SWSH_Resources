/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c0f490; name: FUN_00c0f490
 */


void FUN_00c0f490(long param_1,byte param_2)

{
  *(byte *)(*(long *)(param_1 + 0x850) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x850) + 0x58) & 0xfe | param_2 & 1;
  return;
}


