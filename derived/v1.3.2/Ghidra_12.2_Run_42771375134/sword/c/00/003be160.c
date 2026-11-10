/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be160; name: FUN_003be160
 */


long FUN_003be160(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x1f) != '\x01')) {
    return param_1 + 0x80;
  }
  return lVar1 + 0x20;
}


