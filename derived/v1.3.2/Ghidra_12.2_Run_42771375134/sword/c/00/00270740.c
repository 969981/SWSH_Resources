/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00270740; name: FUN_00270740
 */


undefined8
FUN_00270740(long param_1,undefined4 param_2,long param_3,undefined8 *param_4,uint param_5,
            long param_6,uint *param_7)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  ulong uVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar49;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar77 [16];
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_d0;
  ulong uStack_c8;
  float local_b8 [2];
  float afStack_b0 [2];
  float local_a8 [2];
  undefined8 local_a0;
  ulong uStack_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  fVar21 = *(float *)(param_1 + 0x30);
  fVar7 = *(float *)(param_1 + 0x34);
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x3c);
  pauVar5 = (undefined1 (*) [16])(param_1 + 0x40);
  local_80 = *(float *)*pauVar5;
  fStack_7c = *(float *)(param_1 + 0x44);
  fStack_78 = *(float *)(param_1 + 0x48);
  fStack_74 = *(float *)(param_1 + 0x4c);
  auVar51._0_4_ = local_80 - fVar21;
  auVar51._4_4_ = fStack_7c - fVar7;
  auVar51._8_4_ = fStack_78 - fVar8;
  auVar51._12_4_ = fStack_74 - fVar9;
  fVar14 = *(float *)(param_1 + 0x50);
  fVar15 = *(float *)(param_1 + 0x54);
  fVar16 = *(float *)(param_1 + 0x58);
  fVar20 = *(float *)(param_1 + 0x5c);
  auVar45._0_4_ = fVar14 - fVar21;
  auVar45._4_4_ = fVar15 - fVar7;
  auVar45._8_4_ = fVar16 - fVar8;
  auVar45._12_4_ = fVar20 - fVar9;
  auVar24 = NEON_ext(auVar51,auVar51,8,1);
  auVar36 = NEON_ext(auVar45,auVar45,8,1);
  fVar28 = auVar51._0_4_ * auVar45._4_4_ - auVar51._4_4_ * auVar45._0_4_;
  uVar23 = NEON_ext(CONCAT44(auVar51._4_4_ * auVar45._8_4_ - auVar51._8_4_ * auVar45._4_4_,fVar28),
                    CONCAT44(auVar24._4_4_ * auVar45._4_4_ - auVar51._4_4_ * auVar36._4_4_,
                             auVar24._0_4_ * auVar45._0_4_ - auVar51._0_4_ * auVar36._0_4_),4,1);
  pfVar1 = (float *)(param_3 + 0x30);
  fVar22 = (float)uVar23;
  auVar46._0_4_ = fVar22 * fVar22;
  fVar27 = (float)((ulong)uVar23 >> 0x20);
  auVar46._4_4_ = fVar27 * fVar27;
  auVar46._8_4_ = fVar28 * fVar28;
  auVar46._12_4_ = 0;
  auVar37 = NEON_ext(auVar46,auVar46,8,1);
  fVar18 = auVar37._0_4_ + auVar37._4_4_;
  fVar11 = auVar46._0_4_ + auVar46._4_4_ + fVar18;
  fVar18 = auVar46._0_4_ + auVar46._4_4_ + fVar18;
  uVar17 = CONCAT44(fVar18,fVar11);
  uVar23 = NEON_frsqrte(uVar17,4);
  fVar42 = (float)uVar23;
  fVar49 = (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar42 * fVar42),uVar17,4);
  fVar42 = fVar42 * (float)uVar23;
  fVar49 = fVar49 * (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar42 * fVar42),uVar17,4);
  fVar42 = fVar42 * (float)uVar23;
  fVar49 = fVar49 * (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar42 * fVar42),uVar17,4);
  fVar42 = fVar42 * (float)uVar23;
  fVar49 = fVar49 * (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar42 * fVar42),uVar17,4);
  uVar35 = CONCAT44(fVar18 * fVar49 * (float)((ulong)uVar23 >> 0x20),fVar11 * fVar42 * (float)uVar23
                   );
  uVar35 = uVar35 ^ (uVar35 ^ uVar17) & CONCAT44(-(uint)(fVar11 == 0.0),-(uint)(fVar11 == 0.0));
  uVar23 = NEON_frecpe(uVar35,4);
  uVar44 = NEON_frecps(uVar35,uVar23,4);
  fVar11 = (float)uVar23 * (float)uVar44;
  fVar18 = (float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar44 >> 0x20);
  uVar23 = NEON_frecps(uVar35,CONCAT44(fVar18,fVar11),4);
  fVar11 = fVar11 * (float)uVar23;
  fVar18 = fVar18 * (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frecps(uVar35,CONCAT44(fVar18,fVar11),4);
  fVar11 = fVar11 * (float)uVar23;
  fVar18 = fVar18 * (float)((ulong)uVar23 >> 0x20);
  uVar23 = NEON_frecps(uVar35,CONCAT44(fVar18,fVar11),4);
  fVar11 = fVar11 * (float)uVar23;
  uVar23 = NEON_frecps(uVar35,CONCAT44(fVar18 * (float)((ulong)uVar23 >> 0x20),fVar11),4);
  fVar11 = fVar11 * (float)uVar23;
  local_f0 = CONCAT44(fVar27 * fVar11,fVar22 * fVar11);
  fVar28 = fVar28 * fVar11;
  pfVar2 = (float *)(param_3 + 0x40);
  uStack_e8 = (ulong)(uint)fVar28;
  uVar23 = *param_4;
  local_a0 = local_f0;
  uStack_98 = uStack_e8;
  local_90 = fVar14;
  fStack_8c = fVar15;
  fStack_88 = fVar16;
  fStack_84 = fVar20;
  fStack_70 = fVar21;
  fStack_6c = fVar7;
  fStack_68 = fVar8;
  fStack_64 = fVar9;
  fVar11 = (float)FUN_0026f500(pfVar1,pfVar2,&fStack_70,&local_80,&local_90,local_a8,afStack_b0,
                               local_b8);
  if ((float)uVar23 * (float)uVar23 <= fVar11) {
    return 1;
  }
  if (1e-06 <= afStack_b0[0]) {
    if (afStack_b0[0] <= 0.999999) {
      auVar37._8_4_ = fVar28;
      auVar37._0_8_ = local_f0;
      auVar37._12_4_ = 0;
      if (1e-06 > local_b8[0]) {
        param_5 = param_5 >> 3 & 1;
        goto joined_r0x00270a5c;
      }
      if (((param_5 >> 4 & 1) != 0) && (0.9999 <= afStack_b0[0] + local_b8[0])) goto LAB_002708f0;
    }
    else {
      auVar37._8_4_ = fVar28;
      auVar37._0_8_ = local_f0;
      auVar37._12_4_ = 0;
      if ((param_5 & 0x18) != 0 || 1e-06 <= local_b8[0]) goto LAB_002708f0;
    }
  }
  else {
    if (local_b8[0] < 1e-06) {
      auVar37._8_4_ = fVar28;
      auVar37._0_8_ = local_f0;
      auVar37._12_4_ = 0;
      param_5 = param_5 & 0x28;
    }
    else {
      auVar37._8_4_ = fVar28;
      auVar37._0_8_ = local_f0;
      auVar37._12_4_ = 0;
      if (local_b8[0] <= 0.999999) {
        param_5 = (param_5 & 0xff) >> 5 & 1;
      }
      else {
        param_5 = param_5 & 0x30;
      }
    }
joined_r0x00270a5c:
    if (param_5 != 0) {
LAB_002708f0:
      auVar46 = *pauVar5;
      if (fVar11 != 0.0) {
        auVar25._0_4_ = *pfVar1 + (*pfVar2 - *pfVar1) * local_a8[0];
        auVar25._4_4_ =
             *(float *)(param_3 + 0x34) +
             (*(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x34)) * local_a8[0];
        auVar25._8_4_ =
             *(float *)(param_3 + 0x38) +
             (*(float *)(param_3 + 0x48) - *(float *)(param_3 + 0x38)) * local_a8[0];
        auVar25._12_4_ =
             *(float *)(param_3 + 0x3c) +
             (*(float *)(param_3 + 0x4c) - *(float *)(param_3 + 0x3c)) * local_a8[0];
        auVar37 = NEON_ext(auVar25,auVar25,8,1);
        auVar38._0_4_ = auVar46._0_4_ * afStack_b0[0] + fVar14 * local_b8[0];
        auVar38._4_4_ = auVar46._4_4_ * afStack_b0[0] + fVar15 * local_b8[0];
        auVar38._8_4_ = auVar46._8_4_ * afStack_b0[0] + fVar16 * local_b8[0];
        auVar38._12_4_ = auVar46._12_4_ * afStack_b0[0] + 0.0;
        auVar46 = NEON_ext(auVar38,auVar38,8,1);
        uVar23 = NEON_fmov(0x3f800000,4);
        fVar11 = (float)uVar23 - (afStack_b0[0] + local_b8[0]);
        auVar30._0_4_ = fVar21 * fVar11 + auVar38._0_4_;
        auVar30._4_4_ = fVar7 * fVar11 + auVar38._4_4_;
        auVar30._8_4_ = fVar8 * fVar11 + auVar46._0_4_;
        auVar30._12_4_ = fVar9 * fVar11 + 0.0;
        auVar46 = NEON_ext(auVar30,auVar30,8,1);
        fVar22 = auVar25._0_4_ - auVar30._0_4_;
        fVar27 = auVar25._4_4_ - auVar30._4_4_;
        fVar28 = auVar37._0_4_ - auVar46._0_4_;
        auVar31._0_4_ = fVar22 * fVar22;
        auVar31._4_4_ = fVar27 * fVar27;
        auVar31._8_4_ = fVar28 * fVar28;
        auVar31._12_4_ = 0;
        auVar46 = NEON_ext(auVar31,auVar31,8,1);
        fVar18 = auVar46._0_4_ + auVar46._4_4_;
        fVar11 = auVar31._0_4_ + auVar31._4_4_ + fVar18;
        fVar18 = auVar31._0_4_ + auVar31._4_4_ + fVar18;
        uVar17 = CONCAT44(fVar18,fVar11);
        uVar23 = NEON_frsqrte(uVar17,4);
        fVar42 = (float)uVar23;
        fVar49 = (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar42 * fVar42),uVar17,4);
        fVar42 = fVar42 * (float)uVar23;
        fVar49 = fVar49 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar42 * fVar42),uVar17,4);
        fVar42 = fVar42 * (float)uVar23;
        fVar49 = fVar49 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar42 * fVar42),uVar17,4);
        fVar42 = fVar42 * (float)uVar23;
        fVar49 = fVar49 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar42 * fVar42),uVar17,4);
        uVar35 = CONCAT44(fVar18 * fVar49 * (float)((ulong)uVar23 >> 0x20),
                          fVar11 * fVar42 * (float)uVar23);
        uVar35 = uVar35 ^ (uVar35 ^ uVar17) &
                          CONCAT44(-(uint)(fVar11 == 0.0),-(uint)(fVar11 == 0.0));
        uVar23 = NEON_frecpe(uVar35,4);
        uVar44 = NEON_frecps(uVar35,uVar23,4);
        fVar11 = (float)uVar23 * (float)uVar44;
        fVar18 = (float)((ulong)uVar23 >> 0x20) * (float)((ulong)uVar44 >> 0x20);
        uVar23 = NEON_frecps(uVar35,CONCAT44(fVar18,fVar11),4);
        fVar11 = fVar11 * (float)uVar23;
        fVar18 = fVar18 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frecps(uVar35,CONCAT44(fVar18,fVar11),4);
        fVar11 = fVar11 * (float)uVar23;
        fVar18 = fVar18 * (float)((ulong)uVar23 >> 0x20);
        uVar23 = NEON_frecps(uVar35,CONCAT44(fVar18,fVar11),4);
        fVar11 = fVar11 * (float)uVar23;
        uVar23 = NEON_frecps(uVar35,CONCAT44(fVar18 * (float)((ulong)uVar23 >> 0x20),fVar11),4);
        fVar11 = fVar11 * (float)uVar23;
        local_f0 = CONCAT44(fVar27 * fVar11,fVar22 * fVar11);
        uStack_e8 = (ulong)(uint)(fVar28 * fVar11);
        local_d0 = local_f0;
        uStack_c8 = uStack_e8;
        goto LAB_00270aa0;
      }
    }
  }
  uStack_c8 = auVar37._8_8_;
  local_d0 = auVar37._0_8_;
LAB_00270aa0:
  FUN_0026f1a0(&fStack_70,&local_80,&local_90,&local_a0,&local_d0,param_2,pfVar1,pfVar2,param_4,
               param_6,param_7);
  auVar10._8_8_ = uStack_e8;
  auVar10._0_8_ = local_f0;
  auVar46 = NEON_ext(auVar10,auVar10,8,1);
  fVar78 = (float)((ulong)local_f0 >> 0x20);
  fVar76 = (float)local_f0;
  fVar29 = auVar46._0_4_;
  fVar34 = auVar46._4_4_;
  fVar80 = (float)uStack_e8;
  fVar43 = auVar51._0_4_ * fVar78 - auVar51._4_4_ * fVar76;
  uVar23 = NEON_ext(CONCAT44(auVar51._4_4_ * fVar80 - auVar51._8_4_ * fVar78,fVar43),
                    CONCAT44(auVar24._4_4_ * fVar78 - auVar51._4_4_ * fVar34,
                             auVar24._0_4_ * fVar76 - auVar51._0_4_ * fVar29),4,1);
  fVar19 = (float)uVar23;
  auVar24._0_4_ = fVar21 * fVar19;
  fVar56 = (float)((ulong)uVar23 >> 0x20);
  auVar24._4_4_ = fVar7 * fVar56;
  auVar24._8_4_ = fVar8 * fVar43;
  auVar24._12_4_ = fVar9 * 0.0;
  auVar46 = NEON_ext(auVar24,auVar24,8,1);
  fVar11 = *pfVar1;
  fVar18 = *(float *)(param_3 + 0x34);
  fVar22 = *(float *)(param_3 + 0x38);
  fVar27 = *(float *)(param_3 + 0x3c);
  fVar12 = auVar24._0_4_ + auVar24._4_4_ + auVar46._0_4_ + auVar46._4_4_;
  auVar57._0_4_ = fVar11 * fVar19;
  auVar57._4_4_ = fVar18 * fVar56;
  auVar57._8_4_ = fVar22 * fVar43;
  auVar57._12_4_ = fVar27 * 0.0;
  auVar24 = NEON_ext(auVar57,auVar57,8,1);
  fVar28 = *pfVar2;
  fVar42 = *(float *)(param_3 + 0x44);
  fVar49 = *(float *)(param_3 + 0x48);
  fVar50 = *(float *)(param_3 + 0x4c);
  fVar13 = auVar57._0_4_ + auVar57._4_4_ + auVar24._0_4_ + auVar24._4_4_;
  auVar74._0_4_ = fVar28 * fVar19;
  auVar74._4_4_ = fVar42 * fVar56;
  auVar74._8_4_ = fVar49 * fVar43;
  auVar74._12_4_ = fVar50 * 0.0;
  auVar24 = NEON_ext(auVar74,auVar74,8,1);
  auVar40._0_12_ = auVar10._0_12_;
  if ((fVar13 - fVar12) * ((auVar74._0_4_ + auVar74._4_4_ + auVar24._0_4_ + auVar24._4_4_) - fVar12)
      <= 0.0) {
    auVar58._0_4_ = fVar28 - fVar11;
    auVar58._4_4_ = fVar42 - fVar18;
    auVar58._8_4_ = fVar49 - fVar22;
    auVar58._12_4_ = fVar50 - fVar27;
    auVar52._0_4_ = fVar19 * auVar58._0_4_;
    auVar52._4_4_ = fVar56 * auVar58._4_4_;
    auVar52._8_4_ = fVar43 * auVar58._8_4_;
    auVar52._12_4_ = auVar58._12_4_ * 0.0;
    auVar24 = NEON_ext(auVar52,auVar52,8,1);
    fVar19 = auVar24._0_4_ + auVar24._4_4_;
    fVar43 = auVar52._0_4_ + auVar52._4_4_ + fVar19;
    uVar23 = CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar19,fVar43);
    if (fVar43 != 0.0) {
      uVar44 = NEON_frecpe(uVar23,4);
      uVar70 = NEON_frecps(uVar23,uVar44,4);
      fVar43 = (float)uVar44 * (float)uVar70;
      fVar19 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar19,fVar43),4);
      fVar43 = fVar43 * (float)uVar44;
      fVar19 = fVar19 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar19,fVar43),4);
      fVar43 = fVar43 * (float)uVar44;
      fVar19 = fVar19 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar19,fVar43),4);
      fVar43 = fVar43 * (float)uVar44;
      uVar23 = NEON_frecps(uVar23,CONCAT44(fVar19 * (float)((ulong)uVar44 >> 0x20),fVar43),4);
      fVar12 = (fVar12 - fVar13) * fVar43 * (float)uVar23;
      fVar43 = fVar11 + auVar58._0_4_ * fVar12;
      fVar19 = fVar18 + auVar58._4_4_ * fVar12;
      auVar54._0_8_ = CONCAT44(fVar19,fVar43);
      auVar54._8_4_ = fVar22 + auVar58._8_4_ * fVar12;
      auVar54._12_4_ = fVar27 + auVar58._12_4_ * fVar12;
      auVar24 = NEON_ext(auVar54,auVar54,8,1);
      fVar56 = auVar24._0_4_;
      auVar24 = NEON_ext(auVar58,auVar58,8,1);
      fVar12 = fVar76 * auVar58._4_4_ - fVar78 * auVar58._0_4_;
      uVar23 = NEON_ext(CONCAT44(fVar78 * auVar58._8_4_ - fVar80 * auVar58._4_4_,fVar12),
                        CONCAT44(fVar34 * auVar58._4_4_ - fVar78 * auVar24._4_4_,
                                 fVar29 * auVar58._0_4_ - fVar76 * auVar24._0_4_),4,1);
      auVar72._0_4_ = (float)uVar23 * (fVar43 - fVar21);
      fVar13 = (float)((ulong)uVar23 >> 0x20);
      auVar72._4_4_ = fVar13 * (fVar19 - fVar7);
      auVar72._8_4_ = fVar12 * (fVar56 - fVar8);
      auVar72._12_4_ = (0.0 - fVar9) * 0.0;
      auVar24 = NEON_ext(auVar72,auVar72,8,1);
      auVar67._0_4_ = auVar51._0_4_ * (float)uVar23;
      auVar67._4_4_ = auVar51._4_4_ * fVar13;
      auVar67._8_4_ = auVar51._8_4_ * fVar12;
      auVar67._12_4_ = auVar51._12_4_ * 0.0;
      fVar12 = auVar24._0_4_ + auVar24._4_4_;
      auVar24 = NEON_ext(auVar67,auVar67,8,1);
      fVar13 = auVar24._0_4_ + auVar24._4_4_;
      uVar23 = CONCAT44(auVar67._0_4_ + auVar67._4_4_ + fVar13,
                        auVar67._0_4_ + auVar67._4_4_ + fVar13);
      uVar44 = NEON_frecpe(uVar23,4);
      uVar70 = NEON_frecps(uVar23,uVar44,4);
      fVar13 = (float)uVar44 * (float)uVar70;
      fVar79 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar79,fVar13),4);
      fVar13 = fVar13 * (float)uVar44;
      fVar79 = fVar79 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar79,fVar13),4);
      fVar13 = fVar13 * (float)uVar44;
      fVar79 = fVar79 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar79,fVar13),4);
      fVar13 = fVar13 * (float)uVar44;
      fVar79 = fVar79 * (float)((ulong)uVar44 >> 0x20);
      uVar23 = NEON_frecps(uVar23,CONCAT44(fVar79,fVar13),4);
      uVar44 = NEON_fmov(0x3f800000,4);
      uVar23 = NEON_fmin(CONCAT44((auVar72._0_4_ + auVar72._4_4_ + fVar12) *
                                  fVar79 * (float)((ulong)uVar23 >> 0x20),
                                  (auVar72._0_4_ + auVar72._4_4_ + fVar12) * fVar13 * (float)uVar23)
                         ,uVar44,4);
      uVar23 = NEON_fmax(uVar23,0,4);
      fVar12 = (float)uVar23;
      auVar61._0_4_ = (fVar43 - fVar21) - auVar51._0_4_ * fVar12;
      auVar61._4_4_ = (fVar19 - fVar7) - auVar51._4_4_ * fVar12;
      auVar61._8_4_ = (fVar56 - fVar8) - auVar51._8_4_ * fVar12;
      auVar61._12_4_ = (0.0 - fVar9) - auVar51._12_4_ * fVar12;
      auVar24 = NEON_ext(auVar61,auVar61,8,1);
      auVar68._0_4_ = fVar76 * auVar61._0_4_;
      auVar68._4_4_ = fVar78 * auVar61._4_4_;
      auVar68._8_4_ = fVar80 * auVar24._0_4_;
      auVar68._12_4_ = 0;
      auVar46 = NEON_ext(auVar68,auVar68,8,1);
      fVar12 = auVar46._0_4_ + auVar46._4_4_;
      if (auVar68._0_4_ + auVar68._4_4_ + fVar12 < (float)*param_4) {
        puVar6 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x40);
        puVar6[1] = (ulong)(uint)fVar56;
        *puVar6 = auVar54._0_8_;
        lVar3 = param_6 + (ulong)*param_7 * 0x40;
        *(ulong *)(lVar3 + 0x18) = (ulong)(uint)(fVar56 - auVar24._0_4_);
        *(ulong *)(lVar3 + 0x10) = CONCAT44(fVar19 - auVar61._4_4_,fVar43 - auVar61._0_4_);
        lVar3 = param_6 + (ulong)*param_7 * 0x40;
        auVar40._12_4_ = auVar68._0_4_ + auVar68._4_4_ + fVar12;
        *(long *)(lVar3 + 0x28) = auVar40._8_8_;
        *(undefined8 *)(lVar3 + 0x20) = local_f0;
        uVar4 = *param_7;
        *param_7 = uVar4 + 1;
        *(undefined4 *)(param_6 + (ulong)uVar4 * 0x40 + 0x30) = param_2;
        fVar11 = *pfVar1;
        fVar18 = *(float *)(param_3 + 0x34);
        fVar22 = *(float *)(param_3 + 0x38);
        fVar27 = *(float *)(param_3 + 0x3c);
        fVar28 = *pfVar2;
        fVar42 = *(float *)(param_3 + 0x44);
        fVar49 = *(float *)(param_3 + 0x48);
        fVar50 = *(float *)(param_3 + 0x4c);
      }
    }
  }
  uVar23 = *(undefined8 *)(param_1 + 0x48);
  fVar13 = (float)*(undefined8 *)*pauVar5;
  auVar53._0_4_ = fVar14 - fVar13;
  fVar43 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
  auVar53._4_4_ = fVar15 - fVar43;
  fVar19 = (float)uVar23;
  auVar53._8_4_ = fVar16 - fVar19;
  fVar56 = (float)((ulong)uVar23 >> 0x20);
  auVar53._12_4_ = fVar20 - fVar56;
  auVar24 = NEON_ext(auVar53,auVar53,8,1);
  fVar12 = auVar53._0_4_ * fVar78 - auVar53._4_4_ * fVar76;
  uVar23 = NEON_ext(CONCAT44(auVar53._4_4_ * fVar80 - auVar53._8_4_ * fVar78,fVar12),
                    CONCAT44(auVar24._4_4_ * fVar78 - auVar53._4_4_ * fVar34,
                             auVar24._0_4_ * fVar76 - auVar53._0_4_ * fVar29),4,1);
  fVar16 = (float)uVar23;
  auVar63._0_4_ = fVar13 * fVar16;
  fVar20 = (float)((ulong)uVar23 >> 0x20);
  auVar63._4_4_ = fVar43 * fVar20;
  auVar63._8_4_ = fVar19 * fVar12;
  auVar63._12_4_ = fVar56 * 0.0;
  auVar24 = NEON_ext(auVar63,auVar63,8,1);
  auVar77._0_4_ = fVar16 * fVar28;
  auVar77._4_4_ = fVar20 * fVar42;
  auVar77._8_4_ = fVar12 * fVar49;
  auVar77._12_4_ = fVar50 * 0.0;
  fVar14 = auVar63._0_4_ + auVar63._4_4_ + auVar24._0_4_ + auVar24._4_4_;
  auVar64._0_4_ = fVar16 * fVar11;
  auVar64._4_4_ = fVar20 * fVar18;
  auVar64._8_4_ = fVar12 * fVar22;
  auVar64._12_4_ = fVar27 * 0.0;
  auVar24 = NEON_ext(auVar64,auVar64,8,1);
  fVar15 = auVar64._0_4_ + auVar64._4_4_ + auVar24._0_4_ + auVar24._4_4_;
  auVar24 = NEON_ext(auVar77,auVar77,8,1);
  if ((fVar15 - fVar14) * ((auVar77._0_4_ + auVar77._4_4_ + auVar24._0_4_ + auVar24._4_4_) - fVar14)
      <= 0.0) {
    auVar65._0_4_ = fVar28 - fVar11;
    auVar65._4_4_ = fVar42 - fVar18;
    auVar65._8_4_ = fVar49 - fVar22;
    auVar65._12_4_ = fVar50 - fVar27;
    auVar59._0_4_ = fVar16 * auVar65._0_4_;
    auVar59._4_4_ = fVar20 * auVar65._4_4_;
    auVar59._8_4_ = fVar12 * auVar65._8_4_;
    auVar59._12_4_ = auVar65._12_4_ * 0.0;
    auVar24 = NEON_ext(auVar59,auVar59,8,1);
    fVar20 = auVar24._0_4_ + auVar24._4_4_;
    fVar16 = auVar59._0_4_ + auVar59._4_4_ + fVar20;
    uVar23 = CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar20,fVar16);
    if (fVar16 != 0.0) {
      uVar44 = NEON_frecpe(uVar23,4);
      uVar70 = NEON_frecps(uVar23,uVar44,4);
      fVar16 = (float)uVar44 * (float)uVar70;
      fVar20 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar16),4);
      fVar16 = fVar16 * (float)uVar44;
      fVar20 = fVar20 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar16),4);
      fVar16 = fVar16 * (float)uVar44;
      fVar20 = fVar20 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar16),4);
      fVar16 = fVar16 * (float)uVar44;
      uVar23 = NEON_frecps(uVar23,CONCAT44(fVar20 * (float)((ulong)uVar44 >> 0x20),fVar16),4);
      fVar14 = (fVar14 - fVar15) * fVar16 * (float)uVar23;
      fVar16 = fVar11 + auVar65._0_4_ * fVar14;
      fVar20 = fVar18 + auVar65._4_4_ * fVar14;
      auVar62._0_8_ = CONCAT44(fVar20,fVar16);
      auVar62._8_4_ = fVar22 + auVar65._8_4_ * fVar14;
      auVar62._12_4_ = fVar27 + auVar65._12_4_ * fVar14;
      auVar24 = NEON_ext(auVar62,auVar62,8,1);
      fVar12 = auVar24._0_4_;
      auVar24 = NEON_ext(auVar65,auVar65,8,1);
      fVar14 = fVar76 * auVar65._4_4_ - fVar78 * auVar65._0_4_;
      uVar23 = NEON_ext(CONCAT44(fVar78 * auVar65._8_4_ - fVar80 * auVar65._4_4_,fVar14),
                        CONCAT44(fVar34 * auVar65._4_4_ - fVar78 * auVar24._4_4_,
                                 fVar29 * auVar65._0_4_ - fVar76 * auVar24._0_4_),4,1);
      auVar75._0_4_ = (float)uVar23 * (fVar16 - fVar13);
      fVar15 = (float)((ulong)uVar23 >> 0x20);
      auVar75._4_4_ = fVar15 * (fVar20 - fVar43);
      auVar75._8_4_ = fVar14 * (fVar12 - fVar19);
      auVar75._12_4_ = (0.0 - fVar56) * 0.0;
      auVar24 = NEON_ext(auVar75,auVar75,8,1);
      auVar73._0_4_ = auVar53._0_4_ * (float)uVar23;
      auVar73._4_4_ = auVar53._4_4_ * fVar15;
      auVar73._8_4_ = auVar53._8_4_ * fVar14;
      auVar73._12_4_ = auVar53._12_4_ * 0.0;
      fVar14 = auVar24._0_4_ + auVar24._4_4_;
      auVar24 = NEON_ext(auVar73,auVar73,8,1);
      fVar15 = auVar24._0_4_ + auVar24._4_4_;
      uVar23 = CONCAT44(auVar73._0_4_ + auVar73._4_4_ + fVar15,
                        auVar73._0_4_ + auVar73._4_4_ + fVar15);
      uVar44 = NEON_frecpe(uVar23,4);
      uVar70 = NEON_frecps(uVar23,uVar44,4);
      fVar15 = (float)uVar44 * (float)uVar70;
      fVar79 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar79,fVar15),4);
      fVar15 = fVar15 * (float)uVar44;
      fVar79 = fVar79 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar79,fVar15),4);
      fVar15 = fVar15 * (float)uVar44;
      fVar79 = fVar79 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar79,fVar15),4);
      fVar15 = fVar15 * (float)uVar44;
      fVar79 = fVar79 * (float)((ulong)uVar44 >> 0x20);
      uVar23 = NEON_frecps(uVar23,CONCAT44(fVar79,fVar15),4);
      uVar44 = NEON_fmov(0x3f800000,4);
      uVar23 = NEON_fmin(CONCAT44((auVar75._0_4_ + auVar75._4_4_ + fVar14) *
                                  fVar79 * (float)((ulong)uVar23 >> 0x20),
                                  (auVar75._0_4_ + auVar75._4_4_ + fVar14) * fVar15 * (float)uVar23)
                         ,uVar44,4);
      uVar23 = NEON_fmax(uVar23,0,4);
      fVar14 = (float)uVar23;
      auVar55._0_4_ = (fVar16 - fVar13) - auVar53._0_4_ * fVar14;
      auVar55._4_4_ = (fVar20 - fVar43) - auVar53._4_4_ * fVar14;
      auVar55._8_4_ = (fVar12 - fVar19) - auVar53._8_4_ * fVar14;
      auVar55._12_4_ = (0.0 - fVar56) - auVar53._12_4_ * fVar14;
      auVar24 = NEON_ext(auVar55,auVar55,8,1);
      auVar69._0_4_ = fVar76 * auVar55._0_4_;
      auVar69._4_4_ = fVar78 * auVar55._4_4_;
      auVar69._8_4_ = fVar80 * auVar24._0_4_;
      auVar69._12_4_ = 0;
      auVar46 = NEON_ext(auVar69,auVar69,8,1);
      fVar14 = auVar46._0_4_ + auVar46._4_4_;
      if (auVar69._0_4_ + auVar69._4_4_ + fVar14 < (float)*param_4) {
        puVar6 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x40);
        puVar6[1] = (ulong)(uint)fVar12;
        *puVar6 = auVar62._0_8_;
        lVar3 = param_6 + (ulong)*param_7 * 0x40;
        *(ulong *)(lVar3 + 0x18) = (ulong)(uint)(fVar12 - auVar24._0_4_);
        *(ulong *)(lVar3 + 0x10) = CONCAT44(fVar20 - auVar55._4_4_,fVar16 - auVar55._0_4_);
        lVar3 = param_6 + (ulong)*param_7 * 0x40;
        auVar41._12_4_ = auVar69._0_4_ + auVar69._4_4_ + fVar14;
        auVar41._0_12_ = auVar40._0_12_;
        *(long *)(lVar3 + 0x28) = auVar41._8_8_;
        *(undefined8 *)(lVar3 + 0x20) = local_f0;
        uVar4 = *param_7;
        *param_7 = uVar4 + 1;
        *(undefined4 *)(param_6 + (ulong)uVar4 * 0x40 + 0x30) = param_2;
        fVar11 = *pfVar1;
        fVar18 = *(float *)(param_3 + 0x34);
        fVar22 = *(float *)(param_3 + 0x38);
        fVar27 = *(float *)(param_3 + 0x3c);
        fVar28 = *pfVar2;
        fVar42 = *(float *)(param_3 + 0x44);
        fVar49 = *(float *)(param_3 + 0x48);
        fVar50 = *(float *)(param_3 + 0x4c);
      }
    }
  }
  fVar12 = auVar45._0_4_ * fVar78 - auVar45._4_4_ * fVar76;
  uVar23 = NEON_ext(CONCAT44(auVar45._4_4_ * fVar80 - auVar45._8_4_ * fVar78,fVar12),
                    CONCAT44(auVar36._4_4_ * fVar78 - auVar45._4_4_ * fVar34,
                             auVar36._0_4_ * fVar76 - auVar45._0_4_ * fVar29),4,1);
  fVar16 = (float)uVar23;
  auVar36._0_4_ = fVar21 * fVar16;
  fVar20 = (float)((ulong)uVar23 >> 0x20);
  auVar36._4_4_ = fVar7 * fVar20;
  auVar36._8_4_ = fVar8 * fVar12;
  auVar36._12_4_ = fVar9 * 0.0;
  auVar24 = NEON_ext(auVar36,auVar36,8,1);
  auVar66._0_4_ = fVar16 * fVar11;
  auVar66._4_4_ = fVar20 * fVar18;
  auVar66._8_4_ = fVar12 * fVar22;
  auVar66._12_4_ = fVar27 * 0.0;
  auVar46 = NEON_ext(auVar66,auVar66,8,1);
  fVar14 = auVar36._0_4_ + auVar36._4_4_ + auVar24._0_4_ + auVar24._4_4_;
  auVar71._0_4_ = fVar16 * fVar28;
  auVar71._4_4_ = fVar20 * fVar42;
  auVar71._8_4_ = fVar12 * fVar49;
  auVar71._12_4_ = fVar50 * 0.0;
  auVar24 = NEON_ext(auVar71,auVar71,8,1);
  fVar15 = auVar66._0_4_ + auVar66._4_4_ + auVar46._0_4_ + auVar46._4_4_;
  if ((fVar15 - fVar14) * ((auVar71._0_4_ + auVar71._4_4_ + auVar24._0_4_ + auVar24._4_4_) - fVar14)
      <= 0.0) {
    auVar47._0_4_ = fVar28 - fVar11;
    auVar47._4_4_ = fVar42 - fVar18;
    auVar47._8_4_ = fVar49 - fVar22;
    auVar47._12_4_ = fVar50 - fVar27;
    auVar60._0_4_ = fVar16 * auVar47._0_4_;
    auVar60._4_4_ = fVar20 * auVar47._4_4_;
    auVar60._8_4_ = fVar12 * auVar47._8_4_;
    auVar60._12_4_ = auVar47._12_4_ * 0.0;
    auVar24 = NEON_ext(auVar60,auVar60,8,1);
    fVar20 = auVar24._0_4_ + auVar24._4_4_;
    fVar16 = auVar60._0_4_ + auVar60._4_4_ + fVar20;
    uVar23 = CONCAT44(auVar60._0_4_ + auVar60._4_4_ + fVar20,fVar16);
    if (fVar16 != 0.0) {
      uVar44 = NEON_frecpe(uVar23,4);
      uVar70 = NEON_frecps(uVar23,uVar44,4);
      fVar16 = (float)uVar44 * (float)uVar70;
      fVar20 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar16),4);
      fVar16 = fVar16 * (float)uVar44;
      fVar20 = fVar20 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar16),4);
      fVar16 = fVar16 * (float)uVar44;
      fVar20 = fVar20 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar16),4);
      fVar16 = fVar16 * (float)uVar44;
      uVar23 = NEON_frecps(uVar23,CONCAT44(fVar20 * (float)((ulong)uVar44 >> 0x20),fVar16),4);
      fVar14 = (fVar14 - fVar15) * fVar16 * (float)uVar23;
      fVar11 = fVar11 + auVar47._0_4_ * fVar14;
      fVar18 = fVar18 + auVar47._4_4_ * fVar14;
      auVar39._0_8_ = CONCAT44(fVar18,fVar11);
      auVar39._8_4_ = fVar22 + auVar47._8_4_ * fVar14;
      auVar39._12_4_ = fVar27 + auVar47._12_4_ * fVar14;
      auVar24 = NEON_ext(auVar39,auVar39,8,1);
      fVar16 = auVar24._0_4_;
      auVar24 = NEON_ext(auVar47,auVar47,8,1);
      fVar14 = fVar76 * auVar47._4_4_ - fVar78 * auVar47._0_4_;
      uVar23 = NEON_ext(CONCAT44(fVar78 * auVar47._8_4_ - fVar80 * auVar47._4_4_,fVar14),
                        CONCAT44(fVar34 * auVar47._4_4_ - fVar78 * auVar24._4_4_,
                                 fVar29 * auVar47._0_4_ - fVar76 * auVar24._0_4_),4,1);
      auVar48._0_4_ = (float)uVar23 * (fVar11 - fVar21);
      fVar15 = (float)((ulong)uVar23 >> 0x20);
      auVar48._4_4_ = fVar15 * (fVar18 - fVar7);
      auVar48._8_4_ = fVar14 * (fVar16 - fVar8);
      auVar48._12_4_ = (0.0 - fVar9) * 0.0;
      auVar24 = NEON_ext(auVar48,auVar48,8,1);
      auVar32._0_4_ = auVar45._0_4_ * (float)uVar23;
      auVar32._4_4_ = auVar45._4_4_ * fVar15;
      auVar32._8_4_ = auVar45._8_4_ * fVar14;
      auVar32._12_4_ = auVar45._12_4_ * 0.0;
      fVar14 = auVar24._0_4_ + auVar24._4_4_;
      auVar24 = NEON_ext(auVar32,auVar32,8,1);
      fVar15 = auVar24._0_4_ + auVar24._4_4_;
      uVar23 = CONCAT44(auVar32._0_4_ + auVar32._4_4_ + fVar15,
                        auVar32._0_4_ + auVar32._4_4_ + fVar15);
      uVar44 = NEON_frecpe(uVar23,4);
      uVar70 = NEON_frecps(uVar23,uVar44,4);
      fVar15 = (float)uVar44 * (float)uVar70;
      fVar20 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar70 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar15),4);
      fVar15 = fVar15 * (float)uVar44;
      fVar20 = fVar20 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar15),4);
      fVar15 = fVar15 * (float)uVar44;
      fVar20 = fVar20 * (float)((ulong)uVar44 >> 0x20);
      uVar44 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar15),4);
      fVar15 = fVar15 * (float)uVar44;
      fVar20 = fVar20 * (float)((ulong)uVar44 >> 0x20);
      uVar23 = NEON_frecps(uVar23,CONCAT44(fVar20,fVar15),4);
      uVar44 = NEON_fmov(0x3f800000,4);
      uVar23 = NEON_fmin(CONCAT44((auVar48._0_4_ + auVar48._4_4_ + fVar14) *
                                  fVar20 * (float)((ulong)uVar23 >> 0x20),
                                  (auVar48._0_4_ + auVar48._4_4_ + fVar14) * fVar15 * (float)uVar23)
                         ,uVar44,4);
      uVar23 = NEON_fmax(uVar23,0,4);
      fVar14 = (float)uVar23;
      auVar26._0_4_ = (fVar11 - fVar21) - auVar45._0_4_ * fVar14;
      auVar26._4_4_ = (fVar18 - fVar7) - auVar45._4_4_ * fVar14;
      auVar26._8_4_ = (fVar16 - fVar8) - auVar45._8_4_ * fVar14;
      auVar26._12_4_ = (0.0 - fVar9) - auVar45._12_4_ * fVar14;
      auVar24 = NEON_ext(auVar26,auVar26,8,1);
      auVar33._0_4_ = fVar76 * auVar26._0_4_;
      auVar33._4_4_ = fVar78 * auVar26._4_4_;
      auVar33._8_4_ = fVar80 * auVar24._0_4_;
      auVar33._12_4_ = 0;
      auVar46 = NEON_ext(auVar33,auVar33,8,1);
      fVar21 = auVar46._0_4_ + auVar46._4_4_;
      if (auVar33._0_4_ + auVar33._4_4_ + fVar21 < (float)*param_4) {
        puVar6 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x40);
        puVar6[1] = (ulong)(uint)fVar16;
        *puVar6 = auVar39._0_8_;
        lVar3 = param_6 + (ulong)*param_7 * 0x40;
        *(ulong *)(lVar3 + 0x18) = (ulong)(uint)(fVar16 - auVar24._0_4_);
        *(ulong *)(lVar3 + 0x10) = CONCAT44(fVar18 - auVar26._4_4_,fVar11 - auVar26._0_4_);
        lVar3 = param_6 + (ulong)*param_7 * 0x40;
        *(ulong *)(lVar3 + 0x28) = CONCAT44(auVar33._0_4_ + auVar33._4_4_ + fVar21,fVar80);
        *(undefined8 *)(lVar3 + 0x20) = local_f0;
        uVar4 = *param_7;
        *param_7 = uVar4 + 1;
        *(undefined4 *)(param_6 + (ulong)uVar4 * 0x40 + 0x30) = param_2;
      }
    }
  }
  return 1;
}


