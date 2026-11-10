/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00123210; name: FUN_00123210
 */


void FUN_00123210(float param_1,float param_2,float *param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = *(float **)(param_3 + 10);
  if (pfVar1[0x1f] != 0.0) {
    if ((param_4 & 1) == 0) {
      fVar9 = 1.0;
      fVar8 = 1.0 - param_1;
      fVar2 = param_3[5];
      fVar4 = param_3[6];
      pfVar1[4] = fVar8 * pfVar1[0x10] * param_2 + param_3[4];
      pfVar1[5] = fVar8 * pfVar1[0x11] * param_2 + fVar2;
      pfVar1[6] = fVar8 * pfVar1[0x12] * param_2 + fVar4;
      fVar4 = fVar8 * pfVar1[0x15] * param_2;
      fVar7 = fVar8 * pfVar1[0x14] * param_2;
      fVar8 = fVar8 * pfVar1[0x16] * param_2;
      fVar2 = sqrtf(fVar7 * fVar7 + fVar4 * fVar4 + fVar8 * fVar8);
      if (fVar2 <= DAT_01d4bf84) {
        fVar4 = 0.0;
        fVar3 = 0.0;
      }
      else {
        fVar3 = 1.0 / fVar2;
        fVar9 = fVar7 * fVar3;
        fVar4 = fVar4 * fVar3;
        fVar3 = fVar3 * fVar8;
      }
      fVar7 = sinf(fVar2 * 0.5);
      fVar2 = cosf(fVar2 * 0.5);
      fVar9 = fVar9 * fVar7;
      fVar4 = fVar4 * fVar7;
      fVar3 = fVar3 * fVar7;
      fVar7 = param_3[2];
      fVar8 = param_3[3];
      fVar5 = *param_3;
      fVar6 = param_3[1];
      pfVar1 = *(float **)(param_3 + 10);
      *pfVar1 = (fVar9 * fVar8 + fVar2 * fVar5 + fVar3 * fVar6) - fVar4 * fVar7;
      pfVar1[1] = (fVar4 * fVar8 + fVar2 * fVar6 + fVar9 * fVar7) - fVar3 * fVar5;
      pfVar1[2] = (fVar4 * fVar5 + fVar3 * fVar8 + fVar2 * fVar7) - fVar9 * fVar6;
      pfVar1[3] = ((fVar2 * fVar8 - fVar9 * fVar5) - fVar4 * fVar6) - fVar3 * fVar7;
    }
    else {
      pfVar1[4] = param_3[4];
      pfVar1[5] = param_3[5];
      pfVar1[6] = param_3[6];
      *pfVar1 = *param_3;
      pfVar1[1] = param_3[1];
      pfVar1[2] = param_3[2];
      pfVar1[3] = param_3[3];
    }
    fVar2 = (1.0 - param_1) * *(float *)(*(long *)(param_3 + 8) + 0x24);
    if (fVar2 <= DAT_01d4c4d4) {
      fVar2 = DAT_01d4c4d4;
    }
    *(float *)(*(long *)(param_3 + 8) + 0x24) = fVar2;
  }
  return;
}


