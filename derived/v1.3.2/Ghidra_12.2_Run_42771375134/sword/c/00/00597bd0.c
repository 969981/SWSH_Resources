/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00597bd0; name: FUN_00597bd0
 */


/* WARNING: Removing unreachable block (ram,0x005982ec) */
/* WARNING: Removing unreachable block (ram,0x005982b4) */
/* WARNING: Removing unreachable block (ram,0x0059827c) */
/* WARNING: Removing unreachable block (ram,0x00598244) */
/* WARNING: Removing unreachable block (ram,0x00598214) */
/* WARNING: Removing unreachable block (ram,0x005981e4) */
/* WARNING: Removing unreachable block (ram,0x005981cc) */
/* WARNING: Removing unreachable block (ram,0x005981fc) */
/* WARNING: Removing unreachable block (ram,0x0059822c) */
/* WARNING: Removing unreachable block (ram,0x00598260) */
/* WARNING: Removing unreachable block (ram,0x00598298) */
/* WARNING: Removing unreachable block (ram,0x005982d0) */
/* WARNING: Removing unreachable block (ram,0x00598308) */
/* WARNING: Removing unreachable block (ram,0x005981b4) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00597bd0(ulong param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,float *param_7,undefined8 param_8,float *param_9,uint param_10,
                  byte param_11,byte param_12,uint param_13,uint param_14)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float *pfVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_420;
  float afStack_41c [31];
  undefined1 local_3a0 [8];
  undefined8 uStack_398;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float afStack_1b0 [31];
  undefined4 auStack_134 [31];
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  
  if (*(long *)(param_3 + 0x20) == 0) {
    return 0xffffffff;
  }
  fVar25 = *param_7;
  fStack_b4 = param_7[1];
  local_b8 = fVar25;
  if (fVar25 <= 0.0) {
    local_b8 = -fVar25;
  }
  if (fStack_b4 <= 0.0) {
    fStack_b4 = -fStack_b4;
  }
  local_b0 = param_7[2];
  fStack_ac = param_7[3];
  if (local_b0 <= 0.0) {
    local_b0 = -local_b0;
  }
  if (fStack_ac <= 0.0) {
    fStack_ac = -fStack_ac;
  }
  fVar19 = *param_9;
  if ((((fVar19 != param_9[1]) || (param_9[1] != param_9[2])) || (param_9[2] != param_9[3])) ||
     ((local_b8 != fStack_b4 || fStack_b4 != local_b0) || local_b0 != fStack_ac)) {
    if (0.0 <= fVar25) {
      uStack_398 = CONCAT44(fStack_ac,local_b0);
      local_3a0 = (undefined1  [8])CONCAT44(fStack_b4,local_b8);
    }
    else {
      local_3a0._4_4_ = -fStack_b4;
      local_3a0._0_4_ = -local_b8;
      uStack_398 = CONCAT44(-fStack_ac,-local_b0);
    }
    param_12 = param_12 & 1;
  }
  else {
    uVar10 = (ulong)(uint)(fVar19 * (float)param_1);
    if (fVar19 == 1.0) {
      uVar10 = param_1 & 0xffffffff;
    }
    param_1 = uVar10;
    fVar19 = fStack_b4;
    fVar26 = local_b0;
    fVar24 = fStack_ac;
    fVar23 = local_b8;
    fVar4 = local_b8;
    if ((local_b8 != fStack_b4 || fStack_b4 != local_b0) || local_b0 != fStack_ac) {
      if (0.0 <= local_b8) {
        return 0xfffffffc;
      }
      fVar19 = -fStack_b4;
      fVar26 = -local_b0;
      fVar23 = fVar19;
      if (fVar19 <= local_b8) {
        fVar23 = local_b8;
      }
      fVar24 = -fStack_ac;
      fVar22 = fVar26;
      if (fVar26 <= fVar23) {
        fVar22 = fVar23;
      }
      fVar23 = -local_b8;
      fVar4 = fVar24;
      if (fVar24 <= fVar22) {
        fVar4 = fVar22;
      }
    }
    if ((param_12 & 1) != 0) {
      return 0xfffffffc;
    }
    uVar8 = (uint)param_8;
    if (((0xe < uVar8) || ((1 << (ulong)(uVar8 & 0x1f) & 0x4924U) == 0)) &&
       ((0x14 < uVar8 || ((0x109209U >> (ulong)(uVar8 & 0x1f) & 1) == 0)))) {
      if (0x14 < uVar8) {
        return 0xfffffffc;
      }
      if ((1 << (ulong)(uVar8 & 0x1f) & 0x106000U) == 0) {
        return 0xfffffffc;
      }
    }
    lVar12 = param_4;
    do {
      lVar14 = lVar12;
      lVar12 = *(long *)(lVar14 + 0x120);
    } while (lVar12 != 0);
    if ((*(byte *)(*(long *)(lVar14 + 0xa8) + 0x5e) >> 1 & 1) == 0) {
      return 0xfffffffc;
    }
    lVar12 = param_5;
    do {
      lVar14 = lVar12;
      lVar12 = *(long *)(lVar14 + 0x120);
    } while (lVar12 != 0);
    if (uVar8 != 0) {
      return 0xfffffffc;
    }
    if ((*(uint *)(*(long *)(lVar14 + 0xa8) + 0x5c) >> 0x11 & 1) == 0) {
      return 0xfffffffc;
    }
    fVar22 = (float)param_2;
    local_b8 = fVar23;
    fStack_b4 = fVar19;
    local_b0 = fVar26;
    fStack_ac = fVar24;
    if (0.0 < fVar22) {
      FUN_00512290(fVar4,0x1f,local_3a0,1);
      fVar21 = 1.0 - (fVar22 + fVar22);
      fVar20 = (float)local_3a0._0_4_ + (float)local_3a0._4_4_ + (float)local_3a0._4_4_;
      bVar5 = false;
      if ((fVar21 < fVar20) && (bVar5 = false, !NAN((float)uStack_398) && !NAN(fVar22))) {
        bVar5 = (float)uStack_398 < fVar22;
      }
      if (bVar5) {
        uVar8 = 0;
        local_420 = 3;
      }
      else {
        fVar20 = fVar20 + (float)uStack_398 + (float)uStack_398;
        bVar5 = false;
        if ((fVar21 < fVar20) && (bVar5 = false, !NAN(uStack_398._4_4_) && !NAN(fVar22))) {
          bVar5 = uStack_398._4_4_ < fVar22;
        }
        if (bVar5) {
          uVar8 = 3;
          local_420 = 3;
        }
        else {
          fVar20 = fVar20 + uStack_398._4_4_ + uStack_398._4_4_;
          bVar5 = false;
          if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_390) && !NAN(fVar22))) {
            bVar5 = local_390 < fVar22;
          }
          if (bVar5) {
            uVar8 = 0;
            local_420 = 5;
          }
          else {
            fVar20 = fVar20 + local_390 + local_390;
            bVar5 = false;
            if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_38c) && !NAN(fVar22))) {
              bVar5 = local_38c < fVar22;
            }
            if (bVar5) {
              uVar8 = 5;
              local_420 = 5;
            }
            else {
              fVar20 = fVar20 + local_38c + local_38c;
              bVar5 = false;
              if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_388) && !NAN(fVar22))) {
                bVar5 = local_388 < fVar22;
              }
              if (bVar5) {
                uVar8 = 0;
                local_420 = 7;
              }
              else {
                fVar20 = fVar20 + local_388 + local_388;
                bVar5 = false;
                if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_384) && !NAN(fVar22))) {
                  bVar5 = local_384 < fVar22;
                }
                if (bVar5) {
                  uVar8 = 7;
                  local_420 = 7;
                }
                else {
                  fVar20 = fVar20 + local_384 + local_384;
                  bVar5 = false;
                  if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_380) && !NAN(fVar22))) {
                    bVar5 = local_380 < fVar22;
                  }
                  if (bVar5) {
                    uVar8 = 0;
                    local_420 = 9;
                  }
                  else {
                    fVar20 = fVar20 + local_380 + local_380;
                    bVar5 = false;
                    if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_37c) && !NAN(fVar22))) {
                      bVar5 = local_37c < fVar22;
                    }
                    if (bVar5) {
                      uVar8 = 9;
                      local_420 = 9;
                    }
                    else {
                      fVar20 = fVar20 + local_37c + local_37c;
                      bVar5 = false;
                      if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_378) && !NAN(fVar22))) {
                        bVar5 = local_378 < fVar22;
                      }
                      if (bVar5) {
                        uVar8 = 0;
                        local_420 = 0xb;
                      }
                      else {
                        fVar20 = fVar20 + local_378 + local_378;
                        bVar5 = false;
                        if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_374) && !NAN(fVar22))) {
                          bVar5 = local_374 < fVar22;
                        }
                        if (bVar5) {
                          uVar8 = 0xb;
                          local_420 = 0xb;
                        }
                        else {
                          fVar20 = fVar20 + local_374 + local_374;
                          bVar5 = false;
                          if ((fVar21 < fVar20) && (bVar5 = false, !NAN(local_370) && !NAN(fVar22)))
                          {
                            bVar5 = local_370 < fVar22;
                          }
                          if (bVar5) {
                            uVar8 = 0;
                            local_420 = 0xd;
                          }
                          else {
                            fVar20 = fVar20 + local_370 + local_370;
                            bVar5 = false;
                            if ((fVar21 < fVar20) &&
                               (bVar5 = false, !NAN(local_36c) && !NAN(fVar22))) {
                              bVar5 = local_36c < fVar22;
                            }
                            if (bVar5) {
                              uVar8 = 0xd;
                              local_420 = 0xd;
                            }
                            else {
                              fVar20 = fVar20 + local_36c + local_36c;
                              bVar5 = false;
                              if ((fVar21 < fVar20) &&
                                 (bVar5 = false, !NAN(local_368) && !NAN(fVar22))) {
                                bVar5 = local_368 < fVar22;
                              }
                              if (bVar5) {
                                uVar8 = 0;
                                local_420 = 0xf;
                              }
                              else {
                                fVar20 = fVar20 + local_368 + local_368;
                                bVar5 = false;
                                if ((fVar21 < fVar20) &&
                                   (bVar5 = false, !NAN(local_364) && !NAN(fVar22))) {
                                  bVar5 = local_364 < fVar22;
                                }
                                if (bVar5) {
                                  uVar8 = 0xf;
                                  local_420 = 0xf;
                                }
                                else {
                                  fVar20 = fVar20 + local_364 + local_364;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_360) && !NAN(fVar22))) {
                                    bVar5 = local_360 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x11;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_360 + local_360;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_35c) && !NAN(fVar22))) {
                                    bVar5 = local_35c < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x11;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_35c + local_35c;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_358) && !NAN(fVar22))) {
                                    bVar5 = local_358 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x13;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_358 + local_358;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_354) && !NAN(fVar22))) {
                                    bVar5 = local_354 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x13;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_354 + local_354;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_350) && !NAN(fVar22))) {
                                    bVar5 = local_350 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x15;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_350 + local_350;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_34c) && !NAN(fVar22))) {
                                    bVar5 = local_34c < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x15;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_34c + local_34c;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_348) && !NAN(fVar22))) {
                                    bVar5 = local_348 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x17;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_348 + local_348;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_344) && !NAN(fVar22))) {
                                    bVar5 = local_344 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x17;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_344 + local_344;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_340) && !NAN(fVar22))) {
                                    bVar5 = local_340 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x19;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_340 + local_340;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_33c) && !NAN(fVar22))) {
                                    bVar5 = local_33c < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x19;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_33c + local_33c;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_338) && !NAN(fVar22))) {
                                    bVar5 = local_338 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x1b;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_338 + local_338;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_334) && !NAN(fVar22))) {
                                    bVar5 = local_334 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x1b;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_334 + local_334;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_330) && !NAN(fVar22))) {
                                    bVar5 = local_330 < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x1d;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_330 + local_330;
                                  bVar5 = false;
                                  if ((fVar21 < fVar20) &&
                                     (bVar5 = false, !NAN(local_32c) && !NAN(fVar22))) {
                                    bVar5 = local_32c < fVar22;
                                  }
                                  if (bVar5) {
                                    local_420 = 0x1d;
                                    goto LAB_005984b8;
                                  }
                                  fVar20 = fVar20 + local_32c + local_32c;
                                  bVar5 = false;
                                  bVar6 = true;
                                  bVar7 = false;
                                  if (local_328 < fVar22) {
                                    bVar5 = false;
                                    bVar6 = false;
                                    bVar7 = true;
                                    if (!NAN(fVar20) && !NAN(fVar21)) {
                                      bVar5 = fVar20 < fVar21;
                                      bVar6 = fVar20 == fVar21;
                                      bVar7 = false;
                                    }
                                  }
                                  uVar8 = 0x1e;
                                  if (bVar6 || bVar5 != bVar7) {
                                    uVar8 = 0x1f;
                                  }
                                  local_420 = uVar8 | 1;
                                  if (0xf < uVar8) goto LAB_005984b8;
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
      }
    }
    else {
      iVar11 = (int)fVar22;
      uVar8 = -iVar11;
      local_420 = 0x1f;
      if ((uVar8 & 1) != 0 && -0x3d < iVar11) {
        local_420 = -iVar11;
      }
      if (0xf < (int)uVar8) goto LAB_005984b8;
    }
    if ((uVar8 & 1) != 0) {
LAB_005984b8:
      if ((param_11 & 1) != 0) {
        (**(code **)(**(long **)(param_3 + 0x20) + 0x138))();
        (**(code **)(**(long **)(param_3 + 0x20) + 0x140))(*(long **)(param_3 + 0x20),0xffffffff);
        (**(code **)(**(long **)(param_3 + 0x20) + 0x150))(*(long **)(param_3 + 0x20),0);
      }
      lVar12 = param_4;
      do {
        lVar14 = lVar12;
        lVar12 = *(long *)(lVar14 + 0x120);
      } while (lVar12 != 0);
      plVar9 = *(long **)(lVar14 + 0xa8);
      (**(code **)(*plVar9 + 0x88))(plVar9,0);
      lVar12 = param_5;
      do {
        lVar14 = lVar12;
        lVar12 = *(long *)(lVar14 + 0x120);
      } while (lVar12 != 0);
      plVar9 = *(long **)(lVar14 + 0xa8);
      (**(code **)(*plVar9 + 0x88))(plVar9,0);
      uVar8 = param_13;
      if (param_13 == 0) {
        uVar8 = *(uint *)(param_4 + 0x54);
      }
      if (param_14 == 0) {
        fVar25 = *(float *)(param_4 + 0x88);
        fVar19 = *(float *)(param_4 + 0x8c);
        fVar26 = *(float *)(param_4 + 0x90);
        fVar24 = *(float *)(param_4 + 0x94);
        uVar1 = *(uint *)(param_4 + 0x58);
      }
      else {
        fVar25 = *(float *)(param_4 + 0x88);
        fVar19 = *(float *)(param_4 + 0x8c);
        fVar26 = *(float *)(param_4 + 0x90);
        fVar24 = *(float *)(param_4 + 0x94);
        uVar1 = param_14;
      }
      uVar3 = param_13;
      if (param_13 == 0) {
        uVar3 = *(uint *)(param_5 + 0x54);
      }
      uVar18 = param_14;
      if (param_14 == 0) {
        uVar18 = *(uint *)(param_5 + 0x58);
      }
      FUN_005147a0(fVar4,0x3f800000,*(undefined4 *)(*(long *)(param_4 + 0x80) + 8),auStack_134,
                   afStack_1b0,param_10 & 1);
      fVar23 = SQRT((float)param_1);
      if (NAN(fVar23)) {
        fVar23 = sqrtf((float)param_1);
      }
      if (0 < (int)local_420) {
        puVar13 = &uStack_398;
        uVar10 = (ulong)local_420;
        puVar15 = auStack_134;
        pfVar16 = afStack_41c;
        pfVar17 = afStack_1b0;
        do {
          *pfVar16 = fVar23 * *pfVar17;
          uVar2 = *puVar15;
          *(undefined8 *)((long)puVar13 + -4) = 0;
          *(undefined4 *)(puVar13 + -1) = uVar2;
          *(undefined4 *)((long)puVar13 + 4) = 0;
          uVar10 = uVar10 - 1;
          puVar13 = puVar13 + 2;
          puVar15 = puVar15 + 1;
          pfVar16 = pfVar16 + 1;
          pfVar17 = pfVar17 + 1;
        } while (uVar10 != 0);
      }
      uVar10 = FUN_0059d300(param_5,0,0,1,0,0);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      FUN_0059d000(0,0);
      lVar12 = param_4;
      do {
        lVar14 = lVar12;
        lVar12 = *(long *)(lVar14 + 0x120);
      } while (lVar12 != 0);
      FUN_00575e30(0,0,(float)uVar3,(float)uVar18,0,0,fVar25 * (float)uVar8 + fVar26,
                   fVar19 * (float)uVar1 + fVar24,param_3,local_420,local_3a0,afStack_41c,
                   *(undefined8 *)(lVar14 + 0xa8),0,0);
      uVar8 = param_13;
      if (param_13 == 0) {
        uVar8 = *(uint *)(param_5 + 0x54);
      }
      if (param_14 == 0) {
        uVar1 = *(uint *)(param_5 + 0x58);
        fVar25 = *(float *)(param_5 + 0x88);
        fVar19 = *(float *)(param_5 + 0x8c);
        fVar26 = *(float *)(param_5 + 0x90);
        fVar24 = *(float *)(param_5 + 0x94);
      }
      else {
        fVar25 = *(float *)(param_5 + 0x88);
        fVar19 = *(float *)(param_5 + 0x8c);
        fVar26 = *(float *)(param_5 + 0x90);
        fVar24 = *(float *)(param_5 + 0x94);
        uVar1 = param_14;
      }
      if (param_13 == 0) {
        param_13 = *(uint *)(param_6 + 0x54);
      }
      if (param_14 == 0) {
        param_14 = *(uint *)(param_6 + 0x58);
      }
      FUN_005147a0(fVar4,0x3f800000,*(undefined4 *)(*(long *)(param_5 + 0x80) + 0xc),auStack_134,
                   afStack_1b0,param_10 & 1);
      if (0 < (int)local_420) {
        uVar10 = (ulong)local_420;
        puVar13 = &uStack_398;
        puVar15 = auStack_134;
        pfVar16 = afStack_41c;
        pfVar17 = afStack_1b0;
        do {
          *pfVar16 = fVar23 * *pfVar17;
          uVar2 = *puVar15;
          *(undefined4 *)(puVar13 + -1) = 0;
          *(undefined4 *)((long)puVar13 + -4) = uVar2;
          *puVar13 = 0;
          uVar10 = uVar10 - 1;
          puVar13 = puVar13 + 2;
          puVar15 = puVar15 + 1;
          pfVar16 = pfVar16 + 1;
          pfVar17 = pfVar17 + 1;
        } while (uVar10 != 0);
      }
      uVar10 = FUN_0059d300(param_6,0,0,1,0,0);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      FUN_0059d000(0,0);
      lVar12 = param_5;
      do {
        lVar14 = lVar12;
        lVar12 = *(long *)(lVar14 + 0x120);
      } while (lVar12 != 0);
      uVar8 = FUN_00575e30(0,0,(float)param_13,(float)param_14,0,0,fVar25 * (float)uVar8 + fVar26,
                           fVar19 * (float)uVar1 + fVar24,param_3,local_420,local_3a0,afStack_41c,
                           *(undefined8 *)(lVar14 + 0xa8),0,0);
      do {
        lVar12 = param_4;
        param_4 = *(long *)(lVar12 + 0x120);
      } while (param_4 != 0);
      plVar9 = *(long **)(lVar12 + 0xa8);
      (**(code **)(*plVar9 + 0x88))(plVar9,0);
      do {
        lVar12 = param_5;
        param_5 = *(long *)(lVar12 + 0x120);
      } while (param_5 != 0);
      plVar9 = *(long **)(lVar12 + 0xa8);
      (**(code **)(*plVar9 + 0x88))(plVar9,0);
      return (ulong)(uVar8 & (int)uVar8 >> 0x1f);
    }
    if (0.0 <= fVar25) {
      uStack_398 = CONCAT44(fStack_ac,local_b0);
      local_3a0 = (undefined1  [8])CONCAT44(fStack_b4,local_b8);
    }
    else {
      local_3a0._4_4_ = -fVar19;
      local_3a0._0_4_ = -fVar23;
      uStack_398 = CONCAT44(-fVar24,-fVar26);
    }
    param_8 = 0;
    param_12 = 0;
  }
  uVar10 = FUN_00596bf0(param_1,param_2,param_3,param_4,param_5,param_6,local_3a0,param_8,param_9,
                        param_10 & 1,param_11 & 1,param_12,param_13,param_14);
  return uVar10;
}


