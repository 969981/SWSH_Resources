/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00496c10; name: FUN_00496c10
 */


void FUN_00496c10(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_2;
  uStack_14 = param_1;
  FUN_00496c50(param_3 + 0x20,param_4,&local_18,1);
  *(byte *)(param_3 + 0x58) = *(byte *)(param_3 + 0x58) | 1;
  return;
}


