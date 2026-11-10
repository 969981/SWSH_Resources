/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b7cac0; name: FUN_00b7cac0
 */


void FUN_00b7cac0(undefined8 param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long *plVar26;
  long local_60;
  ulong local_58;
  char local_50 [4];
  int local_4c;
  ulong local_48;
  
  FUN_015d3fa0(param_1,&local_48,1);
  FUN_015d3f80(param_1,&local_4c,1);
  FUN_015d4630(param_1,local_50,1);
  local_58 = local_48;
  lVar16 = FUN_009e3930(0);
  if (*(long *)(lVar16 + 8) == 0) {
    iVar12 = -1;
  }
  else {
    iVar12 = FUN_006e7220(*(long *)(lVar16 + 8),&local_58);
  }
  cVar3 = (**(code **)(*param_2 + 0xa78))(param_2);
  if (cVar3 == '\x02') {
    FUN_0077d520(param_2[0xc5],L"Battle Message Std\n");
    goto LAB_00b7d7bc;
  }
  cVar3 = (**(code **)(*param_2 + 0xa78))(param_2);
  if (cVar3 == '\x01') {
    if (iVar12 == 1) {
      local_58 = 0x60b025387011;
    }
    else if (iVar12 == 0x4a) {
      local_58 = 0x61b0253871c4;
    }
    else {
      if (iVar12 != 0xd) {
        FUN_0077d520(param_2[0xc5],L"Not Use Capture Message\n");
        goto LAB_00b7d7bc;
      }
      local_58 = 0x5fb025386e5e;
    }
    local_58 = local_58 | 0xadb0000000000000;
    lVar16 = FUN_009e3930(4);
    if (*(long *)(lVar16 + 8) == 0) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = FUN_006e7220(*(long *)(lVar16 + 8),&local_58);
    }
    FUN_009e3890(param_2[0xc5],uVar14);
    goto LAB_00b7d7bc;
  }
  if (0x141 < iVar12) {
    switch(iVar12) {
    case 0x209:
      uVar14 = FUN_00a710e0(param_2,0,0);
      uVar15 = FUN_00a710e0(param_2,2,0);
      uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
      uVar18 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar15);
      lVar16 = FUN_009c5ff0(param_2);
      if (lVar16 == 0) {
        uVar9 = 0;
        uVar6 = 0;
      }
      else {
        FUN_008e0a00(uVar20);
        uVar9 = FUN_008f94e0();
        FUN_008e0a00(uVar18);
        uVar6 = FUN_008f94e0();
      }
      lVar16 = param_2[0xc5];
      uVar8 = FUN_008e0a00(uVar20);
      uVar7 = FUN_008e0a00(uVar18);
      uVar20 = 0x209;
      break;
    case 0x20a:
      uVar14 = FUN_00a710e0(param_2,0,0);
      uVar15 = FUN_00a710e0(param_2,2,0);
      uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
      uVar18 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar15);
      lVar16 = FUN_009c5ff0(param_2);
      if (lVar16 == 0) {
        uVar9 = 0;
      }
      else {
        FUN_008e0a00(uVar18);
        uVar9 = FUN_008f94e0();
      }
      lVar16 = param_2[0xc5];
      uVar13 = FUN_008e0a00(uVar20);
      uVar6 = FUN_008e0a00(uVar18);
      uVar20 = 0x20a;
      goto LAB_00b7d670;
    case 0x20b:
      uVar14 = FUN_00a710e0(param_2,0,0);
      uVar15 = FUN_00a710e0(param_2,2,0);
      uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
      uVar18 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar15);
      lVar16 = FUN_009c5ff0(param_2);
      if (lVar16 == 0) {
        uVar9 = 0;
        uVar6 = 0;
      }
      else {
        FUN_008e0a00(uVar20);
        uVar9 = FUN_008f94e0();
        FUN_008e0a00(uVar18);
        uVar6 = FUN_008f94e0();
      }
      lVar16 = param_2[0xc5];
      uVar8 = FUN_008e0a00(uVar20);
      uVar7 = FUN_008e0a00(uVar18);
      uVar20 = 0x20b;
      break;
    case 0x20c:
      uVar14 = FUN_00a710e0(param_2,0,0);
      uVar15 = FUN_00a710e0(param_2,2,0);
      uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
      uVar18 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar15);
      lVar16 = FUN_009c5ff0(param_2);
      if (lVar16 == 0) {
        uVar9 = 0;
      }
      else {
        FUN_008e0a00(uVar18);
        uVar9 = FUN_008f94e0();
      }
      lVar16 = param_2[0xc5];
      uVar13 = FUN_008e0a00(uVar20);
      uVar6 = FUN_008e0a00(uVar18);
      uVar20 = 0x20c;
LAB_00b7d670:
      uVar13 = uVar13 & 0xff;
LAB_00b7d678:
      FUN_009e14f0(lVar16,uVar20,3,uVar13,uVar9,uVar6);
      goto LAB_00b7d7bc;
    case 0x20d:
      goto switchD_00b7cbd0_caseD_c;
    case 0x20e:
      uVar14 = FUN_00a710e0(param_2,0,0);
      if (local_4c == 1) {
        uVar14 = FUN_00a710e0(param_2,2,0);
      }
      uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
      lVar16 = FUN_009c5ff0(param_2);
      if (lVar16 == 0) {
        cVar3 = '\0';
      }
      else {
        FUN_008e0a00(uVar20);
        cVar3 = FUN_008f94e0();
        cVar4 = FUN_008f98a0(lVar16);
        if (cVar3 == cVar4) {
          uVar18 = FUN_009c5ff0(param_2);
          bVar5 = FUN_008fa2d0(uVar18,uVar20);
          lVar16 = param_2[0xc5];
          uVar9 = FUN_008e0a00(uVar20);
          if (bVar5 < 100) {
            iVar12 = 0xd;
          }
          else {
            iVar12 = 0x104;
          }
          goto LAB_00b7d7b8;
        }
      }
      lVar16 = param_2[0xc5];
      uVar9 = FUN_008e0a00(uVar20);
      FUN_009e14f0(lVar16,0x20e,2,cVar3,uVar9);
      goto LAB_00b7d7bc;
    default:
      switch(iVar12) {
      case 0x16d:
        uVar14 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
        uVar10 = (**(code **)(*param_2 + 0x908))(param_2,uVar14);
        uVar14 = (**(code **)(*param_2 + 0x8c8))(param_2,1);
        uVar11 = (**(code **)(*param_2 + 0x908))(param_2,uVar14);
        uVar13 = FUN_01622cc0(uVar10,uVar11);
        lVar16 = param_2[0xc5];
        uVar9 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
        uVar6 = (**(code **)(*param_2 + 0x8c8))(param_2,1);
        uVar20 = 0x16d;
        goto LAB_00b7d678;
      case 0x16e:
      case 0x16f:
      case 0x170:
      case 0x171:
      case 0x172:
      case 0x173:
      case 0x174:
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x17a:
      case 0x17b:
      case 0x17c:
      case 0x17d:
      case 0x17e:
      case 0x17f:
      case 0x180:
      case 0x181:
      case 0x182:
      case 0x183:
      case 0x184:
      case 0x185:
      case 0x186:
      case 0x187:
      case 0x188:
      case 0x18a:
      case 0x18b:
      case 0x18c:
        break;
      case 0x189:
        lVar16 = param_2[0xc5];
        uVar9 = (**(code **)(*param_2 + 0x8b8))(param_2);
        iVar12 = 0x189;
        goto LAB_00b7d7b8;
      case 0x18d:
        uVar20 = FUN_009c5ff0(param_2);
        uVar17 = FUN_008f35c0(uVar20,0x20000000);
        iVar12 = 0x18d;
        if ((uVar17 & 1) != 0) {
          lVar16 = FUN_009c5ff0(param_2);
          iVar12 = 0x18d;
          if (*(char *)(*(long *)(lVar16 + 0x88) + 0x1b1) != '\0') {
            iVar12 = 0x215;
          }
        }
        lVar16 = param_2[0xc5];
        uVar9 = (**(code **)(*param_2 + 0x8b8))(param_2);
        goto LAB_00b7d7b8;
      case 0x18e:
        uVar20 = FUN_009c5ff0(param_2);
        uVar17 = FUN_008f35c0(uVar20,0x20000000);
        iVar12 = 0x18e;
        if ((uVar17 & 1) != 0) {
          lVar16 = FUN_009c5ff0(param_2);
          iVar12 = 0x18e;
          if (*(char *)(*(long *)(lVar16 + 0x88) + 0x1b0) != '\0') {
            iVar12 = 0x216;
          }
        }
        break;
      default:
        if (iVar12 == 0x142) goto LAB_00b7ce34;
      }
switchD_00b7cbd0_caseD_c:
      uVar20 = 0;
LAB_00b7d784:
      uVar14 = FUN_00a710e0(param_2,uVar20,0);
      (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
      lVar16 = param_2[0xc5];
      uVar9 = FUN_008e0a00();
      goto LAB_00b7d7b8;
    }
    FUN_009e14f0(lVar16,uVar20,4,uVar9,uVar8,uVar6,uVar7);
    goto LAB_00b7d7bc;
  }
  switch(iVar12) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar14 = FUN_00a710e0(param_2,1,0);
    uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
    iVar12 = FUN_00b7c970(param_2,uVar20,iVar12);
    lVar16 = param_2[0xc5];
    uVar9 = FUN_008e0a00(uVar20);
    break;
  case 9:
  case 10:
    lVar16 = param_2[0xc5];
    uVar9 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
    break;
  case 0xb:
    uVar14 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
    uVar10 = (**(code **)(*param_2 + 0x908))(param_2,uVar14);
    uVar14 = (**(code **)(*param_2 + 0x8c8))(param_2,1);
    uVar11 = (**(code **)(*param_2 + 0x908))(param_2,uVar14);
    iVar12 = FUN_01622cc0(uVar10,uVar11);
    lVar16 = param_2[0xc5];
    uVar9 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
    uVar6 = (**(code **)(*param_2 + 0x8c8))(param_2,1);
    if (iVar12 == -1) {
      FUN_009e14f0(lVar16,0xb,2,uVar9,uVar6);
    }
    else {
      FUN_009e14f0(lVar16,0x16d,3,iVar12,uVar9);
    }
    goto LAB_00b7d7bc;
  case 0xc:
  case 0xf:
  case 0x12:
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
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
    goto switchD_00b7cbd0_caseD_c;
  case 0xd:
    uVar14 = FUN_00a710e0(param_2,0,0);
    uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
    uVar18 = FUN_009c5ff0(param_2);
    bVar5 = FUN_008fa2d0(uVar18,uVar20);
    lVar16 = param_2[0xc5];
    uVar9 = FUN_008e0a00(uVar20);
    if (bVar5 < 100) {
      iVar12 = 0xd;
    }
    else {
      iVar12 = 0x104;
    }
    break;
  case 0xe:
    uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,0);
    uVar18 = (**(code **)(*param_2 + 0x7f8))(param_2,2);
    lVar16 = param_2[0xc5];
    uVar9 = FUN_008e0a00(uVar20);
    uVar6 = FUN_008e0a00(uVar18);
    uVar20 = 0xe;
    goto LAB_00b7d38c;
  case 0x10:
    uVar14 = FUN_00a801f0(param_2,7,0);
    if (local_4c == 1) {
      uVar14 = FUN_00a801f0(param_2,8,0);
    }
    uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
    lVar16 = param_2[0xc5];
    uVar9 = (**(code **)(*param_2 + 0x8e8))(param_2,uVar14);
    uVar6 = FUN_008e0a00(uVar20);
    uVar20 = 0x10;
LAB_00b7d38c:
    FUN_009e14f0(lVar16,uVar20,2,uVar9,uVar6);
    goto LAB_00b7d7bc;
  case 0x11:
    uVar14 = FUN_00a710e0(param_2,0,0);
    uVar15 = FUN_00a710e0(param_2,2,0);
    uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
    uVar18 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar15);
    lVar16 = param_2[0xc5];
    uVar9 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
    uVar6 = FUN_008e0a00(uVar20);
    uVar8 = FUN_008e0a00(uVar18);
    uVar20 = 0x11;
    goto LAB_00b7d72c;
  case 0x13:
    uVar14 = FUN_00a710e0(param_2,0,0);
    if (local_4c == 1) {
      uVar14 = FUN_00a710e0(param_2,2,0);
    }
    uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
    lVar16 = FUN_009c5ff0(param_2);
    if (lVar16 == 0) {
      uVar9 = 0;
    }
    else {
      FUN_008e0a00(uVar20);
      uVar9 = FUN_008f94e0();
    }
    lVar16 = param_2[0xc5];
    uVar6 = FUN_008e0a00(uVar20);
    uVar20 = 0x13;
    goto LAB_00b7d6f0;
  case 0x14:
    uVar14 = FUN_00a710e0(param_2,0,0);
    uVar15 = FUN_00a710e0(param_2,2,0);
    uVar20 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
    uVar18 = (**(code **)(*param_2 + 0x7f8))(param_2,uVar15);
    lVar16 = FUN_009c5ff0(param_2);
    if (lVar16 == 0) {
      uVar9 = 0;
    }
    else {
      FUN_008e0a00(uVar20);
      uVar9 = FUN_008f94e0();
    }
    lVar16 = param_2[0xc5];
    uVar6 = FUN_008e0a00(uVar20);
    uVar8 = FUN_008e0a00(uVar18);
    uVar20 = 0x14;
LAB_00b7d72c:
    FUN_009e14f0(lVar16,uVar20,3,uVar9,uVar6,uVar8);
    goto LAB_00b7d7bc;
  case 0x33:
    lVar16 = param_2[0xc5];
    uVar9 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
    uVar6 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
    uVar20 = 0x33;
LAB_00b7d6f0:
    FUN_009e14f0(lVar16,uVar20,2,uVar9,uVar6);
    goto LAB_00b7d7bc;
  case 0x4a:
    uVar14 = FUN_00a710e0(param_2,4,0);
    (**(code **)(*param_2 + 0x7f8))(param_2,uVar14);
    lVar16 = param_2[0xc5];
    uVar9 = FUN_008e0a00();
    iVar12 = 0x4a;
    break;
  default:
    if (iVar12 != 0x130) goto switchD_00b7cbd0_caseD_c;
LAB_00b7ce34:
    uVar14 = (**(code **)(*param_2 + 0x8c8))(param_2,0);
    lVar16 = (**(code **)(*param_2 + 0xa60))(param_2,uVar14);
    bVar1 = *(byte *)(lVar16 + 4);
    bVar2 = *(byte *)(lVar16 + 5);
    bVar5 = 1;
    if (bVar1 != 0) {
      bVar5 = 2;
    }
    uVar22 = (uint)bVar1;
    uVar21 = (uint)bVar2;
    uVar13 = uVar22;
    if (bVar1 <= bVar2 && bVar2 != 0) {
      uVar13 = uVar21;
    }
    bVar1 = bVar1 != 0;
    if (uVar21 != 0) {
      bVar1 = bVar5;
    }
    bVar5 = *(byte *)(lVar16 + 6);
    uVar23 = (uint)bVar5;
    if (uVar13 <= bVar5 && bVar5 != 0) {
      uVar13 = uVar23;
    }
    bVar5 = *(byte *)(lVar16 + 7);
    if (uVar23 != 0) {
      bVar1 = bVar1 + 1;
    }
    uVar25 = (uint)bVar5;
    if (uVar13 <= bVar5 && bVar5 != 0) {
      uVar13 = uVar25;
    }
    if (uVar25 != 0) {
      bVar1 = bVar1 + 1;
    }
    bVar5 = *(byte *)(lVar16 + 8);
    if (bVar5 != 0) {
      bVar1 = bVar1 + 1;
    }
    uVar24 = (uint)bVar5;
    if (bVar1 < 2) {
      if (uVar22 == 0) {
        if (uVar21 == 0) {
          if (uVar23 == 0) {
            if (uVar25 == 0) {
              if (bVar5 == 0) {
                iVar12 = 0x142;
              }
              else {
                iVar12 = uVar24 + 0x14d;
              }
            }
            else {
              iVar12 = uVar25 + 0x14a;
            }
          }
          else {
            iVar12 = uVar23 + 0x147;
          }
        }
        else {
          iVar12 = uVar21 + 0x144;
        }
      }
      else {
        iVar12 = uVar22 + 0x141;
      }
    }
    else {
      if (uVar13 <= uVar24 && uVar24 != 0) {
        uVar13 = uVar24;
      }
      iVar12 = uVar13 + 0x150;
    }
    uVar20 = 1;
    goto LAB_00b7d784;
  }
LAB_00b7d7b8:
  FUN_009e14f0(lVar16,iVar12,1,uVar9);
LAB_00b7d7bc:
  FUN_00b8c1a0(param_2[0xb9],param_2[0xc5],0);
  if (local_50[0] != '\0') {
    plVar26 = (long *)param_2[0x1b];
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar26;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    lVar19 = (**(code **)(*plVar26 + 0x10))(plVar26,0x88,8);
    if (lVar19 == 0) {
      (**(code **)(*plVar26 + 0xb8))(plVar26);
    }
    FUN_00ab4d00(lVar19,param_2);
    *(long **)(lVar19 + 8) = plVar26;
    *(long *)(lVar19 + 0x10) = lVar19;
    *(undefined8 *)(lVar19 + 0x18) = 0x88;
    *(undefined8 *)(lVar19 + 0x20) = 8;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar16 = param_2[0xa6];
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    local_60 = lVar19;
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    FUN_015f6330(lVar16,&local_60,0x40);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
    }
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    }
  }
  return;
}


