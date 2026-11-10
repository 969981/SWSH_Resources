/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022c590; name: FUN_0022c590
 */


bool FUN_0022c590(undefined8 param_1,long param_2,float *param_3,float *param_4,float *param_5,
                 undefined8 param_6,long param_7)

{
  float *pfVar1;
  uint uVar2;
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
  float fVar33;
  float fVar34;
  
  fVar30 = *param_3;
  fVar20 = param_3[1];
  fVar22 = *param_4;
  fVar27 = param_4[1];
  fVar31 = fVar27 + fVar27;
  fVar25 = param_4[2];
  fVar5 = param_4[3];
  fVar19 = param_3[2];
  fVar18 = param_3[3];
  fVar28 = fVar22 + fVar22;
  fVar4 = param_4[4];
  fVar3 = param_4[5];
  fVar11 = fVar18 + fVar18;
  fVar6 = (fVar25 + fVar25) * fVar5;
  fVar9 = fVar28 * fVar27 + fVar6;
  fVar16 = (fVar4 - param_3[4]) + (fVar4 - param_3[4]);
  fVar13 = fVar25 * (fVar25 + fVar25);
  fVar6 = fVar28 * fVar27 - fVar6;
  fVar7 = fVar28 * fVar25 - fVar31 * fVar5;
  fVar8 = fVar28 * fVar25 + fVar31 * fVar5;
  fVar15 = fVar30 + fVar30;
  fVar12 = fVar31 * fVar25 + fVar28 * fVar5;
  fVar10 = fVar31 * fVar25 - fVar28 * fVar5;
  fVar32 = (fVar3 - param_3[5]) + (fVar3 - param_3[5]);
  fVar17 = 1.0 - fVar22 * fVar28;
  fVar34 = ((fVar22 * fVar18 - fVar5 * fVar30) - fVar25 * fVar20) + fVar27 * fVar19;
  fVar28 = (1.0 - fVar27 * fVar31) - fVar13;
  fVar13 = fVar17 - fVar13;
  fVar17 = fVar17 - fVar27 * fVar31;
  fVar14 = param_4[6];
  fVar31 = ((fVar27 * fVar18 - fVar5 * fVar20) - fVar22 * fVar19) + fVar25 * fVar30;
  fVar23 = (fVar14 - param_3[6]) + (fVar14 - param_3[6]);
  fVar33 = fVar5 * fVar18 + fVar22 * fVar30 + fVar27 * fVar20 + fVar25 * fVar19;
  fVar5 = ((fVar25 * fVar18 - fVar5 * fVar19) - fVar27 * fVar30) + fVar22 * fVar20;
  fVar34 = fVar34 + fVar34;
  fVar24 = *param_5;
  fVar22 = *(float *)(param_2 + 4);
  fVar26 = *(float *)(param_2 + 8);
  fVar27 = -(fVar15 * fVar19 - fVar11 * fVar20);
  fVar21 = -(fVar30 * fVar15 + fVar18 * fVar11 + -1.0);
  fVar25 = (1.0 - fVar31 * (fVar31 + fVar31)) - fVar5 * (fVar5 + fVar5);
  fVar29 = *(float *)(param_2 + 0xc);
  fVar23 = fVar24 - (((fVar18 * fVar18 + -0.5) * fVar16 +
                     fVar18 * (fVar32 * fVar19 - fVar23 * fVar20)) -
                    ((fVar16 * -fVar30 - fVar32 * fVar20) - fVar23 * fVar19) * fVar30);
  fVar30 = (fVar31 * fVar34 - fVar33 * (fVar5 + fVar5)) * fVar26;
  fVar18 = (fVar5 * fVar34 + fVar33 * (fVar31 + fVar31)) * fVar29;
  fVar15 = -(fVar19 * fVar11 + fVar15 * fVar20);
  fVar5 = fVar25 * fVar22;
  fVar31 = (fVar5 + fVar30 + fVar18) - fVar23;
  fVar16 = ((fVar5 + fVar30) - fVar18) - fVar23;
  fVar11 = ((fVar5 - fVar30) + fVar18) - fVar23;
  fVar34 = ((fVar5 - fVar30) - fVar18) - fVar23;
  if ((int)fVar31 < 0) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      *pfVar1 = fVar21;
      pfVar1[1] = fVar15;
      pfVar1[6] = fVar7 * fVar22 + fVar12 * fVar26 + fVar17 * fVar29 + fVar14;
      pfVar1[0xd] = -NAN;
      pfVar1[4] = fVar28 * fVar22 + fVar6 * fVar26 + fVar8 * fVar29 + fVar4;
      pfVar1[5] = fVar9 * fVar22 + fVar13 * fVar26 + fVar10 * fVar29 + fVar3;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar24 + fVar31;
    }
  }
  fVar31 = -(fVar25 * fVar22) - fVar30;
  fVar25 = ((fVar30 - fVar5) + fVar18) - fVar23;
  if ((int)fVar16 < 0) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar19 = -fVar29;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      *pfVar1 = fVar21;
      pfVar1[1] = fVar15;
      pfVar1[6] = fVar7 * fVar22 + fVar12 * fVar26 + fVar17 * fVar19 + fVar14;
      pfVar1[0xd] = -NAN;
      pfVar1[4] = fVar28 * fVar22 + fVar6 * fVar26 + fVar8 * fVar19 + fVar4;
      pfVar1[5] = fVar9 * fVar22 + fVar13 * fVar26 + fVar10 * fVar19 + fVar3;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar24 + fVar16;
    }
  }
  fVar5 = ((fVar30 - fVar5) - fVar18) - fVar23;
  if ((int)fVar11 < 0) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar16 = -fVar26;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      pfVar1[6] = fVar7 * fVar22 + fVar12 * fVar16 + fVar17 * fVar29 + fVar14;
      pfVar1[4] = fVar28 * fVar22 + fVar6 * fVar16 + fVar8 * fVar29 + fVar4;
      pfVar1[5] = fVar9 * fVar22 + fVar13 * fVar16 + fVar10 * fVar29 + fVar3;
      *pfVar1 = fVar21;
      pfVar1[1] = fVar15;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar24 + fVar11;
      pfVar1[0xd] = -NAN;
    }
  }
  fVar11 = (fVar31 + fVar18) - fVar23;
  if ((int)fVar34 < 0) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar16 = -fVar26;
      fVar19 = -fVar29;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      *pfVar1 = fVar21;
      pfVar1[1] = fVar15;
      pfVar1[4] = fVar28 * fVar22 + fVar6 * fVar16 + fVar8 * fVar19 + fVar4;
      pfVar1[5] = fVar9 * fVar22 + fVar13 * fVar16 + fVar10 * fVar19 + fVar3;
      pfVar1[6] = fVar7 * fVar22 + fVar12 * fVar16 + fVar17 * fVar19 + fVar14;
      pfVar1[0xd] = -NAN;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar24 + fVar34;
    }
  }
  fVar23 = (fVar31 - fVar18) - fVar23;
  if ((int)fVar25 < 0) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar31 = -fVar22;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      pfVar1[6] = fVar7 * fVar31 + fVar12 * fVar26 + fVar17 * fVar29 + fVar14;
      pfVar1[4] = fVar28 * fVar31 + fVar6 * fVar26 + fVar8 * fVar29 + fVar4;
      pfVar1[5] = fVar9 * fVar31 + fVar13 * fVar26 + fVar10 * fVar29 + fVar3;
      *pfVar1 = fVar21;
      pfVar1[1] = fVar15;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar24 + fVar25;
      pfVar1[0xd] = -NAN;
    }
  }
  if ((int)fVar5 < 0) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar31 = -fVar22;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      *pfVar1 = fVar21;
      pfVar1[1] = fVar15;
      fVar25 = -fVar29;
      pfVar1[0xd] = -NAN;
      pfVar1[4] = fVar28 * fVar31 + fVar6 * fVar26 + fVar8 * fVar25 + fVar4;
      pfVar1[5] = fVar9 * fVar31 + fVar13 * fVar26 + fVar10 * fVar25 + fVar3;
      pfVar1[6] = fVar7 * fVar31 + fVar12 * fVar26 + fVar17 * fVar25 + fVar14;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar24 + fVar5;
    }
  }
  if ((int)fVar11 < 0) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar5 = -fVar22;
      fVar31 = -fVar26;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      *pfVar1 = fVar21;
      pfVar1[1] = fVar15;
      pfVar1[4] = fVar28 * fVar5 + fVar6 * fVar31 + fVar8 * fVar29 + fVar4;
      pfVar1[5] = fVar9 * fVar5 + fVar13 * fVar31 + fVar10 * fVar29 + fVar3;
      pfVar1[6] = fVar7 * fVar5 + fVar12 * fVar31 + fVar17 * fVar29 + fVar14;
      pfVar1[0xd] = -NAN;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar24 + fVar11;
    }
  }
  if ((int)fVar23 < 0) {
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      fVar22 = -fVar22;
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      uVar2 = uVar2 + 1;
      *(uint *)(param_7 + 0x1000) = uVar2;
      *pfVar1 = fVar21;
      pfVar1[1] = fVar15;
      fVar26 = -fVar26;
      fVar29 = -fVar29;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar24 + fVar23;
      pfVar1[6] = fVar7 * fVar22 + fVar12 * fVar26 + fVar17 * fVar29 + fVar14;
      pfVar1[0xd] = -NAN;
      pfVar1[4] = fVar28 * fVar22 + fVar6 * fVar26 + fVar8 * fVar29 + fVar4;
      pfVar1[5] = fVar9 * fVar22 + fVar13 * fVar26 + fVar10 * fVar29 + fVar3;
    }
  }
  else {
    uVar2 = *(uint *)(param_7 + 0x1000);
  }
  return uVar2 != 0;
}


