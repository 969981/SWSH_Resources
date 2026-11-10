/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ae520; name: FUN_001ae520
 */


void FUN_001ae520(float *param_1,float *param_2,float *param_3)

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
  float fVar31;
  float fVar32;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = fVar2 + fVar2;
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = fVar1 + fVar1;
  fVar10 = fVar3 * (fVar3 + fVar3);
  fVar9 = (fVar3 + fVar3) * fVar4;
  fVar18 = 1.0 - fVar1 * fVar5;
  fVar6 = fVar5 * fVar2 + fVar9;
  fVar8 = fVar5 * fVar3 - fVar7 * fVar4;
  fVar9 = fVar5 * fVar2 - fVar9;
  fVar11 = fVar7 * fVar3 + fVar5 * fVar4;
  fVar1 = fVar5 * fVar3 + fVar7 * fVar4;
  fVar3 = fVar7 * fVar3 - fVar5 * fVar4;
  fVar14 = param_3[4];
  fVar15 = param_3[5];
  fVar4 = (1.0 - fVar2 * fVar7) - fVar10;
  fVar2 = fVar18 - fVar2 * fVar7;
  fVar23 = fVar14 + fVar14;
  fVar12 = param_3[2];
  fVar5 = param_3[3];
  fVar21 = fVar5 + fVar5;
  fVar18 = fVar18 - fVar10;
  fVar7 = param_3[6];
  fVar26 = fVar15 * (fVar15 + fVar15);
  fVar19 = (fVar15 + fVar15) * fVar7;
  fVar13 = 1.0 - fVar5 * fVar21;
  fVar29 = fVar21 * fVar14 + fVar19;
  fVar31 = fVar21 * fVar15 - fVar23 * fVar7;
  fVar19 = fVar21 * fVar14 - fVar19;
  fVar20 = fVar23 * fVar15 + fVar21 * fVar7;
  fVar16 = fVar23 * fVar15 - fVar21 * fVar7;
  fVar17 = fVar13 - fVar26;
  fVar26 = (1.0 - fVar14 * fVar23) - fVar26;
  fVar24 = fVar21 * fVar15 + fVar23 * fVar7;
  fVar13 = fVar13 - fVar14 * fVar23;
  fVar7 = fVar31 * fVar12;
  fVar22 = *param_3;
  fVar25 = param_3[1];
  fVar32 = fVar29 * fVar25;
  fVar27 = fVar22 * fVar26;
  fVar28 = fVar22 * fVar19;
  fVar22 = fVar22 * fVar24;
  fVar5 = fVar17 * fVar25;
  fVar25 = fVar16 * fVar25;
  fVar10 = fVar20 * fVar12;
  fVar12 = fVar13 * fVar12;
  fVar30 = fVar26 * fVar27 + fVar29 * fVar32 + fVar31 * fVar7;
  fVar14 = fVar26 * fVar28 + fVar29 * fVar5 + fVar31 * fVar10;
  fVar26 = fVar26 * fVar22 + fVar29 * fVar25 + fVar31 * fVar12;
  fVar21 = fVar19 * fVar22 + fVar17 * fVar25 + fVar20 * fVar12;
  fVar15 = fVar24 * fVar27 + fVar16 * fVar32 + fVar13 * fVar7;
  fVar23 = fVar24 * fVar28 + fVar16 * fVar5 + fVar13 * fVar10;
  fVar12 = fVar24 * fVar22 + fVar16 * fVar25 + fVar13 * fVar12;
  fVar7 = fVar19 * fVar27 + fVar17 * fVar32 + fVar20 * fVar7;
  fVar5 = fVar19 * fVar28 + fVar17 * fVar5 + fVar20 * fVar10;
  *param_1 = fVar1 * fVar26 + fVar4 * fVar30 + fVar9 * fVar14;
  param_1[1] = fVar3 * fVar26 + fVar6 * fVar30 + fVar18 * fVar14;
  param_1[2] = fVar2 * fVar26 + fVar8 * fVar30 + fVar11 * fVar14;
  param_1[3] = fVar1 * fVar21 + fVar4 * fVar7 + fVar9 * fVar5;
  param_1[4] = fVar3 * fVar21 + fVar6 * fVar7 + fVar18 * fVar5;
  param_1[5] = fVar2 * fVar21 + fVar8 * fVar7 + fVar11 * fVar5;
  param_1[6] = fVar1 * fVar12 + fVar4 * fVar15 + fVar9 * fVar23;
  param_1[7] = fVar3 * fVar12 + fVar6 * fVar15 + fVar18 * fVar23;
  param_1[8] = fVar2 * fVar12 + fVar8 * fVar15 + fVar11 * fVar23;
  param_1[9] = param_2[4];
  param_1[10] = param_2[5];
  param_1[0xb] = param_2[6];
  return;
}


