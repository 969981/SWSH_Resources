/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00121860; name: FUN_00121860
 */


void FUN_00121860(float *param_1,long param_2,float *param_3)

{
  long lVar1;
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
  
  lVar1 = *(long *)(param_3 + 10);
  fVar19 = *(float *)(lVar1 + 0x34) * -2.0;
  fVar5 = *(float *)(lVar1 + 0x28);
  fVar11 = *(float *)(lVar1 + 0x2c);
  fVar21 = *(float *)(lVar1 + 0x30) * -2.0;
  fVar12 = *(float *)(lVar1 + 0x38) * -2.0;
  fVar7 = *(float *)(lVar1 + 0x20);
  fVar9 = *(float *)(lVar1 + 0x24);
  fVar25 = fVar11 * fVar11 + -0.5;
  fVar17 = *param_3;
  fVar18 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar29 = fVar4 * fVar4 + -0.5;
  pfVar2 = *(float **)(param_2 + 0x60);
  fVar23 = ((fVar11 * fVar18 - fVar4 * fVar9) - fVar3 * fVar7) + fVar17 * fVar5;
  fVar13 = ((fVar11 * fVar17 - fVar4 * fVar7) - fVar18 * fVar5) + fVar3 * fVar9;
  fVar24 = fVar21 * fVar7 + fVar19 * fVar9 + fVar12 * fVar5;
  fVar20 = ((fVar11 * fVar3 - fVar4 * fVar5) - fVar17 * fVar9) + fVar18 * fVar7;
  fVar15 = pfVar2[4] + pfVar2[4];
  fVar16 = pfVar2[5] + pfVar2[5];
  fVar14 = pfVar2[6] + pfVar2[6];
  fVar27 = *pfVar2;
  fVar28 = pfVar2[1];
  fVar22 = pfVar2[2];
  fVar26 = pfVar2[3];
  fVar6 = fVar11 * fVar4 + fVar17 * fVar7 + fVar18 * fVar9 + fVar3 * fVar5;
  fVar8 = fVar7 * fVar24 + (fVar21 * fVar25 - fVar11 * (fVar12 * fVar9 - fVar19 * fVar5));
  fVar10 = fVar9 * fVar24 + (fVar19 * fVar25 - fVar11 * (fVar21 * fVar5 - fVar12 * fVar7));
  fVar19 = (fVar12 * fVar25 - fVar11 * (fVar19 * fVar7 - fVar21 * fVar9)) + fVar5 * fVar24;
  fVar10 = fVar10 + fVar10;
  fVar19 = fVar19 + fVar19;
  fVar5 = fVar6 * fVar6 + -0.5;
  fVar8 = fVar8 + fVar8;
  fVar12 = fVar13 * fVar15 + fVar23 * fVar16 + fVar20 * fVar14;
  fVar21 = fVar3 * fVar19 + fVar17 * fVar8 + fVar18 * fVar10;
  fVar7 = param_3[4];
  fVar9 = param_3[5];
  fVar11 = param_3[6];
  *param_1 = (fVar6 * fVar27 + fVar13 * fVar26 + fVar23 * fVar22) - fVar20 * fVar28;
  param_1[1] = (fVar20 * fVar27 + fVar23 * fVar26 + fVar6 * fVar28) - fVar13 * fVar22;
  param_1[4] = fVar7 + fVar17 * fVar21 + fVar29 * fVar8 + fVar4 * (fVar18 * fVar19 - fVar3 * fVar10)
               + fVar13 * fVar12 + fVar5 * fVar15 + fVar6 * (fVar23 * fVar14 - fVar20 * fVar16);
  param_1[5] = fVar9 + fVar18 * fVar21 + fVar29 * fVar10 + fVar4 * (fVar3 * fVar8 - fVar17 * fVar19)
               + fVar23 * fVar12 + fVar5 * fVar16 + fVar6 * (fVar20 * fVar15 - fVar13 * fVar14);
  param_1[2] = (fVar13 * fVar28 + fVar20 * fVar26 + fVar6 * fVar22) - fVar23 * fVar27;
  param_1[3] = ((fVar6 * fVar26 - fVar13 * fVar27) - fVar23 * fVar28) - fVar20 * fVar22;
  param_1[6] = fVar11 + fVar29 * fVar19 + fVar4 * (fVar17 * fVar10 - fVar18 * fVar8) +
                        fVar3 * fVar21 +
               fVar5 * fVar14 + fVar6 * (fVar13 * fVar16 - fVar23 * fVar15) + fVar20 * fVar12;
  return;
}


