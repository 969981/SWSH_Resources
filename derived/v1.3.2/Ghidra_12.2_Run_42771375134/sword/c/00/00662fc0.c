/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00662fc0; name: FUN_00662fc0
 */


undefined4 FUN_00662fc0(int param_1)

{
  if (param_1 - 1U < 0x9c) {
    return *(undefined4 *)(&DAT_02137e70 + (long)(int)(param_1 - 1U) * 4);
  }
  return 0;
}


