/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c0340; name: FUN_003c0340
 */


float FUN_003c0340(float param_1,float param_2,long param_3,float *param_4)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
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
  
  lVar3 = *(long *)(param_3 + 0x50);
  fVar18 = *(float *)(param_3 + 0x90);
  fVar13 = *(float *)(param_3 + 0x94);
  fVar16 = *(float *)(param_3 + 0xa0);
  fVar17 = *(float *)(param_3 + 0xa4);
  fVar15 = *(float *)(param_3 + 0x98);
  fVar12 = *(float *)(param_3 + 0xa8);
  fVar14 = *(float *)(lVar3 + 0x9c);
  bVar1 = true;
  if ((DAT_01d4bba4 <= fVar14) && (bVar1 = false, !NAN(fVar14) && !NAN(param_1))) {
    bVar1 = fVar14 < param_1;
  }
  if (bVar1) {
    pfVar2 = (float *)FUN_003be160(lVar3);
    fVar9 = param_4[6] + param_4[6];
    fVar6 = 1.0;
    if (0.0 < *pfVar2) {
      fVar6 = 1.0 / *pfVar2;
    }
    fVar4 = 1.0;
    if (0.0 < pfVar2[1]) {
      fVar4 = 1.0 / pfVar2[1];
    }
    fVar5 = 1.0;
    if (0.0 < pfVar2[2]) {
      fVar5 = 1.0 / pfVar2[2];
    }
    fVar10 = *(float *)(lVar3 + 0x18);
    fVar11 = *(float *)(lVar3 + 0x1c);
    fVar7 = param_4[4] + param_4[4];
    fVar8 = param_4[5] + param_4[5];
    fVar19 = fVar11 * fVar11 + -0.5;
    fVar20 = *(float *)(lVar3 + 0x10);
    fVar21 = *(float *)(lVar3 + 0x14);
    fVar22 = fVar7 * fVar20 + fVar8 * fVar21 + fVar9 * fVar10;
    fVar18 = *param_4 + fVar18;
    fVar13 = param_4[1] + fVar13;
    fVar15 = param_4[2] + fVar15;
    fVar16 = fVar20 * fVar22 + (fVar7 * fVar19 - fVar11 * (fVar9 * fVar21 - fVar8 * fVar10)) +
             fVar16;
    fVar17 = fVar21 * fVar22 + (fVar8 * fVar19 - fVar11 * (fVar7 * fVar10 - fVar9 * fVar20)) +
             fVar17;
    fVar12 = (fVar9 * fVar19 - fVar11 * (fVar8 * fVar20 - fVar7 * fVar21)) + fVar10 * fVar22 +
             fVar12;
    fVar7 = (float)FUN_003be0e0(lVar3);
    fVar9 = 1.0;
    if (fVar7 != 0.0) {
      fVar9 = fVar7;
    }
    fVar7 = (float)(*(int *)(*(long *)(param_3 + 0x88) + 0x94) + 1);
    fVar6 = (fVar18 * fVar18 + fVar13 * fVar13 + fVar15 * fVar15 +
            fVar9 * (fVar5 * fVar12 * fVar12 + fVar6 * fVar16 * fVar16 + fVar4 * fVar17 * fVar17)) *
            0.5;
    param_2 = fVar7 * param_2;
    if (param_2 <= fVar6) {
      *(undefined8 *)(param_3 + 0xa0) = 0;
      *(undefined4 *)(param_3 + 0xa8) = 0;
      *(undefined8 *)(param_3 + 0x90) = 0;
      *(undefined4 *)(param_3 + 0x98) = 0;
      if (param_2 == 0.0) {
        fVar18 = DAT_01d4c464;
      }
      else {
        fVar18 = (float)NEON_fminnm(fVar6 / param_2,0x40000000);
        fVar18 = fVar18 * 0.5 * DAT_01d4c464;
      }
      fVar18 = (fVar7 + -1.0) * param_1 + fVar18;
      *(float *)(lVar3 + 0x9c) = fVar18;
      if (fVar14 == 0.0) {
        FUN_00113df0(*(undefined8 *)(*(long *)(param_3 + 0x48) + 0x748),
                     *(undefined4 *)(param_3 + 0xb0));
        return fVar18;
      }
      return fVar18;
    }
  }
  fVar14 = fVar14 - param_1;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  *(float *)(param_3 + 0x90) = fVar18;
  *(float *)(param_3 + 0x94) = fVar13;
  *(float *)(param_3 + 0x98) = fVar15;
  *(float *)(param_3 + 0xa0) = fVar16;
  *(float *)(param_3 + 0xa4) = fVar17;
  *(float *)(param_3 + 0xa8) = fVar12;
  *(float *)(lVar3 + 0x9c) = fVar14;
  return fVar14;
}


