/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042ad20; name: FUN_0042ad20
 */


void FUN_0042ad20(int *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  
  iVar4 = param_1[4];
  iVar5 = *param_1;
  uVar6 = iVar5 - iVar4;
  pfVar3 = (float *)(*(long *)(param_1 + 2) + (ulong)(uint)(iVar4 << 1) * 4);
  if (param_3 < uVar6) {
    uVar6 = param_3;
    if (param_3 != 0) {
      do {
        fVar11 = *param_2;
        fVar12 = *pfVar3;
        *pfVar3 = fVar11;
        fVar12 = fVar12 + (fVar11 - pfVar3[1]) * (float)param_1[5];
        pfVar3[1] = fVar12;
        uVar6 = uVar6 - 1;
        *param_2 = fVar12;
        pfVar3 = pfVar3 + 2;
        param_2 = param_2 + 1;
      } while (uVar6 != 0);
      iVar4 = param_1[4];
    }
    param_1[4] = iVar4 + param_3;
    return;
  }
  do {
    uVar1 = param_3;
    if (uVar6 <= param_3) {
      uVar1 = uVar6;
    }
    if (uVar1 != 0) {
      uVar2 = param_3;
      if (uVar6 <= param_3) {
        uVar2 = uVar6;
      }
      uVar2 = uVar2 - 1;
      pfVar7 = pfVar3;
      pfVar8 = param_2;
      if (uVar2 != 0) {
        uVar6 = ~uVar6;
        if (uVar6 < ~param_3) {
          uVar6 = ~param_3;
        }
        iVar4 = uVar6 + (uVar1 & 1) + 1;
        pfVar9 = pfVar3;
        pfVar10 = param_2;
        do {
          fVar11 = *pfVar10;
          fVar12 = *pfVar9;
          *pfVar9 = fVar11;
          fVar12 = fVar12 + (fVar11 - pfVar9[1]) * (float)param_1[5];
          pfVar9[1] = fVar12;
          *pfVar10 = fVar12;
          fVar11 = pfVar10[1];
          fVar12 = pfVar9[2];
          pfVar9[2] = fVar11;
          fVar12 = fVar12 + (fVar11 - pfVar9[3]) * (float)param_1[5];
          pfVar7 = pfVar9 + 4;
          pfVar8 = pfVar10 + 2;
          pfVar9[3] = fVar12;
          pfVar10[1] = fVar12;
          iVar4 = iVar4 + 2;
          pfVar9 = pfVar7;
          pfVar10 = pfVar8;
        } while (iVar4 != 0);
      }
      if ((uVar1 & 1) != 0) {
        fVar11 = *pfVar8;
        fVar12 = *pfVar7;
        *pfVar7 = fVar11;
        fVar12 = fVar12 + (fVar11 - pfVar7[1]) * (float)param_1[5];
        pfVar7[1] = fVar12;
        *pfVar8 = fVar12;
      }
      param_2 = param_2 + (ulong)uVar2 + 1;
      iVar4 = param_1[4];
      iVar5 = *param_1;
      pfVar3 = pfVar3 + (ulong)uVar2 * 2 + 2;
    }
    iVar4 = iVar4 + uVar1;
    param_1[4] = iVar4;
    if (iVar4 == iVar5) {
      pfVar3 = *(float **)(param_1 + 2);
      iVar4 = 0;
      param_1[4] = 0;
    }
    param_3 = param_3 - uVar1;
    uVar6 = iVar5 - iVar4;
  } while (param_3 != 0);
  return;
}


