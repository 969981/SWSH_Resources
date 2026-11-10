/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ad130; name: FUN_001ad130
 */


void FUN_001ad130(float param_1,long param_2,undefined8 param_3,float *param_4,long param_5,
                 uint param_6,float *param_7)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  ushort uVar11;
  ushort uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
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
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float local_134;
  float fStack_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  
  if (param_6 != 0) {
    fVar48 = 0.0;
    fVar47 = 0.0;
    fVar46 = 0.0;
    local_10c = 0.0;
    local_108 = 0.0;
    local_128 = 0.0;
    local_124 = 0.0;
    local_120 = 0.0;
    local_11c = 0.0;
    local_134 = 0.0;
    fStack_130 = 0.0;
    local_12c = 0.0;
    uVar15 = *(uint *)(param_2 + 0x84) >> 3 & 1;
    uVar13 = (ulong)param_6;
    iVar14 = 2;
    if ((*(uint *)(param_2 + 0x84) & 2) != 0) {
      uVar15 = 1;
    }
    local_110 = 0.0;
    do {
      while( true ) {
        fVar27 = 0.0;
        pfVar9 = (float *)(param_5 + (ulong)(iVar14 - 2) * 0xc);
        fVar16 = *param_4;
        fVar17 = param_4[1];
        fVar39 = param_4[8];
        fVar24 = param_4[2];
        fVar26 = param_4[3];
        fVar34 = param_4[4];
        fVar35 = param_4[5];
        fVar18 = *pfVar9;
        fVar20 = pfVar9[1];
        fVar21 = pfVar9[2];
        fVar33 = param_4[6];
        fVar37 = param_4[7];
        pfVar10 = (float *)(param_5 + (ulong)((iVar14 + (uint)*(byte *)(param_4 + 0x12)) - 1) * 0xc)
        ;
        pfVar9 = (float *)(param_5 + (ulong)(iVar14 - (uint)*(byte *)(param_4 + 0x12)) * 0xc);
        fVar41 = fVar18 * fVar24 + fVar20 * fVar35 + fVar21 * fVar39;
        fVar43 = fVar18 * fVar16 + fVar20 * fVar26 + fVar21 * fVar33;
        fVar19 = *pfVar10;
        fVar22 = pfVar10[1];
        fVar42 = fVar18 * fVar17 + fVar20 * fVar34 + fVar21 * fVar37;
        fVar21 = pfVar10[2];
        fVar23 = *pfVar9;
        fVar38 = pfVar9[1];
        fVar25 = pfVar9[2];
        fVar40 = (fVar16 * fVar23 + fVar26 * fVar38 + fVar33 * fVar25) - fVar43;
        fVar18 = *(float *)(param_2 + 0x5c);
        fVar20 = *(float *)(param_2 + 0x78);
        fVar45 = (fVar16 * fVar19 + fVar26 * fVar22 + fVar33 * fVar21) - fVar43;
        fVar36 = (fVar17 * fVar19 + fVar34 * fVar22 + fVar37 * fVar21) - fVar42;
        fVar26 = *(float *)(param_2 + 0x88);
        fVar33 = *(float *)(param_2 + 0x8c);
        fVar16 = *(float *)(param_2 + 0x7c);
        fVar44 = (fVar24 * fVar19 + fVar35 * fVar22 + fVar39 * fVar21) - fVar41;
        fVar24 = (fVar24 * fVar23 + fVar35 * fVar38 + fVar39 * fVar25) - fVar41;
        fVar19 = *(float *)(param_2 + 0x80);
        fVar25 = (fVar17 * fVar23 + fVar34 * fVar38 + fVar37 * fVar25) - fVar42;
        fVar34 = *(float *)(param_2 + 0x90);
        local_100 = fVar44 * fVar44 + fVar45 * fVar45 + fVar36 * fVar36;
        fVar35 = fVar44 * fVar24 + fVar45 * fVar40 + fVar36 * fVar25;
        local_104 = fVar24 * fVar24 + fVar40 * fVar40 + fVar25 * fVar25;
        fVar21 = (fVar43 - fVar26) * fVar40 + fVar25 * (fVar42 - fVar33) +
                 fVar24 * (fVar41 - fVar34);
        fVar17 = fVar45 * (fVar43 - fVar26) + fVar36 * (fVar42 - fVar33) +
                 fVar44 * (fVar41 - fVar34);
        fVar22 = fVar35 * fVar21 - local_104 * fVar17;
        fVar23 = local_100 * local_104 - fVar35 * fVar35;
        if (fVar22 <= 0.0) {
          if (local_104 <= DAT_01d4c104) {
            local_104 = DAT_01d4c104;
          }
          bVar4 = 0;
          fVar21 = -fVar21 / local_104;
          fVar17 = fVar27;
        }
        else {
          fVar37 = fVar35 * fVar17 - local_100 * fVar21;
          if (fVar37 <= 0.0) {
            if (local_100 <= DAT_01d4c104) {
              local_100 = DAT_01d4c104;
            }
            bVar4 = 0;
            fVar17 = -fVar17 / local_100;
            fVar21 = fVar27;
          }
          else if (fVar22 + fVar37 <= fVar23) {
            bVar4 = 1;
            fVar17 = fVar22 * (1.0 / fVar23);
            fVar21 = fVar37 * (1.0 / fVar23);
          }
          else {
            fVar17 = (((local_104 + fVar21) - fVar35) - fVar17) /
                     (((local_100 + local_104) - fVar35) - fVar35);
            bVar4 = 0;
            fVar21 = 1.0 - fVar17;
          }
        }
        if (fVar17 <= 0.0) {
          fVar17 = fVar27;
        }
        if (fVar21 <= 0.0) {
          fVar21 = fVar27;
        }
        fVar17 = (float)NEON_fminnm(fVar17,0x3f800000);
        fVar21 = (float)NEON_fminnm(fVar21,0x3f800000);
        fVar22 = fVar43 + fVar45 * fVar17 + fVar40 * fVar21;
        fVar37 = fVar42 + fVar36 * fVar17 + fVar25 * fVar21;
        fVar30 = fVar41 + fVar44 * fVar17 + fVar24 * fVar21;
        fVar31 = fVar26 - fVar22;
        fVar32 = fVar33 - fVar37;
        fVar28 = fVar34 - fVar30;
        fVar39 = fVar28 * fVar28 + fVar31 * fVar31 + fVar32 * fVar32;
        fVar27 = fVar36 * fVar24 - fVar44 * fVar25;
        fVar29 = fVar44 * fVar40 - fVar45 * fVar24;
        fVar38 = fVar45 * fVar25 - fVar36 * fVar40;
        fVar21 = sqrtf(fVar38 * fVar38 + fVar27 * fVar27 + fVar29 * fVar29);
        fVar17 = fVar38 * fVar28 + fVar27 * fVar31 + fVar29 * fVar32;
        bVar8 = 0.0 < fVar17;
        bVar4 = bVar4 & fVar39 < param_1 * param_1;
        bVar7 = fVar39 < fVar18 * fVar18;
        if (uVar15 != 0) break;
        if (!bVar7 || fVar17 <= 0.0) {
          bVar3 = false;
        }
        else {
          if (fVar39 <= DAT_01d4c050) {
            fVar48 = 1.0 / fVar21;
            fVar46 = fVar27 * fVar48;
            fVar47 = fVar29 * fVar48;
            fVar48 = fVar38 * fVar48;
          }
          else {
            fVar48 = sqrtf(fVar39);
            fVar48 = 1.0 / fVar48;
            fVar46 = fVar31 * fVar48;
            fVar47 = fVar32 * fVar48;
            fVar48 = fVar28 * fVar48;
          }
          fVar18 = *(float *)(param_2 + 0x5c);
          local_110 = fVar30 + fVar48 * fVar18;
          local_108 = fVar22 + fVar46 * fVar18;
          bVar3 = true;
          local_10c = fVar37 + fVar47 * fVar18;
        }
        if (!(bool)(bVar8 & bVar4)) {
          if (!(bool)(bVar8 & (bVar7 | bVar4))) goto LAB_001adad4;
          goto LAB_001adbf0;
        }
        fVar21 = 1.0 / fVar21;
        local_120 = fVar27 * fVar21;
        local_124 = fVar29 * fVar21;
        local_128 = fVar38 * fVar21;
        fVar16 = *(float *)(param_2 + 0x5c);
        local_12c = fVar22 + local_120 * fVar16;
        fStack_130 = fVar37 + local_124 * fVar16;
        local_134 = fVar30 + local_128 * fVar16;
        local_11c = local_120 * (*(float *)(param_2 + 0x78) - fVar43) +
                    local_124 * (*(float *)(param_2 + 0x7c) - fVar42) +
                    local_128 * (*(float *)(param_2 + 0x80) - fVar41);
        bVar8 = true;
LAB_001adbf4:
        fVar18 = local_110;
        fVar17 = local_10c;
        fVar22 = local_108;
        if (uVar15 == 0) {
          if (bVar8) {
            uVar2 = *(ushort *)(param_2 + 0x3e);
            if ((uVar2 & 1) == 0) {
LAB_001adc08:
              bVar8 = true;
LAB_001ad32c:
              fVar20 = local_120 + local_120;
              fVar42 = *param_7;
              fVar34 = param_7[1];
              fVar21 = local_124 + local_124;
              fVar24 = local_12c + local_12c;
              fVar25 = fStack_130 + fStack_130;
              fVar26 = local_128 + local_128;
              fVar16 = param_7[2];
              fVar43 = param_7[3];
              fVar33 = local_134 + local_134;
              fVar35 = fVar24 * fVar42 + fVar25 * fVar34 + fVar33 * fVar16;
              fVar41 = fVar20 * fVar42 + fVar21 * fVar34 + fVar26 * fVar16;
              fVar39 = fVar43 * fVar43 + -0.5;
              fVar36 = param_7[4];
              fVar38 = param_7[5];
              fVar37 = param_7[6];
              fVar19 = fVar42 * fVar41 +
                       fVar20 * fVar39 + fVar43 * (fVar26 * fVar34 - fVar21 * fVar16);
              fVar23 = fVar34 * fVar41 +
                       fVar21 * fVar39 + fVar43 * (fVar20 * fVar16 - fVar26 * fVar42);
              fVar20 = fVar26 * fVar39 + fVar43 * (fVar21 * fVar42 - fVar20 * fVar34) +
                       fVar16 * fVar41;
              plVar1 = (long *)(param_2 + 0x98);
              if (!bVar8) {
                plVar1 = (long *)(param_2 + 0xb0);
              }
              pfVar9 = (float *)*plVar1;
              *pfVar9 = fVar19;
              pfVar9[1] = fVar23;
              uVar11 = 0xfffa;
              if (!bVar8) {
                uVar11 = 0xfff5;
              }
              uVar12 = 1;
              if (!bVar8) {
                uVar12 = 2;
              }
              pfVar9[2] = fVar20;
              pfVar9[3] = fVar20 * (fVar37 + fVar33 * fVar39 +
                                             fVar43 * (fVar25 * fVar42 - fVar24 * fVar34) +
                                             fVar16 * fVar35) +
                          fVar19 * (fVar36 + fVar42 * fVar35 +
                                             fVar24 * fVar39 +
                                             fVar43 * (fVar33 * fVar34 - fVar25 * fVar16)) +
                          fVar23 * (fVar38 + fVar34 * fVar35 +
                                             fVar25 * fVar39 +
                                             fVar43 * (fVar24 * fVar16 - fVar33 * fVar42));
              *(ushort *)(param_2 + 0x3e) = uVar2 & uVar11 | uVar12;
            }
            else {
              if ((uVar2 >> 1 & 1) == 0) {
LAB_001ad328:
                bVar8 = false;
                goto LAB_001ad32c;
              }
              fVar26 = param_7[2];
              fVar43 = param_7[3];
              fVar20 = *(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x7c);
              fVar16 = *(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x78);
              fVar21 = *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x80);
              fVar24 = fVar43 * fVar43 + -0.5;
              fVar25 = *param_7;
              fVar33 = param_7[1];
              fVar42 = fVar16 * fVar25 + fVar20 * fVar33 + fVar21 * fVar26;
              pfVar9 = *(float **)(param_2 + 0x98);
              fVar23 = param_7[5] +
                       fVar33 * fVar42 +
                       fVar20 * fVar24 + fVar43 * (fVar16 * fVar26 - fVar21 * fVar25);
              fVar19 = param_7[4] +
                       fVar25 * fVar42 +
                       fVar16 * fVar24 + fVar43 * (fVar21 * fVar33 - fVar20 * fVar26);
              fVar20 = param_7[6] +
                       fVar21 * fVar24 + fVar43 * (fVar20 * fVar25 - fVar16 * fVar33) +
                       fVar26 * fVar42;
              pfVar10 = *(float **)(param_2 + 0xb0);
              fVar16 = (*pfVar9 * fVar19 + pfVar9[1] * fVar23 + fVar20 * pfVar9[2]) - pfVar9[3];
              fVar20 = (fVar19 * *pfVar10 + fVar23 * pfVar10[1] + fVar20 * pfVar10[2]) - pfVar10[3];
              if (fVar20 <= fVar16) {
                if (local_11c < fVar16) goto LAB_001adc08;
              }
              else if (local_11c < fVar20) goto LAB_001ad328;
            }
            *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x20;
          }
          if (bVar3) {
            *(float *)(param_2 + 0xa0) = fVar46 + *(float *)(param_2 + 0xa0);
            *(float *)(param_2 + 0xa4) = fVar47 + *(float *)(param_2 + 0xa4);
            *(float *)(param_2 + 0xa8) = fVar48 + *(float *)(param_2 + 0xa8);
            *(float *)(param_2 + 0xb8) = *(float *)(param_2 + 0xb8) + local_108;
            *(float *)(param_2 + 0xbc) = *(float *)(param_2 + 0xbc) + local_10c;
            *(float *)(param_2 + 0xc0) = *(float *)(param_2 + 0xc0) + local_110;
            *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x10;
            uVar15 = 0;
            *(float *)(param_2 + 0xc4) = *(float *)(param_2 + 0xc4) + 1.0;
          }
          else {
            uVar15 = 0;
          }
        }
joined_r0x001adeb8:
        uVar13 = uVar13 - 1;
        iVar14 = iVar14 + 3;
        local_110 = fVar18;
        local_10c = fVar17;
        local_108 = fVar22;
        if (uVar13 == 0) {
          return;
        }
      }
      bVar3 = false;
      if ((bool)(bVar8 & (bVar7 | bVar4))) {
LAB_001adbf0:
        bVar8 = false;
        goto LAB_001adbf4;
      }
LAB_001adad4:
      fVar22 = *(float *)(param_2 + 0x78);
      fVar17 = *(float *)(param_2 + 0x7c);
      fVar18 = *(float *)(param_2 + 0x80);
      fVar37 = fVar27 * (fVar43 - fVar22) + fVar29 * (fVar42 - fVar17) + fVar38 * (fVar41 - fVar18);
      if (0.0 < fVar37) goto LAB_001adbf0;
      fVar26 = fVar26 - fVar20;
      fVar33 = fVar33 - fVar16;
      fVar34 = fVar34 - fVar19;
      fVar16 = fVar26 * fVar27 + fVar29 * fVar33 + fVar38 * fVar34;
      if (fVar37 <= fVar16) goto LAB_001adbf0;
      fVar16 = fVar37 / fVar16;
      fVar43 = fVar43 - (fVar22 + fVar26 * fVar16);
      fVar42 = fVar42 - (fVar17 + fVar33 * fVar16);
      fVar41 = fVar41 - (fVar18 + fVar34 * fVar16);
      fVar26 = fVar44 * fVar41 + fVar45 * fVar43 + fVar36 * fVar42;
      fVar20 = fVar24 * fVar41 + fVar40 * fVar43 + fVar25 * fVar42;
      fVar19 = fVar35 * fVar20 - local_104 * fVar26;
      fVar20 = fVar35 * fVar26 - local_100 * fVar20;
      fVar26 = -(fVar23 * DAT_01d4bac8);
      bVar8 = true;
      bVar7 = false;
      if (fVar26 <= fVar19) {
        bVar8 = false;
        bVar7 = true;
        if (!NAN(fVar20) && !NAN(fVar26)) {
          bVar8 = fVar20 < fVar26;
          bVar7 = false;
        }
      }
      fVar19 = fVar19 + fVar20;
      fVar23 = fVar23 + fVar23 * DAT_01d4bac8;
      bVar5 = false;
      bVar6 = true;
      if (bVar8 == bVar7) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar19) && !NAN(fVar23)) {
          bVar5 = fVar19 == fVar23;
          bVar6 = fVar23 <= fVar19;
        }
      }
      if (bVar6 && !bVar5) goto LAB_001adbf0;
      fVar21 = 1.0 / fVar21;
      local_11c = -(fVar21 * fVar37);
      fVar46 = fVar27 * fVar21;
      fVar47 = fVar29 * fVar21;
      fVar48 = fVar38 * fVar21;
      if (fVar16 < *(float *)(param_2 + 0x2c)) {
        *(float *)(param_2 + 0xa0) = fVar46;
        *(float *)(param_2 + 0xa4) = fVar47;
        *(float *)(param_2 + 0xb8) = fVar22;
        *(float *)(param_2 + 0xbc) = fVar17;
        *(float *)(param_2 + 0xc0) = fVar18;
        *(float *)(param_2 + 0xa8) = fVar48;
        *(undefined4 *)(param_2 + 0x84) = 8;
        *(float *)(param_2 + 0x2c) = fVar16;
      }
      uVar2 = *(ushort *)(param_2 + 0x3e);
      uVar15 = 1;
      if ((uVar2 & 1) == 0) {
LAB_001add30:
        fVar20 = fVar46 + fVar46;
        fVar19 = fVar47 + fVar47;
        fVar26 = fVar22 + fVar22;
        fVar25 = *param_7;
        fVar33 = param_7[1];
        fVar43 = fVar17 + fVar17;
        fVar21 = fVar48 + fVar48;
        fVar16 = param_7[2];
        fVar23 = param_7[3];
        fVar24 = fVar18 + fVar18;
        bVar8 = uVar15 == 0;
        plVar1 = (long *)(param_2 + 0x98);
        if (bVar8) {
          plVar1 = (long *)(param_2 + 0xb0);
        }
        pfVar9 = (float *)*plVar1;
        fVar41 = fVar20 * fVar25 + fVar19 * fVar33 + fVar21 * fVar16;
        fVar39 = fVar23 * fVar23 + -0.5;
        fVar35 = fVar26 * fVar25 + fVar43 * fVar33 + fVar24 * fVar16;
        fVar36 = param_7[4];
        fVar38 = param_7[5];
        fVar37 = param_7[6];
        fVar42 = fVar25 * fVar41 + fVar20 * fVar39 + fVar23 * (fVar21 * fVar33 - fVar19 * fVar16);
        fVar34 = fVar33 * fVar41 + fVar19 * fVar39 + fVar23 * (fVar20 * fVar16 - fVar21 * fVar25);
        fVar20 = fVar21 * fVar39 + fVar23 * (fVar19 * fVar25 - fVar20 * fVar33) + fVar16 * fVar41;
        uVar11 = 0xfffa;
        if (bVar8) {
          uVar11 = 0xfff5;
        }
        uVar12 = 1;
        if (bVar8) {
          uVar12 = 2;
        }
        *pfVar9 = fVar42;
        pfVar9[1] = fVar34;
        pfVar9[2] = fVar20;
        pfVar9[3] = fVar20 * (fVar37 + fVar24 * fVar39 +
                                       fVar23 * (fVar43 * fVar25 - fVar26 * fVar33) +
                                       fVar16 * fVar35) +
                    fVar42 * (fVar36 + fVar25 * fVar35 +
                                       fVar26 * fVar39 +
                                       fVar23 * (fVar24 * fVar33 - fVar43 * fVar16)) +
                    fVar34 * (fVar38 + fVar33 * fVar35 +
                                       fVar43 * fVar39 +
                                       fVar23 * (fVar26 * fVar16 - fVar24 * fVar25));
        *(ushort *)(param_2 + 0x3e) = uVar2 & uVar11 | uVar12;
        uVar15 = 1;
        goto joined_r0x001adeb8;
      }
      if ((uVar2 >> 1 & 1) == 0) {
LAB_001add2c:
        uVar15 = 0;
        goto LAB_001add30;
      }
      fVar26 = param_7[2];
      fVar43 = param_7[3];
      fVar20 = *(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x7c);
      fVar16 = *(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x78);
      fVar21 = *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x80);
      fVar24 = fVar43 * fVar43 + -0.5;
      fVar25 = *param_7;
      fVar33 = param_7[1];
      fVar42 = fVar16 * fVar25 + fVar20 * fVar33 + fVar21 * fVar26;
      pfVar9 = *(float **)(param_2 + 0x98);
      fVar23 = param_7[5] +
               fVar33 * fVar42 + fVar20 * fVar24 + fVar43 * (fVar16 * fVar26 - fVar21 * fVar25);
      fVar19 = param_7[4] +
               fVar25 * fVar42 + fVar16 * fVar24 + fVar43 * (fVar21 * fVar33 - fVar20 * fVar26);
      fVar20 = param_7[6] +
               fVar21 * fVar24 + fVar43 * (fVar20 * fVar25 - fVar16 * fVar33) + fVar26 * fVar42;
      pfVar10 = *(float **)(param_2 + 0xb0);
      fVar16 = (*pfVar9 * fVar19 + pfVar9[1] * fVar23 + fVar20 * pfVar9[2]) - pfVar9[3];
      fVar20 = (fVar19 * *pfVar10 + fVar23 * pfVar10[1] + fVar20 * pfVar10[2]) - pfVar10[3];
      if (fVar20 <= fVar16) {
        uVar15 = 1;
        if (local_11c < fVar16) goto LAB_001add30;
        goto joined_r0x001adeb8;
      }
      if (local_11c < fVar20) goto LAB_001add2c;
      uVar15 = 1;
      iVar14 = iVar14 + 3;
      uVar13 = uVar13 - 1;
      local_110 = fVar18;
      local_10c = fVar17;
      local_108 = fVar22;
    } while (uVar13 != 0);
  }
  return;
}


