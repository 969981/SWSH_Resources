/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108e9a0; name: FUN_0108e9a0
 */


undefined4 FUN_0108e9a0(byte param_1)

{
  if (param_1 < 0x12) {
    return *(undefined4 *)(&DAT_02163600 + (long)(char)param_1 * 4);
  }
  return 0x11;
}


