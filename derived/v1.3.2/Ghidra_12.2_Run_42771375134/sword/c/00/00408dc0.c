/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00408dc0; name: FUN_00408dc0
 */


void FUN_00408dc0(long param_1)

{
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xf0 | 1;
  return;
}


