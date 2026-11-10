/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096a0c0; name: FUN_0096a0c0
 */


void FUN_0096a0c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined1 local_26;
  
  uStack_40 = *param_3;
  local_48 = param_3[1];
  uStack_30 = param_3[2];
  local_38 = param_3[3];
  local_28 = 0x36;
  local_26 = 1;
  FUN_00942450();
  uVar1 = FUN_00925180();
  FUN_009697e0(uVar1,auStack_50,&local_48);
  uStack_40 = *param_3;
  local_48 = param_3[1];
  uStack_30 = param_3[2];
  local_38 = param_3[3];
  local_26 = 0;
  local_28 = 0x37;
  FUN_00942450(param_1);
  uVar1 = FUN_00925180();
  FUN_009697e0(uVar1,auStack_50,&local_48);
  FUN_0096a160(param_1,*param_3,param_3[1],param_3[3]);
  return;
}


