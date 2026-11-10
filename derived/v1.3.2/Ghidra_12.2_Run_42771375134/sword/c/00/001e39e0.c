/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e39e0; name: FUN_001e39e0
 */


void FUN_001e39e0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xd8);
  *param_2 = *(long *)(param_1 + 0xd0) + 0x60;
  *param_3 = lVar1 + 0x60;
  return;
}


