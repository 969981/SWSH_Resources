/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe1bc0; name: FUN_00fe1bc0
 */


void FUN_00fe1bc0(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  return;
}


