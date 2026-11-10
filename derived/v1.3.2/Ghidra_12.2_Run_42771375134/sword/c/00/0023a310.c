/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023a310; name: FUN_0023a310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0023a310(float *param_1,undefined8 *param_2,float *param_3,float *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  
  auVar12._8_8_ = _UNK_01d4ac48;
  auVar12._0_8_ = _DAT_01d4ac40;
  auVar13._0_4_ = ABS(*param_4);
  auVar13._4_4_ = ABS(param_4[1]);
  auVar13._8_4_ = ABS(param_4[2]);
  auVar13._12_4_ = ABS(param_4[3]);
  auVar6 = NEON_fmax(auVar13,auVar12,4);
  uVar14 = (uint)((ulong)_UNK_01d4b4b8 >> 0x20);
  auVar2._0_4_ = auVar6._0_4_ *
                 (float)(_DAT_01d4b4b0 ^ (_DAT_01d4b4b0 ^ _DAT_01d4a130) & -(uint)(0.0 <= *param_4))
  ;
  auVar2._4_4_ = auVar6._4_4_ *
                 (float)(_UNK_01d4b4b4 ^
                        (_UNK_01d4b4b4 ^ _UNK_01d4a134) & -(uint)(0.0 <= param_4[1]));
  auVar2._8_4_ = auVar6._8_4_ *
                 (float)((uint)_UNK_01d4b4b8 ^
                        ((uint)_UNK_01d4b4b8 ^ _UNK_01d4a138) & -(uint)(0.0 <= param_4[2]));
  auVar2._12_4_ =
       auVar6._12_4_ * (float)(uVar14 ^ (uVar14 ^ _UNK_01d4a13c) & -(uint)(0.0 <= param_4[3]));
  auVar6 = NEON_frecpe(auVar2,4);
  auVar13 = NEON_frecps(auVar6,auVar2,4);
  auVar7._0_4_ = auVar6._0_4_ * auVar13._0_4_;
  auVar7._4_4_ = auVar6._4_4_ * auVar13._4_4_;
  auVar7._8_4_ = auVar6._8_4_ * auVar13._8_4_;
  auVar7._12_4_ = auVar6._12_4_ * auVar13._12_4_;
  auVar6 = NEON_frecps(auVar7,auVar2,4);
  auVar8._0_4_ = auVar7._0_4_ * auVar6._0_4_;
  auVar8._4_4_ = auVar7._4_4_ * auVar6._4_4_;
  auVar8._8_4_ = auVar7._8_4_ * auVar6._8_4_;
  auVar8._12_4_ = auVar7._12_4_ * auVar6._12_4_;
  auVar6 = NEON_frecps(auVar8,auVar2,4);
  auVar9._0_4_ = auVar8._0_4_ * auVar6._0_4_;
  auVar9._4_4_ = auVar8._4_4_ * auVar6._4_4_;
  auVar9._8_4_ = auVar8._8_4_ * auVar6._8_4_;
  auVar9._12_4_ = auVar8._12_4_ * auVar6._12_4_;
  auVar2 = NEON_frecps(auVar9,auVar2,4);
  fVar1 = auVar9._0_4_ * auVar2._0_4_;
  fVar3 = auVar9._4_4_ * auVar2._4_4_;
  fVar4 = auVar9._8_4_ * auVar2._8_4_;
  auVar10._0_4_ = fVar1 * (*param_1 - *param_3);
  auVar10._4_4_ = fVar3 * (param_1[1] - param_3[1]);
  auVar10._8_4_ = fVar4 * (param_1[2] - param_3[2]);
  auVar10._12_4_ = (param_1[3] - param_3[3]) * 0.0;
  auVar6._0_4_ = fVar1 * ((float)*param_2 - *param_3);
  auVar6._4_4_ = fVar3 * ((float)((ulong)*param_2 >> 0x20) - param_3[1]);
  auVar6._8_4_ = fVar4 * ((float)param_2[1] - param_3[2]);
  auVar6._12_4_ = ((float)((ulong)param_2[1] >> 0x20) - param_3[3]) * 0.0;
  auVar13 = NEON_fmin(auVar6,auVar10,4);
  auVar2 = NEON_fmax(auVar6,auVar10,4);
  uVar11 = NEON_fmax(CONCAT44(auVar13._4_4_,auVar13._4_4_),CONCAT44(auVar13._8_4_,auVar13._8_4_),4);
  uVar5 = NEON_fmax(CONCAT44(auVar13._0_4_,auVar13._0_4_),uVar11,4);
  uVar11 = NEON_fmin(CONCAT44(auVar2._4_4_,auVar2._4_4_),CONCAT44(auVar2._8_4_,auVar2._8_4_),4);
  uVar11 = NEON_fmin(CONCAT44(auVar2._0_4_,auVar2._0_4_),uVar11,4);
  uVar5 = NEON_fmax(uVar5,0,4);
  *param_6 = uVar5;
  uVar11 = NEON_fmin(uVar11,*param_5,4);
  *param_7 = uVar11;
  return -((float)*param_6 < (float)uVar11) & 1;
}


