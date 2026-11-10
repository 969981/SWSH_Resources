/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00231940; name: FUN_00231940
 */


void FUN_00231940(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined1 uVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  byte bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined8 uVar32;
  float fVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined8 uVar38;
  float fVar39;
  undefined1 auVar40 [16];
  
  fVar34 = *param_2;
  fVar25 = param_2[1];
  fVar36 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = *param_3 - fVar34;
  fVar8 = param_3[1] - fVar25;
  fVar9 = param_3[2] - fVar36;
  fVar10 = param_3[3] - fVar6;
  fVar31 = *param_4 - fVar34;
  fVar39 = param_4[1] - fVar25;
  uVar16 = (undefined1)((uint)fVar39 >> 8);
  uVar18 = (undefined1)((uint)fVar39 >> 0x10);
  uVar20 = (undefined1)((uint)fVar39 >> 0x18);
  fVar23 = param_4[2] - fVar36;
  fVar24 = param_4[3] - fVar6;
  auVar35._4_4_ = fVar8;
  auVar35._0_4_ = fVar7;
  auVar35._8_4_ = fVar9;
  auVar35._12_4_ = fVar10;
  auVar37._4_4_ = fVar8;
  auVar37._0_4_ = fVar7;
  auVar37._8_4_ = fVar9;
  auVar37._12_4_ = fVar10;
  auVar35 = NEON_ext(auVar35,auVar37,8,1);
  auVar2[4] = SUB41(fVar39,0);
  auVar2._0_4_ = fVar31;
  auVar2[5] = uVar16;
  auVar2[6] = uVar18;
  auVar2[7] = uVar20;
  auVar2._8_4_ = fVar23;
  auVar2._12_4_ = fVar24;
  auVar3[4] = SUB41(fVar39,0);
  auVar3._0_4_ = fVar31;
  auVar3[5] = uVar16;
  auVar3[6] = uVar18;
  auVar3[7] = uVar20;
  auVar3._8_4_ = fVar23;
  auVar3._12_4_ = fVar24;
  auVar37 = NEON_ext(auVar2,auVar3,8,1);
  fVar24 = fVar7 * fVar39 - fVar8 * fVar31;
  uVar29 = NEON_ext(CONCAT44(fVar8 * fVar23 - fVar9 * fVar39,fVar24),
                    CONCAT44(auVar35._4_4_ * fVar39 - fVar8 * auVar37._4_4_,
                             auVar35._0_4_ * fVar31 - fVar7 * auVar37._0_4_),4,1);
  fVar9 = (float)uVar29;
  fVar10 = (float)((ulong)uVar29 >> 0x20);
  fVar31 = *param_1;
  fVar39 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  auVar26._0_4_ = *param_3 - fVar31;
  auVar26._4_4_ = param_3[1] - fVar39;
  auVar26._8_4_ = param_3[2] - fVar7;
  auVar26._12_4_ = param_3[3] - fVar8;
  auVar33._0_4_ = *param_4 - fVar31;
  auVar33._4_4_ = param_4[1] - fVar39;
  auVar33._8_4_ = param_4[2] - fVar7;
  auVar33._12_4_ = param_4[3] - fVar8;
  auVar30._0_4_ = fVar34 - fVar31;
  auVar30._4_4_ = fVar25 - fVar39;
  auVar30._8_4_ = fVar36 - fVar7;
  auVar30._12_4_ = fVar6 - fVar8;
  auVar35 = NEON_ext(auVar26,auVar26,8,1);
  auVar37 = NEON_ext(auVar33,auVar33,8,1);
  fVar39 = auVar26._0_4_ * auVar33._4_4_ - auVar26._4_4_ * auVar33._0_4_;
  auVar40 = NEON_ext(auVar30,auVar30,8,1);
  uVar38 = NEON_ext(CONCAT44(auVar26._4_4_ * auVar33._8_4_ - auVar26._8_4_ * auVar33._4_4_,fVar39),
                    CONCAT44(auVar35._4_4_ * auVar33._4_4_ - auVar26._4_4_ * auVar37._4_4_,
                             auVar35._0_4_ * auVar33._0_4_ - auVar26._0_4_ * auVar37._0_4_),4,1);
  fVar36 = auVar33._0_4_ * auVar30._4_4_ - auVar33._4_4_ * auVar30._0_4_;
  uVar32 = NEON_ext(CONCAT44(auVar33._4_4_ * auVar30._8_4_ - auVar33._8_4_ * auVar30._4_4_,fVar36),
                    CONCAT44(auVar37._4_4_ * auVar30._4_4_ - auVar33._4_4_ * auVar40._4_4_,
                             auVar37._0_4_ * auVar30._0_4_ - auVar33._0_4_ * auVar40._0_4_),4,1);
  fVar25 = auVar30._0_4_ * auVar26._4_4_ - auVar30._4_4_ * auVar26._0_4_;
  uVar29 = NEON_ext(CONCAT44(auVar30._4_4_ * auVar26._8_4_ - auVar30._8_4_ * auVar26._4_4_,fVar25),
                    CONCAT44(auVar40._4_4_ * auVar26._4_4_ - auVar30._4_4_ * auVar35._4_4_,
                             auVar40._0_4_ * auVar26._0_4_ - auVar30._0_4_ * auVar35._0_4_),4,1);
  fVar31 = fVar9 * (float)uVar38;
  fVar34 = fVar10 * (float)((ulong)uVar38 >> 0x20);
  uVar16 = (undefined1)((uint)fVar34 >> 8);
  uVar18 = (undefined1)((uint)fVar34 >> 0x10);
  uVar20 = (undefined1)((uint)fVar34 >> 0x18);
  fVar39 = fVar24 * fVar39;
  auVar4[4] = SUB41(fVar34,0);
  auVar4._0_4_ = fVar31;
  auVar4[5] = uVar16;
  auVar4[6] = uVar18;
  auVar4[7] = uVar20;
  auVar4._8_4_ = fVar39;
  auVar4._12_4_ = 0;
  auVar5[4] = SUB41(fVar34,0);
  auVar5._0_4_ = fVar31;
  auVar5[5] = uVar16;
  auVar5[6] = uVar18;
  auVar5[7] = uVar20;
  auVar5._8_4_ = fVar39;
  auVar5._12_4_ = 0;
  auVar35 = NEON_ext(auVar4,auVar5,8,1);
  fVar6 = auVar35._0_4_ + auVar35._4_4_;
  auVar27._0_4_ = fVar9 * (float)uVar32;
  auVar27._4_4_ = fVar10 * (float)((ulong)uVar32 >> 0x20);
  auVar27._8_4_ = fVar24 * fVar36;
  auVar27._12_4_ = 0;
  fVar9 = fVar9 * (float)uVar29;
  fVar10 = fVar10 * (float)((ulong)uVar29 >> 0x20);
  fVar24 = fVar24 * fVar25;
  auVar37 = NEON_ext(auVar27,auVar27,8,1);
  auVar40._4_4_ = fVar10;
  auVar40._0_4_ = fVar9;
  auVar40._8_4_ = fVar24;
  auVar40._12_4_ = 0;
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar24;
  auVar1._12_4_ = 0;
  auVar35 = NEON_ext(auVar40,auVar1,8,1);
  fVar7 = auVar37._0_4_ + auVar37._4_4_;
  fVar8 = auVar35._0_4_ + auVar35._4_4_;
  fVar25 = auVar27._0_4_ + auVar27._4_4_ + fVar7;
  fVar7 = auVar27._0_4_ + auVar27._4_4_ + fVar7;
  fVar36 = fVar9 + fVar10 + fVar8;
  fVar8 = fVar9 + fVar10 + fVar8;
  fVar39 = fVar31 + fVar34 + fVar6 + fVar25 + fVar36;
  fVar31 = fVar31 + fVar34 + fVar6 + fVar7 + fVar8;
  uVar16 = SUB41(fVar31,0);
  uVar18 = (undefined1)((uint)fVar31 >> 8);
  uVar20 = (undefined1)((uint)fVar31 >> 0x10);
  uVar21 = (undefined1)((uint)fVar31 >> 0x18);
  uVar29 = NEON_frecpe(CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,fVar39)))),4)
  ;
  uVar32 = NEON_frecps(CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,fVar39)))),
                       uVar29,4);
  fVar31 = (float)uVar29 * (float)uVar32;
  fVar34 = (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar32 >> 0x20);
  uVar29 = NEON_frecps(CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,fVar39)))),
                       CONCAT44(fVar34,fVar31),4);
  fVar31 = fVar31 * (float)uVar29;
  fVar34 = fVar34 * (float)((ulong)uVar29 >> 0x20);
  uVar29 = NEON_frecps(CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,fVar39)))),
                       CONCAT44(fVar34,fVar31),4);
  fVar31 = fVar31 * (float)uVar29;
  fVar34 = fVar34 * (float)((ulong)uVar29 >> 0x20);
  uVar29 = NEON_frecps(CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,fVar39)))),
                       CONCAT44(fVar34,fVar31),4);
  fVar31 = fVar31 * (float)uVar29;
  fVar34 = fVar34 * (float)((ulong)uVar29 >> 0x20);
  iVar28 = -(uint)(fVar39 == 0.0);
  uVar29 = NEON_frecps(CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar18,CONCAT14(uVar16,fVar39)))),
                       CONCAT44(fVar34,fVar31),4);
  fVar31 = fVar31 * (float)uVar29;
  fVar34 = fVar34 * (float)((ulong)uVar29 >> 0x20);
  bVar17 = (byte)((uint)iVar28 >> 8);
  bVar19 = (byte)((uint)iVar28 >> 0x10);
  bVar22 = (byte)((uint)iVar28 >> 0x18);
  bVar11 = SUB41(fVar31,0) & ~(byte)iVar28;
  bVar12 = (byte)((uint)fVar31 >> 8) & ~bVar17;
  bVar13 = (byte)((uint)fVar31 >> 0x10) & ~bVar19;
  bVar14 = (byte)((uint)fVar31 >> 0x18) & ~bVar22;
  bVar15 = SUB41(fVar34,0) & ~(byte)iVar28;
  bVar17 = (byte)((uint)fVar34 >> 8) & ~bVar17;
  bVar19 = (byte)((uint)fVar34 >> 0x10) & ~bVar19;
  bVar22 = (byte)((uint)fVar34 >> 0x18) & ~bVar22;
  *param_5 = CONCAT44(fVar7 * (float)CONCAT13(bVar22,CONCAT12(bVar19,CONCAT11(bVar17,bVar15))),
                      fVar25 * (float)CONCAT13(bVar14,CONCAT12(bVar13,CONCAT11(bVar12,bVar11))));
  *param_6 = CONCAT44(fVar8 * (float)CONCAT13(bVar22,CONCAT12(bVar19,CONCAT11(bVar17,bVar15))),
                      fVar36 * (float)CONCAT13(bVar14,CONCAT12(bVar13,CONCAT11(bVar12,bVar11))));
  return;
}


