/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb0c80; name: FUN_00fb0c80
 */


bool FUN_00fb0c80(long param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x188) != 0) {
    lVar2 = FUN_00794780();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


