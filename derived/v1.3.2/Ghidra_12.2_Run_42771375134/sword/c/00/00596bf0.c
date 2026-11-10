/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00596bf0; name: FUN_00596bf0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00596bf0(ulong param_1,float param_2,long param_3,long param_4,long param_5,long param_6,
            float *param_7,undefined4 param_8,float *param_9,uint param_10,byte param_11,
            byte param_12,uint param_13,uint param_14)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  float *pfVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  undefined8 *puVar21;
  uint uVar22;
  float *pfVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 in_stack_fffffffffffffab8;
  undefined3 uVar38;
  float local_504 [15];
  float local_4c8 [15];
  float local_48c [15];
  float local_450 [15];
  float afStack_414 [15];
  float local_3d8 [60];
  float local_2e8;
  undefined1 local_2e4 [4];
  undefined8 uStack_2e0;
  float local_2ac [15];
  float local_270 [15];
  float local_234 [15];
  undefined8 local_1f8;
  undefined8 local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float afStack_1bc [15];
  float afStack_180 [15];
  float afStack_144 [16];
  float afStack_104 [15];
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  
  if (*(long *)(param_3 + 0x20) == 0) {
    return 0xffffffff;
  }
  fVar35 = *param_7;
  fStack_b4 = param_7[1];
  local_b8 = fVar35;
  if (fVar35 <= 0.0) {
    local_b8 = -fVar35;
  }
  if (fStack_b4 <= 0.0) {
    fStack_b4 = -fStack_b4;
  }
  local_b0 = param_7[2];
  local_ac = param_7[3];
  if (local_b0 <= 0.0) {
    local_b0 = -local_b0;
  }
  if (local_ac <= 0.0) {
    local_ac = -local_ac;
  }
  bVar8 = false;
  if ((local_b8 == fStack_b4) && (bVar8 = false, !NAN(fStack_b4) && !NAN(local_b0))) {
    bVar8 = fStack_b4 == local_b0;
  }
  bVar9 = false;
  if ((bVar8) && (bVar9 = false, !NAN(local_b0) && !NAN(local_ac))) {
    bVar9 = local_b0 == local_ac;
  }
  if (bVar9) {
    uVar6 = true;
    fVar27 = param_9[1];
    fVar31 = local_b8;
    if (*param_9 == fVar27) goto LAB_00596cd0;
LAB_00596d34:
    local_c8 = *(undefined8 *)param_9;
    local_c0 = *(undefined8 *)(param_9 + 2);
    uVar5 = true;
  }
  else {
    fVar31 = fStack_b4;
    if (fStack_b4 <= local_b8) {
      fVar31 = local_b8;
    }
    fVar27 = local_b0;
    if (local_b0 <= fVar31) {
      fVar27 = fVar31;
    }
    fVar31 = local_ac;
    if (local_ac <= fVar27) {
      fVar31 = fVar27;
    }
    uVar6 = false;
    param_12 = 0.0 <= fVar35 | param_12;
    fVar27 = param_9[1];
    if (*param_9 != fVar27) goto LAB_00596d34;
LAB_00596cd0:
    if ((fVar27 != param_9[2]) || (param_9[2] != param_9[3])) goto LAB_00596d34;
    local_c8 = *(undefined8 *)param_9;
    local_c0 = *(undefined8 *)(param_9 + 2);
    uVar5 = uVar6 ^ 1;
    if ((float)local_c8 != 1.0) {
      param_1 = (ulong)(uint)((float)local_c8 * (float)param_1);
      local_c8 = 0x3f8000003f800000;
      local_c0 = 0x3f8000003f800000;
    }
  }
  if ((param_12 & 1) == 0) {
    lVar19 = param_4;
    do {
      lVar18 = lVar19;
      lVar19 = *(long *)(lVar18 + 0x120);
    } while (lVar19 != 0);
    if ((*(byte *)(*(long *)(lVar18 + 0xa8) + 0x5e) >> 1 & 1) != 0) {
      lVar19 = param_5;
      do {
        lVar18 = lVar19;
        lVar19 = *(long *)(lVar18 + 0x120);
      } while (lVar19 != 0);
      if ((*(byte *)(*(long *)(lVar18 + 0xa8) + 0x5e) >> 1 & 1) != 0) {
        iVar12 = 0;
        goto joined_r0x00596f58;
      }
    }
  }
  iVar12 = 1;
joined_r0x00596f58:
  if (param_2 <= 0.0) {
    uVar16 = -(int)param_2;
    if (iVar12 != 0) {
      uVar16 = ~((int)param_2 << 1);
    }
    uVar24 = 0xf;
    if ((uVar16 & 1) != 0 && (int)uVar16 < 0x1d) {
      uVar24 = uVar16;
    }
  }
  else {
    FUN_00512290(fVar31,0xf,&local_1f8,1);
    local_1f8._0_4_ = (float)local_1f8 + local_1f8._4_4_ + local_1f8._4_4_;
    fVar27 = 1.0 - (param_2 + param_2);
    bVar8 = false;
    if ((fVar27 < (float)local_1f8) && (bVar8 = false, !NAN((float)local_1f0) && !NAN(param_2))) {
      bVar8 = (float)local_1f0 < param_2;
    }
    if (bVar8) {
      uVar16 = 2;
    }
    else {
      local_1f8._0_4_ = (float)local_1f8 + (float)local_1f0 + (float)local_1f0;
      bVar8 = false;
      if ((fVar27 < (float)local_1f8) && (bVar8 = false, !NAN(local_1f0._4_4_) && !NAN(param_2))) {
        bVar8 = local_1f0._4_4_ < param_2;
      }
      if (bVar8) {
        uVar16 = 3;
      }
      else {
        local_1f8._0_4_ = (float)local_1f8 + local_1f0._4_4_ + local_1f0._4_4_;
        bVar8 = false;
        if ((fVar27 < (float)local_1f8) && (bVar8 = false, !NAN(local_1e8) && !NAN(param_2))) {
          bVar8 = local_1e8 < param_2;
        }
        if (bVar8) {
          uVar16 = 4;
        }
        else {
          local_1f8._0_4_ = (float)local_1f8 + local_1e8 + local_1e8;
          bVar8 = false;
          if ((fVar27 < (float)local_1f8) && (bVar8 = false, !NAN(local_1e4) && !NAN(param_2))) {
            bVar8 = local_1e4 < param_2;
          }
          if (bVar8) {
            uVar16 = 5;
          }
          else {
            local_1f8._0_4_ = (float)local_1f8 + local_1e4 + local_1e4;
            bVar8 = false;
            if ((fVar27 < (float)local_1f8) && (bVar8 = false, !NAN(local_1e0) && !NAN(param_2))) {
              bVar8 = local_1e0 < param_2;
            }
            if (bVar8) {
              uVar16 = 6;
            }
            else {
              local_1f8._0_4_ = (float)local_1f8 + local_1e0 + local_1e0;
              bVar8 = false;
              if ((fVar27 < (float)local_1f8) && (bVar8 = false, !NAN(local_1dc) && !NAN(param_2)))
              {
                bVar8 = local_1dc < param_2;
              }
              if (bVar8) {
                uVar16 = 7;
              }
              else {
                local_1f8._0_4_ = (float)local_1f8 + local_1dc + local_1dc;
                bVar8 = false;
                if ((fVar27 < (float)local_1f8) && (bVar8 = false, !NAN(local_1d8) && !NAN(param_2))
                   ) {
                  bVar8 = local_1d8 < param_2;
                }
                if (bVar8) {
                  uVar16 = 8;
                }
                else {
                  local_1f8._0_4_ = (float)local_1f8 + local_1d8 + local_1d8;
                  bVar8 = false;
                  if ((fVar27 < (float)local_1f8) &&
                     (bVar8 = false, !NAN(local_1d4) && !NAN(param_2))) {
                    bVar8 = local_1d4 < param_2;
                  }
                  if (bVar8) {
                    uVar16 = 9;
                  }
                  else {
                    local_1f8._0_4_ = (float)local_1f8 + local_1d4 + local_1d4;
                    bVar8 = false;
                    if ((fVar27 < (float)local_1f8) &&
                       (bVar8 = false, !NAN(local_1d0) && !NAN(param_2))) {
                      bVar8 = local_1d0 < param_2;
                    }
                    if (bVar8) {
                      uVar16 = 10;
                    }
                    else {
                      local_1f8._0_4_ = (float)local_1f8 + local_1d0 + local_1d0;
                      bVar8 = false;
                      if ((fVar27 < (float)local_1f8) &&
                         (bVar8 = false, !NAN(local_1cc) && !NAN(param_2))) {
                        bVar8 = local_1cc < param_2;
                      }
                      if (bVar8) {
                        uVar16 = 0xb;
                      }
                      else {
                        local_1f8._0_4_ = (float)local_1f8 + local_1cc + local_1cc;
                        bVar8 = false;
                        if ((fVar27 < (float)local_1f8) &&
                           (bVar8 = false, !NAN(local_1c8) && !NAN(param_2))) {
                          bVar8 = local_1c8 < param_2;
                        }
                        if (bVar8) {
                          uVar16 = 0xc;
                        }
                        else {
                          local_1f8._0_4_ = (float)local_1f8 + local_1c8 + local_1c8;
                          bVar8 = false;
                          if ((fVar27 < (float)local_1f8) &&
                             (bVar8 = false, !NAN(local_1c4) && !NAN(param_2))) {
                            bVar8 = local_1c4 < param_2;
                          }
                          if (bVar8) {
                            uVar16 = 0xd;
                          }
                          else {
                            local_1f8._0_4_ = (float)local_1f8 + local_1c4 + local_1c4;
                            bVar8 = false;
                            bVar9 = true;
                            bVar10 = false;
                            if (local_1c0 < param_2) {
                              bVar8 = false;
                              bVar9 = false;
                              bVar10 = true;
                              if (!NAN((float)local_1f8) && !NAN(fVar27)) {
                                bVar8 = (float)local_1f8 < fVar27;
                                bVar9 = (float)local_1f8 == fVar27;
                                bVar10 = false;
                              }
                            }
                            uVar16 = 0xe;
                            if (bVar9 || bVar8 != bVar10) {
                              uVar16 = 0xf;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar24 = uVar16 * 2 - 1;
    if (iVar12 == 0) {
      uVar24 = uVar16 | 1;
    }
    if (0xe < (int)uVar24) {
      uVar24 = 0xf;
    }
  }
  uVar38 = (undefined3)((uint)in_stack_fffffffffffffab8 >> 8);
  if (uVar16 == 6) {
    if (0.0 <= fVar35) {
      local_1f8 = CONCAT44(fStack_b4,local_b8);
      local_1f0 = CONCAT44(local_ac,local_b0);
    }
    else {
      local_1f8 = CONCAT44(-fStack_b4,-local_b8);
      local_1f0 = CONCAT44(-local_ac,-local_b0);
    }
    uVar14 = FUN_005960d0(param_1,0xc0c00000,param_3,param_4,param_5,param_6,&local_1f8,param_8,
                          &local_c8,param_10 & 1,param_11 & 1,CONCAT31(uVar38,param_12) & 0xffffff01
                          ,param_13,param_14);
    return uVar14;
  }
  if (uVar16 == 4) {
    if (0.0 <= fVar35) {
      local_1f8 = CONCAT44(fStack_b4,local_b8);
      local_1f0 = CONCAT44(local_ac,local_b0);
    }
    else {
      local_1f8 = CONCAT44(-fStack_b4,-local_b8);
      local_1f0 = CONCAT44(-local_ac,-local_b0);
    }
    uVar14 = FUN_005950f0(param_1,0xc0800000,param_3,param_4,param_5,param_6,&local_1f8,param_8,
                          &local_c8,param_10 & 1,param_11 & 1,CONCAT31(uVar38,param_12) & 0xffffff01
                          ,param_13,param_14);
    return uVar14;
  }
  if (uVar16 == 2) {
    if (((param_12 & 1) == 0) &&
       (*(long *)(param_4 + (long)*(int *)(param_4 + 0xa0) * 8 + 0xb8) != *(long *)(param_6 + 0xb0))
       ) {
      if (0.0 <= fVar35) {
        local_1f8 = CONCAT44(fStack_b4,local_b8);
        local_1f0 = CONCAT44(local_ac,local_b0);
      }
      else {
        local_1f8 = CONCAT44(-fStack_b4,-local_b8);
        local_1f0 = CONCAT44(-local_ac,-local_b0);
      }
      uVar14 = FUN_00586b30(param_1,param_3,param_4,param_6,&local_1f8,param_8,&local_c8,
                            param_10 & 1,param_11 & 1,0,param_13,param_14);
      return uVar14;
    }
    if (0.0 <= fVar35) {
      local_1f8 = CONCAT44(fStack_b4,local_b8);
      local_1f0 = CONCAT44(local_ac,local_b0);
    }
    else {
      local_1f8 = CONCAT44(-fStack_b4,-local_b8);
      local_1f0 = CONCAT44(-local_ac,-local_b0);
    }
    uVar14 = FUN_00594320(param_1,0xc0000000,param_3,param_4,param_5,param_6,&local_1f8,param_8,
                          &local_c8,param_10 & 1,param_11 & 1,CONCAT31(uVar38,param_12) & 0xffffff01
                          ,param_13,param_14);
    return uVar14;
  }
  if ((param_11 & 1) != 0) {
    (**(code **)(**(long **)(param_3 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_3 + 0x20) + 0x140))(*(long **)(param_3 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_3 + 0x20) + 0x150))(*(long **)(param_3 + 0x20),0);
  }
  lVar19 = param_4;
  do {
    lVar18 = lVar19;
    lVar19 = *(long *)(lVar18 + 0x120);
  } while (lVar19 != 0);
  (**(code **)(**(long **)(lVar18 + 0xa8) + 0x88))();
  lVar19 = param_5;
  do {
    lVar18 = lVar19;
    lVar19 = *(long *)(lVar18 + 0x120);
  } while (lVar19 != 0);
  plVar13 = *(long **)(lVar18 + 0xa8);
  (**(code **)(*plVar13 + 0x88))(plVar13,iVar12);
  uVar16 = param_13;
  if (param_13 == 0) {
    uVar16 = *(uint *)(param_4 + 0x54);
  }
  uVar22 = param_14;
  if (param_14 == 0) {
    uVar22 = *(uint *)(param_4 + 0x58);
  }
  fVar27 = *(float *)(param_4 + 0x88);
  fVar36 = *(float *)(param_4 + 0x8c);
  fVar35 = *(float *)(param_4 + 0x90);
  fVar37 = *(float *)(param_4 + 0x94);
  uVar25 = param_13;
  if (param_13 == 0) {
    uVar25 = *(uint *)(param_5 + 0x54);
  }
  uVar26 = param_14;
  if (param_14 == 0) {
    uVar26 = *(uint *)(param_5 + 0x58);
  }
  uVar4 = *(undefined4 *)(*(long *)(param_4 + 0x80) + 8);
  if (iVar12 == 0) {
    if ((bool)uVar6) {
      FUN_00514290(fVar31,0x3f800000,uVar4,afStack_104,&local_1f8,param_10 & 1);
    }
    else {
      uVar3 = param_10 & 1;
      FUN_00514290(local_b8,0x3f800000,uVar4,&local_2e8,&local_1f8,uVar3);
      FUN_00514290(fStack_b4,0x3f800000,uVar4,local_2ac,afStack_1bc,uVar3);
      pfVar15 = local_270;
      FUN_00514290(local_b0,0x3f800000,uVar4,pfVar15,afStack_180,uVar3);
      FUN_00514290(local_ac,0x3f800000,uVar4,local_234,afStack_144,uVar3);
      if (0 < (int)uVar24) {
        uVar17 = (ulong)uVar24;
        pfVar20 = afStack_104;
        do {
          pfVar1 = pfVar15 + -0x1e;
          pfVar2 = pfVar15 + -0xf;
          fVar28 = *pfVar15;
          pfVar23 = pfVar15 + 0xf;
          pfVar15 = pfVar15 + 1;
          uVar17 = uVar17 - 1;
          *pfVar20 = (*pfVar1 + 0.0 + *pfVar2 + fVar28 + *pfVar23) * 0.25;
          pfVar20 = pfVar20 + 1;
        } while (uVar17 != 0);
      }
    }
  }
  else {
    if ((bool)uVar6) {
      pfVar15 = (float *)&local_1f8;
      fVar28 = fVar31;
    }
    else {
      uVar3 = param_10 & 1;
      FUN_005150e0(local_b8,0x3f800000,uVar4,afStack_104,&local_1f8,uVar3);
      FUN_005150e0(fStack_b4,0x3f800000,uVar4,afStack_104,afStack_1bc,uVar3);
      FUN_005150e0(local_b0,0x3f800000,uVar4,afStack_104,afStack_180,uVar3);
      pfVar15 = afStack_144;
      fVar28 = local_ac;
    }
    FUN_005150e0(fVar28,0x3f800000,uVar4,afStack_104,pfVar15,param_10 & 1);
  }
  fVar28 = SQRT((float)param_1);
  if (NAN(fVar28)) {
    fVar28 = sqrtf((float)param_1);
  }
  if (0 < (int)uVar24) {
    uVar17 = (ulong)uVar24;
    if ((bool)uVar5) {
      pfVar15 = afStack_180;
      puVar21 = &uStack_2e0;
      pfVar20 = local_3d8 + 2;
      pfVar23 = afStack_104;
      do {
        fVar29 = fVar28 * pfVar15[-0x1e];
        pfVar20[-2] = fVar29;
        if ((bool)uVar6) {
          pfVar20[-1] = fVar29;
          *pfVar20 = fVar29;
        }
        else {
          fVar30 = *pfVar15;
          fVar29 = pfVar15[0xf];
          pfVar20[-1] = fVar28 * pfVar15[-0xf];
          *pfVar20 = fVar28 * fVar30;
          fVar29 = fVar28 * fVar29;
        }
        pfVar20[1] = fVar29;
        fVar29 = *pfVar23;
        *(undefined8 *)((long)puVar21 + -4) = 0;
        uVar17 = uVar17 - 1;
        pfVar15 = pfVar15 + 1;
        *(float *)(puVar21 + -1) = fVar29;
        *(undefined4 *)((long)puVar21 + 4) = 0;
        puVar21 = puVar21 + 2;
        pfVar20 = pfVar20 + 4;
        pfVar23 = pfVar23 + 1;
      } while (uVar17 != 0);
    }
    else {
      puVar21 = &uStack_2e0;
      pfVar15 = afStack_414;
      pfVar20 = afStack_104;
      pfVar23 = (float *)&local_1f8;
      do {
        *pfVar15 = fVar28 * *pfVar23;
        fVar29 = *pfVar20;
        *(undefined8 *)((long)puVar21 + -4) = 0;
        *(float *)(puVar21 + -1) = fVar29;
        *(undefined4 *)((long)puVar21 + 4) = 0;
        uVar17 = uVar17 - 1;
        puVar21 = puVar21 + 2;
        pfVar15 = pfVar15 + 1;
        pfVar20 = pfVar20 + 1;
        pfVar23 = pfVar23 + 1;
      } while (uVar17 != 0);
    }
  }
  uVar14 = FUN_0059d300(param_5,0,0,1,0,0);
  if ((int)uVar14 < 0) {
    return uVar14;
  }
  fVar35 = fVar27 * (float)uVar16 + fVar35;
  fVar37 = fVar36 * (float)uVar22 + fVar37;
  FUN_0059d000(0,0);
  if ((bool)uVar5) {
    lVar19 = param_4;
    do {
      lVar18 = lVar19;
      lVar19 = *(long *)(lVar18 + 0x120);
    } while (lVar19 != 0);
    uVar14 = FUN_00575a10(0,0,(float)uVar25,(float)uVar26,0,0,fVar35,fVar37,param_3,uVar24,
                          &local_2e8,local_3d8,*(undefined8 *)(lVar18 + 0xa8),0,0);
    iVar11 = (int)uVar14;
  }
  else {
    lVar19 = param_4;
    do {
      lVar18 = lVar19;
      lVar19 = *(long *)(lVar18 + 0x120);
    } while (lVar19 != 0);
    uVar14 = FUN_00575e30(0,0,(float)uVar25,(float)uVar26,0,0,fVar35,fVar37,param_3,uVar24,
                          &local_2e8,afStack_414,*(undefined8 *)(lVar18 + 0xa8),0,0);
    iVar11 = (int)uVar14;
  }
  if (iVar11 < 0) {
    return uVar14;
  }
  uVar16 = param_13;
  if (param_13 == 0) {
    uVar16 = *(uint *)(param_5 + 0x54);
  }
  if (param_14 == 0) {
    fVar35 = *(float *)(param_5 + 0x88);
    fVar27 = *(float *)(param_5 + 0x8c);
    fVar37 = *(float *)(param_5 + 0x90);
    fVar36 = *(float *)(param_5 + 0x94);
    uVar22 = *(uint *)(param_5 + 0x58);
  }
  else {
    fVar35 = *(float *)(param_5 + 0x88);
    fVar27 = *(float *)(param_5 + 0x8c);
    fVar37 = *(float *)(param_5 + 0x90);
    fVar36 = *(float *)(param_5 + 0x94);
    uVar22 = param_14;
  }
  if (param_13 == 0) {
    param_13 = *(uint *)(param_6 + 0x54);
  }
  if (param_14 == 0) {
    param_14 = *(uint *)(param_6 + 0x58);
    uVar4 = *(undefined4 *)(*(long *)(param_5 + 0x80) + 0xc);
  }
  else {
    uVar4 = *(undefined4 *)(*(long *)(param_5 + 0x80) + 0xc);
  }
  if (iVar12 == 0) {
    if ((bool)uVar6) {
      FUN_00514290(fVar31,0x3f800000,uVar4,afStack_104,&local_1f8,param_10 & 1);
    }
    else {
      param_10 = param_10 & 1;
      FUN_00514290(local_b8,0x3f800000,uVar4,local_504,&local_1f8,param_10);
      FUN_00514290(fStack_b4,0x3f800000,uVar4,local_4c8,afStack_1bc,param_10);
      pfVar15 = local_48c;
      FUN_00514290(local_b0,0x3f800000,uVar4,pfVar15,afStack_180,param_10);
      FUN_00514290(local_ac,0x3f800000,uVar4,local_450,afStack_144,param_10);
      if (0 < (int)uVar24) {
        uVar17 = (ulong)uVar24;
        pfVar20 = afStack_104;
        do {
          pfVar1 = pfVar15 + -0x1e;
          pfVar2 = pfVar15 + -0xf;
          fVar31 = *pfVar15;
          pfVar23 = pfVar15 + 0xf;
          pfVar15 = pfVar15 + 1;
          uVar17 = uVar17 - 1;
          *pfVar20 = (*pfVar1 + 0.0 + *pfVar2 + fVar31 + *pfVar23) * 0.25;
          pfVar20 = pfVar20 + 1;
        } while (uVar17 != 0);
      }
    }
  }
  else if ((bool)uVar6) {
    FUN_005150e0(fVar31,0x3f800000,uVar4,afStack_104,&local_1f8,param_10 & 1);
  }
  else {
    param_10 = param_10 & 1;
    FUN_005150e0(local_b8,0x3f800000,uVar4,afStack_104,&local_1f8,param_10);
    FUN_005150e0(fStack_b4,0x3f800000,uVar4,afStack_104,afStack_1bc,param_10);
    FUN_005150e0(local_b0,0x3f800000,uVar4,afStack_104,afStack_180,param_10);
    FUN_005150e0(local_ac,0x3f800000,uVar4,afStack_104,afStack_144,param_10);
  }
  if (0 < (int)uVar24) {
    uVar17 = (ulong)uVar24;
    if ((bool)uVar5) {
      fVar31 = (float)local_c8;
      local_c8._4_4_ = (float)((ulong)local_c8 >> 0x20);
      fVar29 = local_c8._4_4_;
      fVar30 = (float)local_c0;
      local_c0._4_4_ = (float)((ulong)local_c0 >> 0x20);
      fVar7 = local_c0._4_4_;
      pfVar15 = afStack_180;
      pfVar20 = local_3d8 + 2;
      puVar21 = &uStack_2e0;
      pfVar23 = afStack_104;
      do {
        if ((bool)uVar6) {
          fVar32 = fVar28 * pfVar15[-0x1e];
          pfVar20[-2] = fVar32 * fVar31;
          pfVar20[-1] = fVar32 * fVar29;
          *pfVar20 = fVar32 * fVar30;
          pfVar20[1] = fVar32 * fVar7;
        }
        else {
          fVar32 = pfVar15[-0xf];
          fVar33 = *pfVar15;
          fVar34 = pfVar15[0xf];
          pfVar20[-2] = fVar28 * fVar31 * pfVar15[-0x1e];
          pfVar20[-1] = fVar28 * fVar29 * fVar32;
          *pfVar20 = fVar28 * fVar30 * fVar33;
          pfVar20[1] = fVar28 * fVar7 * fVar34;
        }
        fVar32 = *pfVar23;
        uVar17 = uVar17 - 1;
        pfVar15 = pfVar15 + 1;
        *(undefined4 *)(puVar21 + -1) = 0;
        *(float *)((long)puVar21 + -4) = fVar32;
        pfVar20 = pfVar20 + 4;
        *puVar21 = 0;
        puVar21 = puVar21 + 2;
        pfVar23 = pfVar23 + 1;
      } while (uVar17 != 0);
    }
    else {
      puVar21 = &uStack_2e0;
      pfVar15 = afStack_414;
      pfVar20 = afStack_104;
      pfVar23 = (float *)&local_1f8;
      do {
        *pfVar15 = fVar28 * *pfVar23;
        fVar31 = *pfVar20;
        *(undefined4 *)(puVar21 + -1) = 0;
        *(float *)((long)puVar21 + -4) = fVar31;
        *puVar21 = 0;
        uVar17 = uVar17 - 1;
        puVar21 = puVar21 + 2;
        pfVar15 = pfVar15 + 1;
        pfVar20 = pfVar20 + 1;
        pfVar23 = pfVar23 + 1;
      } while (uVar17 != 0);
    }
  }
  uVar14 = FUN_0059d300(param_6,0,0,1,0,0);
  if (-1 < (int)uVar14) {
    fVar37 = fVar35 * (float)uVar16 + fVar37;
    fVar36 = fVar27 * (float)uVar22 + fVar36;
    FUN_0059d000(0,0);
    if ((bool)uVar5) {
      lVar19 = param_5;
      do {
        lVar18 = lVar19;
        lVar19 = *(long *)(lVar18 + 0x120);
      } while (lVar19 != 0);
      uVar14 = FUN_00575a10(0,0,(float)param_13,(float)param_14,0,0,fVar37,fVar36,param_3,uVar24,
                            &local_2e8,local_3d8,*(undefined8 *)(lVar18 + 0xa8),param_8,0);
      iVar12 = (int)uVar14;
    }
    else {
      lVar19 = param_5;
      do {
        lVar18 = lVar19;
        lVar19 = *(long *)(lVar18 + 0x120);
      } while (lVar19 != 0);
      uVar14 = FUN_00575e30(0,0,(float)param_13,(float)param_14,0,0,fVar37,fVar36,param_3,uVar24,
                            &local_2e8,afStack_414,*(undefined8 *)(lVar18 + 0xa8),param_8,0);
      iVar12 = (int)uVar14;
    }
    if (-1 < iVar12) {
      do {
        lVar19 = param_4;
        param_4 = *(long *)(lVar19 + 0x120);
      } while (param_4 != 0);
      plVar13 = *(long **)(lVar19 + 0xa8);
      (**(code **)(*plVar13 + 0x88))(plVar13,0);
      do {
        lVar19 = param_5;
        param_5 = *(long *)(lVar19 + 0x120);
      } while (param_5 != 0);
      plVar13 = *(long **)(lVar19 + 0xa8);
      (**(code **)(*plVar13 + 0x88))(plVar13,0);
      uVar14 = 0;
    }
  }
  return uVar14;
}


