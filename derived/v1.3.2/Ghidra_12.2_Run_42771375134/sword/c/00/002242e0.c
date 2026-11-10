/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002242e0; name: FUN_002242e0
 */


void FUN_002242e0(float param_1,float param_2,float *param_3,long param_4,float *param_5,
                 float *param_6,float *param_7,float param_8)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
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
  float fVar33;
  float fVar34;
  float fVar35;
  
  fVar11 = DAT_01d4c3d8;
  fVar21 = *param_6;
  fVar22 = param_6[1];
  fVar23 = param_7[2];
  fVar20 = param_6[2];
  fVar10 = param_6[3] - fVar21;
  fVar13 = param_6[5] - fVar20;
  fVar25 = *param_7;
  fVar24 = param_7[1];
  fVar12 = param_6[4] - fVar22;
  fVar8 = param_6[7] - fVar22;
  fVar9 = param_6[6] - fVar21;
  fVar7 = param_6[8] - fVar20;
  fVar30 = fVar8 * fVar23 - fVar7 * fVar24;
  fVar31 = fVar7 * fVar25 - fVar9 * fVar23;
  fVar32 = fVar9 * fVar24 - fVar8 * fVar25;
  fVar29 = fVar13 * fVar32 + fVar10 * fVar30 + fVar12 * fVar31;
  param_2 = param_1 + param_2;
  if (DAT_01d4c3d8 <= fVar29) {
    fVar15 = param_5[1] - fVar22;
    fVar14 = *param_5 - fVar21;
    fVar16 = param_5[2] - fVar20;
    fVar18 = fVar13 * fVar15 - fVar12 * fVar16;
    fVar17 = fVar10 * fVar16 - fVar13 * fVar14;
    fVar31 = fVar30 * fVar14 + fVar31 * fVar15 + fVar32 * fVar16;
    fVar30 = fVar12 * fVar14 - fVar10 * fVar15;
    fVar32 = -(fVar29 * DAT_01d4c6ac);
    fVar14 = fVar29 + fVar29 * DAT_01d4c6ac;
    fVar15 = fVar30 * -fVar23 + fVar18 * -fVar25 + fVar17 * -fVar24;
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    if (fVar32 <= fVar31) {
      bVar3 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar31) && !NAN(fVar14)) {
        bVar3 = fVar31 < fVar14;
        bVar5 = fVar31 == fVar14;
        bVar6 = false;
      }
    }
    fVar31 = fVar31 + fVar15;
    bVar4 = true;
    if ((bVar5 || bVar3 != bVar6) && (bVar4 = false, !NAN(fVar15) && !NAN(fVar32))) {
      bVar4 = fVar15 < fVar32;
    }
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    if (!bVar4) {
      bVar3 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar31) && !NAN(fVar14)) {
        bVar3 = fVar31 < fVar14;
        bVar5 = fVar31 == fVar14;
        bVar6 = false;
      }
    }
    fVar29 = (1.0 / fVar29) * (fVar7 * fVar30 + fVar9 * fVar18 + fVar8 * fVar17);
    bVar4 = false;
    if ((bVar5 || bVar3 != bVar6) && (bVar4 = false, !NAN(fVar29) && !NAN(param_2))) {
      bVar4 = fVar29 < param_2;
    }
    if (bVar4) {
      uVar2 = *(uint *)(param_4 + 0x1000);
      if (uVar2 < 0x40) {
        fVar30 = param_3[2];
        fVar31 = param_3[3];
        fVar14 = param_3[4];
        fVar15 = param_3[5];
        fVar28 = param_5[1] - fVar24 * fVar29;
        fVar34 = *param_3;
        fVar35 = param_3[1];
        fVar26 = *param_5 - fVar25 * fVar29;
        fVar27 = param_5[2] - fVar23 * fVar29;
        fVar16 = param_3[6];
        fVar18 = param_3[7];
        fVar33 = param_3[8];
        fVar19 = param_3[9];
        fVar32 = param_3[10];
        fVar17 = param_3[0xb];
        pfVar1 = (float *)(param_4 + (ulong)uVar2 * 0x40);
        *(uint *)(param_4 + 0x1000) = uVar2 + 1;
        *pfVar1 = fVar25 * fVar34 + fVar24 * fVar31 + fVar23 * fVar16;
        pfVar1[1] = fVar25 * fVar35 + fVar24 * fVar14 + fVar23 * fVar18;
        pfVar1[4] = fVar26 * fVar34 + fVar28 * fVar31 + fVar27 * fVar16 + fVar19;
        pfVar1[5] = fVar26 * fVar35 + fVar28 * fVar14 + fVar27 * fVar18 + fVar32;
        pfVar1[6] = fVar26 * fVar30 + fVar28 * fVar15 + fVar27 * fVar33 + fVar17;
        pfVar1[2] = fVar25 * fVar30 + fVar24 * fVar15 + fVar23 * fVar33;
        pfVar1[3] = fVar29 - param_1;
        pfVar1[0xd] = param_8;
      }
    }
  }
  fVar23 = param_7[2];
  fVar25 = *param_7;
  fVar24 = param_7[1];
  fVar30 = fVar8 * fVar23 - fVar7 * fVar24;
  fVar32 = fVar7 * fVar25 - fVar9 * fVar23;
  fVar31 = fVar9 * fVar24 - fVar8 * fVar25;
  fVar29 = fVar13 * fVar31 + fVar10 * fVar30 + fVar12 * fVar32;
  if (fVar11 <= fVar29) {
    fVar22 = param_5[4] - fVar22;
    fVar21 = param_5[3] - fVar21;
    fVar20 = param_5[5] - fVar20;
    fVar14 = fVar10 * fVar20 - fVar13 * fVar21;
    fVar13 = fVar13 * fVar22 - fVar12 * fVar20;
    fVar11 = fVar12 * fVar21 - fVar10 * fVar22;
    fVar12 = fVar30 * fVar21 + fVar32 * fVar22 + fVar31 * fVar20;
    fVar20 = -(fVar29 * DAT_01d4c6ac);
    fVar21 = fVar29 + fVar29 * DAT_01d4c6ac;
    fVar10 = fVar11 * -fVar23 + fVar13 * -fVar25 + fVar14 * -fVar24;
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    if (fVar20 <= fVar12) {
      bVar3 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar12) && !NAN(fVar21)) {
        bVar3 = fVar12 < fVar21;
        bVar5 = fVar12 == fVar21;
        bVar6 = false;
      }
    }
    fVar12 = fVar12 + fVar10;
    bVar4 = true;
    if ((bVar5 || bVar3 != bVar6) && (bVar4 = false, !NAN(fVar10) && !NAN(fVar20))) {
      bVar4 = fVar10 < fVar20;
    }
    bVar3 = false;
    bVar5 = false;
    bVar6 = false;
    if (!bVar4) {
      bVar3 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fVar12) && !NAN(fVar21)) {
        bVar3 = fVar12 < fVar21;
        bVar5 = fVar12 == fVar21;
        bVar6 = false;
      }
    }
    fVar11 = (1.0 / fVar29) * (fVar7 * fVar11 + fVar9 * fVar13 + fVar8 * fVar14);
    bVar4 = false;
    if ((bVar5 || bVar3 != bVar6) && (bVar4 = false, !NAN(fVar11) && !NAN(param_2))) {
      bVar4 = fVar11 < param_2;
    }
    if (bVar4) {
      uVar2 = *(uint *)(param_4 + 0x1000);
      if (uVar2 < 0x40) {
        fVar13 = param_3[2];
        fVar20 = param_3[3];
        fVar9 = param_5[4] - fVar24 * fVar11;
        fVar22 = param_3[4];
        fVar31 = param_3[5];
        fVar7 = param_5[3] - fVar25 * fVar11;
        fVar10 = *param_3;
        fVar12 = param_3[1];
        fVar8 = param_5[5] - fVar23 * fVar11;
        fVar32 = param_3[6];
        fVar15 = param_3[7];
        fVar29 = param_3[8];
        fVar30 = param_3[9];
        fVar21 = param_3[10];
        fVar14 = param_3[0xb];
        pfVar1 = (float *)(param_4 + (ulong)uVar2 * 0x40);
        *(uint *)(param_4 + 0x1000) = uVar2 + 1;
        *pfVar1 = fVar25 * fVar10 + fVar24 * fVar20 + fVar23 * fVar32;
        pfVar1[1] = fVar25 * fVar12 + fVar24 * fVar22 + fVar23 * fVar15;
        pfVar1[4] = fVar7 * fVar10 + fVar9 * fVar20 + fVar8 * fVar32 + fVar30;
        pfVar1[5] = fVar7 * fVar12 + fVar9 * fVar22 + fVar8 * fVar15 + fVar21;
        pfVar1[6] = fVar7 * fVar13 + fVar9 * fVar31 + fVar8 * fVar29 + fVar14;
        pfVar1[0xd] = param_8;
        pfVar1[2] = fVar25 * fVar13 + fVar24 * fVar31 + fVar23 * fVar29;
        pfVar1[3] = fVar11 - param_1;
      }
    }
  }
  return;
}


