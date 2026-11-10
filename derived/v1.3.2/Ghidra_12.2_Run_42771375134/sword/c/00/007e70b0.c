/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e70b0; name: FUN_007e70b0
 */


void FUN_007e70b0(undefined8 *param_1,uint param_2,byte *param_3,char *param_4,ulong param_5)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  size_t sVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  __tree_node_base *p_Var9;
  __tree_node_base *p_Var10;
  long lVar11;
  byte *pbVar13;
  byte *pbVar12;
  long lVar14;
  __tree_node_base *p_Var15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  __tree_node_base *p_Var21;
  byte local_310 [8];
  uint local_308;
  char *local_300;
  __tree_node_base *local_2f8;
  __tree_node_base *local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  char *local_190;
  undefined4 local_188;
  undefined1 auStack_184 [36];
  byte *local_160;
  uint local_158;
  undefined1 auStack_154 [36];
  char *local_130;
  undefined8 local_128;
  void *local_120;
  byte local_100 [8];
  undefined1 auStack_f8 [16];
  ulong local_e8;
  undefined8 local_e0;
  void *local_d8;
  ulong local_d0;
  ulong local_c8;
  void *local_c0;
  byte *local_b8;
  byte *local_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  char local_9e;
  string local_98 [16];
  void *local_88;
  ulong local_80;
  ulong local_78;
  char *local_70;
  
  if (*(char *)(param_1[4] + 0x53) != '\0') {
    return;
  }
  uVar17 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar16 = (uint)((ulong)param_2 << 1);
  local_78 = 0;
  local_70 = (char *)0x0;
  local_80 = 0;
  if (0xffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar16 < 0x17) {
    local_80 = (ulong)(byte)(param_2 << 2);
    pcVar19 = (char *)((ulong)&local_80 | 1);
    if (param_2 == 0) {
      pcVar19[uVar17] = '\0';
      local_e8 = 0;
      local_b0 = (byte *)0x0;
      uStack_a8 = 0;
      local_c0 = (void *)0x0;
      local_b8 = (byte *)0x0;
      local_d0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_d8 = (void *)0x0;
      local_a0 = *(undefined2 *)param_4;
      local_9e = param_4[2];
      std::string::string(local_98,(string *)&local_80);
      local_100[0] = 0;
      if (*param_4 != '\0') {
        local_120 = (void *)0x0;
        local_128 = (char *)0x0;
        local_130 = (char *)0x0;
        FUN_007e97c0(param_1,&local_130);
        local_100[0] = FUN_007e9420(param_1[2],&local_130,auStack_f8);
        if (local_130 != (char *)0x0) {
          local_128 = local_130;
          operator_delete(local_130);
        }
        local_100[0] = local_100[0] & 1;
      }
      FUN_007e68d0(local_100,param_3);
      if ((param_5 & 1) != 0) {
        local_130 = (char *)((ulong)&local_80 | 1);
        uVar16 = (uint)((byte)local_80._0_1_ >> 1);
        if ((local_80 & 1) != 0) {
          uVar16 = (uint)local_78;
          local_130 = local_70;
        }
        local_128 = (char *)CONCAT44(local_128._4_4_,uVar16);
        pbVar6 = (byte *)*param_1;
        local_160 = *(byte **)(pbVar6 + 0x10);
        if ((*pbVar6 & 1) == 0) {
          local_160 = pbVar6 + 1;
        }
        local_188 = 0xffffffff;
        local_1b8 = 0xffffffff;
        local_1e8 = 0xffffffff;
        local_218 = 0xffffffff;
        local_248 = 0xffffffff;
        local_278 = 0xffffffff;
        local_2a8 = 0xffffffff;
        local_2d8 = 0xffffffff;
        local_190 = (char *)0x0;
        local_1c0 = 0;
        local_1f0 = 0;
        local_220 = 0;
        local_250 = 0;
        local_280 = 0;
        local_2b0 = 0;
        local_2e0 = 0;
        local_158 = (uint)(*pbVar6 >> 1);
        if ((*pbVar6 & 1) != 0) {
          local_158 = (uint)*(undefined8 *)(pbVar6 + 8);
        }
        FUN_00863060(param_3,"$0message $1",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                     &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
      }
      std::string::append((char *)param_3);
      FUN_007e6a20(1,param_1[4],param_3);
      local_2f0 = (__tree_node_base *)0x0;
      local_2e8 = 0;
      iVar5 = *(int *)((long)param_1 + 0x2c);
      local_2f8 = (__tree_node_base *)&local_2f0;
      if (0 < iVar5) {
        lVar20 = 0;
LAB_007e7320:
        do {
          if (*(int *)(param_1[6] + lVar20 * 0x90 + 0x3c) == 10) {
            uVar17 = *(ulong *)(param_1[6] + lVar20 * 0x90 + 0x68);
            p_Var15 = (__tree_node_base *)&local_2f0;
            if (local_2f0 == (__tree_node_base *)0x0) {
              p_Var21 = (__tree_node_base *)&local_2f0;
            }
            else {
              uVar8 = *(ulong *)(local_2f0 + 0x20);
              p_Var21 = local_2f0;
              while( true ) {
                while (uVar17 < uVar8) {
                  p_Var9 = *(__tree_node_base **)p_Var21;
                  p_Var15 = p_Var21;
                  if (p_Var9 == (__tree_node_base *)0x0) {
                    p_Var9 = *(__tree_node_base **)p_Var21;
                    goto joined_r0x007e73a0;
                  }
                  p_Var21 = p_Var9;
                  uVar8 = *(ulong *)(p_Var9 + 0x20);
                }
                if (uVar17 <= uVar8) break;
                p_Var15 = p_Var21 + 8;
                p_Var9 = *(__tree_node_base **)p_Var15;
                if (p_Var9 == (__tree_node_base *)0x0) break;
                uVar8 = *(ulong *)(p_Var9 + 0x20);
                p_Var21 = p_Var9;
              }
            }
            p_Var9 = *(__tree_node_base **)p_Var15;
joined_r0x007e73a0:
            if (p_Var9 == (__tree_node_base *)0x0) {
              p_Var9 = operator_new(0x28);
              *(ulong *)(p_Var9 + 0x20) = uVar17;
              *(undefined8 *)p_Var9 = 0;
              *(undefined8 *)(p_Var9 + 8) = 0;
              *(__tree_node_base **)(p_Var9 + 0x10) = p_Var21;
              *(__tree_node_base **)p_Var15 = p_Var9;
              if (*(__tree_node_base **)local_2f8 != (__tree_node_base *)0x0) {
                p_Var9 = *(__tree_node_base **)p_Var15;
                local_2f8 = *(__tree_node_base **)local_2f8;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_2f0,p_Var9);
              local_2e8 = local_2e8 + 1;
              iVar5 = *(int *)((long)param_1 + 0x2c);
              lVar20 = lVar20 + 1;
              if (iVar5 <= lVar20) break;
              goto LAB_007e7320;
            }
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar5);
      }
      iVar5 = *(int *)(param_1 + 0xf);
      if (0 < iVar5) {
        lVar20 = 0;
LAB_007e7434:
        do {
          if (*(int *)(param_1[0x10] + lVar20 * 0x90 + 0x3c) == 10) {
            uVar17 = *(ulong *)(param_1[0x10] + lVar20 * 0x90 + 0x68);
            p_Var15 = (__tree_node_base *)&local_2f0;
            if (local_2f0 == (__tree_node_base *)0x0) {
              p_Var21 = (__tree_node_base *)&local_2f0;
            }
            else {
              uVar8 = *(ulong *)(local_2f0 + 0x20);
              p_Var9 = local_2f0;
              while( true ) {
                while (p_Var21 = p_Var9, uVar17 < uVar8) {
                  p_Var10 = *(__tree_node_base **)p_Var9;
                  if (p_Var10 == (__tree_node_base *)0x0) {
                    lVar11 = *(long *)p_Var9;
                    goto joined_r0x007e74f4;
                  }
                  p_Var15 = p_Var9;
                  p_Var9 = p_Var10;
                  uVar8 = *(ulong *)(p_Var10 + 0x20);
                }
                if (uVar17 <= uVar8) break;
                p_Var15 = p_Var9 + 8;
                p_Var9 = *(__tree_node_base **)p_Var15;
                if (p_Var9 == (__tree_node_base *)0x0) break;
                uVar8 = *(ulong *)(p_Var9 + 0x20);
              }
            }
            lVar11 = *(long *)p_Var15;
            p_Var9 = p_Var15;
joined_r0x007e74f4:
            if (lVar11 == 0) {
              p_Var15 = operator_new(0x28);
              *(ulong *)(p_Var15 + 0x20) = uVar17;
              *(undefined8 *)p_Var15 = 0;
              *(undefined8 *)(p_Var15 + 8) = 0;
              *(__tree_node_base **)(p_Var15 + 0x10) = p_Var21;
              *(__tree_node_base **)p_Var9 = p_Var15;
              if (*(__tree_node_base **)local_2f8 != (__tree_node_base *)0x0) {
                p_Var15 = *(__tree_node_base **)p_Var9;
                local_2f8 = *(__tree_node_base **)local_2f8;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_2f0,p_Var15);
              local_2e8 = local_2e8 + 1;
              iVar5 = *(int *)(param_1 + 0xf);
              lVar20 = lVar20 + 1;
              if (iVar5 <= lVar20) break;
              goto LAB_007e7434;
            }
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar5);
      }
      iVar5 = *(int *)(param_1 + 9);
      if (0 < iVar5) {
        lVar20 = 0;
        do {
          uVar17 = param_1[10] + lVar20 * 0xa8;
          for (p_Var15 = local_2f0; p_Var15 != (__tree_node_base *)0x0;
              p_Var15 = *(__tree_node_base **)p_Var15) {
            if (*(ulong *)(p_Var15 + 0x20) <= uVar17) {
              if (uVar17 <= *(ulong *)(p_Var15 + 0x20)) goto LAB_007e7590;
              p_Var15 = p_Var15 + 8;
            }
          }
          FUN_007e70b0(uVar17,1,param_3,param_4,1);
          iVar5 = *(int *)(param_1 + 9);
LAB_007e7590:
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar5);
      }
      if (0 < *(int *)(param_1 + 0xb)) {
        lVar11 = 0;
        lVar20 = 0;
        do {
          FUN_007e6c80(param_1[0xc] + lVar11,1,param_3,param_4);
          lVar20 = lVar20 + 1;
          lVar11 = lVar11 + 0x38;
        } while (lVar20 < *(int *)(param_1 + 0xb));
      }
      if (0 < *(int *)((long)param_1 + 0x2c)) {
        lVar11 = 0;
        lVar20 = 0;
        do {
          lVar18 = param_1[6] + lVar11;
          lVar7 = *(long *)(lVar18 + 0x58);
          if (lVar7 == 0) {
            FUN_007e8050(lVar18,1,0,param_3,param_4);
          }
          else if (lVar18 == **(long **)(lVar7 + 0x20)) {
            FUN_007e8810(lVar7,1,param_3,param_4);
          }
          lVar20 = lVar20 + 1;
          lVar11 = lVar11 + 0x90;
        } while (lVar20 < *(int *)((long)param_1 + 0x2c));
      }
      if (0 < *(int *)(param_1 + 0xd)) {
        lVar11 = 0;
        lVar20 = 0;
        do {
          uVar16 = (uint)((byte)local_80._0_1_ >> 1);
          local_130 = (char *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            uVar16 = (uint)local_78;
            local_130 = local_70;
          }
          local_128 = (char *)CONCAT44(local_128._4_4_,uVar16);
          local_160 = (byte *)FUN_007ff7d0(*(undefined4 *)(param_1[0xe] + lVar11),auStack_154);
          sVar4 = strlen((char *)local_160);
          local_158 = (uint)sVar4;
          local_190 = (char *)FUN_007ff7d0(*(int *)(param_1[0xe] + lVar11 + 4) + -1,auStack_184);
          sVar4 = strlen(local_190);
          local_188 = (undefined4)sVar4;
          local_1c0 = 0;
          local_1b8 = 0xffffffff;
          local_1f0 = 0;
          local_1e8 = 0xffffffff;
          local_220 = 0;
          local_218 = 0xffffffff;
          local_250 = 0;
          local_248 = 0xffffffff;
          local_280 = 0;
          local_278 = 0xffffffff;
          local_2b0 = 0;
          local_2a8 = 0xffffffff;
          local_2e0 = 0;
          local_2d8 = 0xffffffff;
          FUN_00863060(param_3,"$0  extensions $1 to $2;\n",&local_130,&local_160,&local_190,
                       &local_1c0,&local_1f0,&local_220,&local_250,&local_280,&local_2b0,&local_2e0)
          ;
          lVar20 = lVar20 + 1;
          lVar11 = lVar11 + 8;
        } while (lVar20 < *(int *)(param_1 + 0xd));
      }
      if (0 < *(int *)(param_1 + 0xf)) {
        lVar20 = 0;
        lVar18 = 0;
        lVar11 = 0x50;
        do {
          lVar7 = param_1[0x10];
          lVar14 = *(long *)(lVar7 + lVar11);
          if (lVar14 != lVar18) {
            if (lVar11 != 0x50) {
              local_190 = (char *)0x0;
              local_188 = 0xffffffff;
              local_1c0 = 0;
              bVar3 = (local_80 & 1) != 0;
              uVar16 = (uint)((byte)local_80._0_1_ >> 1);
              if (bVar3) {
                uVar16 = (uint)local_78;
              }
              local_128 = (char *)CONCAT44(local_128._4_4_,uVar16);
              local_130 = (char *)((ulong)&local_80 | 1);
              if (bVar3) {
                local_130 = local_70;
              }
              local_160 = (byte *)0x0;
              local_158 = 0xffffffff;
              local_1b8 = 0xffffffff;
              local_1f0 = 0;
              local_1e8 = 0xffffffff;
              local_220 = 0;
              local_218 = 0xffffffff;
              local_250 = 0;
              local_248 = 0xffffffff;
              local_280 = 0;
              local_278 = 0xffffffff;
              local_2b0 = 0;
              local_2a8 = 0xffffffff;
              local_2e0 = 0;
              local_2d8 = 0xffffffff;
              FUN_00863060(param_3,"$0  }\n",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                           &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
              lVar14 = *(long *)(param_1[0x10] + lVar11);
            }
            uVar16 = (uint)((byte)local_80._0_1_ >> 1);
            local_130 = (char *)((ulong)&local_80 | 1);
            if ((local_80 & 1) != 0) {
              uVar16 = (uint)local_78;
              local_130 = local_70;
            }
            local_128 = (char *)CONCAT44(local_128._4_4_,uVar16);
            pbVar6 = *(byte **)(lVar14 + 8);
            local_160 = *(byte **)(pbVar6 + 0x10);
            if ((*pbVar6 & 1) == 0) {
              local_160 = pbVar6 + 1;
            }
            local_190 = (char *)0x0;
            local_188 = 0xffffffff;
            local_1c0 = 0;
            local_1b8 = 0xffffffff;
            local_1f0 = 0;
            local_1e8 = 0xffffffff;
            local_220 = 0;
            local_218 = 0xffffffff;
            local_250 = 0;
            local_248 = 0xffffffff;
            local_280 = 0;
            local_278 = 0xffffffff;
            local_2b0 = 0;
            local_2a8 = 0xffffffff;
            local_2e0 = 0;
            local_2d8 = 0xffffffff;
            local_158 = (uint)(*pbVar6 >> 1);
            if ((*pbVar6 & 1) != 0) {
              local_158 = (uint)*(undefined8 *)(pbVar6 + 8);
            }
            FUN_00863060(param_3,"$0  extend .$1 {\n",&local_130,&local_160,&local_190,&local_1c0,
                         &local_1f0,&local_220,&local_250,&local_280,&local_2b0,&local_2e0);
            lVar7 = param_1[0x10];
            lVar18 = lVar14;
          }
          FUN_007e8050(lVar7 + lVar11 + -0x50,2,0,param_3,param_4);
          lVar20 = lVar20 + 1;
          lVar11 = lVar11 + 0x90;
        } while (lVar20 < *(int *)(param_1 + 0xf));
        if (0 < *(int *)(param_1 + 0xf)) {
          local_130 = (char *)((ulong)&local_80 | 1);
          local_160 = (byte *)0x0;
          local_158 = 0xffffffff;
          uVar16 = (uint)((byte)local_80._0_1_ >> 1);
          if ((local_80 & 1) != 0) {
            uVar16 = (uint)local_78;
            local_130 = local_70;
          }
          local_128 = (char *)CONCAT44(local_128._4_4_,uVar16);
          local_190 = (char *)0x0;
          local_188 = 0xffffffff;
          local_1c0 = 0;
          local_1b8 = 0xffffffff;
          local_1f0 = 0;
          local_1e8 = 0xffffffff;
          local_220 = 0;
          local_218 = 0xffffffff;
          local_250 = 0;
          local_248 = 0xffffffff;
          local_280 = 0;
          local_278 = 0xffffffff;
          local_2b0 = 0;
          local_2a8 = 0xffffffff;
          local_2e0 = 0;
          local_2d8 = 0xffffffff;
          FUN_00863060(param_3,"$0  }\n",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                       &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
        }
      }
      if (0 < *(int *)(param_1 + 0x11)) {
        local_160 = (byte *)0x0;
        bVar3 = (local_80 & 1) != 0;
        local_190 = (char *)0x0;
        local_130 = (char *)((ulong)&local_80 | 1);
        if (bVar3) {
          local_130 = local_70;
        }
        local_1c0 = 0;
        local_158 = 0xffffffff;
        local_188 = 0xffffffff;
        local_1b8 = 0xffffffff;
        uVar16 = (uint)((byte)local_80._0_1_ >> 1);
        if (bVar3) {
          uVar16 = (uint)local_78;
        }
        local_128 = (char *)CONCAT44(local_128._4_4_,uVar16);
        local_1f0 = 0;
        local_1e8 = 0xffffffff;
        local_220 = 0;
        local_218 = 0xffffffff;
        local_250 = 0;
        local_248 = 0xffffffff;
        local_280 = 0;
        local_278 = 0xffffffff;
        local_2b0 = 0;
        local_2a8 = 0xffffffff;
        local_2e0 = 0;
        local_2d8 = 0xffffffff;
        FUN_00863060(param_3,"$0  reserved ",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                     &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
        if (0 < *(int *)(param_1 + 0x11)) {
          lVar11 = 0;
          lVar20 = 0;
          do {
            piVar1 = (int *)(param_1[0x12] + lVar11);
            iVar5 = *piVar1;
            if (piVar1[1] == iVar5 + 1) {
              local_130 = (char *)FUN_007ff7d0(iVar5,(long)&local_128 + 4);
              sVar4 = strlen(local_130);
              local_160 = (byte *)0x0;
              local_128 = (char *)CONCAT44(local_128._4_4_,(int)sVar4);
              local_158 = 0xffffffff;
              pcVar19 = "$0, ";
            }
            else {
              local_130 = (char *)FUN_007ff7d0(iVar5,(long)&local_128 + 4);
              sVar4 = strlen(local_130);
              local_128 = (char *)CONCAT44(local_128._4_4_,(int)sVar4);
              local_160 = (byte *)FUN_007ff7d0(piVar1[1] + -1,auStack_154);
              sVar4 = strlen((char *)local_160);
              local_158 = (uint)sVar4;
              pcVar19 = "$0 to $1, ";
            }
            local_188 = 0xffffffff;
            local_190 = (char *)0x0;
            local_1c0 = 0;
            local_1b8 = 0xffffffff;
            local_1f0 = 0;
            local_1e8 = 0xffffffff;
            local_220 = 0;
            local_218 = 0xffffffff;
            local_250 = 0;
            local_248 = 0xffffffff;
            local_280 = 0;
            local_278 = 0xffffffff;
            local_2b0 = 0;
            local_2a8 = 0xffffffff;
            local_2e0 = 0;
            local_2d8 = 0xffffffff;
            FUN_00863060(param_3,pcVar19,&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                         &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
            lVar20 = lVar20 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar20 < *(int *)(param_1 + 0x11));
        }
        if ((*param_3 & 1) == 0) {
          uVar17 = (ulong)(*param_3 >> 1);
        }
        else {
          uVar17 = *(ulong *)(param_3 + 8);
        }
        std::string::replace((ulong)param_3,uVar17 - 2,(char *)0x2);
      }
      if (*(int *)(param_1 + 0x13) < 1) {
        pcVar19 = (char *)((ulong)&local_80 | 1);
      }
      else {
        pcVar19 = (char *)((ulong)&local_80 | 1);
        local_160 = (byte *)0x0;
        local_190 = (char *)0x0;
        uVar17 = local_80 >> 1 & 0x7f;
        local_130 = pcVar19;
        if ((local_80 & 1) != 0) {
          uVar17 = local_78;
          local_130 = local_70;
        }
        local_1c0 = 0;
        local_158 = 0xffffffff;
        local_188 = 0xffffffff;
        local_1b8 = 0xffffffff;
        local_128 = (char *)CONCAT44(local_128._4_4_,(int)uVar17);
        local_1f0 = 0;
        local_1e8 = 0xffffffff;
        local_220 = 0;
        local_218 = 0xffffffff;
        local_250 = 0;
        local_248 = 0xffffffff;
        local_280 = 0;
        local_278 = 0xffffffff;
        local_2b0 = 0;
        local_2a8 = 0xffffffff;
        local_2e0 = 0;
        local_2d8 = 0xffffffff;
        FUN_00863060(param_3,"$0  reserved ",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                     &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
        if (0 < *(int *)(param_1 + 0x13)) {
          lVar20 = 0;
          do {
            FUN_007ff6d0(local_310,*(undefined8 *)(param_1[0x14] + lVar20 * 8));
            local_190 = (char *)0x0;
            local_188 = 0xffffffff;
            local_1c0 = 0;
            bVar3 = (local_310[0] & 1) != 0;
            local_1b8 = 0xffffffff;
            uVar16 = (uint)(local_310[0] >> 1);
            if (bVar3) {
              uVar16 = local_308;
            }
            local_128 = (char *)CONCAT44(local_128._4_4_,uVar16);
            local_1f0 = 0;
            local_1e8 = 0xffffffff;
            local_220 = 0;
            local_218 = 0xffffffff;
            local_130 = (char *)((ulong)local_310 | 1);
            if (bVar3) {
              local_130 = local_300;
            }
            local_160 = (byte *)0x0;
            local_158 = 0xffffffff;
            local_278 = 0xffffffff;
            local_2b0 = 0;
            local_2a8 = 0xffffffff;
            local_2e0 = 0;
            local_250 = 0;
            local_248 = 0xffffffff;
            local_280 = 0;
            local_2d8 = 0xffffffff;
            FUN_00863060(param_3,"\"$0\", ",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                         &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
            if ((local_310[0] & 1) != 0) {
              operator_delete(local_300);
            }
            lVar20 = lVar20 + 1;
          } while (lVar20 < *(int *)(param_1 + 0x13));
        }
        if ((*param_3 & 1) == 0) {
          uVar17 = (ulong)(*param_3 >> 1);
        }
        else {
          uVar17 = *(ulong *)(param_3 + 8);
        }
        std::string::replace((ulong)param_3,uVar17 - 2,(char *)0x2);
      }
      local_160 = (byte *)0x0;
      uVar16 = (uint)((byte)local_80._0_1_ >> 1);
      local_130 = pcVar19;
      if ((local_80 & 1) != 0) {
        uVar16 = (uint)local_78;
        local_130 = local_70;
      }
      local_128 = (char *)CONCAT44(local_128._4_4_,uVar16);
      local_158 = 0xffffffff;
      local_188 = 0xffffffff;
      local_1b8 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_218 = 0xffffffff;
      local_248 = 0xffffffff;
      local_278 = 0xffffffff;
      local_2a8 = 0xffffffff;
      local_2d8 = 0xffffffff;
      local_190 = (char *)0x0;
      local_1c0 = 0;
      local_1f0 = 0;
      local_220 = 0;
      local_250 = 0;
      local_280 = 0;
      local_2b0 = 0;
      local_2e0 = 0;
      FUN_00863060(param_3,&DAT_01cfd0d8,&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                   &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
      if (local_100[0] != 0) {
        uVar17 = local_d0 >> 1 & 0x7f;
        if ((local_d0 & 1) != 0) {
          uVar17 = local_c8;
        }
        if (uVar17 != 0) {
          FUN_007f7ff0(&local_130,local_100,&local_d0);
          pvVar2 = (void *)((ulong)&local_130 | 1);
          if (((ulong)local_130 & 1) != 0) {
            pvVar2 = local_120;
          }
          std::string::append((char *)param_3,(ulong)pvVar2);
          if (((ulong)local_130 & 1) != 0) {
            operator_delete(local_120);
          }
        }
      }
      FUN_007f8750(&local_2f8,local_2f0);
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      pbVar6 = local_b8;
      if (local_b8 != (byte *)0x0) {
        if (local_b0 != local_b8) {
          pbVar13 = local_b0;
          do {
            pbVar12 = pbVar13 + -0x18;
            if ((*pbVar12 & 1) != 0) {
              operator_delete(*(void **)(pbVar13 + -8));
            }
            pbVar13 = pbVar12;
          } while (pbVar6 != pbVar12);
        }
        local_b0 = pbVar6;
        operator_delete(local_b8);
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_80 & 1) == 0) {
        return;
      }
      operator_delete(local_70);
      return;
    }
  }
  else {
    uVar8 = uVar17 + 0x10 & 0xfffffffffffffff0;
    pcVar19 = operator_new(uVar8);
    local_80 = uVar8 | 1;
    local_78 = uVar17;
    local_70 = pcVar19;
  }
                    /* WARNING: Subroutine does not return */
  memset(pcVar19,0x20,uVar17);
}


