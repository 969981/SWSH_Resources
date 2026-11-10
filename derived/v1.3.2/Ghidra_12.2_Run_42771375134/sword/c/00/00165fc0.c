/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00165fc0; name: FUN_00165fc0
 */


void FUN_00165fc0(undefined8 *param_1,char *param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  ushort uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  float *pfVar25;
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
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  byte bVar42;
  float fVar43;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined8 uVar44;
  int iVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  ulong uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  pfVar18 = (float *)*param_1;
  fVar26 = *pfVar18;
  fVar30 = pfVar18[4];
  fVar27 = pfVar18[1];
  fVar31 = pfVar18[5];
  fVar28 = pfVar18[2];
  uVar4 = *(ushort *)((long)param_1 + 0x1e);
  fVar32 = pfVar18[6];
  if ((ulong)uVar4 != 0) {
    uVar19 = param_1[4];
    uVar20 = uVar19;
    do {
      bVar42 = *(byte *)(uVar20 + 2);
      uVar22 = (ulong)bVar42;
      fVar33 = *(float *)(uVar20 + 0xc);
      fVar5 = *(float *)(uVar20 + 4);
      bVar45 = *(byte *)(uVar20 + 3);
      uVar21 = (ulong)bVar45;
      lVar23 = uVar22 * 0x30;
      uVar24 = (ulong)((uint)bVar42 * 4 + 0xc) & 0x7f0;
      pfVar2 = (float *)(uVar20 + lVar23 + 0x50);
      if (bVar42 == 0) {
        fVar36 = 0.0;
        fVar37 = 0.0;
        lVar1 = uVar21 * 0x40;
      }
      else {
        uVar38 = *(undefined8 *)(uVar20 + 0x28);
        fVar34 = (float)*(undefined8 *)(uVar20 + 0x20);
        fVar29 = (float)((ulong)*(undefined8 *)(uVar20 + 0x20) >> 0x20);
        fVar35 = (float)uVar38;
        fVar36 = 0.0;
        fVar37 = 0.0;
        pfVar17 = (float *)(uVar20 + 0x70);
        pfVar25 = pfVar2;
        do {
          Hint_Prefetch(pfVar17 + 0x18,0,0,0);
          fVar43 = pfVar17[-8];
          fVar13 = pfVar17[-7];
          fVar14 = pfVar17[-6];
          fVar15 = pfVar17[-5];
          pfVar3 = pfVar17 + 3;
          fVar40 = *pfVar25;
          fVar41 = *pfVar17;
          pfVar16 = pfVar17 + 1;
          uVar22 = uVar22 - 1;
          pfVar17 = pfVar17 + 0xc;
          fVar51 = fVar34 * fVar26 + fVar30 * fVar43;
          fVar52 = fVar29 * fVar27 + fVar31 * fVar13;
          fVar53 = fVar35 * fVar28 + fVar32 * fVar14;
          fVar54 = (float)((ulong)uVar38 >> 0x20) * 0.0 + fVar15 * 0.0;
          auVar11._4_4_ = fVar52;
          auVar11._0_4_ = fVar51;
          auVar11._8_4_ = fVar53;
          auVar11._12_4_ = fVar54;
          auVar12._4_4_ = fVar52;
          auVar12._0_4_ = fVar51;
          auVar12._8_4_ = fVar53;
          auVar12._12_4_ = fVar54;
          auVar56 = NEON_ext(auVar11,auVar12,8,1);
          fVar53 = auVar56._0_4_ + auVar56._4_4_;
          uVar44 = NEON_fmax(CONCAT44(*pfVar16 - fVar41 * (fVar51 + fVar52 + fVar53),
                                      *pfVar16 - fVar41 * (fVar51 + fVar52 + fVar53)),
                             CONCAT44(-fVar40,-fVar40),4);
          uVar44 = NEON_fmin(CONCAT44(fVar40 + (float)((ulong)uVar44 >> 0x20),fVar40 + (float)uVar44
                                     ),CONCAT44(*pfVar3,*pfVar3),4);
          fVar53 = (float)uVar44;
          fVar40 = fVar53 - fVar40;
          fVar36 = fVar36 + fVar53;
          fVar37 = fVar37 + (float)((ulong)uVar44 >> 0x20);
          fVar41 = fVar5 * fVar40;
          *pfVar25 = fVar53;
          fVar26 = fVar26 + fVar34 * fVar33 * fVar40;
          fVar27 = fVar27 + fVar29 * fVar33 * fVar40;
          fVar28 = fVar28 + fVar35 * fVar33 * fVar40;
          fVar40 = fVar40 * 0.0 + 0.0;
          auVar56._4_4_ = fVar27;
          auVar56._0_4_ = fVar26;
          auVar56._8_4_ = fVar28;
          auVar56._12_4_ = fVar40;
          auVar49._4_4_ = fVar27;
          auVar49._0_4_ = fVar26;
          auVar49._8_4_ = fVar28;
          auVar49._12_4_ = fVar40;
          auVar49 = NEON_ext(auVar56,auVar49,8,1);
          fVar30 = fVar30 + fVar43 * fVar41;
          fVar31 = fVar31 + fVar13 * fVar41;
          fVar32 = fVar32 + fVar14 * fVar41;
          fVar28 = fVar15 * fVar41 + 0.0;
          auVar57._4_4_ = fVar31;
          auVar57._0_4_ = fVar30;
          auVar57._8_4_ = fVar32;
          auVar57._12_4_ = fVar28;
          auVar8._4_4_ = fVar31;
          auVar8._0_4_ = fVar30;
          auVar8._8_4_ = fVar32;
          auVar8._12_4_ = fVar28;
          auVar56 = NEON_ext(auVar57,auVar8,8,1);
          fVar28 = auVar49._0_4_;
          fVar32 = auVar56._0_4_;
          pfVar25 = pfVar25 + 1;
        } while (uVar22 != 0);
        lVar1 = uVar21 * 0x40 + uVar24;
      }
      uVar22 = (long)pfVar2 + lVar1;
      if ((bVar45 != 0) && (*param_2 != '\0')) {
        uVar38 = *(undefined8 *)(uVar20 + 0x10);
        fVar29 = (float)((ulong)uVar38 >> 0x20);
        fVar34 = fVar36 * fVar29;
        fVar37 = fVar37 * fVar29;
        if (param_2[1] != '\0') {
          Hint_Prefetch(*(undefined8 *)(uVar20 + 0x38),0,0,0);
        }
        lVar23 = uVar20 + lVar23 + uVar24 + 0x70;
        auVar56 = ZEXT816(0);
        do {
          Hint_Prefetch(lVar23 + 0x60,0,0,0);
          fVar35 = *(float *)(lVar23 + -0x20);
          fVar29 = *(float *)(lVar23 + -4);
          fVar41 = (float)((ulong)*(undefined8 *)(lVar23 + -0x18) >> 0x20);
          uVar21 = uVar21 - 1;
          auVar50._0_4_ = fVar26 * fVar35 + fVar30 * *(float *)(lVar23 + -0x10);
          auVar50._4_4_ = fVar27 * *(float *)(lVar23 + -0x1c) + fVar31 * *(float *)(lVar23 + -0xc);
          auVar50._8_4_ = fVar28 * *(float *)(lVar23 + -0x18) + fVar32 * *(float *)(lVar23 + -8);
          auVar50._12_4_ = 0;
          auVar49 = NEON_ext(auVar50,auVar50,8,1);
          fVar40 = auVar49._0_4_ + auVar49._4_4_;
          fVar43 = (fVar41 - (*(float *)(lVar23 + 0xc) - *(float *)(lVar23 + 0x10)) * fVar29) -
                   (auVar50._0_4_ + auVar50._4_4_ + fVar40) * fVar29;
          uVar24 = CONCAT44((fVar41 - (*(float *)(lVar23 + 0xc) - *(float *)(lVar23 + 0x10)) *
                                      fVar29) - (auVar50._0_4_ + auVar50._4_4_ + fVar40) * fVar29,
                            fVar43);
          uVar44 = NEON_fmax(CONCAT44(-fVar37,-fVar34),uVar24,4);
          iVar48 = -(uint)(fVar36 * (float)uVar38 < ABS(fVar43));
          uVar55 = NEON_fmin(CONCAT44(fVar37,fVar34),uVar44,4);
          uVar24 = uVar24 ^ (uVar24 ^ uVar55) & CONCAT44(iVar48,iVar48);
          fVar41 = (float)uVar24 - fVar41;
          fVar40 = fVar5 * fVar41;
          fVar26 = fVar26 + fVar33 * fVar35 * fVar41;
          fVar27 = fVar27 + fVar33 * *(float *)(lVar23 + -0x1c) * fVar41;
          fVar28 = fVar28 + fVar33 * *(float *)(lVar23 + -0x18) * fVar41;
          fVar29 = fVar41 * 0.0 + 0.0;
          auVar6._4_4_ = fVar27;
          auVar6._0_4_ = fVar26;
          auVar6._8_4_ = fVar28;
          auVar6._12_4_ = fVar29;
          auVar7._4_4_ = fVar27;
          auVar7._0_4_ = fVar26;
          auVar7._8_4_ = fVar28;
          auVar7._12_4_ = fVar29;
          auVar57 = NEON_ext(auVar6,auVar7,8,1);
          fVar30 = fVar30 + *(float *)(lVar23 + -0x10) * fVar40;
          fVar31 = fVar31 + *(float *)(lVar23 + -0xc) * fVar40;
          fVar32 = fVar32 + *(float *)(lVar23 + -8) * fVar40;
          fVar28 = fVar40 * 0.0 + 0.0;
          auVar9._4_4_ = fVar31;
          auVar9._0_4_ = fVar30;
          auVar9._8_4_ = fVar32;
          auVar9._12_4_ = fVar28;
          auVar10._4_4_ = fVar31;
          auVar10._0_4_ = fVar30;
          auVar10._8_4_ = fVar32;
          auVar10._12_4_ = fVar28;
          auVar49 = NEON_ext(auVar9,auVar10,8,1);
          fVar28 = auVar57._0_4_;
          fVar32 = auVar49._0_4_;
          bVar42 = (byte)iVar48;
          bVar45 = (byte)((uint)iVar48 >> 8);
          bVar46 = (byte)((uint)iVar48 >> 0x10);
          bVar47 = (byte)((uint)iVar48 >> 0x18);
          auVar39._0_4_ =
               CONCAT13(bVar47 | auVar56[3],
                        CONCAT12(bVar46 | auVar56[2],
                                 CONCAT11(bVar45 | auVar56[1],bVar42 | auVar56[0])));
          auVar39._4_3_ = 0;
          auVar39[7] = bVar47 | auVar56[7];
          auVar39[8] = bVar42 | auVar56[8];
          auVar39[9] = bVar45 | auVar56[9];
          auVar39[10] = bVar46 | auVar56[10];
          auVar39[0xb] = bVar47 | auVar56[0xb];
          auVar39[0xc] = bVar42 | auVar56[0xc];
          auVar39[0xd] = bVar45 | auVar56[0xd];
          auVar39[0xe] = bVar46 | auVar56[0xe];
          auVar39[0xf] = bVar47 | auVar56[0xf];
          *(ulong *)(lVar23 + -0x18) =
               CONCAT44((int)(uVar24 >> 0x20),(int)*(undefined8 *)(lVar23 + -0x18));
          *(undefined8 *)(lVar23 + -0x20) = *(undefined8 *)(lVar23 + -0x20);
          lVar23 = lVar23 + 0x40;
          auVar56 = auVar39;
        } while (uVar21 != 0);
        *(uint *)(uVar20 + 0x34) = auVar39._0_4_;
      }
      uVar20 = uVar22;
    } while (uVar22 < uVar19 + (ulong)uVar4 * 0x10);
  }
  *(ulong *)pfVar18 = CONCAT44(fVar27,fVar26);
  pfVar18[2] = fVar28;
  *(ulong *)(pfVar18 + 4) = CONCAT44(fVar31,fVar30);
  pfVar18[6] = fVar32;
  return;
}


