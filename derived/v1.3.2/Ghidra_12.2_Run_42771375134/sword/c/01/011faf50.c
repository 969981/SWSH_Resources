/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011faf50; name: FUN_011faf50
 */


void FUN_011faf50(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x168);
  *(byte *)(param_1 + 0x168) = bVar1 & 0xfe;
  if ((bVar1 & 0xfe) == 0 && *(char *)(param_1 + 0x16d) != '\0') {
    *(undefined1 *)(param_1 + 0x16b) = 1;
  }
  *(undefined1 *)(param_1 + 0x16d) = 0;
  return;
}


