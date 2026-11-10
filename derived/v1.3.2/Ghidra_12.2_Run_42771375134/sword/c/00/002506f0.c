/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002506f0; name: FUN_002506f0
 */


void FUN_002506f0(long param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  fVar6 = *(float *)(lVar3 + 0x14) * 0.0;
  fVar7 = *(float *)(lVar3 + 0x10) * 0.0;
  fVar8 = *(float *)(lVar3 + 0x18) * 0.0;
  fVar10 = fVar7 * 0.0;
  fVar13 = fVar8 * 0.0;
  fVar5 = fVar6 * 0.0;
  fVar12 = fVar8 + fVar6 + fVar10;
  fVar8 = fVar5 + fVar7 + fVar8;
  fVar4 = *(float *)(lVar3 + 0x18) + fVar5 + fVar10;
  fVar10 = *(float *)(lVar3 + 0x14) + fVar10 + fVar13;
  fVar11 = fVar6 + fVar7 + fVar13;
  fVar13 = *(float *)(lVar3 + 0x10) + fVar5 + fVar13;
  fVar7 = *(float *)(lVar2 + 0x20) - *(float *)(lVar2 + 0x2c);
  fVar6 = *(float *)(lVar2 + 0x28) - *(float *)(lVar2 + 0x34);
  fVar9 = *(float *)(lVar2 + 0x24) - *(float *)(lVar2 + 0x30);
  fVar5 = fVar11 * fVar7 + fVar13 * fVar9 + fVar8 * fVar6;
  *param_2 = fVar10 * fVar7 + fVar11 * fVar9 + fVar12 * fVar6;
  param_2[1] = fVar5;
  param_2[2] = fVar12 * fVar7 + fVar8 * fVar9 + fVar4 * fVar6;
  fVar7 = *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x2c);
  fVar6 = *(float *)(lVar2 + 0x28) + *(float *)(lVar2 + 0x34);
  fVar9 = *(float *)(lVar2 + 0x24) + *(float *)(lVar2 + 0x30);
  fVar13 = fVar11 * fVar7 + fVar13 * fVar9 + fVar8 * fVar6;
  param_2[3] = fVar10 * fVar7 + fVar11 * fVar9 + fVar12 * fVar6;
  param_2[4] = fVar13;
  param_2[5] = fVar12 * fVar7 + fVar8 * fVar9 + fVar4 * fVar6;
  fVar10 = *(float *)(lVar2 + 0x58);
  if (0.0 <= fVar10) {
    fVar5 = fVar13;
  }
  pfVar1 = param_2 + 1;
  if (0.0 <= fVar10) {
    pfVar1 = param_2 + 4;
  }
  *pfVar1 = fVar10 + fVar5;
  return;
}


