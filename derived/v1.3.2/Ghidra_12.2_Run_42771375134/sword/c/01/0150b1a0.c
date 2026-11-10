/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150b1a0; name: FUN_0150b1a0
 */


void FUN_0150b1a0(long param_1,int param_2)

{
  if (3 < (param_2 - 8U >> 3 | param_2 << 0x1d)) {
    param_2 = 0x20;
  }
  *(char *)(param_1 + 0x56d) = (char)param_2;
  return;
}


