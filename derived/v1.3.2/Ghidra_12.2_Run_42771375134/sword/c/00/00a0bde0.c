/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0bde0; name: FUN_00a0bde0
 */


long FUN_00a0bde0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x58) + (ulong)param_2 * 0xc0;
  lVar1 = 0;
  if (*(char *)(lVar2 + 0xbc) != '\0') {
    lVar1 = lVar2 + 0x40;
  }
  return lVar1;
}


