/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013fca90; name: FUN_013fca90
 */


void FUN_013fca90(long param_1)

{
  FUN_0141bdf0(param_1 + 0x5d0);
  *(byte *)(*(long *)(param_1 + 0x5e8) + 0x58) = *(byte *)(*(long *)(param_1 + 0x5e8) + 0x58) | 1;
  return;
}


