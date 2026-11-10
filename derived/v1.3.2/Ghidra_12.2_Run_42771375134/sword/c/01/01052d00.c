/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052d00; name: FUN_01052d00
 */


long FUN_01052d00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x148) + 400);
  lVar1 = *(long *)(param_1 + 0x148) + 0x570;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x60;
  }
  return lVar1;
}


