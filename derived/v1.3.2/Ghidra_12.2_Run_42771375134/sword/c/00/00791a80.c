/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00791a80; name: FUN_00791a80
 */


void FUN_00791a80(long param_1,undefined1 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar3 = PTR_DAT_027155e8;
  uVar6 = 0;
  param_1 = param_1 + 0x7c8;
  do {
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_0199c0f0(&local_90);
    uVar4 = uStack_88;
    uVar5 = (uint)uVar6;
    uVar1 = local_90._4_2_ & 0xfffe;
    if ((uVar6 & 2) != 0) {
      uVar1 = local_90._4_2_ | 1;
    }
    uVar2 = uVar1 & 0xfffd;
    if ((uVar6 & 1) != 0) {
      uVar2 = uVar1 | 2;
    }
    local_90 = CONCAT71(local_90._1_7_,(char)(uVar5 >> 4)) & 0xffffffffffffff07;
    uVar1 = uVar2 & 0xfffb;
    if ((uVar6 & 0xc) != 0) {
      uVar1 = uVar2 | 4;
    }
    local_90._0_6_ = CONCAT24(uVar1,(undefined4)local_90);
    if ((uVar5 >> 3 & 1) == 0) {
      if ((uVar5 >> 2 & 1) != 0) {
        uStack_88._0_4_ = CONCAT22(0x702,(undefined2)uStack_88);
        goto LAB_00791b28;
      }
    }
    else {
      uStack_88._0_4_ = CONCAT13(5,(undefined3)uStack_88);
LAB_00791b28:
      uStack_88._5_3_ = SUB83(uVar4,5);
      uStack_88._0_5_ = CONCAT14(param_2,(undefined4)uStack_88);
    }
    FUN_019a4760(param_1,puVar3,&local_90);
    uVar6 = uVar6 + 1;
    param_1 = param_1 + 0x1c;
    if (uVar6 == 0x80) {
      return;
    }
  } while( true );
}


