/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d71280; name: FUN_00d71280
 */


uint FUN_00d71280(int *param_1)

{
  if (*param_1 - 2U < 9) {
    return 0x1c1U >> (ulong)(*param_1 - 2U & 0x1f) & 1;
  }
  return 0;
}


