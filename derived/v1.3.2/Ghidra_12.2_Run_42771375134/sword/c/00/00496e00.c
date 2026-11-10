/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00496e00; name: FUN_00496e00
 */


void FUN_00496e00(long param_1)

{
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  FUN_00496c50(param_1 + 0x20);
  return;
}


