/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0015d5c0; name: FUN_0015d5c0
 */


void FUN_0015d5c0(long param_1,uint param_2,undefined8 *param_3,float *param_4,uint param_5,
                 float *param_6,float *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  byte bVar6;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float *pfVar35;
  uint *puVar36;
  float *pfVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float *pfVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  undefined1 auVar56 [16];
  undefined1 auVar59 [12];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar89;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar90;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar107;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined8 uVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  uint local_530 [8];
  float afStack_510 [56];
  float local_430 [2];
  ulong auStack_428 [99];
  uint local_110 [56];
  
  uVar38 = (ulong)param_5;
  if (*(byte *)(param_1 + uVar38 + 0x40) == param_2) {
    lVar2 = param_1 + (ulong)*(ushort *)(param_1 + 10);
    pauVar3 = (undefined1 (*) [16])(lVar2 + uVar38 * 0x20);
    fVar67 = -(float)*(undefined8 *)(param_6 + 4);
    fVar68 = -(float)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20);
    fVar51 = -(float)*(undefined8 *)param_6;
    fVar57 = -(float)((ulong)*(undefined8 *)param_6 >> 0x20);
    auVar103._0_8_ = CONCAT44(fVar57,fVar51);
    auVar103._8_4_ = -(float)*(undefined8 *)(param_6 + 2);
    auVar103._12_4_ = -(float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20);
    pauVar39 = pauVar3 + 1;
    auVar113 = *pauVar3;
    fVar69 = auVar113._4_4_;
    uVar50 = (undefined4)((ulong)*(undefined8 *)(pauVar3[1] + 8) >> 0x20);
    fVar52 = (float)*(undefined8 *)*pauVar39;
    fVar58 = (float)((ulong)*(undefined8 *)*pauVar39 >> 0x20);
    auVar86._8_8_ = auVar103._8_8_;
    auVar86._0_8_ = auVar103._0_8_;
    pfVar4 = (float *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a));
    auVar87._0_12_ = auVar86._0_12_;
    auVar87._12_4_ = 0;
    auVar55 = NEON_ext(auVar87,auVar87,8,1);
    auVar112._12_4_ = uVar50;
    auVar112._0_12_ = *(undefined1 (*) [12])*pauVar39;
    auVar102._12_4_ = uVar50;
    auVar102._0_12_ = *(undefined1 (*) [12])*pauVar39;
    auVar112 = NEON_ext(auVar112,auVar102,8,1);
    pfVar45 = pfVar4 + uVar38 * 0x28 + 0x24;
    fVar70 = fVar51 * fVar58 - fVar57 * fVar52;
    uVar53 = NEON_ext(CONCAT44(fVar57 * (float)*(undefined8 *)(pauVar3[1] + 8) -
                               auVar103._8_4_ * fVar58,fVar70),
                      CONCAT44(auVar55._4_4_ * fVar58 - fVar57 * auVar112._4_4_,
                               auVar55._0_4_ * fVar52 - fVar51 * auVar112._0_4_),4,1);
    fVar52 = fVar67 + (float)uVar53;
    fVar58 = fVar68 + (float)((ulong)uVar53 >> 0x20);
    fVar70 = -(float)*(undefined8 *)(param_6 + 6) + fVar70;
    auVar100._0_4_ = pfVar45[8] * fVar58 + pfVar45[0x10] * fVar70;
    auVar100._4_4_ = pfVar45[9] * fVar58 + pfVar45[0x11] * fVar70;
    auVar100._8_4_ = pfVar45[10] * fVar58 + pfVar45[0x12] * fVar70;
    auVar100._12_4_ = pfVar45[0xb] * fVar58 + 0.0;
    auVar112 = NEON_ext(auVar100,auVar100,8,1);
    auVar55._0_4_ = *pfVar45 * fVar52 + auVar100._0_4_;
    auVar55._4_4_ = pfVar45[1] * fVar52 + auVar100._4_4_;
    auVar55._8_4_ = pfVar45[2] * fVar52 + auVar112._0_4_;
    auVar55._12_4_ = pfVar45[3] * fVar52 + 0.0;
    auVar112 = NEON_ext(auVar55,auVar55,8,1);
    auVar75._0_4_ = fVar51 - auVar55._0_4_;
    auVar75._4_4_ = fVar57 - auVar55._4_4_;
    auVar75._8_4_ = auVar103._8_4_ - auVar112._0_4_;
    auVar75._12_4_ = 0;
    auVar101._0_4_ = pfVar45[0xc] * fVar58 + pfVar45[0x14] * fVar70;
    auVar101._4_4_ = pfVar45[0xd] * fVar58 + pfVar45[0x15] * fVar70;
    auVar101._8_4_ = pfVar45[0xe] * fVar58 + pfVar45[0x16] * fVar70;
    auVar101._12_4_ = pfVar45[0xf] * fVar58 + 0.0;
    auVar112 = NEON_ext(auVar101,auVar101,8,1);
    auVar88._0_4_ = pfVar45[4] * fVar52 + auVar101._0_4_;
    auVar88._4_4_ = pfVar45[5] * fVar52 + auVar101._4_4_;
    auVar88._8_4_ = pfVar45[6] * fVar52 + auVar112._0_4_;
    auVar88._12_4_ = pfVar45[7] * fVar52 + 0.0;
    auVar102 = NEON_ext(auVar88,auVar88,8,1);
    auVar103 = NEON_ext(auVar75,auVar75,8,1);
    auVar112 = NEON_ext(auVar113,auVar113,8,1);
    fVar79 = auVar113._0_4_ * auVar75._4_4_ - fVar69 * auVar75._0_4_;
    uVar53 = NEON_ext(CONCAT44(fVar69 * auVar75._8_4_ - auVar113._8_4_ * auVar75._4_4_,fVar79),
                      CONCAT44(auVar112._4_4_ * auVar75._4_4_ - fVar69 * auVar103._4_4_,
                               auVar112._0_4_ * auVar75._0_4_ - auVar113._0_4_ * auVar103._0_4_),4,1
                     );
    auVar113._0_4_ = -((float)*param_3 - auVar75._0_4_);
    auVar113._4_4_ = -((float)((ulong)*param_3 >> 0x20) - auVar75._4_4_);
    auVar113._8_4_ = -((float)param_3[1] - auVar75._8_4_);
    fVar51 = -(*(float *)(param_3 + 2) - ((fVar67 - auVar88._0_4_) + (float)uVar53));
    fVar57 = -(*(float *)((long)param_3 + 0x14) -
              ((fVar68 - auVar88._4_4_) + (float)((ulong)uVar53 >> 0x20)));
    fVar69 = -(*(float *)(param_3 + 3) -
              ((-(float)*(undefined8 *)(param_6 + 6) - auVar102._0_4_) + fVar79));
    auVar113._12_4_ = 0;
    if (param_2 == 0) {
      uVar42 = 0;
    }
    else {
      uVar46 = 0;
      do {
        pauVar5 = (undefined1 (*) [16])(lVar2 + (ulong)param_2 * 0x20);
        auVar112 = pauVar5[1];
        fVar79 = auVar112._4_4_;
        fVar68 = auVar113._4_4_;
        auVar102 = NEON_ext(auVar113,auVar113,8,1);
        auVar103 = NEON_ext(auVar112,auVar112,8,1);
        fVar67 = auVar113._0_4_;
        fVar71 = fVar67 * fVar79 - fVar68 * auVar112._0_4_;
        uVar53 = NEON_ext(CONCAT44(fVar68 * auVar112._8_4_ - auVar113._8_4_ * fVar79,fVar71),
                          CONCAT44(auVar102._4_4_ * fVar79 - fVar68 * auVar103._4_4_,
                                   auVar102._0_4_ * auVar112._0_4_ - fVar67 * auVar103._0_4_),4,1);
        fVar72 = fVar51 + (float)uVar53;
        fVar76 = fVar57 + (float)((ulong)uVar53 >> 0x20);
        fVar71 = fVar69 + fVar71;
        pfVar35 = pfVar4 + (ulong)param_2 * 0x28 + 0x24;
        auStack_428[uVar46 * 2] = (ulong)(uint)fVar71;
        *(ulong *)(local_430 + uVar46 * 4) = CONCAT44(fVar76,fVar72);
        fVar51 = fVar51 - pfVar35[0x14] * fVar71;
        fVar57 = fVar57 - pfVar35[0x15] * fVar71;
        fVar69 = fVar69 - pfVar35[0x16] * fVar71;
        fVar79 = 0.0 - pfVar35[0x17] * fVar71;
        auVar13._4_4_ = fVar57;
        auVar13._0_4_ = fVar51;
        auVar13._8_4_ = fVar69;
        auVar13._12_4_ = fVar79;
        auVar14._4_4_ = fVar57;
        auVar14._0_4_ = fVar51;
        auVar14._8_4_ = fVar69;
        auVar14._12_4_ = fVar79;
        auVar102 = NEON_ext(auVar13,auVar14,8,1);
        auVar63._0_4_ = fVar67 - pfVar35[0x10] * fVar71;
        auVar63._4_4_ = fVar68 - pfVar35[0x11] * fVar71;
        auVar63._8_4_ = auVar113._8_4_ - pfVar35[0x12] * fVar71;
        auVar63._12_4_ = auVar113._12_4_ - pfVar35[0x13] * fVar71;
        auVar112 = NEON_ext(auVar63,auVar63,8,1);
        fVar51 = fVar51 - pfVar35[0xc] * fVar76;
        fVar57 = fVar57 - pfVar35[0xd] * fVar76;
        fVar69 = auVar102._0_4_ - pfVar35[0xe] * fVar76;
        fVar67 = 0.0 - pfVar35[0xf] * fVar76;
        auVar15._4_4_ = fVar57;
        auVar15._0_4_ = fVar51;
        auVar15._8_4_ = fVar69;
        auVar15._12_4_ = fVar67;
        auVar16._4_4_ = fVar57;
        auVar16._0_4_ = fVar51;
        auVar16._8_4_ = fVar69;
        auVar16._12_4_ = fVar67;
        auVar113 = NEON_ext(auVar15,auVar16,8,1);
        auVar64._0_4_ = auVar63._0_4_ - pfVar35[8] * fVar76;
        auVar64._4_4_ = auVar63._4_4_ - pfVar35[9] * fVar76;
        auVar64._8_4_ = auVar112._0_4_ - pfVar35[10] * fVar76;
        auVar64._12_4_ = 0.0 - pfVar35[0xb] * fVar76;
        auVar102 = NEON_ext(auVar64,auVar64,8,1);
        auVar112 = *pauVar5;
        fVar67 = auVar64._0_4_ - *pfVar35 * fVar72;
        fVar68 = auVar64._4_4_ - pfVar35[1] * fVar72;
        auVar65._0_8_ = CONCAT44(fVar68,fVar67);
        auVar65._8_4_ = auVar102._0_4_ - pfVar35[2] * fVar72;
        auVar65._12_4_ = 0.0 - pfVar35[3] * fVar72;
        auVar102 = NEON_ext(auVar65,auVar65,8,1);
        fVar51 = fVar51 - pfVar35[4] * fVar72;
        fVar57 = fVar57 - pfVar35[5] * fVar72;
        fVar69 = auVar113._0_4_ - pfVar35[6] * fVar72;
        fVar79 = 0.0 - pfVar35[7] * fVar72;
        fVar72 = auVar112._4_4_;
        local_530[uVar46] = param_2;
        auVar103 = NEON_ext(auVar112,auVar112,8,1);
        fVar71 = auVar102._0_4_;
        uVar53 = NEON_ext(auVar65._0_8_,(ulong)(uint)fVar71,4,1);
        auVar113._8_4_ = fVar71;
        auVar113._0_8_ = auVar65._0_8_;
        auVar113._12_4_ = 0;
        auVar17._4_4_ = fVar57;
        auVar17._0_4_ = fVar51;
        auVar17._8_4_ = fVar69;
        auVar17._12_4_ = fVar79;
        auVar18._4_4_ = fVar57;
        auVar18._0_4_ = fVar51;
        auVar18._8_4_ = fVar69;
        auVar18._12_4_ = fVar79;
        auVar102 = NEON_ext(auVar17,auVar18,8,1);
        fVar69 = auVar112._0_4_ * (float)uVar53 - fVar72 * fVar67;
        uVar53 = NEON_ext(CONCAT44(fVar72 * (float)((ulong)uVar53 >> 0x20) - auVar112._8_4_ * fVar68
                                   ,fVar69),
                          CONCAT44(auVar103._4_4_ * fVar68 - fVar72 * 0.0,
                                   auVar103._0_4_ * fVar67 - auVar112._0_4_ * fVar71),4,1);
        param_2 = (uint)*(byte *)(param_1 + (ulong)param_2 + 0x40);
        fVar51 = fVar51 + (float)uVar53;
        fVar57 = fVar57 + (float)((ulong)uVar53 >> 0x20);
        fVar69 = auVar102._0_4_ + fVar69;
        uVar42 = (int)uVar46 + 1;
        uVar46 = (ulong)uVar42;
      } while (param_2 != 0);
    }
    fVar71 = auVar113._4_4_;
    fVar79 = auVar113._0_4_;
    auVar114._0_4_ = fVar79 * pfVar4[0xc];
    auVar114._4_4_ = fVar71 * pfVar4[0xd];
    fVar72 = auVar113._8_4_;
    auVar114._8_4_ = fVar72 * pfVar4[0xe];
    fVar68 = auVar113._12_4_;
    auVar114._12_4_ = fVar68 * pfVar4[0xf];
    auVar112 = NEON_ext(auVar114,auVar114,8,1);
    fVar67 = auVar112._0_4_ + auVar112._4_4_;
    auVar124._0_4_ = fVar79 * pfVar4[0x10];
    auVar124._4_4_ = fVar71 * pfVar4[0x11];
    auVar124._8_4_ = fVar72 * pfVar4[0x12];
    auVar124._12_4_ = fVar68 * pfVar4[0x13];
    auVar102 = NEON_ext(auVar124,auVar124,8,1);
    auVar66._0_4_ = fVar79 * pfVar4[0x14];
    auVar66._4_4_ = fVar71 * pfVar4[0x15];
    auVar66._8_4_ = fVar72 * pfVar4[0x16];
    auVar66._12_4_ = fVar68 * pfVar4[0x17];
    auVar112 = NEON_ext(auVar66,auVar66,8,1);
    fVar68 = auVar102._0_4_ + auVar102._4_4_;
    uVar53 = NEON_ext(CONCAT44(auVar114._0_4_ + auVar114._4_4_ + fVar67,
                               auVar114._0_4_ + auVar114._4_4_ + fVar67),
                      CONCAT44(auVar124._0_4_ + auVar124._4_4_ + fVar68,
                               auVar124._0_4_ + auVar124._4_4_ + fVar68),4,1);
    fVar67 = -(*pfVar4 * fVar79 + pfVar4[4] * fVar71 + pfVar4[8] * fVar72 +
              pfVar4[0xc] * fVar51 + pfVar4[0x10] * fVar57 + pfVar4[0x14] * fVar69);
    fVar68 = -(pfVar4[1] * fVar79 + pfVar4[5] * fVar71 + pfVar4[9] * fVar72 +
              pfVar4[0xd] * fVar51 + pfVar4[0x11] * fVar57 + pfVar4[0x15] * fVar69);
    fVar79 = -(pfVar4[2] * fVar79 + pfVar4[6] * fVar71 + pfVar4[10] * fVar72 +
              pfVar4[0xe] * fVar51 + pfVar4[0x12] * fVar57 + pfVar4[0x16] * fVar69);
    fVar71 = 0.0;
    auVar56._0_4_ =
         -(pfVar4[0x18] * fVar51 + pfVar4[0x1c] * fVar57 + pfVar4[0x20] * fVar69 + (float)uVar53);
    auVar56._4_4_ =
         -(pfVar4[0x19] * fVar51 + pfVar4[0x1d] * fVar57 + pfVar4[0x21] * fVar69 +
          (float)((ulong)uVar53 >> 0x20));
    auVar56._8_4_ =
         -(pfVar4[0x1a] * fVar51 + pfVar4[0x1e] * fVar57 + pfVar4[0x22] * fVar69 +
          auVar66._0_4_ + auVar66._4_4_ + auVar112._0_4_ + auVar112._4_4_);
    auVar56._12_4_ = 0.0;
    if (uVar42 != 0) {
      pfVar35 = local_430 + (ulong)(uVar42 - 1) * 4;
      puVar36 = local_530 + (uVar42 - 1);
      do {
        pauVar5 = (undefined1 (*) [16])(lVar2 + (ulong)*puVar36 * 0x20);
        pfVar37 = pfVar4 + (ulong)*puVar36 * 0x28 + 0x24;
        auVar112 = *pauVar5;
        fVar78 = auVar56._4_4_;
        fVar89 = auVar56._8_4_;
        fVar72 = auVar112._4_4_;
        auVar102 = NEON_ext(auVar112,auVar112,8,1);
        auVar113 = NEON_ext(auVar56,auVar56,8,1);
        fVar77 = auVar56._0_4_;
        fVar51 = *pfVar35;
        fVar57 = pfVar35[1];
        fVar69 = pfVar35[2];
        fVar76 = fVar78 * auVar112._0_4_ - fVar77 * fVar72;
        uVar53 = NEON_ext(CONCAT44(fVar89 * fVar72 - fVar78 * auVar112._8_4_,fVar76),
                          CONCAT44(fVar78 * auVar102._4_4_ - auVar113._4_4_ * fVar72,
                                   fVar77 * auVar102._0_4_ - auVar113._0_4_ * auVar112._0_4_),4,1);
        fVar67 = fVar67 - (float)uVar53;
        fVar68 = fVar68 - (float)((ulong)uVar53 >> 0x20);
        fVar79 = fVar79 - fVar76;
        fVar71 = fVar71 - 0.0;
        uVar42 = uVar42 - 1;
        auVar125._0_4_ = fVar77 * pfVar37[4];
        auVar125._4_4_ = fVar78 * pfVar37[5];
        auVar125._8_4_ = fVar89 * pfVar37[6];
        fVar90 = auVar56._12_4_;
        auVar125._12_4_ = fVar90 * pfVar37[7];
        auVar115._0_4_ = pfVar37[8] * fVar67;
        auVar115._4_4_ = pfVar37[9] * fVar68;
        auVar115._8_4_ = pfVar37[10] * fVar79;
        auVar115._12_4_ = pfVar37[0xb] * fVar71;
        auVar102 = NEON_ext(auVar115,auVar115,8,1);
        auVar104._0_4_ = *pfVar37 * fVar67;
        auVar104._4_4_ = pfVar37[1] * fVar68;
        auVar104._8_4_ = pfVar37[2] * fVar79;
        auVar104._12_4_ = pfVar37[3] * fVar71;
        auVar112 = NEON_ext(auVar125,auVar125,8,1);
        auVar136._0_4_ = fVar77 * pfVar37[0xc];
        auVar136._4_4_ = fVar78 * pfVar37[0xd];
        auVar136._8_4_ = fVar89 * pfVar37[0xe];
        auVar136._12_4_ = fVar90 * pfVar37[0xf];
        fVar72 = auVar112._0_4_ + auVar112._4_4_;
        auVar131._0_4_ = pfVar37[0x10] * fVar67;
        auVar131._4_4_ = pfVar37[0x11] * fVar68;
        auVar131._8_4_ = pfVar37[0x12] * fVar79;
        auVar131._12_4_ = pfVar37[0x13] * fVar71;
        auVar112 = NEON_ext(auVar104,auVar104,8,1);
        fVar76 = auVar112._0_4_ + auVar112._4_4_;
        auVar112 = NEON_ext(auVar136,auVar136,8,1);
        auVar141._0_4_ = fVar77 * pfVar37[0x14];
        auVar141._4_4_ = fVar78 * pfVar37[0x15];
        auVar141._8_4_ = fVar89 * pfVar37[0x16];
        auVar141._12_4_ = fVar90 * pfVar37[0x17];
        fVar48 = auVar102._0_4_ + auVar102._4_4_;
        auVar113 = NEON_ext(auVar131,auVar131,8,1);
        fVar49 = auVar112._0_4_ + auVar112._4_4_;
        auVar102 = NEON_ext(auVar141,auVar141,8,1);
        uVar53 = NEON_ext(CONCAT44(auVar104._0_4_ + auVar104._4_4_ + fVar76,
                                   auVar104._0_4_ + auVar104._4_4_ + fVar76),
                          CONCAT44(auVar115._0_4_ + auVar115._4_4_ + fVar48,
                                   auVar115._0_4_ + auVar115._4_4_ + fVar48),4,1);
        uVar108 = NEON_ext(CONCAT44(auVar125._0_4_ + auVar125._4_4_ + fVar72,
                                    auVar125._0_4_ + auVar125._4_4_ + fVar72),
                           CONCAT44(auVar136._0_4_ + auVar136._4_4_ + fVar49,
                                    auVar136._0_4_ + auVar136._4_4_ + fVar49),4,1);
        auVar112 = pauVar5[1];
        auVar105._0_4_ =
             (float)uVar53 + (float)uVar108 +
             (float)*(undefined8 *)(pfVar37 + 0x18) * fVar51 +
             (float)*(undefined8 *)(pfVar37 + 0x1c) * fVar57 + pfVar37[0x20] * fVar69;
        auVar105._4_4_ =
             (float)((ulong)uVar53 >> 0x20) + (float)((ulong)uVar108 >> 0x20) +
             (float)((ulong)*(undefined8 *)(pfVar37 + 0x18) >> 0x20) * fVar51 +
             (float)((ulong)*(undefined8 *)(pfVar37 + 0x1c) >> 0x20) * fVar57 +
             pfVar37[0x21] * fVar69;
        auVar105._8_4_ =
             auVar131._0_4_ + auVar131._4_4_ + auVar113._0_4_ + auVar113._4_4_ +
             auVar141._0_4_ + auVar141._4_4_ + auVar102._0_4_ + auVar102._4_4_ +
             (float)*(undefined8 *)(pfVar37 + 0x1a) * fVar51 +
             (float)*(undefined8 *)(pfVar37 + 0x1e) * fVar57 + pfVar37[0x22] * fVar69;
        auVar105._12_4_ = 0;
        fVar57 = auVar112._4_4_;
        auVar102 = NEON_ext(auVar112,auVar112,8,1);
        auVar113 = NEON_ext(auVar105,auVar105,8,1);
        auVar56._0_4_ = fVar77 - auVar105._0_4_;
        auVar56._4_4_ = fVar78 - auVar105._4_4_;
        auVar56._8_4_ = fVar89 - auVar105._8_4_;
        auVar56._12_4_ = fVar90 - 0.0;
        fVar51 = auVar112._0_4_ * auVar105._4_4_ - fVar57 * auVar105._0_4_;
        uVar53 = NEON_ext(CONCAT44(fVar57 * auVar105._8_4_ - auVar112._8_4_ * auVar105._4_4_,fVar51)
                          ,CONCAT44(auVar102._4_4_ * auVar105._4_4_ - fVar57 * auVar113._4_4_,
                                    auVar102._0_4_ * auVar105._0_4_ -
                                    auVar112._0_4_ * auVar113._0_4_),4,1);
        fVar67 = fVar67 - (float)uVar53;
        fVar68 = fVar68 - (float)((ulong)uVar53 >> 0x20);
        fVar79 = fVar79 - fVar51;
        fVar71 = fVar71 - 0.0;
        pfVar35 = pfVar35 + -4;
        puVar36 = puVar36 + -1;
      } while (uVar42 != 0);
    }
    param_4[2] = fVar79;
    param_4[3] = fVar71;
    *param_4 = fVar67;
    param_4[1] = fVar68;
    *(long *)(param_4 + 6) = auVar56._8_8_;
    *(long *)(param_4 + 4) = auVar56._0_8_;
    auVar112 = *pauVar3;
    fVar72 = auVar56._4_4_;
    auVar113 = NEON_ext(auVar56,auVar56,8,1);
    fVar76 = auVar56._8_4_;
    fVar57 = auVar112._4_4_;
    auVar103 = NEON_ext(auVar112,auVar112,8,1);
    fVar69 = auVar56._0_4_;
    auVar132._0_4_ = fVar69 * pfVar45[4];
    auVar132._4_4_ = fVar72 * pfVar45[5];
    auVar132._8_4_ = fVar76 * pfVar45[6];
    fVar48 = auVar56._12_4_;
    auVar132._12_4_ = fVar48 * pfVar45[7];
    auVar102 = NEON_ext(auVar132,auVar132,8,1);
    fVar51 = auVar102._0_4_ + auVar102._4_4_;
    auVar133._0_4_ = fVar69 * pfVar45[0xc];
    auVar133._4_4_ = fVar72 * pfVar45[0xd];
    auVar133._8_4_ = fVar76 * pfVar45[0xe];
    auVar133._12_4_ = fVar48 * pfVar45[0xf];
    fVar49 = fVar72 * auVar112._0_4_ - fVar69 * fVar57;
    auVar137._0_4_ = fVar69 * pfVar45[0x14];
    auVar137._4_4_ = fVar72 * pfVar45[0x15];
    auVar137._8_4_ = fVar76 * pfVar45[0x16];
    auVar137._12_4_ = fVar48 * pfVar45[0x17];
    uVar53 = NEON_ext(CONCAT44(fVar76 * fVar57 - fVar72 * auVar112._8_4_,fVar49),
                      CONCAT44(fVar72 * auVar103._4_4_ - auVar113._4_4_ * fVar57,
                               fVar69 * auVar103._0_4_ - auVar113._0_4_ * auVar112._0_4_),4,1);
    auVar112 = NEON_ext(auVar133,auVar133,8,1);
    fVar57 = auVar112._0_4_ + auVar112._4_4_;
    auVar102 = NEON_ext(auVar137,auVar137,8,1);
    fVar67 = fVar67 - (float)uVar53;
    fVar68 = fVar68 - (float)((ulong)uVar53 >> 0x20);
    fVar79 = fVar79 - fVar49;
    fVar71 = fVar71 - 0.0;
    uVar53 = NEON_ext(CONCAT44(auVar132._0_4_ + auVar132._4_4_ + fVar51,
                               auVar132._0_4_ + auVar132._4_4_ + fVar51),
                      CONCAT44(auVar133._0_4_ + auVar133._4_4_ + fVar57,
                               auVar133._0_4_ + auVar133._4_4_ + fVar57),4,1);
    auVar116._0_4_ = pfVar45[8] * fVar67;
    auVar116._4_4_ = pfVar45[9] * fVar68;
    auVar116._8_4_ = pfVar45[10] * fVar79;
    auVar116._12_4_ = pfVar45[0xb] * fVar71;
    auVar112 = NEON_ext(auVar116,auVar116,8,1);
    auVar123._0_4_ = pfVar45[0x10] * fVar67;
    auVar123._4_4_ = pfVar45[0x11] * fVar68;
    auVar123._8_4_ = pfVar45[0x12] * fVar79;
    auVar123._12_4_ = pfVar45[0x13] * fVar71;
    fVar51 = auVar112._0_4_ + auVar112._4_4_;
    auVar106._0_4_ = *pfVar45 * fVar67;
    auVar106._4_4_ = pfVar45[1] * fVar68;
    auVar106._8_4_ = pfVar45[2] * fVar79;
    auVar106._12_4_ = pfVar45[3] * fVar71;
    auVar112 = NEON_ext(auVar106,auVar106,8,1);
    auVar113 = NEON_ext(auVar123,auVar123,8,1);
    uVar50 = (undefined4)((ulong)*(undefined8 *)(pauVar3[1] + 8) >> 0x20);
    fVar49 = (float)*(undefined8 *)*pauVar39;
    fVar77 = (float)((ulong)*(undefined8 *)*pauVar39 >> 0x20);
    fVar57 = auVar112._0_4_ + auVar112._4_4_;
    uVar108 = NEON_ext(CONCAT44(auVar106._0_4_ + auVar106._4_4_ + fVar57,
                                auVar106._0_4_ + auVar106._4_4_ + fVar57),
                       CONCAT44(auVar116._0_4_ + auVar116._4_4_ + fVar51,
                                auVar116._0_4_ + auVar116._4_4_ + fVar51),4,1);
    fVar51 = (float)uVar108 + (float)uVar53 +
             fVar52 * pfVar4[uVar38 * 0x28 + 0x3c] + fVar58 * pfVar4[uVar38 * 0x28 + 0x40] +
             fVar70 * pfVar4[uVar38 * 0x28 + 0x44];
    fVar57 = (float)((ulong)uVar108 >> 0x20) + (float)((ulong)uVar53 >> 0x20) +
             fVar52 * pfVar4[uVar38 * 0x28 + 0x3d] + fVar58 * pfVar4[uVar38 * 0x28 + 0x41] +
             fVar70 * pfVar4[uVar38 * 0x28 + 0x45];
    fVar52 = auVar123._0_4_ + auVar123._4_4_ + auVar113._0_4_ + auVar113._4_4_ +
             auVar137._0_4_ + auVar137._4_4_ + auVar102._0_4_ + auVar102._4_4_ +
             fVar52 * pfVar4[uVar38 * 0x28 + 0x3e] + fVar58 * pfVar4[uVar38 * 0x28 + 0x42] +
             fVar70 * pfVar4[uVar38 * 0x28 + 0x46];
    auVar19._12_4_ = uVar50;
    auVar19._0_12_ = *(undefined1 (*) [12])*pauVar39;
    auVar20._12_4_ = uVar50;
    auVar20._0_12_ = *(undefined1 (*) [12])*pauVar39;
    auVar112 = NEON_ext(auVar19,auVar20,8,1);
    auVar7._4_4_ = fVar57;
    auVar7._0_4_ = fVar51;
    auVar7._8_4_ = fVar52;
    auVar7._12_4_ = 0;
    auVar8._4_4_ = fVar57;
    auVar8._0_4_ = fVar51;
    auVar8._8_4_ = fVar52;
    auVar8._12_4_ = 0;
    auVar102 = NEON_ext(auVar7,auVar8,8,1);
    fVar58 = fVar49 * fVar57 - fVar77 * fVar51;
    uVar53 = NEON_ext(CONCAT44(fVar77 * fVar52 - (float)*(undefined8 *)(pauVar3[1] + 8) * fVar57,
                               fVar58),
                      CONCAT44(auVar112._4_4_ * fVar57 - fVar77 * auVar102._4_4_,
                               auVar112._0_4_ * fVar51 - fVar49 * auVar102._0_4_),4,1);
    *(ulong *)(param_7 + 2) = CONCAT44(fVar71 - 0.0,fVar79 - fVar58);
    *(ulong *)param_7 = CONCAT44(fVar68 - (float)((ulong)uVar53 >> 0x20),fVar67 - (float)uVar53);
    *(ulong *)(param_7 + 6) = CONCAT44(fVar48 - 0.0,fVar76 - fVar52);
    *(ulong *)(param_7 + 4) = CONCAT44(fVar72 - fVar57,fVar69 - fVar51);
    return;
  }
  pfVar4 = (float *)(param_1 + (ulong)*(ushort *)(param_1 + 0x1a));
  uVar42 = param_2;
  if (param_2 != param_5) {
    uVar38 = (ulong)param_5;
    do {
      while (uVar42 < (uint)uVar38) {
        bVar6 = *(byte *)(param_1 + uVar38 + 0x40);
        uVar38 = (ulong)bVar6;
        if (uVar42 == bVar6) goto LAB_0015c84c;
      }
      uVar42 = (uint)*(byte *)(param_1 + (ulong)uVar42 + 0x40);
    } while (uVar42 != (uint)uVar38);
  }
LAB_0015c84c:
  fVar52 = -*(float *)(param_3 + 2);
  fVar58 = -*(float *)((long)param_3 + 0x14);
  fVar51 = -*(float *)(param_3 + 3);
  fVar70 = -(float)*param_3;
  fVar69 = -(float)((ulong)*param_3 >> 0x20);
  fVar67 = -(float)param_3[1];
  auVar60._0_4_ = -*param_6;
  auVar60._4_4_ = -param_6[1];
  auVar60._8_4_ = -param_6[2];
  fVar79 = -(float)*(undefined8 *)(param_6 + 4);
  fVar71 = -(float)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20);
  fVar72 = -(float)*(undefined8 *)(param_6 + 6);
  fVar68 = 0.0;
  lVar2 = param_1 + (ulong)*(ushort *)(param_1 + 10);
  fVar57 = 0.0;
  if (uVar42 == param_2) {
    uVar40 = 0;
  }
  else {
    uVar38 = 0;
    do {
      pauVar3 = (undefined1 (*) [16])(lVar2 + (ulong)param_2 * 0x20);
      auVar112 = pauVar3[1];
      fVar48 = auVar112._4_4_;
      auVar9._4_4_ = fVar69;
      auVar9._0_4_ = fVar70;
      auVar9._8_4_ = fVar67;
      auVar9._12_4_ = fVar68;
      auVar10._4_4_ = fVar69;
      auVar10._0_4_ = fVar70;
      auVar10._8_4_ = fVar67;
      auVar10._12_4_ = fVar68;
      auVar102 = NEON_ext(auVar9,auVar10,8,1);
      auVar113 = NEON_ext(auVar112,auVar112,8,1);
      fVar76 = fVar70 * fVar48 - fVar69 * auVar112._0_4_;
      uVar53 = NEON_ext(CONCAT44(fVar69 * auVar112._8_4_ - fVar67 * fVar48,fVar76),
                        CONCAT44(auVar102._4_4_ * fVar48 - fVar69 * auVar113._4_4_,
                                 auVar102._0_4_ * auVar112._0_4_ - fVar70 * auVar113._0_4_),4,1);
      fVar48 = fVar52 + (float)uVar53;
      fVar49 = fVar58 + (float)((ulong)uVar53 >> 0x20);
      fVar76 = fVar51 + fVar76;
      pfVar45 = pfVar4 + (ulong)param_2 * 0x28 + 0x24;
      uVar46 = (ulong)param_2;
      afStack_510[uVar46 * 4 + 2] = fVar76;
      afStack_510[uVar46 * 4 + 3] = fVar57 + 0.0;
      afStack_510[uVar46 * 4] = fVar48;
      afStack_510[uVar46 * 4 + 1] = fVar49;
      auVar109._0_4_ = pfVar45[0xc] * fVar49 + pfVar45[0x14] * fVar76;
      auVar109._4_4_ = pfVar45[0xd] * fVar49 + pfVar45[0x15] * fVar76;
      auVar109._8_4_ = pfVar45[0xe] * fVar49 + pfVar45[0x16] * fVar76;
      auVar109._12_4_ = pfVar45[0xf] * fVar49 + 0.0;
      auVar102 = NEON_ext(auVar109,auVar109,8,1);
      auVar91._0_4_ = pfVar45[8] * fVar49 + pfVar45[0x10] * fVar76;
      auVar91._4_4_ = pfVar45[9] * fVar49 + pfVar45[0x11] * fVar76;
      auVar91._8_4_ = pfVar45[10] * fVar49 + pfVar45[0x12] * fVar76;
      auVar91._12_4_ = pfVar45[0xb] * fVar49 + 0.0;
      auVar112 = NEON_ext(auVar91,auVar91,8,1);
      auVar80._0_4_ = pfVar45[4] * fVar48 + auVar109._0_4_;
      auVar80._4_4_ = pfVar45[5] * fVar48 + auVar109._4_4_;
      auVar80._8_4_ = pfVar45[6] * fVar48 + auVar102._0_4_;
      auVar80._12_4_ = pfVar45[7] * fVar48 + 0.0;
      auVar113 = NEON_ext(auVar80,auVar80,8,1);
      auVar92._0_4_ = *pfVar45 * fVar48 + auVar91._0_4_;
      auVar92._4_4_ = pfVar45[1] * fVar48 + auVar91._4_4_;
      auVar92._8_4_ = pfVar45[2] * fVar48 + auVar112._0_4_;
      auVar92._12_4_ = pfVar45[3] * fVar48 + 0.0;
      auVar102 = NEON_ext(auVar92,auVar92,8,1);
      auVar112 = *pauVar3;
      auVar103 = NEON_ext(auVar112,auVar112,8,1);
      fVar70 = fVar70 - auVar92._0_4_;
      fVar69 = fVar69 - auVar92._4_4_;
      fVar67 = fVar67 - auVar102._0_4_;
      fVar68 = fVar68 - 0.0;
      fVar48 = auVar112._4_4_;
      local_110[uVar38] = param_2;
      auVar11._4_4_ = fVar69;
      auVar11._0_4_ = fVar70;
      auVar11._8_4_ = fVar67;
      auVar11._12_4_ = fVar68;
      auVar12._4_4_ = fVar69;
      auVar12._0_4_ = fVar70;
      auVar12._8_4_ = fVar67;
      auVar12._12_4_ = fVar68;
      auVar102 = NEON_ext(auVar11,auVar12,8,1);
      fVar76 = auVar112._0_4_ * fVar69 - fVar48 * fVar70;
      uVar53 = NEON_ext(CONCAT44(fVar48 * fVar67 - auVar112._8_4_ * fVar69,fVar76),
                        CONCAT44(auVar103._4_4_ * fVar69 - fVar48 * auVar102._4_4_,
                                 auVar103._0_4_ * fVar70 - auVar112._0_4_ * auVar102._0_4_),4,1);
      uVar40 = (int)uVar38 + 1;
      param_2 = (uint)*(byte *)(param_1 + (ulong)param_2 + 0x40);
      fVar52 = (fVar52 - auVar80._0_4_) + (float)uVar53;
      fVar58 = (fVar58 - auVar80._4_4_) + (float)((ulong)uVar53 >> 0x20);
      fVar51 = (fVar51 - auVar113._0_4_) + fVar76;
      fVar57 = (fVar57 - 0.0) + 0.0;
      uVar38 = (ulong)uVar40;
    } while (uVar42 != param_2);
  }
  uVar41 = uVar40;
  if (uVar42 == param_5) {
    auVar59._0_4_ = fVar70 + auVar60._0_4_;
    auVar59._4_4_ = fVar69 + auVar60._4_4_;
    auVar59._8_4_ = fVar67 + auVar60._8_4_;
    auVar61._12_4_ = fVar68 + 0.0;
    auVar61._0_12_ = auVar59;
    fVar57 = fVar57 + 0.0;
  }
  else {
    fVar76 = 0.0;
    auVar60._12_4_ = 0;
    do {
      pauVar3 = (undefined1 (*) [16])(lVar2 + (ulong)param_5 * 0x20);
      auVar112 = pauVar3[1];
      fVar78 = auVar112._4_4_;
      fVar49 = auVar60._4_4_;
      auVar102 = NEON_ext(auVar60,auVar60,8,1);
      auVar113 = NEON_ext(auVar112,auVar112,8,1);
      fVar48 = auVar60._0_4_;
      fVar77 = fVar48 * fVar78 - fVar49 * auVar112._0_4_;
      uVar53 = NEON_ext(CONCAT44(fVar49 * auVar112._8_4_ - auVar60._8_4_ * fVar78,fVar77),
                        CONCAT44(auVar102._4_4_ * fVar78 - fVar49 * auVar113._4_4_,
                                 auVar102._0_4_ * auVar112._0_4_ - fVar48 * auVar113._0_4_),4,1);
      fVar78 = fVar79 + (float)uVar53;
      fVar89 = fVar71 + (float)((ulong)uVar53 >> 0x20);
      fVar77 = fVar72 + fVar77;
      pfVar45 = pfVar4 + (ulong)param_5 * 0x28 + 0x24;
      uVar38 = (ulong)param_5;
      afStack_510[uVar38 * 4 + 2] = fVar77;
      afStack_510[uVar38 * 4 + 3] = fVar76 + 0.0;
      afStack_510[uVar38 * 4] = fVar78;
      afStack_510[uVar38 * 4 + 1] = fVar89;
      auVar110._0_4_ = pfVar45[0xc] * fVar89 + pfVar45[0x14] * fVar77;
      auVar110._4_4_ = pfVar45[0xd] * fVar89 + pfVar45[0x15] * fVar77;
      auVar110._8_4_ = pfVar45[0xe] * fVar89 + pfVar45[0x16] * fVar77;
      auVar110._12_4_ = pfVar45[0xf] * fVar89 + 0.0;
      auVar102 = NEON_ext(auVar110,auVar110,8,1);
      auVar93._0_4_ = pfVar45[8] * fVar89 + pfVar45[0x10] * fVar77;
      auVar93._4_4_ = pfVar45[9] * fVar89 + pfVar45[0x11] * fVar77;
      auVar93._8_4_ = pfVar45[10] * fVar89 + pfVar45[0x12] * fVar77;
      auVar93._12_4_ = pfVar45[0xb] * fVar89 + 0.0;
      auVar112 = NEON_ext(auVar93,auVar93,8,1);
      auVar81._0_4_ = pfVar45[4] * fVar78 + auVar110._0_4_;
      auVar81._4_4_ = pfVar45[5] * fVar78 + auVar110._4_4_;
      auVar81._8_4_ = pfVar45[6] * fVar78 + auVar102._0_4_;
      auVar81._12_4_ = pfVar45[7] * fVar78 + 0.0;
      auVar113 = NEON_ext(auVar81,auVar81,8,1);
      auVar94._0_4_ = *pfVar45 * fVar78 + auVar93._0_4_;
      auVar94._4_4_ = pfVar45[1] * fVar78 + auVar93._4_4_;
      auVar94._8_4_ = pfVar45[2] * fVar78 + auVar112._0_4_;
      auVar94._12_4_ = pfVar45[3] * fVar78 + 0.0;
      auVar102 = NEON_ext(auVar94,auVar94,8,1);
      auVar112 = *pauVar3;
      auVar103 = NEON_ext(auVar112,auVar112,8,1);
      auVar62._0_4_ = fVar48 - auVar94._0_4_;
      auVar62._4_4_ = fVar49 - auVar94._4_4_;
      auVar62._8_4_ = auVar60._8_4_ - auVar102._0_4_;
      auVar62._12_4_ = auVar60._12_4_ - 0.0;
      fVar49 = auVar112._4_4_;
      local_110[uVar41] = param_5;
      auVar102 = NEON_ext(auVar62,auVar62,8,1);
      fVar48 = auVar112._0_4_ * auVar62._4_4_ - fVar49 * auVar62._0_4_;
      uVar53 = NEON_ext(CONCAT44(fVar49 * auVar62._8_4_ - auVar112._8_4_ * auVar62._4_4_,fVar48),
                        CONCAT44(auVar103._4_4_ * auVar62._4_4_ - fVar49 * auVar102._4_4_,
                                 auVar103._0_4_ * auVar62._0_4_ - auVar112._0_4_ * auVar102._0_4_),4
                        ,1);
      uVar41 = uVar41 + 1;
      param_5 = (uint)*(byte *)(param_1 + (ulong)param_5 + 0x40);
      fVar79 = (fVar79 - auVar81._0_4_) + (float)uVar53;
      fVar71 = (fVar71 - auVar81._4_4_) + (float)((ulong)uVar53 >> 0x20);
      fVar72 = (fVar72 - auVar113._0_4_) + fVar48;
      fVar76 = (fVar76 - 0.0) + 0.0;
      auVar60 = auVar62;
    } while (uVar42 != param_5);
    auVar59._0_4_ = fVar70 + auVar62._0_4_;
    auVar59._4_4_ = fVar69 + auVar62._4_4_;
    auVar59._8_4_ = fVar67 + auVar62._8_4_;
    auVar61._12_4_ = fVar68 + auVar62._12_4_;
    auVar61._0_12_ = auVar59;
    fVar57 = fVar57 + fVar76;
  }
  fVar51 = fVar51 + fVar72;
  fVar58 = fVar58 + fVar71;
  fVar52 = fVar52 + fVar79;
  if (uVar42 == 0) {
    uVar43 = uVar41;
  }
  else {
    uVar44 = uVar41;
    do {
      pauVar39 = (undefined1 (*) [16])(lVar2 + (ulong)uVar42 * 0x20);
      pauVar3 = pauVar39 + 1;
      uVar50 = (undefined4)((ulong)*(undefined8 *)(pauVar39[1] + 8) >> 0x20);
      fVar67 = (float)*(undefined8 *)*pauVar3;
      fVar79 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
      fVar69 = auVar61._4_4_;
      auVar112 = NEON_ext(auVar61,auVar61,8,1);
      auVar21._12_4_ = uVar50;
      auVar21._0_12_ = *(undefined1 (*) [12])*pauVar3;
      auVar22._12_4_ = uVar50;
      auVar22._0_12_ = *(undefined1 (*) [12])*pauVar3;
      auVar102 = NEON_ext(auVar21,auVar22,8,1);
      fVar70 = auVar61._0_4_;
      fVar68 = fVar70 * fVar79 - fVar69 * fVar67;
      uVar53 = NEON_ext(CONCAT44(fVar69 * (float)*(undefined8 *)(pauVar39[1] + 8) -
                                 auVar61._8_4_ * fVar79,fVar68),
                        CONCAT44(auVar112._4_4_ * fVar79 - fVar69 * auVar102._4_4_,
                                 auVar112._0_4_ * fVar67 - fVar70 * auVar102._0_4_),4,1);
      fVar67 = fVar52 + (float)uVar53;
      fVar79 = fVar58 + (float)((ulong)uVar53 >> 0x20);
      fVar68 = fVar51 + fVar68;
      pfVar45 = pfVar4 + (ulong)uVar42 * 0x28 + 0x24;
      *(ulong *)(afStack_510 + (ulong)uVar42 * 4 + 2) = CONCAT44(fVar57 + 0.0,fVar68);
      *(ulong *)(afStack_510 + (ulong)uVar42 * 4) = CONCAT44(fVar79,fVar67);
      auVar82._0_4_ = pfVar45[0xc] * fVar79 + pfVar45[0x14] * fVar68;
      auVar82._4_4_ = pfVar45[0xd] * fVar79 + pfVar45[0x15] * fVar68;
      auVar82._8_4_ = pfVar45[0xe] * fVar79 + pfVar45[0x16] * fVar68;
      auVar82._12_4_ = pfVar45[0xf] * fVar79 + 0.0;
      auVar102 = NEON_ext(auVar82,auVar82,8,1);
      auVar73._0_4_ = pfVar45[8] * fVar79 + pfVar45[0x10] * fVar68;
      auVar73._4_4_ = pfVar45[9] * fVar79 + pfVar45[0x11] * fVar68;
      auVar73._8_4_ = pfVar45[10] * fVar79 + pfVar45[0x12] * fVar68;
      auVar73._12_4_ = pfVar45[0xb] * fVar79 + 0.0;
      auVar112 = NEON_ext(auVar73,auVar73,8,1);
      auVar74._0_4_ = *pfVar45 * fVar67 + auVar73._0_4_;
      auVar74._4_4_ = pfVar45[1] * fVar67 + auVar73._4_4_;
      auVar74._8_4_ = pfVar45[2] * fVar67 + auVar112._0_4_;
      auVar74._12_4_ = pfVar45[3] * fVar67 + 0.0;
      auVar112 = NEON_ext(auVar74,auVar74,8,1);
      fVar68 = pfVar45[4] * fVar67 + auVar82._0_4_;
      fVar79 = pfVar45[5] * fVar67 + auVar82._4_4_;
      fVar71 = pfVar45[6] * fVar67 + auVar102._0_4_;
      fVar67 = pfVar45[7] * fVar67 + 0.0;
      auVar23._4_4_ = fVar79;
      auVar23._0_4_ = fVar68;
      auVar23._8_4_ = fVar71;
      auVar23._12_4_ = fVar67;
      auVar24._4_4_ = fVar79;
      auVar24._0_4_ = fVar68;
      auVar24._8_4_ = fVar71;
      auVar24._12_4_ = fVar67;
      auVar102 = NEON_ext(auVar23,auVar24,8,1);
      auVar59._0_4_ = fVar70 - auVar74._0_4_;
      auVar59._4_4_ = fVar69 - auVar74._4_4_;
      auVar59._8_4_ = auVar61._8_4_ - auVar112._0_4_;
      auVar61._12_4_ = auVar61._12_4_ - 0.0;
      auVar61._0_12_ = auVar59;
      auVar112 = *pauVar39;
      uVar43 = uVar44 + 1;
      local_110[uVar44] = uVar42;
      uVar42 = (uint)*(byte *)(param_1 + (ulong)uVar42 + 0x40);
      fVar69 = auVar112._4_4_;
      auVar113 = NEON_ext(auVar112,auVar112,8,1);
      auVar103 = NEON_ext(auVar61,auVar61,8,1);
      fVar70 = auVar112._0_4_ * auVar59._4_4_ - fVar69 * auVar59._0_4_;
      uVar53 = NEON_ext(CONCAT44(fVar69 * auVar59._8_4_ - auVar112._8_4_ * auVar59._4_4_,fVar70),
                        CONCAT44(auVar113._4_4_ * auVar59._4_4_ - fVar69 * auVar103._4_4_,
                                 auVar113._0_4_ * auVar59._0_4_ - auVar112._0_4_ * auVar103._0_4_),4
                        ,1);
      fVar52 = (fVar52 - fVar68) + (float)uVar53;
      fVar58 = (fVar58 - fVar79) + (float)((ulong)uVar53 >> 0x20);
      fVar51 = (fVar51 - auVar102._0_4_) + fVar70;
      fVar57 = (fVar57 - 0.0) + 0.0;
      uVar44 = uVar43;
    } while (uVar42 != 0);
  }
  fVar69 = -auVar59._0_4_;
  fVar67 = -auVar59._4_4_;
  fVar68 = -auVar59._8_4_;
  fVar52 = -fVar52;
  fVar58 = -fVar58;
  fVar51 = -fVar51;
  auVar126._0_4_ = fVar69 * pfVar4[0xc];
  auVar126._4_4_ = fVar67 * pfVar4[0xd];
  auVar126._8_4_ = fVar68 * pfVar4[0xe];
  auVar126._12_4_ = pfVar4[0xf] * 0.0;
  auVar95._0_4_ = fVar69 * pfVar4[0x10];
  auVar95._4_4_ = fVar67 * pfVar4[0x11];
  auVar95._8_4_ = fVar68 * pfVar4[0x12];
  auVar95._12_4_ = pfVar4[0x13] * 0.0;
  auVar111._0_4_ = fVar69 * pfVar4[0x14];
  auVar111._4_4_ = fVar67 * pfVar4[0x15];
  auVar111._8_4_ = fVar68 * pfVar4[0x16];
  auVar111._12_4_ = pfVar4[0x17] * 0.0;
  auVar112 = NEON_ext(auVar126,auVar126,8,1);
  fVar57 = auVar112._0_4_ + auVar112._4_4_;
  auVar112 = NEON_ext(auVar95,auVar95,8,1);
  fVar70 = auVar112._0_4_ + auVar112._4_4_;
  auVar112 = NEON_ext(auVar111,auVar111,8,1);
  fVar79 = *pfVar4 * fVar69 + (float)*(undefined8 *)(pfVar4 + 4) * fVar67 +
           (float)*(undefined8 *)(pfVar4 + 8) * fVar68 +
           pfVar4[0xc] * fVar52 + pfVar4[0x10] * fVar58 + pfVar4[0x14] * fVar51;
  fVar71 = pfVar4[1] * fVar69 + (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20) * fVar67 +
           (float)((ulong)*(undefined8 *)(pfVar4 + 8) >> 0x20) * fVar68 +
           pfVar4[0xd] * fVar52 + pfVar4[0x11] * fVar58 + pfVar4[0x15] * fVar51;
  fVar69 = pfVar4[2] * fVar69 + (float)*(undefined8 *)(pfVar4 + 6) * fVar67 +
           (float)*(undefined8 *)(pfVar4 + 10) * fVar68 +
           pfVar4[0xe] * fVar52 + pfVar4[0x12] * fVar58 + pfVar4[0x16] * fVar51;
  fVar67 = 0.0;
  uVar53 = NEON_ext(CONCAT44(auVar126._0_4_ + auVar126._4_4_ + fVar57,
                             auVar126._0_4_ + auVar126._4_4_ + fVar57),
                    CONCAT44(auVar95._0_4_ + auVar95._4_4_ + fVar70,
                             auVar95._0_4_ + auVar95._4_4_ + fVar70),4,1);
  auVar54._0_4_ =
       (float)*(undefined8 *)(pfVar4 + 0x18) * fVar52 + pfVar4[0x1c] * fVar58 +
       pfVar4[0x20] * fVar51 + (float)uVar53;
  auVar54._4_4_ =
       (float)((ulong)*(undefined8 *)(pfVar4 + 0x18) >> 0x20) * fVar52 + pfVar4[0x1d] * fVar58 +
       pfVar4[0x21] * fVar51 + (float)((ulong)uVar53 >> 0x20);
  auVar54._8_4_ =
       (float)*(undefined8 *)(pfVar4 + 0x1a) * fVar52 + pfVar4[0x1e] * fVar58 +
       pfVar4[0x22] * fVar51 + auVar111._0_4_ + auVar111._4_4_ + auVar112._0_4_ + auVar112._4_4_;
  auVar54._12_4_ = 0.0;
  if (uVar41 < uVar43) {
    puVar36 = local_110 + (uVar43 - 1);
    do {
      uVar38 = (ulong)*puVar36;
      puVar1 = (undefined8 *)(lVar2 + uVar38 * 0x20);
      auVar112 = *(undefined1 (*) [16])(puVar1 + 2);
      fVar57 = -(float)*puVar1;
      fVar68 = -(float)((ulong)*puVar1 >> 0x20);
      fVar72 = -(float)puVar1[1];
      auVar96._12_4_ = -(float)((ulong)puVar1[1] >> 0x20);
      auVar96._8_4_ = fVar72;
      auVar96._4_4_ = fVar68;
      auVar96._0_4_ = fVar57;
      fVar48 = auVar54._4_4_;
      auVar97._0_12_ = auVar96._0_12_;
      auVar97._12_4_ = 0;
      auVar102 = NEON_ext(auVar54,auVar54,8,1);
      fVar49 = auVar54._8_4_;
      auVar113 = NEON_ext(auVar97,auVar97,8,1);
      fVar76 = auVar54._0_4_;
      fVar52 = afStack_510[uVar38 * 4];
      fVar58 = afStack_510[uVar38 * 4 + 1];
      fVar51 = afStack_510[uVar38 * 4 + 2];
      pfVar45 = pfVar4 + uVar38 * 0x28 + 0x24;
      fVar70 = fVar48 * fVar57 - fVar76 * fVar68;
      uVar53 = NEON_ext(CONCAT44(fVar49 * fVar68 - fVar48 * fVar72,fVar70),
                        CONCAT44(fVar48 * auVar113._4_4_ - auVar102._4_4_ * fVar68,
                                 fVar76 * auVar113._0_4_ - auVar102._0_4_ * fVar57),4,1);
      uVar43 = uVar43 - 1;
      auVar117._0_4_ = fVar76 * pfVar45[4];
      auVar117._4_4_ = fVar48 * pfVar45[5];
      auVar117._8_4_ = fVar49 * pfVar45[6];
      fVar77 = auVar54._12_4_;
      auVar117._12_4_ = fVar77 * pfVar45[7];
      fVar79 = fVar79 + (float)uVar53;
      fVar71 = fVar71 + (float)((ulong)uVar53 >> 0x20);
      fVar69 = fVar69 + fVar70;
      fVar67 = fVar67 + 0.0;
      auVar102 = NEON_ext(auVar117,auVar117,8,1);
      auVar127._0_4_ = fVar76 * pfVar45[0xc];
      auVar127._4_4_ = fVar48 * pfVar45[0xd];
      auVar127._8_4_ = fVar49 * pfVar45[0xe];
      auVar127._12_4_ = fVar77 * pfVar45[0xf];
      fVar57 = auVar102._0_4_ + auVar102._4_4_;
      fVar78 = (float)*(undefined8 *)pfVar45 * fVar79;
      fVar89 = (float)((ulong)*(undefined8 *)pfVar45 >> 0x20) * fVar71;
      fVar68 = (float)*(undefined8 *)(pfVar45 + 2) * fVar69;
      fVar72 = (float)((ulong)*(undefined8 *)(pfVar45 + 2) >> 0x20) * fVar67;
      auVar118._0_4_ = fVar79 * pfVar45[8];
      auVar118._4_4_ = fVar71 * pfVar45[9];
      auVar118._8_4_ = fVar69 * pfVar45[10];
      auVar118._12_4_ = fVar67 * pfVar45[0xb];
      auVar102 = NEON_ext(auVar127,auVar127,8,1);
      fVar70 = auVar102._0_4_ + auVar102._4_4_;
      auVar25._4_4_ = fVar89;
      auVar25._0_4_ = fVar78;
      auVar25._8_4_ = fVar68;
      auVar25._12_4_ = fVar72;
      auVar26._4_4_ = fVar89;
      auVar26._0_4_ = fVar78;
      auVar26._8_4_ = fVar68;
      auVar26._12_4_ = fVar72;
      auVar102 = NEON_ext(auVar25,auVar26,8,1);
      fVar68 = auVar102._0_4_ + auVar102._4_4_;
      auVar138._0_4_ = fVar79 * pfVar45[0x10];
      auVar138._4_4_ = fVar71 * pfVar45[0x11];
      auVar138._8_4_ = fVar69 * pfVar45[0x12];
      auVar138._12_4_ = fVar67 * pfVar45[0x13];
      auVar102 = NEON_ext(auVar118,auVar118,8,1);
      auVar134._0_4_ = fVar76 * pfVar45[0x14];
      auVar134._4_4_ = fVar48 * pfVar45[0x15];
      auVar134._8_4_ = fVar49 * pfVar45[0x16];
      auVar134._12_4_ = fVar77 * pfVar45[0x17];
      fVar72 = auVar102._0_4_ + auVar102._4_4_;
      auVar102 = NEON_ext(auVar138,auVar138,8,1);
      auVar113 = NEON_ext(auVar134,auVar134,8,1);
      fVar90 = auVar112._4_4_;
      uVar53 = NEON_ext(CONCAT44(fVar78 + fVar89 + fVar68 + auVar117._0_4_ + auVar117._4_4_ + fVar57
                                 ,fVar78 + fVar89 + fVar68 +
                                  auVar117._0_4_ + auVar117._4_4_ + fVar57),
                        CONCAT44(auVar118._0_4_ + auVar118._4_4_ + fVar72 +
                                 auVar127._0_4_ + auVar127._4_4_ + fVar70,
                                 auVar118._0_4_ + auVar118._4_4_ + fVar72 +
                                 auVar127._0_4_ + auVar127._4_4_ + fVar70),4,1);
      fVar57 = pfVar45[0x18] * fVar52 + pfVar45[0x1c] * fVar58 + pfVar45[0x20] * fVar51 +
               (float)uVar53;
      fVar70 = pfVar45[0x19] * fVar52 + pfVar45[0x1d] * fVar58 + pfVar45[0x21] * fVar51 +
               (float)((ulong)uVar53 >> 0x20);
      fVar52 = pfVar45[0x1a] * fVar52 + pfVar45[0x1e] * fVar58 + pfVar45[0x22] * fVar51 +
               auVar138._0_4_ + auVar138._4_4_ + auVar102._0_4_ + auVar102._4_4_ +
               auVar134._0_4_ + auVar134._4_4_ + auVar113._0_4_ + auVar113._4_4_;
      auVar102 = NEON_ext(auVar112,auVar112,8,1);
      auVar27._4_4_ = fVar70;
      auVar27._0_4_ = fVar57;
      auVar27._8_4_ = fVar52;
      auVar27._12_4_ = 0;
      auVar28._4_4_ = fVar70;
      auVar28._0_4_ = fVar57;
      auVar28._8_4_ = fVar52;
      auVar28._12_4_ = 0;
      auVar113 = NEON_ext(auVar27,auVar28,8,1);
      auVar54._0_4_ = fVar76 - fVar57;
      auVar54._4_4_ = fVar48 - fVar70;
      auVar54._8_4_ = fVar49 - fVar52;
      auVar54._12_4_ = fVar77 - 0.0;
      fVar58 = auVar112._0_4_ * fVar70 - fVar90 * fVar57;
      uVar53 = NEON_ext(CONCAT44(fVar90 * fVar52 - auVar112._8_4_ * fVar70,fVar58),
                        CONCAT44(auVar102._4_4_ * fVar70 - fVar90 * auVar113._4_4_,
                                 auVar102._0_4_ * fVar57 - auVar112._0_4_ * auVar113._0_4_),4,1);
      fVar79 = fVar79 - (float)uVar53;
      fVar71 = fVar71 - (float)((ulong)uVar53 >> 0x20);
      fVar69 = fVar69 - fVar58;
      fVar67 = fVar67 - 0.0;
      puVar36 = puVar36 + -1;
    } while (uVar41 < uVar43);
  }
  param_7[2] = fVar69;
  param_7[3] = fVar67;
  *param_7 = fVar79;
  param_7[1] = fVar71;
  *(long *)(param_7 + 6) = auVar54._8_8_;
  *(long *)(param_7 + 4) = auVar54._0_8_;
  if (uVar40 < uVar41) {
    fVar72 = auVar54._8_4_;
    fVar76 = auVar54._12_4_;
    fVar70 = auVar54._0_4_;
    fVar68 = auVar54._4_4_;
    puVar36 = local_110 + (uVar41 - 1);
    fVar52 = fVar79;
    fVar58 = fVar71;
    fVar51 = fVar69;
    fVar57 = fVar67;
    do {
      uVar38 = (ulong)*puVar36;
      pfVar45 = (float *)(lVar2 + uVar38 * 0x20);
      auVar112 = *(undefined1 (*) [16])(pfVar45 + 4);
      fVar78 = -*pfVar45;
      fVar90 = -pfVar45[1];
      auVar83._0_8_ = CONCAT44(fVar90,fVar78);
      auVar83._8_4_ = -pfVar45[2];
      auVar83._12_4_ = -pfVar45[3];
      auVar119._8_8_ = auVar83._8_8_;
      auVar119._0_8_ = auVar83._0_8_;
      auVar120._0_12_ = auVar119._0_12_;
      auVar120._12_4_ = 0;
      auVar29._4_4_ = fVar68;
      auVar29._0_4_ = fVar70;
      auVar29._8_4_ = fVar72;
      auVar29._12_4_ = fVar76;
      auVar30._4_4_ = fVar68;
      auVar30._0_4_ = fVar70;
      auVar30._8_4_ = fVar72;
      auVar30._12_4_ = fVar76;
      auVar102 = NEON_ext(auVar29,auVar30,8,1);
      auVar113 = NEON_ext(auVar120,auVar120,8,1);
      fVar48 = afStack_510[uVar38 * 4];
      fVar49 = afStack_510[uVar38 * 4 + 1];
      fVar77 = afStack_510[uVar38 * 4 + 2];
      pfVar45 = pfVar4 + uVar38 * 0x28 + 0x24;
      fVar89 = fVar78 * fVar68 - fVar90 * fVar70;
      uVar53 = NEON_ext(CONCAT44(fVar90 * fVar72 - auVar83._8_4_ * fVar68,fVar89),
                        CONCAT44(auVar113._4_4_ * fVar68 - fVar90 * auVar102._4_4_,
                                 auVar113._0_4_ * fVar70 - fVar78 * auVar102._0_4_),4,1);
      uVar41 = uVar41 - 1;
      auVar128._0_4_ = fVar70 * pfVar45[4];
      auVar128._4_4_ = fVar68 * pfVar45[5];
      auVar128._8_4_ = fVar72 * pfVar45[6];
      auVar128._12_4_ = fVar76 * pfVar45[7];
      fVar52 = fVar52 + (float)uVar53;
      fVar58 = fVar58 + (float)((ulong)uVar53 >> 0x20);
      fVar51 = fVar51 + fVar89;
      fVar57 = fVar57 + 0.0;
      auVar102 = NEON_ext(auVar128,auVar128,8,1);
      auVar139._0_4_ = fVar70 * pfVar45[0xc];
      auVar139._4_4_ = fVar68 * pfVar45[0xd];
      auVar139._8_4_ = fVar72 * pfVar45[0xe];
      auVar139._12_4_ = fVar76 * pfVar45[0xf];
      fVar78 = auVar102._0_4_ + auVar102._4_4_;
      auVar84._0_4_ = *pfVar45 * fVar52;
      auVar84._4_4_ = pfVar45[1] * fVar58;
      auVar84._8_4_ = pfVar45[2] * fVar51;
      auVar84._12_4_ = pfVar45[3] * fVar57;
      auVar129._0_4_ = fVar52 * pfVar45[8];
      auVar129._4_4_ = fVar58 * pfVar45[9];
      auVar129._8_4_ = fVar51 * pfVar45[10];
      auVar129._12_4_ = fVar57 * pfVar45[0xb];
      auVar102 = NEON_ext(auVar139,auVar139,8,1);
      fVar89 = auVar102._0_4_ + auVar102._4_4_;
      auVar102 = NEON_ext(auVar84,auVar84,8,1);
      fVar90 = auVar102._0_4_ + auVar102._4_4_;
      auVar143._0_4_ = fVar52 * pfVar45[0x10];
      auVar143._4_4_ = fVar58 * pfVar45[0x11];
      auVar143._8_4_ = fVar51 * pfVar45[0x12];
      auVar143._12_4_ = fVar57 * pfVar45[0x13];
      auVar102 = NEON_ext(auVar129,auVar129,8,1);
      auVar142._0_4_ = fVar70 * pfVar45[0x14];
      auVar142._4_4_ = fVar68 * pfVar45[0x15];
      auVar142._8_4_ = fVar72 * pfVar45[0x16];
      auVar142._12_4_ = fVar76 * pfVar45[0x17];
      fVar47 = auVar102._0_4_ + auVar102._4_4_;
      auVar102 = NEON_ext(auVar143,auVar143,8,1);
      auVar113 = NEON_ext(auVar142,auVar142,8,1);
      fVar107 = auVar112._4_4_;
      uVar53 = NEON_ext(CONCAT44(auVar84._0_4_ + auVar84._4_4_ + fVar90 +
                                 auVar128._0_4_ + auVar128._4_4_ + fVar78,
                                 auVar84._0_4_ + auVar84._4_4_ + fVar90 +
                                 auVar128._0_4_ + auVar128._4_4_ + fVar78),
                        CONCAT44(auVar129._0_4_ + auVar129._4_4_ + fVar47 +
                                 auVar139._0_4_ + auVar139._4_4_ + fVar89,
                                 auVar129._0_4_ + auVar129._4_4_ + fVar47 +
                                 auVar139._0_4_ + auVar139._4_4_ + fVar89),4,1);
      auVar85._0_4_ =
           pfVar45[0x18] * fVar48 + pfVar45[0x1c] * fVar49 + pfVar45[0x20] * fVar77 + (float)uVar53;
      auVar85._4_4_ =
           pfVar45[0x19] * fVar48 + pfVar45[0x1d] * fVar49 + pfVar45[0x21] * fVar77 +
           (float)((ulong)uVar53 >> 0x20);
      auVar85._8_4_ =
           pfVar45[0x1a] * fVar48 + pfVar45[0x1e] * fVar49 + pfVar45[0x22] * fVar77 +
           auVar143._0_4_ + auVar143._4_4_ + auVar102._0_4_ + auVar102._4_4_ +
           auVar142._0_4_ + auVar142._4_4_ + auVar113._0_4_ + auVar113._4_4_;
      auVar85._12_4_ = 0;
      auVar102 = NEON_ext(auVar112,auVar112,8,1);
      auVar113 = NEON_ext(auVar85,auVar85,8,1);
      fVar70 = fVar70 - auVar85._0_4_;
      fVar68 = fVar68 - auVar85._4_4_;
      fVar72 = fVar72 - auVar85._8_4_;
      fVar76 = fVar76 - 0.0;
      fVar48 = auVar112._0_4_ * auVar85._4_4_ - fVar107 * auVar85._0_4_;
      uVar53 = NEON_ext(CONCAT44(fVar107 * auVar85._8_4_ - auVar112._8_4_ * auVar85._4_4_,fVar48),
                        CONCAT44(auVar102._4_4_ * auVar85._4_4_ - fVar107 * auVar113._4_4_,
                                 auVar102._0_4_ * auVar85._0_4_ - auVar112._0_4_ * auVar113._0_4_),4
                        ,1);
      fVar52 = fVar52 - (float)uVar53;
      fVar58 = fVar58 - (float)((ulong)uVar53 >> 0x20);
      fVar51 = fVar51 - fVar48;
      fVar57 = fVar57 - 0.0;
      param_7[2] = fVar51;
      param_7[3] = fVar57;
      *param_7 = fVar52;
      param_7[1] = fVar58;
      *(ulong *)(param_7 + 6) = CONCAT44(fVar76,fVar72);
      *(ulong *)(param_7 + 4) = CONCAT44(fVar68,fVar70);
      puVar36 = puVar36 + -1;
    } while (uVar40 < uVar41);
  }
  param_4[2] = fVar69;
  param_4[3] = fVar67;
  *param_4 = fVar79;
  param_4[1] = fVar71;
  *(long *)(param_4 + 6) = auVar54._8_8_;
  *(long *)(param_4 + 4) = auVar54._0_8_;
  if (uVar40 != 0) {
    puVar36 = local_110 + (uVar40 - 1);
    do {
      uVar38 = (ulong)*puVar36;
      puVar1 = (undefined8 *)(lVar2 + uVar38 * 0x20);
      auVar112 = *(undefined1 (*) [16])(puVar1 + 2);
      fVar57 = -(float)*puVar1;
      fVar68 = -(float)((ulong)*puVar1 >> 0x20);
      fVar72 = -(float)puVar1[1];
      auVar98._12_4_ = -(float)((ulong)puVar1[1] >> 0x20);
      auVar98._8_4_ = fVar72;
      auVar98._4_4_ = fVar68;
      auVar98._0_4_ = fVar57;
      fVar48 = auVar54._4_4_;
      auVar99._0_12_ = auVar98._0_12_;
      auVar99._12_4_ = 0;
      auVar102 = NEON_ext(auVar54,auVar54,8,1);
      fVar49 = auVar54._8_4_;
      auVar113 = NEON_ext(auVar99,auVar99,8,1);
      fVar76 = auVar54._0_4_;
      fVar52 = afStack_510[uVar38 * 4];
      fVar58 = afStack_510[uVar38 * 4 + 1];
      fVar51 = afStack_510[uVar38 * 4 + 2];
      pfVar45 = pfVar4 + uVar38 * 0x28 + 0x24;
      fVar70 = fVar57 * fVar48 - fVar68 * fVar76;
      uVar53 = NEON_ext(CONCAT44(fVar68 * fVar49 - fVar72 * fVar48,fVar70),
                        CONCAT44(auVar113._4_4_ * fVar48 - fVar68 * auVar102._4_4_,
                                 auVar113._0_4_ * fVar76 - fVar57 * auVar102._0_4_),4,1);
      uVar40 = uVar40 - 1;
      auVar121._0_4_ = fVar76 * pfVar45[4];
      auVar121._4_4_ = fVar48 * pfVar45[5];
      auVar121._8_4_ = fVar49 * pfVar45[6];
      fVar77 = auVar54._12_4_;
      auVar121._12_4_ = fVar77 * pfVar45[7];
      fVar79 = fVar79 + (float)uVar53;
      fVar71 = fVar71 + (float)((ulong)uVar53 >> 0x20);
      fVar69 = fVar69 + fVar70;
      fVar67 = fVar67 + 0.0;
      auVar102 = NEON_ext(auVar121,auVar121,8,1);
      auVar130._0_4_ = fVar76 * pfVar45[0xc];
      auVar130._4_4_ = fVar48 * pfVar45[0xd];
      auVar130._8_4_ = fVar49 * pfVar45[0xe];
      auVar130._12_4_ = fVar77 * pfVar45[0xf];
      fVar57 = auVar102._0_4_ + auVar102._4_4_;
      fVar78 = (float)*(undefined8 *)pfVar45 * fVar79;
      fVar89 = (float)((ulong)*(undefined8 *)pfVar45 >> 0x20) * fVar71;
      fVar68 = (float)*(undefined8 *)(pfVar45 + 2) * fVar69;
      fVar72 = (float)((ulong)*(undefined8 *)(pfVar45 + 2) >> 0x20) * fVar67;
      auVar122._0_4_ = fVar79 * pfVar45[8];
      auVar122._4_4_ = fVar71 * pfVar45[9];
      auVar122._8_4_ = fVar69 * pfVar45[10];
      auVar122._12_4_ = fVar67 * pfVar45[0xb];
      auVar102 = NEON_ext(auVar130,auVar130,8,1);
      fVar70 = auVar102._0_4_ + auVar102._4_4_;
      auVar31._4_4_ = fVar89;
      auVar31._0_4_ = fVar78;
      auVar31._8_4_ = fVar68;
      auVar31._12_4_ = fVar72;
      auVar32._4_4_ = fVar89;
      auVar32._0_4_ = fVar78;
      auVar32._8_4_ = fVar68;
      auVar32._12_4_ = fVar72;
      auVar102 = NEON_ext(auVar31,auVar32,8,1);
      fVar68 = auVar102._0_4_ + auVar102._4_4_;
      auVar140._0_4_ = fVar79 * pfVar45[0x10];
      auVar140._4_4_ = fVar71 * pfVar45[0x11];
      auVar140._8_4_ = fVar69 * pfVar45[0x12];
      auVar140._12_4_ = fVar67 * pfVar45[0x13];
      auVar102 = NEON_ext(auVar122,auVar122,8,1);
      auVar135._0_4_ = fVar76 * pfVar45[0x14];
      auVar135._4_4_ = fVar48 * pfVar45[0x15];
      auVar135._8_4_ = fVar49 * pfVar45[0x16];
      auVar135._12_4_ = fVar77 * pfVar45[0x17];
      fVar72 = auVar102._0_4_ + auVar102._4_4_;
      auVar102 = NEON_ext(auVar140,auVar140,8,1);
      auVar113 = NEON_ext(auVar135,auVar135,8,1);
      fVar90 = auVar112._4_4_;
      uVar53 = NEON_ext(CONCAT44(fVar78 + fVar89 + fVar68 + auVar121._0_4_ + auVar121._4_4_ + fVar57
                                 ,fVar78 + fVar89 + fVar68 +
                                  auVar121._0_4_ + auVar121._4_4_ + fVar57),
                        CONCAT44(auVar122._0_4_ + auVar122._4_4_ + fVar72 +
                                 auVar130._0_4_ + auVar130._4_4_ + fVar70,
                                 auVar122._0_4_ + auVar122._4_4_ + fVar72 +
                                 auVar130._0_4_ + auVar130._4_4_ + fVar70),4,1);
      fVar57 = pfVar45[0x18] * fVar52 + pfVar45[0x1c] * fVar58 + pfVar45[0x20] * fVar51 +
               (float)uVar53;
      fVar70 = pfVar45[0x19] * fVar52 + pfVar45[0x1d] * fVar58 + pfVar45[0x21] * fVar51 +
               (float)((ulong)uVar53 >> 0x20);
      fVar52 = pfVar45[0x1a] * fVar52 + pfVar45[0x1e] * fVar58 + pfVar45[0x22] * fVar51 +
               auVar140._0_4_ + auVar140._4_4_ + auVar102._0_4_ + auVar102._4_4_ +
               auVar135._0_4_ + auVar135._4_4_ + auVar113._0_4_ + auVar113._4_4_;
      auVar102 = NEON_ext(auVar112,auVar112,8,1);
      auVar33._4_4_ = fVar70;
      auVar33._0_4_ = fVar57;
      auVar33._8_4_ = fVar52;
      auVar33._12_4_ = 0;
      auVar34._4_4_ = fVar70;
      auVar34._0_4_ = fVar57;
      auVar34._8_4_ = fVar52;
      auVar34._12_4_ = 0;
      auVar113 = NEON_ext(auVar33,auVar34,8,1);
      auVar54._0_8_ = CONCAT44(fVar48 - fVar70,fVar76 - fVar57);
      auVar54._8_4_ = fVar49 - fVar52;
      auVar54._12_4_ = fVar77 - 0.0;
      fVar58 = auVar112._0_4_ * fVar70 - fVar90 * fVar57;
      uVar53 = NEON_ext(CONCAT44(fVar90 * fVar52 - auVar112._8_4_ * fVar70,fVar58),
                        CONCAT44(auVar102._4_4_ * fVar70 - fVar90 * auVar113._4_4_,
                                 auVar102._0_4_ * fVar57 - auVar112._0_4_ * auVar113._0_4_),4,1);
      fVar79 = fVar79 - (float)uVar53;
      fVar71 = fVar71 - (float)((ulong)uVar53 >> 0x20);
      fVar69 = fVar69 - fVar58;
      fVar67 = fVar67 - 0.0;
      param_4[2] = fVar69;
      param_4[3] = fVar67;
      *param_4 = fVar79;
      param_4[1] = fVar71;
      *(long *)(param_4 + 6) = auVar54._8_8_;
      *(undefined8 *)(param_4 + 4) = auVar54._0_8_;
      puVar36 = puVar36 + -1;
    } while (uVar40 != 0);
  }
  return;
}


