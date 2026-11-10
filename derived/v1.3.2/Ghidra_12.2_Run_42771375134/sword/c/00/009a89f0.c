/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a89f0; name: FUN_009a89f0
 */


void FUN_009a89f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined1 auStack_78 [40];
  undefined8 local_48;
  
  uVar6 = FUN_008e1600(param_2);
  if ((uVar6 & 1) == 0) {
    uVar4 = FUN_008e0a00(param_2);
    local_48 = FUN_008e1aa0(param_2,8);
    uVar2 = FUN_008ed2f0(&local_48);
    iVar5 = -1;
    if (uVar2 < 0x148) {
      if (uVar2 < 0x53) {
        if (uVar2 == 0x14) {
          iVar5 = 0x46;
        }
        else if (uVar2 == 0x23) {
          iVar5 = 0x47;
        }
      }
      else if (uVar2 == 0x53) {
        iVar5 = 0x48;
      }
      else if (uVar2 == 0x80) {
        iVar5 = 0x4a;
      }
      else if (uVar2 == 0xfa) {
        iVar5 = 0x4b;
      }
    }
    else if (uVar2 < 0x263) {
      if (uVar2 == 0x148) {
        iVar5 = 0x4c;
      }
      else if (uVar2 == 0x1cf) {
        iVar5 = 0x49;
      }
    }
    else if (uVar2 == 0x263) {
      iVar5 = 0x4e;
    }
    else if (uVar2 == 0x30b) {
      iVar5 = 0xbb;
    }
    else if (uVar2 == 0x333) {
      iVar5 = 0xea;
    }
    uVar1 = FUN_008ed480(&local_48);
    local_88 = 0x1f1f;
    local_84 = 0x1f00;
    local_82 = 0x505000000000000;
    FUN_00943e60(auStack_78);
    local_88._0_2_ = CONCAT11((char)uVar4,uVar1);
    local_84 = CONCAT11(uVar1,0x29);
    uVar6 = FUN_008ed380(&local_48);
    uVar9 = 6;
    if ((uVar6 & 1) == 0) {
      uVar9 = 8;
    }
    uVar3 = FUN_008ec2f0(param_2,uVar9,1);
    uVar7 = local_82;
    local_88 = CONCAT22(uVar3,(undefined2)local_88);
    if (iVar5 != -1) {
      local_82._6_2_ = SUB82(uVar7,6);
      local_82._0_6_ = CONCAT24((short)iVar5,CONCAT13(1,(undefined3)local_82));
      uVar7 = FUN_00942380(param_1);
      FUN_00942390(param_1);
      uVar8 = FUN_00931920();
      uVar1 = FUN_008f9470(uVar7,uVar8,uVar4);
      local_82 = CONCAT17(5,CONCAT16(uVar1,(undefined6)local_82));
    }
    FUN_00943f20(auStack_78,2,0x1f8);
    FUN_00943f60(auStack_78,uVar4 & 0xff);
    FUN_00943f60(auStack_78,uVar2);
    iVar5 = FUN_00942620(param_1);
    if (iVar5 == 2) {
      FUN_00943e70(auStack_78);
    }
    FUN_00942450(param_1);
    uVar7 = FUN_00925580();
    FUN_0094a900(uVar7,auStack_90,&local_88);
  }
  return;
}


