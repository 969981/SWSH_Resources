/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fb9a0; name: FUN_014fb9a0
 */


void FUN_014fb9a0(long param_1,ushort param_2,byte param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)param_2;
  lVar2 = param_1 + (ulong)(ushort)(param_2 - 0x27) * 8 + 0x22328;
  if (uVar1 < 0x27) {
    lVar2 = param_1 + (ulong)(ushort)(param_2 - 0x1f) * 8 + 0x222e8;
  }
  if (uVar1 < 0x1f) {
    lVar2 = param_1 + (ulong)uVar1 * 8 + 0x221f0;
  }
  *(byte *)(lVar2 + 6) = param_3 & 1;
  return;
}


