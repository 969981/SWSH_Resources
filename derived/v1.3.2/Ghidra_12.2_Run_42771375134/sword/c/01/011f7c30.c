/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7c30; name: FUN_011f7c30
 */


long FUN_011f7c30(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 10;
  }
  return lVar1;
}


