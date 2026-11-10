/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8730; name: FUN_009a8730
 */


void FUN_009a8730(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint3 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_98 [2];
  undefined2 uStack_96;
  undefined2 local_94;
  undefined8 local_92;
  undefined1 auStack_88 [40];
  char local_60 [8];
  undefined8 local_58;
  
  local_58 = FUN_008e1aa0(param_2,0x12);
  uVar5 = FUN_008ed2f0(&local_58);
  FUN_00942390(param_1);
  uVar8 = FUN_009319a0();
  uVar4 = FUN_00914000(uVar8,uVar5);
  if ((uVar4 & 0xff) != 0x1f) {
    uVar2 = FUN_008ec2f0(param_2,8,1);
    uVar3 = FUN_008e12a0(param_2,0xd);
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    uVar6 = FUN_008e0a00(param_2);
    uVar1 = FUN_008ed480(&local_58);
    _local_98 = 0x1f1f;
    local_94 = 0x1f00;
    local_92 = 0x505000000000000;
    FUN_00943e60(auStack_88);
    uVar8 = local_92;
    _local_98 = CONCAT22(uVar3,CONCAT11((char)uVar6,uVar1));
    local_94 = CONCAT11(uVar1,0x28);
    local_92._7_1_ = SUB81(uVar8,7);
    local_92._0_7_ = CONCAT16((char)uVar5,CONCAT24(0x45,CONCAT13(1,(undefined3)local_92)));
    uVar8 = FUN_00942380(param_1);
    FUN_00942390(param_1);
    uVar9 = FUN_00931920();
    uVar1 = FUN_008f9470(uVar8,uVar9,uVar6);
    local_92 = CONCAT17(uVar1,(undefined7)local_92);
    FUN_00943f20(auStack_88,2,0x336);
    FUN_00943f60(auStack_88,uVar6 & 0xff);
    iVar7 = FUN_00942620(param_1);
    if (iVar7 == 2) {
      FUN_00943e70(auStack_88);
    }
    FUN_00942450(param_1);
    uVar8 = FUN_00925580();
    FUN_0094a900(uVar8,local_60,local_98);
    if (local_60[0] != '\0') {
      local_94 = local_94 & 0xff00;
      _local_98 = 0x1f1f0000;
      FUN_00943e60((long)&local_92 + 2);
      _local_98 = CONCAT13((char)uVar6,uVar4 << 0x10);
      _local_98 = CONCAT22(uStack_96,uVar3);
      FUN_00942450(param_1);
      uVar8 = FUN_009255d0();
      FUN_0094c670(uVar8,local_60,local_98);
      local_60[0] = (char)uVar4;
      FUN_00942450(param_1);
      uVar8 = FUN_00925590();
      FUN_0094dfd0(uVar8,local_98,local_60);
    }
  }
  return;
}


