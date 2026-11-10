/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00787380; name: FUN_00787380
 */


void FUN_00787380(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x2ac) = param_2;
  *(ulong *)(param_1 + 0xa0) =
       *(ulong *)(param_1 + 0xa0) & 0xffffe00000000000 |
       *(ulong *)(param_1 + 0xa0) & 0x1fffffffff | (ulong)param_2 << 0x25;
  return;
}


