/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ebf80; name: FUN_004ebf80
 */


/* WARNING: Removing unreachable block (ram,0x004ec314) */
/* WARNING: Removing unreachable block (ram,0x004ec530) */

undefined8 FUN_004ebf80(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  float *pfVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  float *pfVar18;
  long *plVar19;
  float *pfVar20;
  uint uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  long lStack_a8;
  undefined4 local_54;
  
  puVar4 = PTR_DAT_02713640;
  if (*(uint *)(param_1 + 0x98) != 0) {
    plVar19 = *(long **)(param_1 + 0x90);
    plVar12 = plVar19 + *(uint *)(param_1 + 0x98);
    do {
      lVar17 = *plVar19;
      uVar6 = FUN_004ee0f0(lVar17,param_2);
      if ((uVar6 & 1) != 0) {
        uVar14 = *(uint *)(lVar17 + 0x20);
        uVar21 = *(uint *)(lVar17 + 0x24);
        if (uVar21 <= uVar14) {
          uVar21 = uVar21 + 8;
          puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar4,(ulong)uVar21 << 3);
          if (puVar7 == (undefined8 *)0x0) goto LAB_004ec10c;
          puVar8 = *(undefined8 **)(lVar17 + 0x18);
          if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
            uVar3 = *(uint *)(lVar17 + 0x20);
            if (uVar3 != 0) {
              *puVar7 = *puVar8;
              if (uVar3 != 1) {
                uVar2 = uVar3 + 3 & 3;
                if ((ulong)uVar3 - 2 < 3) {
                  lVar11 = 1;
                }
                else {
                  lVar13 = 0;
                  do {
                    lVar11 = lVar13;
                    lVar13 = lVar11 * 8;
                    puVar7[lVar11 + 1] = *(undefined8 *)(*(long *)(lVar17 + 0x18) + lVar13 + 8);
                    puVar7[lVar11 + 2] = *(undefined8 *)(*(long *)(lVar17 + 0x18) + lVar13 + 0x10);
                    puVar7[lVar11 + 3] = *(undefined8 *)(*(long *)(lVar17 + 0x18) + lVar13 + 0x18);
                    puVar7[lVar11 + 4] = *(undefined8 *)(*(long *)(lVar17 + 0x18) + lVar13 + 0x20);
                    lVar13 = lVar11 + 4;
                  } while (((ulong)uVar3 - 1) - (ulong)uVar2 != lVar11 + 4);
                  lVar11 = lVar11 + 5;
                }
                if (uVar2 != 0) {
                  lVar11 = lVar11 << 3;
                  lVar13 = -(ulong)uVar2;
                  do {
                    *(undefined8 *)((long)puVar7 + lVar11) =
                         *(undefined8 *)(*(long *)(lVar17 + 0x18) + lVar11);
                    lVar11 = lVar11 + 8;
                    lVar13 = lVar13 + 1;
                  } while (lVar13 != 0);
                }
              }
              puVar8 = *(undefined8 **)(lVar17 + 0x18);
            }
            FUN_00404870(*(undefined4 *)puVar4,puVar8);
          }
          *(undefined8 **)(lVar17 + 0x18) = puVar7;
          *(uint *)(lVar17 + 0x24) = uVar21;
        }
        if (uVar14 < uVar21) {
          plVar1 = (long *)(*(long *)(lVar17 + 0x18) + (ulong)*(uint *)(lVar17 + 0x20) * 8);
          *(uint *)(lVar17 + 0x20) = *(uint *)(lVar17 + 0x20) + 1;
          if (plVar1 != (long *)0x0) {
            *plVar1 = param_2;
            *(undefined4 *)(lVar17 + 0x10) = 0;
            if (*(uint *)(lVar17 + 0x20) != 0) {
              plVar19 = *(long **)(lVar17 + 0x18);
              uVar14 = 0;
              uVar6 = (ulong)*(uint *)(lVar17 + 0x20) * 8 - 8;
              uVar15 = uVar6 >> 3;
              uVar21 = (int)uVar15 + 1;
              if (uVar6 != 0) {
                lVar13 = (((ulong)uVar21 & 1) - 1) - uVar15;
                do {
                  uVar14 = *(uint *)(*plVar19 + 100) | uVar14;
                  *(uint *)(lVar17 + 0x10) = uVar14;
                  plVar12 = plVar19 + 1;
                  plVar19 = plVar19 + 2;
                  uVar14 = *(uint *)(*plVar12 + 100) | uVar14;
                  lVar13 = lVar13 + 2;
                  *(uint *)(lVar17 + 0x10) = uVar14;
                } while (lVar13 != 0);
              }
              if ((uVar21 & 1) != 0) {
                *(uint *)(lVar17 + 0x10) = *(uint *)(*plVar19 + 100) | uVar14;
              }
            }
            *(long *)(param_2 + 0x58) = lVar17;
            lVar17 = *(long *)(param_2 + 0x58);
            goto joined_r0x004ec3ac;
          }
        }
      }
LAB_004ec10c:
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar12);
  }
  pfVar20 = (float *)(param_1 + 0x88);
  fVar28 = *(float *)(param_2 + 0x30);
  fVar27 = *(float *)(param_2 + 0x34);
  fVar30 = *(float *)(param_2 + 0x50);
  fVar29 = *(float *)(param_2 + 0x38);
  fVar31 = *(float *)(param_2 + 0x3c);
  fVar32 = *(float *)(param_2 + 0x40);
  fVar33 = *(float *)(param_2 + 0x44);
  fVar34 = *(float *)(param_2 + 0x48);
  fVar24 = *(float *)(param_2 + 0x4c);
  for (plVar19 = *(long **)pfVar20; plVar19 != (long *)0x0; plVar19 = (long *)plVar19[0x300]) {
    if (plVar19[0x302] != 0) goto LAB_004ec1d0;
  }
  plVar19 = (long *)FUN_00404750(*(undefined4 *)PTR_DAT_02713640,0x1818,0x10);
  if (plVar19 != (long *)0x0) {
    lVar17 = 0x7f;
    plVar19[0x300] = 0;
    *(undefined4 *)(plVar19 + 0x301) = 0;
    plVar19[0x302] = 0;
    plVar12 = plVar19;
    do {
      plVar19[0x302] = (long)plVar12;
      *plVar12 = 0;
      while( true ) {
        if (lVar17 == 0) {
          *(undefined4 *)(plVar19 + 0x301) = 0x80;
          if (*(long *)pfVar20 != 0) {
            plVar19[0x300] = *(long *)pfVar20;
            *(long **)pfVar20 = plVar19;
            goto LAB_004ec1d0;
          }
          *(long **)pfVar20 = plVar19;
          plVar19[0x300] = 0;
          pfVar18 = (float *)plVar19[0x302];
          goto joined_r0x004ec1d4;
        }
        lVar17 = lVar17 + -1;
        plVar12 = plVar12 + 6;
        if (plVar19[0x302] == 0) break;
        *plVar12 = plVar19[0x302];
        plVar19[0x302] = (long)plVar12;
      }
    } while( true );
  }
LAB_004ec694:
  lVar17 = *(long *)(param_2 + 0x58);
joined_r0x004ec3ac:
  if (lVar17 == 0) {
    uVar16 = 2;
  }
  else {
    fStack_bc = *(float *)(param_2 + 0x30);
    local_b8 = *(float *)(param_2 + 0x34);
    fStack_b4 = *(float *)(param_2 + 0x38);
    fVar33 = *(float *)(param_2 + 0x3c);
    uVar25 = NEON_fminnm(fStack_bc,DAT_01d4c18c);
    uVar26 = NEON_fminnm(local_b8,DAT_01d4c18c);
    uVar23 = NEON_fminnm(fStack_b4,DAT_01d4c18c);
    if (fStack_bc <= DAT_01d4c5a8) {
      fStack_bc = DAT_01d4c5a8;
    }
    if (local_b8 <= DAT_01d4c5a8) {
      local_b8 = DAT_01d4c5a8;
    }
    if (fStack_b4 <= DAT_01d4c5a8) {
      fStack_b4 = DAT_01d4c5a8;
    }
    uVar25 = NEON_fminnm(uVar25,fVar33);
    fVar31 = *(float *)(param_2 + 0x40);
    fVar32 = *(float *)(param_2 + 0x44);
    uVar23 = NEON_fminnm(uVar23,fVar32);
    uVar26 = NEON_fminnm(uVar26,fVar31);
    if (fStack_bc <= fVar33) {
      fStack_bc = fVar33;
    }
    if (local_b8 <= fVar31) {
      local_b8 = fVar31;
    }
    fVar33 = *(float *)(param_2 + 0x48);
    fVar31 = *(float *)(param_2 + 0x4c);
    if (fStack_b4 <= fVar32) {
      fStack_b4 = fVar32;
    }
    fVar32 = *(float *)(param_2 + 0x50);
    local_b0 = 0;
    uVar16 = 1;
    local_54 = 1;
    local_c0 = NEON_fminnm(uVar23,fVar32);
    if (fStack_bc <= fVar33) {
      fStack_bc = fVar33;
    }
    local_c8 = NEON_fminnm(uVar25,fVar33);
    uStack_c4 = NEON_fminnm(uVar26,fVar31);
    if (local_b8 <= fVar31) {
      local_b8 = fVar31;
    }
    if (fStack_b4 <= fVar32) {
      fStack_b4 = fVar32;
    }
    lStack_a8 = param_2;
    FUN_004ef3a0(param_1 + 0x48,&local_c8,param_1 + 0x50,0,&local_54);
  }
  return uVar16;
LAB_004ec1d0:
  pfVar18 = (float *)plVar19[0x302];
joined_r0x004ec1d4:
  if (pfVar18 != (float *)0x0) {
    fVar33 = fVar33 - fVar29;
    fVar24 = fVar24 - fVar27;
    fVar31 = fVar31 - fVar28;
    fVar32 = fVar32 - fVar27;
    fVar34 = fVar34 - fVar28;
    fVar30 = fVar30 - fVar29;
    fVar22 = fVar30 * fVar32 - fVar24 * fVar33;
    fVar30 = fVar34 * fVar33 - fVar30 * fVar31;
    fVar33 = fVar24 * fVar31 - fVar34 * fVar32;
    if (*(long *)pfVar18 == 0) {
      plVar19[0x302] = 0;
    }
    else {
      plVar19[0x302] = *(long *)pfVar18;
    }
    fVar31 = SQRT(fVar22 * fVar22 + fVar33 * fVar33 + fVar30 * fVar30);
    *(int *)(plVar19 + 0x301) = (int)plVar19[0x301] + -1;
    pfVar10 = pfVar18 + 6;
    pfVar10[0] = 0.0;
    pfVar10[1] = 0.0;
    *(undefined1 *)(pfVar18 + 10) = 0;
    pfVar18[8] = 0.0;
    pfVar18[9] = 0.0;
    if (fVar31 == 0.0) {
      fVar30 = 0.0;
      fVar22 = 0.0;
      fVar33 = 0.0;
    }
    else {
      fVar31 = 1.0 / fVar31;
      fVar22 = fVar22 * fVar31;
      fVar30 = fVar30 * fVar31;
      fVar33 = fVar33 * fVar31;
    }
    pfVar18[1] = fVar30;
    pfVar18[2] = fVar33;
    *pfVar18 = fVar22;
    pfVar18[3] = fVar30 * fVar27 + fVar28 * fVar22 + fVar29 * fVar33;
    uVar6 = FUN_004ee0f0(pfVar18,param_2);
    puVar4 = PTR_DAT_02713640;
    if ((uVar6 & 1) != 0) {
      fVar31 = pfVar18[8];
      fVar33 = pfVar18[9];
      if ((uint)fVar33 <= (uint)fVar31) {
        fVar33 = (float)((int)fVar33 + 8);
        puVar7 = (undefined8 *)
                 FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)(uint)fVar33 << 3);
        if (puVar7 == (undefined8 *)0x0) goto LAB_004ec4bc;
        puVar8 = *(undefined8 **)(pfVar18 + 6);
        if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
          fVar32 = pfVar18[8];
          if (fVar32 != 0.0) {
            *puVar7 = *puVar8;
            if (fVar32 != 1.4013e-45) {
              if (fVar32 == 2.8026e-45) {
                lVar13 = 1;
              }
              else {
                lVar17 = 0;
                do {
                  lVar13 = lVar17;
                  puVar7[lVar13 + 1] = *(undefined8 *)(*(long *)pfVar10 + lVar13 * 8 + 8);
                  puVar7[lVar13 + 2] = *(undefined8 *)(*(long *)pfVar10 + lVar13 * 8 + 0x10);
                  lVar17 = lVar13 + 2;
                } while (((ulong)(uint)fVar32 - 1) - (ulong)(~(uint)fVar32 & 1) != lVar13 + 2);
                lVar13 = lVar13 + 3;
                if ((~(uint)fVar32 & 1) == 0) goto LAB_004ec40c;
              }
              puVar7[lVar13] = *(undefined8 *)(*(long *)pfVar10 + lVar13 * 8);
            }
LAB_004ec40c:
            puVar8 = *(undefined8 **)pfVar10;
          }
          FUN_00404870(*(undefined4 *)puVar4,puVar8);
        }
        *(undefined8 **)(pfVar18 + 6) = puVar7;
        pfVar18[9] = fVar33;
      }
      if ((uint)fVar31 < (uint)fVar33) {
        plVar19 = (long *)(*(long *)(pfVar18 + 6) + (ulong)(uint)pfVar18[8] * 8);
        pfVar18[8] = (float)((int)pfVar18[8] + 1);
        if (plVar19 != (long *)0x0) {
          *plVar19 = param_2;
          pfVar18[4] = 0.0;
          if (pfVar18[8] != 0.0) {
            plVar19 = *(long **)pfVar10;
            fVar33 = 0.0;
            uVar6 = (ulong)(uint)pfVar18[8] * 8 - 8;
            uVar15 = uVar6 >> 3;
            uVar21 = (int)uVar15 + 1;
            if (uVar6 != 0) {
              lVar17 = (((ulong)uVar21 & 1) - 1) - uVar15;
              do {
                fVar33 = (float)(*(uint *)(*plVar19 + 100) | (uint)fVar33);
                pfVar18[4] = fVar33;
                plVar12 = plVar19 + 1;
                plVar19 = plVar19 + 2;
                fVar33 = (float)(*(uint *)(*plVar12 + 100) | (uint)fVar33);
                lVar17 = lVar17 + 2;
                pfVar18[4] = fVar33;
              } while (lVar17 != 0);
            }
            if ((uVar21 & 1) != 0) {
              pfVar18[4] = (float)(*(uint *)(*plVar19 + 100) | (uint)fVar33);
            }
          }
          *(float **)(param_2 + 0x58) = pfVar18;
        }
      }
    }
LAB_004ec4bc:
    puVar4 = PTR_DAT_02713640;
    if (*(long *)(param_2 + 0x58) == 0) {
      if (*(long *)pfVar10 != 0) {
        pfVar18[8] = 0.0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
        pfVar18[6] = 0.0;
        pfVar18[7] = 0.0;
        pfVar18[9] = 0.0;
      }
      if (*(float **)pfVar20 == (float *)0x0) {
        pfVar10 = (float *)0x0;
      }
      else {
        pfVar10 = (float *)0x0;
        pfVar5 = *(float **)pfVar20;
        do {
          pfVar9 = pfVar5;
          if ((pfVar9 <= pfVar18) && (pfVar18 < pfVar9 + 0x600)) goto LAB_004ec59c;
          pfVar10 = pfVar9;
          pfVar5 = *(float **)(pfVar9 + 0x600);
        } while (*(float **)(pfVar9 + 0x600) != (float *)0x0);
      }
      pfVar9 = (float *)0x0;
LAB_004ec59c:
      if (*(long *)(pfVar9 + 0x604) == 0) {
        *(float **)(pfVar9 + 0x604) = pfVar18;
        pfVar18[0] = 0.0;
        pfVar18[1] = 0.0;
      }
      else {
        *(long *)pfVar18 = *(long *)(pfVar9 + 0x604);
        *(float **)(pfVar9 + 0x604) = pfVar18;
      }
      fVar33 = pfVar9[0x602];
      pfVar9[0x602] = (float)((int)fVar33 + 1);
      if ((float)((int)fVar33 + 1) == 1.79366e-43) {
        if (*(float **)pfVar20 != pfVar9) {
          pfVar20 = pfVar10 + 0x600;
        }
        *(long *)pfVar20 = *(long *)(pfVar9 + 0x600);
        FUN_004047f0(*(undefined4 *)PTR_DAT_02713640);
        lVar17 = *(long *)(param_2 + 0x58);
        goto joined_r0x004ec3ac;
      }
    }
    else {
      uVar14 = *(uint *)(param_1 + 0x98);
      uVar21 = *(uint *)(param_1 + 0x9c);
      if (uVar21 <= uVar14) {
        uVar21 = uVar21 + 0x20;
        puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,(ulong)uVar21 << 3);
        if (puVar7 == (undefined8 *)0x0) goto LAB_004ec694;
        puVar8 = *(undefined8 **)(param_1 + 0x90);
        if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar7)) {
          uVar3 = *(uint *)(param_1 + 0x98);
          if (uVar3 != 0) {
            *puVar7 = *puVar8;
            if (uVar3 != 1) {
              if (uVar3 == 2) {
                lVar13 = 1;
              }
              else {
                lVar17 = 0;
                do {
                  lVar13 = lVar17;
                  puVar7[lVar13 + 1] = *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar13 * 8 + 8);
                  puVar7[lVar13 + 2] =
                       *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar13 * 8 + 0x10);
                  lVar17 = lVar13 + 2;
                } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar13 + 2);
                lVar13 = lVar13 + 3;
                if ((~uVar3 & 1) == 0) goto LAB_004ec65c;
              }
              puVar7[lVar13] = *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar13 * 8);
            }
LAB_004ec65c:
            puVar8 = *(undefined8 **)(param_1 + 0x90);
          }
          FUN_00404870(*(undefined4 *)puVar4,puVar8);
        }
        *(undefined8 **)(param_1 + 0x90) = puVar7;
        *(uint *)(param_1 + 0x9c) = uVar21;
      }
      if (uVar14 < uVar21) {
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x98) * 8);
        *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) + 1;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = pfVar18;
        }
      }
    }
  }
  goto LAB_004ec694;
}


