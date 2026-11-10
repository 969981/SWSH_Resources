/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bb580; name: FUN_014bb580
 */


byte * FUN_014bb580(long param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(*(long *)(param_1 + (ulong)*(uint *)(&DAT_02171d20 +
                                                          (ulong)*(uint *)(param_1 + 0xaf8) * 4) *
                                          0x110 + 0x58) + 400);
  if (*pbVar1 < param_2) {
    return &DAT_02158da8;
  }
  if (pbVar1[1] < param_3) {
    return &DAT_02158da8;
  }
  return pbVar1 + (ulong)pbVar1[(ulong)(param_3 + pbVar1[1] * param_2) + (ulong)*pbVar1 * 2 + 2] +
                  (ulong)*(ushort *)(pbVar1 + (ulong)param_2 * 2 + 2);
}


