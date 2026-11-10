/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f54f0; name: FUN_007f54f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007f54f0(long *param_1,long *param_2)

{
  string *psVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *extraout_x1;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  string *psVar22;
  size_t __n;
  long *plVar23;
  undefined1 auVar24 [16];
  ulong local_160;
  ulong local_158;
  void *local_150;
  char local_148;
  string local_140 [16];
  void *local_130;
  byte local_128 [16];
  void *local_118;
  ulong local_110;
  ulong local_108;
  void *local_100;
  ulong local_f8;
  ulong local_f0;
  void *local_e8;
  ulong local_e0;
  ulong local_d8;
  void *local_d0;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  ulong local_98;
  ulong local_90;
  char *local_88;
  
  lVar16 = param_1[2];
  if (*(int *)(lVar16 + 0x20) == 0) {
    local_88 = operator_new(0x20);
    uVar3 = s_Option_must_have_a_name__01d44536._16_8_;
    uVar6 = s_Option_must_have_a_name__01d44536._0_8_;
    local_98 = 0x21;
    local_90 = 0x18;
    *(undefined8 *)(local_88 + 8) = s_Option_must_have_a_name__01d44536._8_8_;
    *(undefined8 *)(local_88 + 0x10) = uVar3;
    *(undefined8 *)local_88 = uVar6;
    local_88[0x18] = '\0';
    FUN_007eaaf0(*param_1,param_1[1] + 0x18,lVar16,7,&local_98);
joined_r0x007f55f0:
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    return 0;
  }
  pbVar5 = *(byte **)(*(long *)(*(long *)(lVar16 + 0x28) + 8) + 0x18);
  uVar10 = (ulong)(*pbVar5 >> 1);
  if ((*pbVar5 & 1) != 0) {
    uVar10 = *(ulong *)(pbVar5 + 8);
  }
  if ((uVar10 == 0x14) &&
     (iVar4 = std::string::compare((ulong)pbVar5,0,(char *)0xffffffffffffffff,0x1cdde88), iVar4 == 0
     )) {
    local_88 = operator_new(0x40);
    local_98 = 0x41;
    local_88[0x39] = '\0';
    uVar6 = s_Option_must_not_use_reserved_nam_01d10b01._24_8_;
    local_90 = 0x39;
    *(undefined8 *)(local_88 + 0x10) = s_Option_must_not_use_reserved_nam_01d10b01._16_8_;
    *(undefined8 *)(local_88 + 0x18) = uVar6;
    uVar6 = s_Option_must_not_use_reserved_nam_01d10b01._8_8_;
    *(undefined8 *)local_88 = s_Option_must_not_use_reserved_nam_01d10b01._0_8_;
    *(undefined8 *)(local_88 + 8) = uVar6;
    uVar3 = s_Option_must_not_use_reserved_nam_01d10b01._48_8_;
    uVar6 = s_Option_must_not_use_reserved_nam_01d10b01._40_8_;
    *(undefined8 *)(local_88 + 0x20) = s_Option_must_not_use_reserved_nam_01d10b01._32_8_;
    local_88[0x38] = '.';
    *(undefined8 *)(local_88 + 0x28) = uVar6;
    *(undefined8 *)(local_88 + 0x30) = uVar3;
    FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],7,&local_98);
    goto joined_r0x007f55f0;
  }
  puVar17 = (undefined8 *)*param_1;
  lVar16 = (**(code **)(*param_2 + 0xb8))(param_2);
  iVar4 = FUN_007f91f0(puVar17,*puVar17,*(undefined8 *)(lVar16 + 8));
  puVar17 = extraout_x1;
  if (iVar4 != 1) {
    puVar17 = (undefined8 *)(**(code **)(*param_2 + 0xb8))(param_2);
  }
  if (puVar17 == (undefined8 *)0x0) {
    FUN_00801270(&local_98,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0x160b);
    uVar6 = FUN_00800f30(&local_98,"CHECK failed: options_descriptor: ");
    FUN_00800fa0(&local_160,uVar6);
    FUN_00801290(&local_98);
  }
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  lVar16 = param_1[2];
  if (0 < *(int *)(lVar16 + 0x20)) {
    uVar15 = 0;
    lVar20 = 1;
    lVar18 = 0;
    do {
      lVar16 = *(long *)(*(long *)(lVar16 + 0x28) + lVar20 * 8);
      psVar22 = *(string **)(lVar16 + 0x18);
      uVar10 = (ulong)(uVar15 >> 1);
      if ((uVar15 & 1) != 0) {
        uVar10 = local_c0;
      }
      if (uVar10 != 0) {
        std::string::append((char *)&local_c8);
        lVar16 = *(long *)(*(long *)(param_1[2] + 0x28) + lVar20 * 8);
      }
      if (*(char *)(lVar16 + 0x20) == '\0') {
        psVar1 = *(string **)(psVar22 + 0x10);
        if (((byte)*psVar22 & 1) == 0) {
          psVar1 = psVar22 + 1;
        }
        std::string::append((char *)&local_c8,(ulong)psVar1);
        auVar24 = FUN_007e3d50(*(undefined8 *)(puVar17[2] + 0x98),puVar17,psVar22,2);
        lVar19 = auVar24._8_8_;
        uVar6 = auVar24._0_8_;
        if (auVar24._0_4_ != 0) {
          if (*(char *)(lVar19 + 0x44) != '\0') {
            lVar19 = 0;
          }
          if (lVar19 != 0) goto LAB_007f578c;
        }
LAB_007f5998:
        plVar11 = (long *)*param_1;
        if (*(char *)(*plVar11 + 0x29) != '\0') {
LAB_007f59e0:
          FUN_007f6090(uVar6,param_1[2],param_2);
          uVar6 = 1;
          goto joined_r0x007f59f4;
        }
        if ((*(byte *)(plVar11 + 0x16) & 1) == 0) {
          if (*(byte *)(plVar11 + 0x16) >> 1 == 0) goto LAB_007f59c0;
        }
        else if (plVar11[0x17] == 0) {
LAB_007f59c0:
          std::operator+("Option \"",(string *)&local_c8);
          goto LAB_007f5c20;
        }
        std::operator+("Option \"",(string *)&local_c8);
        puVar7 = (ulong *)std::string::append((char *)local_128);
        local_110 = *puVar7;
        local_108 = puVar7[1];
        local_100 = (void *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        lVar16 = *param_1;
        uVar10 = lVar16 + 0xb1;
        if ((*(byte *)(lVar16 + 0xb0) & 1) != 0) {
          uVar10 = *(ulong *)(lVar16 + 0xc0);
        }
        puVar7 = (ulong *)std::string::append((char *)&local_110,uVar10);
        local_f8 = *puVar7;
        local_f0 = puVar7[1];
        local_e8 = (void *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7 = (ulong *)std::string::append((char *)&local_f8);
        local_e0 = *puVar7;
        local_d8 = puVar7[1];
        local_d0 = (void *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        std::string::string(local_140,(string *)&local_c8,1,0xffffffffffffffff,
                            (allocator *)&local_c8);
        pvVar2 = (void *)((ulong)local_140 | 1);
        if (((byte)local_140[0] & 1) != 0) {
          pvVar2 = local_130;
        }
        puVar7 = (ulong *)std::string::append((char *)&local_e0,(ulong)pvVar2);
        local_160 = *puVar7;
        local_158 = puVar7[1];
        local_150 = (void *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7 = (ulong *)std::string::append((char *)&local_160);
        local_98 = *puVar7;
        local_90 = puVar7[1];
        local_88 = (char *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],7,&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_160 & 1) != 0) {
          operator_delete(local_150);
        }
        if (((byte)local_140[0] & 1) != 0) {
          operator_delete(local_130);
        }
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
        if ((local_f8 & 1) != 0) {
          operator_delete(local_e8);
        }
        if ((local_110 & 1) != 0) {
          operator_delete(local_100);
        }
        if ((local_128[0] & 1) != 0) goto LAB_007f6070;
        goto LAB_007f6074;
      }
      std::operator+("(",psVar22);
      puVar7 = (ulong *)std::string::append((char *)&local_160);
      local_98 = *puVar7;
      local_90 = puVar7[1];
      local_88 = (char *)puVar7[2];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      pvVar2 = (void *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        pvVar2 = local_88;
      }
      std::string::append((char *)&local_c8,(ulong)pvVar2);
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_160 & 1) != 0) {
        operator_delete(local_150);
      }
      auVar24 = FUN_007f31b0(*param_1,psVar22,param_1[1],0,0);
      uVar6 = auVar24._0_8_;
      lVar19 = auVar24._8_8_;
      if (auVar24._0_4_ != 2) {
        lVar19 = lVar18;
      }
      if (lVar19 == 0) goto LAB_007f5998;
LAB_007f578c:
      plVar11 = local_b0;
      if (*(undefined8 **)(lVar19 + 0x50) != puVar17) {
        if (*(char *)(*(undefined8 **)(lVar19 + 0x50) + 5) != '\0') goto LAB_007f59e0;
        std::operator+("Option field \"",(string *)&local_c8);
        puVar7 = (ulong *)std::string::append((char *)&local_f8);
        local_e0 = *puVar7;
        local_d8 = puVar7[1];
        local_d0 = (void *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        pbVar14 = (byte *)*puVar17;
        pbVar5 = *(byte **)(pbVar14 + 0x10);
        if ((*pbVar14 & 1) == 0) {
          pbVar5 = pbVar14 + 1;
        }
        puVar7 = (ulong *)std::string::append((char *)&local_e0,(ulong)pbVar5);
        local_160 = *puVar7;
        local_158 = puVar7[1];
        local_150 = (void *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7 = (ulong *)std::string::append((char *)&local_160);
        local_98 = *puVar7;
        local_90 = puVar7[1];
        local_88 = (char *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],7,&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_160 & 1) != 0) {
          operator_delete(local_150);
        }
        local_118 = local_e8;
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
          local_118 = local_e8;
        }
        local_e8 = local_118;
        if ((local_f8 & 1) != 0) {
LAB_007f6070:
          operator_delete(local_118);
        }
        goto LAB_007f6074;
      }
      lVar16 = param_1[2];
      iVar4 = *(int *)(lVar16 + 0x20);
      if (lVar20 + -1 < (long)iVar4 + -1) {
        if ((*(uint *)(lVar19 + 0x3c) | 1) == 0xb) {
          if (*(int *)(lVar19 + 0x40) != 3) {
            if (local_a8 == local_a0) {
              __n = (long)local_a8 - (long)local_b0;
              uVar10 = ((long)__n >> 3) + 1;
              if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)local_a0 - (long)local_b0 >> 3) < 0xfffffffffffffff) {
                uVar13 = (long)local_a0 - (long)local_b0 >> 2;
                if (uVar10 <= uVar13) {
                  uVar10 = uVar13;
                }
                if (uVar10 != 0) {
                  if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  goto LAB_007f589c;
                }
                plVar8 = (long *)0x0;
              }
              else {
                uVar10 = 0x1fffffffffffffff;
LAB_007f589c:
                plVar8 = operator_new(uVar10 << 3);
              }
              plVar9 = plVar8 + ((long)__n >> 3);
              *plVar9 = lVar19;
              if (0 < (long)__n) {
                memcpy(plVar8,plVar11,__n);
              }
              local_b0 = plVar8;
              local_a8 = plVar9 + 1;
              local_a0 = plVar8 + uVar10;
              if (plVar11 != (long *)0x0) {
                operator_delete(plVar11);
              }
            }
            else {
              *local_a8 = lVar19;
              local_a8 = local_a8 + 1;
            }
            lVar16 = param_1[2];
            puVar17 = *(undefined8 **)(lVar19 + 0x68);
            iVar4 = *(int *)(lVar16 + 0x20);
            goto LAB_007f58fc;
          }
          std::operator+("Option field \"",(string *)&local_c8);
        }
        else {
          std::operator+("Option \"",(string *)&local_c8);
        }
LAB_007f5c20:
        puVar7 = (ulong *)std::string::append((char *)&local_160);
        local_98 = *puVar7;
        local_90 = puVar7[1];
        local_88 = (char *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        FUN_007eaaf0(*param_1,param_1[1] + 0x18,param_1[2],7,&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_160 & 1) != 0) {
          local_118 = local_150;
          goto LAB_007f6070;
        }
        goto LAB_007f6074;
      }
LAB_007f58fc:
      if (iVar4 <= lVar20) goto LAB_007f59fc;
      uVar15 = (uint)(byte)local_c8._0_1_;
      lVar20 = lVar20 + 1;
      lVar18 = lVar19;
    } while( true );
  }
  lVar19 = 0;
  plVar11 = local_b0;
  plVar8 = local_a8;
  iVar4 = _DAT_00000040;
  goto joined_r0x007f5a08;
LAB_007f59fc:
  plVar11 = local_b0;
  plVar8 = local_a8;
  iVar4 = *(int *)(lVar19 + 0x40);
joined_r0x007f5a08:
  local_b0 = plVar11;
  local_a8 = plVar8;
  if (iVar4 != 3) {
    plVar9 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
    uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,param_2);
    uVar10 = FUN_007f61b0(param_1,plVar11,plVar8,lVar19,&local_c8,uVar6);
    if ((uVar10 & 1) == 0) {
LAB_007f6074:
      uVar6 = 0;
      goto joined_r0x007f59f4;
    }
  }
  plVar11 = operator_new(8);
  *plVar11 = 0;
  uVar10 = FUN_007f6440(param_1,lVar19,plVar11);
  plVar8 = plVar11;
  if ((uVar10 & 1) == 0) {
    uVar6 = 0;
    lVar16 = *plVar11;
  }
  else {
    if (local_a8 != local_b0) {
      plVar9 = local_a8;
      plVar23 = plVar11;
      do {
        plVar12 = operator_new(8);
        *plVar12 = 0;
        plVar21 = plVar9 + -1;
        lVar16 = *plVar21;
        if (*(int *)(lVar16 + 0x3c) == 10) {
          uVar6 = FUN_00810180(plVar12,*(undefined4 *)(lVar16 + 0x38));
          FUN_0080f7b0(uVar6,plVar11);
          if (plVar11 != plVar12) {
LAB_007f5b70:
            if (plVar11 != (long *)0x0) {
              if (*plVar11 != 0) {
                FUN_0080f500(plVar11);
              }
              operator_delete(plVar23);
            }
            plVar11 = plVar12;
            plVar8 = plVar12;
            plVar23 = plVar12;
          }
        }
        else {
          if (*(int *)(lVar16 + 0x3c) != 0xb) {
            FUN_00801270(&local_98,3,
                         "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                         ,0x1699);
            uVar6 = FUN_00800f30(&local_98,"Invalid wire type for CPPTYPE_MESSAGE: ");
            uVar6 = FUN_00801220(uVar6,*(undefined4 *)(plVar9[-1] + 0x3c));
            FUN_00800fa0(&local_160,uVar6);
            FUN_00801290(&local_98);
            if (*plVar12 != 0) {
              FUN_0080f500(plVar12);
            }
            operator_delete(plVar12);
            uVar6 = 0;
            goto joined_r0x007f5d70;
          }
          uVar6 = FUN_00810030(plVar12,*(undefined4 *)(lVar16 + 0x38));
          FUN_0080ea30(&local_e0,uVar6);
          FUN_0080db00(&local_160,&local_e0);
          FUN_00810910(plVar11,&local_160);
          if (local_148 != '\0') {
            FUN_00801270(&local_98,3,
                         "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                         ,0x168c);
            uVar6 = FUN_00800f30(&local_98,"CHECK failed: !out.HadError(): ");
            uVar6 = FUN_00800f30(uVar6,"Unexpected failure while serializing option submessage ");
            uVar6 = FUN_00800f60(uVar6,&local_c8);
            uVar6 = FUN_00800f30(uVar6,&DAT_01cebaa1);
            FUN_00800fa0(&local_f8,uVar6);
            FUN_00801290(&local_98);
          }
          FUN_0080db90(&local_160);
          thunk_FUN_0080ee40(&local_e0);
          if (plVar11 != plVar12) goto LAB_007f5b70;
        }
        plVar9 = plVar21;
      } while (plVar21 != local_b0);
    }
    plVar9 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
    uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,param_2);
    FUN_0080f7b0(uVar6,plVar11);
    uVar6 = 1;
joined_r0x007f5d70:
    if (plVar11 == (long *)0x0) goto joined_r0x007f59f4;
    lVar16 = *plVar11;
  }
  if (lVar16 != 0) {
    FUN_0080f500(plVar11);
  }
  operator_delete(plVar8);
joined_r0x007f59f4:
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if (local_b0 != (long *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  return uVar6;
}


