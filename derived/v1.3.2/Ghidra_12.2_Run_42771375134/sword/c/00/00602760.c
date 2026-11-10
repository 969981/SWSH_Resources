/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00602760; name: FUN_00602760
 */


int FUN_00602760(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_4 * param_1 - param_3 * param_2;
  return (uint)(0 < lVar1) + (int)(lVar1 >> 0x3f);
}


