/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048d350; name: FUN_0048d350
 */


void FUN_0048d350(long param_1)

{
  *(byte *)(param_1 + 0x26a) = *(byte *)(param_1 + 0x26a) & 0x9f | 0x18;
  FUN_004bfd90(param_1,3,0);
  return;
}


