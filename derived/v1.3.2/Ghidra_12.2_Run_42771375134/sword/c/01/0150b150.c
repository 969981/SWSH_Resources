/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150b150; name: FUN_0150b150
 */


void FUN_0150b150(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  
  if (param_2 < 6) {
    bVar1 = *(byte *)(param_1 + 0x56c);
    bVar2 = (byte)(1 << (ulong)(param_2 & 0x1f));
    *(byte *)(param_1 + 0x56c) = bVar1 & (bVar2 ^ 0xff);
    if ((param_3 & 1) != 0) {
      *(byte *)(param_1 + 0x56c) = bVar1 | bVar2;
    }
  }
  return;
}


