/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8bc80; name: FUN_00b8bc80
 */


void FUN_00b8bc80(long param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined8 param_5
                 )

{
  long lVar1;
  
  lVar1 = FUN_00aa4f60(*(undefined8 *)(param_1 + 0x38));
  FUN_00a0af80(lVar1 + 0x430,param_2,param_3,param_4 & 1,param_5);
  return;
}


