/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a01e60; name: FUN_00a01e60
 */


uint FUN_00a01e60(int *param_1)

{
  if (*param_1 - 3U < 8) {
    return 1;
  }
  if ((uint)param_1[4] < 0xb) {
    return 0x7f8U >> (ulong)(param_1[4] & 0x1f) & 1;
  }
  return 0;
}


