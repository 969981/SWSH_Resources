/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00231f40; name: FUN_00231f40
 */


void FUN_00231f40(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 undefined8 param_6,uint param_7)

{
  float fVar1;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar5 = param_5[2];
  fVar3 = param_5[3];
  fVar21 = param_4[2];
  fVar16 = param_4[3];
  fVar26 = *param_5;
  fVar2 = param_5[1];
  fVar19 = *param_4;
  fVar20 = param_4[1];
  fVar4 = param_5[4];
  fVar13 = param_5[5];
  fVar6 = param_5[6];
  fVar7 = param_5[7];
  fVar18 = param_4[4];
  fVar14 = param_4[5];
  fVar22 = param_4[8];
  fVar28 = param_5[8];
  fVar23 = param_4[9] - param_5[9];
  fVar29 = param_4[10] - param_5[10];
  fVar8 = param_4[0xb] - param_5[0xb];
  fVar12 = param_3[1];
  fVar25 = param_3[2];
  fVar27 = fVar19 * fVar3 + fVar20 * fVar4 + fVar21 * fVar13;
  fVar30 = param_3[4];
  fVar9 = param_3[5];
  fVar10 = param_4[6];
  fVar11 = param_4[7];
  fVar15 = fVar6 * fVar16 + fVar7 * fVar18 + fVar28 * fVar14;
  fVar17 = fVar6 * fVar10 + fVar7 * fVar11 + fVar28 * fVar22;
  fVar1 = fVar3 * fVar10 + fVar4 * fVar11 + fVar13 * fVar22;
  fVar24 = fVar26 * fVar19 + fVar2 * fVar20 + fVar5 * fVar21;
  fVar19 = fVar19 * fVar6 + fVar20 * fVar7 + fVar21 * fVar28;
  fVar20 = fVar26 * fVar16 + fVar2 * fVar18 + fVar5 * fVar14;
  fVar16 = fVar3 * fVar16 + fVar4 * fVar18 + fVar13 * fVar14;
  fVar10 = fVar26 * fVar10 + fVar2 * fVar11 + fVar5 * fVar22;
  param_2[0xc] = (param_3[3] - *param_3) * 0.5 + param_1;
  param_2[0xd] = (fVar30 - fVar12) * 0.5 + param_1;
  param_2[0xe] = (fVar9 - fVar25) * 0.5 + param_1;
  fVar12 = *param_3;
  fVar14 = param_3[1];
  fVar18 = param_3[4];
  fVar21 = param_3[5];
  fVar9 = param_3[2];
  fVar11 = param_3[3];
  param_2[2] = fVar19;
  param_2[3] = fVar20;
  *param_2 = fVar24;
  param_2[1] = fVar27;
  param_2[4] = fVar16;
  param_2[5] = fVar15;
  param_2[6] = fVar10;
  param_2[7] = fVar1;
  fVar14 = (fVar14 + fVar18) * 0.5;
  fVar11 = (fVar12 + fVar11) * 0.5;
  fVar9 = (fVar9 + fVar21) * 0.5;
  param_2[8] = fVar17;
  param_2[9] = fVar26 * fVar23 + fVar2 * fVar29 + fVar5 * fVar8 +
               fVar24 * fVar11 + fVar20 * fVar14 + fVar10 * fVar9;
  param_2[10] = fVar3 * fVar23 + fVar4 * fVar29 + fVar13 * fVar8 +
                fVar27 * fVar11 + fVar16 * fVar14 + fVar1 * fVar9;
  param_2[0xb] = fVar6 * fVar23 + fVar7 * fVar29 + fVar28 * fVar8 +
                 fVar19 * fVar11 + fVar15 * fVar14 + fVar17 * fVar9;
  if ((param_7 & 1) == 0) {
    FUN_002228b0(param_6,param_2 + 9,param_2 + 0xc,param_2);
    return;
  }
  return;
}


