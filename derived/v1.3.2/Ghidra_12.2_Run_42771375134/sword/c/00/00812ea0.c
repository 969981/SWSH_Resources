/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00812ea0; name: FUN_00812ea0
 */


void FUN_00812ea0(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte bVar17;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  
  plVar6 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if ((((*(char *)(param_1 + 0x44) != '\0') &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x50) != '\0')) &&
      (*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_1 + 0x3c) * 4) == 10)) &&
     (*(int *)(param_1 + 0x40) != 3)) {
    plVar6 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_0080dfa0(param_3,0xb);
      iVar13 = *(int *)(param_3 + 0x10);
    }
    else {
      **(undefined1 **)(param_3 + 8) = 0xb;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
      iVar13 = *(int *)(param_3 + 0x10) + -1;
      *(int *)(param_3 + 0x10) = iVar13;
    }
    if (iVar13 < 5) {
      FUN_0080dfa0(param_3,0x10);
      iVar13 = *(int *)(param_3 + 0x10);
      uVar3 = *(uint *)(param_1 + 0x38);
    }
    else {
      **(undefined1 **)(param_3 + 8) = 0x10;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
      iVar13 = *(int *)(param_3 + 0x10) + -1;
      *(int *)(param_3 + 0x10) = iVar13;
      uVar3 = *(uint *)(param_1 + 0x38);
    }
    if (iVar13 < 5) {
      FUN_0080dfa0(param_3);
      iVar13 = *(int *)(param_3 + 0x10);
    }
    else {
      pbVar14 = *(byte **)(param_3 + 8);
      if (uVar3 < 0x80) {
        pbVar15 = pbVar14;
      }
      else {
        pbVar16 = pbVar14;
        uVar7 = (ulong)uVar3;
        do {
          uVar3 = (uint)(uVar7 >> 7);
          uVar12 = uVar7 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar7 | 0x80;
          pbVar16 = pbVar15;
          uVar7 = uVar7 >> 7;
        } while (uVar12 != 0);
      }
      *pbVar15 = (byte)uVar3;
      iVar13 = ((int)pbVar15 + 1) - (int)pbVar14;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar13;
      iVar13 = *(int *)(param_3 + 0x10) - iVar13;
      *(int *)(param_3 + 0x10) = iVar13;
    }
    if (iVar13 < 5) {
      FUN_0080dfa0(param_3,0x1a);
    }
    else {
      **(undefined1 **)(param_3 + 8) = 0x1a;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0xd8))(plVar6,param_2,param_1,0);
    uVar12 = (**(code **)(*plVar6 + 0x78))();
    uVar7 = uVar12 & 0xffffffff;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_0080dfa0(param_3);
    }
    else {
      pbVar14 = *(byte **)(param_3 + 8);
      if ((uint)uVar12 < 0x80) {
        pbVar15 = pbVar14;
      }
      else {
        pbVar16 = pbVar14;
        uVar12 = uVar12 & 0xffffffff;
        do {
          uVar7 = uVar12 >> 7;
          uVar8 = uVar12 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar12 | 0x80;
          pbVar16 = pbVar15;
          uVar12 = uVar7;
        } while (uVar8 != 0);
      }
      *pbVar15 = (byte)uVar7;
      iVar13 = ((int)pbVar15 + 1) - (int)pbVar14;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar13;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar13;
    }
    (**(code **)(*plVar6 + 0x68))(plVar6,param_3);
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_0080dfa0(param_3,0xc);
      return;
    }
    **(undefined1 **)(param_3 + 8) = 0xc;
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
    return;
  }
  if (*(int *)(param_1 + 0x40) == 3) {
    uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_1);
    uVar7 = FUN_007e9740(param_1);
  }
  else {
    uVar3 = (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_1);
    uVar3 = uVar3 & 1;
    uVar7 = FUN_007e9740(param_1);
  }
  if (((uVar7 & 1) != 0) && (0 < (int)uVar3)) {
    uVar11 = *(int *)(param_1 + 0x38) << 3 | 2;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_0080dfa0(param_3);
    }
    else {
      pbVar14 = *(byte **)(param_3 + 8);
      if (uVar11 < 0x80) {
        pbVar15 = pbVar14;
      }
      else {
        pbVar16 = pbVar14;
        uVar4 = uVar11;
        do {
          uVar11 = uVar4 >> 7;
          uVar1 = uVar4 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar4 | 0x80;
          pbVar16 = pbVar15;
          uVar4 = uVar11;
        } while (uVar1 != 0);
      }
      *pbVar15 = (byte)uVar11;
      iVar13 = ((int)pbVar15 + 1) - (int)pbVar14;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar13;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar13;
    }
    uVar8 = FUN_00813de0(param_1,param_2);
    uVar12 = uVar8 & 0xffffffff;
    if (*(int *)(param_3 + 0x10) < 5) {
      FUN_0080dfa0(param_3);
    }
    else {
      pbVar14 = *(byte **)(param_3 + 8);
      if ((uint)uVar8 < 0x80) {
        pbVar15 = pbVar14;
      }
      else {
        pbVar16 = pbVar14;
        uVar8 = uVar8 & 0xffffffff;
        do {
          uVar12 = uVar8 >> 7;
          uVar2 = uVar8 >> 0xe;
          pbVar15 = pbVar16 + 1;
          *pbVar16 = (byte)uVar8 | 0x80;
          pbVar16 = pbVar15;
          uVar8 = uVar12;
        } while (uVar2 != 0);
      }
      *pbVar15 = (byte)uVar12;
      iVar13 = ((int)pbVar15 + 1) - (int)pbVar14;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar13;
      *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar13;
    }
  }
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      switch(*(undefined4 *)(param_1 + 0x3c)) {
      case 1:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar9 = (**(code **)(*plVar6 + 0x178))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0xb0))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) == 0) {
          FUN_00815340(*(undefined4 *)(param_1 + 0x38),param_3);
        }
        else {
LAB_00813970:
          FUN_0080dea0(param_3,uVar9);
        }
        break;
      case 2:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar5 = (**(code **)(*plVar6 + 0x170))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar5 = (**(code **)(*plVar6 + 0xa8))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) == 0) {
          FUN_00815290(*(undefined4 *)(param_1 + 0x38),param_3);
        }
        else {
LAB_00813938:
          FUN_0080dda0(param_3,uVar5);
        }
        break;
      case 3:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar12 = (**(code **)(*plVar6 + 0x158))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar12 = (**(code **)(*plVar6 + 0x90))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) == 0) {
          FUN_00814c00(*(undefined4 *)(param_1 + 0x38),uVar12,param_3);
        }
        else {
LAB_00813a5c:
          FUN_0080e0c0(param_3,uVar12);
        }
        break;
      case 4:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar12 = (**(code **)(*plVar6 + 0xa0))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) != 0) goto LAB_00813a5c;
        FUN_00814db0(*(undefined4 *)(param_1 + 0x38),uVar12,param_3);
        break;
      case 5:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar4 = (**(code **)(*plVar6 + 0x150))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar4 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) == 0) {
          FUN_00814ad0(*(undefined4 *)(param_1 + 0x38),(ulong)uVar4,param_3);
        }
        else {
          if ((int)uVar4 < 0) {
LAB_00813a58:
            uVar12 = (ulong)(int)uVar4;
            goto LAB_00813a5c;
          }
          if (4 < *(int *)(param_3 + 0x10)) {
            pbVar14 = *(byte **)(param_3 + 8);
            if (0x7f < uVar4) {
              pbVar15 = pbVar14;
              uVar12 = (ulong)uVar4;
              do {
                bVar17 = (byte)(uVar12 >> 7);
                uVar8 = uVar12 >> 0xe;
                pbVar16 = pbVar15 + 1;
                *pbVar15 = (byte)uVar12 | 0x80;
                pbVar15 = pbVar16;
                uVar12 = uVar12 >> 7;
              } while (uVar8 != 0);
              goto LAB_00813910;
            }
LAB_00813ab4:
            bVar17 = (byte)uVar4;
            pbVar16 = pbVar14;
            goto LAB_00813ab8;
          }
LAB_00813a74:
          FUN_0080dfa0(param_3);
        }
        break;
      case 6:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0xa0))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) != 0) goto LAB_00813970;
        FUN_008150b0(*(undefined4 *)(param_1 + 0x38),uVar9,param_3);
        break;
      case 7:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar5 = (**(code **)(*plVar6 + 0x160))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar5 = (**(code **)(*plVar6 + 0x98))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) != 0) goto LAB_00813938;
        FUN_00815010(*(undefined4 *)(param_1 + 0x38),uVar5,param_3);
        break;
      case 8:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar4 = (**(code **)(*plVar6 + 0x180))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar4 = (**(code **)(*plVar6 + 0xb8))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) == 0) {
          FUN_008153f0(*(undefined4 *)(param_1 + 0x38),uVar4 & 1,param_3);
        }
        else if (*(int *)(param_3 + 0x10) < 5) {
          uVar12 = (ulong)(uVar4 & 1);
LAB_00813a90:
          FUN_0080dfa0(param_3,uVar12);
        }
        else {
          **(byte **)(param_3 + 8) = (byte)uVar4 & 1;
          *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
        }
        break;
      case 9:
        iVar13 = *(int *)(*(long *)(param_1 + 0x30) + 0x7c);
        local_78 = 0;
        local_70 = 0;
        local_68 = (void *)0x0;
        if (*(int *)(param_1 + 0x40) == 3) {
          pbVar14 = (byte *)(**(code **)(*plVar6 + 0x1a8))(plVar6,param_2,param_1,uVar11,&local_78);
          bVar17 = *pbVar14;
          if ((bVar17 & 1) == 0) goto LAB_00813744;
LAB_008132d4:
          uVar12 = *(ulong *)(pbVar14 + 8);
          pbVar15 = *(byte **)(pbVar14 + 0x10);
          pbVar16 = *(byte **)(param_1 + 8);
          if ((*pbVar16 & 1) == 0) goto LAB_00813758;
LAB_008132e4:
          pbVar16 = *(byte **)(pbVar16 + 0x10);
        }
        else {
          pbVar14 = (byte *)(**(code **)(*plVar6 + 0xe0))(plVar6,param_2,param_1,&local_78);
          bVar17 = *pbVar14;
          if ((bVar17 & 1) != 0) goto LAB_008132d4;
LAB_00813744:
          pbVar15 = pbVar14 + 1;
          uVar12 = (ulong)(bVar17 >> 1);
          pbVar16 = *(byte **)(param_1 + 8);
          if ((*pbVar16 & 1) != 0) goto LAB_008132e4;
LAB_00813758:
          pbVar16 = pbVar16 + 1;
        }
        if (iVar13 == 3) {
          FUN_008161e0(pbVar15,uVar12,1,pbVar16);
        }
        FUN_00815600(*(undefined4 *)(param_1 + 0x38),pbVar14,param_3);
        goto joined_r0x00813844;
      case 10:
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar9 = (**(code **)(*plVar6 + 0x1a0))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0xd8))(plVar6,param_2,param_1,0);
        }
        FUN_00815cc0(uVar5,uVar9,param_3);
        break;
      case 0xb:
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar9 = (**(code **)(*plVar6 + 0x1a0))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0xd8))(plVar6,param_2,param_1,0);
        }
        FUN_00815e00(uVar5,uVar9,param_3);
        break;
      case 0xc:
        local_70 = 0;
        local_68 = (void *)0x0;
        local_78 = 0;
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar9 = (**(code **)(*plVar6 + 0x1a8))(plVar6,param_2,param_1,uVar11,&local_78);
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0xe0))(plVar6,param_2,param_1,&local_78);
        }
        FUN_00815960(*(undefined4 *)(param_1 + 0x38),uVar9,param_3);
joined_r0x00813844:
        if ((local_78 & 1) == 0) {
switchD_0081308c_default:
        }
        else {
          operator_delete(local_68);
        }
        break;
      case 0xd:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar4 = (**(code **)(*plVar6 + 0x160))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6,param_2,param_1);
        }
        uVar12 = (ulong)uVar4;
        if ((uVar7 & 1) == 0) {
          FUN_00814ca0(*(undefined4 *)(param_1 + 0x38),uVar12,param_3);
        }
        else {
          if (*(int *)(param_3 + 0x10) < 5) goto LAB_00813a90;
          pbVar14 = *(byte **)(param_3 + 8);
          if (uVar4 < 0x80) goto LAB_00813aa8;
          pbVar15 = pbVar14;
          do {
            bVar17 = (byte)(uVar12 >> 7);
            uVar8 = uVar12 >> 0xe;
            pbVar16 = pbVar15 + 1;
            *pbVar15 = (byte)uVar12 | 0x80;
            pbVar15 = pbVar16;
            uVar12 = uVar12 >> 7;
          } while (uVar8 != 0);
LAB_008139e8:
          iVar13 = (int)pbVar16 + 1;
          *pbVar16 = bVar17;
LAB_00813abc:
          iVar13 = iVar13 - (int)pbVar14;
          *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + (long)iVar13;
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - iVar13;
        }
        break;
      case 0xe:
        if (*(int *)(param_1 + 0x40) == 3) {
          lVar10 = (**(code **)(*plVar6 + 400))(plVar6,param_2,param_1,uVar11);
        }
        else {
          lVar10 = (**(code **)(*plVar6 + 200))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) != 0) {
          uVar4 = *(uint *)(lVar10 + 0x10);
          if ((int)uVar4 < 0) goto LAB_00813a58;
          if (*(int *)(param_3 + 0x10) < 5) goto LAB_00813a74;
          pbVar14 = *(byte **)(param_3 + 8);
          if (uVar4 < 0x80) goto LAB_00813ab4;
          pbVar15 = pbVar14;
          uVar12 = (ulong)uVar4;
          do {
            bVar17 = (byte)(uVar12 >> 7);
            uVar8 = uVar12 >> 0xe;
            pbVar16 = pbVar15 + 1;
            *pbVar15 = (byte)uVar12 | 0x80;
            pbVar15 = pbVar16;
            uVar12 = uVar12 >> 7;
          } while (uVar8 != 0);
LAB_00813910:
LAB_00813ab8:
          iVar13 = (int)pbVar16 + 1;
          *pbVar16 = bVar17;
          goto LAB_00813abc;
        }
        FUN_008154d0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(lVar10 + 0x10),param_3);
        break;
      case 0xf:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar5 = (**(code **)(*plVar6 + 0x150))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) != 0) goto LAB_00813938;
        FUN_00815150(*(undefined4 *)(param_1 + 0x38),uVar5,param_3);
        break;
      case 0x10:
        if (*(int *)(param_1 + 0x40) == 3) {
          uVar9 = (**(code **)(*plVar6 + 0x158))(plVar6,param_2,param_1,uVar11);
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0x90))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) != 0) goto LAB_00813970;
        FUN_008151f0(*(undefined4 *)(param_1 + 0x38),uVar9,param_3);
        break;
      case 0x11:
        if (*(int *)(param_1 + 0x40) == 3) {
          iVar13 = (**(code **)(*plVar6 + 0x150))(plVar6,param_2,param_1,uVar11);
        }
        else {
          iVar13 = (**(code **)(*plVar6 + 0x88))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) != 0) {
          uVar4 = iVar13 << 1 ^ iVar13 >> 0x1f;
          uVar12 = (ulong)uVar4;
          if (*(int *)(param_3 + 0x10) < 5) goto LAB_00813a90;
          pbVar14 = *(byte **)(param_3 + 8);
          if (0x7f < uVar4) {
            pbVar15 = pbVar14;
            uVar12 = (ulong)uVar4;
            do {
              bVar17 = (byte)(uVar12 >> 7);
              uVar8 = uVar12 >> 0xe;
              pbVar16 = pbVar15 + 1;
              *pbVar15 = (byte)uVar12 | 0x80;
              pbVar15 = pbVar16;
              uVar12 = uVar12 >> 7;
            } while (uVar8 != 0);
            goto LAB_008139e8;
          }
LAB_00813aa8:
          iVar13 = (int)pbVar14 + 1;
          *pbVar14 = (byte)uVar12;
          goto LAB_00813abc;
        }
        FUN_00814e50(*(undefined4 *)(param_1 + 0x38),iVar13,param_3);
        break;
      case 0x12:
        if (*(int *)(param_1 + 0x40) == 3) {
          lVar10 = (**(code **)(*plVar6 + 0x158))(plVar6,param_2,param_1,uVar11);
        }
        else {
          lVar10 = (**(code **)(*plVar6 + 0x90))(plVar6,param_2,param_1);
        }
        if ((uVar7 & 1) != 0) {
          uVar12 = lVar10 << 1 ^ lVar10 >> 0x3f;
          goto LAB_00813a5c;
        }
        FUN_00814f70(*(undefined4 *)(param_1 + 0x38),lVar10,param_3);
        break;
      default:
        goto switchD_0081308c_default;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar3);
  }
  return;
}


