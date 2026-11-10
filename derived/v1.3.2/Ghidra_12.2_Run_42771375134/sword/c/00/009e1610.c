/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e1610; name: FUN_009e1610
 */


void FUN_009e1610(undefined8 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  short *psVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long local_48;
  
  puVar3 = PTR_DAT_02718ad8;
  uVar12 = 0;
  switch(param_2) {
  case 0xd:
    uVar12 = 0x29;
    break;
  case 0xe:
    uVar12 = 0x2a;
    break;
  default:
    goto LAB_009e1b60;
  case 0x13:
    uVar12 = 0x2b;
    break;
  case 0x14:
    uVar12 = 0x2c;
    break;
  case 0x17:
    uVar12 = 0x2d;
    break;
  case 0x18:
    uVar12 = 0x2e;
    break;
  case 0x19:
    uVar12 = 0x2f;
    break;
  case 0x1a:
    uVar12 = 0x30;
    break;
  case 0x23:
    uVar12 = 0x22;
    break;
  case 0x8d:
    uVar12 = 0x12;
    break;
  case 0x8f:
    uVar12 = 0x13;
    break;
  case 0x91:
    uVar12 = 0x10;
    break;
  case 0x93:
    uVar12 = 0x11;
    break;
  case 0x95:
    uVar12 = 0x14;
    break;
  case 0x97:
    uVar12 = 0x15;
    break;
  case 0x99:
    uVar12 = 0xe;
    break;
  case 0x9b:
    uVar12 = 0xf;
    break;
  case 0x9d:
    uVar12 = 0x16;
    break;
  case 0x9f:
    uVar12 = 0x17;
    break;
  case 0xa1:
    uVar12 = 0x18;
    break;
  case 0xa3:
    uVar12 = 0x19;
    break;
  case 0xa5:
    uVar12 = 0x1a;
    break;
  case 0xa7:
    uVar12 = 0x1b;
    break;
  case 0xa9:
    break;
  case 0xab:
    uVar12 = 1;
    break;
  case 0xad:
    uVar12 = 2;
    break;
  case 0xaf:
    uVar12 = 3;
    break;
  case 0xb1:
    uVar12 = 4;
    break;
  case 0xb3:
    uVar12 = 6;
    break;
  case 0xb5:
    uVar12 = 10;
    break;
  case 0xb7:
    uVar12 = 0xb;
    break;
  case 0xb9:
    uVar12 = 0x1c;
    break;
  case 0xbb:
    uVar12 = 0x1d;
    break;
  case 0xbd:
    uVar12 = 0x1e;
    break;
  case 0xbf:
    uVar12 = 0x1f;
    break;
  case 0xc1:
    uVar12 = 0x20;
    break;
  case 0xc3:
    uVar12 = 0x21;
    break;
  case 0xc5:
    uVar12 = 0xd;
    break;
  case 0xe4:
    uVar12 = 0xc;
    break;
  case 0xe7:
    uVar12 = 8;
    break;
  case 0xe9:
    uVar12 = 9;
    break;
  case 0x104:
    uVar12 = 0x31;
    break;
  case 399:
    uVar12 = 0x32;
    break;
  case 400:
    uVar12 = 0x33;
    break;
  case 0x19f:
    uVar12 = 0x23;
    break;
  case 0x1ad:
    uVar12 = 0x24;
    break;
  case 0x1cb:
    uVar12 = 5;
    break;
  case 0x1cd:
    uVar12 = 7;
    break;
  case 0x1cf:
    uVar12 = 0x25;
    break;
  case 0x1d1:
    uVar12 = 0x26;
    break;
  case 0x20f:
    uVar12 = 0x27;
    break;
  case 0x211:
    uVar12 = 0x28;
  }
  switch(uVar12) {
  default:
    uVar5 = FUN_008f9370(*(undefined8 *)PTR_DAT_02718ad8,*param_3);
    param_2 = (~uVar5 & 1) + param_2 & 0xffff;
    goto LAB_009e1b60;
  case 0x22:
    uVar5 = *param_3;
    uVar6 = FUN_008f98a0(*(undefined8 *)PTR_DAT_02718ad8);
    if ((uVar6 & 0xff) == (uVar5 & 0xff)) {
      uVar8 = 0x23;
      lVar13 = *(long *)(*(long *)(puVar3 + 0x28) + 0x60);
    }
    else {
      uVar11 = FUN_008f80c0(*(undefined8 *)puVar3,uVar5);
      uVar8 = 0x24;
      if ((uVar11 & 1) != 0) {
        uVar8 = 0x25;
      }
      lVar13 = *(long *)(*(long *)(puVar3 + 0x28) + 0x60);
    }
    if (lVar13 == 0) {
      FUN_0077e740(0,uVar8,*(undefined8 *)(puVar3 + 0x18));
      local_48 = *(long *)(puVar3 + 0x18);
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0077e740(lVar13,uVar8,*(undefined8 *)(puVar3 + 0x18));
      (**(code **)(*plVar14 + 0x18))(plVar14);
      local_48 = *(long *)(puVar3 + 0x18);
    }
    if (local_48 == 0) {
      FUN_009e1d60(&local_48,param_3);
    }
    else {
      plVar14 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_009e1d60(&local_48,param_3);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      local_48 = 0;
    }
    FUN_014c62d0(*(undefined8 *)(puVar3 + 0x10),param_1,*(undefined8 *)(puVar3 + 0x18));
    return;
  case 0x23:
  case 0x24:
    iVar7 = 7;
    if ((int)param_3[1] < 2) {
      iVar7 = 0;
    }
    param_2 = iVar7 + (*param_3 - 1 & 0xff) + param_2;
    lVar13 = *(long *)(*(long *)(PTR_DAT_02718ad8 + 0x28) + 0x60);
    if (lVar13 == 0) {
      FUN_0077e740(0,param_2 & 0xffff,*(undefined8 *)(PTR_DAT_02718ad8 + 0x18));
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0077e740(lVar13,param_2 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    FUN_014c62d0(*(undefined8 *)(puVar3 + 0x10),param_1,*(undefined8 *)(puVar3 + 0x18));
    return;
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
    break;
  case 0x32:
  case 0x33:
    if ((param_2 & 0xffff) == 400) {
      uVar5 = *param_3;
      uVar6 = FUN_008f98a0(*(undefined8 *)PTR_DAT_02718ad8);
      if (uVar5 == (uVar6 & 0xff)) {
        param_2 = 400;
      }
      else {
        lVar13 = 1;
LAB_009e1b30:
        param_2 = (uint)(ushort)(&DAT_01cd5102)[lVar13 * 2];
      }
    }
    else if ((param_2 & 0xffff) == 399) {
      uVar5 = *param_3;
      uVar6 = FUN_008f98a0(*(undefined8 *)PTR_DAT_02718ad8);
      if (uVar5 != (uVar6 & 0xff)) {
        lVar13 = 0;
        goto LAB_009e1b30;
      }
      param_2 = 399;
    }
    param_2 = param_2 & 0xffff;
    goto LAB_009e1b60;
  case 0x34:
  case 0x35:
  case 0x39:
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar1 = param_3[2];
    uVar8 = FUN_008f94e0(uVar5);
    puVar3 = PTR_DAT_02718ad8;
    iVar7 = 0x38;
    if ((int)uVar1 < 3) {
      iVar7 = 0;
    }
    iVar9 = 0x1c;
    if (uVar1 != 2) {
      iVar9 = iVar7;
    }
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),uVar5);
      uVar12 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar3 + 0x10),0,uVar12);
    }
    FUN_009e1420(10,uVar8);
    iVar7 = FUN_009e31b0(uVar5);
    lVar13 = *(long *)(*(long *)(puVar3 + 0x30) + 0x60);
    uVar5 = (uVar6 * 4 + 0x3fc & 0x3fc) + (iVar9 + param_2 & 0xffff) + iVar7;
    if (lVar13 == 0) {
      FUN_0077e740(0,uVar5 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0077e740(lVar13,uVar5 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    FUN_014c62d0(*(undefined8 *)(puVar3 + 0x10),param_1,*(undefined8 *)(puVar3 + 0x18));
    return;
  case 0x36:
  case 0x37:
    uVar8 = FUN_008f94e0(*param_3);
    puVar3 = PTR_DAT_02718ad8;
    uVar5 = param_3[1];
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),*param_3);
      uVar12 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar3 + 0x10),0,uVar12);
    }
    FUN_009e1420(10,uVar8);
    iVar7 = FUN_009e31b0(*param_3);
    uVar5 = (uVar5 * 4 + 0x3fc & 0x3fc) + (param_2 & 0xffff) + iVar7;
    lVar13 = *(long *)(*(long *)(puVar3 + 0x30) + 0x60);
    if (lVar13 == 0) {
      FUN_0077e740(0,uVar5 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0077e740(lVar13,uVar5 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    FUN_014c62d0(*(undefined8 *)(puVar3 + 0x10),param_1,*(undefined8 *)(puVar3 + 0x18));
    return;
  case 0x38:
    uVar1 = *param_3;
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar8 = FUN_008f94e0(uVar1);
    iVar7 = 0x38;
    if ((int)uVar6 < 3) {
      iVar7 = 0;
    }
    iVar9 = 0x1c;
    if (uVar6 != 2) {
      iVar9 = iVar7;
    }
    iVar7 = FUN_009e31b0(uVar1);
    puVar3 = PTR_DAT_02718ad8;
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),uVar1);
      uVar12 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar3 + 0x10),0,uVar12);
    }
    uVar5 = iVar7 + (uVar5 * 4 + 0x3fc & 0x3fc) + (iVar9 + param_2 & 0xffff);
    FUN_009e1420(10,uVar8);
    FUN_014c9900(*(undefined8 *)(puVar3 + 0x10),1,param_3[1],1);
    lVar13 = *(long *)(*(long *)(puVar3 + 0x30) + 0x60);
    if (lVar13 == 0) {
      FUN_0077e740(0,uVar5 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0077e740(lVar13,uVar5 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    FUN_014c62d0(*(undefined8 *)(puVar3 + 0x10),param_1,*(undefined8 *)(puVar3 + 0x18));
    return;
  case 0x3a:
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar8 = FUN_008f94e0(uVar5);
    iVar7 = 4;
    if (uVar6 != 2) {
      iVar7 = (uint)(2 < (int)uVar6) << 3;
    }
    iVar9 = FUN_009e31b0(*param_3);
    puVar3 = PTR_DAT_02718ad8;
    if (*(long *)(PTR_DAT_02718ad8 + 8) != 0) {
      FUN_008df430(*(long *)(PTR_DAT_02718ad8 + 8),uVar5);
      uVar12 = FUN_008e1680();
      FUN_014c7bf0(*(undefined8 *)(puVar3 + 0x10),0,uVar12);
    }
    param_2 = iVar9 + iVar7 + param_2;
    FUN_009e1420(10,uVar8);
    lVar13 = *(long *)(*(long *)(puVar3 + 0x30) + 0x60);
    if (lVar13 == 0) {
      FUN_0077e740(0,param_2 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0077e740(lVar13,param_2 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    FUN_014c62d0(*(undefined8 *)(puVar3 + 0x10),param_1,*(undefined8 *)(puVar3 + 0x18));
    return;
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    iVar7 = FUN_009e31b0(*param_3);
    puVar3 = PTR_DAT_02718ad8;
    uVar5 = iVar7 + param_2;
    uVar6 = (uVar5 - 0xf) * 0x4000 & 0xffff | uVar5 - 0xf >> 2 & 0x3fff;
    if (uVar6 == 3) {
      param_2 = uVar5;
    }
    if (uVar6 < 7) {
      uVar5 = param_2;
    }
    lVar13 = *(long *)(*(long *)(PTR_DAT_02718ad8 + 0x30) + 0x60);
    if (lVar13 == 0) {
      FUN_0077e740(0,uVar5 & 0xffff,*(undefined8 *)(PTR_DAT_02718ad8 + 0x18));
      local_48 = *(long *)(puVar3 + 0x18);
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0077e740(lVar13,uVar5 & 0xffff,*(undefined8 *)(puVar3 + 0x18));
      (**(code **)(*plVar14 + 0x18))(plVar14);
      local_48 = *(long *)(puVar3 + 0x18);
    }
    if (local_48 == 0) {
      FUN_009e1d60(&local_48,param_3);
    }
    else {
      plVar14 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_009e1d60(&local_48,param_3);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      local_48 = 0;
    }
    if (((uVar5 & 0xffff) == 0x4cc) && (iVar7 = FUN_009e2170(*param_3,param_3[1]), -1 < iVar7)) {
      FUN_014c97b0(*(undefined8 *)(puVar3 + 0x10),1,iVar7);
    }
    FUN_014c62d0(*(undefined8 *)(puVar3 + 0x10),param_1,*(undefined8 *)(puVar3 + 0x18));
    return;
  }
  lVar13 = 0;
  switch(param_2 & 0xffff) {
  case 0xd:
    break;
  case 0xe:
    lVar13 = 1;
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x16:
    goto switchD_009e1a44_caseD_f;
  case 0x13:
    lVar13 = 2;
    break;
  case 0x14:
    lVar13 = 3;
    break;
  case 0x17:
    lVar13 = 4;
    break;
  case 0x18:
    lVar13 = 5;
    break;
  case 0x19:
    lVar13 = 6;
    break;
  case 0x1a:
    lVar13 = 7;
    break;
  default:
    if ((param_2 & 0xffff) == 0x104) {
      lVar13 = 8;
      break;
    }
    goto switchD_009e1a44_caseD_f;
  }
  param_2 = (uint)(ushort)(&DAT_0214dc06)[lVar13 * 2];
switchD_009e1a44_caseD_f:
  param_2 = param_2 & 0xffff;
LAB_009e1b60:
  puVar3 = PTR_DAT_02718ad8;
  lVar13 = *(long *)(*(long *)(PTR_DAT_02718ad8 + 0x28) + 0x60);
  if (lVar13 == 0) {
    FUN_0077e740(0,param_2,*(undefined8 *)(PTR_DAT_02718ad8 + 0x18));
  }
  else {
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0077e740(lVar13,param_2,*(undefined8 *)(puVar3 + 0x18));
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if (param_2 - 0x16d < 2) {
    FUN_014c87d0(*(undefined8 *)(puVar3 + 0x10),0,*param_3);
    FUN_009e1420(1,param_3[1]);
    FUN_009e1420(2,param_3[2]);
    psVar10 = (short *)FUN_0077d470(*(undefined8 *)(puVar3 + 0x18));
    sVar2 = *psVar10;
    while( true ) {
      while (sVar2 == 0x10) {
        uVar11 = FUN_014bf030(psVar10);
        if ((((uVar11 & 1) != 0) && (cVar4 = FUN_014bf260(psVar10), cVar4 != '\x02')) &&
           (cVar4 = FUN_014bed40(psVar10), cVar4 == -0x62)) {
          FUN_014c8a90(*(undefined8 *)(puVar3 + 0x10),0,0,1);
        }
        psVar10 = (short *)FUN_0077db30(psVar10);
        sVar2 = *psVar10;
      }
      if (sVar2 == 0) break;
      psVar10 = psVar10 + 1;
      sVar2 = *psVar10;
    }
  }
  else {
    local_48 = *(long *)(puVar3 + 0x18);
    if (local_48 == 0) {
      FUN_009e1d60(&local_48,param_3);
    }
    else {
      plVar14 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_009e1d60(&local_48,param_3);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      local_48 = 0;
    }
  }
  if ((param_2 == 0xcb) && (iVar7 = FUN_009e2170(param_3[2],param_3[1]), -1 < iVar7)) {
    FUN_014c97b0(*(undefined8 *)(puVar3 + 0x10),1,iVar7);
  }
  FUN_014c62d0(*(undefined8 *)(puVar3 + 0x10),param_1,*(undefined8 *)(puVar3 + 0x18));
  return;
}


