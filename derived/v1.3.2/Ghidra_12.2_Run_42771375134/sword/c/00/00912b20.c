/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00912b20; name: FUN_00912b20
 */


void FUN_00912b20(int *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  *param_1 = 0;
  *param_2 = 0;
  uVar4 = FUN_008f93a0(param_3,param_5);
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_008f37f0(param_3,0);
    uVar7 = 0;
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_008f8ca0(param_3,0);
      uVar7 = 0;
      if ((uVar2 & 0xff) == (param_5 & 0xff)) {
        uVar5 = FUN_008df3c0(param_4,0);
        bVar1 = FUN_009141c0();
        uVar7 = 0;
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            uVar6 = FUN_00914330(uVar5,uVar2);
            iVar3 = FUN_008e12a0(uVar6,0x10);
            uVar7 = iVar3 + uVar7;
            iVar3 = FUN_008e12a0(uVar6,0xe);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + iVar3;
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar4 = FUN_008f37f0(param_3,1);
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_008f8ca0(param_3,1);
      if ((uVar2 & 0xff) == (param_5 & 0xff)) {
        uVar5 = FUN_008df3c0(param_4,1);
        bVar1 = FUN_009141c0();
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            uVar6 = FUN_00914330(uVar5,uVar2);
            iVar3 = FUN_008e12a0(uVar6,0x10);
            uVar7 = iVar3 + uVar7;
            iVar3 = FUN_008e12a0(uVar6,0xe);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + iVar3;
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar4 = FUN_008f37f0(param_3,2);
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_008f8ca0(param_3,2);
      if ((uVar2 & 0xff) == (param_5 & 0xff)) {
        uVar5 = FUN_008df3c0(param_4,2);
        bVar1 = FUN_009141c0();
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            uVar6 = FUN_00914330(uVar5,uVar2);
            iVar3 = FUN_008e12a0(uVar6,0x10);
            uVar7 = iVar3 + uVar7;
            iVar3 = FUN_008e12a0(uVar6,0xe);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + iVar3;
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar4 = FUN_008f37f0(param_3,3);
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_008f8ca0(param_3,3);
      if ((uVar2 & 0xff) == (param_5 & 0xff)) {
        uVar5 = FUN_008df3c0(param_4,3);
        bVar1 = FUN_009141c0();
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            uVar6 = FUN_00914330(uVar5,uVar2);
            iVar3 = FUN_008e12a0(uVar6,0x10);
            uVar7 = iVar3 + uVar7;
            iVar3 = FUN_008e12a0(uVar6,0xe);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + iVar3;
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar4 = FUN_008f37f0(param_3,4);
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_008f8ca0(param_3,4);
      if ((uVar2 & 0xff) == (param_5 & 0xff)) {
        uVar5 = FUN_008df3c0(param_4,4);
        bVar1 = FUN_009141c0();
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            uVar6 = FUN_00914330(uVar5,uVar2);
            iVar3 = FUN_008e12a0(uVar6,0x10);
            uVar7 = iVar3 + uVar7;
            iVar3 = FUN_008e12a0(uVar6,0xe);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + iVar3;
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = (uint)(*param_1 * 100) / uVar7;
    }
    *param_2 = uVar2;
  }
  return;
}


