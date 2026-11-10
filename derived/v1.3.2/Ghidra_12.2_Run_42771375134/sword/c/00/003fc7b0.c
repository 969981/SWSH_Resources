/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fc7b0; name: FUN_003fc7b0
 */


long FUN_003fc7b0(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  cVar1 = *(char *)(*(long *)(lVar2 + 0x50) + 0xd);
  if (cVar1 != '\x04' && cVar1 != '\x01') {
    lVar2 = 0;
  }
  return lVar2;
}


