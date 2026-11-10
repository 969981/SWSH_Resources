/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b100; name: FUN_0040b100
 */


long FUN_0040b100(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x10) == 0) {
    return lVar2;
  }
  lVar1 = FUN_0040b100();
  return lVar1 + lVar2;
}


