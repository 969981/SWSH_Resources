/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001259b0; name: FUN_001259b0
 */


void FUN_001259b0(float *param_1,float *param_2,float *param_3,int param_4)

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
  
  if (param_4 == 0) {
    fVar9 = param_3[2];
    fVar8 = param_3[3];
    fVar10 = *param_3;
    fVar11 = param_3[1];
    fVar1 = param_2[4] + param_2[4];
    fVar5 = param_2[5] + param_2[5];
    fVar14 = *param_2;
    fVar15 = param_2[1];
    fVar12 = param_2[2];
    fVar13 = param_2[3];
    fVar3 = param_2[6] + param_2[6];
    fVar16 = fVar8 * fVar8 + -0.5;
    fVar4 = fVar1 * fVar10 + fVar5 * fVar11 + fVar3 * fVar9;
    fVar2 = (fVar8 * fVar14 + fVar10 * fVar13 + fVar11 * fVar12) - fVar9 * fVar15;
    fVar22 = fVar9 * fVar12;
    fVar6 = param_3[4] + fVar10 * fVar4 + fVar1 * fVar16 + fVar8 * (fVar3 * fVar11 - fVar5 * fVar9);
    fVar7 = param_3[5] + fVar11 * fVar4 + fVar5 * fVar16 + fVar8 * (fVar1 * fVar9 - fVar3 * fVar10);
    fVar1 = param_3[6] + fVar3 * fVar16 + fVar8 * (fVar5 * fVar10 - fVar1 * fVar11) + fVar9 * fVar4;
    fVar5 = (fVar9 * fVar14 + fVar11 * fVar13 + fVar8 * fVar15) - fVar10 * fVar12;
    fVar3 = (fVar10 * fVar15 + fVar9 * fVar13 + fVar8 * fVar12) - fVar11 * fVar14;
    fVar4 = (fVar8 * fVar13 - fVar10 * fVar14) - fVar11 * fVar15;
  }
  else {
    fVar9 = param_3[8];
    fVar10 = param_3[9];
    fVar5 = param_3[0xd] * -2.0;
    fVar6 = param_3[0xe] * -2.0;
    fVar2 = param_3[0xc] * -2.0;
    fVar1 = param_3[10];
    fVar15 = param_3[0xb];
    fVar4 = param_3[2];
    fVar12 = param_3[3];
    fVar19 = *param_3;
    fVar18 = param_3[1];
    fVar16 = fVar15 * fVar15 + -0.5;
    fVar7 = fVar2 * fVar9 + fVar5 * fVar10 + fVar6 * fVar1;
    fVar26 = *param_2;
    fVar14 = param_2[1];
    fVar13 = param_2[6] + param_2[6];
    fVar25 = param_2[5] + param_2[5];
    fVar24 = param_2[4] + param_2[4];
    fVar3 = fVar9 * fVar7 + (fVar2 * fVar16 - fVar15 * (fVar6 * fVar10 - fVar5 * fVar1));
    fVar8 = (fVar6 * fVar16 - fVar15 * (fVar5 * fVar9 - fVar2 * fVar10)) + fVar1 * fVar7;
    fVar16 = fVar10 * fVar7 + (fVar5 * fVar16 - fVar15 * (fVar2 * fVar1 - fVar6 * fVar9));
    fVar22 = ((fVar15 * fVar4 - fVar12 * fVar1) - fVar19 * fVar10) + fVar18 * fVar9;
    fVar20 = param_2[2];
    fVar21 = param_2[3];
    fVar17 = ((fVar15 * fVar18 - fVar12 * fVar10) - fVar4 * fVar9) + fVar19 * fVar1;
    fVar11 = fVar15 * fVar12 + fVar19 * fVar9 + fVar18 * fVar10 + fVar4 * fVar1;
    fVar10 = ((fVar15 * fVar19 - fVar12 * fVar9) - fVar18 * fVar1) + fVar4 * fVar10;
    fVar23 = fVar12 * fVar12 + -0.5;
    fVar16 = fVar16 + fVar16;
    fVar8 = fVar8 + fVar8;
    fVar6 = fVar11 * fVar11 + -0.5;
    fVar3 = fVar3 + fVar3;
    fVar15 = fVar10 * fVar24 + fVar17 * fVar25 + fVar22 * fVar13;
    fVar9 = fVar4 * fVar8 + fVar19 * fVar3 + fVar18 * fVar16;
    fVar7 = param_3[5] +
            fVar18 * fVar9 + fVar23 * fVar16 + fVar12 * (fVar4 * fVar3 - fVar19 * fVar8) +
            fVar17 * fVar15 + fVar6 * fVar25 + fVar11 * (fVar22 * fVar24 - fVar10 * fVar13);
    fVar1 = param_3[6] +
            fVar23 * fVar8 + fVar12 * (fVar19 * fVar16 - fVar18 * fVar3) + fVar4 * fVar9 +
            fVar6 * fVar13 + fVar11 * (fVar10 * fVar25 - fVar17 * fVar24) + fVar22 * fVar15;
    fVar2 = (fVar11 * fVar26 + fVar10 * fVar21 + fVar17 * fVar20) - fVar22 * fVar14;
    fVar5 = (fVar22 * fVar26 + fVar17 * fVar21 + fVar11 * fVar14) - fVar10 * fVar20;
    fVar6 = param_3[4] +
            fVar19 * fVar9 + fVar23 * fVar3 + fVar12 * (fVar18 * fVar8 - fVar4 * fVar16) +
            fVar10 * fVar15 + fVar6 * fVar24 + fVar11 * (fVar17 * fVar13 - fVar22 * fVar25);
    fVar3 = (fVar10 * fVar14 + fVar22 * fVar21 + fVar11 * fVar20) - fVar17 * fVar26;
    fVar4 = (fVar11 * fVar21 - fVar10 * fVar26) - fVar17 * fVar14;
    fVar22 = fVar22 * fVar20;
  }
  *param_1 = fVar2;
  param_1[1] = fVar5;
  param_1[4] = fVar6;
  param_1[5] = fVar7;
  param_1[2] = fVar3;
  param_1[3] = fVar4 - fVar22;
  param_1[6] = fVar1;
  return;
}


