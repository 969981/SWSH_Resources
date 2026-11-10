/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c4b10; name: FUN_008c4b10
 */


void FUN_008c4b10(long param_1,byte param_2)

{
  *(byte *)(*(long *)(param_1 + 0x670) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x670) + 0x58) & 0xfe |
       *(int *)(param_1 + 0x824) != 0 & param_2;
  return;
}


