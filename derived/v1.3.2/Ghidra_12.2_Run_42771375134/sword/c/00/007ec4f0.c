/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ec4f0; name: FUN_007ec4f0
 */


/* WARNING: Removing unreachable block (ram,0x007ed090) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_007ec4f0(byte *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong uVar8;
  long *plVar9;
  __tree_node_base *p_Var10;
  undefined8 uVar11;
  long *plVar12;
  ulong *puVar13;
  long extraout_x1;
  long extraout_x1_00;
  byte bVar14;
  ulong uVar15;
  undefined4 *puVar16;
  long *plVar17;
  byte *pbVar18;
  long lVar19;
  __tree_node_base *p_Var20;
  char *pcVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  __tree_node_base *p_Var25;
  string *psVar26;
  __tree_node_base *p_Var27;
  byte *local_138;
  long local_130;
  void *local_128;
  undefined1 auStack_120 [40];
  __tree_node_base *local_f8;
  __tree_node_base *local_f0;
  long local_e8;
  __tree_node_base *local_e0;
  __tree_node_base *local_d8;
  long local_d0;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  
  FUN_007e0700(*(undefined8 *)(param_1 + 8));
  puVar5 = (undefined8 *)FUN_007e1f40(*(undefined8 *)(param_1 + 8),0xa8);
  *(undefined8 **)(param_1 + 0x50) = puVar5;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  if ((*(byte *)(param_2 + 0x11) >> 2 & 1) == 0) {
    uVar6 = FUN_008469e0();
  }
  else {
    uVar6 = FUN_007ed630(*(undefined8 *)(param_1 + 8),0);
    lVar22 = *(long *)(param_2 + 200);
    if (lVar22 == 0) {
      lVar22 = *(long *)(*(long *)PTR_DAT_02716e38 + 200);
    }
    FUN_0085e5e0(uVar6,lVar22);
  }
  puVar5[0x14] = uVar6;
  uVar6 = FUN_007e1e30(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x98) = uVar6;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    local_138 = (byte *)0x0;
    local_130 = 0;
    local_128 = (void *)0x0;
    FUN_007eac10(param_1,&local_138,param_2,9,"Missing field: FileDescriptorProto.name.");
    if (((ulong)local_138 & 1) != 0) {
      operator_delete(local_128);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0xd0);
  bVar14 = *pbVar7;
  if ((bVar14 & 1) == 0) {
    if (bVar14 >> 1 != 0) goto LAB_007ec5f0;
LAB_007ec678:
    *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x7c) = 2;
  }
  else {
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_007ec678;
LAB_007ec5f0:
    uVar15 = *(ulong *)(pbVar7 + 8);
    uVar23 = (ulong)(bVar14 >> 1);
    uVar8 = uVar23;
    if ((bVar14 & 1) != 0) {
      uVar8 = uVar15;
    }
    if (uVar8 == 6) {
      iVar4 = std::string::compare((ulong)pbVar7,0,(char *)0xffffffffffffffff,0x1d10a65);
      if (iVar4 == 0) goto LAB_007ec678;
      pbVar7 = *(byte **)(param_2 + 0xd0);
      bVar14 = *pbVar7;
      uVar15 = *(ulong *)(pbVar7 + 8);
      uVar23 = (ulong)(bVar14 >> 1);
    }
    if ((bVar14 & 1) != 0) {
      uVar23 = uVar15;
    }
    if (uVar23 == 6) {
      iVar4 = std::string::compare((ulong)pbVar7,0,(char *)0xffffffffffffffff,0x1d2500d);
      puVar16 = (undefined4 *)(*(long *)(param_1 + 0x50) + 0x7c);
      if (iVar4 != 0) goto LAB_007ec690;
      *puVar16 = 3;
    }
    else {
      puVar16 = (undefined4 *)(*(long *)(param_1 + 0x50) + 0x7c);
LAB_007ec690:
      *puVar16 = 0;
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      std::operator+("Unrecognized syntax: ",*(string **)(param_2 + 0xd0));
      FUN_007eaaf0(param_1,uVar6,param_2,9,&local_138);
      if (((ulong)local_138 & 1) != 0) {
        operator_delete(local_128);
      }
    }
  }
  uVar6 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *puVar5 = uVar6;
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    local_130 = 0;
    local_128 = (void *)0x0;
    local_138 = (byte *)0x0;
    uVar6 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),&local_138);
    puVar5[1] = uVar6;
    if (((ulong)local_138 & 1) != 0) {
      operator_delete(local_128);
    }
  }
  else {
    uVar6 = FUN_007e1d20(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x20));
    puVar5[1] = uVar6;
  }
  puVar5[2] = *(undefined8 *)param_1;
  uVar8 = FUN_007e0fe0(*(undefined8 *)(param_1 + 8),puVar5);
  if ((uVar8 & 1) == 0) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,
                 "A file with this name is already in the pool.");
    FUN_007e08f0(*(undefined8 *)(param_1 + 8));
    return (undefined8 *)0x0;
  }
  pbVar7 = (byte *)puVar5[1];
  if ((*pbVar7 & 1) == 0) {
    if (*pbVar7 >> 1 != 0) goto LAB_007ec788;
  }
  else if (*(long *)(pbVar7 + 8) != 0) {
LAB_007ec788:
    FUN_007eb4b0(param_1,pbVar7,param_2,puVar5);
  }
  local_e0 = (__tree_node_base *)&local_d8;
  local_d8 = (__tree_node_base *)0x0;
  local_d0 = 0;
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_2 + 0x30);
  uVar6 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x30) << 3);
  puVar5[4] = uVar6;
  p_Var20 = (__tree_node_base *)(param_1 + 0x80);
  pbVar7 = param_1 + 0x78;
  FUN_007f87d0(pbVar7,*(undefined8 *)p_Var20);
  *(__tree_node_base **)(param_1 + 0x78) = p_Var20;
  *(undefined8 *)p_Var20 = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  local_f0 = (__tree_node_base *)0x0;
  local_e8 = 0;
  iVar4 = *(int *)(param_2 + 0x50);
  local_f8 = (__tree_node_base *)&local_f0;
  if (0 < iVar4) {
    lVar22 = 0;
    iVar24 = *(int *)(*(long *)(param_2 + 0x58) + 8);
LAB_007ec888:
    p_Var25 = (__tree_node_base *)&local_f0;
    p_Var27 = (__tree_node_base *)&local_f0;
LAB_007ec890:
    if (*(long *)p_Var27 == 0) goto LAB_007ec8b4;
    while (lVar22 = lVar22 + 1, lVar22 < iVar4) {
      while( true ) {
        iVar24 = *(int *)(*(long *)(param_2 + 0x58) + lVar22 * 4 + 8);
        if (local_f0 == (__tree_node_base *)0x0) goto LAB_007ec888;
        iVar1 = *(int *)(local_f0 + 0x1c);
        p_Var27 = (__tree_node_base *)&local_f0;
        p_Var25 = local_f0;
        while( true ) {
          while (iVar1 <= iVar24) {
            if (iVar24 <= iVar1) goto LAB_007ec890;
            p_Var27 = p_Var25 + 8;
            p_Var10 = *(__tree_node_base **)p_Var27;
            if (p_Var10 == (__tree_node_base *)0x0) goto LAB_007ec890;
            p_Var25 = p_Var10;
            iVar1 = *(int *)(p_Var10 + 0x1c);
          }
          p_Var10 = *(__tree_node_base **)p_Var25;
          p_Var27 = p_Var25;
          if (p_Var10 == (__tree_node_base *)0x0) break;
          iVar1 = *(int *)(p_Var10 + 0x1c);
          p_Var25 = p_Var10;
        }
        if (*(long *)p_Var25 != 0) break;
LAB_007ec8b4:
        p_Var10 = operator_new(0x20);
        *(int *)(p_Var10 + 0x1c) = iVar24;
        *(undefined8 *)p_Var10 = 0;
        *(undefined8 *)(p_Var10 + 8) = 0;
        *(__tree_node_base **)(p_Var10 + 0x10) = p_Var25;
        *(__tree_node_base **)p_Var27 = p_Var10;
        if (*(__tree_node_base **)local_f8 != (__tree_node_base *)0x0) {
          p_Var10 = *(__tree_node_base **)p_Var27;
          local_f8 = *(__tree_node_base **)local_f8;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_f0,p_Var10);
        local_e8 = local_e8 + 1;
        iVar4 = *(int *)(param_2 + 0x50);
        lVar22 = lVar22 + 1;
        if (iVar4 <= lVar22) goto LAB_007ec90c;
      }
    }
  }
LAB_007ec90c:
  if (0 < *(int *)(param_2 + 0x30)) {
    uVar8 = 0;
    do {
      psVar26 = *(string **)(*(long *)(param_2 + 0x38) + uVar8 * 8 + 8);
      plVar9 = (long *)FUN_007f94e0(&local_e0,&local_138,psVar26);
      if (*plVar9 == 0) {
        p_Var27 = operator_new(0x38);
        std::string::string((string *)(p_Var27 + 0x20),psVar26);
        *(undefined8 *)p_Var27 = 0;
        *(undefined8 *)(p_Var27 + 8) = 0;
        *(byte **)(p_Var27 + 0x10) = local_138;
        *plVar9 = (long)p_Var27;
        if (*(__tree_node_base **)local_e0 != (__tree_node_base *)0x0) {
          p_Var27 = (__tree_node_base *)*plVar9;
          local_e0 = *(__tree_node_base **)local_e0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_d8,p_Var27);
        local_d0 = local_d0 + 1;
      }
      else {
        FUN_007ec2e0(param_1,param_2,uVar8 & 0xffffffff);
      }
      pbVar18 = *(byte **)(*(long *)(param_2 + 0x38) + uVar8 * 8 + 8);
      local_138 = *(byte **)(pbVar18 + 0x10);
      if ((*pbVar18 & 1) == 0) {
        local_138 = pbVar18 + 1;
      }
      lVar22 = FUN_007f7570(*(long *)(param_1 + 8) + 0x118,&local_138);
      if (lVar22 == 0) {
        uVar23 = 0;
        lVar22 = *(long *)(*(long *)param_1 + 0x18);
joined_r0x007ecab0:
        if (lVar22 != 0) {
          uVar23 = FUN_007e27c0(lVar22,*(undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 8 + 8));
        }
      }
      else {
        uVar23 = *(ulong *)(lVar22 + 0x18);
        if (uVar23 == 0) {
          lVar22 = *(long *)(*(long *)param_1 + 0x18);
          goto joined_r0x007ecab0;
        }
      }
      lVar22 = *(long *)param_1;
      if (uVar23 == 0) {
        if (*(char *)(lVar22 + 0x29) == '\0') {
          if ((*(char *)(lVar22 + 0x2a) == '\0') && (local_f0 != (__tree_node_base *)0x0)) {
            p_Var27 = (__tree_node_base *)&local_f0;
            p_Var25 = local_f0;
            do {
              if ((long)uVar8 <= (long)*(int *)(p_Var25 + 0x1c)) {
                p_Var27 = p_Var25;
              }
              p_Var25 = *(__tree_node_base **)
                         (p_Var25 + (ulong)((long)*(int *)(p_Var25 + 0x1c) < (long)uVar8) * 8);
            } while (p_Var25 != (__tree_node_base *)0x0);
            if ((p_Var27 != (__tree_node_base *)&local_f0) &&
               ((long)*(int *)(p_Var27 + 0x1c) <= (long)uVar8)) goto LAB_007ecac0;
          }
          FUN_007ec390(param_1,param_2,uVar8 & 0xffffffff);
          uVar23 = 0;
        }
        else {
LAB_007ecac0:
          uVar23 = FUN_007eb350(param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 8 + 8));
        }
      }
      else if (((*(char *)(lVar22 + 0x28) != '\0') &&
               (lVar22 = FUN_007fc650(lVar22 + 0x30,*(undefined8 *)(param_2 + 0x18)),
               *(long *)param_1 + 0x38 != lVar22)) && (*(int *)(uVar23 + 0x28) == 0)) {
        p_Var27 = *(__tree_node_base **)p_Var20;
        if (p_Var27 == (__tree_node_base *)0x0) {
          p_Var25 = p_Var20;
          p_Var27 = p_Var20;
LAB_007ecb40:
          lVar22 = *(long *)p_Var25;
        }
        else {
          bVar3 = uVar23 <= *(ulong *)(p_Var27 + 0x20);
          p_Var25 = (__tree_node_base *)(param_1 + 0x80);
          if (!bVar3 || *(ulong *)(p_Var27 + 0x20) == uVar23) goto LAB_007eca80;
          while( true ) {
            p_Var25 = p_Var27;
            p_Var27 = *(__tree_node_base **)p_Var25;
            if (p_Var27 == (__tree_node_base *)0x0) break;
            bVar3 = uVar23 <= *(ulong *)(p_Var27 + 0x20);
            if (!bVar3 || *(ulong *)(p_Var27 + 0x20) == uVar23) {
LAB_007eca80:
              do {
                if (bVar3) goto LAB_007ecb40;
                p_Var25 = p_Var27 + 8;
                p_Var10 = *(__tree_node_base **)p_Var25;
                if (p_Var10 == (__tree_node_base *)0x0) goto LAB_007ecb40;
                bVar3 = uVar23 <= *(ulong *)(p_Var10 + 0x20);
                p_Var27 = p_Var10;
              } while (!bVar3 || *(ulong *)(p_Var10 + 0x20) == uVar23);
            }
          }
          lVar22 = *(long *)p_Var25;
          p_Var27 = p_Var25;
        }
        if (lVar22 == 0) {
          p_Var10 = operator_new(0x28);
          *(ulong *)(p_Var10 + 0x20) = uVar23;
          *(undefined8 *)p_Var10 = 0;
          *(undefined8 *)(p_Var10 + 8) = 0;
          *(__tree_node_base **)(p_Var10 + 0x10) = p_Var27;
          *(__tree_node_base **)p_Var25 = p_Var10;
          if (**(long **)pbVar7 != 0) {
            *(long *)pbVar7 = **(long **)pbVar7;
            p_Var10 = *(__tree_node_base **)p_Var25;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_1 + 0x80),p_Var10);
          *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
        }
      }
      *(ulong *)(puVar5[4] + uVar8 * 8) = uVar23;
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)*(int *)(param_2 + 0x30));
  }
  uVar6 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x40) << 2);
  puVar5[6] = uVar6;
  if (*(int *)(param_2 + 0x40) < 1) {
    iVar4 = 0;
  }
  else {
    lVar22 = 0;
    iVar4 = 0;
    do {
      iVar24 = *(int *)(*(long *)(param_2 + 0x48) + lVar22 * 4 + 8);
      if ((iVar24 < 0) || (*(int *)(param_2 + 0x30) <= iVar24)) {
        FUN_007eac10(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,
                     "Invalid public dependency index.");
      }
      else {
        *(int *)(puVar5[6] + (long)iVar4 * 4) = iVar24;
        p_Var27 = *(__tree_node_base **)p_Var20;
        iVar4 = iVar4 + 1;
        if (p_Var27 != (__tree_node_base *)0x0) {
          uVar8 = *(ulong *)(puVar5[4] + (long)iVar24 * 8);
          p_Var10 = p_Var27;
          p_Var25 = p_Var20;
          do {
            if (*(ulong *)(p_Var10 + 0x20) >= uVar8) {
              p_Var25 = p_Var10;
            }
            p_Var10 = *(__tree_node_base **)
                       (p_Var10 + (ulong)(*(ulong *)(p_Var10 + 0x20) < uVar8) * 8);
          } while (p_Var10 != (__tree_node_base *)0x0);
          if ((p_Var25 != p_Var20) && (*(ulong *)(p_Var25 + 0x20) <= uVar8)) {
            plVar9 = *(long **)(p_Var25 + 8);
            if (*(long **)(p_Var25 + 8) == (long *)0x0) {
              p_Var10 = p_Var25 + 0x10;
              plVar17 = *(long **)p_Var10;
              if ((__tree_node_base *)*plVar17 != p_Var25) {
                do {
                  lVar19 = *(long *)p_Var10;
                  p_Var10 = (__tree_node_base *)(lVar19 + 0x10);
                  plVar17 = *(long **)p_Var10;
                } while (*plVar17 != lVar19);
              }
            }
            else {
              do {
                plVar17 = plVar9;
                plVar9 = (long *)*plVar17;
              } while ((long *)*plVar17 != (long *)0x0);
            }
            if (*(__tree_node_base **)pbVar7 == p_Var25) {
              *(long **)pbVar7 = plVar17;
            }
            *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
            std::__tree_remove<std::__tree_node_base<void*>*>(p_Var27,p_Var25);
            operator_delete(p_Var25);
          }
        }
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(param_2 + 0x40));
  }
  *(int *)(puVar5 + 5) = iVar4;
  pbVar7 = param_1 + 0x68;
  FUN_007f87d0(param_1 + 0x60,*(undefined8 *)pbVar7);
  pbVar7[0] = 0;
  pbVar7[1] = 0;
  pbVar7[2] = 0;
  pbVar7[3] = 0;
  pbVar7[4] = 0;
  pbVar7[5] = 0;
  pbVar7[6] = 0;
  pbVar7[7] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(byte **)(param_1 + 0x60) = pbVar7;
  if (0 < *(int *)(puVar5 + 3)) {
    lVar22 = 0;
    do {
      FUN_007eb220(param_1,*(undefined8 *)(puVar5[4] + lVar22 * 8));
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(puVar5 + 3));
  }
  uVar6 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x50) << 2);
  puVar5[8] = uVar6;
  if (*(int *)(param_2 + 0x50) < 1) {
    iVar4 = 0;
  }
  else {
    lVar22 = 0;
    iVar4 = 0;
    do {
      iVar24 = *(int *)(*(long *)(param_2 + 0x58) + lVar22 * 4 + 8);
      if ((iVar24 < 0) || (*(int *)(param_2 + 0x30) <= iVar24)) {
        FUN_007eac10(param_1,*(undefined8 *)(param_2 + 0x18),param_2,9,
                     "Invalid weak dependency index.");
      }
      else {
        *(int *)(puVar5[8] + (long)iVar4 * 4) = iVar24;
        iVar4 = iVar4 + 1;
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(param_2 + 0x50));
  }
  *(int *)(puVar5 + 7) = iVar4;
  *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(param_2 + 0x68);
  uVar6 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x68) * 0xa8);
  puVar5[10] = uVar6;
  if ((0 < *(int *)(param_2 + 0x68)) &&
     (FUN_007ed740(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + 8),0,uVar6),
     1 < *(int *)(param_2 + 0x68))) {
    lVar22 = 0xa8;
    lVar19 = 2;
    do {
      FUN_007ed740(param_1,*(undefined8 *)(*(long *)(param_2 + 0x70) + lVar19 * 8),0,
                   puVar5[10] + lVar22);
      lVar22 = lVar22 + 0xa8;
      bVar3 = lVar19 < *(int *)(param_2 + 0x68);
      lVar19 = lVar19 + 1;
    } while (bVar3);
  }
  *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(param_2 + 0x80);
  uVar6 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x80) * 0x38);
  puVar5[0xc] = uVar6;
  if ((0 < *(int *)(param_2 + 0x80)) &&
     (FUN_007eec30(param_1,*(undefined8 *)(*(long *)(param_2 + 0x88) + 8),0,uVar6),
     1 < *(int *)(param_2 + 0x80))) {
    lVar22 = 0x38;
    lVar19 = 2;
    do {
      FUN_007eec30(param_1,*(undefined8 *)(*(long *)(param_2 + 0x88) + lVar19 * 8),0,
                   puVar5[0xc] + lVar22);
      lVar22 = lVar22 + 0x38;
      bVar3 = lVar19 < *(int *)(param_2 + 0x80);
      lVar19 = lVar19 + 1;
    } while (bVar3);
  }
  *(undefined4 *)(puVar5 + 0xd) = *(undefined4 *)(param_2 + 0x98);
  uVar6 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x98) * 0x30);
  puVar5[0xe] = uVar6;
  if ((0 < *(int *)(param_2 + 0x98)) &&
     (FUN_007eee10(param_1,*(undefined8 *)(*(long *)(param_2 + 0xa0) + 8)),
     1 < *(int *)(param_2 + 0x98))) {
    lVar22 = 2;
    do {
      FUN_007eee10(param_1,*(undefined8 *)(*(long *)(param_2 + 0xa0) + lVar22 * 8));
      bVar3 = lVar22 < *(int *)(param_2 + 0x98);
      lVar22 = lVar22 + 1;
    } while (bVar3);
  }
  *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)(param_2 + 0xb0);
  uVar6 = FUN_007e1f40(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0xb0) * 0x90);
  puVar5[0x11] = uVar6;
  if ((0 < *(int *)(param_2 + 0xb0)) &&
     (FUN_007f07a0(param_1,*(undefined8 *)(*(long *)(param_2 + 0xb8) + 8),0,uVar6,1),
     1 < *(int *)(param_2 + 0xb0))) {
    lVar22 = 0x90;
    lVar19 = 2;
    do {
      FUN_007f07a0(param_1,*(undefined8 *)(*(long *)(param_2 + 0xb8) + lVar19 * 8),0,
                   puVar5[0x11] + lVar22,1);
      lVar22 = lVar22 + 0x90;
      bVar3 = lVar19 < *(int *)(param_2 + 0xb0);
      lVar19 = lVar19 + 1;
    } while (bVar3);
  }
  if ((*(byte *)(param_2 + 0x11) >> 1 & 1) == 0) {
    puVar5[0x12] = 0;
  }
  else {
    lVar22 = *(long *)(param_2 + 0xc0);
    if (lVar22 == 0) {
      lVar22 = *(long *)(*(long *)PTR_DAT_02716e38 + 0xc0);
    }
    std::operator+((string *)puVar5[1],".dummy");
    FUN_007ebd50(param_1,&local_138,*puVar5,lVar22,puVar5);
    if (((ulong)local_138 & 1) != 0) {
      operator_delete(local_128);
    }
  }
  FUN_007eefb0(param_1,puVar5,param_2);
  if (param_1[0x30] == 0) {
    local_138 = param_1;
    FUN_00817750(auStack_120);
    if (local_138 == (byte *)0x0) {
      FUN_00801270(&local_98,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                   ,0x15a0);
      uVar6 = FUN_00800f30(&local_98,"CHECK failed: builder_: ");
      FUN_00800fa0(&local_b0,uVar6);
      FUN_00801290(&local_98);
    }
    uVar2 = s_uninterpreted_option_01cdde88._8_8_;
    uVar6 = s_uninterpreted_option_01cdde88._0_8_;
    lVar22 = *(long *)(param_1 + 0x18);
    if (lVar22 != *(long *)(param_1 + 0x20)) {
      pcVar21 = (char *)((ulong)&local_98 | 1);
      lVar19 = lVar22;
      do {
        plVar9 = *(long **)(lVar19 + 0x30);
        plVar17 = *(long **)(lVar19 + 0x38);
        local_130 = lVar19;
        lVar22 = (**(code **)(*plVar17 + 0xb8))(plVar17);
        local_90 = 0;
        local_98 = 0x28;
        *(undefined8 *)pcVar21 = uVar6;
        *(undefined8 *)(pcVar21 + 8) = uVar2;
        pcVar21[0x10] = 't';
        pcVar21[0x11] = 'i';
        pcVar21[0x12] = 'o';
        pcVar21[0x13] = 'n';
        local_88 = (void *)0x0;
        iVar4 = FUN_007e3d50(*(undefined8 *)(*(long *)(lVar22 + 0x10) + 0x98),lVar22,&local_98,2);
        if (((iVar4 == 0) || (*(char *)(extraout_x1 + 0x44) != '\0')) ||
           (lVar22 = extraout_x1, extraout_x1 == 0)) {
          FUN_00801270(&local_98,3,
                       "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                       ,0x15b4);
          uVar11 = FUN_00800f30(&local_98,"CHECK failed: uninterpreted_options_field != NULL: ");
          uVar11 = FUN_00800f30(uVar11,
                                "No field named \"uninterpreted_option\" in the Options proto.");
          FUN_00800fa0(&local_b0,uVar11);
          FUN_00801290(&local_98);
          lVar22 = 0;
        }
        plVar12 = (long *)(**(code **)(*plVar17 + 0xb0))(plVar17);
        (**(code **)(*plVar12 + 0x38))(plVar12,plVar17,lVar22);
        lVar22 = (**(code **)(*plVar9 + 0xb8))(plVar9);
        local_90 = 0;
        local_98 = 0x28;
        *(undefined8 *)pcVar21 = uVar6;
        *(undefined8 *)(pcVar21 + 8) = uVar2;
        pcVar21[0x10] = 't';
        pcVar21[0x11] = 'i';
        pcVar21[0x12] = 'o';
        pcVar21[0x13] = 'n';
        local_88 = (void *)0x0;
        iVar4 = FUN_007e3d50(*(undefined8 *)(*(long *)(lVar22 + 0x10) + 0x98),lVar22,&local_98,2);
        if (((iVar4 == 0) || (*(char *)(extraout_x1_00 + 0x44) != '\0')) ||
           (lVar22 = extraout_x1_00, extraout_x1_00 == 0)) {
          FUN_00801270(&local_98,3,
                       "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                       ,0x15bc);
          uVar11 = FUN_00800f30(&local_98,
                                "CHECK failed: original_uninterpreted_options_field != NULL: ");
          uVar11 = FUN_00800f30(uVar11,
                                "No field named \"uninterpreted_option\" in the Options proto.");
          FUN_00800fa0(&local_b0,uVar11);
          FUN_00801290(&local_98);
          lVar22 = 0;
        }
        plVar12 = (long *)(**(code **)(*plVar9 + 0xb0))(plVar9);
        iVar4 = (**(code **)(*plVar12 + 0x30))(plVar12,plVar9,lVar22);
        if (0 < iVar4) {
          iVar24 = 0;
          do {
            plVar12 = (long *)(**(code **)(*plVar9 + 0xb0))(plVar9);
            local_128 = (void *)(**(code **)(*plVar12 + 0x1a0))(plVar12,plVar9,lVar22,iVar24);
            uVar8 = FUN_007f54f0(&local_138,plVar17);
            if ((uVar8 & 1) == 0) {
              local_130 = 0;
              local_128 = (void *)0x0;
              goto LAB_007ed4b4;
            }
            iVar24 = iVar24 + 1;
          } while (iVar24 < iVar4);
        }
        local_130 = 0;
        local_128 = (void *)0x0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = (void *)0x0;
        uVar8 = FUN_0080c5d0(plVar17,&local_b0);
        if ((uVar8 & 1) == 0) {
          FUN_00801270(&local_98,3,
                       "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                       ,0x15d9);
          uVar11 = FUN_00800f30(&local_98,"CHECK failed: options->AppendPartialToString(&buf): ");
          uVar11 = FUN_00800f30(uVar11,"Protocol message could not be serialized.");
          FUN_00800fa0(local_c8,uVar11);
          FUN_00801290(&local_98);
        }
        uVar8 = FUN_0080c0c0(plVar17,&local_b0);
        if ((uVar8 & 1) == 0) {
          FUN_00801270(&local_98,3,
                       "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                       ,0x15db);
          uVar11 = FUN_00800f30(&local_98,"CHECK failed: options->ParsePartialFromString(buf): ");
          uVar11 = FUN_00800f30(uVar11,"Protocol message serialized itself in invalid fashion.");
          FUN_00800fa0(local_c8,uVar11);
          FUN_00801290(&local_98);
        }
        uVar8 = (**(code **)(*plVar17 + 0x40))(plVar17);
        pbVar7 = local_138;
        if ((uVar8 & 1) == 0) {
          (**(code **)(*plVar17 + 0x48))(local_c8,plVar17);
          puVar13 = (ulong *)std::string::insert((ulong)local_c8,(char *)0x0);
          local_98 = *puVar13;
          local_90 = puVar13[1];
          local_88 = (void *)puVar13[2];
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = 0;
          FUN_007eb150(pbVar7,lVar19 + 0x18,plVar9,9,&local_98);
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
          if ((local_c8[0] & 1) != 0) {
            operator_delete(local_b8);
          }
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
LAB_007ed4b4:
        lVar19 = lVar19 + 0x40;
      } while (lVar19 != *(long *)(param_1 + 0x20));
      lVar22 = *(long *)(param_1 + 0x18);
      for (; lVar19 != lVar22; lVar19 = lVar19 + -0x40) {
        while( true ) {
          if ((*(byte *)(lVar19 + -0x28) & 1) == 0) {
            bVar14 = *(byte *)(lVar19 + -0x40);
          }
          else {
            operator_delete(*(void **)(lVar19 + -0x18));
            bVar14 = *(byte *)(lVar19 + -0x40);
          }
          if ((bVar14 & 1) != 0) break;
          lVar19 = lVar19 + -0x40;
          if (lVar22 == lVar19) goto LAB_007ed524;
        }
        operator_delete(*(void **)(lVar19 + -0x30));
      }
    }
LAB_007ed524:
    *(long *)(param_1 + 0x20) = lVar22;
    FUN_008177b0(auStack_120);
    bVar14 = param_1[0x30];
    if (bVar14 == 0) {
      FUN_007ef200(param_1,puVar5,param_2);
      bVar14 = param_1[0x30];
    }
    if (bVar14 == 0) goto LAB_007ed594;
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar19 = 0;
    lVar22 = 0;
    do {
      FUN_007ef4d0(param_1,puVar5[10] + lVar19,
                   *(undefined8 *)(*(long *)(param_2 + 0x70) + lVar22 * 8 + 8));
      lVar22 = lVar22 + 1;
      lVar19 = lVar19 + 0xa8;
    } while (lVar22 < *(int *)(param_2 + 0x68));
  }
LAB_007ed594:
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_007ef950(param_1,param_2);
  }
  lVar22 = *(long *)(param_1 + 8);
  if (param_1[0x30] == 0) {
    lVar19 = *(long *)(lVar22 + 0x160) + -0x1c;
    *(long *)(lVar22 + 0x160) = lVar19;
    if (*(long *)(lVar22 + 0x158) == lVar19) {
      *(undefined8 *)(lVar22 + 0x178) = *(undefined8 *)(lVar22 + 0x170);
      *(undefined8 *)(lVar22 + 400) = *(undefined8 *)(lVar22 + 0x188);
      *(undefined8 *)(lVar22 + 0x1a8) = *(undefined8 *)(lVar22 + 0x1a0);
    }
  }
  else {
    FUN_007e08f0();
    puVar5 = (undefined8 *)0x0;
  }
  FUN_007f8790(&local_f8,local_f0);
  FUN_007f7520(&local_e0,local_d8);
  return puVar5;
}


