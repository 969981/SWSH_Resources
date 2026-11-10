/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017e750; name: FUN_0017e750
 */


void FUN_0017e750(undefined4 *param_1,undefined4 *param_2,float *param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
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
  
  if (*(short *)(param_4 + 0x10) == -1) {
    lVar1 = *(long *)(param_4 + 8);
    fVar2 = *(float *)(lVar1 + 0x20);
    fVar3 = *(float *)(lVar1 + 0x24);
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar7 = *(float *)(lVar1 + 0x28);
    fVar9 = *(float *)(lVar1 + 0x2c);
    fVar10 = *(float *)(lVar1 + 0x30);
    fVar12 = *(float *)(lVar1 + 0x34);
    fVar13 = *(float *)(lVar1 + 0x40);
    fVar6 = param_3[2];
    fVar8 = *(float *)(lVar1 + 0x38);
    fVar11 = *(float *)(lVar1 + 0x3c);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = 0;
    param_1[4] = fVar4 * fVar2 + fVar5 * fVar9 + fVar6 * fVar8;
    param_1[5] = fVar4 * fVar3 + fVar5 * fVar10 + fVar6 * fVar11;
    param_1[6] = fVar4 * fVar7 + fVar5 * fVar12 + fVar6 * fVar13;
    param_1[7] = 0;
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0;
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  param_1[7] = 0;
  return;
}


