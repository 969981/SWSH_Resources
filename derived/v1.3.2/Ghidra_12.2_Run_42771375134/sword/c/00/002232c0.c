/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002232c0; name: FUN_002232c0
 */


void FUN_002232c0(long *param_1,float param_2,float *param_3,uint param_4)

{
  ulong uVar1;
  float *pfVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
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
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_118;
  float fStack_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  pfVar9 = param_3 + 6;
  pfVar2 = param_3 + 3;
  iVar5 = FUN_0023a9a0(param_1 + 8,param_1 + 10,param_3,pfVar2,pfVar9);
  if (iVar5 != 0) {
    local_f8 = param_3[3] - *param_3;
    local_f4 = param_3[4] - param_3[1];
    local_f0 = param_3[5] - param_3[2];
    local_108 = param_3[6] - *param_3;
    local_104 = param_3[7] - param_3[1];
    local_100 = param_3[8] - param_3[2];
    pfVar6 = (float *)param_1[7];
    local_b0 = pfVar6[3] - *pfVar6;
    fStack_ac = pfVar6[4] - pfVar6[1];
    local_a8 = pfVar6[5] - pfVar6[2];
    fVar13 = (float)FUN_002354e0(pfVar6,&local_b0,param_3,&local_f8,&local_108,&local_e4,&fStack_e8,
                                 &local_ec);
    fVar33 = *(float *)(param_1 + 0xc);
    if (fVar13 < fVar33 * fVar33) {
      fVar24 = local_f4 * local_100 - local_f0 * local_104;
      fVar26 = local_f0 * local_108 - local_100 * local_f8;
      fVar29 = local_104 * local_f8 - local_f4 * local_108;
      fVar17 = *param_3;
      fVar20 = param_3[1];
      fVar21 = param_3[2];
      if (fVar24 * fVar17 + fVar26 * fVar20 + fVar29 * fVar21 <=
          fVar24 * *(float *)(param_1 + 8) + fVar26 * *(float *)((long)param_1 + 0x44) +
          fVar29 * *(float *)(param_1 + 9)) {
        if (fVar13 <= DAT_01d4c194) {
          fVar13 = param_3[3];
          fVar26 = param_3[4];
          pfVar6 = (float *)param_1[7];
          fVar29 = param_3[5];
          fVar15 = param_3[6];
          fVar25 = param_3[7];
          fVar28 = param_3[8];
          local_144 = (fVar20 - fVar26) * (fVar21 - fVar28) - (fVar21 - fVar29) * (fVar20 - fVar25);
          local_148 = (fVar21 - fVar29) * (fVar17 - fVar15) - (fVar17 - fVar13) * (fVar21 - fVar28);
          local_14c = (fVar17 - fVar13) * (fVar20 - fVar25) - (fVar20 - fVar26) * (fVar17 - fVar15);
          fVar24 = local_14c * local_14c + local_144 * local_144 + local_148 * local_148;
          if (fVar24 <= 0.0) {
            local_144 = 0.0;
            local_148 = 0.0;
            local_14c = 0.0;
          }
          else {
            fVar24 = sqrtf(fVar24);
            fVar24 = 1.0 / fVar24;
            local_144 = local_144 * fVar24;
            local_148 = local_148 * fVar24;
            local_14c = local_14c * fVar24;
          }
          fVar32 = local_144 * *pfVar6 + local_148 * pfVar6[1] + local_14c * pfVar6[2];
          fVar35 = local_144 * pfVar6[3] + local_148 * pfVar6[4] + local_14c * pfVar6[5];
          fVar24 = fVar35;
          if (fVar32 <= fVar35) {
            fVar24 = fVar32;
          }
          fVar36 = fVar17 * local_144 + fVar20 * local_148 + fVar21 * local_14c;
          if (fVar32 <= fVar35) {
            fVar32 = fVar35;
          }
          fVar34 = fVar13 * local_144 + fVar26 * local_148 + fVar29 * local_14c;
          fVar35 = fVar36;
          if (fVar34 <= fVar36) {
            fVar35 = fVar34;
          }
          if (fVar36 <= fVar34) {
            fVar36 = fVar34;
          }
          fVar34 = fVar15 * local_144 + fVar25 * local_148 + fVar28 * local_14c;
          if (fVar34 <= fVar35) {
            fVar35 = fVar34;
          }
          if (fVar36 <= fVar34) {
            fVar36 = fVar34;
          }
          if (fVar33 + fVar32 < fVar35) {
            return;
          }
          if (fVar36 < fVar24 - fVar33) {
            return;
          }
          fVar34 = pfVar6[3] - *pfVar6;
          fVar27 = pfVar6[4] - pfVar6[1];
          fVar30 = pfVar6[5] - pfVar6[2];
          fVar35 = (fVar33 + fVar32) - fVar35;
          fVar36 = fVar36 - (fVar24 - fVar33);
          fVar24 = 0.0;
          if (fVar36 <= fVar35) {
            fVar35 = fVar36;
          }
          fVar36 = 0.0;
          local_140 = 0.0;
          fVar32 = fVar34 * fVar34 + fVar27 * fVar27 + fVar30 * fVar30;
          if (0.0 < fVar32) {
            fVar24 = sqrtf(fVar32);
            fVar24 = 1.0 / fVar24;
            local_140 = fVar34 * fVar24;
            fVar36 = fVar27 * fVar24;
            fVar24 = fVar30 * fVar24;
          }
          fVar32 = DAT_01d4c1cc;
          uVar7 = 0;
          do {
            while (((&DAT_01d4cfb8)[uVar7] & param_4 & 0xff) == 0) {
              uVar7 = uVar7 + 1;
              if (2 < uVar7) goto LAB_00223984;
            }
            uVar1 = uVar7 + 1;
            pfVar11 = param_3 + uVar7 * 3;
            pfVar10 = param_3 + (ulong)((int)uVar1 + ((uint)uVar7 >> 1) & 3) * 3;
            fVar27 = fVar36 * (pfVar11[2] - pfVar10[2]) - fVar24 * (pfVar11[1] - pfVar10[1]);
            fVar31 = local_140 * (pfVar11[1] - pfVar10[1]) - fVar36 * (*pfVar11 - *pfVar10);
            fVar30 = fVar24 * (*pfVar11 - *pfVar10) - local_140 * (pfVar11[2] - pfVar10[2]);
            fVar34 = fabsf(fVar27);
            if ((fVar32 < fVar34) || (fVar34 = fabsf(fVar30), fVar32 < fVar34)) {
LAB_00223828:
              fVar14 = fVar31 * fVar31 + fVar27 * fVar27 + fVar30 * fVar30;
              fVar18 = 0.0;
              fVar34 = 0.0;
              fVar22 = 0.0;
              if (0.0 < fVar14) {
                fVar34 = sqrtf(fVar14);
                fVar34 = 1.0 / fVar34;
                fVar18 = fVar27 * fVar34;
                fVar22 = fVar30 * fVar34;
                fVar34 = fVar31 * fVar34;
              }
              fVar14 = fVar18 * *pfVar6 + fVar22 * pfVar6[1] + fVar34 * pfVar6[2];
              fVar30 = fVar18 * pfVar6[3] + fVar22 * pfVar6[4] + fVar34 * pfVar6[5];
              fVar31 = fVar17 * fVar18 + fVar20 * fVar22 + fVar21 * fVar34;
              fVar23 = fVar13 * fVar18 + fVar26 * fVar22 + fVar29 * fVar34;
              fVar27 = fVar14;
              if (fVar14 <= fVar30) {
                fVar27 = fVar30;
                fVar30 = fVar14;
              }
              fVar14 = fVar31;
              if (fVar23 <= fVar31) {
                fVar14 = fVar23;
              }
              if (fVar31 <= fVar23) {
                fVar31 = fVar23;
              }
              fVar23 = fVar15 * fVar18 + fVar25 * fVar22 + fVar28 * fVar34;
              fVar30 = fVar30 - fVar33;
              if (fVar23 <= fVar14) {
                fVar14 = fVar23;
              }
              if (fVar31 <= fVar23) {
                fVar31 = fVar23;
              }
              bVar4 = true;
              if ((fVar14 <= fVar33 + fVar27) && (bVar4 = false, !NAN(fVar31) && !NAN(fVar30))) {
                bVar4 = fVar31 < fVar30;
              }
              if (bVar4) {
                return;
              }
              fVar14 = (fVar33 + fVar27) - fVar14;
              if (fVar31 - fVar30 <= fVar14) {
                fVar14 = fVar31 - fVar30;
              }
              if (fVar14 < fVar35) {
                local_14c = fVar34;
                local_148 = fVar22;
                local_144 = fVar18;
                fVar35 = fVar14;
              }
            }
            else {
              fVar34 = fabsf(fVar31);
              if (fVar32 < fVar34) goto LAB_00223828;
            }
            uVar7 = uVar1;
          } while (uVar1 < 3);
LAB_00223984:
          if (local_144 * ((*pfVar6 + pfVar6[3]) * 0.5 - (fVar17 + fVar13 + fVar15) * DAT_01d4bd24)
              + local_148 *
                ((pfVar6[1] + pfVar6[4]) * 0.5 - (fVar20 + fVar26 + fVar25) * DAT_01d4bd24) +
              local_14c *
              ((pfVar6[2] + pfVar6[5]) * 0.5 - (fVar21 + fVar29 + fVar28) * DAT_01d4bd24) < 0.0) {
            local_144 = -local_144;
            local_148 = -local_148;
            local_14c = -local_14c;
          }
          fVar26 = *(float *)(param_1 + 0xd);
          pfVar6 = (float *)param_1[7];
          lVar12 = *param_1;
          fVar13 = *pfVar6;
          fVar17 = pfVar6[1];
          fVar33 = pfVar6[2];
          fVar20 = pfVar6[3];
          fVar21 = pfVar6[4];
          fVar24 = pfVar6[5];
          fVar28 = fVar20 - fVar13;
          fVar15 = fVar21 - fVar17;
          fVar25 = fVar24 - fVar33;
          local_118 = local_144;
          fStack_114 = local_148;
          local_110 = local_14c;
          local_c0 = fVar20;
          fStack_bc = fVar21;
          local_b8 = fVar24;
          local_b0 = fVar13;
          fStack_ac = fVar17;
          local_a8 = fVar33;
          fVar29 = sqrtf(fVar28 * fVar28 + fVar15 * fVar15 + fVar25 * fVar25);
          if (0.0 < fVar29) {
            fVar29 = DAT_01d4c4d4 / fVar29;
            local_b0 = fVar13 - fVar28 * fVar29;
            fStack_ac = fVar17 - fVar15 * fVar29;
            local_a8 = fVar33 - fVar25 * fVar29;
            local_c0 = fVar28 * fVar29 + fVar20;
            fStack_bc = fVar15 * fVar29 + fVar21;
            local_b8 = fVar25 * fVar29 + fVar24;
          }
          fVar33 = -local_148;
          fVar13 = -local_144;
          fVar17 = -local_14c;
          local_e0 = fVar13;
          fStack_dc = fVar33;
          local_d8 = fVar17;
          uVar7 = FUN_00239870(param_3,pfVar2,&local_e0,&local_b0,&local_c0,&local_d4,&local_d0);
          if ((uVar7 & 1) != 0) {
            fVar20 = *(float *)(param_1 + 1);
            fVar24 = *(float *)((long)param_1 + 0xc);
            fVar15 = *(float *)(param_1 + 2);
            fVar21 = *(float *)((long)param_1 + 0x14);
            fVar28 = local_d0 * fVar24;
            fVar32 = local_d0 * fVar15;
            fVar29 = *(float *)(param_1 + 3);
            fVar36 = *(float *)((long)param_1 + 0x1c);
            fVar35 = fStack_cc * fVar36;
            fVar25 = *(float *)(param_1 + 4);
            fVar34 = *(float *)((long)param_1 + 0x24);
            fVar27 = *(float *)(param_1 + 5);
            local_d0 = local_d0 * fVar20 + fStack_cc * fVar21 + local_c8 * fVar25 +
                       *(float *)((long)param_1 + 0x2c);
            fStack_cc = fVar28 + fStack_cc * fVar29 + local_c8 * fVar34 + *(float *)(param_1 + 6);
            local_c8 = fVar32 + fVar35 + local_c8 * fVar27 + *(float *)((long)param_1 + 0x34);
            uVar3 = *(uint *)(lVar12 + 0x1000);
            if (uVar3 < 0x40) {
              pfVar6 = (float *)(lVar12 + (ulong)uVar3 * 0x40);
              *(uint *)(lVar12 + 0x1000) = uVar3 + 1;
              pfVar6[4] = local_d0;
              pfVar6[5] = fStack_cc;
              pfVar6[6] = local_c8;
              pfVar6[0xd] = param_2;
              *pfVar6 = local_144 * fVar20 + local_148 * fVar21 + local_14c * fVar25;
              pfVar6[1] = local_144 * fVar24 + local_148 * fVar29 + local_14c * fVar34;
              pfVar6[2] = local_144 * fVar15 + local_148 * fVar36 + local_14c * fVar27;
              pfVar6[3] = -(fVar26 + local_d4);
            }
          }
          local_e0 = fVar13;
          fStack_dc = fVar33;
          local_d8 = fVar17;
          uVar7 = FUN_00239870(pfVar2,pfVar9,&local_e0,&local_b0,&local_c0,&local_d4,&local_d0);
          if ((uVar7 & 1) != 0) {
            fVar20 = *(float *)(param_1 + 1);
            fVar24 = *(float *)((long)param_1 + 0xc);
            fVar15 = *(float *)(param_1 + 2);
            fVar21 = *(float *)((long)param_1 + 0x14);
            fVar28 = local_d0 * fVar24;
            fVar32 = local_d0 * fVar15;
            fVar29 = *(float *)(param_1 + 3);
            fVar36 = *(float *)((long)param_1 + 0x1c);
            fVar35 = fStack_cc * fVar36;
            fVar25 = *(float *)(param_1 + 4);
            fVar34 = *(float *)((long)param_1 + 0x24);
            fVar27 = *(float *)(param_1 + 5);
            local_d0 = local_d0 * fVar20 + fStack_cc * fVar21 + local_c8 * fVar25 +
                       *(float *)((long)param_1 + 0x2c);
            fStack_cc = fVar28 + fStack_cc * fVar29 + local_c8 * fVar34 + *(float *)(param_1 + 6);
            local_c8 = fVar32 + fVar35 + local_c8 * fVar27 + *(float *)((long)param_1 + 0x34);
            uVar3 = *(uint *)(lVar12 + 0x1000);
            if (uVar3 < 0x40) {
              pfVar2 = (float *)(lVar12 + (ulong)uVar3 * 0x40);
              *(uint *)(lVar12 + 0x1000) = uVar3 + 1;
              pfVar2[4] = local_d0;
              pfVar2[5] = fStack_cc;
              pfVar2[6] = local_c8;
              pfVar2[0xd] = param_2;
              *pfVar2 = local_144 * fVar20 + local_148 * fVar21 + local_14c * fVar25;
              pfVar2[1] = local_144 * fVar24 + local_148 * fVar29 + local_14c * fVar34;
              pfVar2[2] = local_144 * fVar15 + local_148 * fVar36 + local_14c * fVar27;
              pfVar2[3] = -(fVar26 + local_d4);
            }
          }
          local_e0 = fVar13;
          fStack_dc = fVar33;
          local_d8 = fVar17;
          uVar7 = FUN_00239870(pfVar9,param_3,&local_e0,&local_b0,&local_c0,&local_d4,&local_d0);
          if ((uVar7 & 1) != 0) {
            fVar13 = *(float *)(param_1 + 1);
            fVar17 = *(float *)((long)param_1 + 0xc);
            fVar21 = *(float *)(param_1 + 2);
            fVar33 = *(float *)((long)param_1 + 0x14);
            fVar29 = local_d0 * fVar17;
            fVar15 = local_d0 * fVar21;
            fVar20 = *(float *)(param_1 + 3);
            fVar28 = *(float *)((long)param_1 + 0x1c);
            fVar25 = fStack_cc * fVar28;
            fVar24 = *(float *)(param_1 + 4);
            fVar32 = *(float *)((long)param_1 + 0x24);
            fVar35 = *(float *)(param_1 + 5);
            local_d0 = local_d0 * fVar13 + fStack_cc * fVar33 + local_c8 * fVar24 +
                       *(float *)((long)param_1 + 0x2c);
            fStack_cc = fVar29 + fStack_cc * fVar20 + local_c8 * fVar32 + *(float *)(param_1 + 6);
            local_c8 = fVar15 + fVar25 + local_c8 * fVar35 + *(float *)((long)param_1 + 0x34);
            uVar3 = *(uint *)(lVar12 + 0x1000);
            if (uVar3 < 0x40) {
              pfVar9 = (float *)(lVar12 + (ulong)uVar3 * 0x40);
              *(uint *)(lVar12 + 0x1000) = uVar3 + 1;
              pfVar9[4] = local_d0;
              pfVar9[5] = fStack_cc;
              pfVar9[6] = local_c8;
              pfVar9[0xd] = param_2;
              *pfVar9 = local_144 * fVar13 + local_148 * fVar33 + local_14c * fVar24;
              pfVar9[1] = local_144 * fVar17 + local_148 * fVar20 + local_14c * fVar32;
              pfVar9[2] = local_144 * fVar21 + local_148 * fVar28 + local_14c * fVar35;
              pfVar9[3] = -(fVar26 + local_d4);
            }
          }
          uVar19 = *(undefined4 *)((long)param_1 + 100);
          uVar16 = (undefined4)param_1[0xd];
          lVar12 = *param_1;
          lVar8 = param_1[7];
          pfVar9 = &local_118;
        }
        else {
          uVar7 = FUN_002317c0(fStack_e8,local_ec,param_4);
          if ((uVar7 & 1) == 0) {
            fVar13 = (1.0 - fStack_e8) - local_ec;
            pfVar6 = (float *)param_1[7];
            local_e0 = (*pfVar6 + local_e4 * (pfVar6[3] - *pfVar6)) -
                       (fVar13 * *param_3 + fStack_e8 * param_3[3] + local_ec * param_3[6]);
            fStack_dc = (pfVar6[1] + local_e4 * (pfVar6[4] - pfVar6[1])) -
                        (fVar13 * param_3[1] + fStack_e8 * param_3[4] + local_ec * param_3[7]);
            local_d8 = (pfVar6[2] + local_e4 * (pfVar6[5] - pfVar6[2])) -
                       (fVar13 * param_3[2] + fStack_e8 * param_3[5] + local_ec * param_3[8]);
            fVar13 = sqrtf(local_e0 * local_e0 + fStack_dc * fStack_dc + local_d8 * local_d8);
            if (fVar13 == 0.0) {
              return;
            }
            fVar13 = 1.0 / fVar13;
            local_e0 = fVar13 * local_e0;
            fStack_dc = fVar13 * fStack_dc;
            local_d8 = fVar13 * local_d8;
          }
          else {
            fVar13 = fVar29 * fVar29 + fVar24 * fVar24 + fVar26 * fVar26;
            if (fVar13 <= 0.0) {
              local_e0 = 0.0;
              fStack_dc = 0.0;
              local_d8 = 0.0;
            }
            else {
              local_d8 = sqrtf(fVar13);
              local_d8 = 1.0 / local_d8;
              local_e0 = fVar24 * local_d8;
              fStack_dc = fVar26 * local_d8;
              local_d8 = fVar29 * local_d8;
            }
          }
          fVar26 = *(float *)((long)param_1 + 100);
          fVar29 = *(float *)(param_1 + 0xd);
          pfVar6 = (float *)param_1[7];
          lVar12 = *param_1;
          fVar13 = *pfVar6;
          fVar17 = pfVar6[1];
          fVar33 = pfVar6[2];
          fVar20 = pfVar6[3];
          fVar21 = pfVar6[4];
          fVar24 = pfVar6[5];
          fVar25 = fVar20 - fVar13;
          fVar28 = fVar21 - fVar17;
          fVar32 = fVar24 - fVar33;
          local_c0 = fVar20;
          fStack_bc = fVar21;
          local_b8 = fVar24;
          local_b0 = fVar13;
          fStack_ac = fVar17;
          local_a8 = fVar33;
          fVar15 = sqrtf(fVar25 * fVar25 + fVar28 * fVar28 + fVar32 * fVar32);
          if (0.0 < fVar15) {
            fVar15 = DAT_01d4c4d4 / fVar15;
            local_b0 = fVar13 - fVar25 * fVar15;
            fStack_ac = fVar17 - fVar28 * fVar15;
            local_a8 = fVar33 - fVar32 * fVar15;
            local_c0 = fVar25 * fVar15 + fVar20;
            fStack_bc = fVar28 * fVar15 + fVar21;
            local_b8 = fVar32 * fVar15 + fVar24;
          }
          fVar26 = fVar29 + fVar26;
          uVar7 = FUN_00239870(param_3,pfVar2,&local_e0,&local_b0,&local_c0,&local_118,&local_d0);
          if (((uVar7 & 1) != 0) && (local_118 < fVar26)) {
            fVar13 = *(float *)(param_1 + 1);
            fVar33 = *(float *)((long)param_1 + 0xc);
            fVar20 = *(float *)(param_1 + 2);
            fVar17 = *(float *)((long)param_1 + 0x14);
            fVar25 = local_d0 * fVar33;
            fVar32 = local_d0 * fVar20;
            fVar21 = *(float *)(param_1 + 3);
            fVar24 = *(float *)((long)param_1 + 0x1c);
            fVar36 = fStack_cc * fVar24;
            fVar15 = *(float *)(param_1 + 4);
            fVar28 = *(float *)((long)param_1 + 0x24);
            fVar35 = *(float *)(param_1 + 5);
            local_d0 = local_d0 * fVar13 + fStack_cc * fVar17 + local_c8 * fVar15 +
                       *(float *)((long)param_1 + 0x2c);
            fStack_cc = fVar25 + fStack_cc * fVar21 + local_c8 * fVar28 + *(float *)(param_1 + 6);
            local_c8 = fVar32 + fVar36 + local_c8 * fVar35 + *(float *)((long)param_1 + 0x34);
            uVar3 = *(uint *)(lVar12 + 0x1000);
            if (uVar3 < 0x40) {
              pfVar6 = (float *)(lVar12 + (ulong)uVar3 * 0x40);
              *(uint *)(lVar12 + 0x1000) = uVar3 + 1;
              pfVar6[4] = local_d0;
              pfVar6[5] = fStack_cc;
              pfVar6[6] = local_c8;
              *pfVar6 = fVar13 * local_e0 + fVar17 * fStack_dc + fVar15 * local_d8;
              pfVar6[1] = fVar33 * local_e0 + fVar21 * fStack_dc + fVar28 * local_d8;
              pfVar6[2] = fVar20 * local_e0 + fVar24 * fStack_dc + fVar35 * local_d8;
              pfVar6[3] = local_118 - fVar29;
              pfVar6[0xd] = param_2;
            }
          }
          uVar7 = FUN_00239870(pfVar2,pfVar9,&local_e0,&local_b0,&local_c0,&local_118,&local_d0);
          if (((uVar7 & 1) != 0) && (local_118 < fVar26)) {
            fVar13 = *(float *)(param_1 + 1);
            fVar33 = *(float *)((long)param_1 + 0xc);
            fVar20 = *(float *)(param_1 + 2);
            fVar17 = *(float *)((long)param_1 + 0x14);
            fVar25 = local_d0 * fVar33;
            fVar32 = local_d0 * fVar20;
            fVar21 = *(float *)(param_1 + 3);
            fVar24 = *(float *)((long)param_1 + 0x1c);
            fVar36 = fStack_cc * fVar24;
            fVar15 = *(float *)(param_1 + 4);
            fVar28 = *(float *)((long)param_1 + 0x24);
            fVar35 = *(float *)(param_1 + 5);
            local_d0 = local_d0 * fVar13 + fStack_cc * fVar17 + local_c8 * fVar15 +
                       *(float *)((long)param_1 + 0x2c);
            fStack_cc = fVar25 + fStack_cc * fVar21 + local_c8 * fVar28 + *(float *)(param_1 + 6);
            local_c8 = fVar32 + fVar36 + local_c8 * fVar35 + *(float *)((long)param_1 + 0x34);
            uVar3 = *(uint *)(lVar12 + 0x1000);
            if (uVar3 < 0x40) {
              pfVar2 = (float *)(lVar12 + (ulong)uVar3 * 0x40);
              *(uint *)(lVar12 + 0x1000) = uVar3 + 1;
              pfVar2[4] = local_d0;
              pfVar2[5] = fStack_cc;
              pfVar2[6] = local_c8;
              *pfVar2 = fVar13 * local_e0 + fVar17 * fStack_dc + fVar15 * local_d8;
              pfVar2[1] = fVar33 * local_e0 + fVar21 * fStack_dc + fVar28 * local_d8;
              pfVar2[2] = fVar20 * local_e0 + fVar24 * fStack_dc + fVar35 * local_d8;
              pfVar2[3] = local_118 - fVar29;
              pfVar2[0xd] = param_2;
            }
          }
          uVar7 = FUN_00239870(pfVar9,param_3,&local_e0,&local_b0,&local_c0,&local_118,&local_d0);
          if (((uVar7 & 1) != 0) && (local_118 < fVar26)) {
            fVar13 = *(float *)(param_1 + 1);
            fVar33 = *(float *)((long)param_1 + 0xc);
            fVar20 = *(float *)(param_1 + 2);
            fVar17 = *(float *)((long)param_1 + 0x14);
            fVar15 = local_d0 * fVar33;
            fVar28 = local_d0 * fVar20;
            fVar21 = *(float *)(param_1 + 3);
            fVar24 = *(float *)((long)param_1 + 0x1c);
            fVar35 = fStack_cc * fVar24;
            fVar26 = *(float *)(param_1 + 4);
            fVar25 = *(float *)((long)param_1 + 0x24);
            fVar32 = *(float *)(param_1 + 5);
            local_d0 = local_d0 * fVar13 + fStack_cc * fVar17 + local_c8 * fVar26 +
                       *(float *)((long)param_1 + 0x2c);
            fStack_cc = fVar15 + fStack_cc * fVar21 + local_c8 * fVar25 + *(float *)(param_1 + 6);
            local_c8 = fVar28 + fVar35 + local_c8 * fVar32 + *(float *)((long)param_1 + 0x34);
            uVar3 = *(uint *)(lVar12 + 0x1000);
            if (uVar3 < 0x40) {
              pfVar9 = (float *)(lVar12 + (ulong)uVar3 * 0x40);
              *(uint *)(lVar12 + 0x1000) = uVar3 + 1;
              pfVar9[4] = local_d0;
              pfVar9[5] = fStack_cc;
              pfVar9[6] = local_c8;
              *pfVar9 = fVar13 * local_e0 + fVar17 * fStack_dc + fVar26 * local_d8;
              pfVar9[1] = fVar33 * local_e0 + fVar21 * fStack_dc + fVar25 * local_d8;
              pfVar9[2] = fVar20 * local_e0 + fVar24 * fStack_dc + fVar32 * local_d8;
              pfVar9[3] = local_118 - fVar29;
              pfVar9[0xd] = param_2;
            }
          }
          uVar19 = *(undefined4 *)((long)param_1 + 100);
          uVar16 = (undefined4)param_1[0xd];
          lVar12 = *param_1;
          lVar8 = param_1[7];
          pfVar9 = &local_e0;
        }
        FUN_002242e0(uVar16,uVar19,param_1 + 1,lVar12,lVar8,param_3,pfVar9,param_2);
      }
    }
  }
  return;
}


