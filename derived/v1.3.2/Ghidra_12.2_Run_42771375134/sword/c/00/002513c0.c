/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002513c0; name: FUN_002513c0
 */


undefined8
FUN_002513c0(float *param_1,uint param_2,uint param_3,uint param_4,float *param_5,float *param_6)

{
  short *psVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar3 = *(long *)(param_1 + 6);
  lVar9 = *(long *)(*(long *)(param_1 + 4) + 0x50);
  uVar4 = param_2 >> 1;
  psVar1 = (short *)(lVar9 + (ulong)uVar4 * 4);
  fVar10 = *(float *)(lVar3 + 0x10);
  uVar2 = *(int *)(*(long *)(param_1 + 4) + 0x3c) + uVar4;
  fVar14 = fVar10 * (float)(int)*(short *)(lVar9 + (ulong)(uVar4 + 1) * 4);
  fVar15 = fVar10 * (float)(int)*psVar1;
  fVar17 = fVar10 * (float)(int)*(short *)(lVar9 + (ulong)uVar2 * 4);
  fVar10 = fVar10 * (float)(int)*(short *)(lVar9 + (ulong)(uVar2 + 1) * 4);
  if ((char)psVar1[1] < '\0') {
    if ((param_2 & 1) == 0) {
      fVar11 = *(float *)(lVar3 + 0x14) * (float)(param_3 + 1);
      fVar16 = -*param_1;
      fVar5 = *(float *)(lVar3 + 0x18) * (float)param_4;
      fVar6 = param_1[2];
      fVar13 = fVar17;
      fVar12 = fVar10;
      fVar10 = fVar15;
    }
    else {
      fVar16 = *param_1;
      fVar11 = *(float *)(lVar3 + 0x14) * (float)param_3;
      fVar5 = *(float *)(lVar3 + 0x18) * (float)(param_4 + 1);
      fVar6 = -param_1[2];
      fVar13 = fVar14;
      fVar12 = fVar15;
    }
  }
  else if ((param_2 & 1) == 0) {
    fVar16 = *param_1;
    fVar11 = *(float *)(lVar3 + 0x14) * (float)param_3;
    fVar5 = *(float *)(lVar3 + 0x18) * (float)param_4;
    fVar6 = param_1[2];
    fVar13 = fVar15;
    fVar12 = fVar14;
    fVar10 = fVar17;
  }
  else {
    fVar11 = *(float *)(lVar3 + 0x14) * (float)(param_3 + 1);
    fVar5 = *(float *)(lVar3 + 0x18) * (float)(param_4 + 1);
    fVar6 = -param_1[2];
    fVar16 = -*param_1;
    fVar13 = fVar10;
    fVar12 = fVar17;
    fVar10 = fVar14;
  }
  fVar15 = param_5[1];
  fVar14 = fVar6 * (fVar12 - fVar13);
  fVar17 = fVar16 * (fVar10 - fVar13);
  fVar10 = (((fVar15 - fVar13) - (*param_5 - fVar11) * fVar17) - (param_5[2] - fVar5) * fVar14) *
           (1.0 / (fVar17 * fVar17 + fVar14 * fVar14 + 1.0));
  fVar17 = (*param_5 - fVar11) + fVar10 * fVar17;
  fVar16 = fVar16 * fVar17;
  uVar8 = 0;
  if (0.0 < fVar16) {
    fVar14 = (param_5[2] - fVar5) + fVar10 * fVar14;
    fVar6 = fVar6 * fVar14;
    fVar16 = fVar16 + fVar6;
    bVar7 = false;
    if ((0.0 < fVar6) && (bVar7 = false, !NAN(fVar16))) {
      bVar7 = fVar16 < 1.0;
    }
    if (bVar7) {
      uVar8 = 1;
      param_6[2] = fVar5 + fVar14;
      *param_6 = fVar11 + fVar17;
      param_6[1] = fVar13 + ((fVar15 - fVar13) - fVar10);
    }
  }
  return uVar8;
}


