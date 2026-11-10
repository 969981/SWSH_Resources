/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00121420; name: FUN_00121420
 */


void FUN_00121420(float *param_1,long param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
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
  
  if (param_3 == 0) {
    pfVar1 = *(float **)(param_2 + 0x60);
    pfVar2 = *(float **)(param_2 + 0x68);
    fVar3 = pfVar1[5] + pfVar1[5];
    fVar11 = pfVar2[2];
    fVar10 = pfVar2[3];
    fVar12 = *pfVar2;
    fVar14 = pfVar2[1];
    fVar5 = pfVar1[4] + pfVar1[4];
    fVar18 = *pfVar1;
    fVar19 = pfVar1[1];
    fVar15 = pfVar1[2];
    fVar16 = pfVar1[3];
    fVar4 = pfVar1[6] + pfVar1[6];
    fVar7 = fVar10 * fVar10 + -0.5;
    fVar9 = fVar5 * fVar12 + fVar3 * fVar14 + fVar4 * fVar11;
    fVar6 = (fVar10 * fVar18 + fVar12 * fVar16 + fVar14 * fVar15) - fVar11 * fVar19;
    fVar17 = fVar11 * fVar15;
    fVar8 = pfVar2[4] + fVar12 * fVar9 + fVar5 * fVar7 + fVar10 * (fVar4 * fVar14 - fVar3 * fVar11);
    fVar13 = pfVar2[5] + fVar14 * fVar9 + fVar3 * fVar7 + fVar10 * (fVar5 * fVar11 - fVar4 * fVar12)
    ;
    fVar5 = pfVar2[6] + fVar4 * fVar7 + fVar10 * (fVar3 * fVar12 - fVar5 * fVar14) + fVar11 * fVar9;
    fVar4 = (fVar11 * fVar18 + fVar14 * fVar16 + fVar10 * fVar19) - fVar12 * fVar15;
    fVar9 = (fVar12 * fVar19 + fVar11 * fVar16 + fVar10 * fVar15) - fVar14 * fVar18;
    fVar3 = (fVar10 * fVar16 - fVar12 * fVar18) - fVar14 * fVar19;
  }
  else {
    pfVar1 = *(float **)(param_3 + 0x28);
    fVar6 = pfVar1[0xd] * -2.0;
    fVar5 = pfVar1[10];
    fVar8 = pfVar1[0xb];
    fVar20 = pfVar1[0xc] * -2.0;
    fVar16 = pfVar1[8];
    fVar18 = pfVar1[9];
    fVar9 = pfVar1[0xe] * -2.0;
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    fVar14 = *pfVar1;
    fVar11 = pfVar1[1];
    fVar13 = fVar8 * fVar8 + -0.5;
    fVar27 = fVar20 * fVar16 + fVar6 * fVar18 + fVar9 * fVar5;
    fVar26 = fVar16 * fVar27 + (fVar20 * fVar13 - fVar8 * (fVar9 * fVar18 - fVar6 * fVar5));
    fVar25 = (fVar9 * fVar13 - fVar8 * (fVar6 * fVar16 - fVar20 * fVar18)) + fVar5 * fVar27;
    pfVar2 = *(float **)(param_2 + 0x60);
    fVar12 = pfVar2[5] + pfVar2[5];
    fVar7 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar29 = pfVar2[4] + pfVar2[4];
    fVar21 = pfVar2[2];
    fVar22 = pfVar2[3];
    fVar17 = ((fVar8 * fVar3 - fVar4 * fVar5) - fVar14 * fVar18) + fVar11 * fVar16;
    fVar28 = pfVar2[6] + pfVar2[6];
    fVar24 = ((fVar8 * fVar11 - fVar4 * fVar18) - fVar3 * fVar16) + fVar14 * fVar5;
    fVar19 = fVar8 * fVar4 + fVar14 * fVar16 + fVar11 * fVar18 + fVar3 * fVar5;
    fVar15 = fVar4 * fVar4 + -0.5;
    fVar23 = ((fVar8 * fVar14 - fVar4 * fVar16) - fVar11 * fVar5) + fVar3 * fVar18;
    fVar9 = fVar18 * fVar27 + (fVar6 * fVar13 - fVar8 * (fVar20 * fVar5 - fVar9 * fVar16));
    fVar5 = fVar19 * fVar19 + -0.5;
    fVar26 = fVar26 + fVar26;
    fVar9 = fVar9 + fVar9;
    fVar18 = fVar23 * fVar29 + fVar24 * fVar12 + fVar17 * fVar28;
    fVar25 = fVar25 + fVar25;
    fVar6 = (fVar19 * fVar7 + fVar23 * fVar22 + fVar24 * fVar21) - fVar17 * fVar10;
    fVar16 = fVar3 * fVar25 + fVar14 * fVar26 + fVar11 * fVar9;
    fVar8 = pfVar1[4] +
            fVar14 * fVar16 + fVar15 * fVar26 + fVar4 * (fVar11 * fVar25 - fVar3 * fVar9) +
            fVar23 * fVar18 + fVar5 * fVar29 + fVar19 * (fVar24 * fVar28 - fVar17 * fVar12);
    fVar13 = pfVar1[5] +
             fVar11 * fVar16 + fVar15 * fVar9 + fVar4 * (fVar3 * fVar26 - fVar14 * fVar25) +
             fVar24 * fVar18 + fVar5 * fVar12 + fVar19 * (fVar17 * fVar29 - fVar23 * fVar28);
    fVar5 = pfVar1[6] +
            fVar15 * fVar25 + fVar4 * (fVar14 * fVar9 - fVar11 * fVar26) + fVar3 * fVar16 +
            fVar5 * fVar28 + fVar19 * (fVar23 * fVar12 - fVar24 * fVar29) + fVar17 * fVar18;
    fVar4 = (fVar17 * fVar7 + fVar24 * fVar22 + fVar19 * fVar10) - fVar23 * fVar21;
    fVar9 = (fVar23 * fVar10 + fVar17 * fVar22 + fVar19 * fVar21) - fVar24 * fVar7;
    fVar3 = (fVar19 * fVar22 - fVar23 * fVar7) - fVar24 * fVar10;
    fVar17 = fVar17 * fVar21;
  }
  *param_1 = fVar6;
  param_1[1] = fVar4;
  param_1[4] = fVar8;
  param_1[5] = fVar13;
  param_1[2] = fVar9;
  param_1[3] = fVar3 - fVar17;
  param_1[6] = fVar5;
  return;
}


