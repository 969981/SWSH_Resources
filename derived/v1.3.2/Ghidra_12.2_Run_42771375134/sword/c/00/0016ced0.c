/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0016ced0; name: FUN_0016ced0
 */


void FUN_0016ced0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float *pfVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  undefined4 *puVar30;
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  
  pfVar3 = (float *)*param_1;
  pfVar4 = (float *)param_1[1];
  fVar31 = *pfVar3;
  fVar32 = pfVar3[1];
  fVar33 = pfVar3[2];
  fVar34 = *pfVar4;
  fVar37 = pfVar3[4];
  fVar38 = pfVar3[5];
  fVar35 = pfVar4[1];
  fVar41 = pfVar4[4];
  fVar36 = pfVar4[2];
  fVar42 = pfVar4[5];
  fVar39 = pfVar3[6];
  uVar29 = param_1[4];
  fVar43 = pfVar4[6];
  uVar25 = (ulong)*(ushort *)(uVar29 + 2);
  if (uVar25 != 0) {
    uVar2 = uVar29 + uVar25;
    while( true ) {
      uVar28 = (ulong)*(byte *)(uVar29 + 1);
      lVar27 = uVar29 + uVar28 * 0x30;
      Hint_Prefetch(uVar29 + uVar25 + 0x20,0,0,0);
      uVar1 = lVar27 + 0x30;
      if (uVar28 != 0) {
        fVar47 = *(float *)(uVar29 + 8);
        fVar48 = *(float *)(uVar29 + 0xc);
        fVar46 = *(float *)(uVar29 + 0x18);
        fVar5 = *(float *)(uVar29 + 4);
        fVar44 = (float)*(undefined8 *)(uVar29 + 0x10);
        fVar45 = (float)((ulong)*(undefined8 *)(uVar29 + 0x10) >> 0x20);
        puVar30 = (undefined4 *)(uVar29 + 0x5c);
        fVar6 = *(float *)(uVar29 + 0x1c);
        pfVar26 = (float *)(uVar29 + uVar25 + 0x20);
        do {
          Hint_Prefetch(puVar30 + 0x15,0,0,0);
          fVar40 = (float)puVar30[-0xb];
          fVar18 = (float)puVar30[-10];
          fVar19 = (float)puVar30[-9];
          fVar20 = (float)puVar30[-8];
          fVar21 = (float)puVar30[-7];
          fVar22 = (float)puVar30[-6];
          fVar23 = (float)puVar30[-5];
          fVar24 = (float)puVar30[-4];
          uVar28 = uVar28 - 1;
          fVar49 = *pfVar26;
          fVar50 = (fVar44 * fVar31 + fVar37 * fVar40) - (fVar44 * fVar34 + fVar41 * fVar21);
          fVar51 = (fVar45 * fVar32 + fVar38 * fVar18) - (fVar45 * fVar35 + fVar42 * fVar22);
          fVar52 = (fVar46 * fVar33 + fVar39 * fVar19) - (fVar46 * fVar36 + fVar43 * fVar23);
          fVar53 = (fVar20 * 0.0 + 0.0) - (fVar24 * 0.0 + 0.0);
          auVar15._4_4_ = fVar51;
          auVar15._0_4_ = fVar50;
          auVar15._8_4_ = fVar52;
          auVar15._12_4_ = fVar53;
          auVar16._4_4_ = fVar51;
          auVar16._0_4_ = fVar50;
          auVar16._8_4_ = fVar52;
          auVar16._12_4_ = fVar53;
          auVar54 = NEON_ext(auVar15,auVar16,8,1);
          fVar52 = auVar54._0_4_ + auVar54._4_4_;
          uVar17 = NEON_fmax(CONCAT44((float)puVar30[-2] -
                                      (fVar50 + fVar51 + fVar52) * (float)puVar30[-3],
                                      (float)puVar30[-2] -
                                      (fVar50 + fVar51 + fVar52) * (float)puVar30[-3]),
                             CONCAT44(-fVar49,-fVar49),4);
          uVar7 = *puVar30;
          puVar30 = puVar30 + 0xc;
          uVar17 = NEON_fmin(CONCAT44(fVar49 + (float)((ulong)uVar17 >> 0x20),fVar49 + (float)uVar17
                                     ),CONCAT44(uVar7,uVar7),4);
          fVar49 = (float)uVar17 - fVar49;
          *pfVar26 = (float)uVar17;
          fVar31 = fVar31 + fVar44 * fVar47 * fVar49;
          fVar32 = fVar32 + fVar45 * fVar47 * fVar49;
          fVar33 = fVar33 + fVar46 * fVar47 * fVar49;
          fVar52 = fVar49 * 0.0 + 0.0;
          auVar54._4_4_ = fVar32;
          auVar54._0_4_ = fVar31;
          auVar54._8_4_ = fVar33;
          auVar54._12_4_ = fVar52;
          auVar8._4_4_ = fVar32;
          auVar8._0_4_ = fVar31;
          auVar8._8_4_ = fVar33;
          auVar8._12_4_ = fVar52;
          auVar54 = NEON_ext(auVar54,auVar8,8,1);
          fVar33 = auVar54._0_4_;
          fVar34 = fVar34 - fVar44 * fVar48 * fVar49;
          fVar35 = fVar35 - fVar45 * fVar48 * fVar49;
          fVar36 = fVar36 - fVar46 * fVar48 * fVar49;
          fVar52 = 0.0 - fVar49 * 0.0;
          auVar9._4_4_ = fVar35;
          auVar9._0_4_ = fVar34;
          auVar9._8_4_ = fVar36;
          auVar9._12_4_ = fVar52;
          auVar10._4_4_ = fVar35;
          auVar10._0_4_ = fVar34;
          auVar10._8_4_ = fVar36;
          auVar10._12_4_ = fVar52;
          auVar54 = NEON_ext(auVar9,auVar10,8,1);
          fVar36 = auVar54._0_4_;
          fVar52 = fVar5 * fVar49;
          fVar37 = fVar37 + fVar40 * fVar52;
          fVar38 = fVar38 + fVar18 * fVar52;
          fVar39 = fVar39 + fVar19 * fVar52;
          fVar40 = fVar20 * fVar52 + 0.0;
          auVar11._4_4_ = fVar38;
          auVar11._0_4_ = fVar37;
          auVar11._8_4_ = fVar39;
          auVar11._12_4_ = fVar40;
          auVar12._4_4_ = fVar38;
          auVar12._0_4_ = fVar37;
          auVar12._8_4_ = fVar39;
          auVar12._12_4_ = fVar40;
          auVar54 = NEON_ext(auVar11,auVar12,8,1);
          fVar39 = auVar54._0_4_;
          fVar49 = fVar6 * fVar49;
          fVar41 = fVar41 - fVar21 * fVar49;
          fVar42 = fVar42 - fVar22 * fVar49;
          fVar43 = fVar43 - fVar23 * fVar49;
          fVar49 = 0.0 - fVar24 * fVar49;
          auVar13._4_4_ = fVar42;
          auVar13._0_4_ = fVar41;
          auVar13._8_4_ = fVar43;
          auVar13._12_4_ = fVar49;
          auVar14._4_4_ = fVar42;
          auVar14._0_4_ = fVar41;
          auVar14._8_4_ = fVar43;
          auVar14._12_4_ = fVar49;
          auVar54 = NEON_ext(auVar13,auVar14,8,1);
          fVar43 = auVar54._0_4_;
          pfVar26 = pfVar26 + 1;
        } while (uVar28 != 0);
      }
      if (uVar2 <= uVar1) break;
      uVar25 = (ulong)*(ushort *)(lVar27 + 0x32);
      uVar29 = uVar1;
    }
  }
  *(ulong *)pfVar3 = CONCAT44(fVar32,fVar31);
  pfVar3[2] = fVar33;
  *(ulong *)pfVar4 = CONCAT44(fVar35,fVar34);
  pfVar4[2] = fVar36;
  *(ulong *)(pfVar3 + 4) = CONCAT44(fVar38,fVar37);
  pfVar3[6] = fVar39;
  *(ulong *)(pfVar4 + 4) = CONCAT44(fVar42,fVar41);
  pfVar4[6] = fVar43;
  return;
}


