/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00148b20; name: FUN_00148b20
 */


undefined8 FUN_00148b20(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  fVar13 = *(float *)PTR_DAT_02710d88;
  auVar14._4_4_ = fVar13;
  auVar14._0_4_ = fVar13;
  auVar14._8_4_ = fVar13;
  auVar14._12_4_ = fVar13;
  lVar7 = *(long *)((long)param_1 + 0x1c0);
  uVar1 = *(uint *)(lVar7 + 0x110);
  uVar8 = (ulong)uVar1;
  auVar19._0_4_ = -fVar13;
  auVar19._4_4_ = -fVar13;
  auVar19._8_4_ = -fVar13;
  auVar19._12_4_ = -fVar13;
  if (uVar1 != 0) {
    pfVar11 = *(float **)((long)param_1 + 0x1b0);
    lVar12 = uVar8 * 0x10 + -0x10;
    pfVar10 = pfVar11;
    if (((uint)lVar12 >> 4 & 1) == 0) {
      fVar13 = pfVar11[3];
      auVar34._0_4_ = *pfVar11 - fVar13;
      auVar34._4_4_ = pfVar11[1] - fVar13;
      auVar34._8_4_ = pfVar11[2] - fVar13;
      auVar34._12_4_ = fVar13 - fVar13;
      auVar28._0_4_ = *pfVar11 + fVar13;
      auVar28._4_4_ = pfVar11[1] + fVar13;
      auVar28._8_4_ = pfVar11[2] + fVar13;
      auVar28._12_4_ = fVar13 + fVar13;
      auVar14 = NEON_fmin(auVar14,auVar34,4);
      auVar19 = NEON_fmax(auVar19,auVar28,4);
      pfVar10 = pfVar11 + 4;
    }
    if (lVar12 != 0) {
      do {
        pfVar9 = pfVar10 + 8;
        fVar13 = pfVar10[3];
        fVar15 = pfVar10[7];
        auVar26._0_4_ = *pfVar10 + fVar13;
        auVar26._4_4_ = pfVar10[1] + fVar13;
        auVar26._8_4_ = pfVar10[2] + fVar13;
        auVar26._12_4_ = fVar13 + fVar13;
        auVar19 = NEON_fmax(auVar19,auVar26,4);
        auVar3._4_4_ = pfVar10[1] - fVar13;
        auVar3._0_4_ = *pfVar10 - fVar13;
        auVar3._8_4_ = pfVar10[2] - fVar13;
        auVar3._12_4_ = fVar13 - fVar13;
        auVar14 = NEON_fmin(auVar14,auVar3,4);
        auVar37._0_4_ = pfVar10[4] - fVar15;
        auVar37._4_4_ = pfVar10[5] - fVar15;
        auVar37._8_4_ = pfVar10[6] - fVar15;
        auVar37._12_4_ = fVar15 - fVar15;
        auVar27._0_4_ = pfVar10[4] + fVar15;
        auVar27._4_4_ = pfVar10[5] + fVar15;
        auVar27._8_4_ = pfVar10[6] + fVar15;
        auVar27._12_4_ = fVar15 + fVar15;
        auVar14 = NEON_fmin(auVar14,auVar37,4);
        auVar19 = NEON_fmax(auVar19,auVar27,4);
        pfVar10 = pfVar9;
      } while (pfVar9 != pfVar11 + uVar8 * 4);
    }
  }
  auVar28 = *(undefined1 (*) [16])(lVar7 + 0x18);
  auVar34 = *(undefined1 (*) [16])(lVar7 + 0x24);
  if (*(char *)(lVar7 + 0x184) != '\0') {
    if (uVar1 != 0) {
      pfVar11 = *(float **)((long)param_1 + 0x1a0);
      lVar12 = uVar8 * 0x10 + -0x10;
      pfVar10 = pfVar11;
      if (((uint)lVar12 >> 4 & 1) == 0) {
        fVar13 = pfVar11[3];
        auVar38._0_4_ = *pfVar11 + fVar13;
        auVar38._4_4_ = pfVar11[1] + fVar13;
        auVar38._8_4_ = pfVar11[2] + fVar13;
        auVar38._12_4_ = fVar13 + fVar13;
        auVar4._4_4_ = pfVar11[1] - fVar13;
        auVar4._0_4_ = *pfVar11 - fVar13;
        auVar4._8_4_ = pfVar11[2] - fVar13;
        auVar4._12_4_ = fVar13 - fVar13;
        auVar14 = NEON_fmin(auVar14,auVar4,4);
        auVar19 = NEON_fmax(auVar19,auVar38,4);
        pfVar10 = pfVar11 + 4;
      }
      if (lVar12 != 0) {
        do {
          pfVar9 = pfVar10 + 8;
          fVar13 = pfVar10[3];
          fVar17 = (float)*(undefined8 *)(pfVar10 + 6);
          fVar18 = (float)((ulong)*(undefined8 *)(pfVar10 + 6) >> 0x20);
          fVar15 = (float)*(undefined8 *)(pfVar10 + 4);
          fVar16 = (float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20);
          auVar39._0_4_ = *pfVar10 + fVar13;
          auVar39._4_4_ = pfVar10[1] + fVar13;
          auVar39._8_4_ = pfVar10[2] + fVar13;
          auVar39._12_4_ = fVar13 + fVar13;
          auVar19 = NEON_fmax(auVar19,auVar39,4);
          auVar6._4_4_ = pfVar10[1] - fVar13;
          auVar6._0_4_ = *pfVar10 - fVar13;
          auVar6._8_4_ = pfVar10[2] - fVar13;
          auVar6._12_4_ = fVar13 - fVar13;
          auVar14 = NEON_fmin(auVar14,auVar6,4);
          auVar40._0_4_ = fVar15 + fVar18;
          auVar40._4_4_ = fVar16 + fVar18;
          auVar40._8_4_ = fVar17 + fVar18;
          auVar40._12_4_ = fVar18 + fVar18;
          auVar5._4_4_ = fVar16 - fVar18;
          auVar5._0_4_ = fVar15 - fVar18;
          auVar5._8_4_ = fVar17 - fVar18;
          auVar5._12_4_ = fVar18 - fVar18;
          auVar14 = NEON_fmin(auVar14,auVar5,4);
          auVar19 = NEON_fmax(auVar19,auVar40,4);
          pfVar10 = pfVar9;
        } while (pfVar9 != pfVar11 + uVar8 * 4);
      }
    }
    auVar28 = NEON_fmin(auVar28,*(undefined1 (*) [16])(lVar7 + 0x30),4);
    auVar34 = NEON_fmax(auVar34,*(undefined1 (*) [16])(lVar7 + 0x3c),4);
  }
  auVar14 = NEON_fmax(auVar14,auVar28,4);
  auVar19 = NEON_fmin(auVar19,auVar34,4);
  fVar13 = auVar14._0_4_;
  fVar18 = auVar19._0_4_;
  fVar24 = fVar18 - fVar13;
  fVar15 = auVar14._4_4_;
  fVar21 = auVar19._4_4_;
  fVar31 = fVar21 - fVar15;
  fVar16 = auVar14._8_4_;
  fVar22 = auVar19._8_4_;
  fVar32 = fVar22 - fVar16;
  fVar17 = auVar14._12_4_;
  fVar23 = auVar19._12_4_;
  fVar33 = fVar23 - fVar17;
  fVar24 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((ulong)DAT_02736960 >> 0x18),
                           CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                    ~(byte)((ulong)DAT_02736960 >> 0x10),
                                    CONCAT11((byte)((uint)fVar24 >> 8) &
                                             ~(byte)((ulong)DAT_02736960 >> 8),
                                             SUB41(fVar24,0) & ~(byte)DAT_02736960)));
  auVar25._0_8_ =
       CONCAT17((byte)((uint)fVar31 >> 0x18) & ~(byte)((ulong)DAT_02736960 >> 0x38),
                CONCAT16((byte)((uint)fVar31 >> 0x10) & ~(byte)((ulong)DAT_02736960 >> 0x30),
                         CONCAT15((byte)((uint)fVar31 >> 8) & ~(byte)((ulong)DAT_02736960 >> 0x28),
                                  CONCAT14(SUB41(fVar31,0) & ~(byte)((ulong)DAT_02736960 >> 0x20),
                                           fVar24))));
  auVar25[8] = SUB41(fVar32,0) & ~(byte)DAT_02736968;
  auVar25[9] = (byte)((uint)fVar32 >> 8) & ~(byte)((ulong)DAT_02736968 >> 8);
  auVar25[10] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((ulong)DAT_02736968 >> 0x10);
  auVar25[0xb] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((ulong)DAT_02736968 >> 0x18);
  auVar29[0xc] = SUB41(fVar33,0) & ~(byte)((ulong)DAT_02736968 >> 0x20);
  auVar29._0_12_ = auVar25;
  auVar29[0xd] = (byte)((uint)fVar33 >> 8) & ~(byte)((ulong)DAT_02736968 >> 0x28);
  auVar29[0xe] = (byte)((uint)fVar33 >> 0x10) & ~(byte)((ulong)DAT_02736968 >> 0x30);
  auVar29[0xf] = (byte)((uint)fVar33 >> 0x18) & ~(byte)((ulong)DAT_02736968 >> 0x38);
  auVar30._0_4_ = -(uint)(0.0 <= fVar24);
  auVar30._4_4_ = -(uint)(0.0 <= (float)((ulong)auVar25._0_8_ >> 0x20));
  auVar30._8_4_ = -(uint)(0.0 <= auVar25._8_4_);
  auVar30._12_4_ = -(uint)(0.0 <= auVar29._12_4_);
  NEON_ext(auVar30,auVar30,8,1);
  if (CONCAT13((char)auVar30._12_4_,
               CONCAT12((char)auVar30._8_4_,CONCAT11((char)auVar30._4_4_,(char)auVar30._0_4_))) ==
      -1) {
    fVar13 = fVar13 - ABS(fVar13) * DAT_027369ac;
    fVar15 = fVar15 - ABS(fVar15) * DAT_027369ac;
    fVar16 = fVar16 - ABS(fVar16) * DAT_027369ac;
    fVar17 = fVar17 - ABS(fVar17) * DAT_027369ac;
    uVar2 = *(undefined4 *)PTR_DAT_02710d80;
    auVar35._4_4_ = uVar2;
    auVar35._0_4_ = uVar2;
    auVar35._8_4_ = uVar2;
    auVar35._12_4_ = uVar2;
    auVar20._0_4_ = (fVar18 + ABS(fVar18) * DAT_027369ac) - fVar13;
    auVar20._4_4_ = (fVar21 + ABS(fVar21) * DAT_027369ac) - fVar15;
    auVar20._8_4_ = (fVar22 + ABS(fVar22) * DAT_027369ac) - fVar16;
    auVar20._12_4_ = (fVar23 + ABS(fVar23) * DAT_027369ac) - fVar17;
    auVar14 = NEON_fmax(auVar20,auVar35,4);
    auVar19 = NEON_frecpe(auVar14,4);
    auVar28 = NEON_frecps(auVar14,auVar19,4);
    auVar36._0_4_ = auVar19._0_4_ * auVar28._0_4_;
    auVar36._4_4_ = auVar19._4_4_ * auVar28._4_4_;
    auVar36._8_4_ = auVar19._8_4_ * auVar28._8_4_;
    auVar36._12_4_ = auVar19._12_4_ * auVar28._12_4_;
    auVar14 = NEON_frecps(auVar14,auVar36,4);
    fVar18 = DAT_027369a8 * auVar36._0_4_ * auVar14._0_4_;
    fVar21 = DAT_027369a8 * auVar36._4_4_ * auVar14._4_4_;
    fVar22 = DAT_027369a8 * auVar36._8_4_ * auVar14._8_4_;
    fVar23 = DAT_027369a8 * auVar36._12_4_ * auVar14._12_4_;
    *(float *)((long)param_1 + 0x188) = fVar22;
    *(float *)((long)param_1 + 0x18c) = fVar23;
    *(float *)((long)param_1 + 0x180) = fVar18;
    *(float *)((long)param_1 + 0x184) = fVar21;
    *(float *)((long)param_1 + 0x198) = -(fVar16 * fVar22);
    *(float *)((long)param_1 + 0x19c) = -(fVar17 * fVar23);
    *(float *)((long)param_1 + 400) = -(fVar13 * fVar18);
    *(float *)((long)param_1 + 0x194) = -(fVar15 * fVar21);
    *(undefined4 *)((long)param_1 + 0x19c) = 0x3f800000;
                    /* WARNING: Subroutine does not return */
    memset(param_1,0,0xc0);
  }
  return 0;
}


