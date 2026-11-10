/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd7e0; name: FUN_008dd7e0
 */


uint FUN_008dd7e0(int param_1)

{
  if (param_1 - 7U < 0x11) {
    return 0x10171U >> (ulong)(param_1 - 7U & 0x1f) & 1;
  }
  return 0;
}


