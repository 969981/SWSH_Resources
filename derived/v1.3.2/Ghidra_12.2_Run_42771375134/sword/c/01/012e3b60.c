/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e3b60; name: FUN_012e3b60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012e3b60(long param_1,undefined8 *param_2)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar10;
  float *pfVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined1 (*pauVar18) [16];
  undefined8 extraout_d0;
  undefined8 uVar20;
  undefined8 extraout_var_00;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar19;
  undefined1 auVar23 [16];
  float fVar31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float extraout_var;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar15 = FUN_012e4840();
  if ((uVar15 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x348) = 1;
    puVar16 = (undefined8 *)FUN_012dcaa0(param_1);
    uVar3 = puVar16[1];
    lVar1 = param_1 + 0x370;
    *(undefined8 *)(param_1 + 0x350) = *puVar16;
    *(undefined8 *)(param_1 + 0x358) = uVar3;
    uVar15 = FUN_0131cf90(lVar1);
    if ((uVar15 & 1) != 0) {
      FUN_0131d150(lVar1,0);
    }
    bVar14 = *(char *)(param_1 + 0x30d) == '\0';
    lVar17 = 0x334;
    if (bVar14) {
      lVar17 = 0x330;
    }
    fVar32 = *(float *)(param_1 + lVar17);
    pfVar2 = (float *)(param_1 + 0x310);
    pfVar11 = (float *)(param_1 + 800);
    if ((bVar14) && (pfVar11 = pfVar2, 0.0 < *(float *)(param_1 + 0x338))) {
      lVar17 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar32 = 0.0;
      *(float *)(param_1 + 0x338) =
           *(float *)(param_1 + 0x338) + (float)((double)*(long *)(lVar17 + 8) / DAT_01cd53f8);
    }
    pauVar18 = (undefined1 (*) [16])FUN_012dc8d0(param_1);
    auVar47 = *pauVar18;
    lVar17 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar57 = ABS(fVar32) * (float)((double)*(long *)(lVar17 + 8) / DAT_01cd50a0);
    fVar56 = fVar57 / DAT_01d4bb38;
    FUN_00a92cd0((uint)DAT_01d4bb38 ^ ((uint)DAT_01d4bb38 ^ (uint)fVar32) & 0x80000000,0,ZEXT816(0))
    ;
    local_90 = extraout_d0;
    uStack_88 = extraout_var_00;
    auVar21 = FUN_0075e7d0(fVar56,PTR_DAT_027152c0,&local_90);
    uVar13 = DAT_01cd5418;
    uVar12 = DAT_01cd5270;
    uVar54 = DAT_01cd5120;
    uVar51 = DAT_01cd50f8;
    uVar42 = DAT_01cd50b0;
    uVar20 = DAT_01cd4f90;
    uVar41 = a64_TBL(ZEXT816(0),auVar47,DAT_01cd50f8);
    uVar3 = a64_TBL(ZEXT816(0),auVar47,DAT_01cd4f90);
    fVar32 = (float)((ulong)uVar3 >> 0x20);
    uVar49 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd4f90);
    uVar52 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
    uVar55 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5270);
    uVar53 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
    fVar56 = (float)((ulong)uVar41 >> 0x20);
    uVar50 = a64_TBL(ZEXT816(0),auVar47,DAT_01cd5418);
    uVar9 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
    auVar22._0_8_ = auVar21._0_8_;
    auVar22._8_8_ = auVar22._0_8_;
    uVar19 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50b0);
    fVar58 = (float)_DAT_01d4ae90;
    fVar59 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar60 = (float)_UNK_01d4ae98;
    fVar61 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar31 = (float)((ulong)uVar50 >> 0x20);
    fVar33 = (auVar21._0_4_ * (float)uVar3 + fVar58 * auVar47._0_4_ * (float)uVar49 +
             fVar58 * (float)uVar50 * (float)uVar53) - (float)uVar41 * (float)uVar9;
    fVar35 = (auVar21._4_4_ * fVar32 + fVar59 * auVar47._4_4_ * (float)((ulong)uVar49 >> 0x20) +
             fVar59 * fVar31 * (float)((ulong)uVar53 >> 0x20)) -
             fVar56 * (float)((ulong)uVar9 >> 0x20);
    fVar37 = (auVar21._8_4_ * (float)uVar3 + fVar60 * (float)uVar41 * (float)uVar52 +
             fVar60 * auVar47._0_4_ * (float)uVar19) - (float)uVar50 * (float)uVar55;
    fVar39 = (auVar21._12_4_ * fVar32 + fVar61 * fVar56 * (float)((ulong)uVar52 >> 0x20) +
             fVar61 * auVar47._4_4_ * (float)((ulong)uVar19 >> 0x20)) -
             fVar31 * (float)((ulong)uVar55 >> 0x20);
    auVar47._4_4_ = fVar35;
    auVar47._0_4_ = fVar33;
    auVar47._8_4_ = fVar37;
    auVar47._12_4_ = fVar39;
    uVar53 = a64_TBL(ZEXT816(0),auVar47,DAT_01cd4f90);
    uStack_88 = CONCAT44(fVar39,fVar37);
    local_90 = CONCAT44(fVar35,fVar33);
    fVar32 = *pfVar11;
    fVar56 = pfVar11[1];
    fVar31 = pfVar11[2];
    fVar10 = pfVar11[3];
    auVar21._4_4_ = fVar35;
    auVar21._0_4_ = fVar33;
    auVar21._8_4_ = fVar37;
    auVar21._12_4_ = fVar39;
    uVar9 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
    auVar4._4_4_ = fVar35;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar37;
    auVar4._12_4_ = fVar39;
    uVar19 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5270);
    fVar34 = (float)_DAT_01d4ae80;
    auVar43._0_4_ = fVar32 * fVar34;
    fVar36 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    auVar43._4_4_ = fVar56 * fVar36;
    fVar38 = (float)_UNK_01d4ae88;
    fVar40 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar43._8_4_ = fVar31 * fVar38;
    auVar43._12_4_ = fVar10 * fVar40;
    auVar23._0_4_ = fVar32 * fVar32;
    auVar23._4_4_ = fVar56 * fVar56;
    auVar23._8_4_ = fVar31 * fVar31;
    auVar23._12_4_ = fVar10 * fVar10;
    auVar47 = NEON_ext(auVar23,auVar23,8,1);
    fVar56 = auVar47._0_4_ + auVar23._0_4_;
    fVar31 = auVar47._4_4_ + auVar23._4_4_;
    fVar32 = fVar56 + fVar31;
    fVar56 = fVar56 + fVar31;
    auVar24._8_8_ = CONCAT44(fVar56,fVar32);
    auVar24._0_8_ = CONCAT44(fVar56,fVar32);
    auVar47 = NEON_frecpe(auVar24,4);
    auVar21 = NEON_frecps(auVar47,auVar24,4);
    auVar48._0_4_ = auVar47._0_4_ * auVar21._0_4_;
    auVar48._4_4_ = auVar47._4_4_ * auVar21._4_4_;
    auVar48._8_4_ = auVar47._8_4_ * auVar21._8_4_;
    auVar48._12_4_ = auVar47._12_4_ * auVar21._12_4_;
    auVar47 = NEON_frecps(auVar48,auVar24,4);
    auVar25._0_4_ = -(uint)(fVar32 == 0.0);
    auVar25._4_4_ = -(uint)(fVar56 == 0.0);
    auVar25._8_4_ = -(uint)(fVar32 == 0.0);
    auVar25._12_4_ = -(uint)(fVar56 == 0.0);
    auVar26._0_4_ = auVar43._0_4_ * auVar48._0_4_ * auVar47._0_4_;
    auVar26._4_4_ = auVar43._4_4_ * auVar48._4_4_ * auVar47._4_4_;
    auVar26._8_4_ = auVar43._8_4_ * auVar48._8_4_ * auVar47._8_4_;
    auVar26._12_4_ = auVar43._12_4_ * auVar48._12_4_ * auVar47._12_4_;
    auVar26 = auVar26 ^ (auVar26 ^ auVar43) & auVar25;
    uVar49 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd4f90);
    uVar50 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50f8);
    fVar32 = (float)((ulong)uVar49 >> 0x20);
    fVar56 = (float)((ulong)uVar50 >> 0x20);
    uVar55 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
    auVar5._4_4_ = fVar35;
    auVar5._0_4_ = fVar33;
    auVar5._8_4_ = fVar37;
    auVar5._12_4_ = fVar39;
    uVar41 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
    auVar6._4_4_ = fVar35;
    auVar6._0_4_ = fVar33;
    auVar6._8_4_ = fVar37;
    auVar6._12_4_ = fVar39;
    uVar52 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
    auVar7._4_4_ = fVar35;
    auVar7._0_4_ = fVar33;
    auVar7._8_4_ = fVar33;
    auVar7._12_4_ = fVar35;
    uVar3 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
    fVar31 = (float)((ulong)uVar55 >> 0x20);
    auVar44._0_8_ =
         CONCAT44((fVar35 * fVar32 + fVar59 * auVar26._4_4_ * (float)((ulong)uVar53 >> 0x20) +
                  fVar59 * fVar31 * (float)((ulong)uVar41 >> 0x20)) -
                  fVar56 * (float)((ulong)uVar52 >> 0x20),
                  (fVar33 * (float)uVar49 + fVar58 * auVar26._0_4_ * (float)uVar53 +
                  fVar58 * (float)uVar55 * (float)uVar41) - (float)uVar50 * (float)uVar52);
    auVar44._8_4_ =
         (fVar37 * (float)uVar49 + fVar60 * (float)uVar50 * (float)uVar9 +
         fVar60 * auVar26._0_4_ * (float)uVar3) - (float)uVar55 * (float)uVar19;
    auVar44._12_4_ =
         (fVar39 * fVar32 + fVar61 * fVar56 * (float)((ulong)uVar9 >> 0x20) +
         fVar61 * auVar26._4_4_ * (float)((ulong)uVar3 >> 0x20)) -
         fVar31 * (float)((ulong)uVar19 >> 0x20);
    uStack_98 = auVar44._8_8_;
    local_a0 = auVar44._0_8_;
    FUN_007101c0(&local_a0);
    pauVar18 = (undefined1 (*) [16])FUN_012dc8d0(param_1);
    fVar32 = *pfVar11;
    fVar56 = pfVar11[1];
    fVar31 = pfVar11[2];
    fVar10 = pfVar11[3];
    fVar34 = fVar32 * fVar34;
    fVar36 = fVar56 * fVar36;
    fVar38 = fVar31 * fVar38;
    fVar40 = fVar10 * fVar40;
    auVar27._0_4_ = fVar32 * fVar32;
    auVar27._4_4_ = fVar56 * fVar56;
    auVar27._8_4_ = fVar31 * fVar31;
    auVar27._12_4_ = fVar10 * fVar10;
    auVar47 = NEON_ext(auVar27,auVar27,8,1);
    fVar56 = auVar47._0_4_ + auVar27._0_4_;
    fVar31 = auVar47._4_4_ + auVar27._4_4_;
    fVar32 = fVar56 + fVar31;
    fVar56 = fVar56 + fVar31;
    auVar28._8_8_ = CONCAT44(fVar56,fVar32);
    auVar28._0_8_ = CONCAT44(fVar56,fVar32);
    auVar47 = NEON_frecpe(auVar28,4);
    auVar21 = NEON_frecps(auVar47,auVar28,4);
    auVar45._0_4_ = auVar47._0_4_ * auVar21._0_4_;
    auVar45._4_4_ = auVar47._4_4_ * auVar21._4_4_;
    auVar45._8_4_ = auVar47._8_4_ * auVar21._8_4_;
    auVar45._12_4_ = auVar47._12_4_ * auVar21._12_4_;
    auVar47 = NEON_frecps(auVar45,auVar28,4);
    auVar29._0_4_ = -(uint)(fVar32 == 0.0);
    auVar29._4_4_ = -(uint)(fVar56 == 0.0);
    auVar29._8_4_ = -(uint)(fVar32 == 0.0);
    auVar29._12_4_ = -(uint)(fVar56 == 0.0);
    auVar30._0_4_ = fVar34 * auVar45._0_4_ * auVar47._0_4_;
    auVar30._4_4_ = fVar36 * auVar45._4_4_ * auVar47._4_4_;
    auVar30._8_4_ = fVar38 * auVar45._8_4_ * auVar47._8_4_;
    auVar30._12_4_ = fVar40 * auVar45._12_4_ * auVar47._12_4_;
    auVar8._4_4_ = fVar36;
    auVar8._0_4_ = fVar34;
    auVar8._8_4_ = fVar38;
    auVar8._12_4_ = fVar40;
    auVar30 = auVar30 ^ (auVar30 ^ auVar8) & auVar29;
    auVar47 = *pauVar18;
    uVar3 = a64_TBL(ZEXT816(0),auVar30,uVar20);
    fVar32 = (float)((ulong)uVar3 >> 0x20);
    uVar41 = a64_TBL(ZEXT816(0),auVar30,uVar51);
    uVar49 = a64_TBL(ZEXT816(0),auVar47,uVar20);
    uVar9 = a64_TBL(ZEXT816(0),auVar47,uVar54);
    uVar19 = a64_TBL(ZEXT816(0),auVar47,uVar12);
    fVar56 = (float)((ulong)uVar41 >> 0x20);
    uVar54 = a64_TBL(ZEXT816(0),auVar30,uVar13);
    uVar20 = a64_TBL(ZEXT816(0),auVar47,uVar51);
    uVar51 = a64_TBL(ZEXT816(0),auVar47,uVar13);
    auVar46._0_8_ = auVar47._0_8_;
    auVar46._8_8_ = auVar46._0_8_;
    uVar42 = a64_TBL(ZEXT816(0),auVar46,uVar42);
    fVar31 = (float)((ulong)uVar54 >> 0x20);
    uStack_98 = CONCAT44((auVar47._12_4_ * fVar32 + fVar61 * fVar56 * (float)((ulong)uVar9 >> 0x20)
                         + fVar61 * auVar30._4_4_ * (float)((ulong)uVar42 >> 0x20)) -
                         fVar31 * (float)((ulong)uVar19 >> 0x20),
                         (auVar47._8_4_ * (float)uVar3 + fVar60 * (float)uVar41 * (float)uVar9 +
                         fVar60 * auVar30._0_4_ * (float)uVar42) - (float)uVar54 * (float)uVar19);
    local_a0 = CONCAT44((auVar47._4_4_ * fVar32 +
                         fVar59 * auVar30._4_4_ * (float)((ulong)uVar49 >> 0x20) +
                        fVar59 * fVar31 * (float)((ulong)uVar20 >> 0x20)) -
                        fVar56 * (float)((ulong)uVar51 >> 0x20),
                        (auVar47._0_4_ * (float)uVar3 + fVar58 * auVar30._0_4_ * (float)uVar49 +
                        fVar58 * (float)uVar54 * (float)uVar20) - (float)uVar41 * (float)uVar51);
    auVar47 = FUN_007101c0(&local_a0);
    if ((ABS(extraout_var) <= fVar57 + DAT_01d4c708) || (ABS(auVar47._4_4_) < ABS(extraout_var))) {
      if (*(char *)(param_1 + 0x30d) == '\0') {
        FUN_012dc7f0(param_1,pfVar2);
        *(undefined2 *)(param_1 + 0x30c) = 0;
        FUN_0131b6b0(lVar1,0);
        if (((*(int *)(param_1 + 0x308) == 4) || (*(int *)(param_1 + 0x308) == 1)) &&
           (uVar15 = FUN_0131d090(lVar1), (uVar15 & 1) == 0)) {
          FUN_0131d150(lVar1,1);
        }
      }
      else {
        FUN_012dc7f0(param_1,(float *)(param_1 + 800));
        *(undefined1 *)(param_1 + 0x30d) = 0;
        *(undefined4 *)(param_1 + 0x338) = 0x3fc00000;
      }
    }
    else {
      FUN_012dc7f0(param_1,&local_90);
    }
  }
  return;
}


