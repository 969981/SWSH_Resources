/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf4050; name: FUN_00bf4050
 */


void FUN_00bf4050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_220 [496];
  
  iVar3 = *(int *)(param_1 + 0x68);
  switch(iVar3) {
  case 0x42:
    FUN_00bf90f0(*(undefined8 *)(param_1 + 0xe0),1);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    lVar8 = *(long *)(param_1 + 0x90) + 0x208;
    goto LAB_00bf40d4;
  case 0x43:
    FUN_00bf90f0(*(undefined8 *)(param_1 + 0xe0),2);
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    lVar8 = *(long *)(param_1 + 0x90) + 0x3b0;
LAB_00bf40d4:
    FUN_00bf81c0(uVar1,lVar8);
    FUN_00bf9980(*(undefined8 *)(param_1 + 0xe0),1);
    goto LAB_00bf4118;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    goto switchD_00bf4088_caseD_44;
  case 0x58:
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    uVar2 = 3;
    break;
  case 0x6c:
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    uVar2 = 4;
    break;
  case 0x6d:
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    uVar2 = 5;
    break;
  case 0x6e:
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    uVar2 = 6;
    break;
  default:
    if (iVar3 == 5) {
      uVar1 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = 0;
      break;
    }
    goto switchD_00bf4088_caseD_44;
  }
  FUN_00bf90f0(uVar1,uVar2);
LAB_00bf4118:
  iVar3 = *(int *)(param_1 + 0x68);
switchD_00bf4088_caseD_44:
  switch(iVar3) {
  case 0x5e:
    FUN_00c117c0(*(undefined8 *)(param_1 + 0x118),*(long *)(param_1 + 0x90) + 0x560);
    iVar3 = *(int *)(param_1 + 0x68);
    goto joined_r0x00bf41ec;
  case 0x5f:
    uVar1 = *(undefined8 *)(param_1 + 0x120);
    lVar8 = *(long *)(param_1 + 0x90) + 0x560;
    break;
  case 0x60:
    FUN_00c0a550(*(undefined8 *)(param_1 + 0x128),*(long *)(param_1 + 0x90) + 0x868);
    iVar3 = *(int *)(param_1 + 0x68);
    goto joined_r0x00bf41c4;
  case 0x61:
    uVar1 = *(undefined8 *)(param_1 + 0x130);
    lVar8 = *(long *)(param_1 + 0x90) + 0x868;
    break;
  default:
    goto switchD_00bf4138_caseD_62;
  case 0x75:
    FUN_00c0cc20(*(undefined8 *)(param_1 + 200),*(long *)(param_1 + 0x90) + 0x10f0);
    iVar3 = *(int *)(param_1 + 0x68);
joined_r0x00bf41c4:
    uVar4 = iVar3 - 0x42;
    if (uVar4 < 0x2d) goto LAB_00bf41f0;
    goto LAB_00bf4240;
  case 0x76:
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    lVar8 = *(long *)(param_1 + 0x90) + 0x10f0;
  }
  FUN_00bfe8c0(uVar1,lVar8);
switchD_00bf4138_caseD_62:
  iVar3 = *(int *)(param_1 + 0x68);
joined_r0x00bf41ec:
  uVar4 = iVar3 - 0x42;
  if (uVar4 < 0x2d) {
LAB_00bf41f0:
    uVar7 = (ulong)uVar4;
    if ((1L << (uVar7 & 0x3f) & 3U) == 0) {
      if ((1L << (uVar7 & 0x3f) & 0x40000400000U) != 0) goto LAB_00bf4248;
      if ((1L << (uVar7 & 0x3f) & 0x180000000000U) == 0) goto LAB_00bf4240;
      uVar1 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = 2;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = 0;
    }
LAB_00bf4250:
    FUN_00bf98a0(uVar1,uVar2);
    iVar3 = *(int *)(param_1 + 0x68);
  }
  else {
LAB_00bf4240:
    if (iVar3 == 5) {
LAB_00bf4248:
      uVar1 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = 1;
      goto LAB_00bf4250;
    }
  }
  switch(iVar3) {
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x2b:
  case 0x2c:
  case 0x52:
  case 0x53:
  case 0x54:
    FUN_01042330(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0x610),0,
                 *(long *)(param_1 + 0x90) + 0x68);
    iVar3 = *(int *)(param_1 + 0x68);
  }
  uVar4 = iVar3 - 0x17;
  if (uVar4 < 0x3e) {
    if ((1L << ((ulong)uVar4 & 0x3f) & 0x300007U) == 0) {
      if ((1L << ((ulong)uVar4 & 0x3f) & 0x3800000000000000U) == 0) goto LAB_00bf4364;
      FUN_00c00540(*(undefined8 *)(param_1 + 0x108),1);
      FUN_00c00a70(*(undefined8 *)(param_1 + 0x108),
                   *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x13e4));
      FUN_00c00940(*(undefined8 *)(param_1 + 0x108),
                   *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x13e0));
    }
    else {
      FUN_00c00540(*(undefined8 *)(param_1 + 0x108),0);
      lVar8 = (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x60) * 0x2c;
      FUN_00c005b0(*(undefined8 *)(param_1 + 0x108),
                   *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar8 + 0x1c0));
      FUN_00c006e0(*(undefined8 *)(param_1 + 0x108),
                   *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar8 + 0x1c4));
      FUN_00c00810(*(undefined8 *)(param_1 + 0x108),
                   *(undefined4 *)(*(long *)(param_1 + 0x90) + lVar8 + 0x1c8));
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x108) + 0x858);
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
    iVar3 = *(int *)(param_1 + 0x68);
  }
LAB_00bf4364:
  switch(iVar3) {
  case 8:
  case 0x17:
  case 0x52:
    FUN_00c013a0(*(undefined8 *)(param_1 + 0x108));
    break;
  case 9:
  case 0x18:
  case 0x53:
    FUN_00c004d0(*(undefined8 *)(param_1 + 0x108),0);
    if (*(long *)(*(long *)(param_1 + 0x90) + 0x13f0) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x160);
LAB_00bf441c:
      FUN_00784060(auStack_220);
      FUN_0169ce10(uVar1,auStack_220);
      FUN_00784490(auStack_220);
    }
    break;
  case 10:
  case 0x19:
  case 0x54:
    FUN_00c004d0(*(undefined8 *)(param_1 + 0x108),1);
    lVar8 = *(long *)(*(long *)(param_1 + 0x108) + 0x870);
    *(byte *)(lVar8 + 0x58) =
         *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(*(long *)(param_1 + 0x90) + 0x143c);
    lVar8 = *(long *)(param_1 + 0x90);
    if (*(long *)(lVar8 + 0x13f0) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x160);
      FUN_00784060(auStack_220);
      FUN_0169ce10(uVar1,auStack_220);
      FUN_00784490(auStack_220);
      lVar8 = *(long *)(param_1 + 0x90);
    }
    if (*(long *)(lVar8 + 0x13f8) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x168);
      goto LAB_00bf441c;
    }
  }
  FUN_00bfad70(*(undefined8 *)(param_1 + 0xa8),0);
  uVar4 = *(uint *)(param_1 + 0x68);
  if ((uVar4 - 7 < 6) || (uVar4 == 0x10)) {
    iVar3 = *(int *)(*(long *)(param_1 + 0x90) + 0x58);
    if (iVar3 == 2) {
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      uVar2 = 1;
LAB_00bf4480:
      FUN_00bfac30(uVar1,uVar2);
    }
    else if (iVar3 == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      uVar2 = 0;
      goto LAB_00bf4480;
    }
    FUN_00bfad70(*(undefined8 *)(param_1 + 0xa8),1);
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  uVar7 = (ulong)uVar4;
  if ((uVar4 < 0x2d) && ((1L << (uVar7 & 0x3f) & 0x18007fb00000U) != 0)) {
    FUN_00bfac30(*(undefined8 *)(param_1 + 0xa8),*(int *)(*(long *)(param_1 + 0x90) + 0x60) != 0);
    FUN_00bfad70(*(undefined8 *)(param_1 + 0xa8),1);
    uVar7 = (ulong)*(uint *)(param_1 + 0x68);
  }
  uVar4 = (int)uVar7 - 0x52;
  if ((uVar4 < 0x30) && ((1L << ((ulong)uVar4 & 0x3f) & 0x800000000007U) != 0)) {
    lVar8 = 0xa78;
    if (*(char *)(*(long *)(param_1 + 0x90) + 0x13e8) != '\0') {
      lVar8 = 0x770;
    }
    iVar3 = *(int *)(*(long *)(param_1 + 0x90) + lVar8);
    if (iVar3 == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      uVar2 = 1;
LAB_00bf454c:
      FUN_00bfac30(uVar1,uVar2);
    }
    else if (iVar3 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0xa8);
      uVar2 = 0;
      goto LAB_00bf454c;
    }
    FUN_00bfad70(*(undefined8 *)(param_1 + 0xa8),1);
    uVar7 = (ulong)*(uint *)(param_1 + 0x68);
  }
  if ((int)uVar7 == 0x11) {
    FUN_00c106a0(*(undefined8 *)(param_1 + 0x100));
    FUN_00bf5040(param_1);
    uVar7 = (ulong)*(uint *)(param_1 + 0x68);
  }
  if (((int)uVar7 - 0x2dU < 9) || ((int)uVar7 == 0x16)) {
    uVar7 = (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x60);
    FUN_00befe70(*(undefined8 *)(param_1 + 0xf8),uVar7);
    FUN_00bfbf40(*(undefined8 *)(param_1 + 0xf8),*(long *)(param_1 + 0x90) + uVar7 * 0x2c + 0x1a0);
    uVar7 = (ulong)*(uint *)(param_1 + 0x68);
  }
  uVar4 = (uint)uVar7;
  if ((uVar4 < 0x2d) && ((1L << (uVar7 & 0x3f) & 0x180003800000U) != 0)) {
    uVar7 = (ulong)*(byte *)(*(long *)(param_1 + 0x90) + 0x60);
    FUN_00befe70(*(undefined8 *)(param_1 + 0x108),uVar7);
    FUN_00bfbf40(*(undefined8 *)(param_1 + 0x108),*(long *)(param_1 + 0x90) + uVar7 * 0x2c + 0x1a0);
    FUN_00c004b0(*(undefined8 *)(param_1 + 0x108),1);
    uVar4 = *(uint *)(param_1 + 0x68);
  }
  switch(uVar4) {
  case 0x37:
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = 0;
    break;
  case 0x38:
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = 1;
    break;
  case 0x39:
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = 2;
    break;
  case 0x3a:
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = 3;
    break;
  case 0x3b:
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = 4;
    break;
  case 0x3c:
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = 5;
    break;
  case 0x3d:
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = 6;
    break;
  case 0x3e:
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    uVar2 = 7;
    break;
  default:
    goto switchD_00bf4634_default;
  }
  FUN_00c08bc0(uVar1,uVar2);
  uVar4 = *(uint *)(param_1 + 0x68);
switchD_00bf4634_default:
  if (uVar4 < 0x3f) {
    if ((1L << ((ulong)uVar4 & 0x3f) & 0x2a80000000000000U) == 0) {
      if ((1L << ((ulong)uVar4 & 0x3f) & 0x5500000000000000U) == 0) goto LAB_00bf4718;
      lVar8 = *(long *)(*(long *)(param_1 + 0xe8) + 0x848);
      bVar6 = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    else {
      lVar8 = *(long *)(*(long *)(param_1 + 0xe8) + 0x848);
      bVar6 = *(byte *)(lVar8 + 0x58) & 0xfe | *(byte *)(param_1 + 0x159);
    }
    *(byte *)(lVar8 + 0x58) = bVar6;
  }
LAB_00bf4718:
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 == 0x65) {
    FUN_00c15fd0(*(undefined8 *)(param_1 + 0xd8));
    FUN_00c16140(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x1440)
                );
    FUN_00c162d0(*(undefined8 *)(param_1 + 0xd8),0);
    FUN_00c16320(*(undefined8 *)(param_1 + 0xd8),0);
    FUN_00c15fb0(*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0x90) + 0xbc0);
LAB_00bf4798:
    iVar3 = *(int *)(param_1 + 0x68);
  }
  else if (iVar3 == 100) {
    FUN_00c162d0(*(undefined8 *)(param_1 + 0xd8),1);
    FUN_00c16320(*(undefined8 *)(param_1 + 0xd8),1);
    FUN_00c15f90(*(undefined8 *)(param_1 + 0xd8),*(long *)(param_1 + 0x90) + 0xb60);
    goto LAB_00bf4798;
  }
  if (iVar3 == 0x70) {
    FUN_00bfd320(*(undefined8 *)(param_1 + 0x110),1);
    FUN_00bfd2b0(*(undefined8 *)(param_1 + 0x110),*(undefined1 *)(*(long *)(param_1 + 0x90) + 0xf40)
                );
    FUN_00bfc090(*(undefined8 *)(param_1 + 0x110),*(long *)(param_1 + 0x90) + 0xe88);
    lVar5 = *(long *)(param_1 + 0x110);
    lVar8 = *(long *)(param_1 + 0x90) + 0xe88;
LAB_00bf4820:
    FUN_01042330(*(undefined8 *)(lVar5 + 0x610),0,lVar8);
    if (*(long *)(*(long *)(param_1 + 0x90) + 0x13f0) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x170);
      FUN_00784060(auStack_220);
      FUN_0169ce10(uVar1,auStack_220);
      FUN_00784490(auStack_220);
    }
  }
  else if (iVar3 == 0x6f) {
    FUN_00bfd320(*(undefined8 *)(param_1 + 0x110),1);
    FUN_00bfd2b0(*(undefined8 *)(param_1 + 0x110),*(undefined1 *)(*(long *)(param_1 + 0x90) + 0xcd8)
                );
    FUN_00bfc090(*(undefined8 *)(param_1 + 0x110),*(long *)(param_1 + 0x90) + 0xc20);
    lVar5 = *(long *)(param_1 + 0x110);
    lVar8 = *(long *)(param_1 + 0x90) + 0xc20;
    goto LAB_00bf4820;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  switch(iVar3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 1;
    break;
  default:
    goto switchD_00bf4874_caseD_d;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x2b:
  case 0x2c:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 2;
    break;
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x41:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 3;
    break;
  case 0x42:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 5;
    break;
  case 0x43:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 7;
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x56:
  case 0x57:
  case 0x81:
  case 0x82:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    if (*(char *)(*(long *)(param_1 + 0x90) + 0x13e8) == '\0') goto LAB_00bf48d4;
    uVar2 = 4;
    break;
  case 0x58:
  case 0x59:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 8;
    break;
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x75:
  case 0x76:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 9;
    break;
  case 100:
  case 0x65:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 10;
    break;
  case 0x6c:
  case 0x6d:
  case 0x6e:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = 0xb;
    break;
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
LAB_00bf48d4:
    uVar2 = 6;
  }
  FUN_00bfa9a0(uVar1,uVar2);
  iVar3 = *(int *)(param_1 + 0x68);
switchD_00bf4874_caseD_d:
  if (iVar3 < 0x12) {
    if (iVar3 == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined1 *)(param_1 + 0xa4) = 0;
      uVar2 = 0xfcf683f579b81979;
    }
    else {
      if (iVar3 != 6) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0xc0);
      *(undefined1 *)(param_1 + 0xa4) = 0;
      uVar2 = 0x8ad12bf538a170e3;
    }
  }
  else if (iVar3 == 0x12) {
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = 0xcc68ff5823fcb73;
    *(undefined1 *)(param_1 + 0xa4) = 0;
  }
  else {
    if (iVar3 != 0x3f) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xa4) = 0;
    uVar2 = 0x8ad865f538a7f21f;
  }
  FUN_01039f80(uVar1,uVar2);
  return;
}


