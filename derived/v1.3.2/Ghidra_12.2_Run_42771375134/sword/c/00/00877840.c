/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877840; name: FUN_00877840
 */


undefined1 FUN_00877840(int param_1)

{
  if (param_1 - 0x388U < 0x11) {
    return (&DAT_02143dd6)[*(long *)(&DAT_02143e40 + (long)(int)(param_1 - 0x388U) * 8) * 4];
  }
  return 0;
}


