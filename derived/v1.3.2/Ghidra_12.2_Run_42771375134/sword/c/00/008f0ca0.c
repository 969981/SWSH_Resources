/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f0ca0; name: FUN_008f0ca0
 */


uint FUN_008f0ca0(uint param_1)

{
  if (param_1 < 3) {
    return 3U >> (ulong)(param_1 & 7) & 1;
  }
  return 0;
}


