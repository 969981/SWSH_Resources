/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021bb80; name: FUN_0021bb80
 */


void FUN_0021bb80(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,long param_7,undefined4 *param_8,float *param_9,float *param_10)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  uint uVar4;
  float *pfVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  float *pfVar15;
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
  float local_120 [3];
  char local_114 [4];
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  
  *(undefined4 *)(param_7 + 0x1000) = 0;
  fVar40 = param_9[5];
  fVar37 = param_9[1];
  fVar39 = param_9[2];
  fVar26 = param_10[1];
  fVar20 = param_9[10];
  fVar33 = param_9[0xb];
  fVar34 = param_9[3];
  fVar22 = param_9[4];
  fVar24 = param_9[7];
  fVar41 = param_9[8];
  fVar27 = param_10[4];
  fVar44 = param_10[5];
  fVar28 = param_10[7];
  fVar29 = param_10[10];
  fVar31 = param_10[0xb];
  fVar30 = param_10[2];
  fVar21 = param_10[3];
  fVar16 = param_10[8];
  fVar18 = param_10[9];
  fVar32 = *param_10;
  fVar43 = param_10[6];
  fVar23 = param_9[6];
  fVar25 = *param_9;
  fVar38 = -param_9[9];
  fVar35 = (fVar25 * fVar32 + fVar37 * fVar26 + fVar39 * fVar30) * param_3;
  fVar36 = (fVar25 * fVar21 + fVar37 * fVar27 + fVar39 * fVar44) * param_4;
  fVar17 = (fVar25 * fVar43 + fVar37 * fVar28 + fVar39 * fVar16) * param_5;
  fVar19 = (fVar34 * fVar43 + fVar22 * fVar28 + fVar40 * fVar16) * param_5;
  fVar25 = ((fVar25 * fVar38 - fVar37 * fVar20) - fVar39 * fVar33) +
           fVar25 * fVar18 + fVar37 * fVar29 + fVar39 * fVar31;
  fVar39 = (fVar34 * fVar32 + fVar22 * fVar26 + fVar40 * fVar30) * param_3;
  fVar37 = (fVar34 * fVar21 + fVar22 * fVar27 + fVar40 * fVar44) * param_4;
  fVar22 = ((fVar34 * fVar38 - fVar22 * fVar20) - fVar40 * fVar33) +
           fVar34 * fVar18 + fVar22 * fVar29 + fVar40 * fVar31;
  fVar34 = fVar36 + fVar17;
  fVar40 = fVar37 + fVar19;
  fVar42 = fVar22 - fVar39;
  fVar39 = fVar39 + fVar22;
  fVar22 = fVar25 - fVar35;
  fVar35 = fVar35 + fVar25;
  local_120[0] = fVar22 - fVar34;
  local_120[1] = fVar42 - fVar40;
  fVar25 = ((fVar23 * fVar38 - fVar24 * fVar20) - fVar41 * fVar33) +
           fVar23 * fVar18 + fVar24 * fVar29 + fVar41 * fVar31;
  param_3 = (fVar23 * fVar32 + fVar24 * fVar26 + fVar41 * fVar30) * param_3;
  param_4 = (fVar23 * fVar21 + fVar24 * fVar27 + fVar41 * fVar44) * param_4;
  fVar18 = fVar25 - param_3;
  param_3 = param_3 + fVar25;
  fVar37 = fVar37 - fVar19;
  param_5 = (fVar23 * fVar43 + fVar24 * fVar28 + fVar41 * fVar16) * param_5;
  fVar16 = param_4 + param_5;
  local_120[2] = fVar18 - fVar16;
  local_110 = fVar35 - fVar34;
  local_10c = fVar39 - fVar40;
  local_108 = param_3 - fVar16;
  local_c0 = fVar34 + fVar22;
  local_bc = fVar40 + fVar42;
  local_b8 = fVar16 + fVar18;
  local_b0 = fVar34 + fVar35;
  local_ac = fVar40 + fVar39;
  fVar36 = fVar36 - fVar17;
  local_a8 = fVar16 + param_3;
  local_100 = fVar36 + fVar22;
  local_fc = fVar37 + fVar42;
  param_4 = param_4 - param_5;
  local_f8 = param_4 + fVar18;
  local_f0 = fVar36 + fVar35;
  local_ec = fVar37 + fVar39;
  local_e8 = param_4 + param_3;
  local_d0 = fVar35 - fVar36;
  local_cc = fVar39 - fVar37;
  local_c8 = param_3 - param_4;
  local_e0 = fVar22 - fVar36;
  local_dc = fVar42 - fVar37;
  local_d8 = fVar18 - param_4;
  param_1 = param_1 + param_6;
  param_2 = param_2 + param_6;
  lVar13 = 0;
LAB_0021bed0:
  do {
    if (*(float *)((long)local_120 + lVar13) < -param_6) {
      (local_114 + lVar13)[0] = '\0';
      (local_114 + lVar13)[1] = '\0';
    }
    else {
      fVar16 = *(float *)((long)local_120 + lVar13 + 4);
      local_114[lVar13] = '\x01';
      fVar16 = fabsf(fVar16);
      if ((param_1 < fVar16) ||
         (fVar16 = fabsf(*(float *)((long)local_120 + lVar13 + 8)), param_2 < fVar16)) {
        local_114[lVar13 + 1] = '\0';
      }
      else {
        local_114[lVar13 + 1] = '\x01';
        uVar7 = *(uint *)(param_7 + 0x1000);
        if (uVar7 < 0x40) {
          fVar16 = *(float *)((long)local_120 + lVar13);
          *(uint *)(param_7 + 0x1000) = uVar7 + 1;
          puVar1 = (undefined4 *)(param_7 + (ulong)uVar7 * 0x40);
          *puVar1 = *param_8;
          puVar1[1] = param_8[1];
          puVar1[2] = param_8[2];
          puVar1[4] = fVar16;
          puVar1[5] = *(undefined4 *)((long)local_120 + lVar13 + 4);
          puVar1[6] = *(undefined4 *)((long)local_120 + lVar13 + 8);
          puVar1[3] = -fVar16;
          puVar1[0xd] = 0xffffffff;
          lVar13 = lVar13 + 0x10;
          if (lVar13 == 0x80) break;
          goto LAB_0021bed0;
        }
      }
    }
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x80);
  fVar16 = -param_1;
  fVar17 = -param_2;
  piVar14 = &DAT_01d4cef8;
  do {
    lVar13 = (long)*piVar14;
    lVar10 = (long)piVar14[1];
    pfVar8 = local_120 + lVar10 * 4;
    pfVar15 = local_120 + lVar13 * 4;
    if ((local_114[lVar13 * 0x10] != '\0') || (local_114[lVar10 * 0x10] != '\0')) {
      if ((local_114[lVar13 * 0x10 + 1] == '\0') || (local_114[lVar10 * 0x10 + 1] == '\0')) {
        pfVar2 = pfVar8;
        pfVar5 = pfVar15;
        if (local_120[lVar13 * 4 + 1] <= local_120[lVar10 * 4 + 1]) {
          pfVar2 = pfVar15;
          pfVar5 = pfVar8;
        }
        fVar36 = pfVar2[1];
        if ((fVar36 < param_1) && (param_1 <= pfVar5[1])) {
          fVar25 = (param_1 - fVar36) / (pfVar5[1] - fVar36);
          fVar18 = pfVar2[2] + fVar25 * (pfVar5[2] - pfVar2[2]);
          fVar36 = fabsf(fVar18);
          if ((fVar36 <= param_2) &&
             (fVar36 = *pfVar2 + fVar25 * (*pfVar5 - *pfVar2), 0.0 <= fVar36 + param_6)) {
            uVar7 = *(uint *)(param_7 + 0x1000);
            if (uVar7 < 0x40) {
              puVar1 = (undefined4 *)(param_7 + (ulong)uVar7 * 0x40);
              *(uint *)(param_7 + 0x1000) = uVar7 + 1;
              *puVar1 = *param_8;
              puVar1[1] = param_8[1];
              uVar3 = param_8[2];
              puVar1[3] = -fVar36;
              puVar1[4] = fVar36;
              puVar1[5] = param_1;
              puVar1[6] = fVar18;
              puVar1[0xd] = 0xffffffff;
              puVar1[2] = uVar3;
            }
          }
        }
        fVar36 = pfVar2[1];
        if ((fVar36 < fVar16) && (fVar16 <= pfVar5[1])) {
          fVar25 = (fVar16 - fVar36) / (pfVar5[1] - fVar36);
          fVar18 = pfVar2[2] + fVar25 * (pfVar5[2] - pfVar2[2]);
          fVar36 = fabsf(fVar18);
          if ((fVar36 <= param_2) &&
             (fVar36 = *pfVar2 + fVar25 * (*pfVar5 - *pfVar2), 0.0 <= fVar36 + param_6)) {
            uVar7 = *(uint *)(param_7 + 0x1000);
            if (uVar7 < 0x40) {
              puVar1 = (undefined4 *)(param_7 + (ulong)uVar7 * 0x40);
              *(uint *)(param_7 + 0x1000) = uVar7 + 1;
              *puVar1 = *param_8;
              puVar1[1] = param_8[1];
              uVar3 = param_8[2];
              puVar1[4] = fVar36;
              puVar1[5] = fVar16;
              puVar1[2] = uVar3;
              puVar1[6] = fVar18;
              puVar1[3] = -fVar36;
              puVar1[0xd] = 0xffffffff;
            }
          }
        }
        pfVar15 = pfVar5;
        pfVar8 = pfVar2;
        if (pfVar2[2] <= pfVar5[2]) {
          pfVar15 = pfVar2;
          pfVar8 = pfVar5;
        }
        fVar36 = pfVar15[2];
        if ((fVar36 < param_2) && (param_2 <= pfVar8[2])) {
          fVar25 = (param_2 - fVar36) / (pfVar8[2] - fVar36);
          fVar18 = pfVar15[1] + fVar25 * (pfVar8[1] - pfVar15[1]);
          fVar36 = fabsf(fVar18);
          if ((fVar36 <= param_1) &&
             (fVar36 = *pfVar15 + fVar25 * (*pfVar8 - *pfVar15), 0.0 <= fVar36 + param_6)) {
            uVar7 = *(uint *)(param_7 + 0x1000);
            if (uVar7 < 0x40) {
              puVar1 = (undefined4 *)(param_7 + (ulong)uVar7 * 0x40);
              *(uint *)(param_7 + 0x1000) = uVar7 + 1;
              *puVar1 = *param_8;
              puVar1[1] = param_8[1];
              uVar3 = param_8[2];
              puVar1[4] = fVar36;
              puVar1[5] = fVar18;
              puVar1[2] = uVar3;
              puVar1[6] = param_2;
              puVar1[3] = -fVar36;
              puVar1[0xd] = 0xffffffff;
            }
          }
        }
        fVar36 = pfVar15[2];
        if ((fVar36 < fVar17) && (fVar17 <= pfVar8[2])) {
          fVar25 = (fVar17 - fVar36) / (pfVar8[2] - fVar36);
          fVar18 = pfVar15[1] + fVar25 * (pfVar8[1] - pfVar15[1]);
          fVar36 = fabsf(fVar18);
          if ((fVar36 <= param_1) &&
             (fVar36 = *pfVar15 + fVar25 * (*pfVar8 - *pfVar15), 0.0 <= fVar36 + param_6)) {
            uVar7 = *(uint *)(param_7 + 0x1000);
            if (uVar7 < 0x40) {
              puVar1 = (undefined4 *)(param_7 + (ulong)uVar7 * 0x40);
              *(uint *)(param_7 + 0x1000) = uVar7 + 1;
              *puVar1 = *param_8;
              puVar1[1] = param_8[1];
              uVar3 = param_8[2];
              puVar1[4] = fVar36;
              puVar1[5] = fVar18;
              puVar1[2] = uVar3;
              puVar1[6] = fVar17;
              puVar1[3] = -fVar36;
              puVar1[0xd] = 0xffffffff;
            }
          }
        }
      }
      if (((*(char *)(pfVar15 + 3) == '\0') && (*(char *)((long)pfVar8 + 0xd) == '\0')) ||
         ((*(char *)(pfVar8 + 3) == '\0' && (*(char *)((long)pfVar15 + 0xd) == '\0')))) {
        fVar25 = -*pfVar15 / (*pfVar8 - *pfVar15);
        fVar18 = pfVar15[1] + fVar25 * (pfVar8[1] - pfVar15[1]);
        fVar36 = fabsf(fVar18);
        if (fVar36 <= param_1) {
          fVar25 = pfVar15[2] + fVar25 * (pfVar8[2] - pfVar15[2]);
          fVar36 = fabsf(fVar25);
          if (fVar36 <= param_2) {
            uVar7 = *(uint *)(param_7 + 0x1000);
            if (uVar7 < 0x40) {
              puVar1 = (undefined4 *)(param_7 + (ulong)uVar7 * 0x40);
              *(uint *)(param_7 + 0x1000) = uVar7 + 1;
              *puVar1 = *param_8;
              puVar1[1] = param_8[1];
              puVar1[2] = param_8[2];
              puVar1[5] = fVar18;
              puVar1[6] = fVar25;
              *(undefined8 *)(puVar1 + 3) = 0;
              puVar1[0xd] = 0xffffffff;
            }
          }
        }
      }
    }
    piVar14 = piVar14 + 2;
  } while (piVar14 != &DAT_01d4cf58);
  uVar7 = 0;
  piVar14 = &DAT_01d4cf60;
  uVar9 = 1;
  do {
    lVar13 = (long)piVar14[-2];
    pfVar8 = local_120 + lVar13 * 4;
    if (local_114[lVar13 * 0x10] != '\0') {
      lVar10 = (long)piVar14[-1];
      pfVar15 = local_120 + lVar10 * 4;
      if (local_114[lVar10 * 0x10] != '\0') {
        lVar11 = (long)*piVar14;
        if (local_114[lVar11 * 0x10] != '\0') {
          lVar12 = (long)piVar14[1];
          pfVar2 = local_120 + lVar12 * 4;
          if ((local_114[lVar12 * 0x10] != '\0') &&
             ((((local_114[lVar13 * 0x10 + 1] == '\0' || (local_114[lVar10 * 0x10 + 1] == '\0')) ||
               (local_114[lVar11 * 0x10 + 1] == '\0')) || (local_114[lVar12 * 0x10 + 1] == '\0'))))
          {
            if ((uVar7 & 1) == 0) {
              fVar36 = local_120[lVar12 * 4 + 1];
              fVar18 = local_120[lVar12 * 4 + 2];
              fVar25 = local_120[lVar13 * 4 + 1];
              fVar35 = local_120[lVar13 * 4 + 2];
              if ((fVar17 - fVar18) * (fVar25 - fVar36) - (fVar16 - fVar36) * (fVar35 - fVar18) <
                  0.0) {
                fVar21 = local_120[lVar10 * 4 + 1];
                fVar22 = local_120[lVar10 * 4 + 2];
                fVar20 = fVar22 - fVar35;
                fVar39 = fVar21 - fVar25;
                fVar19 = fVar17 - fVar35;
                fVar37 = fVar16 - fVar25;
                if (fVar19 * fVar39 - fVar37 * fVar20 < 0.0) {
                  fVar23 = local_120[lVar11 * 4 + 1];
                  fVar24 = local_120[lVar11 * 4 + 2];
                  if (((fVar17 - fVar22) * (fVar23 - fVar21) - (fVar16 - fVar21) * (fVar24 - fVar22)
                       < 0.0) &&
                     ((fVar36 - fVar23) * (fVar17 - fVar24) - (fVar16 - fVar23) * (fVar18 - fVar24)
                      < 0.0)) {
                    fVar21 = *pfVar8;
                    fVar22 = *pfVar15 - fVar21;
                    fVar36 = fVar36 - fVar25;
                    fVar18 = fVar18 - fVar35;
                    fVar25 = *pfVar2 - fVar21;
                    fVar36 = fVar21 + ((fVar37 * fVar39 + fVar19 * fVar20) * fVar22) /
                                      (fVar20 * fVar20 + fVar39 * fVar39 + fVar22 * fVar22) +
                             ((fVar37 * fVar36 + fVar19 * fVar18) * fVar25) /
                             (fVar18 * fVar18 + fVar36 * fVar36 + fVar25 * fVar25);
                    if (0.0 <= fVar36) {
                      uVar4 = *(uint *)(param_7 + 0x1000);
                      uVar7 = uVar7 | 1;
                      if (uVar4 < 0x40) {
                        puVar1 = (undefined4 *)(param_7 + (ulong)uVar4 * 0x40);
                        *(uint *)(param_7 + 0x1000) = uVar4 + 1;
                        *puVar1 = *param_8;
                        puVar1[1] = param_8[1];
                        uVar3 = param_8[2];
                        puVar1[3] = -fVar36;
                        puVar1[4] = fVar36;
                        puVar1[5] = fVar16;
                        puVar1[6] = fVar17;
                        puVar1[0xd] = 0xffffffff;
                        puVar1[2] = uVar3;
                      }
                    }
                  }
                }
              }
            }
            if ((uVar7 >> 1 & 1) == 0) {
              fVar36 = local_120[lVar12 * 4 + 1];
              fVar18 = local_120[lVar12 * 4 + 2];
              fVar25 = local_120[lVar13 * 4 + 1];
              fVar35 = local_120[lVar13 * 4 + 2];
              if ((fVar17 - fVar18) * (fVar25 - fVar36) - (param_1 - fVar36) * (fVar35 - fVar18) <
                  0.0) {
                fVar21 = local_120[lVar10 * 4 + 1];
                fVar22 = local_120[lVar10 * 4 + 2];
                fVar20 = fVar22 - fVar35;
                fVar39 = fVar21 - fVar25;
                fVar19 = fVar17 - fVar35;
                fVar37 = param_1 - fVar25;
                if (fVar19 * fVar39 - fVar37 * fVar20 < 0.0) {
                  fVar23 = local_120[lVar11 * 4 + 1];
                  fVar24 = local_120[lVar11 * 4 + 2];
                  if (((fVar17 - fVar22) * (fVar23 - fVar21) -
                       (param_1 - fVar21) * (fVar24 - fVar22) < 0.0) &&
                     ((fVar36 - fVar23) * (fVar17 - fVar24) - (param_1 - fVar23) * (fVar18 - fVar24)
                      < 0.0)) {
                    fVar21 = *pfVar8;
                    fVar22 = *pfVar15 - fVar21;
                    fVar36 = fVar36 - fVar25;
                    fVar18 = fVar18 - fVar35;
                    fVar25 = *pfVar2 - fVar21;
                    fVar36 = fVar21 + ((fVar37 * fVar39 + fVar19 * fVar20) * fVar22) /
                                      (fVar20 * fVar20 + fVar39 * fVar39 + fVar22 * fVar22) +
                             ((fVar37 * fVar36 + fVar19 * fVar18) * fVar25) /
                             (fVar18 * fVar18 + fVar36 * fVar36 + fVar25 * fVar25);
                    if (0.0 <= fVar36) {
                      uVar4 = *(uint *)(param_7 + 0x1000);
                      uVar7 = uVar7 | 2;
                      if (uVar4 < 0x40) {
                        puVar1 = (undefined4 *)(param_7 + (ulong)uVar4 * 0x40);
                        *(uint *)(param_7 + 0x1000) = uVar4 + 1;
                        *puVar1 = *param_8;
                        puVar1[1] = param_8[1];
                        uVar3 = param_8[2];
                        puVar1[3] = -fVar36;
                        puVar1[4] = fVar36;
                        puVar1[5] = param_1;
                        puVar1[6] = fVar17;
                        puVar1[0xd] = 0xffffffff;
                        puVar1[2] = uVar3;
                      }
                    }
                  }
                }
              }
            }
            if ((uVar7 >> 2 & 1) == 0) {
              fVar36 = local_120[lVar12 * 4 + 1];
              fVar18 = local_120[lVar12 * 4 + 2];
              fVar25 = local_120[lVar13 * 4 + 1];
              fVar35 = local_120[lVar13 * 4 + 2];
              if ((param_2 - fVar18) * (fVar25 - fVar36) - (fVar16 - fVar36) * (fVar35 - fVar18) <
                  0.0) {
                fVar21 = local_120[lVar10 * 4 + 1];
                fVar22 = local_120[lVar10 * 4 + 2];
                fVar20 = fVar22 - fVar35;
                fVar39 = fVar21 - fVar25;
                fVar19 = param_2 - fVar35;
                fVar37 = fVar16 - fVar25;
                if (fVar19 * fVar39 - fVar37 * fVar20 < 0.0) {
                  fVar23 = local_120[lVar11 * 4 + 1];
                  fVar24 = local_120[lVar11 * 4 + 2];
                  if (((param_2 - fVar22) * (fVar23 - fVar21) -
                       (fVar16 - fVar21) * (fVar24 - fVar22) < 0.0) &&
                     ((fVar36 - fVar23) * (param_2 - fVar24) - (fVar16 - fVar23) * (fVar18 - fVar24)
                      < 0.0)) {
                    fVar21 = *pfVar8;
                    fVar22 = *pfVar15 - fVar21;
                    fVar36 = fVar36 - fVar25;
                    fVar18 = fVar18 - fVar35;
                    fVar25 = *pfVar2 - fVar21;
                    fVar36 = fVar21 + ((fVar37 * fVar39 + fVar19 * fVar20) * fVar22) /
                                      (fVar20 * fVar20 + fVar39 * fVar39 + fVar22 * fVar22) +
                             ((fVar37 * fVar36 + fVar19 * fVar18) * fVar25) /
                             (fVar18 * fVar18 + fVar36 * fVar36 + fVar25 * fVar25);
                    if (0.0 <= fVar36) {
                      uVar4 = *(uint *)(param_7 + 0x1000);
                      uVar7 = uVar7 | 4;
                      if (uVar4 < 0x40) {
                        puVar1 = (undefined4 *)(param_7 + (ulong)uVar4 * 0x40);
                        *(uint *)(param_7 + 0x1000) = uVar4 + 1;
                        *puVar1 = *param_8;
                        puVar1[1] = param_8[1];
                        uVar3 = param_8[2];
                        puVar1[3] = -fVar36;
                        puVar1[4] = fVar36;
                        puVar1[5] = fVar16;
                        puVar1[6] = param_2;
                        puVar1[0xd] = 0xffffffff;
                        puVar1[2] = uVar3;
                      }
                    }
                  }
                }
              }
            }
            if (uVar7 >> 3 == 0) {
              fVar36 = local_120[lVar12 * 4 + 1];
              fVar18 = local_120[lVar12 * 4 + 2];
              fVar25 = local_120[lVar13 * 4 + 1];
              fVar35 = local_120[lVar13 * 4 + 2];
              if ((param_2 - fVar18) * (fVar25 - fVar36) - (param_1 - fVar36) * (fVar35 - fVar18) <
                  0.0) {
                fVar21 = local_120[lVar10 * 4 + 1];
                fVar22 = local_120[lVar10 * 4 + 2];
                fVar20 = fVar22 - fVar35;
                fVar39 = fVar21 - fVar25;
                fVar19 = param_2 - fVar35;
                fVar37 = param_1 - fVar25;
                if (fVar19 * fVar39 - fVar37 * fVar20 < 0.0) {
                  fVar23 = local_120[lVar11 * 4 + 1];
                  fVar24 = local_120[lVar11 * 4 + 2];
                  if (((param_2 - fVar22) * (fVar23 - fVar21) -
                       (param_1 - fVar21) * (fVar24 - fVar22) < 0.0) &&
                     ((fVar36 - fVar23) * (param_2 - fVar24) -
                      (param_1 - fVar23) * (fVar18 - fVar24) < 0.0)) {
                    fVar21 = *pfVar8;
                    fVar22 = *pfVar15 - fVar21;
                    fVar36 = fVar36 - fVar25;
                    fVar18 = fVar18 - fVar35;
                    fVar25 = *pfVar2 - fVar21;
                    fVar36 = fVar21 + ((fVar37 * fVar39 + fVar19 * fVar20) * fVar22) /
                                      (fVar20 * fVar20 + fVar39 * fVar39 + fVar22 * fVar22) +
                             ((fVar37 * fVar36 + fVar19 * fVar18) * fVar25) /
                             (fVar18 * fVar18 + fVar36 * fVar36 + fVar25 * fVar25);
                    if (0.0 <= fVar36) {
                      uVar4 = *(uint *)(param_7 + 0x1000);
                      uVar7 = uVar7 | 8;
                      if (uVar4 < 0x40) {
                        puVar1 = (undefined4 *)(param_7 + (ulong)uVar4 * 0x40);
                        *(uint *)(param_7 + 0x1000) = uVar4 + 1;
                        *puVar1 = *param_8;
                        puVar1[1] = param_8[1];
                        uVar3 = param_8[2];
                        puVar1[3] = -fVar36;
                        puVar1[4] = fVar36;
                        puVar1[5] = param_1;
                        puVar1[6] = param_2;
                        puVar1[0xd] = 0xffffffff;
                        puVar1[2] = uVar3;
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
    if (uVar7 == 0xf) break;
    piVar14 = piVar14 + 4;
    bVar6 = uVar9 < 6;
    uVar9 = uVar9 + 1;
  } while (bVar6);
  uVar7 = *(uint *)(param_7 + 0x1000);
  if (uVar7 != 0) {
    uVar9 = 0;
    pfVar8 = (float *)(param_7 + 0x18);
    do {
      fVar16 = param_9[1];
      fVar20 = *pfVar8;
      fVar17 = pfVar8[-2];
      fVar36 = pfVar8[-1];
      fVar25 = param_9[2];
      fVar19 = param_9[4];
      fVar39 = param_9[5];
      fVar21 = param_9[7];
      fVar37 = param_9[8];
      fVar18 = param_9[10];
      fVar35 = param_9[0xb];
      uVar9 = uVar9 + 1;
      pfVar8[-2] = fVar17 * *param_9 + fVar36 * param_9[3] + fVar20 * param_9[6] + param_9[9];
      pfVar8[-1] = fVar17 * fVar16 + fVar36 * fVar19 + fVar20 * fVar21 + fVar18;
      *pfVar8 = fVar17 * fVar25 + fVar36 * fVar39 + fVar20 * fVar37 + fVar35;
      pfVar8 = pfVar8 + 0x10;
    } while (uVar9 < uVar7);
  }
  return;
}


