/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028eaa0; name: FUN_0028eaa0
 */


bool FUN_0028eaa0(long param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 ,long *param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9,
                 undefined8 *param_10,undefined8 param_11)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  int iVar37;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar50;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  ulong uStack_88;
  float local_78 [2];
  undefined1 local_58 [8];
  
  local_94 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0x7f7fffff7f7fffff;
  fVar26 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar24 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  auVar29._0_4_ = *(float *)(param_1 + 0x40) - fVar22;
  auVar29._4_4_ = *(float *)(param_1 + 0x44) - fVar23;
  auVar29._8_4_ = *(float *)(param_1 + 0x48) - fVar26;
  auVar29._12_4_ = *(float *)(param_1 + 0x4c) - fVar24;
  auVar38._0_4_ = *(float *)(param_1 + 0x50) - fVar22;
  auVar38._4_4_ = *(float *)(param_1 + 0x54) - fVar23;
  auVar38._8_4_ = *(float *)(param_1 + 0x58) - fVar26;
  auVar38._12_4_ = *(float *)(param_1 + 0x5c) - fVar24;
  auVar43 = NEON_ext(auVar29,auVar29,8,1);
  auVar51 = NEON_ext(auVar38,auVar38,8,1);
  fVar36 = auVar29._0_4_ * auVar38._4_4_ - auVar29._4_4_ * auVar38._0_4_;
  uVar28 = NEON_ext(CONCAT44(auVar29._4_4_ * auVar38._8_4_ - auVar29._8_4_ * auVar38._4_4_,fVar36),
                    CONCAT44(auVar43._4_4_ * auVar38._4_4_ - auVar29._4_4_ * auVar51._4_4_,
                             auVar43._0_4_ * auVar38._0_4_ - auVar29._0_4_ * auVar51._0_4_),4,1);
  fVar25 = (float)uVar28;
  auVar39._0_4_ = fVar25 * fVar25;
  fVar41 = (float)((ulong)uVar28 >> 0x20);
  auVar39._4_4_ = fVar41 * fVar41;
  auVar39._8_4_ = fVar36 * fVar36;
  auVar39._12_4_ = 0;
  auVar43 = NEON_ext(auVar39,auVar39,8,1);
  fVar21 = auVar43._0_4_ + auVar43._4_4_;
  fVar20 = auVar39._0_4_ + auVar39._4_4_ + fVar21;
  fVar21 = auVar39._0_4_ + auVar39._4_4_ + fVar21;
  uVar13 = CONCAT44(fVar21,fVar20);
  uVar28 = NEON_frsqrte(uVar13,4);
  fVar45 = (float)uVar28;
  fVar50 = (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar45 * fVar45),uVar13,4);
  fVar45 = fVar45 * (float)uVar28;
  fVar50 = fVar50 * (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar45 * fVar45),uVar13,4);
  fVar45 = fVar45 * (float)uVar28;
  fVar50 = fVar50 * (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar45 * fVar45),uVar13,4);
  fVar45 = fVar45 * (float)uVar28;
  fVar50 = fVar50 * (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar45 * fVar45),uVar13,4);
  uVar42 = CONCAT44(fVar21 * fVar50 * (float)((ulong)uVar28 >> 0x20),fVar20 * fVar45 * (float)uVar28
                   );
  uVar42 = uVar42 ^ (uVar42 ^ uVar13) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
  uVar28 = NEON_frecpe(uVar42,4);
  uVar46 = NEON_frecps(uVar42,uVar28,4);
  fVar20 = (float)uVar28 * (float)uVar46;
  fVar21 = (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar46 >> 0x20);
  uVar28 = NEON_frecps(uVar42,CONCAT44(fVar21,fVar20),4);
  fVar20 = fVar20 * (float)uVar28;
  fVar21 = fVar21 * (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frecps(uVar42,CONCAT44(fVar21,fVar20),4);
  fVar20 = fVar20 * (float)uVar28;
  fVar21 = fVar21 * (float)((ulong)uVar28 >> 0x20);
  uVar28 = NEON_frecps(uVar42,CONCAT44(fVar21,fVar20),4);
  fVar20 = fVar20 * (float)uVar28;
  uVar28 = NEON_frecps(uVar42,CONCAT44(fVar21 * (float)((ulong)uVar28 >> 0x20),fVar20),4);
  fVar20 = fVar20 * (float)uVar28;
  local_90 = CONCAT44(fVar41 * fVar20,fVar25 * fVar20);
  fVar22 = fVar22 * fVar25 * fVar20;
  fVar23 = fVar23 * fVar41 * fVar20;
  fVar26 = fVar26 * fVar36 * fVar20;
  uStack_88 = (ulong)(uint)(fVar36 * fVar20);
  auVar43._4_4_ = fVar23;
  auVar43._0_4_ = fVar22;
  auVar43._8_4_ = fVar26;
  auVar43._12_4_ = fVar24 * 0.0;
  auVar51._4_4_ = fVar23;
  auVar51._0_4_ = fVar22;
  auVar51._8_4_ = fVar26;
  auVar51._12_4_ = fVar24 * 0.0;
  auVar43 = NEON_ext(auVar43,auVar51,8,1);
  fVar21 = auVar43._0_4_ + auVar43._4_4_;
  fVar20 = fVar22 + fVar23 + fVar21;
  (**(code **)(*param_6 + 0x18))(param_6,&local_90,local_58,local_78);
  iVar37 = -(uint)(fVar20 + (float)*param_9 < local_58._0_4_);
  iVar27 = -(uint)((float)*param_9 + local_78[0] < fVar20);
  iVar27 = CONCAT13((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar37 >> 0x18),
                    CONCAT12((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar37 >> 0x10),
                             CONCAT11((byte)((uint)iVar27 >> 8) | (byte)((uint)iVar37 >> 8),
                                      (byte)iVar27 | (byte)iVar37)));
  auVar30._0_4_ = -(uint)(iVar27 == -1);
  auVar30._4_4_ = -(uint)(iVar27 == -1);
  auVar30._8_4_ = -(uint)(iVar27 == -1);
  auVar30._12_4_ = -(uint)(iVar27 == -1);
  NEON_ext(auVar30,auVar30,8,1);
  if (CONCAT13((char)auVar30._12_4_,
               CONCAT12((char)auVar30._8_4_,CONCAT11((char)auVar30._4_4_,(char)auVar30._0_4_))) !=
      -1) {
    local_94 = 0;
    local_a0 = CONCAT44(((fVar22 + fVar23 + fVar21) - local_58._4_4_) +
                        SUB164(ZEXT816(0xb4000000b4000000),4),
                        (fVar20 - local_58._0_4_) + SUB164(ZEXT816(0xb4000000b4000000),0));
    uStack_a8 = uStack_88;
    local_b0 = local_90;
    uVar13 = FUN_0028c2e0(param_4,param_5,param_6,param_9,&local_a0,local_58,&local_b0,&local_94);
    if (((uVar13 & 1) != 0) &&
       (uVar13 = FUN_0028c650((int)*(undefined8 *)(param_1 + 0x30),
                              *(undefined1 (*) [16])(param_1 + 0x40),
                              *(undefined1 (*) [16])(param_1 + 0x50),param_3,param_4,param_5,param_6
                              ,param_9,&local_a0,&local_b0,&local_94), (uVar13 & 1) != 0)) {
      fVar22 = (float)*(undefined8 *)(param_1 + 0x38);
      fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
      fVar20 = (float)*(undefined8 *)(param_1 + 0x30);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
      auVar31._0_4_ = *(float *)(param_1 + 0x40) - fVar20;
      auVar31._4_4_ = *(float *)(param_1 + 0x44) - fVar21;
      auVar31._8_4_ = *(float *)(param_1 + 0x48) - fVar22;
      auVar31._12_4_ = *(float *)(param_1 + 0x4c) - fVar23;
      fVar20 = *(float *)(param_1 + 0x50) - fVar20;
      fVar21 = *(float *)(param_1 + 0x54) - fVar21;
      fVar22 = *(float *)(param_1 + 0x58) - fVar22;
      fVar23 = *(float *)(param_1 + 0x5c) - fVar23;
      auVar43 = NEON_ext(auVar31,auVar31,8,1);
      auVar5._4_4_ = fVar21;
      auVar5._0_4_ = fVar20;
      auVar5._8_4_ = fVar22;
      auVar5._12_4_ = fVar23;
      auVar6._4_4_ = fVar21;
      auVar6._0_4_ = fVar20;
      auVar6._8_4_ = fVar22;
      auVar6._12_4_ = fVar23;
      auVar51 = NEON_ext(auVar5,auVar6,8,1);
      fVar23 = auVar31._0_4_ * fVar21 - auVar31._4_4_ * fVar20;
      uVar28 = NEON_ext(CONCAT44(auVar31._4_4_ * fVar22 - auVar31._8_4_ * fVar21,fVar23),
                        CONCAT44(auVar43._4_4_ * fVar21 - auVar31._4_4_ * auVar51._4_4_,
                                 auVar43._0_4_ * fVar20 - auVar31._0_4_ * auVar51._0_4_),4,1);
      fVar26 = (float)uVar28;
      fVar22 = fVar26 * fVar26;
      fVar25 = (float)((ulong)uVar28 >> 0x20);
      fVar24 = fVar25 * fVar25;
      auVar7._4_4_ = fVar24;
      auVar7._0_4_ = fVar22;
      auVar7._8_4_ = fVar23 * fVar23;
      auVar7._12_4_ = 0;
      auVar8._4_4_ = fVar24;
      auVar8._0_4_ = fVar22;
      auVar8._8_4_ = fVar23 * fVar23;
      auVar8._12_4_ = 0;
      auVar43 = NEON_ext(auVar7,auVar8,8,1);
      fVar21 = auVar43._0_4_ + auVar43._4_4_;
      fVar20 = fVar22 + fVar24 + fVar21;
      fVar21 = fVar22 + fVar24 + fVar21;
      uVar28 = NEON_frsqrte(CONCAT44(fVar21,fVar20),4);
      fVar22 = (float)uVar28;
      fVar24 = (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar22 * fVar22),CONCAT44(fVar21,fVar20),4);
      fVar22 = fVar22 * (float)uVar28;
      fVar24 = fVar24 * (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar22 * fVar22),CONCAT44(fVar21,fVar20),4);
      fVar22 = fVar22 * (float)uVar28;
      fVar24 = fVar24 * (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar22 * fVar22),CONCAT44(fVar21,fVar20),4);
      fVar22 = fVar22 * (float)uVar28;
      fVar24 = fVar24 * (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar22 * fVar22),CONCAT44(fVar21,fVar20),4);
      uVar13 = CONCAT44(fVar21 * fVar24 * (float)((ulong)uVar28 >> 0x20),
                        fVar20 * fVar22 * (float)uVar28);
      uVar13 = uVar13 ^ (uVar13 ^ CONCAT44(fVar21,fVar20)) &
                        CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
      uVar28 = NEON_frecpe(uVar13,4);
      uVar46 = NEON_frecps(uVar13,uVar28,4);
      fVar20 = (float)uVar28 * (float)uVar46;
      fVar21 = (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar46 >> 0x20);
      uVar28 = NEON_frecps(uVar13,CONCAT44(fVar21,fVar20),4);
      fVar20 = fVar20 * (float)uVar28;
      fVar21 = fVar21 * (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frecps(uVar13,CONCAT44(fVar21,fVar20),4);
      fVar20 = fVar20 * (float)uVar28;
      fVar21 = fVar21 * (float)((ulong)uVar28 >> 0x20);
      uVar28 = NEON_frecps(uVar13,CONCAT44(fVar21,fVar20),4);
      fVar20 = fVar20 * (float)uVar28;
      uVar28 = NEON_frecps(uVar13,CONCAT44(fVar21 * (float)((ulong)uVar28 >> 0x20),fVar20),4);
      fVar20 = fVar20 * (float)uVar28;
      fVar26 = fVar26 * fVar20;
      fVar25 = fVar25 * fVar20;
      fVar23 = fVar23 * fVar20;
      uStack_88 = (ulong)(uint)fVar23;
      local_90 = CONCAT44(fVar25,fVar26);
      param_10[1] = (ulong)(uint)fVar23;
      *param_10 = CONCAT44(fVar25,fVar26);
      pfVar17 = (float *)param_6[5];
      pfVar14 = *(float **)(param_4 + 0x18);
      auVar40._0_4_ = fVar26 * pfVar17[4];
      auVar40._4_4_ = fVar25 * pfVar17[5];
      auVar40._8_4_ = fVar23 * pfVar17[6];
      auVar40._12_4_ = pfVar17[7] * 0.0;
      auVar32._0_4_ = fVar26 * *pfVar17;
      auVar32._4_4_ = fVar25 * pfVar17[1];
      auVar32._8_4_ = fVar23 * pfVar17[2];
      auVar32._12_4_ = pfVar17[3] * 0.0;
      auVar43 = NEON_ext(auVar32,auVar32,8,1);
      fVar20 = auVar43._0_4_ + auVar43._4_4_;
      auVar43 = NEON_ext(auVar40,auVar40,8,1);
      fVar22 = auVar43._0_4_ + auVar43._4_4_;
      fVar26 = fVar26 * pfVar17[8];
      fVar25 = fVar25 * pfVar17[9];
      auVar9._4_4_ = fVar25;
      auVar9._0_4_ = fVar26;
      auVar9._8_4_ = fVar23 * pfVar17[10];
      auVar9._12_4_ = pfVar17[0xb] * 0.0;
      auVar10._4_4_ = fVar25;
      auVar10._0_4_ = fVar26;
      auVar10._8_4_ = fVar23 * pfVar17[10];
      auVar10._12_4_ = pfVar17[0xb] * 0.0;
      auVar43 = NEON_ext(auVar9,auVar10,8,1);
      fVar21 = fVar26 + fVar25 + auVar43._0_4_ + auVar43._4_4_;
      uVar28 = NEON_ext(CONCAT44(auVar32._0_4_ + auVar32._4_4_ + fVar20,
                                 auVar32._0_4_ + auVar32._4_4_ + fVar20),
                        CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar22,
                                 auVar40._0_4_ + auVar40._4_4_ + fVar22),4,1);
      fVar22 = (float)uVar28;
      fVar23 = (float)((ulong)uVar28 >> 0x20);
      auVar33._0_4_ = *pfVar14 * fVar22;
      auVar33._4_4_ = pfVar14[1] * fVar23;
      auVar33._8_4_ = pfVar14[2] * fVar21;
      auVar33._12_4_ = 0;
      auVar43 = NEON_ext(auVar33,auVar33,8,1);
      fVar20 = auVar33._0_4_ + auVar33._4_4_ + auVar43._0_4_ + auVar43._4_4_;
      if (*(uint *)(param_4 + 0x10) < 2) {
        uVar16 = 0;
        uVar15 = *(uint *)(param_4 + 0x14);
      }
      else {
        uVar13 = 1;
        uVar15 = 0;
        pfVar17 = pfVar14;
        do {
          auVar34._0_4_ = pfVar17[5] * fVar22;
          auVar34._4_4_ = pfVar17[6] * fVar23;
          auVar34._8_4_ = pfVar17[7] * fVar21;
          auVar34._12_4_ = 0;
          auVar43 = NEON_ext(auVar34,auVar34,8,1);
          fVar26 = auVar34._0_4_ + auVar34._4_4_ + auVar43._0_4_ + auVar43._4_4_;
          bVar3 = fVar26 < fVar20;
          fVar20 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)fVar26) & -(uint)bVar3);
          uVar16 = (uint)uVar13;
          if (!bVar3) {
            uVar16 = uVar15;
          }
          uVar13 = uVar13 + 1;
          uVar15 = uVar16;
          pfVar17 = pfVar17 + 5;
        } while (*(uint *)(param_4 + 0x10) != uVar13);
        uVar15 = *(uint *)(param_4 + 0x14);
      }
      if (uVar15 != 0) {
        fVar22 = -fVar22;
        fVar23 = -fVar23;
        fVar21 = -fVar21;
        fVar20 = fVar20 * fVar20;
        lVar18 = *(long *)(param_4 + 0x30);
        uVar13 = 0;
        uVar42 = 0xffffffff;
        uVar19 = 1;
        do {
          while( true ) {
            iVar27 = (int)uVar42;
            pfVar17 = pfVar14 + (ulong)*(byte *)(lVar18 + (ulong)(uVar19 - 1)) * 5;
            pfVar4 = pfVar14 + (ulong)*(byte *)(lVar18 + (ulong)uVar19) * 5;
            fVar26 = *pfVar17 + *pfVar4;
            fVar25 = pfVar17[1] + pfVar4[1];
            fVar41 = pfVar17[2] + pfVar4[2];
            auVar44._0_4_ = fVar26 * fVar26;
            auVar44._4_4_ = fVar25 * fVar25;
            auVar44._8_4_ = fVar41 * fVar41;
            auVar44._12_4_ = 0;
            auVar43 = NEON_ext(auVar44,auVar44,8,1);
            fVar24 = auVar43._0_4_ + auVar43._4_4_;
            auVar48._0_4_ = fVar22 * fVar26;
            auVar48._4_4_ = fVar23 * fVar25;
            auVar48._8_4_ = fVar21 * fVar41;
            auVar48._12_4_ = 0;
            fVar26 = auVar44._0_4_ + auVar44._4_4_ + fVar24;
            uVar28 = CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar24,fVar26);
            auVar43 = NEON_ext(auVar48,auVar48,8,1);
            fVar24 = auVar48._0_4_ + auVar48._4_4_ + auVar43._0_4_ + auVar43._4_4_;
            bVar3 = 0.0 <= fVar24 && fVar20 * fVar26 < fVar24 * fVar24;
            auVar49._0_4_ = -(uint)bVar3;
            auVar49._4_4_ = -(uint)bVar3;
            auVar49._8_4_ = -(uint)bVar3;
            auVar49._12_4_ = -(uint)bVar3;
            NEON_ext(auVar49,auVar49,8,1);
            if (CONCAT13((char)auVar49._12_4_,
                         CONCAT12((char)auVar49._8_4_,
                                  CONCAT11((char)auVar49._4_4_,(char)auVar49._0_4_))) == -1) break;
            uVar13 = uVar13 + 1;
            uVar19 = uVar19 + 2;
            if (uVar15 == uVar13) goto LAB_0028efbc;
          }
          uVar46 = NEON_frecpe(uVar28,4);
          uVar47 = NEON_frecps(uVar28,uVar46,4);
          fVar20 = (float)uVar46 * (float)uVar47;
          fVar26 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
          uVar46 = NEON_frecps(uVar28,CONCAT44(fVar26,fVar20),4);
          fVar20 = fVar20 * (float)uVar46;
          fVar26 = fVar26 * (float)((ulong)uVar46 >> 0x20);
          uVar46 = NEON_frecps(uVar28,CONCAT44(fVar26,fVar20),4);
          fVar20 = fVar20 * (float)uVar46;
          fVar26 = fVar26 * (float)((ulong)uVar46 >> 0x20);
          uVar46 = NEON_frecps(uVar28,CONCAT44(fVar26,fVar20),4);
          fVar20 = fVar20 * (float)uVar46;
          uVar28 = NEON_frecps(uVar28,CONCAT44(fVar26 * (float)((ulong)uVar46 >> 0x20),fVar20),4);
          fVar20 = fVar24 * fVar24 * fVar20 * (float)uVar28;
          uVar42 = uVar13 & 0xffffffff;
          iVar27 = (int)uVar13;
          uVar13 = uVar13 + 1;
          uVar19 = uVar19 + 2;
        } while (uVar15 != uVar13);
LAB_0028efbc:
        if (iVar27 != -1) {
          bVar1 = *(byte *)(lVar18 + (ulong)(uint)(iVar27 << 1));
          bVar2 = *(byte *)(lVar18 + (ulong)(iVar27 << 1 | 1));
          pfVar17 = pfVar14 + (ulong)bVar1 * 5;
          pfVar4 = pfVar14 + (ulong)bVar2 * 5;
          auVar35._0_4_ = fVar22 * *pfVar17;
          auVar35._4_4_ = fVar23 * pfVar17[1];
          auVar35._8_4_ = fVar21 * pfVar17[2];
          auVar35._12_4_ = 0;
          auVar51 = NEON_ext(auVar35,auVar35,8,1);
          fVar22 = fVar22 * *pfVar4;
          fVar23 = fVar23 * pfVar4[1];
          auVar11._4_4_ = fVar23;
          auVar11._0_4_ = fVar22;
          auVar11._8_4_ = fVar21 * pfVar4[2];
          auVar11._12_4_ = 0;
          auVar12._4_4_ = fVar23;
          auVar12._0_4_ = fVar22;
          auVar12._8_4_ = fVar21 * pfVar4[2];
          auVar12._12_4_ = 0;
          auVar43 = NEON_ext(auVar11,auVar12,8,1);
          if (auVar35._0_4_ + auVar35._4_4_ + auVar51._0_4_ + auVar51._4_4_ <=
              fVar22 + fVar23 + auVar43._0_4_ + auVar43._4_4_) {
            bVar1 = bVar2;
          }
          uVar16 = (uint)bVar1;
        }
      }
      FUN_0028cba0(param_1,param_2,param_4,pfVar14 + (long)(int)uVar16 * 5,param_6,param_7,param_8,
                   param_9,&local_90,param_11);
      bVar3 = false;
      goto LAB_0028ee84;
    }
  }
  bVar3 = true;
LAB_0028ee84:
  return !bVar3;
}


