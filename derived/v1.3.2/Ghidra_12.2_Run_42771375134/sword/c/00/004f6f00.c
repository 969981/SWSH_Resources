/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f6f00; name: FUN_004f6f00
 */


void FUN_004f6f00(float param_1,undefined4 param_2,float param_3,float param_4,undefined8 *param_5,
                 uint param_6)

{
  uint uVar1;
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
  float fVar14;
  
  fVar7 = 0.0;
  if (6 < param_6) {
    fVar8 = 0.0;
    fVar4 = 0.0;
    fVar6 = 0.0;
    fVar3 = 0.0;
    fVar2 = 0.0;
    goto LAB_004f7348;
  }
  fVar3 = (float)NEON_fminnm(param_1 * DAT_01d4bed0,param_2);
  switch(param_6) {
  case 0:
    if (DAT_01d4c2ec <= param_3 * DAT_01d4bb3c) {
      uVar1 = (uint)(DAT_01d4c714 + DAT_01d4c560 * param_3);
      fVar7 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar4 = (DAT_01d4c23c + fVar7 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar7)) *
              (float)(uVar1 & 0xff800000);
    }
    else {
      fVar4 = 0.0;
    }
    param_1 = (fVar3 * DAT_01d4bdf4) / param_1;
    fVar5 = sinf(param_1);
    fVar7 = cosf(param_1);
    fVar3 = fVar4 + 1.0;
    fVar6 = fVar4 + -1.0;
    fVar2 = fVar3 - fVar6 * fVar7;
    fVar9 = fVar6 - fVar3 * fVar7;
    fVar8 = fVar6 * fVar7 + fVar3;
    fVar3 = (fVar3 * fVar7 + fVar6) * -2.0;
    fVar5 = fVar5 * DAT_01d4c27c * SQRT(fVar4);
    fVar7 = fVar4 * (fVar9 + fVar9);
    fVar6 = fVar2 + fVar5;
    fVar2 = fVar2 - fVar5;
    goto LAB_004f7338;
  case 1:
    param_1 = (fVar3 * DAT_01d4bdf4) / param_1;
    fVar7 = cosf(param_1);
    if (DAT_01d4c2ec <= param_3 * DAT_01d4bb3c) {
      uVar1 = (uint)(DAT_01d4c714 + DAT_01d4c560 * param_3);
      fVar3 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar3 = (DAT_01d4c23c + fVar3 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar3)) *
              (float)(uVar1 & 0xff800000);
    }
    else {
      fVar3 = 0.0;
    }
    fVar8 = sinf(param_1);
    fVar8 = fVar8 / (param_4 + param_4);
    fVar7 = fVar7 * -2.0;
    fVar2 = fVar3 * fVar8;
    fVar8 = fVar8 / fVar3;
    fVar6 = fVar2 + 1.0;
    fVar2 = 1.0 - fVar2;
    fVar4 = fVar8 + 1.0;
    fVar8 = 1.0 - fVar8;
    fVar3 = fVar7;
    break;
  case 2:
    if (DAT_01d4c2ec <= param_3 * DAT_01d4bb3c) {
      uVar1 = (uint)(DAT_01d4c714 + DAT_01d4c560 * param_3);
      fVar7 = (float)(uVar1 & 0x7fffff | 0x3f800000);
      fVar4 = (DAT_01d4c23c + fVar7 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar7)) *
              (float)(uVar1 & 0xff800000);
    }
    else {
      fVar4 = 0.0;
    }
    param_1 = (fVar3 * DAT_01d4bdf4) / param_1;
    fVar5 = sinf(param_1);
    fVar7 = cosf(param_1);
    fVar10 = fVar4 + -1.0;
    fVar9 = fVar4 + 1.0;
    fVar5 = fVar5 * DAT_01d4c27c * SQRT(fVar4);
    fVar2 = fVar10 * fVar7 + fVar9;
    fVar8 = fVar9 - fVar10 * fVar7;
    fVar6 = fVar2 + fVar5;
    fVar2 = fVar2 - fVar5;
    fVar3 = fVar10 - fVar9 * fVar7;
    fVar7 = fVar4 * -2.0 * (fVar9 * fVar7 + fVar10);
    fVar3 = fVar3 + fVar3;
LAB_004f7338:
    fVar6 = fVar6 * fVar4;
    fVar2 = fVar2 * fVar4;
    fVar4 = fVar8 + fVar5;
    fVar8 = fVar8 - fVar5;
    break;
  case 3:
    fVar3 = tanf((fVar3 * DAT_01d4bb38) / param_1);
    fVar3 = 1.0 / fVar3;
    fVar2 = fVar3 * DAT_01d4c27c;
    fVar3 = fVar3 * fVar3;
    fVar8 = fVar3 + 1.0;
    fVar6 = 1.0 / (fVar8 + fVar2);
    fVar7 = fVar6 + fVar6;
    goto LAB_004f7070;
  case 4:
    fVar2 = tanf((fVar3 * DAT_01d4bb38) / param_1);
    fVar3 = fVar2 * fVar2;
    fVar2 = fVar2 * DAT_01d4c27c;
    fVar8 = fVar3 + 1.0;
    fVar6 = 1.0 / (fVar8 + fVar2);
    fVar7 = fVar6 * -2.0;
LAB_004f7070:
    fVar4 = 1.0;
    fVar8 = fVar6 * (fVar8 - fVar2);
    fVar3 = fVar7 - fVar7 * fVar3;
    fVar2 = fVar6;
    break;
  case 5:
    param_1 = (fVar3 * DAT_01d4bdf4) / param_1;
    fVar3 = cosf(param_1);
    fVar6 = sinf(param_1);
    fVar6 = fVar6 / (param_4 + param_4);
    fVar4 = fVar6 + 1.0;
    fVar8 = 1.0 - fVar6;
    fVar3 = fVar3 * -2.0;
    fVar2 = -fVar6;
    break;
  case 6:
    param_1 = (fVar3 * DAT_01d4bdf4) / param_1;
    fVar7 = cosf(param_1);
    fVar8 = sinf(param_1);
    fVar8 = fVar8 / (param_4 + param_4);
    fVar7 = fVar7 * -2.0;
    fVar4 = fVar8 + 1.0;
    fVar8 = 1.0 - fVar8;
    fVar6 = 1.0;
    fVar3 = fVar7;
    fVar2 = 1.0;
  }
LAB_004f7348:
  fVar4 = 1.0 / fVar4;
  fVar7 = fVar7 * fVar4;
  fVar9 = fVar3 * fVar4;
  fVar6 = fVar6 * fVar4;
  fVar2 = fVar2 * fVar4;
  fVar10 = fVar8 * fVar4;
  fVar5 = -(fVar3 * fVar4);
  fVar3 = -(fVar8 * fVar4);
  fVar4 = fVar7 - fVar9 * fVar6;
  *(float *)((long)param_5 + 0x84) = fVar7;
  *(float *)(param_5 + 0x11) = fVar2;
  *(float *)(param_5 + 0x12) = fVar3;
  fVar13 = fVar7 * fVar3;
  *(float *)(param_5 + 8) = fVar7;
  *(float *)(param_5 + 10) = fVar2;
  *(float *)(param_5 + 0xe) = fVar3;
  fVar8 = fVar2 - fVar9 * fVar7;
  fVar3 = fVar2 * fVar3;
  fVar7 = fVar9 * fVar9;
  param_5[1] = CONCAT44(fVar6,fVar6);
  *param_5 = CONCAT44(fVar6,fVar6);
  fVar12 = fVar10 * fVar9;
  *(float *)(param_5 + 0xc) = fVar5;
  *(float *)((long)param_5 + 0x54) = fVar2 * fVar5;
  fVar14 = fVar2 * fVar5 * fVar5;
  *(float *)((long)param_5 + 0x1c) = fVar4;
  fVar11 = (fVar2 - fVar10 * fVar6) - fVar9 * fVar4;
  *(float *)(param_5 + 5) = fVar4;
  *(float *)((long)param_5 + 0x34) = fVar4;
  *(float *)((long)param_5 + 100) = fVar7 - fVar10;
  *(float *)((long)param_5 + 0x8c) = fVar5;
  *(float *)(param_5 + 0x10) = fVar6;
  param_5[2] = 0;
  *(undefined4 *)(param_5 + 3) = 0;
  param_5[4] = 0;
  *(float *)((long)param_5 + 0x2c) = fVar11;
  *(float *)(param_5 + 7) = fVar11;
  *(float *)((long)param_5 + 0x74) = fVar12;
  *(float *)((long)param_5 + 0x44) = fVar8;
  fVar2 = fVar13 - fVar9 * fVar8;
  *(float *)(param_5 + 0xd) = (fVar10 * -2.0 + fVar7) * fVar5;
  *(float *)(param_5 + 0xb) = fVar14 + fVar3;
  *(float *)(param_5 + 9) = fVar2;
  *(float *)((long)param_5 + 0x6c) = fVar10 * fVar10 + fVar7 * (fVar7 + fVar10 * -3.0);
  *(undefined4 *)(param_5 + 6) = 0;
  *(float *)((long)param_5 + 0x5c) = (fVar3 * -2.0 - fVar14) * fVar9;
  *(float *)((long)param_5 + 0x3c) = (fVar13 + fVar12 * fVar6) - fVar9 * fVar11;
  *(float *)((long)param_5 + 0x4c) = fVar3 - fVar9 * (fVar2 + fVar13);
  *(float *)(param_5 + 0xf) = fVar12 * fVar5 + fVar10 * fVar10;
  *(float *)((long)param_5 + 0x7c) = (fVar10 * -2.0 * fVar10 - fVar12 * fVar5) * fVar9;
  return;
}


