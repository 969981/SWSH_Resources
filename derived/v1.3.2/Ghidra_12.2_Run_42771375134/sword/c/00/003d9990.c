/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d9990; name: FUN_003d9990
 */


long FUN_003d9990(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  while ((plVar1 = (long *)(lVar2 + 8), (*(byte *)(lVar2 + 0x1b) & 0x60) != 0 ||
         (*(long *)(lVar2 + 0x40) != param_2))) {
    lVar2 = *plVar1;
    if (*plVar1 == 0) {
      return 1;
    }
  }
  return lVar2;
}


