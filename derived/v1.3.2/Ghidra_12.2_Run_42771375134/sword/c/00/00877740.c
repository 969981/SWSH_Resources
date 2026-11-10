/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877740; name: FUN_00877740
 */


undefined4 FUN_00877740(ushort param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&DAT_02143d78 + (ulong)param_1 * 4);
  }
  return 0;
}


