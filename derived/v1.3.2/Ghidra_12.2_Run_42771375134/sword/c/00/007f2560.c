/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f2560; name: FUN_007f2560
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007f2560(long *param_1,byte *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  size_t sVar8;
  ulong *puVar9;
  long extraout_x1;
  undefined8 uVar10;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined8 uVar11;
  char *pcVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  byte *pbVar16;
  byte *pbVar17;
  int *piVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_148;
  undefined4 local_140;
  byte *local_118;
  uint local_110;
  void *local_108;
  byte *local_e8;
  ulong local_e0;
  void *local_d8;
  byte *local_b8;
  undefined8 local_b0;
  void *local_a8;
  byte local_88;
  undefined7 uStack_87;
  uint local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  char local_78;
  undefined5 uStack_77;
  undefined1 uStack_72;
  undefined1 uStack_71;
  byte local_58 [16];
  void *local_48;
  
  if (*(long *)(param_2 + 0x78) == 0) {
    uVar10 = FUN_0084d530();
    *(undefined8 *)(param_2 + 0x78) = uVar10;
    bVar3 = *(byte *)(param_3 + 0x10);
  }
  else {
    bVar3 = *(byte *)(param_3 + 0x10);
  }
  if ((bVar3 >> 5 & 1) != 0) {
    iVar6 = FUN_007f31b0(param_1,*(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_2 + 8),2,0);
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        FUN_007ead00(param_1,*(undefined8 *)(param_2 + 8),param_3,3,*(undefined8 *)(param_3 + 0x30))
        ;
        return;
      }
      uVar24 = *(undefined8 *)(param_2 + 8);
      std::operator+("\"",*(string **)(param_3 + 0x30));
      puVar26 = (undefined8 *)std::string::append((char *)&local_b8);
      uVar10 = puVar26[1];
      uVar21 = puVar26[2];
      uVar11 = 3;
      local_80 = (uint)uVar10;
      uStack_7c = (undefined2)((ulong)uVar10 >> 0x20);
      uStack_7a = (undefined2)((ulong)uVar10 >> 0x30);
      local_78 = (char)uVar21;
      uStack_77 = (undefined5)((ulong)uVar21 >> 8);
      uStack_72 = (undefined1)((ulong)uVar21 >> 0x30);
      uStack_71 = (undefined1)((ulong)uVar21 >> 0x38);
      local_88 = (byte)*puVar26;
      uStack_87 = (undefined7)((ulong)*puVar26 >> 8);
      puVar26[1] = 0;
      puVar26[2] = 0;
      *puVar26 = 0;
      goto LAB_007f2dd8;
    }
    *(long *)(param_2 + 0x50) = extraout_x1;
    iVar6 = *(int *)(param_2 + 0x38);
    if (0 < *(int *)(extraout_x1 + 0x68)) {
      lVar25 = 0;
      piVar18 = (int *)(*(long *)(extraout_x1 + 0x70) + 4);
      do {
        if ((piVar18[-1] <= iVar6) && (iVar6 < *piVar18)) goto LAB_007f2734;
        lVar25 = lVar25 + 1;
        piVar18 = piVar18 + 2;
      } while (lVar25 < *(int *)(extraout_x1 + 0x68));
    }
    pbVar17 = *(byte **)(extraout_x1 + 8);
    pbVar16 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar16 = pbVar17 + 1;
    }
    uVar10 = *(undefined8 *)(param_2 + 8);
    local_88 = (byte)pbVar16;
    uStack_87 = (undefined7)((ulong)pbVar16 >> 8);
    local_80 = (uint)(*pbVar17 >> 1);
    if ((*pbVar17 & 1) != 0) {
      local_80 = (uint)*(undefined8 *)(pbVar17 + 8);
    }
    local_b8 = (byte *)FUN_007ff7d0(iVar6,(long)&local_b0 + 4);
    sVar8 = strlen((char *)local_b8);
    local_e0 = CONCAT44(local_e0._4_4_,0xffffffff);
    local_110 = 0xffffffff;
    local_140 = 0xffffffff;
    local_170 = 0xffffffff;
    local_1a0 = 0xffffffff;
    local_1d0 = 0xffffffff;
    local_200 = 0xffffffff;
    local_230 = 0xffffffff;
    local_e8 = (byte *)0x0;
    local_b0 = (byte *)CONCAT44(local_b0._4_4_,(int)sVar8);
    local_118 = (byte *)0x0;
    local_148 = 0;
    local_178 = 0;
    local_1a8 = 0;
    local_1d8 = 0;
    local_208 = 0;
    local_238 = 0;
    FUN_00863000(local_58,"\"$0\" does not declare $1 as an extension number.",&local_88,&local_b8,
                 &local_e8,&local_118,&local_148,&local_178,&local_1a8,&local_1d8,&local_208,
                 &local_238);
    FUN_007eaaf0(param_1,uVar10,param_3,1,local_58);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
LAB_007f2734:
  if ((*(long *)(param_2 + 0x58) != 0) && (*(int *)(param_2 + 0x40) != 1)) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,0,
                 "Fields of oneofs must themselves have label LABEL_OPTIONAL.");
  }
  if ((*(uint *)(param_3 + 0x10) >> 4 & 1) != 0) {
    iVar6 = FUN_007f31b0(param_1,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_2 + 8),
                         *(uint *)(param_3 + 0x10) >> 6 & 1 |
                         (uint)(*(int *)(param_3 + 0x38) == 0xe),1);
    if (iVar6 == 0) {
      if (*(char *)(*param_1 + 0x2a) != '\0') {
LAB_007f2840:
        FUN_007ead00(param_1,*(undefined8 *)(param_2 + 8),param_3,2,*(undefined8 *)(param_3 + 0x28))
        ;
        return;
      }
      lVar25 = *(long *)(param_3 + 0x50);
      if (lVar25 == 0) {
        lVar25 = *(long *)(*(long *)PTR_DAT_02716e60 + 0x50);
      }
      if (*(char *)(lVar25 + 0x5b) == '\0') goto LAB_007f2840;
      uStack_71 = 0;
      local_88 = 0x2a;
      uStack_77._0_1_ = s_google_protobuf_Empty_01d0d5cf[0x10];
      uStack_77._1_1_ = s_google_protobuf_Empty_01d0d5cf[0x11];
      uStack_77._2_1_ = s_google_protobuf_Empty_01d0d5cf[0x12];
      uStack_77._3_1_ = s_google_protobuf_Empty_01d0d5cf[0x13];
      uStack_77._4_1_ = s_google_protobuf_Empty_01d0d5cf[0x14];
      local_80._1_3_ = s_google_protobuf_Empty_01d0d5cf._8_3_;
      uStack_7c = s_google_protobuf_Empty_01d0d5cf._11_2_;
      uStack_7a = s_google_protobuf_Empty_01d0d5cf._13_2_;
      local_78 = s_google_protobuf_Empty_01d0d5cf[0xf];
      uStack_87 = s_google_protobuf_Empty_01d0d5cf._0_7_;
      local_80._0_1_ = s_google_protobuf_Empty_01d0d5cf[7];
      uStack_72 = 0;
      iVar6 = FUN_007f3660(param_1,&local_88);
      if ((local_88 & 1) != 0) {
        operator_delete((void *)CONCAT17(uStack_71,CONCAT16(uStack_72,CONCAT51(uStack_77,local_78)))
                       );
      }
      lVar25 = extraout_x1_01;
      if (iVar6 == 0) goto LAB_007f2840;
    }
    else {
      lVar25 = extraout_x1_00;
    }
    if ((*(byte *)(param_3 + 0x10) >> 3 & 1) == 0) {
      if (iVar6 == 4) {
        uVar13 = 0xe;
LAB_007f28e8:
        *(uint *)(param_2 + 0x3c) = uVar13;
        goto LAB_007f28ec;
      }
      if (iVar6 == 1) {
        uVar13 = 0xb;
        goto LAB_007f28e8;
      }
      uVar24 = *(undefined8 *)(param_2 + 8);
      std::operator+("\"",*(string **)(param_3 + 0x28));
    }
    else {
      uVar13 = *(uint *)(param_2 + 0x3c);
LAB_007f28ec:
      if (*(int *)(PTR_DAT_02716e20 + (ulong)uVar13 * 4) == 8) {
        if (iVar6 == 4) {
          *(long *)(param_2 + 0x70) = lVar25;
          if (*(char *)(lVar25 + 0x28) == '\0') {
            if (param_2[0x80] == 0) goto LAB_007f2948;
            uVar7 = FUN_00843b60(*(undefined8 *)(param_3 + 0x40));
            if ((uVar7 & 1) == 0) {
              uVar10 = *(undefined8 *)(param_2 + 8);
              pcVar12 = "Default value for an enum field must be an identifier.";
              uVar11 = 4;
              goto LAB_007f2a60;
            }
            iVar6 = FUN_007f3a40(param_1,*(undefined8 *)(param_3 + 0x40),
                                 *(undefined8 *)(*(long *)(param_2 + 0x70) + 8),0);
            if (iVar6 == 5) {
              lVar25 = *(long *)(param_2 + 0x70);
              if (*(long *)(extraout_x1_02 + 0x18) != lVar25) goto LAB_007f3078;
              *(long *)(param_2 + 0x88) = extraout_x1_02;
              uVar7 = FUN_007e14b0(param_1[0xb],param_2);
            }
            else {
              lVar25 = *(long *)(param_2 + 0x70);
LAB_007f3078:
              uVar10 = *(undefined8 *)(param_2 + 8);
              std::operator+("Enum type \"",*(string **)(lVar25 + 8));
              puVar9 = (ulong *)std::string::append((char *)&local_118);
              local_e8 = (byte *)*puVar9;
              local_e0 = puVar9[1];
              local_d8 = (void *)puVar9[2];
              puVar9[1] = 0;
              puVar9[2] = 0;
              *puVar9 = 0;
              pbVar17 = *(byte **)(param_3 + 0x40);
              pbVar16 = *(byte **)(pbVar17 + 0x10);
              if ((*pbVar17 & 1) == 0) {
                pbVar16 = pbVar17 + 1;
              }
              puVar26 = (undefined8 *)std::string::append((char *)&local_e8,(ulong)pbVar16);
              local_b8 = (byte *)*puVar26;
              local_b0 = (byte *)puVar26[1];
              local_a8 = (void *)puVar26[2];
              puVar26[1] = 0;
              puVar26[2] = 0;
              *puVar26 = 0;
              puVar26 = (undefined8 *)std::string::append((char *)&local_b8);
              uVar11 = puVar26[1];
              uVar21 = puVar26[2];
              local_80 = (uint)uVar11;
              uStack_7c = (undefined2)((ulong)uVar11 >> 0x20);
              uStack_7a = (undefined2)((ulong)uVar11 >> 0x30);
              local_78 = (char)uVar21;
              uStack_77 = (undefined5)((ulong)uVar21 >> 8);
              uStack_72 = (undefined1)((ulong)uVar21 >> 0x30);
              uStack_71 = (undefined1)((ulong)uVar21 >> 0x38);
              local_88 = (byte)*puVar26;
              uStack_87 = (undefined7)((ulong)*puVar26 >> 8);
              puVar26[1] = 0;
              puVar26[2] = 0;
              *puVar26 = 0;
              FUN_007eaaf0(param_1,uVar10,param_3,4,&local_88);
              if ((local_88 & 1) != 0) {
                operator_delete((void *)CONCAT17(uStack_71,
                                                 CONCAT16(uStack_72,CONCAT51(uStack_77,local_78))));
              }
              if (((ulong)local_b8 & 1) != 0) {
                operator_delete(local_a8);
              }
              if (((ulong)local_e8 & 1) != 0) {
                operator_delete(local_d8);
              }
              if (((ulong)local_118 & 1) == 0) goto LAB_007f2a6c;
              operator_delete(local_108);
              uVar7 = FUN_007e14b0(param_1[0xb],param_2);
            }
          }
          else {
            param_2[0x80] = 0;
LAB_007f2948:
            if (*(int *)(lVar25 + 0x2c) < 1) goto LAB_007f2a6c;
            *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(lVar25 + 0x30);
            uVar7 = FUN_007e14b0(param_1[0xb],param_2);
          }
          goto joined_r0x007f319c;
        }
        uVar24 = *(undefined8 *)(param_2 + 8);
        std::operator+("\"",*(string **)(param_3 + 0x28));
      }
      else {
        if (*(int *)(PTR_DAT_02716e20 + (ulong)uVar13 * 4) != 10) {
          uVar10 = *(undefined8 *)(param_2 + 8);
          pcVar12 = "Field with primitive type has type_name.";
          goto LAB_007f2a5c;
        }
        if (iVar6 == 1) {
          *(long *)(param_2 + 0x68) = lVar25;
          if (param_2[0x80] == 0) goto LAB_007f2a6c;
          uVar10 = *(undefined8 *)(param_2 + 8);
          pcVar12 = "Messages can\'t have default values.";
          uVar11 = 4;
          goto LAB_007f2a60;
        }
        uVar24 = *(undefined8 *)(param_2 + 8);
        std::operator+("\"",*(string **)(param_3 + 0x28));
      }
    }
    puVar26 = (undefined8 *)std::string::append((char *)&local_b8);
    uVar10 = puVar26[1];
    uVar11 = puVar26[2];
    local_80 = (uint)uVar10;
    uStack_7c = (undefined2)((ulong)uVar10 >> 0x20);
    uStack_7a = (undefined2)((ulong)uVar10 >> 0x30);
    local_78 = (char)uVar11;
    uStack_77 = (undefined5)((ulong)uVar11 >> 8);
    uStack_72 = (undefined1)((ulong)uVar11 >> 0x30);
    uStack_71 = (undefined1)((ulong)uVar11 >> 0x38);
    local_88 = (byte)*puVar26;
    uStack_87 = (undefined7)((ulong)*puVar26 >> 8);
    puVar26[1] = 0;
    puVar26[2] = 0;
    *puVar26 = 0;
    uVar11 = 2;
LAB_007f2dd8:
    FUN_007eaaf0(param_1,uVar24,param_3,uVar11,&local_88);
    if ((local_88 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_71,CONCAT16(uStack_72,CONCAT51(uStack_77,local_78))));
    }
    if (((ulong)local_b8 & 1) == 0) {
      return;
    }
    operator_delete(local_a8);
    return;
  }
  if ((*(uint *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_2 + 0x3c) * 4) | 2) == 10) {
    uVar10 = *(undefined8 *)(param_2 + 8);
    pcVar12 = "Field with message or enum type missing type_name.";
LAB_007f2a5c:
    uVar11 = 2;
LAB_007f2a60:
    FUN_007eac10(param_1,uVar10,param_3,uVar11,pcVar12);
  }
LAB_007f2a6c:
  uVar7 = FUN_007e14b0(param_1[0xb],param_2);
joined_r0x007f319c:
  if ((uVar7 & 1) == 0) {
    lVar22 = param_1[0xb];
    iVar6 = *(int *)(param_2 + 0x38);
    lVar25 = (long)iVar6;
    uVar7 = *(ulong *)(lVar22 + 0x80);
    if (uVar7 != 0) {
      lVar14 = *(long *)(param_2 + 0x50);
      uVar23 = uVar7 - 1;
      uVar2 = lVar14 * 0xffff + lVar25;
      if ((uVar23 & uVar7) == 0) {
        uVar19 = uVar23 & uVar2;
        plVar20 = *(long **)(*(long *)(lVar22 + 0x78) + uVar19 * 8);
      }
      else {
        uVar19 = uVar2;
        if (uVar7 <= uVar2) {
          uVar19 = 0;
          if (uVar7 != 0) {
            uVar19 = uVar2 / uVar7;
          }
          uVar19 = uVar2 - uVar19 * uVar7;
        }
        plVar20 = *(long **)(*(long *)(lVar22 + 0x78) + uVar19 * 8);
      }
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if ((uVar23 & uVar7) == 0) {
          do {
            uVar7 = plVar20[1];
            if (uVar2 != uVar7 && (uVar7 & uVar23) != uVar19) break;
            if (((uVar2 == uVar7) && (plVar20[2] == lVar14)) && ((int)plVar20[3] == iVar6))
            goto LAB_007f2e84;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar20[1];
            if (uVar2 == uVar23) {
              if ((plVar20[2] == lVar14) && ((int)plVar20[3] == iVar6)) goto LAB_007f2e84;
            }
            else {
              if (uVar7 <= uVar23) {
                uVar4 = 0;
                if (uVar7 != 0) {
                  uVar4 = uVar23 / uVar7;
                }
                uVar23 = uVar23 - uVar4 * uVar7;
              }
              if (uVar23 != uVar19) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    puVar26 = (undefined8 *)0x0;
    uVar10 = *(undefined8 *)(param_2 + 8);
    if (param_2[0x44] == 0) goto LAB_007f2e94;
    goto LAB_007f2c80;
  }
  if (param_2[0x44] != 0) {
    uVar7 = FUN_007e1b30(param_1[1],param_2);
    if ((uVar7 & 1) == 0) {
      iVar6 = *(int *)(param_2 + 0x38);
      plVar20 = *(long **)(param_1[1] + 0x148);
      if (plVar20 == (long *)0x0) {
LAB_007f2b0c:
        lVar25 = 0;
      }
      else {
        uVar7 = *(ulong *)(param_2 + 0x50);
        plVar1 = (long *)(param_1[1] + 0x148);
        plVar15 = plVar1;
        do {
          while ((ulong)plVar20[4] < uVar7) {
            plVar20 = (long *)plVar20[1];
            if (plVar20 == (long *)0x0) goto LAB_007f2af8;
          }
          if ((uVar7 < (ulong)plVar20[4]) || (iVar6 <= (int)plVar20[5])) {
            plVar5 = (long *)*plVar20;
            plVar15 = plVar20;
          }
          else {
            plVar5 = (long *)plVar20[1];
          }
          plVar20 = plVar5;
        } while (plVar20 != (long *)0x0);
LAB_007f2af8:
        if (((plVar15 == plVar1) || (uVar7 < (ulong)plVar15[4])) ||
           ((uVar7 <= (ulong)plVar15[4] && (iVar6 < (int)plVar15[5])))) goto LAB_007f2b0c;
        lVar25 = plVar15[6];
      }
      pcVar12 = (char *)FUN_007ff7d0(iVar6,&uStack_7c);
      local_88 = (byte)pcVar12;
      uStack_87 = (undefined7)((ulong)pcVar12 >> 8);
      sVar8 = strlen(pcVar12);
      local_80 = (uint)sVar8;
      pbVar16 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
      local_b8 = *(byte **)(pbVar16 + 0x10);
      if ((*pbVar16 & 1) == 0) {
        local_b8 = pbVar16 + 1;
      }
      uVar13 = (uint)(*pbVar16 >> 1);
      if ((*pbVar16 & 1) != 0) {
        uVar13 = (uint)*(undefined8 *)(pbVar16 + 8);
      }
      local_b0 = (byte *)CONCAT44(local_b0._4_4_,uVar13);
      pbVar16 = *(byte **)(lVar25 + 8);
      local_e8 = *(byte **)(pbVar16 + 0x10);
      if ((*pbVar16 & 1) == 0) {
        local_e8 = pbVar16 + 1;
      }
      uVar13 = (uint)(*pbVar16 >> 1);
      if ((*pbVar16 & 1) != 0) {
        uVar13 = (uint)*(undefined8 *)(pbVar16 + 8);
      }
      local_e0 = CONCAT44(local_e0._4_4_,uVar13);
      pbVar16 = (byte *)**(undefined8 **)(lVar25 + 0x30);
      local_118 = *(byte **)(pbVar16 + 0x10);
      if ((*pbVar16 & 1) == 0) {
        local_118 = pbVar16 + 1;
      }
      local_140 = 0xffffffff;
      local_170 = 0xffffffff;
      local_1a0 = 0xffffffff;
      local_1d0 = 0xffffffff;
      local_200 = 0xffffffff;
      local_230 = 0xffffffff;
      local_148 = 0;
      local_178 = 0;
      local_1a8 = 0;
      local_1d8 = 0;
      local_208 = 0;
      local_110 = (uint)(*pbVar16 >> 1);
      if ((*pbVar16 & 1) != 0) {
        local_110 = (uint)*(undefined8 *)(pbVar16 + 8);
      }
      local_238 = 0;
      FUN_00863000(local_58,
                   "Extension number $0 has already been used in \"$1\" by extension \"$2\" defined in $3."
                   ,&local_88,&local_b8,&local_e8,&local_118,&local_148,&local_178,&local_1a8,
                   &local_1d8,&local_208,&local_238);
      FUN_007eb150(param_1,*(undefined8 *)(param_2 + 8),param_3,1,local_58);
      goto joined_r0x007f2fa8;
    }
    goto LAB_007f2fb4;
  }
  lVar25 = param_1[0xb];
LAB_007f2fe0:
  pbVar16 = *(byte **)(param_2 + 0x50);
  pbVar17 = *(byte **)(param_2 + 0x10);
  bVar3 = *pbVar17;
joined_r0x007f3058:
  if ((bVar3 & 1) == 0) {
    pbVar17 = (byte *)((long)pbVar17 + 1);
  }
  else {
    pbVar17 = *(byte **)((long)pbVar17 + 0x10);
  }
  local_88 = (byte)pbVar16;
  uStack_87 = (undefined7)((ulong)pbVar16 >> 8);
  local_80 = (uint)pbVar17;
  uStack_7c = (undefined2)((ulong)pbVar17 >> 0x20);
  uStack_7a = (undefined2)((ulong)pbVar17 >> 0x30);
  local_e8 = param_2;
  FUN_007e1150(lVar25 + 0x28,&local_88,&local_e8);
  local_b0 = *(byte **)(param_2 + 0x18);
  if ((*local_b0 & 1) == 0) {
    local_b0 = local_b0 + 1;
  }
  else {
    local_b0 = *(byte **)(local_b0 + 0x10);
  }
  local_b8 = pbVar16;
  FUN_007e1150(lVar25 + 0x50,&local_b8,&local_e8);
  return;
LAB_007f2e84:
  puVar26 = (undefined8 *)plVar20[4];
  uVar10 = *(undefined8 *)(param_2 + 8);
  if (param_2[0x44] == 0) {
LAB_007f2e94:
    pcVar12 = (char *)FUN_007ff7d0(lVar25,&uStack_7c);
    local_88 = (byte)pcVar12;
    uStack_87 = (undefined7)((ulong)pcVar12 >> 8);
    sVar8 = strlen(pcVar12);
    local_80 = (uint)sVar8;
    pbVar16 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
    local_b8 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      local_b8 = pbVar16 + 1;
    }
    uVar13 = (uint)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      uVar13 = (uint)*(undefined8 *)(pbVar16 + 8);
    }
    local_b0 = (byte *)CONCAT44(local_b0._4_4_,uVar13);
    pbVar16 = (byte *)*puVar26;
    local_e8 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      local_e8 = pbVar16 + 1;
    }
    uVar13 = (uint)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      uVar13 = (uint)*(undefined8 *)(pbVar16 + 8);
    }
    local_e0 = CONCAT44(local_e0._4_4_,uVar13);
    pcVar12 = "Field number $0 has already been used in \"$1\" by field \"$2\".";
  }
  else {
LAB_007f2c80:
    pcVar12 = (char *)FUN_007ff7d0(lVar25,&uStack_7c);
    local_88 = (byte)pcVar12;
    uStack_87 = (undefined7)((ulong)pcVar12 >> 8);
    sVar8 = strlen(pcVar12);
    local_80 = (uint)sVar8;
    pbVar16 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
    local_b8 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      local_b8 = pbVar16 + 1;
    }
    uVar13 = (uint)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      uVar13 = (uint)*(undefined8 *)(pbVar16 + 8);
    }
    local_b0 = (byte *)CONCAT44(local_b0._4_4_,uVar13);
    pbVar16 = (byte *)puVar26[1];
    local_e8 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      local_e8 = pbVar16 + 1;
    }
    uVar13 = (uint)(*pbVar16 >> 1);
    if ((*pbVar16 & 1) != 0) {
      uVar13 = (uint)*(undefined8 *)(pbVar16 + 8);
    }
    local_e0 = CONCAT44(local_e0._4_4_,uVar13);
    pcVar12 = "Extension number $0 has already been used in \"$1\" by extension \"$2\".";
  }
  local_110 = 0xffffffff;
  local_118 = (byte *)0x0;
  local_140 = 0xffffffff;
  local_148 = 0;
  local_170 = 0xffffffff;
  local_178 = 0;
  local_1a0 = 0xffffffff;
  local_1a8 = 0;
  local_1d0 = 0xffffffff;
  local_1d8 = 0;
  local_200 = 0xffffffff;
  local_208 = 0;
  local_230 = 0xffffffff;
  local_238 = 0;
  FUN_00863000(local_58,pcVar12,&local_88,&local_b8,&local_e8,&local_118,&local_148,&local_178,
               &local_1a8,&local_1d8,&local_208,&local_238);
  FUN_007eaaf0(param_1,uVar10,param_3,1,local_58);
joined_r0x007f2fa8:
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
LAB_007f2fb4:
  lVar25 = param_1[0xb];
  if (param_2[0x44] != 0) {
    pbVar16 = *(byte **)(param_2 + 0x60);
    if (pbVar16 == (byte *)0x0) {
      pbVar16 = *(byte **)(param_2 + 0x30);
      pbVar17 = *(byte **)(param_2 + 0x10);
      bVar3 = *pbVar17;
    }
    else {
      pbVar17 = *(byte **)(param_2 + 0x10);
      bVar3 = *pbVar17;
    }
    goto joined_r0x007f3058;
  }
  goto LAB_007f2fe0;
}


