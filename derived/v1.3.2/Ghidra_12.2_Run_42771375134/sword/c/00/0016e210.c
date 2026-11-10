/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016e210; name: FUN_0016e210
 */


void FUN_0016e210(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
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
  float *pfVar19;
  undefined1 (*pauVar20) [12];
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [12];
  undefined1 auVar75 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((short)param_1[2] == -1) {
    fVar65 = 0.0;
    pfVar19 = (float *)*param_1;
    fVar69 = 0.0;
    fVar66 = *pfVar19;
    fVar67 = pfVar19[1];
    fVar68 = pfVar19[2];
    fVar62 = pfVar19[4];
    fVar63 = pfVar19[5];
    fVar64 = pfVar19[6];
  }
  else {
    FUN_001637d0(&local_50,*param_1);
    fVar68 = (float)uStack_48;
    fVar69 = (float)((ulong)uStack_48 >> 0x20);
    fVar66 = (float)local_50;
    fVar67 = (float)((ulong)local_50 >> 0x20);
    fVar64 = (float)uStack_38;
    fVar65 = (float)((ulong)uStack_38 >> 0x20);
    fVar62 = (float)uStack_40;
    fVar63 = (float)((ulong)uStack_40 >> 0x20);
  }
  if (*(short *)((long)param_1 + 0x12) == -1) {
    fVar73 = 0.0;
    pauVar20 = (undefined1 (*) [12])param_1[1];
    auVar74 = *pauVar20;
    auVar51._12_4_ = 0;
    auVar51._0_12_ = auVar74;
    fVar70 = *(float *)(pauVar20[1] + 4);
    fVar71 = *(float *)(pauVar20[1] + 8);
    fVar72 = *(float *)pauVar20[2];
    uVar5 = *(ushort *)((long)param_1 + 0x1e);
  }
  else {
    FUN_001637d0(&local_50,param_1[1]);
    auVar51._8_8_ = uStack_48;
    auVar51._0_8_ = local_50;
    auVar74 = auVar51._0_12_;
    fVar72 = (float)uStack_38;
    fVar73 = (float)((ulong)uStack_38 >> 0x20);
    fVar70 = (float)uStack_40;
    fVar71 = (float)((ulong)uStack_40 >> 0x20);
    uVar5 = *(ushort *)((long)param_1 + 0x1e);
  }
  if ((ulong)uVar5 == 0) {
    fVar40 = 0.0;
    fVar33 = 0.0;
    fVar43 = 0.0;
    fVar30 = 0.0;
    sVar6 = (short)param_1[2];
  }
  else {
    uVar23 = param_1[4];
    fVar32 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar45 = 0.0;
    fVar43 = 0.0;
    fVar44 = 0.0;
    fVar35 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar42 = 0.0;
    fVar40 = 0.0;
    fVar41 = 0.0;
    uVar24 = uVar23;
    do {
      bVar3 = *(byte *)(uVar24 + 1);
      bVar4 = *(byte *)(uVar24 + 2);
      lVar22 = uVar24 + 0x20 + ((ulong)((uint)bVar3 * 4 + 0xc) & 0x7f0);
      uVar2 = lVar22 + (ulong)bVar4 * 0x80;
      if ((ulong)bVar4 == 0) {
        auVar59 = ZEXT816(0);
        auVar54 = ZEXT816(0);
        auVar58 = ZEXT816(0);
        auVar56 = ZEXT816(0);
      }
      else {
        uVar7 = 0;
        uVar25 = (uint)bVar4;
        if (bVar3 != 0) {
          uVar7 = uVar25 / bVar3;
        }
        fVar46 = *(float *)(uVar24 + 4);
        auVar56 = ZEXT816(0);
        auVar58 = ZEXT816(0);
        auVar54 = ZEXT816(0);
        auVar59 = ZEXT816(0);
        uVar26 = 0;
        uVar27 = 0;
        do {
          if (bVar3 <= uVar25) {
            uVar28 = 0;
            do {
              uVar1 = uVar26 + uVar28;
              uVar28 = uVar28 + 1;
              pfVar19 = (float *)(lVar22 + (ulong)uVar1 * 0x80);
              Hint_Prefetch(lVar22 + (ulong)(uVar1 + 1) * 0x80,0,0,0);
              fVar48 = *pfVar19;
              fVar47 = pfVar19[1];
              fVar50 = pfVar19[2];
              fVar57 = pfVar19[3];
              fVar60 = fVar46 * *(float *)(uVar24 + 0x20 + uVar27 * 4);
              auVar55._0_4_ =
                   (fVar66 * fVar48 + fVar62 * pfVar19[4]) -
                   (auVar51._0_4_ * fVar48 + fVar70 * pfVar19[8]);
              auVar55._4_4_ =
                   (fVar67 * fVar47 + fVar63 * pfVar19[5]) -
                   (auVar51._4_4_ * fVar47 + fVar71 * pfVar19[9]);
              auVar55._8_4_ =
                   (fVar68 * fVar50 + fVar64 * pfVar19[6]) -
                   (auVar51._8_4_ * fVar50 + fVar72 * pfVar19[10]);
              auVar55._12_4_ = (fVar69 * 0.0 + fVar65 * 0.0) - (auVar51._12_4_ * 0.0 + fVar73 * 0.0)
              ;
              auVar61 = NEON_ext(auVar55,auVar55,8,1);
              fVar29 = auVar61._0_4_ + auVar61._4_4_;
              uVar52 = NEON_fmin(CONCAT44(fVar57 - (pfVar19[0xc] +
                                                   auVar55._0_4_ + auVar55._4_4_ + fVar29) *
                                                   pfVar19[7],
                                          fVar57 - (pfVar19[0xc] +
                                                   auVar55._0_4_ + auVar55._4_4_ + fVar29) *
                                                   pfVar19[7]),CONCAT44(fVar60,fVar60),4);
              uVar52 = NEON_fmax(uVar52,CONCAT44(-fVar60,-fVar60),4);
              fVar57 = (float)uVar52 - fVar57;
              pfVar19[2] = fVar50;
              pfVar19[3] = (float)((ulong)uVar52 >> 0x20);
              *pfVar19 = fVar48;
              pfVar19[1] = fVar47;
              fVar66 = fVar66 + pfVar19[0x10] * fVar57;
              fVar67 = fVar67 + pfVar19[0x11] * fVar57;
              fVar68 = fVar68 + pfVar19[0x12] * fVar57;
              fVar69 = fVar69 + pfVar19[0x13] * fVar57;
              auVar49._4_4_ = fVar67;
              auVar49._0_4_ = fVar66;
              auVar49._8_4_ = fVar68;
              auVar49._12_4_ = fVar69;
              auVar53._4_4_ = fVar67;
              auVar53._0_4_ = fVar66;
              auVar53._8_4_ = fVar68;
              auVar53._12_4_ = fVar69;
              auVar49 = NEON_ext(auVar49,auVar53,8,1);
              fVar62 = fVar62 + pfVar19[0x14] * fVar57;
              fVar63 = fVar63 + pfVar19[0x15] * fVar57;
              fVar64 = fVar64 + pfVar19[0x16] * fVar57;
              fVar65 = fVar65 + pfVar19[0x17] * fVar57;
              auVar75._0_8_ =
                   CONCAT44(auVar51._4_4_ +
                            (float)((ulong)*(undefined8 *)(pfVar19 + 0x18) >> 0x20) * fVar57,
                            auVar51._0_4_ + (float)*(undefined8 *)(pfVar19 + 0x18) * fVar57);
              auVar75._8_4_ = auVar51._8_4_ + (float)*(undefined8 *)(pfVar19 + 0x1a) * fVar57;
              auVar75._12_4_ =
                   auVar51._12_4_ + (float)((ulong)*(undefined8 *)(pfVar19 + 0x1a) >> 0x20) * fVar57
              ;
              auVar53 = NEON_ext(auVar75,auVar75,8,1);
              fVar70 = fVar70 + (float)*(undefined8 *)(pfVar19 + 0x1c) * fVar57;
              fVar71 = fVar71 + (float)((ulong)*(undefined8 *)(pfVar19 + 0x1c) >> 0x20) * fVar57;
              fVar72 = fVar72 + (float)*(undefined8 *)(pfVar19 + 0x1e) * fVar57;
              fVar73 = fVar73 + (float)((ulong)*(undefined8 *)(pfVar19 + 0x1e) >> 0x20) * fVar57;
              auVar39._0_8_ =
                   CONCAT44(auVar56._4_4_ + fVar47 * fVar57,auVar56._0_4_ + fVar48 * fVar57);
              auVar39._8_4_ = auVar56._8_4_ + fVar50 * fVar57;
              auVar39._12_4_ = auVar56._12_4_ + fVar57 * 0.0;
              auVar56 = NEON_ext(auVar39,auVar39,8,1);
              auVar38._0_8_ =
                   CONCAT44(auVar54._4_4_ + pfVar19[5] * fVar57,auVar54._0_4_ + pfVar19[4] * fVar57)
              ;
              auVar38._8_4_ = auVar54._8_4_ + pfVar19[6] * fVar57;
              auVar38._12_4_ = auVar54._12_4_ + fVar57 * 0.0;
              auVar17._4_4_ = fVar71;
              auVar17._0_4_ = fVar70;
              auVar17._8_4_ = fVar72;
              auVar17._12_4_ = fVar73;
              auVar18._4_4_ = fVar71;
              auVar18._0_4_ = fVar70;
              auVar18._8_4_ = fVar72;
              auVar18._12_4_ = fVar73;
              auVar54 = NEON_ext(auVar17,auVar18,8,1);
              auVar37._0_8_ =
                   CONCAT44(auVar58._4_4_ + fVar47 * fVar57,auVar58._0_4_ + fVar48 * fVar57);
              auVar37._8_4_ = auVar58._8_4_ + fVar50 * fVar57;
              auVar37._12_4_ = auVar58._12_4_ + fVar57 * 0.0;
              auVar58 = NEON_ext(auVar38,auVar38,8,1);
              auVar36._0_8_ =
                   CONCAT44(auVar59._4_4_ + pfVar19[9] * fVar57,auVar59._0_4_ + pfVar19[8] * fVar57)
              ;
              auVar36._8_4_ = auVar59._8_4_ + pfVar19[10] * fVar57;
              auVar36._12_4_ = auVar59._12_4_ + fVar57 * 0.0;
              auVar61._4_4_ = fVar63;
              auVar61._0_4_ = fVar62;
              auVar61._8_4_ = fVar64;
              auVar61._12_4_ = fVar65;
              auVar16._4_4_ = fVar63;
              auVar16._0_4_ = fVar62;
              auVar16._8_4_ = fVar64;
              auVar16._12_4_ = fVar65;
              auVar51 = NEON_ext(auVar61,auVar16,8,1);
              auVar59 = NEON_ext(auVar37,auVar37,8,1);
              auVar61 = NEON_ext(auVar36,auVar36,8,1);
              fVar68 = auVar49._0_4_;
              fVar64 = auVar51._0_4_;
              fVar72 = auVar54._0_4_;
              fVar69 = 0.0;
              fVar65 = 0.0;
              auVar51._8_4_ = auVar53._0_4_;
              auVar51._0_8_ = auVar75._0_8_;
              auVar51._12_4_ = 0;
              fVar73 = 0.0;
              auVar56._8_4_ = auVar56._0_4_;
              auVar56._0_8_ = auVar39._0_8_;
              auVar56._12_4_ = 0;
              auVar54._8_4_ = auVar58._0_4_;
              auVar54._0_8_ = auVar38._0_8_;
              auVar54._12_4_ = 0;
              auVar58._8_4_ = auVar59._0_4_;
              auVar58._0_8_ = auVar37._0_8_;
              auVar58._12_4_ = 0;
              auVar59._8_4_ = auVar61._0_4_;
              auVar59._0_8_ = auVar36._0_8_;
              auVar59._12_4_ = 0;
            } while (uVar28 < uVar7);
            uVar26 = uVar26 + uVar28;
          }
          uVar27 = (ulong)((int)uVar27 + 1);
        } while (uVar26 < uVar25);
      }
      auVar74 = auVar51._0_12_;
      fVar46 = *(float *)(uVar24 + 8);
      fVar48 = *(float *)(uVar24 + 0xc);
      fVar47 = *(float *)(uVar24 + 0x10);
      fVar50 = *(float *)(uVar24 + 0x14);
      fVar30 = fVar30 + auVar56._0_4_ * fVar46;
      fVar31 = fVar31 + auVar56._4_4_ * fVar46;
      fVar32 = fVar32 + auVar56._8_4_ * fVar46;
      fVar46 = auVar56._12_4_ * fVar46 + 0.0;
      fVar43 = fVar43 - auVar58._0_4_ * fVar48;
      fVar44 = fVar44 - auVar58._4_4_ * fVar48;
      fVar45 = fVar45 - auVar58._8_4_ * fVar48;
      fVar48 = 0.0 - auVar58._12_4_ * fVar48;
      auVar14._4_4_ = fVar44;
      auVar14._0_4_ = fVar43;
      auVar14._8_4_ = fVar45;
      auVar14._12_4_ = fVar48;
      auVar15._4_4_ = fVar44;
      auVar15._0_4_ = fVar43;
      auVar15._8_4_ = fVar45;
      auVar15._12_4_ = fVar48;
      auVar58 = NEON_ext(auVar14,auVar15,8,1);
      fVar40 = fVar40 - auVar59._0_4_ * fVar50;
      fVar41 = fVar41 - auVar59._4_4_ * fVar50;
      fVar42 = fVar42 - auVar59._8_4_ * fVar50;
      fVar45 = 0.0 - auVar59._12_4_ * fVar50;
      auVar12._4_4_ = fVar41;
      auVar12._0_4_ = fVar40;
      auVar12._8_4_ = fVar42;
      auVar12._12_4_ = fVar45;
      auVar13._4_4_ = fVar41;
      auVar13._0_4_ = fVar40;
      auVar13._8_4_ = fVar42;
      auVar13._12_4_ = fVar45;
      auVar59 = NEON_ext(auVar12,auVar13,8,1);
      fVar33 = fVar33 + auVar54._0_4_ * fVar47;
      fVar34 = fVar34 + auVar54._4_4_ * fVar47;
      fVar35 = fVar35 + auVar54._8_4_ * fVar47;
      fVar42 = auVar54._12_4_ * fVar47 + 0.0;
      auVar8._4_4_ = fVar31;
      auVar8._0_4_ = fVar30;
      auVar8._8_4_ = fVar32;
      auVar8._12_4_ = fVar46;
      auVar9._4_4_ = fVar31;
      auVar9._0_4_ = fVar30;
      auVar9._8_4_ = fVar32;
      auVar9._12_4_ = fVar46;
      auVar54 = NEON_ext(auVar8,auVar9,8,1);
      fVar32 = auVar54._0_4_;
      auVar10._4_4_ = fVar34;
      auVar10._0_4_ = fVar33;
      auVar10._8_4_ = fVar35;
      auVar10._12_4_ = fVar42;
      auVar11._4_4_ = fVar34;
      auVar11._0_4_ = fVar33;
      auVar11._8_4_ = fVar35;
      auVar11._12_4_ = fVar42;
      auVar54 = NEON_ext(auVar10,auVar11,8,1);
      fVar45 = auVar58._0_4_;
      fVar42 = auVar59._0_4_;
      fVar35 = auVar54._0_4_;
      uVar24 = uVar2;
    } while (uVar2 < uVar23 + (ulong)uVar5 * 0x10);
    sVar6 = (short)param_1[2];
  }
  if (sVar6 == -1) {
    puVar21 = (undefined8 *)*param_1;
    *puVar21 = CONCAT44(fVar67,fVar66);
    *(float *)(puVar21 + 1) = fVar68;
    lVar22 = *param_1;
    *(ulong *)(lVar22 + 0x10) = CONCAT44(fVar63,fVar62);
    *(float *)(lVar22 + 0x18) = fVar64;
    sVar6 = *(short *)((long)param_1 + 0x12);
  }
  else {
    FUN_00163630(fVar30,fVar33,*param_1);
    sVar6 = *(short *)((long)param_1 + 0x12);
  }
  if (sVar6 == -1) {
    puVar21 = (undefined8 *)param_1[1];
    *puVar21 = auVar74._0_8_;
    *(int *)(puVar21 + 1) = auVar74._8_4_;
    lVar22 = param_1[1];
    *(ulong *)(lVar22 + 0x10) = CONCAT44(fVar71,fVar70);
    *(float *)(lVar22 + 0x18) = fVar72;
  }
  else {
    FUN_00163630(fVar43,fVar40,param_1[1]);
  }
  return;
}


