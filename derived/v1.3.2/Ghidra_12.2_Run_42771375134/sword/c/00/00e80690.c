/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e80690; name: FUN_00e80690
 */


/* WARNING: Removing unreachable block (ram,0x00e80748) */

void FUN_00e80690(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  byte bVar11;
  byte bVar12;
  undefined1 uVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  int iVar22;
  undefined1 auVar23 [12];
  float fVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar30;
  int iVar31;
  int iVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar32;
  int iVar34;
  undefined1 auVar28 [16];
  float fVar35;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  fVar35 = (float)*param_2 - *param_1;
  fVar1 = (float)((ulong)*param_2 >> 0x20) - param_1[1];
  fVar38 = (float)param_2[1] - param_1[2];
  fVar2 = (float)((ulong)param_2[1] >> 0x20) - param_1[3];
  auVar24._0_4_ = fVar35 * fVar35;
  auVar24._4_4_ = fVar1 * fVar1;
  auVar24._8_4_ = fVar38 * fVar38;
  auVar24._12_4_ = fVar2 * fVar2;
  auVar36 = NEON_ext(auVar24,auVar24,8,1);
  fVar21 = auVar36._0_4_ + auVar24._0_4_;
  fVar29 = auVar36._4_4_ + auVar24._4_4_;
  fVar3 = fVar21 + fVar29;
  fVar21 = fVar21 + fVar29;
  auVar25._8_8_ = CONCAT44(fVar21,fVar3);
  auVar25._0_8_ = CONCAT44(fVar21,fVar3);
  auVar36 = NEON_frsqrte(auVar25,4);
  auVar39._0_4_ = auVar36._0_4_ * fVar3;
  auVar39._4_4_ = auVar36._4_4_ * fVar21;
  auVar39._8_4_ = auVar36._8_4_ * fVar3;
  auVar39._12_4_ = auVar36._12_4_ * fVar21;
  auVar40 = NEON_frsqrts(auVar36,auVar39,4);
  auVar37._0_4_ = auVar36._0_4_ * auVar40._0_4_;
  auVar37._4_4_ = auVar36._4_4_ * auVar40._4_4_;
  auVar37._8_4_ = auVar36._8_4_ * auVar40._8_4_;
  auVar37._12_4_ = auVar36._12_4_ * auVar40._12_4_;
  auVar41._0_4_ = fVar3 * auVar37._0_4_;
  auVar41._4_4_ = fVar21 * auVar37._4_4_;
  auVar41._8_4_ = fVar3 * auVar37._8_4_;
  auVar41._12_4_ = fVar21 * auVar37._12_4_;
  iVar22 = -(uint)(fVar3 == 0.0);
  iVar30 = -(uint)(fVar21 == 0.0);
  iVar31 = -(uint)(fVar3 == 0.0);
  iVar33 = -(uint)(fVar21 == 0.0);
  auVar36 = NEON_frsqrts(auVar37,auVar41,4);
  fVar35 = fVar35 * auVar37._0_4_ * auVar36._0_4_;
  fVar1 = fVar1 * auVar37._4_4_ * auVar36._4_4_;
  fVar38 = fVar38 * auVar37._8_4_ * auVar36._8_4_;
  fVar2 = fVar2 * auVar37._12_4_ * auVar36._12_4_;
  bVar4 = SUB41(fVar35,0) & ~(byte)iVar22;
  bVar6 = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar22 >> 8);
  bVar7 = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
  bVar8 = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
  bVar11 = SUB41(fVar38,0) & ~(byte)iVar31;
  bVar12 = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar31 >> 8);
  bVar14 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  bVar16 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  fVar38 = (float)CONCAT13(bVar16,CONCAT12(bVar14,CONCAT11(bVar12,bVar11)));
  fVar35 = (float)CONCAT13(bVar8,CONCAT12(bVar7,CONCAT11(bVar6,bVar4)));
  auVar26._0_4_ = fVar35 * fVar35;
  auVar26._4_4_ = 0;
  auVar26._8_4_ = fVar38 * fVar38;
  auVar26._12_4_ = 0;
  auVar36 = NEON_ext(auVar26,auVar26,8,1);
  fVar21 = auVar36._0_4_ + auVar26._0_4_;
  fVar29 = auVar36._4_4_ + 0.0;
  fVar3 = fVar21 + fVar29;
  fVar21 = fVar21 + fVar29;
  auVar27._8_8_ = CONCAT44(fVar21,fVar3);
  auVar27._0_8_ = CONCAT44(fVar21,fVar3);
  auVar36 = NEON_frsqrte(auVar27,4);
  auVar43._0_4_ = auVar36._0_4_ * fVar3;
  auVar43._4_4_ = auVar36._4_4_ * fVar21;
  auVar43._8_4_ = auVar36._8_4_ * fVar3;
  auVar43._12_4_ = auVar36._12_4_ * fVar21;
  auVar40 = NEON_frsqrts(auVar36,auVar43,4);
  auVar42._0_4_ = auVar36._0_4_ * auVar40._0_4_;
  auVar42._4_4_ = auVar36._4_4_ * auVar40._4_4_;
  auVar42._8_4_ = auVar36._8_4_ * auVar40._8_4_;
  auVar42._12_4_ = auVar36._12_4_ * auVar40._12_4_;
  auVar44._0_4_ = fVar3 * auVar42._0_4_;
  auVar44._4_4_ = fVar21 * auVar42._4_4_;
  auVar44._8_4_ = fVar3 * auVar42._8_4_;
  auVar44._12_4_ = fVar21 * auVar42._12_4_;
  iVar22 = -(uint)(fVar3 == 0.0);
  iVar31 = -(uint)(fVar21 == 0.0);
  iVar32 = -(uint)(fVar3 == 0.0);
  iVar34 = -(uint)(fVar21 == 0.0);
  auVar36 = NEON_frsqrts(auVar42,auVar44,4);
  fVar35 = auVar42._0_4_ * auVar36._0_4_ * fVar35;
  fVar3 = auVar42._4_4_ * auVar36._4_4_ * 0.0;
  fVar38 = auVar42._8_4_ * auVar36._8_4_ * fVar38;
  fVar21 = auVar42._12_4_ * auVar36._12_4_ * 0.0;
  fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                             SUB41(fVar35,0) & ~(byte)iVar22)));
  auVar23._0_8_ =
       CONCAT17((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                CONCAT16((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                         CONCAT15((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                  CONCAT14(SUB41(fVar3,0) & ~(byte)iVar31,fVar35))));
  auVar23[8] = SUB41(fVar38,0) & ~(byte)iVar32;
  auVar23[9] = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar32 >> 8);
  auVar23[10] = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10);
  auVar23[0xb] = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18);
  auVar28[0xc] = SUB41(fVar21,0) & ~(byte)iVar34;
  auVar28._0_12_ = auVar23;
  auVar28[0xd] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar34 >> 8);
  auVar28[0xe] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
  auVar28[0xf] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
  fVar35 = (float)CONCAT13(bVar8,CONCAT12(bVar7,CONCAT11(bVar6,bVar4))) * fVar35;
  fVar38 = (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar1,0) & ~(byte)iVar30))) *
           (float)((ulong)auVar23._0_8_ >> 0x20);
  uVar5 = (undefined1)((uint)fVar38 >> 8);
  uVar9 = (undefined1)((uint)fVar38 >> 0x10);
  uVar10 = (undefined1)((uint)fVar38 >> 0x18);
  fVar1 = (float)CONCAT13(bVar16,CONCAT12(bVar14,CONCAT11(bVar12,bVar11))) * auVar23._8_4_;
  uVar13 = (undefined1)((uint)fVar1 >> 8);
  uVar15 = (undefined1)((uint)fVar1 >> 0x10);
  uVar17 = (undefined1)((uint)fVar1 >> 0x18);
  fVar2 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                          CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                   CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar33 >> 8),
                                            SUB41(fVar2,0) & ~(byte)iVar33))) * auVar28._12_4_;
  uVar18 = (undefined1)((uint)fVar2 >> 8);
  uVar19 = (undefined1)((uint)fVar2 >> 0x10);
  uVar20 = (undefined1)((uint)fVar2 >> 0x18);
  auVar36[4] = SUB41(fVar38,0);
  auVar36._0_4_ = fVar35;
  auVar36[5] = uVar5;
  auVar36[6] = uVar9;
  auVar36[7] = uVar10;
  auVar36[8] = SUB41(fVar1,0);
  auVar36[9] = uVar13;
  auVar36[10] = uVar15;
  auVar36[0xb] = uVar17;
  auVar36[0xc] = SUB41(fVar2,0);
  auVar36[0xd] = uVar18;
  auVar36[0xe] = uVar19;
  auVar36[0xf] = uVar20;
  auVar40[4] = SUB41(fVar38,0);
  auVar40._0_4_ = fVar35;
  auVar40[5] = uVar5;
  auVar40[6] = uVar9;
  auVar40[7] = uVar10;
  auVar40[8] = SUB41(fVar1,0);
  auVar40[9] = uVar13;
  auVar40[10] = uVar15;
  auVar40[0xb] = uVar17;
  auVar40[0xc] = SUB41(fVar2,0);
  auVar40[0xd] = uVar18;
  auVar40[0xe] = uVar19;
  auVar40[0xf] = uVar20;
  auVar36 = NEON_ext(auVar36,auVar40,8,1);
  fVar35 = auVar36._0_4_ + fVar35 + auVar36._4_4_ + fVar38;
  uVar5 = 0;
  if (-1.0 <= fVar35) {
    uVar5 = SUB41(fVar35,0);
  }
  FUN_01590400(uVar5);
  return;
}


