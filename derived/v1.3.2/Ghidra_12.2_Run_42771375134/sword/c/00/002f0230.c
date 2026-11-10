/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f0230; name: FUN_002f0230
 */


/* WARNING: Removing unreachable block (ram,0x002f0700) */

float FUN_002f0230(float param_1,float param_2,long param_3,long *param_4,long param_5,long param_6,
                  long param_7,long param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  float local_228;
  float fStack_224;
  float local_220;
  float local_21c;
  float fStack_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  undefined **local_1e8;
  undefined1 *puStack_1e0;
  undefined1 local_1d8 [256];
  undefined1 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  uint local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined8 local_b0;
  long lStack_a8;
  
  lVar6 = *param_4;
  local_b0 = *(undefined8 *)(lVar6 + 8);
  lStack_a8 = lVar6;
  fabsf(*(float *)(lVar6 + 0x14));
  fabsf(*(float *)(lVar6 + 0x18));
  local_bc = 1.0 / *(float *)(lVar6 + 0x10);
  local_c0 = 1.0 / *(float *)(lVar6 + 0x14);
  local_c8 = 0;
  local_b8 = 1.0 / *(float *)(lVar6 + 0x18);
  local_c4 = 0x40;
  local_d8 = 1;
  puStack_1e0 = local_1d8;
  local_1e8 = &PTR_LAB_025e5c48;
  fVar31 = *(float *)(param_5 + 0x14);
  fVar34 = *(float *)(param_7 + 0x14);
  fVar16 = *(float *)(param_5 + 0x10) - *(float *)(param_7 + 0x10);
  fVar7 = *(float *)(param_5 + 0x18);
  fVar8 = *(float *)(param_7 + 0x18);
  fVar23 = *(float *)(param_6 + 0x14);
  fVar33 = *(float *)(param_8 + 0x14);
  fVar9 = *(float *)(param_6 + 0x10) - *(float *)(param_8 + 0x10);
  fVar10 = fVar16 - fVar9;
  fVar35 = *(float *)(param_6 + 0x18);
  fVar26 = *(float *)(param_8 + 0x18);
  fVar28 = fVar10 * 0.5;
  local_d0 = puStack_1e0;
                    /* try { // try from 002f0338 to 002f0387 has its CatchHandler @ 002f09fc */
  fVar11 = fabsf(fVar28);
  fVar31 = fVar31 - fVar34;
  fVar23 = fVar23 - fVar33;
  fVar33 = fVar31 - fVar23;
  fVar32 = fVar33 * 0.5;
  fVar34 = fabsf(fVar32);
  fVar7 = fVar7 - fVar8;
  fVar35 = fVar35 - fVar26;
  fVar36 = fVar7 - fVar35;
  fVar26 = fVar36 * 0.5;
  fVar8 = fabsf(fVar26);
  local_1f0 = fVar34 + *(float *)(param_3 + 0x48) + param_1;
  fVar28 = fVar28 + *(float *)(param_3 + 0x50);
  fStack_1f4 = fVar11 + *(float *)(param_3 + 0x44) + param_1;
  fVar26 = fVar26 + *(float *)(param_3 + 0x58);
  fVar32 = fVar32 + *(float *)(param_3 + 0x54);
  param_1 = fVar8 + *(float *)(param_3 + 0x4c) + param_1;
  local_200 = fVar28 - fStack_1f4;
  fStack_1f4 = fStack_1f4 + fVar28;
  fStack_1fc = fVar32 - local_1f0;
  local_1f8 = fVar26 - param_1;
  local_1f0 = local_1f0 + fVar32;
  fStack_1ec = param_1 + fVar26;
                    /* try { // try from 002f03e0 to 002f03f7 has its CatchHandler @ 002f09ec */
  FUN_00251d90(&local_c0,param_6,&local_200,1,&local_1e8);
  puVar2 = local_d0;
  fVar11 = DAT_01d4bcb8;
  uVar4 = (ulong)local_c8;
  fVar8 = DAT_01d4c18c;
  puVar1 = local_d0;
  if (local_c8 != 0) {
    fVar26 = *(float *)(param_3 + 0x50);
    fVar17 = *(float *)(param_3 + 0x54);
    fVar18 = *(float *)(param_3 + 0x58);
    fVar28 = *(float *)(param_3 + 0x44) * DAT_01d4bcb8;
    fVar32 = *(float *)(param_3 + 0x48) * DAT_01d4bcb8;
    fVar34 = *(float *)(param_3 + 0x4c) * DAT_01d4bcb8;
    fVar9 = fVar9 - fVar16;
    fVar23 = fVar23 - fVar31;
    fVar35 = fVar35 - fVar7;
    fVar20 = fVar26 + fVar28;
    fVar21 = fVar17 + fVar32;
    fVar7 = fVar26 - fVar28;
    fVar16 = fVar17 - fVar32;
    fVar22 = fVar18 + fVar34;
    fVar31 = fVar18 - fVar34;
    uVar5 = 0;
    do {
                    /* try { // try from 002f060c to 002f062b has its CatchHandler @ 002f0a70 */
      FUN_002523d0(&local_c0,(long)param_4 + 0xc,&local_228,0,0,*(undefined4 *)(puVar2 + uVar5 * 4),
                   1,1);
      fVar24 = (fStack_218 - fStack_224) * (local_208 - local_220) -
               (local_214 - local_220) * (local_20c - fStack_224);
      fVar27 = (local_214 - local_220) * (local_210 - local_228) -
               (local_21c - local_228) * (local_208 - local_220);
      fVar29 = (local_21c - local_228) * (local_20c - fStack_224) -
               (fStack_218 - fStack_224) * (local_210 - local_228);
                    /* try { // try from 002f0694 to 002f0697 has its CatchHandler @ 002f0a5c */
      fVar12 = sqrtf(fVar29 * fVar29 + fVar24 * fVar24 + fVar27 * fVar27);
      fVar24 = -fVar24;
      fVar27 = -fVar27;
      fVar29 = -fVar29;
      if (0.0 < fVar12) {
        fVar12 = 1.0 / fVar12;
        fVar24 = fVar12 * fVar24;
        fVar27 = fVar12 * fVar27;
        fVar29 = fVar12 * fVar29;
      }
      if (param_2 <= fVar10 * fVar24 + fVar33 * fVar27 + fVar36 * fVar29) {
        fVar12 = local_228;
        if (DAT_01d4c6a4 < local_228) {
          fVar12 = DAT_01d4c6a4;
        }
        fVar29 = fStack_224;
        if (DAT_01d4c6a4 < fStack_224) {
          fVar29 = DAT_01d4c6a4;
        }
        fVar24 = local_228;
        if (local_228 <= DAT_01d4c150) {
          fVar24 = DAT_01d4c150;
        }
        fVar27 = fStack_224;
        if (fStack_224 <= DAT_01d4c150) {
          fVar27 = DAT_01d4c150;
        }
        fVar14 = local_220;
        if (local_220 <= DAT_01d4c150) {
          fVar14 = DAT_01d4c150;
        }
        if (local_21c <= fVar12) {
          fVar12 = local_21c;
        }
        if (fStack_218 <= fVar29) {
          fVar29 = fStack_218;
        }
        fVar19 = local_220;
        if (local_214 <= local_220) {
          fVar19 = local_214;
        }
        if (fVar24 <= local_21c) {
          fVar24 = local_21c;
        }
        if (fVar27 <= fStack_218) {
          fVar27 = fStack_218;
        }
        if (fVar14 <= local_214) {
          fVar14 = local_214;
        }
        if (local_210 <= fVar12) {
          fVar12 = local_210;
        }
        if (local_20c <= fVar29) {
          fVar29 = local_20c;
        }
        if (local_208 <= fVar19) {
          fVar19 = local_208;
        }
        if (fVar24 <= local_210) {
          fVar24 = local_210;
        }
        fVar25 = (fVar12 + fVar24) * 0.5;
        if (fVar27 <= local_20c) {
          fVar27 = local_20c;
        }
        if (fVar14 <= local_208) {
          fVar14 = local_208;
        }
                    /* try { // try from 002f079c to 002f082f has its CatchHandler @ 002f0a0c */
        fVar13 = fabsf(fVar26 - fVar25);
        fVar30 = (fVar29 + fVar27) * 0.5;
        fVar15 = (fVar19 + fVar14) * 0.5;
        fVar24 = ((fVar24 - fVar12) * 0.5 + DAT_01d4c4d4) * fVar11;
        fVar12 = ((fVar27 - fVar29) * 0.5 + DAT_01d4c4d4) * fVar11;
        fVar29 = ((fVar14 - fVar19) * 0.5 + DAT_01d4c4d4) * fVar11;
        if ((fVar28 + fVar24 < fVar13) ||
           (fVar27 = fabsf(fVar17 - fVar30), fVar32 + fVar12 < fVar27)) {
LAB_002f0844:
          fVar14 = fVar25 + fVar24;
          fVar25 = fVar25 - fVar24;
          fVar27 = DAT_01d4c18c;
          if (DAT_01d4c4d8 <= fVar9) {
            if (fVar9 <= DAT_01d4c1cc) {
              if (fVar7 <= fVar14) {
                fVar14 = 1.0;
                fVar24 = 0.0;
                if (fVar25 <= fVar20) goto LAB_002f091c;
              }
            }
            else if (fVar25 <= fVar20) {
              fVar24 = 0.0;
              if ((fVar14 < fVar7) && (fVar24 = (fVar7 - fVar14) / fVar9, fVar24 <= 0.0)) {
                fVar24 = 0.0;
              }
              if (fVar20 <= fVar25) goto LAB_002f0910;
              fVar14 = fVar20 - fVar25;
              goto LAB_002f08d8;
            }
          }
          else if (fVar7 <= fVar14) {
            fVar24 = 0.0;
            if ((fVar20 < fVar25) && (fVar24 = (fVar20 - fVar25) / fVar9, fVar24 <= 0.0)) {
              fVar24 = 0.0;
            }
            if (fVar14 <= fVar7) {
LAB_002f0910:
              fVar14 = 1.0;
              if (fVar24 <= 1.0) goto LAB_002f091c;
            }
            else {
              fVar14 = fVar7 - fVar14;
LAB_002f08d8:
              fVar14 = (float)NEON_fminnm(fVar14 / fVar9,0x3f800000);
              if (fVar24 <= fVar14) {
LAB_002f091c:
                fVar19 = fVar30 + fVar12;
                fVar30 = fVar30 - fVar12;
                fVar12 = fVar14;
                if (DAT_01d4c4d8 <= fVar23) {
                  if (fVar23 <= DAT_01d4c1cc) {
                    if ((fVar16 <= fVar19) && (fVar30 <= fVar21)) goto LAB_002f0538;
                  }
                  else if (fVar30 <= fVar21) {
                    fVar25 = fVar24;
                    if ((fVar19 < fVar16) && (fVar25 = (fVar16 - fVar19) / fVar23, fVar25 <= fVar24)
                       ) {
                      fVar25 = fVar24;
                    }
                    fVar24 = fVar25;
                    if (fVar30 < fVar21) {
                      fVar19 = fVar21 - fVar30;
                      goto LAB_002f052c;
                    }
LAB_002f0538:
                    if (fVar24 <= fVar12) {
                      fVar14 = fVar15 + fVar29;
                      fVar15 = fVar15 - fVar29;
                      if (DAT_01d4c4d8 <= fVar35) {
                        if (fVar35 <= DAT_01d4c1cc) {
                          if ((fVar31 <= fVar14) && (fVar15 <= fVar22)) goto LAB_002f05f8;
                        }
                        else if (fVar15 <= fVar22) {
                          fVar29 = fVar24;
                          if ((fVar14 < fVar31) &&
                             (fVar29 = (fVar31 - fVar14) / fVar35, fVar29 <= fVar24)) {
                            fVar29 = fVar24;
                          }
                          fVar24 = fVar29;
                          if (fVar15 < fVar22) {
                            fVar14 = fVar22 - fVar15;
                            goto LAB_002f05d0;
                          }
LAB_002f05f8:
                          if (fVar24 <= fVar12) goto LAB_002f0600;
                        }
                      }
                      else if (fVar31 <= fVar14) {
                        fVar29 = fVar24;
                        if ((fVar22 < fVar15) &&
                           (fVar29 = (fVar22 - fVar15) / fVar35, fVar29 <= fVar24)) {
                          fVar29 = fVar24;
                        }
                        fVar24 = fVar29;
                        if (fVar14 <= fVar31) goto LAB_002f05f8;
                        fVar14 = fVar31 - fVar14;
LAB_002f05d0:
                        fVar29 = fVar14 / fVar35;
                        if (fVar12 <= fVar14 / fVar35) {
                          fVar29 = fVar12;
                        }
                        if (fVar29 < fVar24) goto LAB_002f0988;
LAB_002f0600:
                        fVar27 = fVar24;
                      }
                    }
                  }
                }
                else if (fVar16 <= fVar19) {
                  fVar25 = fVar24;
                  if ((fVar21 < fVar30) && (fVar25 = (fVar21 - fVar30) / fVar23, fVar25 <= fVar24))
                  {
                    fVar25 = fVar24;
                  }
                  fVar24 = fVar25;
                  if (fVar16 < fVar19) {
                    fVar19 = fVar16 - fVar19;
LAB_002f052c:
                    fVar12 = fVar19 / fVar23;
                    if (fVar14 <= fVar19 / fVar23) {
                      fVar12 = fVar14;
                    }
                  }
                  goto LAB_002f0538;
                }
              }
            }
          }
        }
        else {
          fVar14 = fabsf(fVar18 - fVar15);
          fVar27 = 0.0;
          if (fVar34 + fVar29 < fVar14) goto LAB_002f0844;
        }
LAB_002f0988:
        if (fVar27 <= fVar8) {
          fVar8 = fVar27;
        }
      }
      uVar5 = uVar5 + 1;
      puVar1 = local_d0;
    } while (uVar5 < uVar4);
  }
  if ((((-1 < (int)local_c4) && ((local_c4 & 0x7fffffff) != 0)) && (local_1d8 != puVar1)) &&
     (puVar1 != (undefined1 *)0x0)) {
    local_d0 = puVar1;
                    /* try { // try from 002f04d0 to 002f04e3 has its CatchHandler @ 002f09e8 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar1);
  }
  return fVar8;
}


