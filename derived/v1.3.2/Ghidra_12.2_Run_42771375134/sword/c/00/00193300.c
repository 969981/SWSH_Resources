/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00193300; name: FUN_00193300
 */


void FUN_00193300(long param_1)

{
  int iVar1;
  float fVar2;
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
  float fVar13;
  float fVar14;
  
  fVar2 = DAT_01d4c6ac;
  pfVar3 = *(float **)(param_1 + 0x18);
  fVar10 = pfVar3[10];
  fVar4 = fVar10 * DAT_01d4c6ac;
  fVar7 = *pfVar3;
  *(float *)(param_1 + 0xbc) = fVar10;
  *(float *)(param_1 + 0x94) = fVar4;
  fVar13 = DAT_01d4c190;
  fVar8 = DAT_01d4bec4;
  fVar11 = pfVar3[1] * DAT_01d4bec4;
  fVar12 = fVar11 * fVar11;
  fVar6 = fVar7 * pfVar3[1];
  fVar9 = fVar12 * fVar12 * fVar12;
  *(float *)(param_1 + 0x98) = fVar6;
  *(float *)(param_1 + 0x9c) = 1.0 / fVar6;
  *(float *)(param_1 + 0xa0) = fVar6 * fVar6;
  fVar5 = pfVar3[6];
  iVar1 = 1 << (ulong)((uint)fVar5 & 0x1f);
  fVar8 = fVar8 / fVar7;
  fVar7 = fVar6 * (float)iVar1;
  fVar13 = DAT_01d4bec8 / (fVar11 * fVar12 * fVar9 * fVar13);
  fVar9 = fVar9 * DAT_01d4bb38;
  fVar14 = DAT_01d4c230 / fVar9;
  *(float *)(param_1 + 0xa4) = fVar7;
  *(float *)(param_1 + 0xa8) = fVar11;
  fVar13 = fVar4 * fVar13;
  *(float *)(param_1 + 0xac) = fVar12;
  *(float *)(param_1 + 0xb0) = fVar13;
  fVar11 = pfVar3[0xc];
  *(float *)(param_1 + 0xc0) = fVar8;
  *(float *)(param_1 + 0xc4) = fVar8 * fVar8;
  *(float *)(param_1 + 200) = 1.0 / fVar8;
  fVar12 = fVar12 * fVar12 * fVar12 * fVar13;
  fVar10 = fVar10 - fVar12;
  fVar8 = 0.0;
  *(float *)(param_1 + 0xb4) = fVar4 * fVar14 * fVar11;
  *(float *)(param_1 + 0x90) = fVar12;
  *(float *)(param_1 + 0xd0) = fVar5;
  if (0.0 < fVar10) {
    fVar8 = 1.0 / fVar10;
  }
  *(float *)(param_1 + 0xcc) = fVar8;
  fVar8 = pfVar3[2];
  *(float *)(param_1 + 0x47c) = fVar6;
  fVar9 = DAT_01d4c234 / fVar9;
  *(float *)(param_1 + 0x480) = 1.0 / fVar6;
  *(float *)(param_1 + 0x484) = fVar5;
  *(int *)(param_1 + 0x488) = iVar1;
  *(float *)(param_1 + 0x48c) = fVar7;
  *(float *)(param_1 + 0xb8) = fVar4 * fVar9 * fVar8;
  *(float *)(param_1 + 0x490) = pfVar3[0xe];
  fVar5 = pfVar3[0xf];
  *(float *)(param_1 + 0x494) = fVar5;
  fVar8 = pfVar3[0xd];
  *(float *)(param_1 + 0x498) = fVar8;
  *(float *)(param_1 + 0x49c) = fVar8 + fVar5 + fVar2;
  fVar13 = *(float *)(param_1 + 0x6c0);
  fVar5 = pfVar3[0xb];
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x6c8);
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x6cc);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x6d0);
  fVar8 = 1.0 - fVar5 * fVar13;
  if (1.0 <= fVar5 * fVar13) {
    fVar8 = 0.0;
  }
  *(float *)(param_1 + 0x46c) = fVar8;
  *(float *)(param_1 + 0x4a8) = pfVar3[0x10];
  *(float *)(param_1 + 0x4ac) = pfVar3[0x11];
  *(float *)(param_1 + 0x4b0) = pfVar3[0x12];
  fVar5 = pfVar3[0x13];
  fVar8 = 0.0;
  *(float *)(param_1 + 0x4a0) = fVar13;
  *(float *)(param_1 + 0x4b4) = fVar5;
  if (0.0 < fVar13) {
    fVar8 = 1.0 / fVar13;
  }
  *(float *)(param_1 + 0x4a4) = fVar8;
  fVar5 = pfVar3[7];
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (DAT_01d4bf88 < fVar5) {
    fVar5 = DAT_01d4bf88;
  }
  *(float *)(param_1 + 0x470) = fVar5;
  fVar5 = pfVar3[8];
  if (1.0 < fVar5) {
    fVar5 = 1.0;
  }
  *(float *)(param_1 + 0x474) = fVar5;
  *(float *)(param_1 + 0x478) = pfVar3[9] * pfVar3[9];
  *(uint *)(param_1 + 0x4bc) = (int)pfVar3[0x15] * (int)pfVar3[0x15] * 0x4ac7 & 0xffff;
  *(float *)(param_1 + 0x4b8) = pfVar3[5];
  return;
}


