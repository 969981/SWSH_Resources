/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01503360; name: FUN_01503360
 */


undefined2 FUN_01503360(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x6c;
  if (param_2 != 0) {
    lVar1 = 0x6e;
  }
  return *(undefined2 *)(param_1 + lVar1);
}


