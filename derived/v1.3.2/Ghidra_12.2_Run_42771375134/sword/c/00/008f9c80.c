/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f9c80; name: FUN_008f9c80
 */


void FUN_008f9c80(long param_1)

{
  *(byte *)(*(long *)(param_1 + 0x88) + 0xb40) = *(byte *)(*(long *)(param_1 + 0x88) + 0xb40) | 1;
  if (*(long *)(param_1 + 0x750) == 0) {
    return;
  }
  FUN_009b16a0();
  return;
}


