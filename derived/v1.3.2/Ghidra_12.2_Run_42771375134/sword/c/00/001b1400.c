/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b1400; name: FUN_001b1400
 */


void FUN_001b1400(long *param_1,float *param_2,uint *param_3)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar2 = param_3[2] + param_3[3] * 2;
  lVar10 = *param_1;
  lVar13 = *(long *)(lVar10 + 0x10);
  bVar9 = *(char *)((long)param_1 + 0x24) != '\0';
  lVar11 = 1;
  if (bVar9) {
    lVar11 = 2;
  }
  uVar5 = *param_3;
  uVar6 = param_3[1];
  lVar4 = 1;
  if (!bVar9) {
    lVar4 = 2;
  }
  lVar14 = *(long *)(lVar13 + 0x50);
  uVar8 = uVar2 >> 1;
  psVar1 = (short *)(lVar14 + (ulong)uVar8 * 4);
  uVar3 = *(int *)(lVar13 + 0x3c) + uVar8;
  fVar20 = (float)(int)*(short *)(lVar14 + (ulong)(uVar8 + 1) * 4);
  fVar16 = (float)(int)*(short *)(lVar14 + (ulong)uVar3 * 4);
  fVar19 = (float)(int)*psVar1;
  fVar15 = (float)(int)*(short *)(lVar14 + (ulong)(uVar3 + 1) * 4);
  pfVar12 = param_2 + lVar11 * 3;
  cVar7 = (char)psVar1[1];
  if ((uVar2 & 1) == 0) {
    if (cVar7 < '\0') {
      fVar18 = (float)(uVar5 + 1);
      param_2[1] = fVar16;
      param_2[2] = (float)uVar6;
      *param_2 = fVar18;
      *pfVar12 = (float)uVar5;
      param_2[lVar11 * 3 + 1] = fVar19;
      param_2[lVar11 * 3 + 2] = (float)uVar6;
      fVar17 = (float)(uVar6 + 1);
      fVar19 = fVar15;
    }
    else {
      fVar17 = (float)uVar6;
      *param_2 = (float)uVar5;
      param_2[1] = fVar19;
      param_2[2] = fVar17;
      *pfVar12 = (float)uVar5;
      param_2[lVar11 * 3 + 1] = fVar20;
      param_2[lVar11 * 3 + 2] = (float)(uVar6 + 1);
      fVar18 = (float)(uVar5 + 1);
      fVar19 = fVar16;
    }
  }
  else if (cVar7 < '\0') {
    fVar18 = (float)uVar5;
    *param_2 = fVar18;
    param_2[1] = fVar20;
    param_2[2] = (float)(uVar6 + 1);
    *pfVar12 = (float)(uVar5 + 1);
    param_2[lVar11 * 3 + 1] = fVar15;
    param_2[lVar11 * 3 + 2] = (float)(uVar6 + 1);
    fVar17 = (float)uVar6;
  }
  else {
    fVar17 = (float)(uVar6 + 1);
    *param_2 = (float)(uVar5 + 1);
    param_2[1] = fVar15;
    param_2[2] = fVar17;
    *pfVar12 = (float)(uVar5 + 1);
    fVar18 = (float)uVar5;
    param_2[lVar11 * 3 + 1] = fVar16;
    param_2[lVar11 * 3 + 2] = (float)uVar6;
    fVar19 = fVar20;
  }
  pfVar12 = param_2 + lVar4 * 3;
  *pfVar12 = fVar18;
  pfVar12[1] = fVar19;
  pfVar12[2] = fVar17;
  lVar11 = *(long *)(lVar10 + 0x18);
  fVar19 = *(float *)(lVar11 + 0x10);
  fVar15 = *(float *)(lVar11 + 0x14);
  fVar20 = *(float *)(lVar11 + 0x18);
  *param_2 = *param_2 * fVar15;
  param_2[1] = param_2[1] * fVar19;
  param_2[2] = param_2[2] * fVar20;
  param_2[3] = fVar15 * param_2[3];
  param_2[4] = fVar19 * param_2[4];
  param_2[5] = fVar20 * param_2[5];
  param_2[6] = fVar15 * param_2[6];
  param_2[7] = fVar19 * param_2[7];
  param_2[8] = fVar20 * param_2[8];
  return;
}


