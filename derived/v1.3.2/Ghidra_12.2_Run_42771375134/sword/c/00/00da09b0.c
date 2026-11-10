/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da09b0; name: FUN_00da09b0
 */


long FUN_00da09b0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = FUN_00da0830();
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x18);
    lVar2 = lVar3 + 0x120;
    lVar3 = 0;
    if (*plVar1 != 0) {
      lVar3 = lVar2;
    }
  }
  return lVar3;
}


