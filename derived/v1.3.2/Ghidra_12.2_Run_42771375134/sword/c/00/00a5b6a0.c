/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5b6a0; name: FUN_00a5b6a0
 */


void FUN_00a5b6a0(long param_1,byte param_2,byte param_3)

{
  *(byte *)(param_1 + 0x90) = param_2 & 1;
  *(byte *)(*(long *)(param_1 + 0x78) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x78) + 0x58) & 0xfe | param_3 & 1;
  return;
}


