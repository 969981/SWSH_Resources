/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020a730; name: FUN_0020a730
 */


void FUN_0020a730(int param_1,float *param_2,long param_3,long param_4,float *param_5,uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
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
  
  uVar4 = param_1 * 3;
  if ((param_6 & 1) == 0) {
    uVar7 = *(uint *)(param_4 + (ulong)uVar4 * 4);
    uVar5 = *(uint *)(param_4 + (ulong)(uVar4 + 1) * 4);
    uVar4 = *(uint *)(param_4 + (ulong)(uVar4 + 2) * 4);
  }
  else {
    uVar7 = (uint)*(ushort *)(param_4 + (ulong)uVar4 * 2);
    uVar5 = (uint)*(ushort *)(param_4 + (ulong)(uVar4 + 1) * 2);
    uVar4 = (uint)*(ushort *)(param_4 + (ulong)(uVar4 + 2) * 2);
  }
  pfVar8 = (float *)(param_3 + (ulong)uVar7 * 0xc);
  pfVar6 = (float *)(param_3 + (ulong)uVar5 * 0xc);
  fVar10 = *pfVar8;
  fVar13 = pfVar8[1];
  fVar14 = pfVar8[2];
  fVar20 = *pfVar6;
  fVar15 = pfVar6[1];
  fVar17 = pfVar6[2];
  pfVar6 = (float *)(param_3 + (ulong)uVar4 * 0xc);
  fVar3 = *pfVar6;
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[2];
  fVar9 = param_5[1];
  fVar11 = param_5[2];
  fVar18 = param_5[4];
  fVar21 = param_5[5];
  fVar19 = param_5[7];
  fVar22 = param_5[8];
  fVar12 = param_5[10];
  fVar16 = param_5[0xb];
  *param_2 = *param_5 * fVar10 + param_5[3] * fVar13 + param_5[6] * fVar14 + param_5[9];
  param_2[1] = fVar9 * fVar10 + fVar18 * fVar13 + fVar19 * fVar14 + fVar12;
  param_2[2] = fVar11 * fVar10 + fVar21 * fVar13 + fVar22 * fVar14 + fVar16;
  fVar10 = param_5[1];
  fVar13 = param_5[2];
  fVar11 = param_5[4];
  fVar16 = param_5[5];
  fVar18 = param_5[8];
  fVar12 = param_5[7];
  fVar14 = param_5[10];
  fVar9 = param_5[0xb];
  param_2[3] = *param_5 * fVar20 + param_5[3] * fVar15 + param_5[6] * fVar17 + param_5[9];
  param_2[4] = fVar10 * fVar20 + fVar11 * fVar15 + fVar12 * fVar17 + fVar14;
  param_2[5] = fVar13 * fVar20 + fVar16 * fVar15 + fVar18 * fVar17 + fVar9;
  fVar10 = param_5[1];
  fVar15 = param_5[2];
  fVar14 = param_5[4];
  fVar9 = param_5[5];
  fVar11 = param_5[8];
  fVar20 = param_5[7];
  fVar13 = param_5[10];
  fVar17 = param_5[0xb];
  param_2[6] = fVar3 * *param_5 + fVar1 * param_5[3] + fVar2 * param_5[6] + param_5[9];
  param_2[7] = fVar3 * fVar10 + fVar1 * fVar14 + fVar2 * fVar20 + fVar13;
  param_2[8] = fVar3 * fVar15 + fVar1 * fVar9 + fVar2 * fVar11 + fVar17;
  return;
}


