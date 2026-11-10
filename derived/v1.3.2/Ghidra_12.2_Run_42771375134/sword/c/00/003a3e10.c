/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a3e10; name: FUN_003a3e10
 */


undefined8
FUN_003a3e10(undefined8 param_1,long param_2,float *param_3,undefined8 *param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  int iVar27;
  undefined1 auVar28 [12];
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  float *pfVar36;
  int iVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar57;
  float fVar59;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar58;
  float fVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined4 local_68;
  undefined4 local_64;
  
  uVar30 = *(uint *)(param_2 + 0x30);
  if (uVar30 != 0) {
    uVar32 = 0;
    lVar35 = param_2 + 0x38;
    pfVar36 = (float *)(param_2 + 0x14c);
    do {
      fVar47 = (pfVar36[-2] - pfVar36[-5]) * 0.5;
      fVar48 = (pfVar36[-1] - pfVar36[-4]) * 0.5;
      fVar49 = (*pfVar36 - pfVar36[-3]) * 0.5;
      fVar50 = param_3[4] - (pfVar36[-5] + pfVar36[-2]) * 0.5;
      fVar57 = param_3[5] - (pfVar36[-4] + pfVar36[-1]) * 0.5;
      fVar59 = param_3[6] - (pfVar36[-3] + *pfVar36) * 0.5;
      auVar84._0_4_ = -(uint)(param_3[0x20] + fVar47 < ABS(fVar50));
      auVar84._4_4_ = -(uint)(param_3[0x21] + fVar48 < ABS(fVar57));
      auVar84._8_4_ = -(uint)(param_3[0x22] + fVar49 < ABS(fVar59));
      auVar84._12_4_ = -(uint)(param_3[0x23] + 0.0 < ABS(param_3[7] - 0.0));
      NEON_ext(auVar84,auVar84,8,1);
      if (CONCAT12((char)auVar84._8_4_,CONCAT11((char)auVar84._4_4_,(char)auVar84._0_4_)) == 0) {
        auVar61._0_4_ = param_3[0xc] * fVar57 + param_3[8] * fVar50;
        auVar61._4_4_ = param_3[0xd] * fVar57 + param_3[9] * fVar50;
        auVar61._8_4_ = param_3[0xe] * fVar57 + param_3[10] * fVar50;
        auVar61._12_4_ = param_3[0xf] * fVar57 + 0.0;
        auVar84 = NEON_ext(auVar61,auVar61,8,1);
        auVar51._0_4_ = param_3[0x10] * fVar59 + auVar61._0_4_;
        auVar51._4_4_ = param_3[0x11] * fVar59 + auVar61._4_4_;
        auVar51._8_4_ = param_3[0x12] * fVar59 + auVar84._0_4_;
        auVar51._12_4_ = param_3[0x13] * fVar59 + 0.0;
        auVar84 = NEON_ext(auVar51,auVar51,8,1);
        auVar62._0_4_ = (float)*(undefined8 *)(param_3 + 0x14) * fVar47 + *param_3;
        auVar62._4_4_ =
             (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fVar47 + param_3[1];
        auVar62._8_4_ = (float)*(undefined8 *)(param_3 + 0x16) * fVar47 + param_3[2];
        auVar62._12_4_ =
             (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20) * fVar47 + param_3[3];
        auVar85 = NEON_ext(auVar62,auVar62,8,1);
        auVar63._0_4_ = param_3[0x18] * fVar48 + auVar62._0_4_;
        auVar63._4_4_ = param_3[0x19] * fVar48 + auVar62._4_4_;
        auVar63._8_4_ = param_3[0x1a] * fVar48 + auVar85._0_4_;
        auVar63._12_4_ = param_3[0x1b] * fVar48 + 0.0;
        auVar85 = NEON_ext(auVar63,auVar63,8,1);
        fVar47 = (float)*(undefined8 *)(param_3 + 0x1c) * fVar49 + auVar63._0_4_;
        fVar48 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20) * fVar49 + auVar63._4_4_;
        uVar38 = (undefined1)((uint)fVar48 >> 8);
        uVar39 = (undefined1)((uint)fVar48 >> 0x10);
        uVar40 = (undefined1)((uint)fVar48 >> 0x18);
        fVar50 = (float)*(undefined8 *)(param_3 + 0x1e) * fVar49 + auVar85._0_4_;
        uVar41 = (undefined1)((uint)fVar50 >> 8);
        uVar42 = (undefined1)((uint)fVar50 >> 0x10);
        uVar44 = (undefined1)((uint)fVar50 >> 0x18);
        fVar49 = (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >> 0x20) * fVar49 + 0.0;
        uVar43 = (undefined1)((uint)fVar49 >> 8);
        uVar45 = (undefined1)((uint)fVar49 >> 0x10);
        uVar46 = (undefined1)((uint)fVar49 >> 0x18);
        auVar85[4] = SUB41(fVar48,0);
        auVar85._0_4_ = fVar47;
        auVar85[5] = uVar38;
        auVar85[6] = uVar39;
        auVar85[7] = uVar40;
        auVar85[8] = SUB41(fVar50,0);
        auVar85[9] = uVar41;
        auVar85[10] = uVar42;
        auVar85[0xb] = uVar44;
        auVar85[0xc] = SUB41(fVar49,0);
        auVar85[0xd] = uVar43;
        auVar85[0xe] = uVar45;
        auVar85[0xf] = uVar46;
        auVar3[4] = SUB41(fVar48,0);
        auVar3._0_4_ = fVar47;
        auVar3[5] = uVar38;
        auVar3[6] = uVar39;
        auVar3[7] = uVar40;
        auVar3[8] = SUB41(fVar50,0);
        auVar3[9] = uVar41;
        auVar3[10] = uVar42;
        auVar3[0xb] = uVar44;
        auVar3[0xc] = SUB41(fVar49,0);
        auVar3[0xd] = uVar43;
        auVar3[0xe] = uVar45;
        auVar3[0xf] = uVar46;
        auVar85 = NEON_ext(auVar85,auVar3,8,1);
        iVar37 = -(uint)(fVar47 < ABS(auVar51._0_4_));
        iVar26 = -(uint)(fVar48 < ABS(auVar51._4_4_));
        uVar38 = (undefined1)iVar26;
        uVar39 = (undefined1)((uint)iVar26 >> 8);
        uVar40 = (undefined1)((uint)iVar26 >> 0x10);
        uVar41 = (undefined1)((uint)iVar26 >> 0x18);
        iVar26 = -(uint)(auVar85._0_4_ < ABS(auVar84._0_4_));
        uVar42 = (undefined1)iVar26;
        uVar44 = (undefined1)((uint)iVar26 >> 8);
        uVar43 = (undefined1)((uint)iVar26 >> 0x10);
        uVar45 = (undefined1)((uint)iVar26 >> 0x18);
        auVar4[4] = uVar38;
        auVar4._0_4_ = iVar37;
        auVar4[5] = uVar39;
        auVar4[6] = uVar40;
        auVar4[7] = uVar41;
        auVar4[8] = uVar42;
        auVar4[9] = uVar44;
        auVar4[10] = uVar43;
        auVar4[0xb] = uVar45;
        auVar4._12_4_ = 0;
        auVar5[4] = uVar38;
        auVar5._0_4_ = iVar37;
        auVar5[5] = uVar39;
        auVar5[6] = uVar40;
        auVar5[7] = uVar41;
        auVar5[8] = uVar42;
        auVar5[9] = uVar44;
        auVar5[10] = uVar43;
        auVar5[0xb] = uVar45;
        auVar5._12_4_ = 0;
        NEON_ext(auVar4,auVar5,8,1);
        if (CONCAT12(uVar42,CONCAT11(uVar38,(char)iVar37)) == 0) {
          local_68 = 0xbf800000;
          uVar29 = (**(code **)*param_4)(param_4,&local_68,lVar35);
          if ((uVar29 & 1) == 0) {
            return 0;
          }
          uVar30 = *(uint *)(param_2 + 0x30);
        }
      }
      uVar32 = uVar32 + 1;
      lVar35 = lVar35 + 0x10;
      pfVar36 = pfVar36 + 6;
    } while (uVar32 < uVar30);
  }
  if (*(int *)(param_2 + 0x328) != 0) {
    fVar47 = *(float *)(param_2 + 0x350);
    fVar48 = *(float *)(param_2 + 0x354);
    auVar28 = *(undefined1 (*) [12])(param_2 + 0x340);
    fVar49 = *(float *)(param_2 + 0x358);
    fVar50 = param_3[4] - auVar28._0_4_;
    fVar57 = param_3[5] - auVar28._4_4_;
    fVar59 = param_3[6] - auVar28._8_4_;
    auVar64._0_4_ = -(uint)(fVar47 + param_3[0x20] < ABS(fVar50));
    auVar64._4_4_ = -(uint)(fVar48 + param_3[0x21] < ABS(fVar57));
    auVar64._8_4_ = -(uint)(fVar49 + param_3[0x22] < ABS(fVar59));
    auVar64._12_4_ = -(uint)(param_3[0x23] + 0.0 < ABS(param_3[7] - 0.0));
    NEON_ext(auVar64,auVar64,8,1);
    if (CONCAT12((char)auVar64._8_4_,CONCAT11((char)auVar64._4_4_,(char)auVar64._0_4_)) == 0) {
      auVar65._0_4_ = param_3[0xc] * fVar57 + param_3[8] * fVar50;
      auVar65._4_4_ = param_3[0xd] * fVar57 + param_3[9] * fVar50;
      auVar65._8_4_ = param_3[0xe] * fVar57 + param_3[10] * fVar50;
      auVar65._12_4_ = param_3[0xf] * fVar57 + 0.0;
      auVar84 = NEON_ext(auVar65,auVar65,8,1);
      auVar52._0_4_ = param_3[0x10] * fVar59 + auVar65._0_4_;
      auVar52._4_4_ = param_3[0x11] * fVar59 + auVar65._4_4_;
      auVar52._8_4_ = param_3[0x12] * fVar59 + auVar84._0_4_;
      auVar52._12_4_ = param_3[0x13] * fVar59 + 0.0;
      auVar84 = NEON_ext(auVar52,auVar52,8,1);
      auVar66._0_4_ = (float)*(undefined8 *)(param_3 + 0x14) * fVar47 + *param_3;
      auVar66._4_4_ = (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fVar47 + param_3[1];
      auVar66._8_4_ = (float)*(undefined8 *)(param_3 + 0x16) * fVar47 + param_3[2];
      auVar66._12_4_ = (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20) * fVar47 + param_3[3]
      ;
      auVar85 = NEON_ext(auVar66,auVar66,8,1);
      auVar67._0_4_ = param_3[0x18] * fVar48 + auVar66._0_4_;
      auVar67._4_4_ = param_3[0x19] * fVar48 + auVar66._4_4_;
      auVar67._8_4_ = param_3[0x1a] * fVar48 + auVar85._0_4_;
      auVar67._12_4_ = param_3[0x1b] * fVar48 + 0.0;
      auVar85 = NEON_ext(auVar67,auVar67,8,1);
      fVar47 = (float)*(undefined8 *)(param_3 + 0x1c) * fVar49 + auVar67._0_4_;
      fVar48 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20) * fVar49 + auVar67._4_4_;
      uVar38 = (undefined1)((uint)fVar48 >> 8);
      uVar39 = (undefined1)((uint)fVar48 >> 0x10);
      uVar40 = (undefined1)((uint)fVar48 >> 0x18);
      fVar50 = (float)*(undefined8 *)(param_3 + 0x1e) * fVar49 + auVar85._0_4_;
      uVar41 = (undefined1)((uint)fVar50 >> 8);
      uVar42 = (undefined1)((uint)fVar50 >> 0x10);
      uVar44 = (undefined1)((uint)fVar50 >> 0x18);
      fVar49 = (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >> 0x20) * fVar49 + 0.0;
      uVar43 = (undefined1)((uint)fVar49 >> 8);
      uVar45 = (undefined1)((uint)fVar49 >> 0x10);
      uVar46 = (undefined1)((uint)fVar49 >> 0x18);
      auVar6[4] = SUB41(fVar48,0);
      auVar6._0_4_ = fVar47;
      auVar6[5] = uVar38;
      auVar6[6] = uVar39;
      auVar6[7] = uVar40;
      auVar6[8] = SUB41(fVar50,0);
      auVar6[9] = uVar41;
      auVar6[10] = uVar42;
      auVar6[0xb] = uVar44;
      auVar6[0xc] = SUB41(fVar49,0);
      auVar6[0xd] = uVar43;
      auVar6[0xe] = uVar45;
      auVar6[0xf] = uVar46;
      auVar7[4] = SUB41(fVar48,0);
      auVar7._0_4_ = fVar47;
      auVar7[5] = uVar38;
      auVar7[6] = uVar39;
      auVar7[7] = uVar40;
      auVar7[8] = SUB41(fVar50,0);
      auVar7[9] = uVar41;
      auVar7[10] = uVar42;
      auVar7[0xb] = uVar44;
      auVar7[0xc] = SUB41(fVar49,0);
      auVar7[0xd] = uVar43;
      auVar7[0xe] = uVar45;
      auVar7[0xf] = uVar46;
      auVar85 = NEON_ext(auVar6,auVar7,8,1);
      iVar37 = -(uint)(fVar47 < ABS(auVar52._0_4_));
      iVar26 = -(uint)(fVar48 < ABS(auVar52._4_4_));
      uVar38 = (undefined1)iVar26;
      uVar39 = (undefined1)((uint)iVar26 >> 8);
      uVar40 = (undefined1)((uint)iVar26 >> 0x10);
      uVar41 = (undefined1)((uint)iVar26 >> 0x18);
      iVar26 = -(uint)(auVar85._0_4_ < ABS(auVar84._0_4_));
      uVar42 = (undefined1)iVar26;
      uVar44 = (undefined1)((uint)iVar26 >> 8);
      uVar43 = (undefined1)((uint)iVar26 >> 0x10);
      uVar45 = (undefined1)((uint)iVar26 >> 0x18);
      auVar8[4] = uVar38;
      auVar8._0_4_ = iVar37;
      auVar8[5] = uVar39;
      auVar8[6] = uVar40;
      auVar8[7] = uVar41;
      auVar8[8] = uVar42;
      auVar8[9] = uVar44;
      auVar8[10] = uVar43;
      auVar8[0xb] = uVar45;
      auVar8._12_4_ = 0;
      auVar9[4] = uVar38;
      auVar9._0_4_ = iVar37;
      auVar9[5] = uVar39;
      auVar9[6] = uVar40;
      auVar9[7] = uVar41;
      auVar9[8] = uVar42;
      auVar9[9] = uVar44;
      auVar9[10] = uVar43;
      auVar9[0xb] = uVar45;
      auVar9._12_4_ = 0;
      NEON_ext(auVar8,auVar9,8,1);
      if (CONCAT12(uVar42,CONCAT11(uVar38,(char)iVar37)) == 0) {
        puVar1 = (uint *)(param_5 + (ulong)*(uint *)(param_2 + 0x330) * 4);
        uVar30 = *puVar1;
        uVar2 = puVar1[3];
        fVar47 = (float)(uVar30 | 0x80000000);
        fVar48 = (float)(uVar2 | 0x80000000);
        if ((int)uVar30 < 0) {
          fVar47 = (float)~uVar30;
        }
        uVar32 = 0;
        if ((int)uVar2 < 0) {
          fVar48 = (float)~uVar2;
        }
        do {
          lVar35 = param_2 + uVar32 * 4;
          if (*(int *)(lVar35 + 0x360) != 0) {
            lVar34 = param_2 + uVar32 * 0x20;
            fVar49 = *(float *)(lVar34 + 0x3a0);
            fVar50 = *(float *)(lVar34 + 0x3a4);
            auVar28 = *(undefined1 (*) [12])(lVar34 + 0x390);
            fVar57 = *(float *)(lVar34 + 0x3a8);
            fVar59 = param_3[4] - auVar28._0_4_;
            fVar58 = param_3[5] - auVar28._4_4_;
            fVar60 = param_3[6] - auVar28._8_4_;
            auVar68._0_4_ = -(uint)(fVar49 + param_3[0x20] < ABS(fVar59));
            auVar68._4_4_ = -(uint)(fVar50 + param_3[0x21] < ABS(fVar58));
            auVar68._8_4_ = -(uint)(fVar57 + param_3[0x22] < ABS(fVar60));
            auVar68._12_4_ = -(uint)(param_3[0x23] + 0.0 < ABS(param_3[7] - 0.0));
            NEON_ext(auVar68,auVar68,8,1);
            if (CONCAT12((char)auVar68._8_4_,CONCAT11((char)auVar68._4_4_,(char)auVar68._0_4_)) == 0
               ) {
              auVar69._0_4_ = param_3[0xc] * fVar58 + param_3[8] * fVar59;
              auVar69._4_4_ = param_3[0xd] * fVar58 + param_3[9] * fVar59;
              auVar69._8_4_ = param_3[0xe] * fVar58 + param_3[10] * fVar59;
              auVar69._12_4_ = param_3[0xf] * fVar58 + 0.0;
              auVar84 = NEON_ext(auVar69,auVar69,8,1);
              auVar53._0_4_ = param_3[0x10] * fVar60 + auVar69._0_4_;
              auVar53._4_4_ = param_3[0x11] * fVar60 + auVar69._4_4_;
              auVar53._8_4_ = param_3[0x12] * fVar60 + auVar84._0_4_;
              auVar53._12_4_ = param_3[0x13] * fVar60 + 0.0;
              auVar84 = NEON_ext(auVar53,auVar53,8,1);
              auVar70._0_4_ = (float)*(undefined8 *)(param_3 + 0x14) * fVar49 + *param_3;
              auVar70._4_4_ =
                   (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fVar49 + param_3[1];
              auVar70._8_4_ = (float)*(undefined8 *)(param_3 + 0x16) * fVar49 + param_3[2];
              auVar70._12_4_ =
                   (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20) * fVar49 + param_3[3];
              auVar85 = NEON_ext(auVar70,auVar70,8,1);
              auVar71._0_4_ = param_3[0x18] * fVar50 + auVar70._0_4_;
              auVar71._4_4_ = param_3[0x19] * fVar50 + auVar70._4_4_;
              auVar71._8_4_ = param_3[0x1a] * fVar50 + auVar85._0_4_;
              auVar71._12_4_ = param_3[0x1b] * fVar50 + 0.0;
              auVar85 = NEON_ext(auVar71,auVar71,8,1);
              fVar49 = (float)*(undefined8 *)(param_3 + 0x1c) * fVar57 + auVar71._0_4_;
              fVar50 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20) * fVar57 +
                       auVar71._4_4_;
              uVar38 = (undefined1)((uint)fVar50 >> 8);
              uVar39 = (undefined1)((uint)fVar50 >> 0x10);
              uVar40 = (undefined1)((uint)fVar50 >> 0x18);
              fVar59 = (float)*(undefined8 *)(param_3 + 0x1e) * fVar57 + auVar85._0_4_;
              uVar41 = (undefined1)((uint)fVar59 >> 8);
              uVar42 = (undefined1)((uint)fVar59 >> 0x10);
              uVar44 = (undefined1)((uint)fVar59 >> 0x18);
              fVar57 = (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >> 0x20) * fVar57 + 0.0;
              uVar43 = (undefined1)((uint)fVar57 >> 8);
              uVar45 = (undefined1)((uint)fVar57 >> 0x10);
              uVar46 = (undefined1)((uint)fVar57 >> 0x18);
              auVar10[4] = SUB41(fVar50,0);
              auVar10._0_4_ = fVar49;
              auVar10[5] = uVar38;
              auVar10[6] = uVar39;
              auVar10[7] = uVar40;
              auVar10[8] = SUB41(fVar59,0);
              auVar10[9] = uVar41;
              auVar10[10] = uVar42;
              auVar10[0xb] = uVar44;
              auVar10[0xc] = SUB41(fVar57,0);
              auVar10[0xd] = uVar43;
              auVar10[0xe] = uVar45;
              auVar10[0xf] = uVar46;
              auVar11[4] = SUB41(fVar50,0);
              auVar11._0_4_ = fVar49;
              auVar11[5] = uVar38;
              auVar11[6] = uVar39;
              auVar11[7] = uVar40;
              auVar11[8] = SUB41(fVar59,0);
              auVar11[9] = uVar41;
              auVar11[10] = uVar42;
              auVar11[0xb] = uVar44;
              auVar11[0xc] = SUB41(fVar57,0);
              auVar11[0xd] = uVar43;
              auVar11[0xe] = uVar45;
              auVar11[0xf] = uVar46;
              auVar85 = NEON_ext(auVar10,auVar11,8,1);
              iVar37 = -(uint)(fVar49 < ABS(auVar53._0_4_));
              iVar26 = -(uint)(fVar50 < ABS(auVar53._4_4_));
              uVar38 = (undefined1)iVar26;
              uVar39 = (undefined1)((uint)iVar26 >> 8);
              uVar40 = (undefined1)((uint)iVar26 >> 0x10);
              uVar41 = (undefined1)((uint)iVar26 >> 0x18);
              iVar26 = -(uint)(auVar85._0_4_ < ABS(auVar84._0_4_));
              uVar42 = (undefined1)iVar26;
              uVar44 = (undefined1)((uint)iVar26 >> 8);
              uVar43 = (undefined1)((uint)iVar26 >> 0x10);
              uVar45 = (undefined1)((uint)iVar26 >> 0x18);
              auVar12[4] = uVar38;
              auVar12._0_4_ = iVar37;
              auVar12[5] = uVar39;
              auVar12[6] = uVar40;
              auVar12[7] = uVar41;
              auVar12[8] = uVar42;
              auVar12[9] = uVar44;
              auVar12[10] = uVar43;
              auVar12[0xb] = uVar45;
              auVar12._12_4_ = 0;
              auVar13[4] = uVar38;
              auVar13._0_4_ = iVar37;
              auVar13[5] = uVar39;
              auVar13[6] = uVar40;
              auVar13[7] = uVar41;
              auVar13[8] = uVar42;
              auVar13[9] = uVar44;
              auVar13[10] = uVar43;
              auVar13[0xb] = uVar45;
              auVar13._12_4_ = 0;
              NEON_ext(auVar12,auVar13,8,1);
              if (CONCAT12(uVar42,CONCAT11(uVar38,(char)iVar37)) == 0) {
                uVar29 = 0;
                do {
                  if (*(int *)(param_2 + uVar32 * 0xe0 + uVar29 * 4 + 0x440) != 0) {
                    lVar34 = param_2 + uVar32 * 0xe0 + uVar29 * 0x20;
                    fVar49 = *(float *)(lVar34 + 0x480);
                    fVar50 = *(float *)(lVar34 + 0x484);
                    auVar28 = *(undefined1 (*) [12])(lVar34 + 0x470);
                    fVar57 = *(float *)(lVar34 + 0x488);
                    fVar59 = param_3[4] - auVar28._0_4_;
                    fVar58 = param_3[5] - auVar28._4_4_;
                    fVar60 = param_3[6] - auVar28._8_4_;
                    auVar72._0_4_ = -(uint)(fVar49 + param_3[0x20] < ABS(fVar59));
                    auVar72._4_4_ = -(uint)(fVar50 + param_3[0x21] < ABS(fVar58));
                    auVar72._8_4_ = -(uint)(fVar57 + param_3[0x22] < ABS(fVar60));
                    auVar72._12_4_ = -(uint)(param_3[0x23] + 0.0 < ABS(param_3[7] - 0.0));
                    NEON_ext(auVar72,auVar72,8,1);
                    if (CONCAT12((char)auVar72._8_4_,
                                 CONCAT11((char)auVar72._4_4_,(char)auVar72._0_4_)) == 0) {
                      auVar73._0_4_ = param_3[0xc] * fVar58 + param_3[8] * fVar59;
                      auVar73._4_4_ = param_3[0xd] * fVar58 + param_3[9] * fVar59;
                      auVar73._8_4_ = param_3[0xe] * fVar58 + param_3[10] * fVar59;
                      auVar73._12_4_ = param_3[0xf] * fVar58 + 0.0;
                      auVar84 = NEON_ext(auVar73,auVar73,8,1);
                      auVar54._0_4_ = param_3[0x10] * fVar60 + auVar73._0_4_;
                      auVar54._4_4_ = param_3[0x11] * fVar60 + auVar73._4_4_;
                      auVar54._8_4_ = param_3[0x12] * fVar60 + auVar84._0_4_;
                      auVar54._12_4_ = param_3[0x13] * fVar60 + 0.0;
                      auVar84 = NEON_ext(auVar54,auVar54,8,1);
                      auVar74._0_4_ = (float)*(undefined8 *)(param_3 + 0x14) * fVar49 + *param_3;
                      auVar74._4_4_ =
                           (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fVar49 +
                           param_3[1];
                      auVar74._8_4_ = (float)*(undefined8 *)(param_3 + 0x16) * fVar49 + param_3[2];
                      auVar74._12_4_ =
                           (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20) * fVar49 +
                           param_3[3];
                      auVar85 = NEON_ext(auVar74,auVar74,8,1);
                      auVar75._0_4_ = param_3[0x18] * fVar50 + auVar74._0_4_;
                      auVar75._4_4_ = param_3[0x19] * fVar50 + auVar74._4_4_;
                      auVar75._8_4_ = param_3[0x1a] * fVar50 + auVar85._0_4_;
                      auVar75._12_4_ = param_3[0x1b] * fVar50 + 0.0;
                      auVar85 = NEON_ext(auVar75,auVar75,8,1);
                      fVar49 = (float)*(undefined8 *)(param_3 + 0x1c) * fVar57 + auVar75._0_4_;
                      fVar50 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20) * fVar57 +
                               auVar75._4_4_;
                      uVar38 = (undefined1)((uint)fVar50 >> 8);
                      uVar39 = (undefined1)((uint)fVar50 >> 0x10);
                      uVar40 = (undefined1)((uint)fVar50 >> 0x18);
                      fVar59 = (float)*(undefined8 *)(param_3 + 0x1e) * fVar57 + auVar85._0_4_;
                      uVar41 = (undefined1)((uint)fVar59 >> 8);
                      uVar42 = (undefined1)((uint)fVar59 >> 0x10);
                      uVar44 = (undefined1)((uint)fVar59 >> 0x18);
                      fVar57 = (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >> 0x20) * fVar57 +
                               0.0;
                      uVar43 = (undefined1)((uint)fVar57 >> 8);
                      uVar45 = (undefined1)((uint)fVar57 >> 0x10);
                      uVar46 = (undefined1)((uint)fVar57 >> 0x18);
                      auVar14[4] = SUB41(fVar50,0);
                      auVar14._0_4_ = fVar49;
                      auVar14[5] = uVar38;
                      auVar14[6] = uVar39;
                      auVar14[7] = uVar40;
                      auVar14[8] = SUB41(fVar59,0);
                      auVar14[9] = uVar41;
                      auVar14[10] = uVar42;
                      auVar14[0xb] = uVar44;
                      auVar14[0xc] = SUB41(fVar57,0);
                      auVar14[0xd] = uVar43;
                      auVar14[0xe] = uVar45;
                      auVar14[0xf] = uVar46;
                      auVar15[4] = SUB41(fVar50,0);
                      auVar15._0_4_ = fVar49;
                      auVar15[5] = uVar38;
                      auVar15[6] = uVar39;
                      auVar15[7] = uVar40;
                      auVar15[8] = SUB41(fVar59,0);
                      auVar15[9] = uVar41;
                      auVar15[10] = uVar42;
                      auVar15[0xb] = uVar44;
                      auVar15[0xc] = SUB41(fVar57,0);
                      auVar15[0xd] = uVar43;
                      auVar15[0xe] = uVar45;
                      auVar15[0xf] = uVar46;
                      auVar85 = NEON_ext(auVar14,auVar15,8,1);
                      iVar37 = -(uint)(fVar49 < ABS(auVar54._0_4_));
                      iVar26 = -(uint)(fVar50 < ABS(auVar54._4_4_));
                      uVar38 = (undefined1)iVar26;
                      uVar39 = (undefined1)((uint)iVar26 >> 8);
                      uVar40 = (undefined1)((uint)iVar26 >> 0x10);
                      uVar41 = (undefined1)((uint)iVar26 >> 0x18);
                      iVar26 = -(uint)(auVar85._0_4_ < ABS(auVar84._0_4_));
                      uVar42 = (undefined1)iVar26;
                      uVar44 = (undefined1)((uint)iVar26 >> 8);
                      uVar43 = (undefined1)((uint)iVar26 >> 0x10);
                      uVar45 = (undefined1)((uint)iVar26 >> 0x18);
                      auVar16[4] = uVar38;
                      auVar16._0_4_ = iVar37;
                      auVar16[5] = uVar39;
                      auVar16[6] = uVar40;
                      auVar16[7] = uVar41;
                      auVar16[8] = uVar42;
                      auVar16[9] = uVar44;
                      auVar16[10] = uVar43;
                      auVar16[0xb] = uVar45;
                      auVar16._12_4_ = 0;
                      auVar17[4] = uVar38;
                      auVar17._0_4_ = iVar37;
                      auVar17[5] = uVar39;
                      auVar17[6] = uVar40;
                      auVar17[7] = uVar41;
                      auVar17[8] = uVar42;
                      auVar17[9] = uVar44;
                      auVar17[10] = uVar43;
                      auVar17[0xb] = uVar45;
                      auVar17._12_4_ = 0;
                      NEON_ext(auVar16,auVar17,8,1);
                      if (CONCAT12(uVar42,CONCAT11(uVar38,(char)iVar37)) == 0) {
                        uVar33 = 0;
                        do {
                          iVar37 = *(int *)(param_2 + uVar32 * 0x460 + uVar29 * 0xe0 + uVar33 * 4 +
                                           0x8a0);
                          if (iVar37 != 0) {
                            lVar34 = param_2 + uVar32 * 0x460 + uVar29 * 0xe0 + uVar33 * 0x20;
                            fVar49 = *(float *)(lVar34 + 0x8e0);
                            fVar50 = *(float *)(lVar34 + 0x8e4);
                            auVar28 = *(undefined1 (*) [12])(lVar34 + 0x8d0);
                            fVar57 = *(float *)(lVar34 + 0x8e8);
                            fVar59 = param_3[4] - auVar28._0_4_;
                            fVar58 = param_3[5] - auVar28._4_4_;
                            fVar60 = param_3[6] - auVar28._8_4_;
                            auVar76._0_4_ = -(uint)(fVar49 + param_3[0x20] < ABS(fVar59));
                            auVar76._4_4_ = -(uint)(fVar50 + param_3[0x21] < ABS(fVar58));
                            auVar76._8_4_ = -(uint)(fVar57 + param_3[0x22] < ABS(fVar60));
                            auVar76._12_4_ = -(uint)(param_3[0x23] + 0.0 < ABS(param_3[7] - 0.0));
                            NEON_ext(auVar76,auVar76,8,1);
                            if (CONCAT12((char)auVar76._8_4_,
                                         CONCAT11((char)auVar76._4_4_,(char)auVar76._0_4_)) == 0) {
                              auVar77._0_4_ = param_3[0xc] * fVar58 + param_3[8] * fVar59;
                              auVar77._4_4_ = param_3[0xd] * fVar58 + param_3[9] * fVar59;
                              auVar77._8_4_ = param_3[0xe] * fVar58 + param_3[10] * fVar59;
                              auVar77._12_4_ = param_3[0xf] * fVar58 + 0.0;
                              auVar84 = NEON_ext(auVar77,auVar77,8,1);
                              auVar55._0_4_ = param_3[0x10] * fVar60 + auVar77._0_4_;
                              auVar55._4_4_ = param_3[0x11] * fVar60 + auVar77._4_4_;
                              auVar55._8_4_ = param_3[0x12] * fVar60 + auVar84._0_4_;
                              auVar55._12_4_ = param_3[0x13] * fVar60 + 0.0;
                              auVar84 = NEON_ext(auVar55,auVar55,8,1);
                              auVar78._0_4_ =
                                   (float)*(undefined8 *)(param_3 + 0x14) * fVar49 + *param_3;
                              auVar78._4_4_ =
                                   (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) * fVar49
                                   + param_3[1];
                              auVar78._8_4_ =
                                   (float)*(undefined8 *)(param_3 + 0x16) * fVar49 + param_3[2];
                              auVar78._12_4_ =
                                   (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20) * fVar49
                                   + param_3[3];
                              auVar85 = NEON_ext(auVar78,auVar78,8,1);
                              auVar79._0_4_ = param_3[0x18] * fVar50 + auVar78._0_4_;
                              auVar79._4_4_ = param_3[0x19] * fVar50 + auVar78._4_4_;
                              auVar79._8_4_ = param_3[0x1a] * fVar50 + auVar85._0_4_;
                              auVar79._12_4_ = param_3[0x1b] * fVar50 + 0.0;
                              auVar85 = NEON_ext(auVar79,auVar79,8,1);
                              fVar49 = (float)*(undefined8 *)(param_3 + 0x1c) * fVar57 +
                                       auVar79._0_4_;
                              fVar50 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20) *
                                       fVar57 + auVar79._4_4_;
                              uVar38 = (undefined1)((uint)fVar50 >> 8);
                              uVar39 = (undefined1)((uint)fVar50 >> 0x10);
                              uVar40 = (undefined1)((uint)fVar50 >> 0x18);
                              fVar59 = (float)*(undefined8 *)(param_3 + 0x1e) * fVar57 +
                                       auVar85._0_4_;
                              uVar41 = (undefined1)((uint)fVar59 >> 8);
                              uVar42 = (undefined1)((uint)fVar59 >> 0x10);
                              uVar44 = (undefined1)((uint)fVar59 >> 0x18);
                              fVar57 = (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >> 0x20) *
                                       fVar57 + 0.0;
                              uVar43 = (undefined1)((uint)fVar57 >> 8);
                              uVar45 = (undefined1)((uint)fVar57 >> 0x10);
                              uVar46 = (undefined1)((uint)fVar57 >> 0x18);
                              auVar18[4] = SUB41(fVar50,0);
                              auVar18._0_4_ = fVar49;
                              auVar18[5] = uVar38;
                              auVar18[6] = uVar39;
                              auVar18[7] = uVar40;
                              auVar18[8] = SUB41(fVar59,0);
                              auVar18[9] = uVar41;
                              auVar18[10] = uVar42;
                              auVar18[0xb] = uVar44;
                              auVar18[0xc] = SUB41(fVar57,0);
                              auVar18[0xd] = uVar43;
                              auVar18[0xe] = uVar45;
                              auVar18[0xf] = uVar46;
                              auVar19[4] = SUB41(fVar50,0);
                              auVar19._0_4_ = fVar49;
                              auVar19[5] = uVar38;
                              auVar19[6] = uVar39;
                              auVar19[7] = uVar40;
                              auVar19[8] = SUB41(fVar59,0);
                              auVar19[9] = uVar41;
                              auVar19[10] = uVar42;
                              auVar19[0xb] = uVar44;
                              auVar19[0xc] = SUB41(fVar57,0);
                              auVar19[0xd] = uVar43;
                              auVar19[0xe] = uVar45;
                              auVar19[0xf] = uVar46;
                              auVar85 = NEON_ext(auVar18,auVar19,8,1);
                              iVar26 = -(uint)(fVar49 < ABS(auVar55._0_4_));
                              iVar27 = -(uint)(fVar50 < ABS(auVar55._4_4_));
                              uVar38 = (undefined1)iVar27;
                              uVar39 = (undefined1)((uint)iVar27 >> 8);
                              uVar40 = (undefined1)((uint)iVar27 >> 0x10);
                              uVar41 = (undefined1)((uint)iVar27 >> 0x18);
                              iVar27 = -(uint)(auVar85._0_4_ < ABS(auVar84._0_4_));
                              uVar42 = (undefined1)iVar27;
                              uVar44 = (undefined1)((uint)iVar27 >> 8);
                              uVar43 = (undefined1)((uint)iVar27 >> 0x10);
                              uVar45 = (undefined1)((uint)iVar27 >> 0x18);
                              auVar20[4] = uVar38;
                              auVar20._0_4_ = iVar26;
                              auVar20[5] = uVar39;
                              auVar20[6] = uVar40;
                              auVar20[7] = uVar41;
                              auVar20[8] = uVar42;
                              auVar20[9] = uVar44;
                              auVar20[10] = uVar43;
                              auVar20[0xb] = uVar45;
                              auVar20._12_4_ = 0;
                              auVar21[4] = uVar38;
                              auVar21._0_4_ = iVar26;
                              auVar21[5] = uVar39;
                              auVar21[6] = uVar40;
                              auVar21[7] = uVar41;
                              auVar21[8] = uVar42;
                              auVar21[9] = uVar44;
                              auVar21[10] = uVar43;
                              auVar21[0xb] = uVar45;
                              auVar21._12_4_ = 0;
                              NEON_ext(auVar20,auVar21,8,1);
                              if (CONCAT12(uVar42,CONCAT11(uVar38,(char)iVar26)) == 0) {
                                uVar31 = (ulong)(uint)(*(int *)(param_2 + uVar32 * 0xe0 + uVar29 * 4
                                                               + 0x454) + *(int *)(lVar35 + 0x374) +
                                                      *(int *)(param_2 + uVar32 * 0x460 +
                                                               uVar29 * 0xe0 + uVar33 * 4 + 0x8b4));
                                lVar34 = *(long *)(param_2 + 0x28) + uVar31 * 0x10;
                                pfVar36 = (float *)(*(long *)(param_2 + 0x20) + uVar31 * 0x20 + 0x10
                                                   );
                                do {
                                  if ((uint)fVar47 <= (uint)pfVar36[3]) {
                                    if ((uint)fVar48 < (uint)pfVar36[-1]) break;
                                    fVar49 = *pfVar36;
                                    fVar50 = pfVar36[1];
                                    fVar57 = pfVar36[2];
                                    auVar28 = *(undefined1 (*) [12])(pfVar36 + -4);
                                    fVar59 = param_3[4] - auVar28._0_4_;
                                    fVar58 = param_3[5] - auVar28._4_4_;
                                    fVar60 = param_3[6] - auVar28._8_4_;
                                    auVar80._0_4_ = -(uint)(fVar49 + param_3[0x20] < ABS(fVar59));
                                    auVar80._4_4_ = -(uint)(fVar50 + param_3[0x21] < ABS(fVar58));
                                    auVar80._8_4_ = -(uint)(fVar57 + param_3[0x22] < ABS(fVar60));
                                    auVar80._12_4_ =
                                         -(uint)(param_3[0x23] + 0.0 < ABS(param_3[7] - 0.0));
                                    NEON_ext(auVar80,auVar80,8,1);
                                    if (CONCAT12((char)auVar80._8_4_,
                                                 CONCAT11((char)auVar80._4_4_,(char)auVar80._0_4_))
                                        == 0) {
                                      auVar81._0_4_ = param_3[0xc] * fVar58 + param_3[8] * fVar59;
                                      auVar81._4_4_ = param_3[0xd] * fVar58 + param_3[9] * fVar59;
                                      auVar81._8_4_ = param_3[0xe] * fVar58 + param_3[10] * fVar59;
                                      auVar81._12_4_ = param_3[0xf] * fVar58 + 0.0;
                                      auVar84 = NEON_ext(auVar81,auVar81,8,1);
                                      auVar56._0_4_ = param_3[0x10] * fVar60 + auVar81._0_4_;
                                      auVar56._4_4_ = param_3[0x11] * fVar60 + auVar81._4_4_;
                                      auVar56._8_4_ = param_3[0x12] * fVar60 + auVar84._0_4_;
                                      auVar56._12_4_ = param_3[0x13] * fVar60 + 0.0;
                                      auVar84 = NEON_ext(auVar56,auVar56,8,1);
                                      auVar82._0_4_ =
                                           (float)*(undefined8 *)(param_3 + 0x14) * fVar49 +
                                           *param_3;
                                      auVar82._4_4_ =
                                           (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20) *
                                           fVar49 + param_3[1];
                                      auVar82._8_4_ =
                                           (float)*(undefined8 *)(param_3 + 0x16) * fVar49 +
                                           param_3[2];
                                      auVar82._12_4_ =
                                           (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20) *
                                           fVar49 + param_3[3];
                                      auVar85 = NEON_ext(auVar82,auVar82,8,1);
                                      auVar83._0_4_ = param_3[0x18] * fVar50 + auVar82._0_4_;
                                      auVar83._4_4_ = param_3[0x19] * fVar50 + auVar82._4_4_;
                                      auVar83._8_4_ = param_3[0x1a] * fVar50 + auVar85._0_4_;
                                      auVar83._12_4_ = param_3[0x1b] * fVar50 + 0.0;
                                      auVar85 = NEON_ext(auVar83,auVar83,8,1);
                                      fVar49 = (float)*(undefined8 *)(param_3 + 0x1c) * fVar57 +
                                               auVar83._0_4_;
                                      fVar50 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >>
                                                      0x20) * fVar57 + auVar83._4_4_;
                                      uVar38 = (undefined1)((uint)fVar50 >> 8);
                                      uVar39 = (undefined1)((uint)fVar50 >> 0x10);
                                      uVar40 = (undefined1)((uint)fVar50 >> 0x18);
                                      fVar59 = (float)*(undefined8 *)(param_3 + 0x1e) * fVar57 +
                                               auVar85._0_4_;
                                      uVar41 = (undefined1)((uint)fVar59 >> 8);
                                      uVar42 = (undefined1)((uint)fVar59 >> 0x10);
                                      uVar44 = (undefined1)((uint)fVar59 >> 0x18);
                                      fVar57 = (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >>
                                                      0x20) * fVar57 + 0.0;
                                      uVar43 = (undefined1)((uint)fVar57 >> 8);
                                      uVar45 = (undefined1)((uint)fVar57 >> 0x10);
                                      uVar46 = (undefined1)((uint)fVar57 >> 0x18);
                                      auVar22[4] = SUB41(fVar50,0);
                                      auVar22._0_4_ = fVar49;
                                      auVar22[5] = uVar38;
                                      auVar22[6] = uVar39;
                                      auVar22[7] = uVar40;
                                      auVar22[8] = SUB41(fVar59,0);
                                      auVar22[9] = uVar41;
                                      auVar22[10] = uVar42;
                                      auVar22[0xb] = uVar44;
                                      auVar22[0xc] = SUB41(fVar57,0);
                                      auVar22[0xd] = uVar43;
                                      auVar22[0xe] = uVar45;
                                      auVar22[0xf] = uVar46;
                                      auVar23[4] = SUB41(fVar50,0);
                                      auVar23._0_4_ = fVar49;
                                      auVar23[5] = uVar38;
                                      auVar23[6] = uVar39;
                                      auVar23[7] = uVar40;
                                      auVar23[8] = SUB41(fVar59,0);
                                      auVar23[9] = uVar41;
                                      auVar23[10] = uVar42;
                                      auVar23[0xb] = uVar44;
                                      auVar23[0xc] = SUB41(fVar57,0);
                                      auVar23[0xd] = uVar43;
                                      auVar23[0xe] = uVar45;
                                      auVar23[0xf] = uVar46;
                                      auVar85 = NEON_ext(auVar22,auVar23,8,1);
                                      iVar26 = -(uint)(fVar49 < ABS(auVar56._0_4_));
                                      iVar27 = -(uint)(fVar50 < ABS(auVar56._4_4_));
                                      uVar38 = (undefined1)iVar27;
                                      uVar39 = (undefined1)((uint)iVar27 >> 8);
                                      uVar40 = (undefined1)((uint)iVar27 >> 0x10);
                                      uVar41 = (undefined1)((uint)iVar27 >> 0x18);
                                      iVar27 = -(uint)(auVar85._0_4_ < ABS(auVar84._0_4_));
                                      uVar42 = (undefined1)iVar27;
                                      uVar44 = (undefined1)((uint)iVar27 >> 8);
                                      uVar43 = (undefined1)((uint)iVar27 >> 0x10);
                                      uVar45 = (undefined1)((uint)iVar27 >> 0x18);
                                      auVar24[4] = uVar38;
                                      auVar24._0_4_ = iVar26;
                                      auVar24[5] = uVar39;
                                      auVar24[6] = uVar40;
                                      auVar24[7] = uVar41;
                                      auVar24[8] = uVar42;
                                      auVar24[9] = uVar44;
                                      auVar24[10] = uVar43;
                                      auVar24[0xb] = uVar45;
                                      auVar24._12_4_ = 0;
                                      auVar25[4] = uVar38;
                                      auVar25._0_4_ = iVar26;
                                      auVar25[5] = uVar39;
                                      auVar25[6] = uVar40;
                                      auVar25[7] = uVar41;
                                      auVar25[8] = uVar42;
                                      auVar25[9] = uVar44;
                                      auVar25[10] = uVar43;
                                      auVar25[0xb] = uVar45;
                                      auVar25._12_4_ = 0;
                                      NEON_ext(auVar24,auVar25,8,1);
                                      if (CONCAT12(uVar42,CONCAT11(uVar38,(char)iVar26)) == 0) {
                                        local_64 = 0xbf800000;
                                        uVar31 = (**(code **)*param_4)(param_4,&local_64,lVar34);
                                        if ((uVar31 & 1) == 0) {
                                          return 0;
                                        }
                                      }
                                    }
                                  }
                                  iVar37 = iVar37 + -1;
                                  lVar34 = lVar34 + 0x10;
                                  pfVar36 = pfVar36 + 8;
                                } while (iVar37 != 0);
                              }
                            }
                          }
                          uVar33 = uVar33 + 1;
                        } while (uVar33 < 5);
                      }
                    }
                  }
                  uVar29 = uVar29 + 1;
                } while (uVar29 < 5);
              }
            }
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 < 5);
      }
    }
  }
  return 1;
}


