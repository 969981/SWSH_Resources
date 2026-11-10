/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fb8a0; name: FUN_014fb8a0
 */


long FUN_014fb8a0(long param_1,ushort param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)(ushort)(param_2 - 0x27) * 8 + 0x22328;
  if (param_2 < 0x27) {
    lVar1 = param_1 + (ulong)(ushort)(param_2 - 0x1f) * 8 + 0x222e8;
  }
  if (param_2 < 0x1f) {
    lVar1 = param_1 + (ulong)param_2 * 8 + 0x221f0;
  }
  return lVar1;
}


