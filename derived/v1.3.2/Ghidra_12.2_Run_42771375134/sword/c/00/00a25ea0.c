/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a25ea0; name: FUN_00a25ea0
 */


void FUN_00a25ea0(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uStack_e0;
  long local_d8;
  long local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long local_b8;
  undefined8 uStack_b0;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 0x180) != '\0') {
    lVar6 = *(long *)(param_1 + 0x108);
    bVar1 = *(char *)(param_1 + 0xfc) == '\0';
    uVar12 = 0;
    if (!bVar1) {
      uVar12 = 5;
    }
    uVar7 = 0;
    if (!bVar1) {
      uVar7 = 2;
    }
    uVar9 = 4;
    if (bVar1) {
      uVar9 = 1;
    }
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 3;
    }
    uVar8 = 2;
    if (bVar1) {
      uVar8 = 3;
    }
    uVar10 = 4;
    if (!bVar1) {
      uVar10 = 1;
    }
    uVar5 = 5;
    if (!bVar1) {
      uVar5 = 0;
    }
    if (*(char *)(param_1 + 0x181) != '\0') {
      uVar12 = uVar7;
    }
    lVar3 = FUN_00914330(param_2,uVar12);
    uStack_e0 = *(undefined8 *)(param_1 + 0x150);
    local_d8 = *(long *)(param_1 + 0x110);
    if (*(char *)(param_1 + 0x181) != '\0') {
      uVar9 = 1;
    }
    local_d0 = FUN_00914330(param_2,uVar9);
    uStack_c8 = *(undefined8 *)(param_1 + 0x158);
    local_c0 = *(long *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x181) != '\0') {
      iVar2 = (uint)bVar1 << 1;
    }
    local_b8 = FUN_00914330(param_2,iVar2);
    uStack_b0 = *(undefined8 *)(param_1 + 0x160);
    local_a8 = *(long *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x181) != '\0') {
      uVar8 = 6;
    }
    local_a0 = FUN_00914330(param_2,uVar8);
    uStack_98 = *(undefined8 *)(param_1 + 0x168);
    local_90 = *(long *)(param_1 + 0x128);
    if (*(char *)(param_1 + 0x181) != '\0') {
      uVar10 = 6;
    }
    local_88 = FUN_00914330(param_2,uVar10);
    uStack_80 = *(undefined8 *)(param_1 + 0x170);
    local_78 = *(long *)(param_1 + 0x130);
    if (*(char *)(param_1 + 0x181) != '\0') {
      uVar5 = 6;
    }
    local_70 = FUN_00914330(param_2,uVar5);
    uStack_68 = *(undefined8 *)(param_1 + 0x178);
    if (lVar3 == 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
      lVar6 = *(long *)(param_1 + 0x100);
    }
    else {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = FUN_008e1600(lVar3);
      if ((uVar4 & 1) == 0) {
        iVar2 = FUN_008e19f0(lVar3);
        uVar12 = 0;
        if (iVar2 != 0) {
          uVar12 = 0x3f800000;
        }
      }
      else {
        uVar12 = 0x40000000;
      }
      FUN_00ffd510(uVar12,uVar11,&uStack_e0);
      lVar6 = *(long *)(param_1 + 0x100);
    }
    if (lVar6 != 0) {
      FUN_00ffd840(*(undefined8 *)(param_1 + 0x10));
    }
    lVar6 = local_d0;
    if (local_d0 == 0) {
      *(byte *)(local_d8 + 0x58) = *(byte *)(local_d8 + 0x58) & 0xfe;
      lVar6 = *(long *)(param_1 + 0x100);
    }
    else {
      *(byte *)(local_d8 + 0x58) = *(byte *)(local_d8 + 0x58) | 1;
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = FUN_008e1600(local_d0);
      if ((uVar4 & 1) == 0) {
        iVar2 = FUN_008e19f0(lVar6);
        uVar12 = 0;
        if (iVar2 != 0) {
          uVar12 = 0x3f800000;
        }
      }
      else {
        uVar12 = 0x40000000;
      }
      FUN_00ffd510(uVar12,uVar11,&uStack_c8);
      lVar6 = *(long *)(param_1 + 0x100);
    }
    if (lVar6 != 0) {
      FUN_00ffd840(*(undefined8 *)(param_1 + 0x10));
    }
    lVar6 = local_b8;
    if (local_b8 == 0) {
      *(byte *)(local_c0 + 0x58) = *(byte *)(local_c0 + 0x58) & 0xfe;
      lVar6 = *(long *)(param_1 + 0x100);
    }
    else {
      *(byte *)(local_c0 + 0x58) = *(byte *)(local_c0 + 0x58) | 1;
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = FUN_008e1600(local_b8);
      if ((uVar4 & 1) == 0) {
        iVar2 = FUN_008e19f0(lVar6);
        uVar12 = 0;
        if (iVar2 != 0) {
          uVar12 = 0x3f800000;
        }
      }
      else {
        uVar12 = 0x40000000;
      }
      FUN_00ffd510(uVar12,uVar11,&uStack_b0);
      lVar6 = *(long *)(param_1 + 0x100);
    }
    if (lVar6 != 0) {
      FUN_00ffd840(*(undefined8 *)(param_1 + 0x10));
    }
    lVar6 = local_a0;
    if (local_a0 == 0) {
      *(byte *)(local_a8 + 0x58) = *(byte *)(local_a8 + 0x58) & 0xfe;
      lVar6 = *(long *)(param_1 + 0x100);
    }
    else {
      *(byte *)(local_a8 + 0x58) = *(byte *)(local_a8 + 0x58) | 1;
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = FUN_008e1600(local_a0);
      if ((uVar4 & 1) == 0) {
        iVar2 = FUN_008e19f0(lVar6);
        uVar12 = 0;
        if (iVar2 != 0) {
          uVar12 = 0x3f800000;
        }
      }
      else {
        uVar12 = 0x40000000;
      }
      FUN_00ffd510(uVar12,uVar11,&uStack_98);
      lVar6 = *(long *)(param_1 + 0x100);
    }
    if (lVar6 != 0) {
      FUN_00ffd840(*(undefined8 *)(param_1 + 0x10));
    }
    lVar6 = local_88;
    if (local_88 == 0) {
      *(byte *)(local_90 + 0x58) = *(byte *)(local_90 + 0x58) & 0xfe;
      lVar6 = *(long *)(param_1 + 0x100);
    }
    else {
      *(byte *)(local_90 + 0x58) = *(byte *)(local_90 + 0x58) | 1;
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = FUN_008e1600(local_88);
      if ((uVar4 & 1) == 0) {
        iVar2 = FUN_008e19f0(lVar6);
        uVar12 = 0;
        if (iVar2 != 0) {
          uVar12 = 0x3f800000;
        }
      }
      else {
        uVar12 = 0x40000000;
      }
      FUN_00ffd510(uVar12,uVar11,&uStack_80);
      lVar6 = *(long *)(param_1 + 0x100);
    }
    if (lVar6 != 0) {
      FUN_00ffd840(*(undefined8 *)(param_1 + 0x10));
    }
    lVar6 = local_70;
    if (local_70 == 0) {
      *(byte *)(local_78 + 0x58) = *(byte *)(local_78 + 0x58) & 0xfe;
      lVar6 = *(long *)(param_1 + 0x100);
    }
    else {
      *(byte *)(local_78 + 0x58) = *(byte *)(local_78 + 0x58) | 1;
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = FUN_008e1600(local_70);
      if ((uVar4 & 1) == 0) {
        iVar2 = FUN_008e19f0(lVar6);
        uVar12 = 0;
        if (iVar2 != 0) {
          uVar12 = 0x3f800000;
        }
      }
      else {
        uVar12 = 0x40000000;
      }
      FUN_00ffd510(uVar12,uVar11,&uStack_68);
      lVar6 = *(long *)(param_1 + 0x100);
    }
    if (lVar6 != 0) {
      FUN_00ffd840(*(undefined8 *)(param_1 + 0x10));
    }
  }
  return;
}


