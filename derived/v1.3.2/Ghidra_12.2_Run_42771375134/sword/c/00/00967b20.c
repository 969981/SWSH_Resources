/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00967b20; name: FUN_00967b20
 */


void FUN_00967b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined4 *puStack_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 *puStack_68;
  undefined1 local_60;
  undefined4 local_54;
  undefined8 local_48;
  
  local_9c = param_6;
  local_98 = param_3;
  uVar2 = FUN_009423b0();
  uVar1 = FUN_008e0a00(param_3);
  FUN_0093a250(uVar2,uVar1,param_6,*param_4);
  uVar2 = FUN_009423b0(param_1);
  FUN_00936080(uVar2,param_3,0x42a);
  uVar2 = FUN_009423b0(param_1);
  FUN_009361a0(uVar2,param_2,1,&local_9c,&local_98,0);
  local_70 = &local_48;
  local_78 = 1;
  local_60 = 0;
  local_48 = local_98;
  puStack_68 = &local_54;
  local_88 = param_2;
  puStack_80 = param_4;
  local_54 = param_7;
  FUN_00942450(param_1);
  uVar2 = FUN_00925280();
  FUN_00966530(uVar2,auStack_90,&local_88);
  return;
}


