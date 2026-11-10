/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2e50; name: FUN_008e2e50
 */


void FUN_008e2e50(long param_1,uint param_2)

{
  param_1 = param_1 + (ulong)(param_2 >> 3 & 0xff);
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) | (byte)(1 << (ulong)(param_2 & 7));
  return;
}


