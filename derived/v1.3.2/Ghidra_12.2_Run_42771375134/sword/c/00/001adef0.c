/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001adef0; name: FUN_001adef0
 */


void FUN_001adef0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 long param_5,long param_6,float *param_7,undefined8 param_8)

{
  float *pfVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
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
  undefined8 local_198;
  float local_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  
  fVar26 = param_7[3];
  fVar21 = param_7[4] * -2.0;
  fVar23 = *param_7;
  fVar24 = param_7[1];
  fVar22 = param_7[5] * -2.0;
  fVar17 = param_7[6] * -2.0;
  fVar20 = param_7[2];
  lVar15 = *(long *)(param_6 + 0x30);
  local_f0 = CONCAT44(-fVar24,-fVar23);
  local_e8 = CONCAT44(fVar26,-fVar20);
  fVar19 = fVar26 * fVar26 + -0.5;
  fVar29 = fVar21 * fVar23 + fVar22 * fVar24 + fVar17 * fVar20;
  pfVar1 = (float *)(param_6 + 4);
  local_e0 = CONCAT44(fVar24 * fVar29 +
                      (fVar22 * fVar19 - fVar26 * (fVar21 * fVar20 - fVar17 * fVar23)),
                      fVar23 * fVar29 +
                      (fVar21 * fVar19 - fVar26 * (fVar17 * fVar24 - fVar22 * fVar20)));
  local_d8 = CONCAT44(local_d8._4_4_,
                      (fVar17 * fVar19 - fVar26 * (fVar22 * fVar23 - fVar21 * fVar24)) +
                      fVar20 * fVar29);
  FUN_001ae520(&local_198,&local_f0,pfVar1);
  fVar17 = *(float *)(lVar15 + 0x44);
  fVar19 = *(float *)(lVar15 + 0x38);
  if (0.0 <= fVar17) {
    fVar20 = *(float *)(lVar15 + 0x3c);
    fVar21 = *(float *)(lVar15 + 0x40);
    fVar28 = fVar19 * (float)local_198 + fVar20 * fStack_18c + fVar21 * (float)local_180 +
             fStack_174;
    fVar23 = fVar19 * local_198._4_4_ + fVar20 * (float)local_188 + fVar21 * local_180._4_4_ +
             (float)local_170;
    fVar24 = fVar19 * local_190 + fVar20 * local_188._4_4_ + fVar21 * local_178 + local_170._4_4_;
    fVar21 = *(float *)(lVar15 + 0x48);
    fVar22 = *(float *)(lVar15 + 0x4c);
    fVar19 = fabsf(fVar17 * (float)local_198);
    fVar20 = fabsf(fStack_18c * fVar21);
    fVar26 = fabsf((float)local_180 * fVar22);
    fVar26 = fVar19 + fVar20 + fVar26;
    fVar19 = fabsf(fVar17 * local_198._4_4_);
    fVar20 = fabsf((float)local_188 * fVar21);
    fVar29 = fabsf(local_180._4_4_ * fVar22);
    fVar29 = fVar19 + fVar20 + fVar29;
    fVar17 = fabsf(fVar17 * local_190);
    fVar19 = fabsf(local_188._4_4_ * fVar21);
    fVar18 = fabsf(local_178 * fVar22);
    fVar18 = fVar17 + fVar19 + fVar18;
    fVar20 = fVar28 - fVar26;
    fVar21 = fVar23 - fVar29;
    fVar22 = fVar24 - fVar18;
    fVar17 = fVar28 + fVar26;
    fVar23 = fVar23 + fVar29;
    fVar24 = fVar24 + fVar18;
    fVar19 = *pfVar1;
  }
  else {
    fVar20 = fVar19 - fVar17;
    fVar22 = *(float *)(lVar15 + 0x40) - *(float *)(lVar15 + 0x4c);
    fVar24 = *(float *)(lVar15 + 0x40) + *(float *)(lVar15 + 0x4c);
    fVar21 = *(float *)(lVar15 + 0x3c) - *(float *)(lVar15 + 0x48);
    fVar17 = fVar17 + fVar19;
    fVar23 = *(float *)(lVar15 + 0x3c) + *(float *)(lVar15 + 0x48);
    fVar19 = *pfVar1;
  }
  if ((fVar19 == 1.0) && (*(float *)(param_6 + 8) == 1.0)) {
    bVar5 = *(float *)(param_6 + 0xc) == 1.0;
  }
  else {
    bVar5 = false;
  }
  local_f0 = 0x3f800000;
  local_e8 = 0;
  local_e0 = 0x3f800000;
  local_d8 = 0;
  local_a8 = 0;
  local_d0 = 0x3f8000003f800000;
  local_c8 = 0;
  local_b0 = 0x3f80000000000000;
  local_c0 = 0x3f80000000000000;
  local_b8 = 0;
  if (bVar5 == false) {
    FUN_001b0f90(&local_f0,pfVar1,param_6 + 0x10);
  }
  fVar26 = DAT_01d4c6a4;
  fVar19 = DAT_01d4c150;
  uVar11 = *(uint *)(param_5 + 0x10);
  if (uVar11 != 0) {
    uVar16 = 0;
    puVar2 = PTR_DAT_02711008 + 0x10;
    do {
      lVar12 = *(long *)(param_5 + 0x18) + uVar16 * 0x10;
      local_178 = *(float *)(lVar12 + 8);
      uVar10 = (ulong)(uint)local_178;
      if (local_178 != -NAN) {
        local_180 = (uint *)(*(long *)(param_5 + 8) + (ulong)*(uint *)(lVar12 + 0xc) * 4);
        local_108 = fVar26;
        local_100 = fVar26;
        fStack_104 = fVar26;
        fVar28 = fVar26;
        fVar31 = fVar26;
        fVar32 = fVar26;
        fVar29 = fVar19;
        local_f4 = fVar19;
        fVar18 = fVar19;
        fVar25 = fVar19;
        fVar27 = fVar19;
        fVar30 = fVar19;
        if (local_178 != 0.0) {
          lVar12 = uVar10 << 2;
          puVar13 = local_180;
          do {
            lVar14 = param_4 + (ulong)*puVar13 * 200;
            fVar33 = *(float *)(lVar14 + 0x30);
            fVar34 = *(float *)(lVar14 + 0x34);
            fVar35 = *(float *)(lVar14 + 0x38);
            if (fVar33 <= local_108) {
              local_108 = fVar33;
            }
            if (fVar34 <= fStack_104) {
              fStack_104 = fVar34;
            }
            if (fVar35 <= local_100) {
              local_100 = fVar35;
            }
            if (fVar29 <= fVar33) {
              fVar29 = fVar33;
            }
            if (fVar18 <= fVar34) {
              fVar18 = fVar34;
            }
            fVar33 = *(float *)(lVar14 + 0x40);
            fVar34 = *(float *)(lVar14 + 0x44);
            if (local_f4 <= fVar35) {
              local_f4 = fVar35;
            }
            fVar35 = *(float *)(lVar14 + 0x48);
            if (fVar33 <= fVar32) {
              fVar32 = fVar33;
            }
            if (fVar34 <= fVar31) {
              fVar31 = fVar34;
            }
            if (fVar35 <= fVar28) {
              fVar28 = fVar35;
            }
            if (fVar30 <= fVar33) {
              fVar30 = fVar33;
            }
            if (fVar27 <= fVar34) {
              fVar27 = fVar34;
            }
            if (fVar25 <= fVar35) {
              fVar25 = fVar35;
            }
            lVar12 = lVar12 + -4;
            puVar13 = puVar13 + 1;
          } while (lVar12 != 0);
        }
        if (fVar32 - param_3 <= local_108) {
          local_108 = fVar32 - param_3;
        }
        if (fVar31 - param_3 <= fStack_104) {
          fStack_104 = fVar31 - param_3;
        }
        if (fVar28 - param_3 <= local_100) {
          local_100 = fVar28 - param_3;
        }
        if (fVar29 <= fVar30 + param_3) {
          fVar29 = fVar30 + param_3;
        }
        if (fVar18 <= fVar27 + param_3) {
          fVar18 = fVar27 + param_3;
        }
        if (local_f4 <= fVar25 + param_3) {
          local_f4 = fVar25 + param_3;
        }
        bVar3 = false;
        bVar6 = false;
        bVar8 = false;
        if (local_100 <= fVar24) {
          bVar3 = false;
          bVar6 = false;
          bVar8 = true;
          if (!NAN(fVar22) && !NAN(local_f4)) {
            bVar3 = fVar22 < local_f4;
            bVar6 = fVar22 == local_f4;
            bVar8 = false;
          }
        }
        bVar4 = false;
        bVar7 = false;
        bVar9 = false;
        if (bVar6 || bVar3 != bVar8) {
          bVar4 = false;
          bVar7 = false;
          bVar9 = true;
          if (!NAN(fStack_104) && !NAN(fVar23)) {
            bVar4 = fStack_104 < fVar23;
            bVar7 = fStack_104 == fVar23;
            bVar9 = false;
          }
        }
        bVar3 = false;
        bVar6 = false;
        bVar8 = false;
        if (bVar7 || bVar4 != bVar9) {
          bVar3 = false;
          bVar6 = false;
          bVar8 = true;
          if (!NAN(local_108) && !NAN(fVar17)) {
            bVar3 = local_108 < fVar17;
            bVar6 = local_108 == fVar17;
            bVar8 = false;
          }
        }
        bVar4 = false;
        bVar7 = false;
        bVar9 = false;
        if (bVar6 || bVar3 != bVar8) {
          bVar4 = false;
          bVar7 = false;
          bVar9 = true;
          if (!NAN(fVar20) && !NAN(fVar29)) {
            bVar4 = fVar20 < fVar29;
            bVar7 = fVar20 == fVar29;
            bVar9 = false;
          }
        }
        bVar3 = false;
        bVar6 = false;
        bVar8 = false;
        if (bVar7 || bVar4 != bVar9) {
          bVar3 = false;
          bVar6 = false;
          bVar8 = true;
          if (!NAN(fVar21) && !NAN(fVar18)) {
            bVar3 = fVar21 < fVar18;
            bVar6 = fVar21 == fVar18;
            bVar8 = false;
          }
        }
        _local_fc = CONCAT44(fVar18,fVar29);
        if (bVar6 || bVar3 != bVar8) {
          local_190 = 2.8026e-45;
          local_168 = (undefined4)local_f0;
          local_164 = local_f0._4_4_;
          local_160 = local_e8;
          local_158 = (undefined4)local_e0;
          local_154 = local_e0._4_4_;
          local_150 = (undefined4)local_d8;
          local_14c = local_d8._4_4_;
          local_148 = (undefined4)local_d0;
          local_144 = local_d0._4_4_;
          local_140 = (undefined4)local_c8;
          local_13c = local_c8._4_4_;
          local_138 = (undefined4)local_c0;
          local_134 = local_c0._4_4_;
          local_130 = (undefined4)local_b8;
          local_12c = local_b8._4_4_;
          local_128 = (undefined4)local_b0;
          local_124 = local_b0._4_4_;
          local_120 = local_a8;
          local_118 = 0;
          puVar13 = local_180;
          uVar11 = (uint)local_178;
          while (uVar11 != 0) {
            lVar12 = param_4 + (ulong)*puVar13 * 200;
            uVar11 = (int)uVar10 - 1;
            uVar10 = (ulong)uVar11;
            *(undefined8 *)(lVar12 + 0xa0) = 0;
            *(undefined4 *)(lVar12 + 0xa8) = 0;
            *(undefined8 *)(lVar12 + 0xb8) = 0;
            *(undefined8 *)(lVar12 + 0xc0) = 0;
            puVar13 = puVar13 + 1;
          }
                    /* try { // try from 001ae4a0 to 001ae4bb has its CatchHandler @ 001ae518 */
          local_198 = puVar2;
          local_188 = param_4;
          local_170 = lVar15;
          local_11c = param_3;
          uStack_110 = param_8;
          FUN_001ace90(lVar15,param_7,&local_f0,bVar5,&local_108,&local_198);
          uVar11 = *(uint *)(param_5 + 0x10);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar11);
  }
  return;
}


