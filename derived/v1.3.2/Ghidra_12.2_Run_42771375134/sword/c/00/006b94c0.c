/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b94c0; name: FUN_006b94c0
 */


bool FUN_006b94c0(long *param_1)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if ((*param_1 != 0) && (lVar2 = FUN_006b6550(), bVar1 = false, lVar2 != 0)) {
    lVar2 = FUN_006b65f0();
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


