/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002fe940; name: FUN_002fe940
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002fe940(long param_1,float *param_2,float *param_3,float *param_4,uint param_5,
                 uint param_6)

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
  
  pfVar1 = *(float **)(param_1 + 8);
  pfVar2 = pfVar1;
  if (param_6 != 0) {
    fVar3 = *param_2;
    fVar7 = param_2[1];
    fVar12 = *param_3;
    fVar13 = param_3[1];
    fVar18 = fVar7 * fVar13;
    fVar5 = param_2[2];
    fVar9 = param_2[3];
    fVar4 = param_3[2];
    fVar19 = param_3[3];
    fVar15 = fVar3 * fVar12;
    fVar20 = fVar5 * fVar4;
    fVar21 = fVar20 + fVar15 + fVar18;
    fVar10 = fVar7 * fVar19 + fVar9 * fVar13;
    fVar22 = fVar5 * fVar12 + fVar3 * fVar4;
    fVar8 = fVar3 * fVar19 + fVar9 * fVar12;
    fVar14 = fVar5 * fVar19 + fVar9 * fVar4;
    fVar16 = fVar7 * fVar12 + fVar3 * fVar13;
    fVar23 = fVar7 * fVar4 + fVar5 * fVar13;
    fVar6 = fVar19 * fVar9 - fVar21;
    fVar11 = (fVar16 - fVar14) * 0.5;
    fVar17 = (fVar22 - fVar10) * 0.5;
    fVar16 = (fVar16 + fVar14) * 0.5;
    fVar14 = (fVar23 + fVar8) * 0.5;
    fVar22 = (fVar22 + fVar10) * 0.5;
    fVar23 = (fVar23 - fVar8) * 0.5;
    fVar8 = (fVar15 + fVar15 + fVar6) * 0.5;
    fVar10 = (fVar18 + fVar18 + fVar6) * 0.5;
    fVar6 = (fVar20 + fVar20 + fVar6) * 0.5;
    if (fVar21 + fVar19 * fVar9 == 0.0) {
      fVar8 = fVar8 + DAT_01d4c708;
      fVar10 = fVar10 + DAT_01d4c708;
      fVar6 = fVar6 + DAT_01d4c708;
    }
    if ((param_6 & 1) != 0) {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      pfVar1[2] = 0.0;
      pfVar1[5] = fVar16;
      pfVar1[6] = fVar17;
      pfVar1[8] = 0.0;
      pfVar1[9] = 0.0;
      pfVar1[10] = 0.0;
      *(undefined2 *)((long)pfVar1 + 0x4e) = 0x400;
      pfVar1[0xc] = fVar8;
      pfVar1[0xd] = fVar16;
      pfVar1[3] = -(((fVar9 * fVar12 - fVar3 * fVar19) - fVar7 * fVar4) + fVar5 * fVar13);
      pfVar1[4] = fVar8;
      pfVar1[0xe] = fVar17;
      pfVar2 = pfVar1 + 0x14;
    }
    if ((param_6 >> 1 & 1) != 0) {
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
      pfVar2[2] = 0.0;
      pfVar2[5] = fVar10;
      pfVar2[6] = fVar14;
      pfVar2[8] = 0.0;
      pfVar2[9] = 0.0;
      *(undefined2 *)((long)pfVar2 + 0x4e) = 0x400;
      pfVar2[10] = 0.0;
      pfVar2[0xc] = fVar11;
      pfVar2[0xd] = fVar10;
      pfVar2[3] = -(((fVar9 * fVar13 - fVar7 * fVar19) - fVar5 * fVar12) + fVar3 * fVar4);
      pfVar2[4] = fVar11;
      pfVar2[0xe] = fVar14;
      pfVar2 = pfVar2 + 0x14;
    }
    if ((param_6 >> 2 & 1) != 0) {
      *(undefined2 *)((long)pfVar2 + 0x4e) = 0x400;
      pfVar2[0] = 0.0;
      pfVar2[1] = 0.0;
      pfVar2[2] = 0.0;
      pfVar2[4] = fVar22;
      pfVar2[5] = fVar23;
      pfVar2[8] = 0.0;
      pfVar2[9] = 0.0;
      pfVar2[10] = 0.0;
      pfVar2[6] = fVar6;
      pfVar2[0xc] = fVar22;
      pfVar2[0xd] = fVar23;
      pfVar2[0xe] = fVar6;
      pfVar2[3] = -(((fVar9 * fVar4 - fVar5 * fVar19) - fVar3 * fVar13) + fVar7 * fVar12);
      pfVar2 = pfVar2 + 0x14;
    }
  }
  if (param_5 != 0) {
    fVar8 = *param_2;
    fVar10 = param_2[1];
    fVar12 = fVar10 + fVar10;
    fVar6 = param_2[2];
    fVar9 = param_2[3];
    fVar3 = fVar8 + fVar8;
    fVar7 = fVar3 * fVar10;
    fVar14 = fVar6 * (fVar6 + fVar6);
    fVar4 = fVar3 * fVar9;
    fVar5 = fVar12 * fVar6;
    fVar11 = (fVar6 + fVar6) * fVar9;
    fVar16 = fVar7 + fVar11;
    fVar15 = fVar3 * fVar6 - fVar12 * fVar9;
    fVar8 = 1.0 - fVar8 * fVar3;
    fVar13 = (1.0 - fVar10 * fVar12) - fVar14;
    if ((param_5 & 1) == 0) {
      fVar19 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
    }
    else {
      fVar18 = *param_4;
      fVar19 = 0.0 - fVar13 * fVar18;
      fVar17 = 0.0 - fVar16 * fVar18;
      fVar18 = 0.0 - fVar15 * fVar18;
    }
    if ((param_5 >> 1 & 1) != 0) {
      fVar20 = param_4[1];
      fVar19 = fVar19 - (fVar7 - fVar11) * fVar20;
      fVar17 = fVar17 - (fVar8 - fVar14) * fVar20;
      fVar18 = fVar18 - (fVar5 + fVar4) * fVar20;
    }
    fVar20 = fVar5 + fVar4;
    fVar14 = fVar8 - fVar14;
    fVar7 = fVar7 - fVar11;
    fVar6 = fVar3 * fVar6 + fVar12 * fVar9;
    fVar5 = fVar5 - fVar4;
    fVar8 = fVar8 - fVar10 * fVar12;
    if ((param_5 >> 2 & 1) != 0) {
      fVar10 = param_4[2];
      fVar19 = fVar19 - fVar6 * fVar10;
      fVar17 = fVar17 - fVar5 * fVar10;
      fVar18 = fVar18 - fVar8 * fVar10;
    }
    if ((param_5 & 1) != 0) {
      fVar10 = *param_4;
      *(undefined2 *)((long)pfVar2 + 0x4e) = 0x400;
      *pfVar2 = fVar13;
      pfVar2[1] = fVar16;
      pfVar2[2] = fVar15;
      fVar9 = *(float *)(param_1 + 0x18);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar4 = *(float *)(param_1 + 0x14);
      pfVar2[8] = fVar13;
      pfVar2[9] = fVar16;
      pfVar2[10] = fVar15;
      fVar4 = fVar17 + fVar4;
      fVar3 = fVar19 + fVar3;
      fVar9 = fVar18 + fVar9;
      pfVar2[4] = fVar15 * fVar4 - fVar16 * fVar9;
      pfVar2[5] = fVar13 * fVar9 - fVar15 * fVar3;
      pfVar2[6] = fVar16 * fVar3 - fVar13 * fVar4;
      fVar3 = *(float *)(param_1 + 0x1c);
      fVar4 = *(float *)(param_1 + 0x20);
      fVar9 = *(float *)(param_1 + 0x24);
      pfVar2[3] = -fVar10;
      pfVar2[0xc] = fVar15 * fVar4 - fVar16 * fVar9;
      pfVar2[0xd] = fVar13 * fVar9 - fVar15 * fVar3;
      pfVar2[0xe] = fVar16 * fVar3 - fVar13 * fVar4;
      pfVar2 = pfVar2 + 0x14;
    }
    if ((param_5 >> 1 & 1) != 0) {
      fVar10 = param_4[1];
      *(undefined2 *)((long)pfVar2 + 0x4e) = 0x400;
      *pfVar2 = fVar7;
      pfVar2[1] = fVar14;
      pfVar2[2] = fVar20;
      fVar9 = *(float *)(param_1 + 0x18);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar4 = *(float *)(param_1 + 0x14);
      pfVar2[8] = fVar7;
      pfVar2[9] = fVar14;
      pfVar2[10] = fVar20;
      fVar4 = fVar17 + fVar4;
      fVar3 = fVar19 + fVar3;
      fVar9 = fVar18 + fVar9;
      pfVar2[4] = fVar20 * fVar4 - fVar14 * fVar9;
      pfVar2[5] = fVar7 * fVar9 - fVar20 * fVar3;
      pfVar2[6] = fVar14 * fVar3 - fVar7 * fVar4;
      fVar3 = *(float *)(param_1 + 0x1c);
      fVar4 = *(float *)(param_1 + 0x20);
      fVar9 = *(float *)(param_1 + 0x24);
      pfVar2[3] = -fVar10;
      pfVar2[0xc] = fVar20 * fVar4 - fVar14 * fVar9;
      pfVar2[0xd] = fVar7 * fVar9 - fVar20 * fVar3;
      pfVar2[0xe] = fVar14 * fVar3 - fVar7 * fVar4;
      pfVar2 = pfVar2 + 0x14;
    }
    if ((param_5 >> 2 & 1) != 0) {
      fVar4 = param_4[2];
      *(undefined2 *)((long)pfVar2 + 0x4e) = 0x400;
      *pfVar2 = fVar6;
      pfVar2[1] = fVar5;
      pfVar2[2] = fVar8;
      fVar17 = fVar17 + *(float *)(param_1 + 0x14);
      fVar19 = fVar19 + *(float *)(param_1 + 0x10);
      fVar10 = *(float *)(param_1 + 0x18);
      pfVar2[8] = fVar6;
      pfVar2[9] = fVar5;
      pfVar2[10] = fVar8;
      fVar18 = fVar18 + fVar10;
      pfVar2[4] = fVar8 * fVar17 - fVar5 * fVar18;
      pfVar2[5] = fVar6 * fVar18 - fVar8 * fVar19;
      pfVar2[6] = fVar5 * fVar19 - fVar6 * fVar17;
      fVar10 = *(float *)(param_1 + 0x1c);
      fVar3 = *(float *)(param_1 + 0x20);
      fVar7 = *(float *)(param_1 + 0x24);
      pfVar2[3] = -fVar4;
      pfVar2[0xc] = fVar8 * fVar3 - fVar5 * fVar7;
      pfVar2[0xd] = fVar6 * fVar7 - fVar8 * fVar10;
      pfVar2[0xe] = fVar5 * fVar10 - fVar6 * fVar3;
      pfVar2 = pfVar2 + 0x14;
    }
  }
  for (; pfVar1 < pfVar2; pfVar1 = pfVar1 + 0x14) {
    *(undefined2 *)(pfVar1 + 0x13) = 0x10;
  }
  *(float **)(param_1 + 8) = pfVar2;
  return;
}


