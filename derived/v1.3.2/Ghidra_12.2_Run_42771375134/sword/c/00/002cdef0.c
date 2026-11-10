/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002cdef0; name: FUN_002cdef0
 */


void FUN_002cdef0(long param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = param_3[1];
  fVar7 = param_2[1];
  fVar8 = param_4[1];
  pfVar1 = *(float **)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  fVar9 = pfVar1[1];
  fVar6 = fVar5;
  if (fVar7 <= fVar5) {
    fVar6 = fVar7;
  }
  if (fVar5 <= fVar7) {
    fVar5 = fVar7;
  }
  *(float *)(param_1 + 0x28) = (fVar6 - fVar8) * fVar9;
  *(float *)(param_1 + 0x2c) = (fVar8 + fVar5) * fVar9;
  fVar5 = *param_3;
  fVar7 = *param_2;
  fVar8 = *param_4;
  fVar6 = fVar5;
  if (fVar7 <= fVar5) {
    fVar6 = fVar7;
  }
  fVar9 = *pfVar1;
  fVar6 = fVar9 * (fVar6 - fVar8);
  iVar4 = *(int *)(lVar3 + 0x38);
  if (0.0 <= fVar6) {
    uVar2 = iVar4 - 2;
    if (fVar6 <= (float)uVar2) {
      fVar5 = floorf(fVar6);
      uVar2 = (uint)fVar5;
      fVar5 = *param_3;
      pfVar1 = *(float **)(param_1 + 8);
      lVar3 = *(long *)(param_1 + 0x10);
      fVar7 = *param_2;
      fVar8 = *param_4;
      fVar9 = *pfVar1;
      iVar4 = *(int *)(lVar3 + 0x38);
    }
  }
  else {
    uVar2 = 0;
  }
  if (fVar5 <= fVar7) {
    fVar5 = fVar7;
  }
  fVar9 = (fVar8 + fVar5) * fVar9;
  *(uint *)(param_1 + 0x30) = uVar2;
  if (0.0 <= fVar9) {
    uVar2 = iVar4 - 1;
    if (fVar9 <= (float)uVar2) {
      fVar5 = ceilf(fVar9);
      uVar2 = (uint)fVar5;
      pfVar1 = *(float **)(param_1 + 8);
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
  else {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  fVar5 = param_3[2];
  fVar7 = param_2[2];
  fVar8 = param_4[2];
  fVar6 = fVar5;
  if (fVar7 <= fVar5) {
    fVar6 = fVar7;
  }
  fVar9 = pfVar1[2];
  fVar6 = (fVar6 - fVar8) * fVar9;
  iVar4 = *(int *)(lVar3 + 0x3c);
  if (0.0 <= fVar6) {
    uVar2 = iVar4 - 2;
    if (fVar6 <= (float)uVar2) {
      fVar5 = floorf(fVar6);
      uVar2 = (uint)fVar5;
      fVar5 = param_3[2];
      pfVar1 = *(float **)(param_1 + 8);
      fVar7 = param_2[2];
      fVar8 = param_4[2];
      fVar9 = pfVar1[2];
      iVar4 = *(int *)(*(long *)(param_1 + 0x10) + 0x3c);
    }
  }
  else {
    uVar2 = 0;
  }
  if (fVar5 <= fVar7) {
    fVar5 = fVar7;
  }
  fVar9 = (fVar8 + fVar5) * fVar9;
  *(uint *)(param_1 + 0x38) = uVar2;
  if (0.0 <= fVar9) {
    uVar2 = iVar4 - 1;
    if (fVar9 <= (float)uVar2) {
      fVar5 = ceilf(fVar9);
      uVar2 = (uint)fVar5;
      pfVar1 = *(float **)(param_1 + 8);
    }
  }
  else {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x3c) = uVar2;
  fVar5 = ceilf(*param_4 * *pfVar1);
  *param_5 = fVar5;
  fVar5 = ceilf(param_4[2] * *(float *)(*(long *)(param_1 + 8) + 8));
  *param_6 = fVar5;
  *(int *)(param_1 + 0x20) = (int)*param_5 + 1;
  *(int *)(param_1 + 0x24) = (int)fVar5 + 1;
  return;
}


