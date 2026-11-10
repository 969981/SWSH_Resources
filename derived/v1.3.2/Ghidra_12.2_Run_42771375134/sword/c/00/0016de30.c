/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016de30; name: FUN_0016de30
 */


void FUN_0016de30(long *param_1)

{
  ulong uVar1;
  long lVar2;
  short sVar3;
  ushort uVar4;
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
  undefined8 uVar21;
  float *pfVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
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
  undefined1 auVar47 [16];
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
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
  float fVar74;
  float fVar75;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((short)param_1[2] == -1) {
    fVar57 = 0.0;
    pfVar22 = (float *)*param_1;
    fVar61 = 0.0;
    fVar58 = *pfVar22;
    fVar59 = pfVar22[1];
    fVar60 = pfVar22[2];
    fVar54 = pfVar22[4];
    fVar55 = pfVar22[5];
    fVar56 = pfVar22[6];
    sVar3 = *(short *)((long)param_1 + 0x12);
  }
  else {
    FUN_001637d0(&local_40,*param_1);
    fVar60 = (float)uStack_38;
    fVar61 = (float)((ulong)uStack_38 >> 0x20);
    fVar58 = (float)local_40;
    fVar59 = (float)((ulong)local_40 >> 0x20);
    fVar56 = (float)uStack_28;
    fVar57 = (float)((ulong)uStack_28 >> 0x20);
    fVar54 = (float)uStack_30;
    fVar55 = (float)((ulong)uStack_30 >> 0x20);
    sVar3 = *(short *)((long)param_1 + 0x12);
  }
  if (sVar3 == -1) {
    fVar65 = 0.0;
    pfVar22 = (float *)param_1[1];
    fVar69 = 0.0;
    fVar66 = *pfVar22;
    fVar67 = pfVar22[1];
    fVar68 = pfVar22[2];
    fVar62 = pfVar22[4];
    fVar63 = pfVar22[5];
    fVar64 = pfVar22[6];
    uVar25 = param_1[4];
    uVar4 = *(ushort *)(uVar25 + 2);
  }
  else {
    FUN_001637d0(&local_40,param_1[1]);
    fVar68 = (float)uStack_38;
    fVar69 = (float)((ulong)uStack_38 >> 0x20);
    fVar66 = (float)local_40;
    fVar67 = (float)((ulong)local_40 >> 0x20);
    fVar64 = (float)uStack_28;
    fVar65 = (float)((ulong)uStack_28 >> 0x20);
    fVar62 = (float)uStack_30;
    fVar63 = (float)((ulong)uStack_30 >> 0x20);
    uVar25 = param_1[4];
    uVar4 = *(ushort *)(uVar25 + 2);
  }
  uVar27 = (ulong)uVar4;
  if (uVar27 == 0) {
    fVar70 = 0.0;
    fVar33 = 0.0;
    fVar73 = 0.0;
    fVar30 = 0.0;
    sVar3 = (short)param_1[2];
  }
  else {
    fVar32 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar75 = 0.0;
    fVar73 = 0.0;
    fVar74 = 0.0;
    fVar35 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar72 = 0.0;
    fVar70 = 0.0;
    fVar71 = 0.0;
    uVar1 = uVar25 + uVar27;
    while( true ) {
      uVar28 = (ulong)*(byte *)(uVar25 + 1);
      uVar26 = uVar25 + 0x30 + uVar28 * 0x70;
      Hint_Prefetch(uVar25 + uVar27 + 0x20,0,0,0);
      Hint_Prefetch(uVar25 + 0x30,0,0,0);
      if (uVar28 == 0) {
        auVar51 = ZEXT816(0);
        auVar52 = ZEXT816(0);
        auVar49 = ZEXT816(0);
        auVar47 = ZEXT816(0);
      }
      else {
        auVar51 = ZEXT816(0);
        uVar21 = *(undefined8 *)(uVar25 + 0x10);
        fVar42 = *(float *)(uVar25 + 0x18);
        auVar52 = ZEXT816(0);
        auVar49 = ZEXT816(0);
        auVar47 = ZEXT816(0);
        lVar29 = 0;
        lVar24 = uVar27 + 0x20;
        do {
          lVar2 = uVar25 + lVar29;
          lVar29 = lVar29 + 0x70;
          Hint_Prefetch(lVar2 + 0xa0,0,0,0);
          fVar40 = (float)uVar21;
          fVar41 = (float)((ulong)uVar21 >> 0x20);
          uVar28 = uVar28 - 1;
          fVar43 = (fVar40 * fVar58 + fVar54 * *(float *)(lVar2 + 0x30)) -
                   (fVar40 * fVar66 + fVar62 * *(float *)(lVar2 + 0x40));
          fVar44 = (fVar41 * fVar59 + fVar55 * *(float *)(lVar2 + 0x34)) -
                   (fVar41 * fVar67 + fVar63 * *(float *)(lVar2 + 0x44));
          fVar45 = (fVar42 * fVar60 + fVar56 * *(float *)(lVar2 + 0x38)) -
                   (fVar42 * fVar68 + fVar64 * *(float *)(lVar2 + 0x48));
          fVar46 = (fVar61 * 0.0 + fVar57 * *(float *)(lVar2 + 0x3c)) -
                   (fVar69 * 0.0 + fVar65 * *(float *)(lVar2 + 0x4c));
          auVar50._4_4_ = fVar44;
          auVar50._0_4_ = fVar43;
          auVar50._8_4_ = fVar45;
          auVar50._12_4_ = fVar46;
          auVar53._4_4_ = fVar44;
          auVar53._0_4_ = fVar43;
          auVar53._8_4_ = fVar45;
          auVar53._12_4_ = fVar46;
          auVar50 = NEON_ext(auVar50,auVar53,8,1);
          fVar46 = auVar50._0_4_ + auVar50._4_4_;
          fVar45 = *(float *)(uVar25 + lVar24);
          uVar48 = NEON_fmax(CONCAT44(*(float *)(lVar2 + 0x54) -
                                      (fVar43 + fVar44 + fVar46) * *(float *)(lVar2 + 0x50),
                                      *(float *)(lVar2 + 0x54) -
                                      (fVar43 + fVar44 + fVar46) * *(float *)(lVar2 + 0x50)),
                             CONCAT44(-fVar45,-fVar45),4);
          fVar46 = (float)uVar48;
          fVar58 = fVar58 + *(float *)(lVar2 + 0x60) * fVar46;
          fVar59 = fVar59 + *(float *)(lVar2 + 100) * fVar46;
          fVar60 = fVar60 + *(float *)(lVar2 + 0x68) * fVar46;
          fVar61 = fVar61 + *(float *)(lVar2 + 0x6c) * fVar46;
          auVar38._0_8_ =
               CONCAT44(auVar49._4_4_ + *(float *)(lVar2 + 0x34) * fVar46,
                        auVar49._0_4_ + *(float *)(lVar2 + 0x30) * fVar46);
          auVar38._8_4_ = auVar49._8_4_ + *(float *)(lVar2 + 0x38) * fVar46;
          auVar38._12_4_ = auVar49._12_4_ + *(float *)(lVar2 + 0x3c) * fVar46;
          auVar11._4_4_ = fVar59;
          auVar11._0_4_ = fVar58;
          auVar11._8_4_ = fVar60;
          auVar11._12_4_ = fVar61;
          auVar12._4_4_ = fVar59;
          auVar12._0_4_ = fVar58;
          auVar12._8_4_ = fVar60;
          auVar12._12_4_ = fVar61;
          auVar49 = NEON_ext(auVar11,auVar12,8,1);
          fVar54 = fVar54 + *(float *)(lVar2 + 0x70) * fVar46;
          fVar55 = fVar55 + *(float *)(lVar2 + 0x74) * fVar46;
          fVar56 = fVar56 + *(float *)(lVar2 + 0x78) * fVar46;
          fVar57 = fVar57 + *(float *)(lVar2 + 0x7c) * fVar46;
          auVar39._0_8_ = CONCAT44(auVar51._4_4_ + fVar41 * fVar46,auVar51._0_4_ + fVar40 * fVar46);
          auVar39._8_4_ = auVar51._8_4_ + fVar42 * fVar46;
          auVar39._12_4_ = auVar51._12_4_ + fVar46 * 0.0;
          fVar60 = auVar49._0_4_;
          fVar61 = 0.0;
          auVar49 = NEON_ext(auVar39,auVar39,8,1);
          fVar66 = fVar66 + *(float *)(lVar2 + 0x80) * fVar46;
          fVar67 = fVar67 + *(float *)(lVar2 + 0x84) * fVar46;
          fVar68 = fVar68 + *(float *)(lVar2 + 0x88) * fVar46;
          fVar69 = fVar69 + *(float *)(lVar2 + 0x8c) * fVar46;
          auVar9._4_4_ = fVar55;
          auVar9._0_4_ = fVar54;
          auVar9._8_4_ = fVar56;
          auVar9._12_4_ = fVar57;
          auVar10._4_4_ = fVar55;
          auVar10._0_4_ = fVar54;
          auVar10._8_4_ = fVar56;
          auVar10._12_4_ = fVar57;
          auVar51 = NEON_ext(auVar9,auVar10,8,1);
          fVar56 = auVar51._0_4_;
          fVar62 = fVar62 + *(float *)(lVar2 + 0x90) * fVar46;
          fVar63 = fVar63 + *(float *)(lVar2 + 0x94) * fVar46;
          fVar64 = fVar64 + *(float *)(lVar2 + 0x98) * fVar46;
          fVar65 = fVar65 + *(float *)(lVar2 + 0x9c) * fVar46;
          auVar13._4_4_ = fVar63;
          auVar13._0_4_ = fVar62;
          auVar13._8_4_ = fVar64;
          auVar13._12_4_ = fVar65;
          auVar14._4_4_ = fVar63;
          auVar14._0_4_ = fVar62;
          auVar14._8_4_ = fVar64;
          auVar14._12_4_ = fVar65;
          auVar53 = NEON_ext(auVar13,auVar14,8,1);
          auVar37._0_8_ = CONCAT44(auVar52._4_4_ + fVar41 * fVar46,auVar52._0_4_ + fVar40 * fVar46);
          auVar37._8_4_ = auVar52._8_4_ + fVar42 * fVar46;
          auVar37._12_4_ = auVar52._12_4_ + fVar46 * 0.0;
          auVar15._4_4_ = fVar67;
          auVar15._0_4_ = fVar66;
          auVar15._8_4_ = fVar68;
          auVar15._12_4_ = fVar69;
          auVar16._4_4_ = fVar67;
          auVar16._0_4_ = fVar66;
          auVar16._8_4_ = fVar68;
          auVar16._12_4_ = fVar69;
          auVar52 = NEON_ext(auVar15,auVar16,8,1);
          auVar36._0_8_ =
               CONCAT44(auVar47._4_4_ + *(float *)(lVar2 + 0x44) * fVar46,
                        auVar47._0_4_ + *(float *)(lVar2 + 0x40) * fVar46);
          auVar36._8_4_ = auVar47._8_4_ + *(float *)(lVar2 + 0x48) * fVar46;
          auVar36._12_4_ = auVar47._12_4_ + *(float *)(lVar2 + 0x4c) * fVar46;
          auVar47 = NEON_ext(auVar36,auVar36,8,1);
          fVar57 = 0.0;
          auVar50 = NEON_ext(auVar38,auVar38,8,1);
          fVar68 = auVar52._0_4_;
          auVar51._8_4_ = auVar49._0_4_;
          auVar51._0_8_ = auVar39._0_8_;
          auVar51._12_4_ = 0;
          auVar52 = NEON_ext(auVar37,auVar37,8,1);
          fVar64 = auVar53._0_4_;
          fVar69 = 0.0;
          fVar65 = 0.0;
          auVar52._8_4_ = auVar52._0_4_;
          auVar52._0_8_ = auVar37._0_8_;
          auVar52._12_4_ = 0;
          auVar49._8_4_ = auVar50._0_4_;
          auVar49._0_8_ = auVar38._0_8_;
          auVar49._12_4_ = 0;
          auVar47._8_4_ = auVar47._0_4_;
          auVar47._0_8_ = auVar36._0_8_;
          auVar47._12_4_ = 0;
          *(float *)(uVar25 + lVar24) = fVar45 + fVar46;
          lVar24 = lVar24 + 4;
        } while (uVar28 != 0);
      }
      fVar42 = *(float *)(uVar25 + 8);
      fVar45 = *(float *)(uVar25 + 4);
      fVar30 = fVar30 + auVar51._0_4_ * fVar42;
      fVar31 = fVar31 + auVar51._4_4_ * fVar42;
      fVar32 = fVar32 + auVar51._8_4_ * fVar42;
      fVar42 = auVar51._12_4_ * fVar42 + 0.0;
      fVar33 = fVar33 + auVar49._0_4_ * fVar45;
      fVar34 = fVar34 + auVar49._4_4_ * fVar45;
      fVar35 = fVar35 + auVar49._8_4_ * fVar45;
      fVar45 = auVar49._12_4_ * fVar45 + 0.0;
      auVar5._4_4_ = fVar31;
      auVar5._0_4_ = fVar30;
      auVar5._8_4_ = fVar32;
      auVar5._12_4_ = fVar42;
      auVar6._4_4_ = fVar31;
      auVar6._0_4_ = fVar30;
      auVar6._8_4_ = fVar32;
      auVar6._12_4_ = fVar42;
      auVar49 = NEON_ext(auVar5,auVar6,8,1);
      fVar32 = auVar49._0_4_;
      auVar7._4_4_ = fVar34;
      auVar7._0_4_ = fVar33;
      auVar7._8_4_ = fVar35;
      auVar7._12_4_ = fVar45;
      auVar8._4_4_ = fVar34;
      auVar8._0_4_ = fVar33;
      auVar8._8_4_ = fVar35;
      auVar8._12_4_ = fVar45;
      auVar49 = NEON_ext(auVar7,auVar8,8,1);
      fVar35 = auVar49._0_4_;
      fVar42 = *(float *)(uVar25 + 0xc);
      fVar73 = fVar73 - auVar52._0_4_ * fVar42;
      fVar74 = fVar74 - auVar52._4_4_ * fVar42;
      fVar75 = fVar75 - auVar52._8_4_ * fVar42;
      fVar42 = 0.0 - auVar52._12_4_ * fVar42;
      auVar19._4_4_ = fVar74;
      auVar19._0_4_ = fVar73;
      auVar19._8_4_ = fVar75;
      auVar19._12_4_ = fVar42;
      auVar20._4_4_ = fVar74;
      auVar20._0_4_ = fVar73;
      auVar20._8_4_ = fVar75;
      auVar20._12_4_ = fVar42;
      auVar52 = NEON_ext(auVar19,auVar20,8,1);
      fVar75 = auVar52._0_4_;
      fVar42 = *(float *)(uVar25 + 0x1c);
      fVar70 = fVar70 - auVar47._0_4_ * fVar42;
      fVar71 = fVar71 - auVar47._4_4_ * fVar42;
      fVar72 = fVar72 - auVar47._8_4_ * fVar42;
      fVar42 = 0.0 - auVar47._12_4_ * fVar42;
      auVar17._4_4_ = fVar71;
      auVar17._0_4_ = fVar70;
      auVar17._8_4_ = fVar72;
      auVar17._12_4_ = fVar42;
      auVar18._4_4_ = fVar71;
      auVar18._0_4_ = fVar70;
      auVar18._8_4_ = fVar72;
      auVar18._12_4_ = fVar42;
      auVar47 = NEON_ext(auVar17,auVar18,8,1);
      fVar72 = auVar47._0_4_;
      if (uVar1 <= uVar26) break;
      uVar27 = (ulong)*(ushort *)(uVar26 + 2);
      uVar25 = uVar26;
    }
    sVar3 = (short)param_1[2];
  }
  if (sVar3 == -1) {
    puVar23 = (undefined8 *)*param_1;
    *puVar23 = CONCAT44(fVar59,fVar58);
    *(float *)(puVar23 + 1) = fVar60;
    lVar24 = *param_1;
    *(ulong *)(lVar24 + 0x10) = CONCAT44(fVar55,fVar54);
    *(float *)(lVar24 + 0x18) = fVar56;
    sVar3 = *(short *)((long)param_1 + 0x12);
  }
  else {
    FUN_00163630(fVar30,fVar33,*param_1);
    sVar3 = *(short *)((long)param_1 + 0x12);
  }
  if (sVar3 == -1) {
    puVar23 = (undefined8 *)param_1[1];
    *puVar23 = CONCAT44(fVar67,fVar66);
    *(float *)(puVar23 + 1) = fVar68;
    lVar24 = param_1[1];
    *(ulong *)(lVar24 + 0x10) = CONCAT44(fVar63,fVar62);
    *(float *)(lVar24 + 0x18) = fVar64;
    return;
  }
  FUN_00163630(fVar73,fVar70,param_1[1]);
  return;
}


