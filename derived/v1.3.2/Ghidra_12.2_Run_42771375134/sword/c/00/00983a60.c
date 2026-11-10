/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00983a60; name: FUN_00983a60
 */


void FUN_00983a60(undefined8 param_1,byte param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_72;
  undefined1 auStack_68 [40];
  
  uVar2 = FUN_0093eb90(param_1,4);
  if ((uVar2 == param_2) && (iVar3 = FUN_0093eb90(param_1,99), iVar3 != 0)) {
    uVar2 = FUN_0093eb90(param_1,3);
    uVar4 = FUN_0093ec60(param_1,uVar2);
    local_78 = 0x1f1f;
    local_74 = 0x1f00;
    local_72 = 0x505000000000000;
    FUN_00943e60(auStack_68);
    local_78._0_2_ = CONCAT11((char)uVar2,param_2);
    uVar1 = FUN_008ec2f0(uVar4,8,1);
    local_78 = CONCAT22(uVar1,(undefined2)local_78);
    local_74 = CONCAT11(param_2,6);
    local_72 = CONCAT62(local_72._2_6_,0x100);
    FUN_00943f20(auStack_68,2,0x668);
    FUN_00943f60(auStack_68,uVar2 & 0xff);
    FUN_0093f190(param_1,&local_78);
  }
  return;
}


