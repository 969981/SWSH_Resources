/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de1400; name: FUN_00de1400
 */


void FUN_00de1400(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar4 = FUN_00de1160();
  auVar5 = FUN_00de1160(param_2,param_3);
  fVar3 = auVar5._0_4_ - auVar4._0_4_;
  fVar6 = auVar5._4_4_ - auVar4._4_4_;
  fVar7 = auVar5._8_4_ - auVar4._8_4_;
  fVar8 = auVar5._12_4_ - auVar4._12_4_;
  fVar3 = fVar3 * fVar3;
  fVar6 = fVar6 * fVar6;
  uVar9 = (undefined1)((uint)fVar6 >> 8);
  uVar10 = (undefined1)((uint)fVar6 >> 0x10);
  uVar11 = (undefined1)((uint)fVar6 >> 0x18);
  fVar7 = fVar7 * fVar7;
  uVar12 = (undefined1)((uint)fVar7 >> 8);
  uVar13 = (undefined1)((uint)fVar7 >> 0x10);
  uVar14 = (undefined1)((uint)fVar7 >> 0x18);
  fVar8 = fVar8 * fVar8;
  uVar15 = (undefined1)((uint)fVar8 >> 8);
  uVar16 = (undefined1)((uint)fVar8 >> 0x10);
  uVar17 = (undefined1)((uint)fVar8 >> 0x18);
  auVar4[4] = SUB41(fVar6,0);
  auVar4._0_4_ = fVar3;
  auVar4[5] = uVar9;
  auVar4[6] = uVar10;
  auVar4[7] = uVar11;
  auVar4[8] = SUB41(fVar7,0);
  auVar4[9] = uVar12;
  auVar4[10] = uVar13;
  auVar4[0xb] = uVar14;
  auVar4[0xc] = SUB41(fVar8,0);
  auVar4[0xd] = uVar15;
  auVar4[0xe] = uVar16;
  auVar4[0xf] = uVar17;
  auVar5[4] = SUB41(fVar6,0);
  auVar5._0_4_ = fVar3;
  auVar5[5] = uVar9;
  auVar5[6] = uVar10;
  auVar5[7] = uVar11;
  auVar5[8] = SUB41(fVar7,0);
  auVar5[9] = uVar12;
  auVar5[10] = uVar13;
  auVar5[0xb] = uVar14;
  auVar5[0xc] = SUB41(fVar8,0);
  auVar5[0xd] = uVar15;
  auVar5[0xe] = uVar16;
  auVar5[0xf] = uVar17;
  auVar4 = NEON_ext(auVar4,auVar5,8,1);
  fVar3 = auVar4._0_4_ + fVar3;
  fVar6 = auVar4._4_4_ + fVar6;
  fVar7 = fVar3 + fVar6;
  fVar3 = fVar3 + fVar6;
  uVar9 = SUB41(fVar3,0);
  uVar10 = (undefined1)((uint)fVar3 >> 8);
  uVar11 = (undefined1)((uint)fVar3 >> 0x10);
  uVar12 = (undefined1)((uint)fVar3 >> 0x18);
  auVar1[4] = uVar9;
  auVar1._0_4_ = fVar7;
  auVar1[5] = uVar10;
  auVar1[6] = uVar11;
  auVar1[7] = uVar12;
  auVar1[8] = SUB41(fVar7,0);
  auVar1[9] = (char)((uint)fVar7 >> 8);
  auVar1[10] = (char)((uint)fVar7 >> 0x10);
  auVar1[0xb] = (char)((uint)fVar7 >> 0x18);
  auVar1[0xc] = uVar9;
  auVar1[0xd] = uVar10;
  auVar1[0xe] = uVar11;
  auVar1[0xf] = uVar12;
  auVar4 = NEON_frsqrte(auVar1,4);
  auVar19._0_4_ = auVar4._0_4_ * fVar7;
  auVar19._4_4_ = auVar4._4_4_ * fVar3;
  auVar19._8_4_ = auVar4._8_4_ * fVar7;
  uVar2 = (undefined2)(CONCAT15(uVar10,CONCAT14(uVar9,fVar7)) >> 0x20);
  auVar19._12_4_ = auVar4._12_4_ * (float)CONCAT13(uVar12,CONCAT12(uVar11,uVar2));
  auVar5 = NEON_frsqrts(auVar4,auVar19,4);
  auVar18._0_4_ = auVar4._0_4_ * auVar5._0_4_;
  auVar18._4_4_ = auVar4._4_4_ * auVar5._4_4_;
  auVar18._8_4_ = auVar4._8_4_ * auVar5._8_4_;
  auVar18._12_4_ = auVar4._12_4_ * auVar5._12_4_;
  auVar20._0_4_ = fVar7 * auVar18._0_4_;
  auVar20._4_4_ = fVar3 * auVar18._4_4_;
  auVar20._8_4_ = fVar7 * auVar18._8_4_;
  auVar20._12_4_ = (float)CONCAT13(uVar12,CONCAT12(uVar11,uVar2)) * auVar18._12_4_;
  NEON_frsqrts(auVar18,auVar20,4);
  return;
}


