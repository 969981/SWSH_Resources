/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a7970; name: FUN_009a7970
 */


uint FUN_009a7970(void)

{
  int iVar1;
  
  iVar1 = FUN_008e1290();
  if ((iVar1 - 0x319U & 0xffff) < 0xe) {
    return 0x3c7fU >> (ulong)(iVar1 - 0x319U & 0x1f) & 1;
  }
  return 0;
}


