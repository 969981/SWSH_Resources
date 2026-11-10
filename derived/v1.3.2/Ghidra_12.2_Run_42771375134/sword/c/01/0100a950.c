/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100a950; name: FUN_0100a950
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0100a950(long param_1,int param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  ulong uVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  int iVar28;
  int local_128;
  int local_120;
  uint local_118;
  int local_104;
  uint local_f8;
  undefined1 local_f4 [4];
  undefined8 local_f0;
  uint local_e4;
  ulong local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  long *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  plVar14 = (long *)PTR_DAT_02710798;
  lVar24 = *(long *)PTR_DAT_02710798;
  lVar23 = *(long *)(lVar24 + 0x248);
  if (lVar23 != 0) {
    (**(code **)(*(long *)(lVar23 + 0x48) + 0x10))();
  }
  local_b0 = *(long **)(param_1 + 8);
  local_90 = (uint *)0x0;
  local_88 = (uint *)0x0;
  local_98 = (uint *)0x0;
  local_70 = 0;
  local_c8 = (uint *)0x0;
  local_a0 = 0;
  local_c0 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  uStack_78 = 0;
  uStack_a8 = 0;
  local_80 = local_b0;
  if (*(long *)(lVar24 + 0x208) == 0) {
    local_118 = 0;
  }
  else {
    plVar26 = (long *)(*(long *)(lVar24 + 0x208) + 0x48);
    (**(code **)(*plVar26 + 0x10))(plVar26);
    (**(code **)(*plVar26 + 0x18))(plVar26);
    lVar24 = *(long *)(lVar24 + 0x208);
    if (lVar24 == 0) {
      local_118 = FUN_01538f80(0);
    }
    else {
      plVar26 = (long *)(lVar24 + 0x48);
      (**(code **)(*plVar26 + 0x10))(plVar26);
      local_118 = FUN_01538f80(lVar24);
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
    local_118 = local_118 & 0xff;
  }
  local_e0 = 0xf4b17a579f18960;
  local_d8 = 0x82a2b175229d6a5b;
  uStack_d0 = 0;
  lVar24 = lVar23 + (long)param_2 * 0xa68;
  FUN_01028fc0(&local_e0,*(undefined8 *)(lVar24 + 0xab0));
  *(undefined8 *)(lVar24 + 0xab0) = *(undefined8 *)(lVar24 + 0xab8);
  uVar11 = FUN_01028fe0();
  *(undefined8 *)(lVar24 + 0xab8) = uVar11;
  if (*(long *)(*plVar14 + 0x1b8) == 0) {
    bVar10 = 0;
  }
  else {
    plVar26 = (long *)(*(long *)(*plVar14 + 0x1b8) + 0x48);
    (**(code **)(*plVar26 + 0x10))(plVar26);
    (**(code **)(*plVar26 + 0x18))(plVar26);
    lVar24 = *(long *)(*plVar14 + 0x1b8);
    if (lVar24 == 0) {
      bVar10 = FUN_01510f00(0,0x903b22367526a53c);
    }
    else {
      plVar26 = (long *)(lVar24 + 0x48);
      (**(code **)(*plVar26 + 0x10))(plVar26);
      bVar10 = FUN_01510f00(lVar24,0x903b22367526a53c);
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  lVar24 = (long)param_2;
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  if ((param_3 & 1) == 0) {
    do {
      local_e4 = local_e4 & 0xffffff00;
      FUN_015261f0(lVar23,param_2,&local_f0,&local_e4);
      uVar12 = FUN_015262d0(lVar23,param_2,&local_f0);
      if ((uVar12 & 1) == 0) {
        local_e4 = local_118;
        FUN_0100a5e0(uVar12,param_2,&local_f0,&local_e4,&local_e0,0);
      }
      iVar28 = (int)local_f0;
      local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
    } while (iVar28 < 0x6d);
    local_104 = 0;
  }
  else {
    local_104 = 0;
    do {
      local_e4 = local_e4 & 0xffffff00;
      FUN_015261f0(lVar23,param_2,&local_f0,&local_e4);
      uVar12 = FUN_015262d0(lVar23,param_2,&local_f0);
      if ((uVar12 & 1) == 0) {
        cVar4 = *(char *)(lVar23 + lVar24 * 0xa68 + (long)(int)local_f0 * 0x18 + 0x72);
        if ((cVar4 != '\0' && cVar4 != '\x03') && (cVar4 != '\x04')) {
          local_104 = local_104 + 1;
        }
        local_e4 = local_118;
        FUN_0100a5e0(uVar12,param_2,&local_f0,&local_e4,&local_e0,0);
      }
      else {
        local_e4 = 0;
        FUN_01526150(lVar23,param_2,&local_f0,&local_e4);
        local_e4 = local_e4 & 0xffff0000;
        FUN_01526260(lVar23,&local_e4);
      }
      iVar28 = (int)local_f0;
      local_f0 = CONCAT44(local_f0._4_4_,(int)local_f0 + 1);
    } while (iVar28 < 0x6d);
  }
  local_e4 = 0;
  do {
    plVar26 = (long *)(lVar23 + lVar24 * 0xa68 + (long)(int)local_e4 * 0x18 + 0x60);
    uVar17 = local_e4;
    if (*plVar26 != -0x340d631b7bddd9bb) {
      local_f0 = 0xcbf29ce484222645;
      piVar13 = (int *)FUN_01009f80(param_1,plVar26,&local_f0);
      if (piVar13 != (int *)0x0) {
        lVar16 = -(long)*piVar13;
        puVar19 = (ushort *)((long)piVar13 - (long)*piVar13);
        lVar27 = 0;
        if (*puVar19 < 0x11) {
LAB_0100ad18:
          if (*(long *)(*plVar14 + 0x1b8) == 0) {
            uVar17 = 0;
            uVar5 = *puVar19;
          }
          else {
            plVar26 = (long *)(*(long *)(*plVar14 + 0x1b8) + 0x48);
            (**(code **)(*plVar26 + 0x10))(plVar26);
            lVar16 = *(long *)(*plVar14 + 0x1b8);
            if (lVar16 == 0) {
              uVar17 = FUN_01510f00(0,lVar27);
            }
            else {
              plVar14 = (long *)(lVar16 + 0x48);
              (**(code **)(*plVar14 + 0x10))(plVar14);
              uVar17 = FUN_01510f00(lVar16,lVar27);
              (**(code **)(*plVar14 + 0x18))(plVar14);
            }
            (**(code **)(*plVar26 + 0x18))(plVar26);
            lVar16 = -(long)*piVar13;
            uVar5 = *(ushort *)((long)piVar13 - (long)*piVar13);
            plVar14 = (long *)PTR_DAT_02710798;
          }
        }
        else {
          if ((ulong)puVar19[8] == 0) {
            lVar27 = 0;
            goto LAB_0100ad18;
          }
          lVar27 = *(long *)((long)piVar13 + (ulong)puVar19[8]);
          if (lVar27 != -0x340d631b7bddd9bb) goto LAB_0100ad18;
          uVar17 = 1;
          uVar5 = *puVar19;
        }
        if (((uVar5 < 0xf) ||
            (uVar12 = (ulong)*(ushort *)((long)piVar13 + lVar16 + 0xe), uVar12 == 0)) ||
           (*(char *)((long)piVar13 + uVar12) == '\0')) {
          uVar12 = FUN_015262d0(lVar23,param_2,&local_e4);
          plVar26 = local_80;
          puVar7 = local_90;
          if (((uVar12 & 1) == 0) && (((uVar17 ^ 1) & 1) == 0)) {
            if (local_90 == local_88) {
              FUN_010181e0(&local_98,&local_e4);
            }
            else {
              lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_0100b814;
              *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar26;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
              *puVar7 = local_e4;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
              local_90 = local_90 + 1;
            }
          }
        }
      }
      uVar17 = local_e4;
    }
    local_e4 = uVar17 + 1;
  } while ((int)uVar17 < 0x6d);
  local_e4 = 0;
  do {
    plVar26 = (long *)(lVar23 + lVar24 * 0xa68 + (long)(int)local_e4 * 0x18 + 0x60);
    uVar17 = local_e4;
    if (*plVar26 != -0x340d631b7bddd9bb) {
      local_f0 = 0xcbf29ce484222645;
      piVar13 = (int *)FUN_01009f80(param_1,plVar26,&local_f0);
      if (piVar13 != (int *)0x0) {
        lVar16 = -(long)*piVar13;
        puVar19 = (ushort *)((long)piVar13 - (long)*piVar13);
        lVar27 = 0;
        if (*puVar19 < 0x11) {
LAB_0100af94:
          if (*(long *)(*plVar14 + 0x1b8) == 0) {
            uVar17 = 0;
            uVar5 = *puVar19;
          }
          else {
            plVar26 = (long *)(*(long *)(*plVar14 + 0x1b8) + 0x48);
            (**(code **)(*plVar26 + 0x10))(plVar26);
            lVar16 = *(long *)(*plVar14 + 0x1b8);
            if (lVar16 == 0) {
              uVar17 = FUN_01510f00(0,lVar27);
            }
            else {
              plVar14 = (long *)(lVar16 + 0x48);
              (**(code **)(*plVar14 + 0x10))(plVar14);
              uVar17 = FUN_01510f00(lVar16,lVar27);
              (**(code **)(*plVar14 + 0x18))(plVar14);
            }
            (**(code **)(*plVar26 + 0x18))(plVar26);
            lVar16 = -(long)*piVar13;
            uVar5 = *(ushort *)((long)piVar13 - (long)*piVar13);
            plVar14 = (long *)PTR_DAT_02710798;
          }
        }
        else {
          if ((ulong)puVar19[8] == 0) {
            lVar27 = 0;
            goto LAB_0100af94;
          }
          lVar27 = *(long *)((long)piVar13 + (ulong)puVar19[8]);
          if (lVar27 != -0x340d631b7bddd9bb) goto LAB_0100af94;
          uVar17 = 1;
          uVar5 = *puVar19;
        }
        if (((0xe < uVar5) &&
            (uVar12 = (ulong)*(ushort *)((long)piVar13 + lVar16 + 0xe), uVar12 != 0)) &&
           (*(char *)((long)piVar13 + uVar12) != '\0')) {
          uVar12 = FUN_015262d0(lVar23,param_2,&local_e4);
          plVar26 = local_b0;
          puVar7 = local_c0;
          if (((uVar12 & 1) == 0) && (((uVar17 ^ 1) & 1) == 0)) {
            if (local_c0 == local_b8) {
              FUN_010181e0(&local_c8,&local_e4);
            }
            else {
              lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_0100b814:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar26;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
              *puVar7 = local_e4;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
              local_c0 = local_c0 + 1;
            }
          }
        }
      }
      uVar17 = local_e4;
    }
    local_e4 = uVar17 + 1;
  } while ((int)uVar17 < 0x6d);
  iVar28 = 8 - local_104;
  if (local_104 < 1) {
    iVar28 = 0;
  }
  if (iVar28 == 7) {
    uVar17 = 0;
  }
  else {
    uVar25 = 8 - iVar28;
    if (uVar25 == 0) {
      uVar17 = (int)local_d8 + (int)local_e0;
      local_d8 = local_d8 ^ local_e0;
      local_e0 = local_d8 ^ (local_e0 >> 0x28 | local_e0 << 0x18) ^ local_d8 << 0x10;
      local_d8 = local_d8 >> 0x1b | local_d8 << 0x25;
    }
    else {
      uVar20 = (0x20 - LZCOUNT(uVar25)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar25)) & 0x1f) &
                       uVar25) == 0);
      uVar12 = uVar20 >> 6;
      if ((uVar20 & 0x3f) != 0) {
        uVar12 = uVar12 + 1;
      }
      uVar22 = 0;
      if (uVar12 != 0) {
        uVar22 = uVar20 / uVar12;
      }
      uVar21 = 0;
      if (uVar12 <= uVar20) {
        uVar21 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
      }
      do {
        uVar12 = local_e0 ^ local_d8;
        iVar1 = (int)local_e0;
        iVar3 = (int)local_d8;
        local_d8 = uVar12 >> 0x1b | uVar12 << 0x25;
        local_e0 = uVar12 ^ (local_e0 >> 0x28 | local_e0 << 0x18) ^ uVar12 << 0x10;
        uVar17 = iVar1 + iVar3 & uVar21;
      } while (uVar25 <= uVar17);
    }
  }
  iVar1 = uVar17 + iVar28;
  iVar3 = iVar28;
  if (iVar1 < 7) {
    iVar3 = iVar1 + 1;
  }
  uVar12 = FUN_00fc6de0(param_2);
  if ((uVar12 & 1) == 0) {
    local_104 = 0;
  }
  else {
    local_f0 = local_f0 & 0xffffffff00000000;
    local_e4 = 0;
    FUN_00fc6f50(param_2,&local_f0,&local_e4);
    local_104 = (int)local_f0;
    if (local_e4 - (int)local_f0 != 0) {
      uVar17 = (local_e4 - (int)local_f0) + 1;
      if (uVar17 == 0) {
        iVar15 = (int)local_e0;
        iVar18 = (int)local_d8;
        local_d8 = local_d8 ^ local_e0;
        local_e0 = local_d8 ^ (local_e0 >> 0x28 | local_e0 << 0x18) ^ local_d8 << 0x10;
        local_d8 = local_d8 >> 0x1b | local_d8 << 0x25;
        local_104 = iVar18 + iVar15 + (int)local_f0;
      }
      else {
        uVar20 = (0x20 - LZCOUNT(uVar17)) -
                 (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar17)) & 0x1f) &
                         uVar17) == 0);
        uVar12 = uVar20 >> 6;
        if ((uVar20 & 0x3f) != 0) {
          uVar12 = uVar12 + 1;
        }
        uVar22 = 0;
        if (uVar12 != 0) {
          uVar22 = uVar20 / uVar12;
        }
        uVar25 = 0;
        if (uVar12 <= uVar20) {
          uVar25 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
        }
        do {
          uVar12 = local_e0 ^ local_d8;
          iVar15 = (int)local_e0;
          iVar18 = (int)local_d8;
          local_d8 = uVar12 >> 0x1b | uVar12 << 0x25;
          local_e0 = uVar12 ^ (local_e0 >> 0x28 | local_e0 << 0x18) ^ uVar12 << 0x10;
          uVar21 = iVar15 + iVar18 & uVar25;
        } while (uVar17 <= uVar21);
        local_104 = uVar21 + (int)local_f0;
      }
    }
  }
  if (iVar28 < 8) {
    local_120 = 0;
    local_128 = 0;
    do {
      while( true ) {
        if (local_98 == local_90) goto LAB_0100b798;
        lVar16 = (long)local_90 - (long)local_98;
        if (lVar16 == 0) {
          uVar12 = local_d8 + local_e0;
          local_d8 = local_d8 ^ local_e0;
          local_e0 = local_d8 ^ (local_e0 >> 0x28 | local_e0 << 0x18) ^ local_d8 << 0x10;
          local_d8 = local_d8 >> 0x1b | local_d8 << 0x25;
        }
        else if (lVar16 == 4) {
          uVar12 = 0;
        }
        else {
          uVar22 = lVar16 >> 2;
          uVar20 = (0x40 - LZCOUNT(uVar22)) -
                   (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar22)) & 0x3f) &
                           uVar22) == 0);
          uVar12 = uVar20 >> 6;
          if ((uVar20 & 0x3f) != 0) {
            uVar12 = uVar12 + 1;
          }
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar6 = uVar20 / uVar12;
          }
          uVar2 = 0;
          if (uVar12 <= uVar20) {
            uVar2 = 0xffffffffffffffff >> (-uVar6 & 0x3f);
          }
          do {
            uVar20 = local_e0 ^ local_d8;
            uVar12 = local_e0 + local_d8;
            local_d8 = uVar20 >> 0x1b | uVar20 << 0x25;
            local_e0 = uVar20 ^ (local_e0 >> 0x28 | local_e0 << 0x18) ^ uVar20 << 0x10;
            uVar12 = uVar12 & uVar2;
          } while (uVar22 <= uVar12);
        }
        local_e4 = local_98[uVar12];
        do {
          uVar12 = local_e0 ^ local_d8;
          iVar18 = (int)local_d8;
          iVar15 = (int)local_e0;
          local_d8 = uVar12 >> 0x1b | uVar12 << 0x25;
          local_e0 = uVar12 ^ (local_e0 >> 0x28 | local_e0 << 0x18) ^ uVar12 << 0x10;
          uVar17 = iVar15 + iVar18 & 0x3ff;
        } while (999 < uVar17);
        if ((iVar28 < 2) && (uVar12 = (long)local_c0 - (long)local_c8 >> 2, 1 < uVar12)) {
          uVar22 = (0x40 - LZCOUNT(uVar12)) -
                   (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar12)) & 0x3f) &
                           uVar12) == 0);
          uVar20 = uVar22 >> 6;
          if ((uVar22 & 0x3f) != 0) {
            uVar20 = uVar20 + 1;
          }
          uVar6 = 0;
          if (uVar20 != 0) {
            uVar6 = uVar22 / uVar20;
          }
          uVar2 = 0;
          if (uVar20 <= uVar22) {
            uVar2 = 0xffffffffffffffff >> (-uVar6 & 0x3f);
          }
          do {
            uVar22 = local_e0 ^ local_d8;
            uVar20 = local_e0 + local_d8;
            local_d8 = uVar22 >> 0x1b | uVar22 << 0x25;
            local_e0 = uVar22 ^ (local_e0 >> 0x28 | local_e0 << 0x18) ^ uVar22 << 0x10;
            uVar20 = uVar20 & uVar2;
          } while (uVar12 <= uVar20);
          local_e4 = local_c8[uVar20];
        }
        plVar14 = (long *)(lVar23 + lVar24 * 0xa68 + (long)(int)local_e4 * 0x18 + 0x60);
        if ((*plVar14 == -0x340d631b7bddd9bb) ||
           (*(char *)(lVar23 + lVar24 * 0xa68 + (long)(int)local_e4 * 0x18 + 0x72) != '\0')) break;
        local_f0 = 0xcbf29ce484222645;
        piVar13 = (int *)FUN_01009f80(param_1,plVar14,&local_f0);
        if (piVar13 != (int *)0x0) {
          puVar19 = (ushort *)((long)piVar13 - (long)*piVar13);
          uVar5 = *puVar19;
          if (uVar5 < 7) {
            bVar8 = false;
joined_r0x0100b46c:
            uVar25 = 0;
            if (1 < iVar28) goto LAB_0100b470;
LAB_0100b4ac:
            if (((bVar10 | bVar8 ^ 0xffU) & 1) == 0) goto LAB_0100b71c;
          }
          else {
            bVar8 = false;
            if ((ulong)puVar19[3] != 0) {
              bVar8 = *(char *)((long)piVar13 + (ulong)puVar19[3]) != '\0';
            }
            if ((uVar5 < 9) || ((ulong)puVar19[4] == 0)) goto joined_r0x0100b46c;
            uVar25 = *(uint *)((long)piVar13 + (ulong)puVar19[4]);
            if (iVar28 < 2) goto LAB_0100b4ac;
LAB_0100b470:
            if (uVar5 < 0xf) {
              bVar9 = false;
            }
            else {
              bVar9 = false;
              if ((ulong)puVar19[7] != 0) {
                bVar9 = *(char *)((long)piVar13 + (ulong)puVar19[7]) != '\0';
              }
            }
            if ((((bVar10 | bVar8 ^ 0xffU) & 1) == 0) || (bVar9)) goto LAB_0100b71c;
          }
          lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
          }
          lVar27 = *(long *)(*(long *)PTR_DAT_02710798 + 0x200);
          if (lVar27 != 0) {
            (**(code **)(*(long *)(lVar27 + 0x48) + 0x10))();
          }
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
          }
          if (((uVar25 == 0) || (lVar27 == 0)) ||
             (uVar21 = FUN_00ece6f0(local_f0), (1 << (ulong)(uVar21 & 0x1f) & uVar25) != 0)) {
            if (local_120 < 2) {
              if ((iVar1 == iVar28) || (iVar3 == iVar28)) {
                local_f8 = local_118;
                local_f4[0] = FUN_01526330(lVar23,&local_f8);
                FUN_01526110(lVar23,param_2,&local_e4,local_f4);
                local_120 = local_120 + 1;
                goto joined_r0x0100b5e4;
              }
              if ((param_3 & 1) != 0) goto LAB_0100b56c;
LAB_0100b5e8:
              if (local_104 < 1) {
                if (local_128 < 1) {
                  local_f8 = 2;
                  FUN_01526150(lVar23,param_2,&local_e4,&local_f8);
                  local_128 = local_128 + 1;
                }
                else {
                  local_f8 = 1;
                  FUN_01526150(lVar23,param_2,&local_e4,&local_f8);
                }
              }
              else {
                local_f8 = 5;
                FUN_01526150(lVar23,param_2,&local_e4,&local_f8);
                local_f8 = CONCAT31(local_f8._1_3_,1);
                FUN_015261a0(lVar23,param_2,&local_e4,&local_f8);
                local_104 = local_104 + -1;
              }
            }
            else {
joined_r0x0100b5e4:
              if ((param_3 & 1) == 0) goto LAB_0100b5e8;
LAB_0100b56c:
              if (local_104 < 1) {
                if ((local_128 < 1) && (uVar17 < 0x7d)) {
                  local_f8 = 2;
                  FUN_01526150(lVar23,param_2,&local_e4,&local_f8);
                  local_128 = local_128 + 1;
                }
                else {
                  local_f8 = 1;
                  FUN_01526150(lVar23,param_2,&local_e4,&local_f8);
                }
              }
              else {
                local_f8 = 5;
                FUN_01526150(lVar23,param_2,&local_e4,&local_f8);
                local_f8 = CONCAT31(local_f8._1_3_,1);
                FUN_015261a0(lVar23,param_2,&local_e4,&local_f8);
                local_104 = local_104 + -1;
              }
            }
            iVar28 = iVar28 + 1;
            if (lVar27 == 0) goto LAB_0100b71c;
          }
          (**(code **)(*(long *)(lVar27 + 0x48) + 0x18))((long *)(lVar27 + 0x48));
        }
LAB_0100b71c:
        if (7 < iVar28) goto LAB_0100b798;
      }
    } while (iVar28 < 8);
  }
LAB_0100b798:
  if (local_c8 != (uint *)0x0) {
    local_c0 = local_c8;
    (**(code **)(*local_b0 + 0x18))(local_b0,local_c8,(long)local_b8 - (long)local_c8,4);
  }
  if (local_98 != (uint *)0x0) {
    local_90 = local_98;
    (**(code **)(*local_80 + 0x18))(local_80,local_98,(long)local_88 - (long)local_98,4);
  }
  if (lVar23 != 0) {
    (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
  }
  return;
}


