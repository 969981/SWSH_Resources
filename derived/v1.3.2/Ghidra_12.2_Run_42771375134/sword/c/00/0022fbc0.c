/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022fbc0; name: FUN_0022fbc0
 */


undefined8
FUN_0022fbc0(long param_1,long param_2,long param_3,float *param_4,float *param_5,undefined8 param_6
            ,long param_7)

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
  float local_78;
  float local_74;
  float local_28;
  
  fVar6 = param_4[3];
  fVar4 = *param_4;
  fVar8 = fVar6 + fVar6;
  fVar21 = param_4[4];
  fVar22 = param_4[5];
  fVar5 = fVar4 + fVar4;
  fVar7 = fVar4 * fVar5 + fVar6 * fVar8 + -1.0;
  fVar10 = param_4[2] * fVar8 + fVar5 * param_4[1];
  fVar8 = fVar5 * param_4[2] - fVar8 * param_4[1];
  fVar12 = *(float *)(param_2 + 8);
  fVar6 = fVar12 * fVar7;
  fVar5 = fVar12 * fVar10;
  fVar4 = fVar12 * fVar8;
  fVar16 = *(float *)(param_1 + 4);
  fVar13 = *(float *)(param_3 + 0x14) - fVar22;
  fVar14 = *(float *)(param_3 + 0x10) - fVar21;
  fVar23 = param_4[6];
  fVar20 = fVar16 + *(float *)(param_2 + 4);
  fVar15 = *(float *)(param_3 + 0x18) - fVar23;
  fVar11 = fVar20 + *param_5;
  fVar9 = -(fVar12 * fVar7) - fVar6;
  fVar7 = -(fVar12 * fVar10) - fVar5;
  fVar18 = fVar14 - fVar6;
  fVar17 = fVar13 - fVar5;
  fVar8 = -(fVar12 * fVar8) - fVar4;
  fVar10 = fVar15 - fVar4;
  fVar12 = fVar9 * fVar18 + fVar7 * fVar17 + fVar8 * fVar10;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar19 = fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7;
    if (fVar19 <= fVar12) {
      fVar18 = fVar18 - fVar9;
      fVar17 = fVar17 - fVar7;
      fVar10 = fVar10 - fVar8;
      fVar12 = 1.0;
    }
    else {
      fVar12 = fVar12 / fVar19;
      fVar18 = fVar18 - fVar9 * fVar12;
      fVar17 = fVar17 - fVar7 * fVar12;
      fVar10 = fVar10 - fVar8 * fVar12;
    }
  }
  fVar10 = fVar18 * fVar18 + fVar17 * fVar17 + fVar10 * fVar10;
  if (fVar11 * fVar11 <= fVar10) {
    uVar3 = 0;
  }
  else {
    local_74 = fVar14 - (fVar6 + fVar9 * fVar12);
    local_28 = fVar13 - (fVar5 + fVar7 * fVar12);
    local_78 = fVar15 - (fVar4 + fVar8 * fVar12);
    fVar4 = local_78 * local_78 + local_74 * local_74 + local_28 * local_28;
    if (fVar4 == 0.0) {
      local_74 = 1.0;
      local_28 = 0.0;
      local_78 = 0.0;
    }
    else {
      fVar4 = sqrtf(fVar4);
      fVar4 = 1.0 / fVar4;
      local_74 = local_74 * fVar4;
      local_28 = local_28 * fVar4;
      local_78 = local_78 * fVar4;
      fVar23 = param_4[6];
      fVar21 = param_4[4];
      fVar22 = param_4[5];
      fVar16 = *(float *)(param_1 + 4);
    }
    fVar4 = sqrtf(fVar10);
    uVar2 = *(uint *)(param_7 + 0x1000);
    if (uVar2 < 0x40) {
      pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
      *(uint *)(param_7 + 0x1000) = uVar2 + 1;
      *pfVar1 = local_74;
      pfVar1[3] = fVar4 - fVar20;
      pfVar1[2] = local_78;
      pfVar1[0xd] = -NAN;
      pfVar1[1] = local_28;
      pfVar1[4] = (fVar14 + fVar21) - local_74 * fVar16;
      pfVar1[5] = (fVar13 + fVar22) - local_28 * fVar16;
      pfVar1[6] = (fVar15 + fVar23) - local_78 * fVar16;
    }
    uVar3 = 1;
  }
  return uVar3;
}


