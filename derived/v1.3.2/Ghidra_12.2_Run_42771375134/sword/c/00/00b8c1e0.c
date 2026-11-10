/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8c1e0; name: FUN_00b8c1e0
 */


void FUN_00b8c1e0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_00aa5180(*(undefined8 *)(param_1 + 0x58));
  FUN_00a58320(lVar1 + 0x58,param_2,param_3 & 1);
  return;
}


