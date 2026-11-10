/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d712b0; name: FUN_00d712b0
 */


undefined4 FUN_00d712b0(int *param_1)

{
  if (*param_1 - 6U < 9) {
    return *(undefined4 *)(&DAT_0215fd80 + (long)(int)(*param_1 - 6U) * 4);
  }
  return 0;
}


