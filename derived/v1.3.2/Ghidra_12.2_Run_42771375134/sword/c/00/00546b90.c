/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546b90; name: FUN_00546b90
 */


undefined4 FUN_00546b90(int param_1)

{
  if (param_1 - 1U < 0x5d) {
    return *(undefined4 *)(&DAT_01d6b1e0 + (long)(int)(param_1 - 1U) * 4);
  }
  return 0;
}


