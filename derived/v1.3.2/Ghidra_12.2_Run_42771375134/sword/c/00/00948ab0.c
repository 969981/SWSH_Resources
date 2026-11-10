/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00948ab0; name: FUN_00948ab0
 */


void FUN_00948ab0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 local_90 [16];
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
  
  uVar2 = FUN_008e1810(param_2,0x22);
  if ((uVar2 & 1) != 0) {
    local_80[0] = 0x1f;
    local_7c = 0x2d;
    local_58 = 0;
    uStack_60 = 0;
    uStack_5a = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_61 = 0;
    FUN_00943e60(auStack_54);
    local_80[0] = FUN_008e0a00(param_2);
    local_7c = 0x22;
    uVar1 = FUN_008e0a00(param_2);
    local_78 = CONCAT71(local_78._1_7_,uVar1);
    uStack_5a = 1;
    local_58 = CONCAT13(1,(undefined3)local_58);
    FUN_00942450(param_1);
    uVar3 = FUN_00925570();
    FUN_00948290(uVar3,local_90,local_80);
    uVar3 = FUN_009423b0(param_1);
    FUN_00937630(uVar3,param_2,3);
    if ((param_3 & 1) != 0) {
      local_90[0] = FUN_008e0a00(param_2);
      FUN_00942450(param_1);
      uVar3 = FUN_00925050();
      FUN_00948c60(uVar3,local_80,local_90);
    }
  }
  return;
}


