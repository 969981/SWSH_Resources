/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077dfd0; name: FUN_0077dfd0
 */


long FUN_0077dfd0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (lVar1 = FUN_0077dbf0(param_1,param_2), lVar1 != 0)) {
    lVar1 = lVar1 - (ulong)(lVar1 == param_2);
    *(undefined2 *)(param_1 + lVar1 * 2) = 0;
  }
  return lVar1;
}


