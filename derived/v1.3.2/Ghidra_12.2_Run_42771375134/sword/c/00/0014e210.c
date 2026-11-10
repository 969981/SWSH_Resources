/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014e210; name: FUN_0014e210
 */


void FUN_0014e210(long *param_1)

{
  ushort *puVar1;
  float *pfVar2;
  ushort *puVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *puVar28;
  uint uVar29;
  undefined8 *puVar30;
  long lVar31;
  ushort *puVar32;
  float *pfVar33;
  uint *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  ushort *puVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  byte bVar54;
  float fVar55;
  undefined1 auVar56 [12];
  byte bVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  float fVar62;
  undefined8 uVar61;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  float fVar77;
  float fVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  float fVar80;
  
  FUN_0014cd50();
  FUN_0014d530(param_1);
  FUN_0014d9a0(param_1);
  puVar28 = PTR_DAT_02710d80;
  puVar34 = (uint *)param_1[1];
  if ((float)puVar34[0x2b] != 0.0) {
    uVar29 = puVar34[0x2a];
    if (uVar29 != 0) {
      uVar6 = *puVar34;
      if (uVar6 << 2 != 0) {
        fVar55 = ((float)puVar34[0x2b] * (float)uVar6) / (float)uVar29;
        bVar38 = SUB41(fVar55,0);
        bVar39 = (byte)((uint)fVar55 >> 8);
        bVar40 = (byte)((uint)fVar55 >> 0x10);
        bVar41 = (byte)((uint)fVar55 >> 0x18);
        puVar30 = *(undefined8 **)(puVar34 + 2);
        puVar32 = *(ushort **)(puVar34 + 0x28);
        auVar57 = NEON_fmov(0x3f800000,4);
        puVar3 = puVar32 + (ulong)uVar29 * 4;
        bVar54 = (byte)DAT_027369d0;
        uVar14 = (ulong)DAT_027369d0 >> 8;
        uVar15 = (ulong)DAT_027369d0 >> 0x10;
        uVar16 = (ulong)DAT_027369d0 >> 0x18;
        uVar17 = (ulong)DAT_027369d0 >> 0x20;
        uVar18 = (ulong)DAT_027369d0 >> 0x28;
        uVar19 = (ulong)DAT_027369d0 >> 0x30;
        uVar20 = (ulong)DAT_027369d0 >> 0x38;
        bVar59 = (byte)DAT_027369d8;
        uVar21 = (ulong)DAT_027369d8 >> 8;
        uVar22 = (ulong)DAT_027369d8 >> 0x10;
        uVar23 = (ulong)DAT_027369d8 >> 0x18;
        uVar24 = (ulong)DAT_027369d8 >> 0x20;
        uVar25 = (ulong)DAT_027369d8 >> 0x28;
        uVar26 = (ulong)DAT_027369d8 >> 0x30;
        uVar27 = (ulong)DAT_027369d8 >> 0x38;
        fVar55 = (float)puVar34[0x2c];
        puVar35 = puVar30;
        do {
          fVar67 = 0.0;
          fVar68 = 0.0;
          fVar65 = 0.0;
          fVar66 = 0.0;
          fVar60 = (float)*puVar35;
          fVar62 = (float)((ulong)*puVar35 >> 0x20);
          fVar63 = (float)puVar35[1];
          fVar64 = (float)((ulong)puVar35[1] >> 0x20);
          if (puVar32 < puVar3) {
            fVar7 = *(float *)puVar28;
            fVar67 = 0.0;
            fVar68 = 0.0;
            fVar65 = 0.0;
            fVar66 = 0.0;
            puVar37 = puVar32;
            do {
              uVar72 = (puVar30 + (ulong)*puVar37 * 2)[1];
              uVar61 = puVar30[(ulong)*puVar37 * 2];
              fVar69 = (float)uVar61 - fVar60;
              fVar70 = (float)((ulong)uVar61 >> 0x20) - fVar62;
              fVar71 = (float)uVar72 - fVar63;
              fVar73 = fVar69 * fVar69;
              fVar77 = fVar70 * fVar70;
              fVar78 = fVar71 * fVar71;
              puVar1 = puVar37 + 2;
              puVar37 = puVar37 + (ulong)uVar6 * 4;
              fVar80 = fVar55 * (float)*(undefined8 *)puVar1;
              auVar75._0_4_ = fVar7 + fVar78 + fVar73 + fVar77;
              auVar75._4_4_ = fVar7 + fVar78 + fVar73 + fVar77;
              auVar75._8_4_ = fVar7 + fVar78 + fVar73 + fVar77;
              auVar75._12_4_ = fVar7 + fVar78 + fVar73 + fVar77;
              auVar79 = NEON_frsqrte(auVar75,4);
              auVar74._0_4_ = auVar79._0_4_ * auVar75._0_4_;
              auVar74._4_4_ = auVar79._4_4_ * auVar75._4_4_;
              auVar74._8_4_ = auVar79._8_4_ * auVar75._8_4_;
              auVar74._12_4_ = auVar79._12_4_ * auVar75._12_4_;
              auVar75 = NEON_frsqrts(auVar74,auVar79,4);
              auVar76._0_4_ = auVar57._0_4_ - auVar79._0_4_ * auVar75._0_4_ * fVar80;
              auVar76._4_4_ = auVar57._4_4_ - auVar79._4_4_ * auVar75._4_4_ * fVar80;
              auVar76._8_4_ = auVar57._8_4_ - auVar79._8_4_ * auVar75._8_4_ * fVar80;
              auVar76._12_4_ = auVar57._12_4_ - auVar79._12_4_ * auVar75._12_4_ * fVar80;
              auVar75 = NEON_fmax(auVar76,ZEXT816(0),4);
              fVar65 = fVar65 + fVar69 * auVar75._0_4_;
              fVar66 = fVar66 + fVar70 * auVar75._4_4_;
              fVar67 = fVar67 + fVar71 * auVar75._8_4_;
              fVar68 = fVar68 + ((float)((ulong)uVar72 >> 0x20) - fVar64) * auVar75._12_4_;
            } while (puVar37 < puVar3);
          }
          puVar32 = puVar32 + 4;
          puVar36 = puVar35 + 2;
          puVar35[1] = CONCAT44(fVar64 + fVar68 * (float)CONCAT13((byte)uVar27 & bVar41,
                                                                  CONCAT12((byte)uVar26 & bVar40,
                                                                           CONCAT11((byte)uVar25 &
                                                                                    bVar39,(byte)
                                                  uVar24 & bVar38))),
                                fVar63 + fVar67 * (float)CONCAT13((byte)uVar23 & bVar41,
                                                                  CONCAT12((byte)uVar22 & bVar40,
                                                                           CONCAT11((byte)uVar21 &
                                                                                    bVar39,bVar59 & 
                                                  bVar38))));
          *puVar35 = CONCAT44(fVar62 + fVar66 * (float)CONCAT13((byte)uVar20 & bVar41,
                                                                CONCAT12((byte)uVar19 & bVar40,
                                                                         CONCAT11((byte)uVar18 &
                                                                                  bVar39,(byte)
                                                  uVar17 & bVar38))),
                              fVar60 + fVar65 * (float)CONCAT13((byte)uVar16 & bVar41,
                                                                CONCAT12((byte)uVar15 & bVar40,
                                                                         CONCAT11((byte)uVar14 &
                                                                                  bVar39,bVar54 & 
                                                  bVar38))));
          puVar35 = puVar36;
        } while (puVar36 != (undefined8 *)((long)puVar30 + (ulong)(uVar6 << 2) * 4));
      }
    }
  }
  FUN_0014d000(param_1);
  FUN_0014de50(param_1);
  FUN_00147be0(param_1 + 4,param_1 + 0x4a);
  FUN_0014e750(param_1 + 0x40);
  fVar55 = *(float *)(param_1 + 0x65);
  uVar29 = (uint)(fVar55 * DAT_01d4bec0);
  if (uVar29 < 2) {
    uVar29 = 1;
  }
  puVar34 = (uint *)param_1[1];
  uVar29 = uVar29 + puVar34[0x6d];
  puVar34[0x6d] = uVar29;
  lVar31 = *param_1;
  uVar6 = *(uint *)(lVar31 + 0x280);
  if (uVar6 <= uVar29) {
    if (*puVar34 == 0) {
      auVar57 = ZEXT816(0);
    }
    else {
      pfVar5 = *(float **)(puVar34 + 2);
      puVar35 = *(undefined8 **)(puVar34 + 4);
      pfVar2 = pfVar5 + (ulong)*puVar34 * 4;
      pfVar4 = pfVar2;
      if (pfVar2 <= pfVar5 + 4) {
        pfVar4 = pfVar5 + 4;
      }
      if (((uint)((long)pfVar4 + ~(ulong)pfVar5) >> 4 & 1) == 0) {
        pfVar33 = pfVar5 + 4;
        puVar30 = puVar35 + 2;
        auVar57._0_4_ = ABS(*pfVar5 - (float)*puVar35);
        auVar57._4_4_ = ABS(pfVar5[1] - (float)((ulong)*puVar35 >> 0x20));
        auVar57._8_4_ = ABS(pfVar5[2] - (float)puVar35[1]);
        auVar57._12_4_ = ABS(pfVar5[3] - (float)((ulong)puVar35[1] >> 0x20));
        auVar57 = NEON_fmax(ZEXT816(0),auVar57,4);
      }
      else {
        auVar57 = ZEXT816(0);
        pfVar33 = pfVar5;
        puVar30 = puVar35;
      }
      if (0xf < (long)pfVar4 + ~(ulong)pfVar5) {
        do {
          puVar36 = puVar30 + 1;
          uVar61 = *puVar30;
          puVar35 = puVar30 + 2;
          puVar8 = puVar30 + 3;
          puVar30 = puVar30 + 4;
          fVar65 = ABS((float)((ulong)*(undefined8 *)pfVar33 >> 0x20) -
                       (float)((ulong)uVar61 >> 0x20));
          fVar66 = ABS((float)*(undefined8 *)(pfVar33 + 2) - (float)*puVar36);
          fVar67 = ABS((float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20) -
                       (float)((ulong)*puVar36 >> 0x20));
          auVar79[4] = SUB41(fVar65,0);
          auVar79._0_4_ = ABS((float)*(undefined8 *)pfVar33 - (float)uVar61);
          auVar79[5] = (char)((uint)fVar65 >> 8);
          auVar79[6] = (char)((uint)fVar65 >> 0x10);
          auVar79[7] = (char)((uint)fVar65 >> 0x18);
          auVar79[8] = SUB41(fVar66,0);
          auVar79[9] = (char)((uint)fVar66 >> 8);
          auVar79[10] = (char)((uint)fVar66 >> 0x10);
          auVar79[0xb] = (char)((uint)fVar66 >> 0x18);
          auVar79[0xc] = SUB41(fVar67,0);
          auVar79[0xd] = (char)((uint)fVar67 >> 8);
          auVar79[0xe] = (char)((uint)fVar67 >> 0x10);
          auVar79[0xf] = (char)((uint)fVar67 >> 0x18);
          auVar57 = NEON_fmax(auVar57,auVar79,4);
          fVar65 = ABS(pfVar33[5] - (float)((ulong)*puVar35 >> 0x20));
          fVar66 = ABS(pfVar33[6] - (float)*puVar8);
          fVar67 = ABS(pfVar33[7] - (float)((ulong)*puVar8 >> 0x20));
          auVar13[4] = SUB41(fVar65,0);
          auVar13._0_4_ = ABS(pfVar33[4] - (float)*puVar35);
          auVar13[5] = (char)((uint)fVar65 >> 8);
          auVar13[6] = (char)((uint)fVar65 >> 0x10);
          auVar13[7] = (char)((uint)fVar65 >> 0x18);
          auVar13[8] = SUB41(fVar66,0);
          auVar13[9] = (char)((uint)fVar66 >> 8);
          auVar13[10] = (char)((uint)fVar66 >> 0x10);
          auVar13[0xb] = (char)((uint)fVar66 >> 0x18);
          auVar13[0xc] = SUB41(fVar67,0);
          auVar13[0xd] = (char)((uint)fVar67 >> 8);
          auVar13[0xe] = (char)((uint)fVar67 >> 0x10);
          auVar13[0xf] = (char)((uint)fVar67 >> 0x18);
          auVar57 = NEON_fmax(auVar57,auVar13,4);
          pfVar33 = pfVar33 + 8;
        } while (pfVar33 < pfVar2);
      }
    }
    bVar39 = (byte)DAT_027369d8;
    uVar21 = (ulong)DAT_027369d8 >> 8;
    uVar22 = (ulong)DAT_027369d8 >> 0x10;
    uVar23 = (ulong)DAT_027369d8 >> 0x18;
    uVar24 = (ulong)DAT_027369d8 >> 0x20;
    uVar25 = (ulong)DAT_027369d8 >> 0x28;
    uVar26 = (ulong)DAT_027369d8 >> 0x30;
    uVar27 = (ulong)DAT_027369d8 >> 0x38;
    bVar38 = (byte)DAT_027369d0;
    uVar14 = (ulong)DAT_027369d0 >> 8;
    uVar15 = (ulong)DAT_027369d0 >> 0x10;
    uVar16 = (ulong)DAT_027369d0 >> 0x18;
    uVar17 = (ulong)DAT_027369d0 >> 0x20;
    uVar18 = (ulong)DAT_027369d0 >> 0x28;
    uVar19 = (ulong)DAT_027369d0 >> 0x30;
    uVar20 = (ulong)DAT_027369d0 >> 0x38;
    puVar34[0x6c] = puVar34[0x6c] + 1;
    fVar65 = (float)CONCAT13((byte)uVar16 & auVar57[3],
                             CONCAT12((byte)uVar15 & auVar57[2],
                                      CONCAT11((byte)uVar14 & auVar57[1],bVar38 & auVar57[0])));
    auVar56._0_8_ =
         CONCAT17((byte)uVar20 & auVar57[7],
                  CONCAT16((byte)uVar19 & auVar57[6],
                           CONCAT15((byte)uVar18 & auVar57[5],
                                    CONCAT14((byte)uVar17 & auVar57[4],fVar65))));
    auVar56[8] = bVar39 & auVar57[8];
    auVar56[9] = (byte)uVar21 & auVar57[9];
    auVar56[10] = (byte)uVar22 & auVar57[10];
    auVar56[0xb] = (byte)uVar23 & auVar57[0xb];
    auVar58[0xc] = (byte)uVar24 & auVar57[0xc];
    auVar58._0_12_ = auVar56;
    auVar58[0xd] = (byte)uVar25 & auVar57[0xd];
    auVar58[0xe] = (byte)uVar26 & auVar57[0xe];
    auVar58[0xf] = (byte)uVar27 & auVar57[0xf];
    fVar55 = fVar55 * *(float *)(lVar31 + 0x288);
    iVar11 = -(uint)(fVar55 <= fVar65);
    iVar12 = -(uint)(fVar55 <= (float)((ulong)auVar56._0_8_ >> 0x20));
    uVar42 = (undefined1)iVar12;
    uVar43 = (undefined1)((uint)iVar12 >> 8);
    uVar44 = (undefined1)((uint)iVar12 >> 0x10);
    uVar45 = (undefined1)((uint)iVar12 >> 0x18);
    iVar12 = -(uint)(fVar55 <= auVar56._8_4_);
    uVar46 = (undefined1)iVar12;
    uVar47 = (undefined1)((uint)iVar12 >> 8);
    uVar48 = (undefined1)((uint)iVar12 >> 0x10);
    uVar49 = (undefined1)((uint)iVar12 >> 0x18);
    iVar12 = -(uint)(fVar55 <= auVar58._12_4_);
    uVar50 = (undefined1)iVar12;
    uVar51 = (undefined1)((uint)iVar12 >> 8);
    uVar52 = (undefined1)((uint)iVar12 >> 0x10);
    uVar53 = (undefined1)((uint)iVar12 >> 0x18);
    auVar9[4] = uVar42;
    auVar9._0_4_ = iVar11;
    auVar9[5] = uVar43;
    auVar9[6] = uVar44;
    auVar9[7] = uVar45;
    auVar9[8] = uVar46;
    auVar9[9] = uVar47;
    auVar9[10] = uVar48;
    auVar9[0xb] = uVar49;
    auVar9[0xc] = uVar50;
    auVar9[0xd] = uVar51;
    auVar9[0xe] = uVar52;
    auVar9[0xf] = uVar53;
    auVar10[4] = uVar42;
    auVar10._0_4_ = iVar11;
    auVar10[5] = uVar43;
    auVar10[6] = uVar44;
    auVar10[7] = uVar45;
    auVar10[8] = uVar46;
    auVar10[9] = uVar47;
    auVar10[10] = uVar48;
    auVar10[0xb] = uVar49;
    auVar10[0xc] = uVar50;
    auVar10[0xd] = uVar51;
    auVar10[0xe] = uVar52;
    auVar10[0xf] = uVar53;
    NEON_ext(auVar9,auVar10,8,1);
    if (CONCAT13(uVar50,CONCAT12(uVar46,CONCAT11(uVar42,(char)iVar11))) != 0) {
      puVar34[0x6c] = 0;
    }
    puVar34[0x6d] = uVar29 - uVar6;
  }
  return;
}


