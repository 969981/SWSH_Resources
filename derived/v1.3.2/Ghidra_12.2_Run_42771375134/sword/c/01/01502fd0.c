/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01502fd0; name: FUN_01502fd0
 */


long FUN_01502fd0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x60;
  if (param_2 != 0) {
    lVar1 = 0x62;
  }
  return (long)*(short *)(param_1 + lVar1);
}


