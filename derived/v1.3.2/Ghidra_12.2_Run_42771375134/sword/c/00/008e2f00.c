/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2f00; name: FUN_008e2f00
 */


int FUN_008e2f00(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)NEON_ucvtf((ulong)*(ushort *)(param_1 + 0x72));
  dVar2 = (double)((uint)*(ushort *)(param_1 + 0x74) * 100) / dVar2;
  dVar1 = 0.5;
  if (dVar2 <= 0.0) {
    dVar1 = -0.5;
  }
  return (int)(dVar2 * DAT_01cd5438 + dVar1);
}


