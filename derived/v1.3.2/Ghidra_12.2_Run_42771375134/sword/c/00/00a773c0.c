/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a773c0; name: FUN_00a773c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a773c0(long *param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  uint local_64;
  
  uVar10 = (ulong)param_3;
  local_7c = 0xff000000ff;
  local_74 = 0xff000000ff;
  local_6c = 0xff000000ff;
  local_64 = 0xff;
  *(uint *)((long)param_1 + 0x16fc) = param_2;
  if (param_4 < 0xe) {
    uVar8 = (ulong)param_2;
    switch(param_4) {
    default:
      goto switchD_00a77428_caseD_0;
    case 4:
      iVar5 = (**(code **)(*param_1 + 0x870))(param_1);
      if (iVar5 == 2) {
        *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(&DAT_01d4d2dc + uVar8 * 4);
        if (param_2 == 0) {
          local_7c = CONCAT44(1,(uint)local_7c);
          uVar10 = 0xff;
LAB_00a77fb4:
          local_74 = 2;
LAB_00a77fbc:
          local_74 = CONCAT44(4,(uint)local_74);
        }
        else {
          uVar10 = 0;
          local_7c = (ulong)local_7c._4_4_ << 0x20;
          if (param_2 == 1) goto LAB_00a77fb4;
          local_7c = 0x100000000;
          if (param_2 == 2) {
            uVar10 = 0;
            goto LAB_00a77fbc;
          }
          local_74 = CONCAT44(local_74._4_4_,2);
          if (param_2 == 4) {
            uVar10 = 0;
            local_6c = CONCAT44(local_6c._4_4_,6);
            goto LAB_00a7743c;
          }
          uVar10 = 0;
          local_74 = 0x400000002;
          if (param_2 == 6) goto LAB_00a7743c;
        }
        local_6c = CONCAT44(local_6c._4_4_,6);
        uVar6 = (uint)uVar10;
        goto joined_r0x00a776ec;
      }
      if (iVar5 != 1) {
        if (iVar5 != 0) goto LAB_00a77814;
        uVar6 = *(uint *)(&DAT_01d4d32c + uVar8 * 4);
        uVar10 = (ulong)uVar6;
        *(uint *)(param_1 + 0x2e0) = uVar6;
        local_7c = CONCAT44(local_7c._4_4_,uVar6);
        goto joined_r0x00a776ec;
      }
      *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(&DAT_01d4d350 + uVar8 * 4);
      if (param_2 == 0) {
        local_7c = CONCAT44(1,(uint)local_7c);
        uVar10 = 0xff;
LAB_00a77fe4:
        local_74 = 2;
LAB_00a77fec:
        local_74 = CONCAT44(3,(uint)local_74);
        uVar6 = (uint)uVar10;
        goto joined_r0x00a776ec;
      }
      uVar10 = 0;
      local_7c = (ulong)local_7c._4_4_ << 0x20;
      if (param_2 == 1) goto LAB_00a77fe4;
      local_7c = 0x100000000;
      if (param_2 != 2) {
        uVar10 = 0;
        local_74 = CONCAT44(local_74._4_4_,2);
        if (param_2 == 3) goto LAB_00a7743c;
        goto LAB_00a77fec;
      }
      uVar10 = 0;
      local_74 = CONCAT44(3,(uint)local_74);
      goto LAB_00a7743c;
    case 5:
      FUN_00a7b280(param_1,uVar8,&local_7c,1);
      uVar10 = local_7c & 0xffffffff;
      uVar6 = (uint)local_7c;
      break;
    case 6:
      *(uint *)(param_1 + 0x2e0) = param_2;
      uVar6 = (**(code **)(*param_1 + 0x870))(param_1);
      if (uVar6 < 3) {
        cVar3 = (**(code **)(*param_1 + 0x738))(param_1,0);
        cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
        if (cVar3 == cVar4) {
          uVar10 = 0;
          local_7c = local_7c & 0xffffffff00000000;
        }
        else {
          uVar10 = 0xff;
        }
        cVar3 = (**(code **)(*param_1 + 0x738))(param_1,1);
        cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
        if (cVar3 == cVar4) {
          local_7c = CONCAT44(1,(uint)local_7c);
        }
        uVar14 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        if (uVar6 != 0) {
          uVar2 = *(undefined4 *)(&DAT_021577c0 + uVar14);
          cVar3 = (**(code **)(*param_1 + 0x738))(param_1,uVar2);
          cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
          if (cVar3 == cVar4) {
            local_74 = CONCAT44(local_74._4_4_,uVar2);
          }
          if (uVar6 != 0) {
            uVar2 = *(undefined4 *)(&DAT_021577b4 + uVar14);
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,uVar2);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
            if (cVar3 == cVar4) {
              local_74 = CONCAT44(uVar2,(uint)local_74);
            }
          }
        }
        if (uVar6 < 2) goto LAB_00a77434;
        iVar11 = *(int *)(&DAT_021577a8 + uVar14);
        pcVar7 = *(code **)(*param_1 + 0x738);
LAB_00a77f70:
        cVar3 = (*pcVar7)(param_1,iVar11);
        cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
        if (cVar3 == cVar4) {
LAB_00a77f98:
          local_6c = CONCAT44(local_6c._4_4_,iVar11);
          uVar6 = (uint)uVar10;
          goto joined_r0x00a776ec;
        }
        goto LAB_00a77434;
      }
      goto LAB_00a77814;
    case 8:
    case 10:
    case 0xb:
    case 0xc:
      *(uint *)(param_1 + 0x2e0) = param_2;
      uVar10 = (**(code **)(*param_1 + 0x870))(param_1);
      if ((uint)uVar10 < 3) {
        uVar10 = -(uVar10 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar10 & 0xffffffff) << 2;
        iVar11 = *(int *)(&DAT_021577a8 + uVar10);
        iVar5 = *(int *)(&DAT_021577b4 + uVar10);
        uVar6 = 0;
        iVar13 = *(int *)(&DAT_021577c0 + uVar10);
        iVar16 = 1;
        iVar15 = 1;
      }
      else {
        iVar11 = 0xff;
        iVar5 = 0xff;
        iVar13 = 0xff;
        iVar16 = 0xff;
        iVar15 = 0xff;
        uVar6 = 0xff;
      }
      if ((param_4 | 2) != 10) {
        if (param_4 == 0xb) {
          if (uVar6 == 0xff) {
            uVar10 = 0xff;
          }
          else {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,uVar6);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,param_2);
            uVar10 = 0xff;
            if ((cVar3 != '\x02') && (cVar3 != cVar4)) {
              if (*(uint *)(param_1 + 0x2e0) == param_2) {
                *(uint *)(param_1 + 0x2e0) = uVar6;
              }
              uVar10 = (ulong)uVar6;
              local_7c = CONCAT44(local_7c._4_4_,uVar6);
            }
          }
          if (iVar16 != 0xff) {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,iVar16);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,param_2);
            if ((cVar3 != '\x02') && (cVar3 != cVar4)) {
              if (*(uint *)(param_1 + 0x2e0) == param_2) {
                *(int *)(param_1 + 0x2e0) = iVar16;
              }
              local_7c = CONCAT44(iVar16,(uint)local_7c);
            }
          }
          if (iVar13 != 0xff) {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,iVar13);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
            if ((cVar3 != '\x02') && (cVar3 != cVar4)) {
              if (*(uint *)(param_1 + 0x2e0) == param_2) {
                *(int *)(param_1 + 0x2e0) = iVar13;
              }
              local_74 = CONCAT44(local_74._4_4_,iVar13);
            }
          }
          if (iVar5 != 0xff) {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,iVar5);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
            if ((cVar3 != '\x02') && (cVar3 != cVar4)) {
              if (*(uint *)(param_1 + 0x2e0) == param_2) {
                *(int *)(param_1 + 0x2e0) = iVar5;
              }
              local_74 = CONCAT44(iVar5,(uint)local_74);
            }
          }
          if (iVar11 != 0xff) {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,iVar11);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
            if ((cVar3 != '\x02') && (cVar3 != cVar4)) {
              if (*(uint *)(param_1 + 0x2e0) == param_2) {
                *(int *)(param_1 + 0x2e0) = iVar11;
                local_6c = CONCAT44(local_6c._4_4_,iVar11);
                uVar6 = (uint)uVar10;
                break;
              }
              goto LAB_00a77f98;
            }
          }
        }
        else {
          if ((uVar6 == 0xff) || (param_4 != 0xc)) {
LAB_00a77e7c:
            uVar10 = 0xff;
          }
          else {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,uVar6);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,param_2);
            if (cVar3 != cVar4) goto LAB_00a77e7c;
            uVar10 = (ulong)uVar6;
            local_7c = CONCAT44(local_7c._4_4_,uVar6);
          }
          if ((iVar16 != 0xff) && (param_4 == 0xc)) {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,iVar16);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
            if (cVar3 == cVar4) {
              local_7c = CONCAT44(iVar16,(uint)local_7c);
            }
          }
          if ((iVar13 != 0xff) && (param_4 == 0xc)) {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,iVar13);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,uVar8);
            if (cVar3 == cVar4) {
              local_74 = CONCAT44(local_74._4_4_,iVar13);
            }
          }
          if ((iVar5 != 0xff) && (param_4 == 0xc)) {
            cVar3 = (**(code **)(*param_1 + 0x738))(param_1,iVar5);
            cVar4 = (**(code **)(*param_1 + 0x738))(param_1,param_2);
            if (cVar3 == cVar4) {
              local_74 = CONCAT44(iVar5,(uint)local_74);
            }
          }
          if ((iVar11 != 0xff) && (param_4 == 0xc)) {
            pcVar7 = *(code **)(*param_1 + 0x738);
            goto LAB_00a77f70;
          }
        }
        goto LAB_00a77434;
      }
      if (uVar6 != 0xff) {
        local_7c = CONCAT44(local_7c._4_4_,uVar6);
      }
      if (iVar15 != 0xff) {
        local_7c = CONCAT44(iVar15,(uint)local_7c);
      }
      if (iVar13 != 0xff) {
        local_74 = CONCAT44(local_74._4_4_,iVar13);
      }
      if (iVar5 != 0xff) {
        local_74 = CONCAT44(iVar5,(uint)local_74);
      }
      if (iVar11 != 0xff) {
        local_6c = CONCAT44(local_6c._4_4_,iVar11);
      }
      uVar10 = (ulong)uVar6;
    }
    if (uVar6 != 0xff) goto LAB_00a7743c;
LAB_00a77814:
    uVar8 = 0;
    uVar6 = local_7c._4_4_;
    if (local_7c._4_4_ == 0xff) goto LAB_00a77824;
LAB_00a774c4:
    if (param_1[(ulong)uVar6 + 0xa9] == 0) goto LAB_00a77824;
    plVar9 = (long *)(param_1[(ulong)uVar6 + 0xa9] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar12 = (long *)param_1[(ulong)uVar6 + 0xa9];
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    uVar10 = (**(code **)(*plVar12 + 400))(plVar12);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((uVar10 & 1) == 0) goto LAB_00a77824;
    lVar1 = uVar8 * 4;
    uVar8 = (ulong)((int)uVar8 + 1);
    *(uint *)((long)param_1 + lVar1 + 0x1704) = uVar6;
    uVar6 = (uint)local_74;
    if ((uint)local_74 != 0xff) goto LAB_00a77550;
LAB_00a77830:
    uVar6 = local_74._4_4_;
  }
  else {
switchD_00a77428_caseD_0:
    local_7c = CONCAT44(0xff,param_3);
    *(uint *)(param_1 + 0x2e0) = param_3;
LAB_00a77434:
    uVar6 = (uint)uVar10;
joined_r0x00a776ec:
    if (uVar6 == 0xff) goto LAB_00a77814;
LAB_00a7743c:
    if (param_1[uVar10 + 0xa9] == 0) goto LAB_00a77814;
    plVar9 = (long *)(param_1[uVar10 + 0xa9] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar12 = (long *)param_1[uVar10 + 0xa9];
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    uVar8 = (**(code **)(*plVar12 + 400))(plVar12);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((uVar8 & 1) == 0) goto LAB_00a77814;
    uVar8 = 1;
    *(int *)((long)param_1 + 0x1704) = (int)uVar10;
    uVar6 = local_7c._4_4_;
    if (local_7c._4_4_ != 0xff) goto LAB_00a774c4;
LAB_00a77824:
    uVar6 = (uint)local_74;
    if ((uint)local_74 == 0xff) goto LAB_00a77830;
LAB_00a77550:
    if (param_1[(ulong)uVar6 + 0xa9] == 0) goto LAB_00a77830;
    plVar9 = (long *)(param_1[(ulong)uVar6 + 0xa9] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar12 = (long *)param_1[(ulong)uVar6 + 0xa9];
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    uVar10 = (**(code **)(*plVar12 + 400))(plVar12);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((uVar10 & 1) == 0) goto LAB_00a77830;
    lVar1 = uVar8 * 4;
    uVar8 = (ulong)((int)uVar8 + 1);
    *(uint *)((long)param_1 + lVar1 + 0x1704) = uVar6;
    uVar6 = local_74._4_4_;
  }
  if ((uVar6 != 0xff) && (param_1[(ulong)uVar6 + 0xa9] != 0)) {
    plVar9 = (long *)(param_1[(ulong)uVar6 + 0xa9] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar12 = (long *)param_1[(ulong)uVar6 + 0xa9];
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    uVar10 = (**(code **)(*plVar12 + 400))(plVar12);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((uVar10 & 1) != 0) {
      lVar1 = uVar8 * 4;
      uVar8 = (ulong)((int)uVar8 + 1);
      *(uint *)((long)param_1 + lVar1 + 0x1704) = uVar6;
    }
  }
  iVar5 = (int)local_6c;
  uVar10 = local_6c & 0xffffffff;
  if (((int)local_6c != 0xff) && (param_1[uVar10 + 0xa9] != 0)) {
    plVar9 = (long *)(param_1[uVar10 + 0xa9] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar12 = (long *)param_1[uVar10 + 0xa9];
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    uVar10 = (**(code **)(*plVar12 + 400))(plVar12);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((uVar10 & 1) != 0) {
      lVar1 = uVar8 * 4;
      uVar8 = (ulong)((int)uVar8 + 1);
      *(int *)((long)param_1 + lVar1 + 0x1704) = iVar5;
    }
  }
  uVar6 = local_6c._4_4_;
  if ((local_6c._4_4_ != 0xff) && (param_1[(ulong)local_6c._4_4_ + 0xa9] != 0)) {
    uVar10 = (ulong)local_6c._4_4_;
    plVar9 = (long *)(param_1[(ulong)local_6c._4_4_ + 0xa9] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar12 = (long *)param_1[uVar10 + 0xa9];
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    uVar10 = (**(code **)(*plVar12 + 400))(plVar12);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((uVar10 & 1) != 0) {
      lVar1 = uVar8 * 4;
      uVar8 = (ulong)((int)uVar8 + 1);
      *(uint *)((long)param_1 + lVar1 + 0x1704) = uVar6;
    }
  }
  uVar6 = local_64;
  if ((local_64 != 0xff) && (param_1[(ulong)local_64 + 0xa9] != 0)) {
    uVar10 = (ulong)local_64;
    plVar9 = (long *)(param_1[(ulong)local_64 + 0xa9] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar12 = (long *)param_1[uVar10 + 0xa9];
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x10))();
    }
    uVar10 = (**(code **)(*plVar12 + 400))(plVar12);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((uVar10 & 1) != 0) {
      *(uint *)((long)param_1 + uVar8 * 4 + 0x1704) = uVar6;
    }
  }
  if ((*(uint *)(param_1 + 0x2e0) != 0xff) &&
     (param_1[(ulong)*(uint *)(param_1 + 0x2e0) + 0xa9] != 0)) {
    plVar9 = (long *)(param_1[(ulong)*(uint *)(param_1 + 0x2e0) + 0xa9] + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    if (*(uint *)(param_1 + 0x2e0) == 0xff) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)param_1[(ulong)*(uint *)(param_1 + 0x2e0) + 0xa9];
      if (plVar12 != (long *)0x0) {
        (**(code **)(plVar12[9] + 0x10))();
      }
    }
    uVar10 = (**(code **)(*plVar12 + 400))(plVar12);
    if (plVar12 != (long *)0x0) {
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((uVar10 & 1) != 0) goto LAB_00a77af8;
  }
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)((long)param_1 + 0x1704);
LAB_00a77af8:
  uVar6 = (**(code **)(*param_1 + 0x8f8))(param_1,*(undefined4 *)((long)param_1 + 0x16fc));
  *(uint *)(param_1 + 0x2e4) = uVar6 & 0xff;
  return;
}


