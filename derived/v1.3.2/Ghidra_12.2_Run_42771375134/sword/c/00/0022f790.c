/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0022f790; name: FUN_0022f790
 */


undefined8
FUN_0022f790(long param_1,long param_2,long param_3,float *param_4,float *param_5,undefined8 param_6
            ,long param_7)

{
  float *pfVar1;
  uint uVar2;
  byte bVar3;
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
  
  fVar5 = *(float *)(param_3 + 0x10) - param_4[4];
  fVar4 = *(float *)(param_3 + 0x14) - param_4[5];
  fVar6 = *(float *)(param_3 + 0x18) - param_4[6];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar14 = fVar5 + fVar5;
  fVar15 = fVar4 + fVar4;
  fVar17 = fVar6 + fVar6;
  fVar13 = fVar8 * fVar8 + -0.5;
  fVar10 = *param_4;
  fVar9 = param_4[1];
  fVar19 = fVar14 * fVar10 + fVar15 * fVar9 + fVar17 * fVar7;
  fVar16 = fVar10 * fVar19 + (fVar14 * fVar13 - fVar8 * (fVar17 * fVar9 - fVar15 * fVar7));
  fVar18 = *(float *)(param_2 + 4);
  fVar11 = fVar9 * fVar19 + (fVar15 * fVar13 - fVar8 * (fVar14 * fVar7 - fVar17 * fVar10));
  fVar12 = *(float *)(param_1 + 4);
  if (-fVar18 <= fVar16) {
    if (fVar16 <= fVar18) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
      fVar16 = fVar18;
    }
  }
  else {
    bVar3 = 1;
    fVar16 = -fVar18;
  }
  fVar15 = (fVar17 * fVar13 - fVar8 * (fVar15 * fVar10 - fVar14 * fVar9)) + fVar7 * fVar19;
  fVar17 = *(float *)(param_2 + 8);
  fVar14 = -fVar17;
  if (fVar14 <= fVar11) {
    fVar14 = fVar11;
    if (fVar17 < fVar11) {
      bVar3 = 1;
      fVar14 = fVar17;
    }
    fVar11 = *(float *)(param_2 + 0xc);
  }
  else {
    bVar3 = 1;
    fVar11 = *(float *)(param_2 + 0xc);
  }
  fVar17 = -fVar11;
  if (fVar17 <= fVar15) {
    fVar17 = fVar11;
    if (fVar15 <= fVar11) {
      fVar17 = fVar15;
    }
    if (!(bool)(bVar3 | fVar11 < fVar15)) {
      fVar7 = fabsf(fVar16);
      fVar5 = fabsf(fVar14);
      fVar4 = fabsf(fVar15);
      fVar5 = *(float *)(param_2 + 8) - fVar5;
      fVar7 = *(float *)(param_2 + 4) - fVar7;
      fVar4 = *(float *)(param_2 + 0xc) - fVar4;
      if (fVar7 <= fVar5) {
        if (fVar4 <= fVar7) goto LAB_0022faa4;
        fVar6 = 0.0;
        fVar8 = 0.0;
        fVar9 = 2.0;
        if (fVar16 <= 0.0) {
          fVar9 = -2.0;
        }
      }
      else if (fVar4 <= fVar5) {
LAB_0022faa4:
        fVar8 = 0.0;
        fVar6 = 1.0;
        if (fVar15 <= 0.0) {
          fVar6 = -1.0;
        }
        fVar9 = 0.0;
        fVar7 = fVar4;
      }
      else {
        fVar6 = 0.0;
        fVar8 = 2.0;
        if (fVar14 <= 0.0) {
          fVar8 = -2.0;
        }
        fVar9 = 0.0;
        fVar7 = fVar5;
      }
      fVar7 = -fVar7;
      fVar16 = *(float *)(param_3 + 0x18);
      fVar10 = param_4[2];
      fVar13 = param_4[3];
      fVar6 = fVar6 + fVar6;
      fVar14 = *param_4;
      fVar17 = param_4[1];
      fVar11 = *(float *)(param_3 + 0x10);
      fVar15 = *(float *)(param_3 + 0x14);
      fVar19 = fVar13 * fVar13 + -0.5;
      fVar18 = fVar9 * fVar14 + fVar8 * fVar17 + fVar6 * fVar10;
      fVar5 = fVar14 * fVar18 + fVar9 * fVar19 + fVar13 * (fVar6 * fVar17 - fVar8 * fVar10);
      fVar4 = fVar17 * fVar18 + fVar8 * fVar19 + fVar13 * (fVar9 * fVar10 - fVar6 * fVar14);
      fVar6 = fVar6 * fVar19 + fVar13 * (fVar8 * fVar14 - fVar9 * fVar17) + fVar10 * fVar18;
      uVar2 = *(uint *)(param_7 + 0x1000);
      goto joined_r0x0022fb60;
    }
  }
  fVar16 = fVar16 + fVar16;
  fVar14 = fVar14 + fVar14;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar10 * fVar16 + fVar9 * fVar14 + fVar7 * fVar17;
  fVar11 = fVar10 * fVar18 + fVar13 * fVar16 + fVar8 * (fVar9 * fVar17 - fVar7 * fVar14);
  fVar15 = fVar9 * fVar18 + fVar13 * fVar14 + fVar8 * (fVar7 * fVar16 - fVar10 * fVar17);
  fVar4 = fVar4 - fVar15;
  fVar16 = fVar8 * (fVar10 * fVar14 - fVar9 * fVar16) + fVar13 * fVar17 + fVar7 * fVar18;
  fVar5 = fVar5 - fVar11;
  fVar6 = fVar6 - fVar16;
  fVar8 = fVar12 + *param_5;
  fVar7 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
  if (fVar8 * fVar8 < fVar7) {
    return 0;
  }
  fVar8 = sqrtf(fVar7);
  fVar8 = 1.0 / fVar8;
  fVar11 = fVar11 + param_4[4];
  fVar15 = fVar15 + param_4[5];
  fVar16 = fVar16 + param_4[6];
  fVar5 = fVar5 * fVar8;
  fVar4 = fVar4 * fVar8;
  fVar6 = fVar6 * fVar8;
  fVar7 = fVar7 * fVar8;
  uVar2 = *(uint *)(param_7 + 0x1000);
joined_r0x0022fb60:
  if (uVar2 < 0x40) {
    pfVar1 = (float *)(param_7 + (ulong)uVar2 * 0x40);
    *(uint *)(param_7 + 0x1000) = uVar2 + 1;
    pfVar1[4] = fVar11;
    pfVar1[5] = fVar15;
    *pfVar1 = fVar5;
    pfVar1[1] = fVar4;
    pfVar1[2] = fVar6;
    pfVar1[6] = fVar16;
    pfVar1[3] = fVar7 - fVar12;
    pfVar1[0xd] = -NAN;
  }
  return 1;
}


