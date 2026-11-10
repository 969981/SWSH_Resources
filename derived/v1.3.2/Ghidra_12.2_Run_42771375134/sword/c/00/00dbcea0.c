/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbcea0; name: FUN_00dbcea0
 */


undefined8 FUN_00dbcea0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  param_3 = param_3 & 1;
  uVar1 = FUN_00db5e80(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_00dbcf10(param_1,param_2,param_3);
  FUN_00dbd320(param_1,param_2,param_3);
  return 1;
}


