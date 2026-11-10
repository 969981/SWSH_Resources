/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00283170; name: FUN_00283170
 */


undefined8
FUN_00283170(undefined1 (*param_1) [12],float *param_2,long *param_3,long *param_4,float *param_5,
            float *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
            undefined4 *param_10)

{
  undefined1 (*pauVar1) [12];
  float fVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float extraout_s0;
  float extraout_s0_00;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float extraout_var;
  float extraout_var_00;
  float fVar27;
  float fVar28;
  float extraout_var_01;
  float fVar29;
  float extraout_var_02;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  int iVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar45;
  undefined1 auVar46 [12];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined8 local_1920;
  ulong uStack_1918;
  undefined8 local_1910;
  ulong uStack_1908;
  uint local_1900 [2];
  float local_18f8 [768];
  uint local_cf8;
  undefined1 local_cf4 [4];
  float local_cf0 [768];
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  ulong uStack_c8;
  float local_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [8];
  undefined1 auStack_98 [8];
  
  uVar51 = *param_8;
  auVar12 = *param_1;
  fVar21 = *param_2;
  fVar25 = param_2[1];
  fVar28 = param_2[2];
  auVar58 = *(undefined1 (*) [16])(param_6 + 8);
  fVar49 = (float)*(undefined8 *)(param_6 + 0xe);
  fVar50 = (float)((ulong)*(undefined8 *)(param_6 + 0xe) >> 0x20);
  fVar47 = (float)*(undefined8 *)(param_6 + 0xc);
  fVar48 = (float)((ulong)*(undefined8 *)(param_6 + 0xc) >> 0x20);
  fVar2 = param_2[0x10];
  fVar22 = (fVar47 + *param_6 * fVar21 + param_6[4] * fVar25 + auVar58._0_4_ * fVar28) -
           auVar12._0_4_;
  fVar26 = (fVar48 + param_6[1] * fVar21 + param_6[5] * fVar25 + auVar58._4_4_ * fVar28) -
           auVar12._4_4_;
  fVar28 = (fVar49 + param_6[2] * fVar21 + param_6[6] * fVar25 + auVar58._8_4_ * fVar28) -
           auVar12._8_4_;
  fVar31 = (fVar50 + 0.0) - 0.0;
  uVar13 = *(undefined8 *)(param_2 + 0x11);
  uVar3 = *(undefined4 *)(param_1[5] + 4);
  fVar32 = param_2[0x13];
  uVar14 = *(undefined8 *)*(undefined1 (*) [12])(param_1[5] + 8);
  fVar33 = *(float *)(param_1[6] + 4);
  auVar12 = *(undefined1 (*) [12])(param_1[5] + 8);
  uStack_b8 = CONCAT44(fVar31,fVar28);
  local_c0 = fVar22;
  fStack_bc = fVar26;
  (**(code **)(*param_3 + 0x10))(param_3,&local_c0);
  fVar21 = -local_c0;
  fVar25 = -fStack_bc;
  fVar29 = -(float)uStack_b8;
  auVar58 = *(undefined1 (*) [16])(param_5 + 8);
  uStack_c8 = (ulong)(uint)(param_5[2] * fVar21 + param_5[6] * fVar25 + auVar58._8_4_ * fVar29);
  local_d0 = CONCAT44(param_5[1] * fVar21 + param_5[5] * fVar25 + auVar58._4_4_ * fVar29,
                      *param_5 * fVar21 + param_5[4] * fVar25 + auVar58._0_4_ * fVar29);
  (**(code **)(*param_4 + 0x10))(param_4,&local_d0);
  local_e0 = param_5[0xc] +
             *param_5 * extraout_s0 + param_5[4] * extraout_var + param_5[8] * extraout_var_01;
  fStack_dc = param_5[0xd] +
              param_5[1] * extraout_s0 + param_5[5] * extraout_var + param_5[9] * extraout_var_01;
  fStack_d8 = param_5[0xe] +
              param_5[2] * extraout_s0 + param_5[6] * extraout_var + param_5[10] * extraout_var_01;
  fStack_d4 = param_5[0xf] + 0.0;
  auVar58 = *(undefined1 (*) [16])(param_6 + 8);
  auVar36 = *(undefined1 (*) [16])(param_6 + 0xc);
  local_cf8 = 0;
  local_1900[0] = 0;
  uStack_e8 = CONCAT44(auVar36._12_4_ + 0.0,
                       auVar36._8_4_ +
                       param_6[2] * extraout_s0_00 + param_6[6] * extraout_var_00 +
                       auVar58._8_4_ * extraout_var_02);
  local_f0 = CONCAT44(auVar36._4_4_ +
                      param_6[1] * extraout_s0_00 + param_6[5] * extraout_var_00 +
                      auVar58._4_4_ * extraout_var_02,
                      auVar36._0_4_ +
                      *param_6 * extraout_s0_00 + param_6[4] * extraout_var_00 +
                      auVar58._0_4_ * extraout_var_02);
  FUN_00280200(param_1,param_3,&local_cf8,&local_f0,&local_c0);
  FUN_00280200(param_2,param_4,local_1900,&local_e0,&local_d0);
  uVar15 = local_1900[0];
  uVar16 = (ulong)local_cf8;
  if (local_cf8 != 0) {
    uVar18 = 0;
    fVar54 = -(float)uVar14;
    fVar55 = -(float)((ulong)uVar14 >> 0x20);
    fVar21 = (float)uVar13;
    fVar29 = -fVar21;
    fVar25 = (float)((ulong)uVar13 >> 0x20);
    fVar52 = -fVar25;
    fVar53 = -fVar32;
    uVar19 = (ulong)local_1900[0];
    do {
      if (uVar15 != 0) {
        pauVar1 = (undefined1 (*) [12])(local_cf4 + uVar18 * 0xc);
        fVar56 = *(float *)*pauVar1;
        fVar57 = local_cf0[uVar18 * 3];
        uVar14 = *(undefined8 *)*pauVar1;
        uVar13 = *(undefined8 *)(local_cf0 + uVar18 * 3);
        auVar58._12_4_ = 0;
        auVar58._0_12_ = *pauVar1;
        auVar36._12_4_ = 0;
        auVar36._0_12_ = *pauVar1;
        auVar58 = NEON_ext(auVar58,auVar36,8,1);
        uVar17 = 0;
        pfVar20 = local_18f8;
        do {
          fVar23 = pfVar20[-1];
          fVar30 = *pfVar20;
          fVar40 = pfVar20[1];
          fVar24 = *param_6 * fVar23 + fVar30 * param_6[4] + param_6[8] * fVar40;
          fVar27 = param_6[1] * fVar23 + fVar30 * param_6[5] + param_6[9] * fVar40;
          fVar30 = param_6[2] * fVar23 + fVar30 * param_6[6] + param_6[10] * fVar40;
          auVar4._4_4_ = fVar27;
          auVar4._0_4_ = fVar24;
          auVar4._8_4_ = fVar30;
          auVar4._12_4_ = 0;
          auVar5._4_4_ = fVar27;
          auVar5._0_4_ = fVar24;
          auVar5._8_4_ = fVar30;
          auVar5._12_4_ = 0;
          auVar36 = NEON_ext(auVar4,auVar5,8,1);
          fVar40 = fVar56 * fVar27 - (float)uVar13 * fVar24;
          uVar34 = NEON_ext(CONCAT44(fVar57 * fVar30 - (float)((ulong)uVar13 >> 0x20) * fVar27,
                                     fVar40),
                            CONCAT44(auVar58._4_4_ * fVar27 - fVar57 * auVar36._4_4_,
                                     auVar58._0_4_ * fVar24 - fVar56 * auVar36._0_4_),4,1);
          fVar24 = (float)uVar34;
          fVar27 = (float)((ulong)uVar34 >> 0x20);
          auVar37._0_4_ = fVar24 * fVar24;
          auVar37._4_4_ = fVar27 * fVar27;
          auVar37._8_4_ = fVar40 * fVar40;
          auVar37._12_4_ = 0;
          auVar36 = NEON_ext(auVar37,auVar37,8,1);
          fVar23 = auVar36._0_4_ + auVar36._4_4_;
          fVar30 = auVar37._0_4_ + auVar37._4_4_ + fVar23;
          uVar34 = CONCAT44(auVar37._0_4_ + auVar37._4_4_ + fVar23,fVar30);
          if (1.1920929e-07 <= fVar30) {
            uVar42 = NEON_frsqrte(uVar34,4);
            fVar30 = (float)uVar42;
            fVar23 = (float)((ulong)uVar42 >> 0x20);
            uVar42 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar30 * fVar30),uVar34,4);
            fVar30 = fVar30 * (float)uVar42;
            fVar23 = fVar23 * (float)((ulong)uVar42 >> 0x20);
            uVar42 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar30 * fVar30),uVar34,4);
            fVar30 = fVar30 * (float)uVar42;
            fVar23 = fVar23 * (float)((ulong)uVar42 >> 0x20);
            uVar42 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar30 * fVar30),uVar34,4);
            fVar30 = fVar30 * (float)uVar42;
            fVar23 = fVar23 * (float)((ulong)uVar42 >> 0x20);
            uVar34 = NEON_frsqrts(CONCAT44(fVar23 * fVar23,fVar30 * fVar30),uVar34,4);
            fVar30 = fVar30 * (float)uVar34;
            fVar24 = fVar24 * fVar30;
            fVar27 = fVar27 * fVar30;
            fVar40 = fVar40 * fVar30;
            auVar46._0_4_ = -(uint)(0.0 < fVar24);
            auVar46._4_4_ = -(uint)(0.0 < fVar27);
            auVar46._8_4_ = -(uint)(0.0 < fVar40);
            auVar10._4_4_ = fVar55;
            auVar10._0_4_ = fVar54;
            auVar10._8_4_ = -fVar33;
            auVar11._4_4_ = fVar55;
            auVar11._0_4_ = fVar54;
            auVar11._8_4_ = -fVar33;
            auVar11 = auVar11 ^ (auVar10 ^ auVar12) & auVar46;
            fVar30 = param_5[8] * fVar40 + *param_5 * fVar24 + param_5[4] * fVar27;
            fVar23 = param_5[9] * fVar40 + param_5[1] * fVar24 + param_5[5] * fVar27;
            local_1920 = CONCAT44(fVar23,fVar30);
            fVar39 = param_5[10] * fVar40 + param_5[2] * fVar24 + param_5[6] * fVar27;
            uStack_1918 = (ulong)(uint)fVar39;
            uStack_1908 = (ulong)(uint)fVar40;
            local_1910 = CONCAT44(fVar27,fVar24);
            auVar38._0_4_ =
                 fVar30 * (float)((uint)fVar29 ^
                                 ((uint)fVar29 ^ (uint)fVar21) & -(uint)(0.0 < fVar30));
            auVar38._4_4_ =
                 fVar23 * (float)((uint)fVar52 ^
                                 ((uint)fVar52 ^ (uint)fVar25) & -(uint)(0.0 < fVar23));
            auVar38._8_4_ =
                 fVar39 * (float)((uint)fVar53 ^
                                 ((uint)fVar53 ^ (uint)fVar32) & -(uint)(0.0 < fVar39));
            auVar38._12_4_ = 0;
            auVar36 = NEON_ext(auVar38,auVar38,8,1);
            fVar30 = auVar36._0_4_ + auVar36._4_4_;
            auVar43._0_4_ = fVar22 * fVar24;
            auVar43._4_4_ = fVar26 * fVar27;
            auVar43._8_4_ = fVar28 * fVar40;
            auVar43._12_4_ = fVar31 * 0.0;
            auVar36 = NEON_ext(auVar43,auVar43,8,1);
            fVar24 = fVar24 * auVar11._0_4_;
            fVar27 = fVar27 * auVar11._4_4_;
            fVar40 = fVar40 * auVar11._8_4_;
            fVar23 = auVar36._0_4_ + auVar36._4_4_;
            uVar35 = NEON_fmax(CONCAT44(auVar38._0_4_ + auVar38._4_4_ + fVar30,
                                        auVar38._0_4_ + auVar38._4_4_ + fVar30),
                               CONCAT44(fVar2,fVar2),4);
            fVar30 = auVar43._0_4_ + auVar43._4_4_ + fVar23;
            fVar23 = auVar43._0_4_ + auVar43._4_4_ + fVar23;
            fVar39 = (float)((ulong)uVar35 >> 0x20);
            auVar6._4_4_ = fVar27;
            auVar6._0_4_ = fVar24;
            auVar6._8_4_ = fVar40;
            auVar6._12_4_ = 0;
            auVar7._4_4_ = fVar27;
            auVar7._0_4_ = fVar24;
            auVar7._8_4_ = fVar40;
            auVar7._12_4_ = 0;
            auVar36 = NEON_ext(auVar6,auVar7,8,1);
            fVar40 = auVar36._0_4_ + auVar36._4_4_;
            uVar34 = NEON_fmax(CONCAT44(fVar24 + fVar27 + fVar40,fVar24 + fVar27 + fVar40),
                               CONCAT44(uVar3,uVar3),4);
            uVar42 = NEON_fmin(uVar34,CONCAT44(fVar39 + fVar23,(float)uVar35 + fVar30),4);
            uVar34 = NEON_fmax(CONCAT44(-(float)((ulong)uVar34 >> 0x20),-(float)uVar34),
                               CONCAT44(fVar23 - fVar39,fVar30 - (float)uVar35),4);
            if ((float)uVar42 - (float)uVar34 <= (float)uVar51) {
              (**(code **)(*param_3 + 0x18))(param_3,&local_1910,auStack_98,local_a0);
              fVar30 = fVar47 * (float)local_1910;
              fVar23 = fVar48 * (float)((ulong)local_1910 >> 0x20);
              fVar56 = fVar49 * (float)uStack_1908;
              fVar57 = fVar50 * (float)(uStack_1908 >> 0x20);
              auVar8._4_4_ = fVar23;
              auVar8._0_4_ = fVar30;
              auVar8._8_4_ = fVar56;
              auVar8._12_4_ = fVar57;
              auVar9._4_4_ = fVar23;
              auVar9._0_4_ = fVar30;
              auVar9._8_4_ = fVar56;
              auVar9._12_4_ = fVar57;
              auVar36 = NEON_ext(auVar8,auVar9,8,1);
              fVar57 = auVar36._0_4_ + auVar36._4_4_;
              fVar56 = fVar30 + fVar23 + fVar57;
              fVar57 = fVar30 + fVar23 + fVar57;
              (**(code **)(*param_4 + 0x18))(param_4,&local_1920,&uStack_a8,&local_b0);
              fVar30 = fVar56 + (float)uStack_a8;
              fVar23 = fVar57 + (float)((ulong)uStack_a8 >> 0x20);
              fVar56 = fVar56 + (float)local_b0;
              local_b0 = CONCAT44(fVar57 + (float)((ulong)local_b0 >> 0x20),fVar56);
              uStack_a8 = CONCAT44(fVar23,fVar30);
              iVar45 = -(uint)(local_a0._0_4_ + (float)*param_7 < fVar30);
              iVar41 = -(uint)(fVar56 + (float)*param_7 < auStack_98._0_4_);
              iVar41 = CONCAT13((byte)((uint)iVar41 >> 0x18) | (byte)((uint)iVar45 >> 0x18),
                                CONCAT12((byte)((uint)iVar41 >> 0x10) | (byte)((uint)iVar45 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar41 >> 8) |
                                                   (byte)((uint)iVar45 >> 8),
                                                   (byte)iVar41 | (byte)iVar45)));
              auVar44._0_4_ = -(uint)(iVar41 == -1);
              auVar44._4_4_ = -(uint)(iVar41 == -1);
              auVar44._8_4_ = -(uint)(iVar41 == -1);
              auVar44._12_4_ = -(uint)(iVar41 == -1);
              NEON_ext(auVar44,auVar44,8,1);
              if (CONCAT13((char)auVar44._12_4_,
                           CONCAT12((char)auVar44._8_4_,
                                    CONCAT11((char)auVar44._4_4_,(char)auVar44._0_4_))) == -1) {
                return 0;
              }
              fVar30 = local_a0._0_4_ - fVar30;
              fVar56 = (float)uVar14;
              fVar57 = (float)((ulong)uVar14 >> 0x20);
              if (fVar30 < (float)uVar51) {
                uVar51 = CONCAT44(local_a0._4_4_ - fVar23,fVar30);
                param_9[1] = uStack_1908;
                *param_9 = local_1910;
                *param_10 = 2;
              }
            }
          }
          uVar17 = uVar17 + 1;
          pfVar20 = pfVar20 + 3;
        } while (uVar17 < uVar19);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar16);
  }
  *param_8 = uVar51;
  return 1;
}


