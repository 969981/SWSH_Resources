/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877320; name: FUN_00877320
 */


undefined1 FUN_00877320(ushort param_1,int param_2)

{
  if (param_2 - 1U < 5) {
    return (&DAT_02143aa0)[(ulong)(param_2 - 1U) + (ulong)param_1 + (ulong)param_1 * 4];
  }
  return 0;
}


