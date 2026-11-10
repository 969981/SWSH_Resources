/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00285910; name: FUN_00285910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00285910(long param_1,long param_2,long param_3,long param_4,uint *param_5,undefined8 *param_6,
            float *param_7,uint param_8)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar41;
  ulong uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar48;
  undefined8 uVar47;
  
  if ((param_8 & 1) == 0) {
    fVar17 = *param_7;
    fVar18 = param_7[1];
    fVar19 = param_7[2];
  }
  else {
    fVar17 = _DAT_01d4b580;
    fVar18 = _UNK_01d4b584;
    fVar19 = _UNK_01d4b588;
    fVar20 = _UNK_01d4b58c;
    if (*(uint *)(param_2 + 0x10) != 0) {
      puVar11 = *(undefined8 **)(param_3 + 0x30);
      fVar21 = 3.4028235e+38;
      uVar9 = 0;
      pfVar10 = (float *)(*(long *)(param_2 + 0x18) + 0xc);
      do {
        fVar46 = pfVar10[-3];
        fVar48 = pfVar10[-2];
        fVar34 = pfVar10[-1];
        auVar29._0_4_ = (float)*puVar11 * fVar46;
        auVar29._4_4_ = (float)((ulong)*puVar11 >> 0x20) * fVar48;
        auVar29._8_4_ = (float)puVar11[1] * fVar34;
        auVar29._12_4_ = (float)((ulong)puVar11[1] >> 0x20) * 0.0;
        auVar36 = NEON_ext(auVar29,auVar29,8,1);
        fVar12 = auVar36._0_4_ + auVar36._4_4_;
        auVar38._0_4_ = (float)puVar11[2] * fVar46;
        auVar38._4_4_ = (float)((ulong)puVar11[2] >> 0x20) * fVar48;
        auVar38._8_4_ = (float)puVar11[3] * fVar34;
        auVar38._12_4_ = (float)((ulong)puVar11[3] >> 0x20) * 0.0;
        auVar36 = NEON_ext(auVar38,auVar38,8,1);
        fVar13 = auVar36._0_4_ + auVar36._4_4_;
        auVar44._0_4_ = *(float *)(puVar11 + 4) * fVar46;
        auVar44._4_4_ = *(float *)((long)puVar11 + 0x24) * fVar48;
        auVar44._8_4_ = *(float *)(puVar11 + 5) * fVar34;
        auVar44._12_4_ = *(float *)((long)puVar11 + 0x2c) * 0.0;
        auVar36 = NEON_ext(auVar44,auVar44,8,1);
        uVar32 = NEON_ext(CONCAT44(auVar29._0_4_ + auVar29._4_4_ + fVar12,
                                   auVar29._0_4_ + auVar29._4_4_ + fVar12),
                          CONCAT44(auVar38._0_4_ + auVar38._4_4_ + fVar13,
                                   auVar38._0_4_ + auVar38._4_4_ + fVar13),4,1);
        fVar12 = auVar44._0_4_ + auVar44._4_4_ + auVar36._0_4_ + auVar36._4_4_;
        fVar31 = (float)uVar32;
        auVar37._0_4_ = fVar31 * fVar31;
        fVar33 = (float)((ulong)uVar32 >> 0x20);
        auVar37._4_4_ = fVar33 * fVar33;
        auVar37._8_4_ = fVar12 * fVar12;
        auVar37._12_4_ = 0;
        auVar36 = NEON_ext(auVar37,auVar37,8,1);
        pfVar2 = (float *)(*(long *)(param_2 + 0x20) + (ulong)*(byte *)((long)pfVar10 + 7) * 0xc);
        fVar14 = auVar36._0_4_ + auVar36._4_4_;
        fVar13 = auVar37._0_4_ + auVar37._4_4_ + fVar14;
        fVar14 = auVar37._0_4_ + auVar37._4_4_ + fVar14;
        uVar8 = CONCAT44(fVar14,fVar13);
        auVar36._0_4_ = *pfVar2 * fVar46;
        auVar36._4_4_ = pfVar2[1] * fVar48;
        auVar36._8_4_ = pfVar2[2] * fVar34;
        auVar36._12_4_ = 0;
        auVar29 = NEON_ext(auVar36,auVar36,8,1);
        uVar32 = NEON_frsqrte(uVar8,4);
        fVar46 = (float)uVar32;
        fVar48 = (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar46 * fVar46),uVar8,4);
        fVar46 = fVar46 * (float)uVar32;
        fVar48 = fVar48 * (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar46 * fVar46),uVar8,4);
        fVar46 = fVar46 * (float)uVar32;
        fVar48 = fVar48 * (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar46 * fVar46),uVar8,4);
        fVar46 = fVar46 * (float)uVar32;
        fVar48 = fVar48 * (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frsqrts(CONCAT44(fVar48 * fVar48,fVar46 * fVar46),uVar8,4);
        uVar42 = CONCAT44(fVar14 * fVar48 * (float)((ulong)uVar32 >> 0x20),
                          fVar13 * fVar46 * (float)uVar32);
        uVar42 = uVar42 ^ (uVar42 ^ uVar8) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0))
        ;
        uVar32 = NEON_frecpe(uVar42,4);
        uVar47 = NEON_frecps(uVar42,uVar32,4);
        fVar34 = (float)uVar32 * (float)uVar47;
        fVar46 = (float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
        uVar32 = NEON_frecps(uVar42,CONCAT44(fVar46,fVar34),4);
        fVar34 = fVar34 * (float)uVar32;
        fVar46 = fVar46 * (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frecps(uVar42,CONCAT44(fVar46,fVar34),4);
        fVar34 = fVar34 * (float)uVar32;
        fVar46 = fVar46 * (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frecps(uVar42,CONCAT44(fVar46,fVar34),4);
        fVar34 = fVar34 * (float)uVar32;
        uVar32 = NEON_frecps(uVar42,CONCAT44(fVar46 * (float)((ulong)uVar32 >> 0x20),fVar34),4);
        fVar34 = fVar34 * (float)uVar32;
        fVar31 = fVar31 * fVar34;
        fVar33 = fVar33 * fVar34;
        fVar12 = fVar12 * fVar34;
        auVar45._0_4_ = (float)*(undefined8 *)(param_1 + 0x30) * fVar31;
        auVar45._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * fVar33;
        auVar45._8_4_ = (float)*(undefined8 *)(param_1 + 0x38) * fVar12;
        auVar45._12_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * 0.0;
        auVar38 = NEON_ext(auVar45,auVar45,8,1);
        fVar46 = auVar38._0_4_ + auVar38._4_4_;
        uVar32 = CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar46,
                          auVar45._0_4_ + auVar45._4_4_ + fVar46);
        auVar39._0_4_ = (float)*(undefined8 *)(param_1 + 0x40) * fVar31;
        auVar39._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) * fVar33;
        auVar39._8_4_ = (float)*(undefined8 *)(param_1 + 0x48) * fVar12;
        auVar39._12_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) * 0.0;
        auVar45 = NEON_ext(auVar39,auVar39,8,1);
        fVar46 = auVar45._0_4_ + auVar45._4_4_;
        uVar47 = CONCAT44(auVar39._0_4_ + auVar39._4_4_ + fVar46,
                          auVar39._0_4_ + auVar39._4_4_ + fVar46);
        uVar43 = NEON_fmin(uVar32,uVar47,4);
        uVar32 = NEON_fmax(uVar32,uVar47,4);
        fVar46 = (float)*(undefined8 *)(param_1 + 0x50);
        fVar48 = (float)uVar43 - fVar46;
        iVar41 = -(uint)((float)*param_6 - fVar34 * *pfVar10 < fVar48);
        iVar35 = -(uint)((float)*param_6 + fVar46 + (float)uVar32 <
                        fVar34 * (auVar36._0_4_ + auVar36._4_4_ + auVar29._0_4_ + auVar29._4_4_));
        iVar35 = CONCAT13((byte)((uint)iVar35 >> 0x18) | (byte)((uint)iVar41 >> 0x18),
                          CONCAT12((byte)((uint)iVar35 >> 0x10) | (byte)((uint)iVar41 >> 0x10),
                                   CONCAT11((byte)((uint)iVar35 >> 8) | (byte)((uint)iVar41 >> 8),
                                            (byte)iVar35 | (byte)iVar41)));
        auVar40._0_4_ = -(uint)(iVar35 == -1);
        auVar40._4_4_ = -(uint)(iVar35 == -1);
        auVar40._8_4_ = -(uint)(iVar35 == -1);
        auVar40._12_4_ = -(uint)(iVar35 == -1);
        NEON_ext(auVar40,auVar40,8,1);
        if (CONCAT13((char)auVar40._12_4_,
                     CONCAT12((char)auVar40._8_4_,CONCAT11((char)auVar40._4_4_,(char)auVar40._0_4_))
                    ) == -1) {
          return 0;
        }
        fVar48 = -(fVar34 * *pfVar10) - fVar48;
        uVar1 = -(uint)(fVar48 < fVar21);
        uVar9 = uVar9 + 1;
        fVar17 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)fVar31) & uVar1);
        fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)fVar33) & uVar1);
        fVar19 = (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)fVar12) & uVar1);
        fVar20 = (float)((uint)fVar20 ^ (uint)fVar20 & uVar1);
        pfVar10 = pfVar10 + 5;
        fVar21 = (float)((uint)fVar21 ^ ((uint)fVar21 ^ (uint)fVar48) & uVar1);
      } while (uVar9 < *(uint *)(param_2 + 0x10));
    }
    param_7[2] = fVar19;
    param_7[3] = fVar20;
    *param_7 = fVar17;
    param_7[1] = fVar18;
  }
  fVar17 = -fVar17;
  fVar18 = -fVar18;
  fVar19 = -fVar19;
  if (*(uint *)(param_2 + 0x10) == 0) {
    uVar9 = 0;
  }
  else {
    puVar11 = *(undefined8 **)(param_3 + 0x30);
    fVar46 = (float)puVar11[2];
    fVar34 = (float)((ulong)puVar11[2] >> 0x20);
    uVar8 = 0;
    fVar20 = (float)*puVar11;
    fVar21 = (float)((ulong)*puVar11 >> 0x20);
    fVar13 = (float)*(undefined8 *)(param_1 + 0x30);
    fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    pfVar10 = *(float **)(param_2 + 0x18);
    fVar31 = (float)*(undefined8 *)(param_1 + 0x38);
    fVar48 = (float)puVar11[4];
    fVar12 = (float)((ulong)puVar11[4] >> 0x20);
    uVar22 = NEON_fmov(0x3f800000,4);
    uVar9 = 0;
    uVar42 = 0;
    uVar23 = uVar22;
    do {
      fVar24 = (fVar20 * fVar17 + fVar46 * fVar18 + fVar48 * fVar19) * *pfVar10;
      fVar26 = (fVar21 * fVar17 + fVar34 * fVar18 + fVar12 * fVar19) * pfVar10[1];
      fVar33 = ((float)puVar11[1] * fVar17 + (float)puVar11[3] * fVar18 + (float)puVar11[5] * fVar19
               ) * pfVar10[2];
      auVar5._4_4_ = fVar26;
      auVar5._0_4_ = fVar24;
      auVar5._8_4_ = fVar33;
      auVar5._12_4_ = 0;
      auVar6._4_4_ = fVar26;
      auVar6._0_4_ = fVar24;
      auVar6._8_4_ = fVar33;
      auVar6._12_4_ = 0;
      auVar36 = NEON_ext(auVar5,auVar6,8,1);
      auVar28._0_4_ = (fVar48 * fVar31 + fVar20 * fVar13 + fVar46 * fVar14) * *pfVar10;
      auVar28._4_4_ = (fVar12 * fVar31 + fVar21 * fVar13 + fVar34 * fVar14) * pfVar10[1];
      auVar28._8_4_ =
           ((float)puVar11[5] * fVar31 + (float)puVar11[1] * fVar13 + (float)puVar11[3] * fVar14) *
           pfVar10[2];
      auVar28._12_4_ = 0;
      fVar15 = auVar36._0_4_ + auVar36._4_4_;
      auVar36 = NEON_ext(auVar28,auVar28,8,1);
      fVar16 = auVar36._0_4_ + auVar36._4_4_;
      fVar33 = fVar24 + fVar26 + fVar15;
      fVar15 = fVar24 + fVar26 + fVar15;
      fVar24 = pfVar10[3] + auVar28._0_4_ + auVar28._4_4_ + fVar16;
      if (1e-07 <= ABS(fVar33)) {
        uVar32 = NEON_frecpe(CONCAT44(fVar15,fVar33),4);
        uVar47 = NEON_frecps(CONCAT44(fVar15,fVar33),uVar32,4);
        fVar26 = (float)uVar32 * (float)uVar47;
        fVar30 = (float)((ulong)uVar32 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
        uVar32 = NEON_frecps(CONCAT44(fVar15,fVar33),CONCAT44(fVar30,fVar26),4);
        fVar26 = fVar26 * (float)uVar32;
        fVar30 = fVar30 * (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frecps(CONCAT44(fVar15,fVar33),CONCAT44(fVar30,fVar26),4);
        fVar26 = fVar26 * (float)uVar32;
        fVar30 = fVar30 * (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frecps(CONCAT44(fVar15,fVar33),CONCAT44(fVar30,fVar26),4);
        fVar26 = fVar26 * (float)uVar32;
        fVar30 = fVar30 * (float)((ulong)uVar32 >> 0x20);
        uVar32 = NEON_frecps(CONCAT44(fVar15,fVar33),CONCAT44(fVar30,fVar26),4);
        fVar15 = -(fVar24 * fVar26 * (float)uVar32);
        uVar27 = CONCAT44(-((pfVar10[3] + auVar28._0_4_ + auVar28._4_4_ + fVar16) *
                           fVar30 * (float)((ulong)uVar32 >> 0x20)),fVar15);
        iVar25 = -(uint)(fVar33 < 0.0);
        iVar41 = -(uint)(fVar15 < (float)uVar23);
        iVar35 = -(uint)((float)uVar42 < fVar15 && fVar33 < 0.0);
        uVar9 = uVar9 ^ (uVar9 ^ uVar27) & CONCAT44(iVar35,iVar35);
        uVar22 = uVar22 ^ (uVar22 ^ uVar27) &
                          (ulong)CONCAT13((byte)((uint)iVar41 >> 0x18) &
                                          ~(byte)((uint)iVar25 >> 0x18),
                                          CONCAT12((byte)((uint)iVar41 >> 0x10) &
                                                   ~(byte)((uint)iVar25 >> 0x10),
                                                   CONCAT11((byte)((uint)iVar41 >> 8) &
                                                            ~(byte)((uint)iVar25 >> 8),
                                                            (byte)iVar41 & ~(byte)iVar25)));
        uVar42 = uVar9;
        uVar23 = uVar22;
        if ((float)uVar22 < (float)uVar9) {
          return 1;
        }
      }
      else {
        if (0.0 < fVar24) {
          return 1;
        }
        if ((float)uVar23 < (float)uVar42) {
          return 1;
        }
      }
      uVar8 = uVar8 + 1;
      pfVar10 = pfVar10 + 5;
    } while (uVar8 < *(uint *)(param_2 + 0x10));
  }
  fVar20 = (float)uVar9;
  if (fVar20 <= (float)*(undefined8 *)(param_1 + 0x50) + (float)*param_6) {
    puVar11 = (undefined8 *)(param_4 + (ulong)*param_5 * 0x30);
    *puVar11 = 0;
    puVar11[1] = 0;
    fVar17 = fVar17 * fVar20 + *(float *)(param_1 + 0x30);
    fVar18 = fVar18 * fVar20 + *(float *)(param_1 + 0x34);
    fVar19 = fVar19 * fVar20 + *(float *)(param_1 + 0x38);
    fVar20 = fVar20 * 0.0 + *(float *)(param_1 + 0x3c);
    auVar3._4_4_ = fVar18;
    auVar3._0_4_ = fVar17;
    auVar3._8_4_ = fVar19;
    auVar3._12_4_ = fVar20;
    auVar4._4_4_ = fVar18;
    auVar4._0_4_ = fVar17;
    auVar4._8_4_ = fVar19;
    auVar4._12_4_ = fVar20;
    auVar36 = NEON_ext(auVar3,auVar4,8,1);
    lVar7 = param_4 + (ulong)*param_5 * 0x30;
    *(ulong *)(lVar7 + 0x18) = (ulong)auVar36._0_4_;
    *(ulong *)(lVar7 + 0x10) = CONCAT44(fVar18,fVar17);
    uVar47 = *(undefined8 *)(param_7 + 2);
    uVar32 = *(undefined8 *)param_7;
    param_4 = param_4 + (ulong)*param_5 * 0x30;
    *param_5 = *param_5 + 1;
    *(ulong *)(param_4 + 0x28) = CONCAT44((int)(uVar9 >> 0x20),(int)uVar47);
    *(undefined8 *)(param_4 + 0x20) = uVar32;
    return 1;
  }
  return 1;
}


