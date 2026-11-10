/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a2190; name: FUN_009a2190
 */


void FUN_009a2190(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [16];
  undefined1 local_80 [4];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  undefined4 local_58;
  undefined1 auStack_54 [36];
  
  local_80[0] = 0x1f;
  local_7c = 0x2d;
  local_58 = 0;
  uStack_60 = 0;
  uStack_5a = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_61 = 0;
  local_78 = 0;
  FUN_00943e60(auStack_54);
  local_80[0] = FUN_008e0a00(param_2);
  local_7c = 3;
  uVar1 = FUN_008e0a00(param_2);
  local_78 = CONCAT71(local_78._1_7_,uVar1);
  uStack_5a = 1;
  local_58 = CONCAT13(1,(undefined3)local_58);
  FUN_00943f20(auStack_54,2,0x19c);
  uVar1 = FUN_008e0a00(param_2);
  FUN_00943f60(auStack_54,uVar1);
  FUN_00943f60(auStack_54,param_3);
  FUN_00942450(param_1);
  uVar2 = FUN_00925570();
  FUN_00948290(uVar2,auStack_90,local_80);
  return;
}


