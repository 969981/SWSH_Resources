/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009accc0; name: FUN_009accc0
 */


void FUN_009accc0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
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
  
  uVar4 = FUN_009424e0(param_1,*param_3);
  uVar5 = FUN_009ace90(param_1,uVar4);
  if ((uVar5 & 1) != 0) {
    uVar6 = FUN_009423b0(param_1);
    FUN_00937300(uVar6,4,0,0x80);
    uVar6 = FUN_009423b0(param_1);
    uVar1 = FUN_008e0a00(uVar4);
    FUN_00936040(uVar6,0x17c,uVar1);
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
    local_80[0] = FUN_008e0a00(uVar4);
    local_7c = 0x2e;
    uVar1 = FUN_008e0a00(uVar4);
    local_78 = CONCAT71(local_78._1_7_,uVar1);
    uStack_5a = 1;
    local_58 = CONCAT13(1,(undefined3)local_58);
    FUN_00942450(param_1);
    uVar6 = FUN_00925570();
    FUN_00948290(uVar6,auStack_90,local_80);
    local_80[0] = FUN_008e0a00(uVar4);
    FUN_00942450(param_1);
    uVar6 = FUN_00925710();
    FUN_0094c2e0(uVar6,auStack_90,local_80);
    FUN_008e0b60(uVar4);
    uVar2 = FUN_008e5ea0();
    uVar6 = FUN_009423b0(param_1);
    uVar3 = FUN_008e0a00(uVar4);
    FUN_00939a30(uVar6,uVar3,uVar2);
    uVar6 = FUN_009423b0(param_1);
    uVar2 = FUN_008e0a00(uVar4);
    FUN_0093ab40(uVar6,uVar2,0);
    FUN_008e0b60(uVar4);
    FUN_008e5ee0();
    uVar5 = FUN_0093db90();
    if (((uVar5 & 1) != 0) && (uVar5 = FUN_008e2df0(uVar4,0x15), (uVar5 & 1) == 0)) {
      uVar6 = FUN_009423b0(param_1);
      uVar2 = FUN_008e0a00(uVar4);
      FUN_00939cb0(uVar6,uVar2);
    }
    FUN_009acfb0(param_1);
    uVar6 = FUN_009423b0(param_1);
    FUN_00937550(uVar6,uVar4,0x16);
  }
  return;
}


