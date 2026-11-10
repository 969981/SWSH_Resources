/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068a7c0; name: FUN_0068a7c0
 */


bool FUN_0068a7c0(undefined8 param_1,byte param_2,uint param_3)

{
  long lVar1;
  byte local_14 [4];
  
  local_14[0] = param_2 & 1;
  lVar1 = FUN_0068a5d0(param_1,local_14,1,param_3 & 1);
  return lVar1 == 1;
}


