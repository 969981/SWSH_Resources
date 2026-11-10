/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095f390; name: FUN_0095f390
 */


void FUN_0095f390(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6e;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 auStack_38 [8];
  
  iVar2 = FUN_00942620();
  if (iVar2 == 2) {
    uVar4 = FUN_009424b0(param_1,4);
    uVar5 = FUN_009423b0(param_1);
    uVar3 = FUN_008e0a00(uVar4);
    FUN_00939be0(uVar5,uVar3);
    uVar5 = FUN_009423b0(param_1);
    FUN_00937550(uVar5,uVar4,0x15);
    uVar5 = FUN_009423f0(param_1);
    uVar6 = FUN_00943080(uVar5,4);
    if ((uVar6 & 1) == 0) {
      uVar5 = FUN_009423f0(param_1);
      FUN_009430a0(uVar5,4);
      uVar5 = FUN_009423b0(param_1);
      FUN_00937200(uVar5,uVar4,0x7e);
      uVar5 = FUN_009423b0(param_1);
      uVar1 = FUN_008e0a00(uVar4);
      FUN_00936040(uVar5,0x17f,uVar1);
    }
    local_80._0_6_ = CONCAT24(0x1f00,(undefined4)local_80);
    local_78 = 0;
    local_88 = uVar4;
    uVar3 = FUN_008ec2f0(uVar4,8,0);
    local_80 = CONCAT44(local_80._4_4_,uVar3);
    local_70 = 1;
    FUN_00942450(param_1);
    uVar5 = FUN_00925c00();
    FUN_0094ad90(uVar5,auStack_38,&local_88);
    local_88._0_1_ = 0x1f;
    local_60 = 0;
    local_50 = 0;
    local_6e = 0;
    local_78 = 0xfffffffe00000002;
    local_58 = 1;
    local_48 = 0;
    local_70 = 6;
    local_80 = uVar4;
    FUN_00942450(param_1);
    uVar5 = FUN_00925ae0();
    FUN_0094f630(uVar5,auStack_38,&local_88);
    local_88 = CONCAT71(local_88._1_7_,0x1f);
    local_60 = 0;
    local_50 = 0;
    local_6e = 0;
    local_58 = 1;
    local_48 = 0;
    local_70 = 6;
    local_78 = 0xfffffffe00000004;
    local_80 = uVar4;
    FUN_00942450(param_1);
    uVar4 = FUN_00925ae0();
    FUN_0094f630(uVar4,auStack_38,&local_88);
  }
  return;
}


