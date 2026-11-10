/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121bc60; name: FUN_0121bc60
 */


uint FUN_0121bc60(byte *param_1)

{
  uint uVar1;
  
  if (*param_1 - 0x11 < 10) {
    return 1;
  }
  uVar1 = *param_1 - 1;
  if (uVar1 < 0x1e) {
    return 0x2000f001U >> (ulong)(uVar1 & 0x1f) & 1;
  }
  return 0;
}


