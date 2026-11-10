/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b1690; name: FUN_004b1690
 */


void FUN_004b1690(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  param_2 = param_4[7] - param_2;
  param_1 = param_4[6] - param_1;
  param_3 = param_4[8] - param_3;
  if (param_1 * param_1 + param_2 * param_2 + param_3 * param_3 <= 0.0) {
    fVar7 = 0.0;
    fVar2 = 1.0;
    fVar5 = 0.0;
    param_6[0] = 1.0;
    param_6[1] = 0.0;
    param_6[2] = 0.0;
    param_6[3] = 0.0;
    param_6[4] = 1.0;
    param_6[5] = 0.0;
    param_6[6] = 0.0;
    param_6[7] = 0.0;
    param_6[8] = 1.0;
  }
  else {
    fVar4 = *param_5 * param_1 + param_2 * param_5[1] + param_3 * param_5[2];
    fVar5 = param_5[3] * param_1 + param_2 * param_5[4] + param_3 * param_5[5];
    fVar7 = param_5[6] * param_1 + param_2 * param_5[7] + param_3 * param_5[8];
    fVar2 = 1.0;
    fVar9 = 1.0 / SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar4 = fVar9 * fVar4;
    fVar5 = fVar9 * fVar5;
    fVar6 = fVar4 * fVar4 + fVar5 * fVar5;
    fVar9 = fVar9 * fVar7;
    if (fVar6 <= DAT_01d4c708) {
      uVar1 = 0x3f800000;
      param_6[0] = 1.0;
      param_6[1] = 0.0;
      param_6[2] = 0.0;
      param_6[3] = 0.0;
      if (fVar9 < 0.0) {
        uVar1 = 0xbf800000;
      }
      fVar7 = 0.0;
      *(undefined8 *)(param_6 + 4) = uVar1;
      param_6[6] = 0.0;
      param_6[7] = 0.0;
      param_6[8] = (float)uVar1;
      fVar5 = 0.0;
    }
    else {
      fVar6 = SQRT(fVar6);
      param_6[8] = fVar9;
      fVar2 = 1.0 / fVar6;
      fVar3 = 1.0 - fVar9;
      fVar4 = fVar2 * fVar4;
      fVar8 = -(fVar2 * fVar5);
      fVar7 = -(fVar4 * fVar6);
      fVar2 = fVar9 + fVar3 * fVar2 * fVar5 * fVar2 * fVar5;
      fVar5 = fVar4 * fVar3 * fVar8;
      param_6[2] = fVar7;
      param_6[3] = fVar5;
      *param_6 = fVar2;
      param_6[1] = fVar5;
      param_6[4] = fVar9 + fVar3 * fVar4 * fVar4;
      param_6[5] = fVar6 * fVar8;
      param_6[6] = fVar4 * fVar6;
      param_6[7] = -(fVar6 * fVar8);
    }
  }
  fVar4 = param_4[4];
  fVar9 = param_4[5];
  fVar6 = *param_4;
  fVar3 = param_4[1];
  fVar10 = param_4[2];
  fVar11 = param_4[3];
  fVar15 = *param_5;
  fVar16 = param_5[1];
  fVar8 = fVar10 * fVar4 - fVar3 * fVar9;
  fVar14 = fVar11 * fVar3 - fVar6 * fVar4;
  fVar12 = fVar6 * fVar9 - fVar11 * fVar10;
  fVar18 = param_5[2];
  fVar19 = param_5[3];
  fVar23 = param_5[6];
  fVar24 = param_5[7];
  fVar21 = param_5[4];
  fVar22 = param_5[5];
  fVar25 = fVar19 * fVar11 + fVar4 * fVar21 + fVar9 * fVar22;
  fVar13 = param_5[8];
  fVar17 = fVar15 * fVar8 + fVar16 * fVar12 + fVar14 * fVar18;
  fVar20 = fVar19 * fVar8 + fVar12 * fVar21 + fVar14 * fVar22;
  fVar8 = fVar23 * fVar8 + fVar12 * fVar24 + fVar14 * fVar13;
  fVar12 = fVar15 * fVar11 + fVar4 * fVar16 + fVar9 * fVar18;
  fVar4 = fVar23 * fVar11 + fVar4 * fVar24 + fVar9 * fVar13;
  fVar9 = fVar15 * fVar6 + fVar3 * fVar16 + fVar10 * fVar18;
  *param_7 = fVar2 * fVar17 + fVar20 * fVar5 + fVar8 * fVar7;
  fVar2 = fVar19 * fVar6 + fVar3 * fVar21 + fVar10 * fVar22;
  param_7[1] = param_6[3] * fVar17 + fVar20 * param_6[4] + fVar8 * param_6[5];
  param_7[2] = param_6[6] * fVar17 + fVar20 * param_6[7] + fVar8 * param_6[8];
  param_7[3] = *param_6 * fVar12 + fVar25 * param_6[1] + fVar4 * param_6[2];
  param_7[4] = param_6[3] * fVar12 + fVar25 * param_6[4] + fVar4 * param_6[5];
  fVar5 = fVar23 * fVar6 + fVar3 * fVar24 + fVar10 * fVar13;
  param_7[5] = param_6[6] * fVar12 + fVar25 * param_6[7] + fVar4 * param_6[8];
  param_7[6] = *param_6 * fVar9 + fVar2 * param_6[1] + fVar5 * param_6[2];
  param_7[7] = param_6[3] * fVar9 + fVar2 * param_6[4] + fVar5 * param_6[5];
  param_7[8] = param_6[6] * fVar9 + fVar2 * param_6[7] + fVar5 * param_6[8];
  return;
}


