/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041f1b0; name: FUN_0041f1b0
 */


void FUN_0041f1b0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,long param_7,uint param_8,uint *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (6 < *param_9) goto LAB_0041f4f8;
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_7 + 0x22c));
  fVar5 = (float)NEON_fminnm(param_9[2],fVar4 * DAT_01d4bed0);
  switch(*param_9) {
  case 0:
    fVar4 = tanf((fVar5 * DAT_01d4bb38) / fVar4);
    fVar4 = 1.0 / fVar4;
    fVar5 = fVar4 * DAT_01d4c27c;
    fVar4 = fVar4 * fVar4;
    fVar1 = fVar4 + 1.0;
    param_4 = 1.0 / (fVar1 + fVar5);
    param_6 = param_4 + param_4;
    goto LAB_0041f290;
  case 1:
    fVar5 = tanf((fVar5 * DAT_01d4bb38) / fVar4);
    fVar4 = fVar5 * fVar5;
    fVar5 = fVar5 * DAT_01d4c27c;
    fVar1 = fVar4 + 1.0;
    param_4 = 1.0 / (fVar1 + fVar5);
    param_6 = param_4 * -2.0;
LAB_0041f290:
    param_2 = 1.0;
    param_3 = param_6 - param_6 * fVar4;
    param_5 = param_4 * (fVar1 - fVar5);
    param_1 = param_4;
    break;
  case 2:
    fVar4 = (fVar5 * DAT_01d4bdf4) / fVar4;
    param_3 = cosf(fVar4);
    param_4 = sinf(fVar4);
    param_4 = param_4 / ((float)param_9[3] + (float)param_9[3]);
    param_3 = param_3 * -2.0;
    param_2 = param_4 + 1.0;
    param_5 = 1.0 - param_4;
    param_6 = 0.0;
    param_1 = -param_4;
    break;
  case 3:
    fVar4 = (fVar5 * DAT_01d4bdf4) / fVar4;
    param_3 = cosf(fVar4);
    param_5 = sinf(fVar4);
    param_5 = param_5 / ((float)param_9[3] + (float)param_9[3]);
    param_3 = param_3 * -2.0;
    param_2 = param_5 + 1.0;
    param_5 = 1.0 - param_5;
    param_4 = 1.0;
    param_6 = param_3;
    param_1 = 1.0;
    break;
  case 4:
    fVar1 = powf(10.0,(float)param_9[1] * DAT_01d4bb3c);
    fVar4 = (fVar5 * DAT_01d4bdf4) / fVar4;
    fVar5 = sinf(fVar4);
    fVar4 = cosf(fVar4);
    fVar3 = fVar1 + 1.0;
    fVar6 = fVar1 + -1.0;
    fVar2 = fVar3 - fVar6 * fVar4;
    fVar7 = fVar6 - fVar3 * fVar4;
    param_5 = fVar6 * fVar4 + fVar3;
    param_3 = (fVar3 * fVar4 + fVar6) * -2.0;
    fVar5 = fVar5 * DAT_01d4c27c * SQRT(fVar1);
    param_6 = fVar1 * (fVar7 + fVar7);
    param_4 = fVar2 + fVar5;
    fVar2 = fVar2 - fVar5;
    goto LAB_0041f470;
  case 5:
    fVar1 = powf(10.0,(float)param_9[1] * DAT_01d4bb3c);
    fVar4 = (fVar5 * DAT_01d4bdf4) / fVar4;
    fVar5 = sinf(fVar4);
    fVar4 = cosf(fVar4);
    fVar6 = fVar1 + -1.0;
    fVar3 = fVar1 + 1.0;
    fVar5 = fVar5 * DAT_01d4c27c * SQRT(fVar1);
    fVar2 = fVar6 * fVar4 + fVar3;
    param_5 = fVar3 - fVar6 * fVar4;
    param_4 = fVar2 + fVar5;
    fVar2 = fVar2 - fVar5;
    param_3 = fVar6 - fVar3 * fVar4;
    param_6 = fVar1 * -2.0 * (fVar3 * fVar4 + fVar6);
    param_3 = param_3 + param_3;
LAB_0041f470:
    param_4 = param_4 * fVar1;
    param_2 = param_5 + fVar5;
    param_5 = param_5 - fVar5;
    param_1 = fVar2 * fVar1;
    break;
  case 6:
    fVar4 = (fVar5 * DAT_01d4bdf4) / fVar4;
    param_3 = cosf(fVar4);
    fVar5 = powf(10.0,(float)param_9[1] * DAT_01d4bb3c);
    param_5 = sinf(fVar4);
    param_5 = param_5 / ((float)param_9[3] + (float)param_9[3]);
    param_3 = param_3 * -2.0;
    fVar4 = param_5 * fVar5;
    param_5 = param_5 / fVar5;
    param_4 = fVar4 + 1.0;
    param_2 = param_5 + 1.0;
    param_5 = 1.0 - param_5;
    param_6 = param_3;
    param_1 = 1.0 - fVar4;
  }
LAB_0041f4f8:
  param_2 = 1.0 / param_2;
  param_6 = param_6 * param_2;
  fVar3 = param_3 * param_2;
  param_4 = param_4 * param_2;
  param_1 = param_1 * param_2;
  fVar6 = param_5 * param_2;
  fVar1 = -(param_3 * param_2);
  fVar4 = -(param_5 * param_2);
  param_7 = param_7 + (ulong)param_8 * 0xb0;
  *(float *)(param_7 + 0x94) = param_6;
  fVar7 = param_6 - fVar3 * param_4;
  *(float *)(param_7 + 0x98) = param_1;
  *(float *)(param_7 + 0xa0) = fVar4;
  fVar9 = param_6 * fVar4;
  *(float *)(param_7 + 0x50) = param_6;
  *(float *)(param_7 + 0x60) = param_1;
  *(float *)(param_7 + 0x80) = fVar4;
  fVar2 = param_1 - fVar3 * param_6;
  fVar4 = param_1 * fVar4;
  fVar5 = fVar3 * fVar3;
  *(float *)(param_7 + 0x38) = fVar7;
  *(ulong *)(param_7 + 0x18) = CONCAT44(param_4,param_4);
  *(ulong *)(param_7 + 0x10) = CONCAT44(param_4,param_4);
  *(float *)(param_7 + 0x2c) = fVar7;
  fVar8 = (param_1 - fVar6 * param_4) - fVar3 * fVar7;
  *(float *)(param_7 + 0x44) = fVar7;
  fVar7 = fVar6 * fVar3;
  *(float *)(param_7 + 0x9c) = fVar1;
  *(float *)(param_7 + 0x90) = param_4;
  *(float *)(param_7 + 0x74) = fVar5 - fVar6;
  *(float *)(param_7 + 0x70) = fVar1;
  *(float *)(param_7 + 100) = param_1 * fVar1;
  fVar10 = param_1 * fVar1 * fVar1;
  *(undefined8 *)(param_7 + 0x20) = 0;
  *(undefined4 *)(param_7 + 0x28) = 0;
  *(undefined8 *)(param_7 + 0x30) = 0;
  *(undefined4 *)(param_7 + 0x40) = 0;
  *(float *)(param_7 + 0x3c) = fVar8;
  *(float *)(param_7 + 0x48) = fVar8;
  *(float *)(param_7 + 0x84) = fVar7;
  *(float *)(param_7 + 0x54) = fVar2;
  fVar2 = fVar9 - fVar3 * fVar2;
  *(float *)(param_7 + 0x58) = fVar2;
  *(float *)(param_7 + 0x68) = fVar10 + fVar4;
  *(float *)(param_7 + 0x78) = (fVar6 * -2.0 + fVar5) * fVar1;
  *(float *)(param_7 + 0x7c) = fVar6 * fVar6 + fVar5 * (fVar5 + fVar6 * -3.0);
  *(float *)(param_7 + 0x6c) = (fVar4 * -2.0 - fVar10) * fVar3;
  *(float *)(param_7 + 0x4c) = (fVar9 + fVar7 * param_4) - fVar3 * fVar8;
  *(float *)(param_7 + 0x5c) = fVar4 - fVar3 * (fVar2 + fVar9);
  *(float *)(param_7 + 0x88) = fVar7 * fVar1 + fVar6 * fVar6;
  *(float *)(param_7 + 0x8c) = (fVar6 * -2.0 * fVar6 - fVar7 * fVar1) * fVar3;
  return;
}


