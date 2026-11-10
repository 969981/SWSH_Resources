/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009454b0; name: FUN_009454b0
 */


undefined4 FUN_009454b0(char param_1)

{
  if ((byte)(param_1 - 1U) < 0x11) {
    return *(undefined4 *)(&DAT_0214ae20 + (long)(char)(param_1 - 1U) * 4);
  }
  return 0x2f8;
}


