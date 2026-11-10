/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3890; name: FUN_008e3890
 */


void FUN_008e3890(long param_1,uint param_2)

{
  param_1 = param_1 + (ulong)(param_2 >> 3 & 0xff);
  *(byte *)(param_1 + 0x35c) =
       *(byte *)(param_1 + 0x35c) & ((byte)(1 << (ulong)(param_2 & 7)) ^ 0xff);
  return;
}


