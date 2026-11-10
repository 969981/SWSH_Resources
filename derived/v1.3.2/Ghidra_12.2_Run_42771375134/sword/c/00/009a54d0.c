/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a54d0; name: FUN_009a54d0
 */


void FUN_009a54d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 long param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  byte local_58;
  byte local_57;
  undefined1 local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  
  uVar5 = FUN_008e1600(param_4);
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_008e1680(param_4);
    local_78 = FUN_008f3790(param_3);
    local_74 = FUN_01524c00(param_2);
    local_74 = local_74 & 0xff;
    local_70 = FUN_008f8970(param_3);
    local_70 = local_70 & 0xff;
    uVar2 = FUN_008e1290(param_5);
    local_6c = FUN_008ec470(uVar2,*(undefined1 *)(param_5 + 0x33d),9);
    local_68 = FUN_008e12a0(param_5,0x11);
    local_64 = FUN_008e12a0(param_4,0x11);
    local_60 = FUN_008fa2d0(param_3,param_4);
    local_60 = local_60 & 0xff;
    local_5c = FUN_00878a50(uVar6);
    uVar4 = FUN_008e0a00(param_4);
    local_58 = FUN_008e5600(param_5,uVar4);
    local_58 = local_58 & 1;
    local_57 = FUN_008fb2c0(param_3);
    local_57 = local_57 & 1;
    sVar3 = FUN_008e2d10(param_4);
    local_56 = sVar3 == 0xe7;
    uVar2 = FUN_008e1290(param_4);
    uVar1 = *(undefined1 *)(param_4 + 0x33d);
    uVar4 = FUN_008e12a0(param_4,0x11);
    local_55 = FUN_008ec4d0(uVar2,uVar1,uVar4);
    local_55 = local_55 & 1;
    local_54 = FUN_01524c50(param_2,uVar6);
    local_54 = local_54 & 1;
    local_53 = FUN_008fb2d0(param_3);
    local_53 = local_53 & 1;
    FUN_009a5a00(&local_78,&local_80);
    *param_1 = local_80;
    *(undefined1 *)(param_1 + 3) = local_7c;
    *(undefined1 *)((long)param_1 + 0xb) = local_7b;
  }
  return;
}


