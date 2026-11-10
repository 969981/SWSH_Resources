/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e38a30; name: FUN_00e38a30
 */


undefined8 FUN_00e38a30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x440);
  while( true ) {
    if (lVar1 == *(long *)(param_1 + 0x448)) {
      return 1;
    }
    if ((*(long *)(lVar1 + 0x108) != 0) && (*(char *)(*(long *)(lVar1 + 0x108) + 0x170) == '\0'))
    break;
    lVar1 = lVar1 + 0x210;
  }
  return 0;
}


