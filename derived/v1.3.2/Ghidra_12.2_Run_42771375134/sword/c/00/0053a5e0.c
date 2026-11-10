/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053a5e0; name: FUN_0053a5e0
 */


undefined8 FUN_0053a5e0(undefined4 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  local_24 = 0x3f800000;
  local_54 = 0;
  local_5c = 0;
  local_48 = 0;
  uStack_40 = 0;
  lVar1 = param_2 + (long)param_3 * 0x40 + 0x9b4;
  local_2c = 0;
  local_34 = 0;
  local_60 = param_1;
  local_4c = param_1;
  local_38 = param_1;
  FUN_00515cb0(lVar1,lVar1,&local_60);
  *(undefined1 *)(param_2 + param_3 + 0xb34) = 1;
  return 0;
}


