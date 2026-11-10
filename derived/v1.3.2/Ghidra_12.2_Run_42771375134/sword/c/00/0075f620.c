/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f620; name: FUN_0075f620
 */


void FUN_0075f620(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x18) = lVar1;
  *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 0x10;
  *(long *)(lVar1 + 0x10) = param_2;
  *(long *)(param_1 + 0x18) = param_2;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x10;
  *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) & 0xf7;
  return;
}


