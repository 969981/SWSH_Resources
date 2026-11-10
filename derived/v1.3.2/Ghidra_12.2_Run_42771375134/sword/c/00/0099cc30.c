/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099cc30; name: FUN_0099cc30
 */


void FUN_0099cc30(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  byte local_70 [16];
  
  *param_2 = 0;
  uVar9 = FUN_00942380();
  uVar10 = FUN_008f35c0(uVar9,0x4000);
  if (((uVar10 & 1) != 0) && (cVar4 = FUN_009425b0(param_1,*param_3), cVar4 == '\0')) {
    uVar13 = *param_3;
    puVar2 = (undefined4 *)param_3[2];
    uVar9 = param_3[3];
    lVar11 = FUN_00942400();
    *(undefined4 *)(lVar11 + 0x10) = *puVar2;
    uVar5 = FUN_00942540(param_1,uVar13);
    *(undefined1 *)(lVar11 + 0x14) = uVar5;
    iVar8 = FUN_0093b420(uVar9);
    if (iVar8 == 0) {
      uVar5 = 5;
    }
    else {
      uVar9 = FUN_0093b2c0(uVar9,0);
      uVar5 = FUN_00942540(param_1,uVar9);
    }
    *(undefined1 *)(lVar11 + 0x15) = uVar5;
    *(undefined2 *)(lVar11 + 0x16) = 0;
    *(undefined1 *)(lVar11 + 0x18) = 0;
    FUN_0095ee00(local_70 + 0x28);
    uVar9 = FUN_009423c0(param_1);
    FUN_0095ed00(uVar9,puVar2,(undefined4 *)(lVar11 + 0x10),local_70 + 0x28);
    uVar9 = FUN_009423b0(param_1);
    FUN_00936020(uVar9,0x1d4);
    return;
  }
  iVar8 = *(int *)param_3[2];
  uVar6 = FUN_00880b40(iVar8);
  uVar10 = FUN_00942740(param_1,*param_3);
  if ((uVar10 & 1) != 0) {
    if (iVar8 == 0xa5) {
      uVar9 = FUN_00942380(param_1);
      uVar13 = 0x67;
    }
    else {
      if (iVar8 != 0x96) goto LAB_0099cd04;
      uVar9 = FUN_00942380(param_1);
      uVar13 = 0x66;
    }
    FUN_008f2f20(uVar9,uVar13);
  }
LAB_0099cd04:
  uVar10 = FUN_00880a00(iVar8,1);
  if ((uVar10 & 1) != 0) {
    local_1a0 = *param_3;
    uStack_198 = param_3[2];
    local_190 = param_3[3];
    FUN_00942450(param_1);
    uVar9 = FUN_00925df0();
    FUN_0099e700(uVar9,&local_a8,&local_1a0);
    if ((char)local_a8 == '\x01') {
      return;
    }
    if ((char)local_a8 == '\x03') {
      uVar9 = FUN_009423e0(param_1);
      FUN_0092aad0(uVar9,*param_3,param_3[3],param_3[2]);
      return;
    }
    if ((char)local_a8 == '\x02') {
      *param_2 = 1;
      return;
    }
  }
  FUN_0095ee00(auStack_b0);
  uVar9 = FUN_009423a0(param_1);
  FUN_0095ee20(auStack_b0,uVar9);
  lVar11 = FUN_00942400(param_1);
  uVar13 = *param_3;
  puVar1 = param_3 + 3;
  uVar14 = *puVar1;
  FUN_00942390(param_1);
  uVar9 = FUN_009319a0();
  FUN_0093ae30(lVar11 + 0x10,uVar13,uVar14,uVar9);
  uVar12 = FUN_009423e0(param_1);
  uVar9 = *param_3;
  uVar14 = param_3[1];
  uVar13 = param_3[2];
  uVar3 = param_3[3];
  lVar11 = FUN_00942400(param_1);
  cVar4 = FUN_0092d330(uVar12,uVar14,uVar9,uVar13,uVar3,lVar11 + 0x10);
  if (cVar4 != '\0') {
    lVar11 = FUN_00942400(param_1);
    FUN_0093af10(lVar11 + 0x10);
  }
  uVar5 = 0;
  if ((uVar6 < 10) && ((1 << (ulong)(uVar6 & 0x1f) & 0x3d1U) != 0)) {
    uVar5 = 1;
  }
  FUN_009602f0(&local_1a0);
  local_a8 = param_3[1];
  local_a0 = param_3[2];
  local_98 = *param_3;
  local_90 = (undefined1 *)*puVar1;
  local_88 = (undefined8 *)((ulong)local_88 & 0xffffffffff000000);
  local_78 = &local_1a0;
  FUN_00942390(param_1);
  local_80 = FUN_009319e0();
  local_88 = (undefined8 *)((ulong)local_88 & 0xffffffffffffff00);
  FUN_00942450(param_1);
  uVar9 = FUN_00925240();
  FUN_00968560(uVar9,local_70,&local_a8);
  if (local_70[0] == 0) {
    local_a8 = *param_3;
    local_a0 = param_3[1];
    local_98 = param_3[2];
    local_80 = *puVar1;
    local_90 = (undefined1 *)CONCAT71(local_90._1_7_,uVar5);
    local_90 = (undefined1 *)CONCAT44(uVar6,(undefined4)local_90);
    local_88 = &local_1a0;
    FUN_00942450(param_1);
    uVar9 = FUN_00925e00();
    FUN_0099d3a0(uVar9,local_70,&local_a8);
  }
  local_a0 = param_3[1];
  local_98 = param_3[2];
  local_a8 = *param_3;
  local_88 = (undefined8 *)(CONCAT71(local_88._1_7_,local_70[0]) ^ 1);
  local_90 = auStack_b0;
  FUN_00942450(param_1);
  uVar9 = FUN_00925e10();
  FUN_0099d170(uVar9,local_70,&local_a8);
  uVar7 = FUN_008e0a00(*param_3);
  uVar13 = param_3[1];
  uVar9 = FUN_009423e0(param_1);
  FUN_00928990(uVar9,uVar7,iVar8,uVar13,0x29);
  uVar9 = *param_3;
  uVar7 = FUN_008e0a00(uVar9);
  uVar6 = FUN_008e2890(uVar9,iVar8);
  if ((uVar6 & 0xff) < 4) {
    uVar9 = FUN_009423b0(param_1);
    FUN_00939900(uVar9,uVar7,uVar6);
  }
  local_a8 = *param_3;
  local_98 = 0;
  local_a0 = CONCAT71(local_a0._1_7_,1);
  FUN_00942450(param_1);
  uVar9 = FUN_009251d0();
  FUN_0094af90(uVar9,local_70,&local_a8);
  *param_2 = local_70[0] ^ 1;
  return;
}


