/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01549440; name: FUN_01549440
 */


void FUN_01549440(long param_1,long param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if (uVar1 < 0x800) {
    param_1 = param_1 + (ulong)(uVar1 >> 3);
    *(byte *)(param_1 + 0x14b0) = *(byte *)(param_1 + 0x14b0) | (byte)(1 << (ulong)(uVar1 & 7));
  }
  return;
}


