/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ef940; name: FUN_001ef940
 */


void FUN_001ef940(long param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  float fVar18;
  float fVar20;
  undefined8 uVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  
  pfVar2 = &local_50;
  pfVar3 = &local_50;
  switch(param_4) {
  case 0:
    pfVar3 = (float *)0x0;
    if (param_2 != (float *)0x0) {
      if ((*(byte *)(param_1 + 0x17c) & 1) == 0) {
        local_38 = (float)FUN_003be0e0(param_1 + 0x80);
      }
      else {
        local_38 = *(float *)(*(long *)(param_1 + 0x70) + 0xa4);
      }
      pfVar3 = &local_40;
      fStack_3c = local_38 * param_2[1];
      local_40 = local_38 * *param_2;
      local_38 = local_38 * param_2[2];
    }
    if (param_3 == (float *)0x0) {
      pfVar2 = (float *)0x0;
    }
    else {
      if ((*(byte *)(param_1 + 0x17c) >> 1 & 1) == 0) {
        pfVar1 = (float *)FUN_003be160(param_1 + 0x80);
      }
      else {
        pfVar1 = (float *)(*(long *)(param_1 + 0x70) + 0xa8);
      }
      fVar6 = (float)*(undefined8 *)(param_1 + 0x140);
      fVar14 = fVar6 + fVar6;
      fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
      fVar16 = fVar7 + fVar7;
      fVar8 = (float)*(undefined8 *)(param_1 + 0x148);
      fVar17 = fVar8 + fVar8;
      fVar20 = fVar7 * fVar16;
      fVar21 = fVar8 * fVar17;
      fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20);
      uVar13 = NEON_fmov(0x3f800000,4);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar18 = fVar8 * fVar16 + fVar9 * fVar14;
      fVar12 = (float)((ulong)uVar13 >> 0x20);
      fVar10 = (float)uVar13 - fVar6 * fVar14;
      fVar23 = fVar8 * fVar14 - fVar9 * fVar16;
      fVar11 = fVar10 - fVar20;
      uVar15 = NEON_ext(CONCAT44(fVar7 * fVar14 - fVar9 * fVar17,fVar7 * fVar14 - fVar9 * fVar17),
                        CONCAT44((fVar12 - fVar6 * fVar14) - fVar21,fVar10 - fVar21),4,1);
      uVar19 = NEON_ext(CONCAT44((fVar12 - fVar20) - fVar21,((float)uVar13 - fVar20) - fVar21),
                        CONCAT44(fVar7 * fVar14 + fVar9 * fVar17,fVar7 * fVar14 + fVar9 * fVar17),4,
                        1);
      uVar13 = NEON_ext(CONCAT44(fVar8 * fVar14 + fVar9 * fVar16,fVar8 * fVar14 + fVar9 * fVar16),
                        CONCAT44(fVar8 * fVar16 - fVar9 * fVar14,fVar8 * fVar16 - fVar9 * fVar14),4,
                        1);
      fVar6 = pfVar1[2];
      fVar20 = fVar5 * (float)uVar15;
      fVar10 = fVar4 * (float)uVar19;
      fVar17 = (float)((ulong)uVar19 >> 0x20);
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar22 = fVar6 * (float)uVar13;
      fVar9 = (float)((ulong)uVar13 >> 0x20);
      fVar14 = *param_3;
      fVar24 = param_3[1];
      fVar7 = fVar22 * fVar9 + fVar10 * fVar17 + fVar20 * fVar16;
      fVar12 = fVar22 * fVar11 + fVar10 * fVar23 + fVar20 * fVar18;
      fVar8 = fVar6 * fVar9 * fVar11 + fVar4 * fVar17 * fVar23 + fVar5 * fVar16 * fVar18;
      fVar21 = param_3[2];
      local_48 = fVar21 * (fVar6 * fVar11 * fVar11 +
                          fVar4 * fVar23 * fVar23 + fVar5 * fVar18 * fVar18) +
                 fVar14 * fVar12 + fVar24 * fVar8;
      local_50 = fVar21 * fVar12 +
                 fVar14 * (fVar22 * (float)uVar13 + fVar10 * (float)uVar19 + fVar20 * (float)uVar15)
                 + fVar24 * fVar7;
      fStack_4c = fVar21 * fVar8 +
                  fVar14 * fVar7 +
                  fVar24 * (fVar6 * fVar9 * fVar9 +
                           fVar4 * fVar17 * fVar17 + fVar5 * fVar16 * fVar16);
    }
    FUN_001df250(param_1 + 0x60,pfVar3,pfVar2);
    break;
  case 1:
    pfVar2 = (float *)0x0;
    if (param_2 != (float *)0x0) {
      if ((*(byte *)(param_1 + 0x17c) & 1) == 0) {
        local_38 = (float)FUN_003be0e0(param_1 + 0x80);
      }
      else {
        local_38 = *(float *)(*(long *)(param_1 + 0x70) + 0xa4);
      }
      pfVar2 = &local_40;
      fStack_3c = local_38 * param_2[1];
      local_40 = local_38 * *param_2;
      local_38 = local_38 * param_2[2];
    }
    if (param_3 == (float *)0x0) {
      pfVar3 = (float *)0x0;
    }
    else {
      if ((*(byte *)(param_1 + 0x17c) >> 1 & 1) == 0) {
        pfVar1 = (float *)FUN_003be160(param_1 + 0x80);
      }
      else {
        pfVar1 = (float *)(*(long *)(param_1 + 0x70) + 0xa8);
      }
      fVar6 = (float)*(undefined8 *)(param_1 + 0x140);
      fVar14 = fVar6 + fVar6;
      fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
      fVar16 = fVar7 + fVar7;
      fVar8 = (float)*(undefined8 *)(param_1 + 0x148);
      fVar17 = fVar8 + fVar8;
      fVar20 = fVar7 * fVar16;
      fVar21 = fVar8 * fVar17;
      fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20);
      uVar13 = NEON_fmov(0x3f800000,4);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar18 = fVar8 * fVar16 + fVar9 * fVar14;
      fVar12 = (float)((ulong)uVar13 >> 0x20);
      fVar10 = (float)uVar13 - fVar6 * fVar14;
      fVar23 = fVar8 * fVar14 - fVar9 * fVar16;
      fVar11 = fVar10 - fVar20;
      uVar15 = NEON_ext(CONCAT44(fVar7 * fVar14 - fVar9 * fVar17,fVar7 * fVar14 - fVar9 * fVar17),
                        CONCAT44((fVar12 - fVar6 * fVar14) - fVar21,fVar10 - fVar21),4,1);
      uVar19 = NEON_ext(CONCAT44((fVar12 - fVar20) - fVar21,((float)uVar13 - fVar20) - fVar21),
                        CONCAT44(fVar7 * fVar14 + fVar9 * fVar17,fVar7 * fVar14 + fVar9 * fVar17),4,
                        1);
      uVar13 = NEON_ext(CONCAT44(fVar8 * fVar14 + fVar9 * fVar16,fVar8 * fVar14 + fVar9 * fVar16),
                        CONCAT44(fVar8 * fVar16 - fVar9 * fVar14,fVar8 * fVar16 - fVar9 * fVar14),4,
                        1);
      fVar6 = pfVar1[2];
      fVar20 = fVar5 * (float)uVar15;
      fVar10 = fVar4 * (float)uVar19;
      fVar17 = (float)((ulong)uVar19 >> 0x20);
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      fVar22 = fVar6 * (float)uVar13;
      fVar9 = (float)((ulong)uVar13 >> 0x20);
      fVar14 = *param_3;
      fVar24 = param_3[1];
      fVar7 = fVar22 * fVar9 + fVar10 * fVar17 + fVar20 * fVar16;
      fVar12 = fVar22 * fVar11 + fVar10 * fVar23 + fVar20 * fVar18;
      fVar8 = fVar6 * fVar9 * fVar11 + fVar4 * fVar17 * fVar23 + fVar5 * fVar16 * fVar18;
      fVar21 = param_3[2];
      local_48 = fVar21 * (fVar6 * fVar11 * fVar11 +
                          fVar4 * fVar23 * fVar23 + fVar5 * fVar18 * fVar18) +
                 fVar14 * fVar12 + fVar24 * fVar8;
      local_50 = fVar21 * fVar12 +
                 fVar14 * (fVar22 * (float)uVar13 + fVar10 * (float)uVar19 + fVar20 * (float)uVar15)
                 + fVar24 * fVar7;
      fStack_4c = fVar21 * fVar8 +
                  fVar14 * fVar7 +
                  fVar24 * (fVar6 * fVar9 * fVar9 +
                           fVar4 * fVar17 * fVar17 + fVar5 * fVar16 * fVar16);
    }
    FUN_001df380(param_1 + 0x60,pfVar2,pfVar3);
    break;
  case 2:
    FUN_001df380(param_1 + 0x60,param_2,param_3);
    return;
  case 3:
    FUN_001df250(param_1 + 0x60,param_2,param_3);
    return;
  }
  return;
}


