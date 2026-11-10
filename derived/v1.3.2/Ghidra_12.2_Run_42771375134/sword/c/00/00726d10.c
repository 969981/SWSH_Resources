/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00726d10; name: FUN_00726d10
 */


long FUN_00726d10(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x108) + 0x2c0) + (long)param_2 * 0x38);
  return plVar1[1] - *plVar1 >> 3;
}


