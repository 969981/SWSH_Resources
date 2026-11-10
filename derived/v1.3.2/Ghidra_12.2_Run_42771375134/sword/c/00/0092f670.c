/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092f670; name: FUN_0092f670
 */


uint FUN_0092f670(uint param_1)

{
  if ((param_1 & 0xff) < 7) {
    return 0x71U >> (ulong)(param_1 & 0x1f) & 1;
  }
  return 0;
}


