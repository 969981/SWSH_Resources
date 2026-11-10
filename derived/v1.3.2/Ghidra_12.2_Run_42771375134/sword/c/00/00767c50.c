/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00767c50; name: FUN_00767c50
 */


bool FUN_00767c50(long param_1)

{
  long lVar1;
  
  lVar1 = 8;
  if (*(char *)(param_1 + 0x278) != '\0') {
    lVar1 = 0x10;
  }
  return lVar1 < *(long *)(param_1 + 0x360);
}


