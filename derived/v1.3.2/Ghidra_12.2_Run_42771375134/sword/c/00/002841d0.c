/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002841d0; name: FUN_002841d0
 */


undefined8
FUN_002841d0(float param_1,float param_2,undefined8 param_3,long param_4,long param_5,
            undefined8 param_6,undefined8 param_7,int *param_8,undefined8 param_9,float *param_10,
            float *param_11,byte param_12)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  undefined8 *puVar20;
  float *pfVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
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
  float fVar47;
  float fVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uVar49;
  undefined1 auVar50 [16];
  float fVar53;
  undefined8 uVar51;
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar61;
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ulong uVar67;
  undefined1 auVar68 [16];
  float fVar70;
  undefined1 auVar69 [16];
  float fVar71;
  float fVar72;
  float local_460 [256];
  
  iVar3 = *param_8;
  if ((param_12 & 1) == 0) {
    puVar20 = *(undefined8 **)(param_5 + 0x30);
    fVar35 = *param_11;
    fVar29 = param_11[1];
    fVar37 = param_11[2];
    pfVar19 = *(float **)(param_4 + 0x18);
    fVar28 = param_2 * DAT_01d4c4d4;
    if (param_2 * DAT_01d4c4d4 <= param_1) {
      fVar28 = param_1;
    }
    fVar40 = (float)puVar20[1];
    fVar41 = (float)((ulong)puVar20[1] >> 0x20);
    fVar36 = (float)*puVar20;
    fVar38 = (float)((ulong)*puVar20 >> 0x20);
    auVar52 = *(undefined1 (*) [16])(puVar20 + 2);
    fVar42 = auVar52._0_4_;
    fVar47 = auVar52._4_4_;
    fVar48 = auVar52._8_4_;
    fVar33 = (float)puVar20[5];
    fVar34 = (float)((ulong)puVar20[5] >> 0x20);
    fVar31 = (float)puVar20[4];
    fVar32 = (float)((ulong)puVar20[4] >> 0x20);
    fVar30 = *param_10;
    fVar53 = param_10[1];
    fVar54 = param_10[2];
    fVar39 = param_2 * DAT_01d4c158;
    if (fVar28 <= param_2 * DAT_01d4c158) {
      fVar39 = fVar28;
    }
    fVar59 = fVar36 * fVar35 + fVar42 * fVar29 + fVar31 * fVar37;
    fVar61 = fVar38 * fVar35 + fVar47 * fVar29 + fVar32 * fVar37;
    fVar29 = fVar40 * fVar35 + fVar48 * fVar29 + fVar33 * fVar37;
    fVar35 = pfVar19[3] + pfVar19[2] * fVar29 + *pfVar19 * fVar59 + pfVar19[1] * fVar61;
    fVar28 = fVar35;
    if (fVar35 < -fVar39) {
      fVar28 = DAT_01d4c18c;
    }
    local_460[0] = fVar28;
    uVar18 = *(uint *)(param_4 + 0x10);
    if (uVar18 < 2) {
      uVar24 = 0;
      uVar17 = 0;
    }
    else {
      pfVar21 = pfVar19 + 8;
      uVar16 = 1;
      uVar25 = 0;
      uVar23 = 0;
      do {
        pfVar1 = pfVar21 + -3;
        pfVar7 = pfVar21 + -2;
        pfVar2 = pfVar21 + -1;
        fVar72 = *pfVar21;
        pfVar21 = pfVar21 + 5;
        fVar72 = fVar72 + fVar59 * *pfVar1 + fVar61 * *pfVar7 + fVar29 * *pfVar2;
        fVar37 = fVar72;
        if (fVar72 < -fVar39) {
          fVar37 = DAT_01d4c18c;
        }
        uVar17 = (uint)uVar16;
        fVar70 = fVar37;
        if (fVar28 <= fVar37) {
          uVar17 = uVar25;
          fVar70 = fVar28;
        }
        fVar28 = fVar70;
        fVar70 = fVar72;
        if (fVar72 <= fVar35) {
          fVar70 = fVar35;
        }
        local_460[uVar16] = fVar37;
        uVar24 = (uint)uVar16;
        if (fVar72 <= fVar35) {
          uVar24 = uVar23;
        }
        uVar16 = uVar16 + 1;
        uVar25 = uVar17;
        uVar23 = uVar24;
        fVar35 = fVar70;
      } while (uVar18 != uVar16);
    }
    if (fVar28 != DAT_01d4c18c) {
      if (uVar18 == 0) {
        uVar24 = uVar17;
      }
      else {
        uVar16 = 0;
        pfVar21 = pfVar19 + (ulong)uVar17 * 5;
        fVar35 = *pfVar21;
        fVar29 = pfVar21[1];
        fVar37 = pfVar21[2];
        fVar61 = fVar36 * fVar35;
        fVar72 = fVar38 * fVar29;
        fVar59 = fVar41 * 0.0;
        auVar46._4_4_ = fVar72;
        auVar46._0_4_ = fVar61;
        auVar46._8_4_ = fVar40 * fVar37;
        auVar46._12_4_ = fVar59;
        auVar13._4_4_ = fVar72;
        auVar13._0_4_ = fVar61;
        auVar13._8_4_ = fVar40 * fVar37;
        auVar13._12_4_ = fVar59;
        auVar46 = NEON_ext(auVar46,auVar13,8,1);
        fVar59 = auVar46._0_4_ + auVar46._4_4_;
        auVar62._0_4_ = fVar42 * fVar35;
        auVar62._4_4_ = fVar47 * fVar29;
        auVar62._8_4_ = fVar48 * fVar37;
        auVar62._12_4_ = auVar52._12_4_ * 0.0;
        auVar60._0_4_ = fVar31 * fVar35;
        auVar60._4_4_ = fVar32 * fVar29;
        auVar60._8_4_ = fVar33 * fVar37;
        auVar60._12_4_ = fVar34 * 0.0;
        auVar46 = NEON_ext(auVar62,auVar62,8,1);
        fVar29 = auVar46._0_4_ + auVar46._4_4_;
        auVar46 = NEON_ext(auVar60,auVar60,8,1);
        fVar35 = auVar60._0_4_ + auVar60._4_4_ + auVar46._0_4_ + auVar46._4_4_;
        uVar51 = NEON_ext(CONCAT44(fVar61 + fVar72 + fVar59,fVar61 + fVar72 + fVar59),
                          CONCAT44(auVar62._0_4_ + auVar62._4_4_ + fVar29,
                                   auVar62._0_4_ + auVar62._4_4_ + fVar29),4,1);
        fVar59 = (float)uVar51;
        fVar61 = (float)((ulong)uVar51 >> 0x20);
        auVar63._0_4_ = fVar59 * fVar59;
        auVar63._4_4_ = fVar61 * fVar61;
        auVar63._8_4_ = fVar35 * fVar35;
        auVar63._12_4_ = 0;
        auVar46 = NEON_ext(auVar63,auVar63,8,1);
        fVar37 = auVar46._0_4_ + auVar46._4_4_;
        fVar29 = auVar63._0_4_ + auVar63._4_4_ + fVar37;
        fVar37 = auVar63._0_4_ + auVar63._4_4_ + fVar37;
        uVar27 = CONCAT44(fVar37,fVar29);
        uVar51 = NEON_frsqrte(uVar27,4);
        fVar72 = (float)uVar51;
        fVar70 = (float)((ulong)uVar51 >> 0x20);
        uVar51 = NEON_frsqrts(CONCAT44(fVar70 * fVar70,fVar72 * fVar72),uVar27,4);
        fVar72 = fVar72 * (float)uVar51;
        fVar70 = fVar70 * (float)((ulong)uVar51 >> 0x20);
        uVar51 = NEON_frsqrts(CONCAT44(fVar70 * fVar70,fVar72 * fVar72),uVar27,4);
        fVar72 = fVar72 * (float)uVar51;
        fVar70 = fVar70 * (float)((ulong)uVar51 >> 0x20);
        uVar51 = NEON_frsqrts(CONCAT44(fVar70 * fVar70,fVar72 * fVar72),uVar27,4);
        fVar72 = fVar72 * (float)uVar51;
        fVar70 = fVar70 * (float)((ulong)uVar51 >> 0x20);
        uVar51 = NEON_frsqrts(CONCAT44(fVar70 * fVar70,fVar72 * fVar72),uVar27,4);
        uVar67 = CONCAT44(fVar37 * fVar70 * (float)((ulong)uVar51 >> 0x20),
                          fVar29 * fVar72 * (float)uVar51);
        uVar67 = uVar67 ^ (uVar67 ^ uVar27) &
                          CONCAT44(-(uint)(fVar29 == 0.0),-(uint)(fVar29 == 0.0));
        uVar51 = NEON_frecpe(uVar67,4);
        uVar49 = NEON_frecps(uVar67,uVar51,4);
        fVar72 = (float)uVar51 * (float)uVar49;
        fVar29 = (float)((ulong)uVar51 >> 0x20) * (float)((ulong)uVar49 >> 0x20);
        uVar51 = NEON_frecps(uVar67,CONCAT44(fVar29,fVar72),4);
        fVar72 = fVar72 * (float)uVar51;
        fVar29 = fVar29 * (float)((ulong)uVar51 >> 0x20);
        uVar51 = NEON_frecps(uVar67,CONCAT44(fVar29,fVar72),4);
        fVar72 = fVar72 * (float)uVar51;
        fVar29 = fVar29 * (float)((ulong)uVar51 >> 0x20);
        uVar51 = NEON_frecps(uVar67,CONCAT44(fVar29,fVar72),4);
        fVar72 = fVar72 * (float)uVar51;
        uVar51 = NEON_frecps(uVar67,CONCAT44(fVar29 * (float)((ulong)uVar51 >> 0x20),fVar72),4);
        fVar72 = fVar72 * (float)uVar51;
        fVar29 = -fVar30 * fVar59 * fVar72;
        fVar37 = -fVar53 * fVar61 * fVar72;
        fVar35 = -fVar54 * fVar35 * fVar72;
        auVar14._4_4_ = fVar37;
        auVar14._0_4_ = fVar29;
        auVar14._8_4_ = fVar35;
        auVar14._12_4_ = 0;
        auVar15._4_4_ = fVar37;
        auVar15._0_4_ = fVar29;
        auVar15._8_4_ = fVar35;
        auVar15._12_4_ = 0;
        auVar46 = NEON_ext(auVar14,auVar15,8,1);
        fVar35 = fVar29 + fVar37 + auVar46._0_4_ + auVar46._4_4_;
        pfVar21 = pfVar19;
        uVar25 = uVar17;
        do {
          uVar24 = uVar25;
          if ((uVar17 != uVar16) && (local_460[uVar16] - fVar28 < fVar39)) {
            fVar29 = *pfVar21;
            fVar37 = pfVar21[1];
            fVar59 = pfVar21[2];
            auVar68._0_4_ = fVar36 * fVar29;
            auVar68._4_4_ = fVar38 * fVar37;
            auVar68._8_4_ = fVar40 * fVar59;
            auVar68._12_4_ = fVar41 * 0.0;
            auVar46 = NEON_ext(auVar68,auVar68,8,1);
            fVar61 = auVar46._0_4_ + auVar46._4_4_;
            auVar69._0_4_ = fVar42 * fVar29;
            auVar69._4_4_ = fVar47 * fVar37;
            auVar69._8_4_ = fVar48 * fVar59;
            auVar69._12_4_ = auVar52._12_4_ * 0.0;
            auVar64._0_4_ = fVar31 * fVar29;
            auVar64._4_4_ = fVar32 * fVar37;
            auVar64._8_4_ = fVar33 * fVar59;
            auVar64._12_4_ = fVar34 * 0.0;
            auVar46 = NEON_ext(auVar69,auVar69,8,1);
            fVar37 = auVar46._0_4_ + auVar46._4_4_;
            auVar46 = NEON_ext(auVar64,auVar64,8,1);
            fVar29 = auVar64._0_4_ + auVar64._4_4_ + auVar46._0_4_ + auVar46._4_4_;
            uVar51 = NEON_ext(CONCAT44(auVar68._0_4_ + auVar68._4_4_ + fVar61,
                                       auVar68._0_4_ + auVar68._4_4_ + fVar61),
                              CONCAT44(auVar69._0_4_ + auVar69._4_4_ + fVar37,
                                       auVar69._0_4_ + auVar69._4_4_ + fVar37),4,1);
            fVar61 = (float)uVar51;
            auVar65._0_4_ = fVar61 * fVar61;
            fVar72 = (float)((ulong)uVar51 >> 0x20);
            auVar65._4_4_ = fVar72 * fVar72;
            auVar65._8_4_ = fVar29 * fVar29;
            auVar65._12_4_ = 0;
            auVar46 = NEON_ext(auVar65,auVar65,8,1);
            fVar59 = auVar46._0_4_ + auVar46._4_4_;
            fVar37 = auVar65._0_4_ + auVar65._4_4_ + fVar59;
            fVar59 = auVar65._0_4_ + auVar65._4_4_ + fVar59;
            uVar27 = CONCAT44(fVar59,fVar37);
            uVar51 = NEON_frsqrte(uVar27,4);
            fVar70 = (float)uVar51;
            fVar71 = (float)((ulong)uVar51 >> 0x20);
            uVar51 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar70 * fVar70),uVar27,4);
            fVar70 = fVar70 * (float)uVar51;
            fVar71 = fVar71 * (float)((ulong)uVar51 >> 0x20);
            uVar51 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar70 * fVar70),uVar27,4);
            fVar70 = fVar70 * (float)uVar51;
            fVar71 = fVar71 * (float)((ulong)uVar51 >> 0x20);
            uVar51 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar70 * fVar70),uVar27,4);
            fVar70 = fVar70 * (float)uVar51;
            fVar71 = fVar71 * (float)((ulong)uVar51 >> 0x20);
            uVar51 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar70 * fVar70),uVar27,4);
            uVar67 = CONCAT44(fVar59 * fVar71 * (float)((ulong)uVar51 >> 0x20),
                              fVar37 * fVar70 * (float)uVar51);
            uVar67 = uVar67 ^ (uVar67 ^ uVar27) &
                              CONCAT44(-(uint)(fVar37 == 0.0),-(uint)(fVar37 == 0.0));
            uVar51 = NEON_frecpe(uVar67,4);
            uVar49 = NEON_frecps(uVar67,uVar51,4);
            fVar37 = (float)uVar51 * (float)uVar49;
            fVar59 = (float)((ulong)uVar51 >> 0x20) * (float)((ulong)uVar49 >> 0x20);
            uVar51 = NEON_frecps(uVar67,CONCAT44(fVar59,fVar37),4);
            fVar37 = fVar37 * (float)uVar51;
            fVar59 = fVar59 * (float)((ulong)uVar51 >> 0x20);
            uVar51 = NEON_frecps(uVar67,CONCAT44(fVar59,fVar37),4);
            fVar37 = fVar37 * (float)uVar51;
            fVar59 = fVar59 * (float)((ulong)uVar51 >> 0x20);
            uVar51 = NEON_frecps(uVar67,CONCAT44(fVar59,fVar37),4);
            fVar37 = fVar37 * (float)uVar51;
            uVar51 = NEON_frecps(uVar67,CONCAT44(fVar59 * (float)((ulong)uVar51 >> 0x20),fVar37),4);
            fVar37 = fVar37 * (float)uVar51;
            auVar66._0_4_ = -fVar30 * fVar61 * fVar37;
            auVar66._4_4_ = -fVar53 * fVar72 * fVar37;
            auVar66._8_4_ = -fVar54 * fVar29 * fVar37;
            auVar66._12_4_ = 0;
            auVar46 = NEON_ext(auVar66,auVar66,8,1);
            fVar29 = auVar66._0_4_ + auVar66._4_4_ + auVar46._0_4_ + auVar46._4_4_;
            bVar6 = fVar29 < fVar35;
            fVar35 = (float)((uint)fVar35 ^ ((uint)fVar35 ^ (uint)fVar29) & -(uint)bVar6);
            uVar24 = (uint)uVar16;
            if (!bVar6) {
              uVar24 = uVar25;
            }
          }
          uVar16 = uVar16 + 1;
          pfVar21 = pfVar21 + 5;
          uVar25 = uVar24;
        } while (uVar18 != uVar16);
      }
    }
    pfVar19 = pfVar19 + (ulong)uVar24 * 5;
  }
  else {
    uVar16 = FUN_002848a0(param_3,param_4,param_5,param_9,local_460,param_10);
    if ((uVar16 & 1) == 0) {
      return 0;
    }
    fVar35 = -(float)*(undefined8 *)param_10;
    fVar37 = -(float)((ulong)*(undefined8 *)param_10 >> 0x20);
    fVar39 = -(float)*(undefined8 *)(param_10 + 2);
    pfVar19 = *(float **)(param_5 + 0x28);
    auVar43._0_4_ = fVar35 * *pfVar19;
    auVar43._4_4_ = fVar37 * pfVar19[1];
    auVar43._8_4_ = fVar39 * pfVar19[2];
    auVar43._12_4_ = pfVar19[3] * 0.0;
    auVar52 = NEON_ext(auVar43,auVar43,8,1);
    auVar50._0_4_ = fVar35 * pfVar19[4];
    auVar50._4_4_ = fVar37 * pfVar19[5];
    auVar50._8_4_ = fVar39 * pfVar19[6];
    auVar50._12_4_ = pfVar19[7] * 0.0;
    fVar28 = auVar52._0_4_ + auVar52._4_4_;
    auVar52 = NEON_ext(auVar50,auVar50,8,1);
    fVar29 = auVar52._0_4_ + auVar52._4_4_;
    fVar35 = fVar35 * pfVar19[8];
    fVar37 = fVar37 * pfVar19[9];
    auVar52._4_4_ = fVar37;
    auVar52._0_4_ = fVar35;
    auVar52._8_4_ = fVar39 * pfVar19[10];
    auVar52._12_4_ = pfVar19[0xb] * 0.0;
    auVar10._4_4_ = fVar37;
    auVar10._0_4_ = fVar35;
    auVar10._8_4_ = fVar39 * pfVar19[10];
    auVar10._12_4_ = pfVar19[0xb] * 0.0;
    auVar52 = NEON_ext(auVar52,auVar10,8,1);
    fVar35 = fVar35 + fVar37 + auVar52._0_4_ + auVar52._4_4_;
    pfVar19 = *(float **)(param_4 + 0x18);
    uVar51 = NEON_ext(CONCAT44(auVar43._0_4_ + auVar43._4_4_ + fVar28,
                               auVar43._0_4_ + auVar43._4_4_ + fVar28),
                      CONCAT44(auVar50._0_4_ + auVar50._4_4_ + fVar29,
                               auVar50._0_4_ + auVar50._4_4_ + fVar29),4,1);
    fVar29 = (float)uVar51;
    fVar37 = (float)((ulong)uVar51 >> 0x20);
    auVar44._0_4_ = *pfVar19 * fVar29;
    auVar44._4_4_ = pfVar19[1] * fVar37;
    auVar44._8_4_ = pfVar19[2] * fVar35;
    auVar44._12_4_ = 0;
    auVar52 = NEON_ext(auVar44,auVar44,8,1);
    fVar28 = auVar44._0_4_ + auVar44._4_4_ + auVar52._0_4_ + auVar52._4_4_;
    if (*(uint *)(param_4 + 0x10) < 2) {
      uVar18 = 0;
      uVar17 = *(uint *)(param_4 + 0x14);
    }
    else {
      uVar16 = 1;
      uVar17 = 0;
      pfVar21 = pfVar19;
      do {
        auVar45._0_4_ = pfVar21[5] * fVar29;
        auVar45._4_4_ = pfVar21[6] * fVar37;
        auVar45._8_4_ = pfVar21[7] * fVar35;
        auVar45._12_4_ = 0;
        auVar52 = NEON_ext(auVar45,auVar45,8,1);
        fVar39 = auVar45._0_4_ + auVar45._4_4_ + auVar52._0_4_ + auVar52._4_4_;
        bVar6 = fVar39 < fVar28;
        fVar28 = (float)((uint)fVar28 ^ ((uint)fVar28 ^ (uint)fVar39) & -(uint)bVar6);
        uVar18 = (uint)uVar16;
        if (!bVar6) {
          uVar18 = uVar17;
        }
        uVar16 = uVar16 + 1;
        uVar17 = uVar18;
        pfVar21 = pfVar21 + 5;
      } while (*(uint *)(param_4 + 0x10) != uVar16);
      uVar17 = *(uint *)(param_4 + 0x14);
    }
    if (uVar17 != 0) {
      fVar29 = -fVar29;
      fVar37 = -fVar37;
      fVar35 = -fVar35;
      fVar28 = fVar28 * fVar28;
      lVar22 = *(long *)(param_4 + 0x30);
      uVar16 = 0;
      uVar27 = 0xffffffff;
      uVar24 = 1;
      do {
        while( true ) {
          iVar26 = (int)uVar27;
          pfVar21 = pfVar19 + (ulong)*(byte *)(lVar22 + (ulong)(uVar24 - 1)) * 5;
          pfVar1 = pfVar19 + (ulong)*(byte *)(lVar22 + (ulong)uVar24) * 5;
          fVar39 = *pfVar21 + *pfVar1;
          fVar53 = pfVar21[1] + pfVar1[1];
          fVar54 = pfVar21[2] + pfVar1[2];
          auVar55._0_4_ = fVar39 * fVar39;
          auVar55._4_4_ = fVar53 * fVar53;
          auVar55._8_4_ = fVar54 * fVar54;
          auVar55._12_4_ = 0;
          auVar52 = NEON_ext(auVar55,auVar55,8,1);
          fVar30 = auVar52._0_4_ + auVar52._4_4_;
          auVar57._0_4_ = fVar29 * fVar39;
          auVar57._4_4_ = fVar37 * fVar53;
          auVar57._8_4_ = fVar35 * fVar54;
          auVar57._12_4_ = 0;
          fVar39 = auVar55._0_4_ + auVar55._4_4_ + fVar30;
          uVar51 = CONCAT44(auVar55._0_4_ + auVar55._4_4_ + fVar30,fVar39);
          auVar52 = NEON_ext(auVar57,auVar57,8,1);
          fVar30 = auVar57._0_4_ + auVar57._4_4_ + auVar52._0_4_ + auVar52._4_4_;
          bVar6 = 0.0 <= fVar30 && fVar28 * fVar39 < fVar30 * fVar30;
          auVar58._0_4_ = -(uint)bVar6;
          auVar58._4_4_ = -(uint)bVar6;
          auVar58._8_4_ = -(uint)bVar6;
          auVar58._12_4_ = -(uint)bVar6;
          NEON_ext(auVar58,auVar58,8,1);
          if (CONCAT13((char)auVar58._12_4_,
                       CONCAT12((char)auVar58._8_4_,
                                CONCAT11((char)auVar58._4_4_,(char)auVar58._0_4_))) == -1) break;
          uVar16 = uVar16 + 1;
          uVar24 = uVar24 + 2;
          if (uVar17 == uVar16) goto LAB_00284798;
        }
        uVar49 = NEON_frecpe(uVar51,4);
        uVar56 = NEON_frecps(uVar51,uVar49,4);
        fVar28 = (float)uVar49 * (float)uVar56;
        fVar39 = (float)((ulong)uVar49 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
        uVar49 = NEON_frecps(uVar51,CONCAT44(fVar39,fVar28),4);
        fVar28 = fVar28 * (float)uVar49;
        fVar39 = fVar39 * (float)((ulong)uVar49 >> 0x20);
        uVar49 = NEON_frecps(uVar51,CONCAT44(fVar39,fVar28),4);
        fVar28 = fVar28 * (float)uVar49;
        fVar39 = fVar39 * (float)((ulong)uVar49 >> 0x20);
        uVar49 = NEON_frecps(uVar51,CONCAT44(fVar39,fVar28),4);
        fVar28 = fVar28 * (float)uVar49;
        uVar51 = NEON_frecps(uVar51,CONCAT44(fVar39 * (float)((ulong)uVar49 >> 0x20),fVar28),4);
        fVar28 = fVar30 * fVar30 * fVar28 * (float)uVar51;
        uVar27 = uVar16 & 0xffffffff;
        iVar26 = (int)uVar16;
        uVar16 = uVar16 + 1;
        uVar24 = uVar24 + 2;
      } while (uVar17 != uVar16);
LAB_00284798:
      if (iVar26 != -1) {
        bVar4 = *(byte *)(lVar22 + (ulong)(uint)(iVar26 << 1));
        bVar5 = *(byte *)(lVar22 + (ulong)(iVar26 << 1 | 1));
        pfVar21 = pfVar19 + (ulong)bVar4 * 5;
        auVar52 = *(undefined1 (*) [16])(pfVar19 + (ulong)bVar5 * 5);
        fVar28 = fVar29 * *pfVar21;
        fVar39 = fVar37 * pfVar21[1];
        auVar8._4_4_ = fVar39;
        auVar8._0_4_ = fVar28;
        auVar8._8_4_ = fVar35 * pfVar21[2];
        auVar8._12_4_ = 0;
        auVar9._4_4_ = fVar39;
        auVar9._0_4_ = fVar28;
        auVar9._8_4_ = fVar35 * pfVar21[2];
        auVar9._12_4_ = 0;
        auVar46 = NEON_ext(auVar8,auVar9,8,1);
        fVar29 = fVar29 * auVar52._0_4_;
        fVar37 = fVar37 * auVar52._4_4_;
        fVar35 = fVar35 * auVar52._8_4_;
        auVar11._4_4_ = fVar37;
        auVar11._0_4_ = fVar29;
        auVar11._8_4_ = fVar35;
        auVar11._12_4_ = 0;
        auVar12._4_4_ = fVar37;
        auVar12._0_4_ = fVar29;
        auVar12._8_4_ = fVar35;
        auVar12._12_4_ = 0;
        auVar52 = NEON_ext(auVar11,auVar12,8,1);
        if (fVar28 + fVar39 + auVar46._0_4_ + auVar46._4_4_ <=
            fVar29 + fVar37 + auVar52._0_4_ + auVar52._4_4_) {
          bVar4 = bVar5;
        }
        uVar18 = (uint)bVar4;
      }
    }
    pfVar19 = pfVar19 + (long)(int)uVar18 * 5;
  }
  FUN_002836f0(param_3,param_4,pfVar19,param_5,param_6,param_7,param_8,param_9,param_10);
  if ((uint)(*param_8 - iVar3) < 2) {
    FUN_00283e90(param_3,param_4,pfVar19,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  return 1;
}


