/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d71450; name: FUN_00d71450
 */


undefined4 FUN_00d71450(int *param_1)

{
  if (*param_1 - 2U < 9) {
    return *(undefined4 *)(&DAT_0215fde0 + (long)(int)(*param_1 - 2U) * 4);
  }
  return 9;
}


