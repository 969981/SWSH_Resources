/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022cca0; name: FUN_0022cca0
 */


undefined8
FUN_0022cca0(undefined8 param_1,long param_2,float *param_3,float *param_4,float *param_5,
            undefined8 param_6,long param_7)

{
  float *pfVar1;
  uint uVar2;
  undefined8 uVar3;
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
  
  fVar10 = param_3[4];
  fVar11 = param_3[5];
  fVar14 = param_4[5] - fVar11;
  fVar12 = param_3[6];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar8 = param_4[4] - fVar10;
  fVar15 = param_4[6] - fVar12;
  fVar8 = fVar8 + fVar8;
  fVar14 = fVar14 + fVar14;
  fVar15 = fVar15 + fVar15;
  fVar9 = fVar7 * fVar7 + -0.5;
  fVar18 = (fVar8 * -fVar4 - fVar14 * fVar5) - fVar15 * fVar6;
  fVar16 = (fVar9 * fVar8 + fVar7 * (fVar14 * fVar6 - fVar15 * fVar5)) - fVar18 * fVar4;
  fVar13 = (fVar9 * fVar14 + fVar7 * (fVar15 * fVar4 - fVar8 * fVar6)) - fVar18 * fVar5;
  fVar20 = param_4[2];
  fVar22 = param_4[3];
  fVar8 = (fVar9 * fVar15 + fVar7 * (fVar8 * fVar5 - fVar14 * fVar4)) - fVar18 * fVar6;
  fVar14 = *param_4;
  fVar18 = param_4[1];
  fVar19 = ((fVar7 * fVar14 - fVar22 * fVar4) - fVar20 * fVar5) + fVar18 * fVar6;
  fVar23 = ((fVar7 * fVar18 - fVar22 * fVar5) - fVar14 * fVar6) + fVar20 * fVar4;
  fVar15 = fVar7 * fVar22 + fVar14 * fVar4 + fVar18 * fVar5 + fVar20 * fVar6;
  fVar17 = fVar19 + fVar19;
  fVar21 = fVar15 + fVar15;
  fVar22 = ((fVar7 * fVar20 - fVar22 * fVar6) - fVar18 * fVar4) + fVar14 * fVar5;
  fVar20 = *(float *)(param_2 + 8);
  fVar14 = fVar20 * (fVar19 * fVar17 + fVar15 * fVar21 + -1.0);
  fVar24 = fVar7 + fVar7;
  fVar18 = fVar20 * (fVar22 * fVar21 + fVar17 * fVar23);
  fVar20 = fVar20 * (fVar17 * fVar22 - fVar21 * fVar23);
  fVar22 = fVar4 + fVar4;
  fVar15 = fVar4 * fVar22 + fVar7 * fVar24 + -1.0;
  fVar17 = fVar6 * fVar24 + fVar22 * fVar5;
  fVar21 = (fVar16 + fVar14) - *(float *)(param_2 + 4);
  fVar14 = (fVar16 - fVar14) - *(float *)(param_2 + 4);
  fVar19 = *param_5;
  fVar16 = fVar22 * fVar6 - fVar24 * fVar5;
  if (fVar21 <= fVar19) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar23 = fVar8 + fVar20;
      fVar22 = fVar13 + fVar18;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      fVar24 = fVar21 + fVar21;
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      pfVar1[2] = -fVar16;
      pfVar1[3] = fVar21;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      *pfVar1 = -fVar15;
      pfVar1[1] = -fVar17;
      fVar21 = fVar6 * fVar23 + fVar5 * fVar22 + fVar4 * fVar24;
      pfVar1[0xd] = -NAN;
      pfVar1[4] = fVar10 + fVar9 * fVar24 + fVar7 * (fVar5 * fVar23 - fVar6 * fVar22) +
                           fVar4 * fVar21;
      pfVar1[5] = fVar11 + fVar5 * fVar21 +
                           fVar9 * fVar22 + fVar7 * (fVar6 * fVar24 - fVar4 * fVar23);
      pfVar1[6] = fVar12 + fVar9 * fVar23 + fVar7 * (fVar4 * fVar22 - fVar5 * fVar24) +
                           fVar6 * fVar21;
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  if (fVar14 <= fVar19) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar13 = fVar13 - fVar18;
      fVar8 = fVar8 - fVar20;
      fVar11 = fVar14 + fVar14;
      fVar19 = param_3[5];
      fVar12 = param_3[6];
      fVar13 = fVar13 + fVar13;
      fVar8 = fVar8 + fVar8;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      fVar18 = param_3[4];
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      *pfVar1 = -fVar15;
      pfVar1[1] = -fVar17;
      pfVar1[2] = -fVar16;
      pfVar1[3] = fVar14;
      fVar10 = fVar6 * fVar8 + fVar5 * fVar13 + fVar4 * fVar11;
      pfVar1[0xd] = -NAN;
      pfVar1[4] = fVar9 * fVar11 + fVar7 * (fVar5 * fVar8 - fVar6 * fVar13) + fVar4 * fVar10 +
                  fVar18;
      pfVar1[5] = fVar5 * fVar10 + fVar9 * fVar13 + fVar7 * (fVar6 * fVar11 - fVar4 * fVar8) +
                  fVar19;
      pfVar1[6] = fVar9 * fVar8 + fVar7 * (fVar4 * fVar13 - fVar5 * fVar11) + fVar6 * fVar10 +
                  fVar12;
    }
    return 1;
  }
  return uVar3;
}


