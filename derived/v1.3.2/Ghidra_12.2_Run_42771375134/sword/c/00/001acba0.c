/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001acba0; name: FUN_001acba0
 */


void FUN_001acba0(float param_1,float param_2,long param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
                 float *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_1 <= 0.0) || (*param_10 == 0.0)) {
    if ((*(byte *)(param_3 + 0x84) >> 1 & 1) != 0) {
      return;
    }
    fVar9 = *param_7;
    fVar6 = *param_5;
    fVar7 = param_5[1];
    fVar8 = param_5[2];
    fVar5 = fVar6;
    if (fVar6 <= -fVar9) {
      fVar5 = -fVar9;
    }
    if (fVar9 <= fVar5) {
      fVar5 = fVar9;
    }
    fVar6 = fVar6 - fVar5;
    *(float *)(param_3 + 0xa0) = fVar6;
    *(float *)(param_3 + 0xa4) = fVar7;
    *(float *)(param_3 + 0xa8) = fVar8;
    fVar6 = sqrtf(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    if (*param_8 + *param_11 <= fVar6) {
      return;
    }
    if (fVar6 == 0.0) {
      fVar9 = 0.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
      *(undefined8 *)(param_3 + 0xa0) = 0;
      *(undefined4 *)(param_3 + 0xa8) = 0;
    }
    else {
      fVar9 = 1.0 / fVar6;
      fVar8 = fVar9 * *(float *)(param_3 + 0xa0);
      fVar7 = fVar9 * *(float *)(param_3 + 0xa4);
      fVar9 = fVar9 * *(float *)(param_3 + 0xa8);
      *(float *)(param_3 + 0xa0) = fVar8;
      *(float *)(param_3 + 0xa4) = fVar7;
      *(float *)(param_3 + 0xa8) = fVar9;
    }
    fVar11 = *(float *)(param_3 + 0x5c);
    fVar10 = *param_8 + fVar11;
    fVar7 = fVar7 * fVar10;
    fVar9 = fVar9 * fVar10;
    fVar5 = fVar5 + fVar8 * fVar10;
  }
  else {
    fVar5 = sqrtf(param_1);
    fVar5 = -(fVar5 + param_2) / *param_10;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if (0.0 <= fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar1 = fVar5 < 1.0;
        bVar2 = fVar5 == 1.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      if (*(float *)(param_3 + 0x2c) <= fVar5) {
        return;
      }
      fVar7 = fVar5 * param_6[1] + param_4[1];
      fVar6 = fVar5 * *param_6 + *param_4;
      fVar8 = fVar5 * param_6[2] + param_4[2];
      *(float *)(param_3 + 0xa0) = fVar6;
      *(float *)(param_3 + 0xa4) = fVar7;
      *(float *)(param_3 + 0xa8) = fVar8;
      fVar6 = fVar6 - *param_9;
      *(float *)(param_3 + 0xa0) = fVar6;
      fVar9 = 1.0 / *param_8;
      *(float *)(param_3 + 0xa0) = fVar6 * fVar9;
      *(float *)(param_3 + 0xa4) = fVar9 * fVar7;
      *(float *)(param_3 + 0xa8) = fVar9 * fVar8;
      *(float *)(param_3 + 0xb8) = *param_4;
      *(float *)(param_3 + 0xbc) = param_4[1];
      fVar6 = param_4[2];
      *(float *)(param_3 + 0x2c) = fVar5;
      *(float *)(param_3 + 0xc0) = fVar6;
      uVar4 = *(uint *)(param_3 + 0x84) | 8;
      goto LAB_001ace60;
    }
    if ((*(byte *)(param_3 + 0x84) >> 1 & 1) != 0) {
      return;
    }
    fVar9 = *param_7;
    fVar6 = *param_5;
    fVar7 = param_5[1];
    fVar8 = param_5[2];
    fVar5 = fVar6;
    if (fVar6 <= -fVar9) {
      fVar5 = -fVar9;
    }
    if (fVar9 <= fVar5) {
      fVar5 = fVar9;
    }
    fVar6 = fVar6 - fVar5;
    *(float *)(param_3 + 0xa0) = fVar6;
    *(float *)(param_3 + 0xa4) = fVar7;
    *(float *)(param_3 + 0xa8) = fVar8;
    fVar6 = sqrtf(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    if (*param_8 + *param_11 <= fVar6) {
      return;
    }
    if (fVar6 == 0.0) {
      fVar9 = 0.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
      *(undefined8 *)(param_3 + 0xa0) = 0;
      *(undefined4 *)(param_3 + 0xa8) = 0;
    }
    else {
      fVar9 = 1.0 / fVar6;
      fVar8 = fVar9 * *(float *)(param_3 + 0xa0);
      fVar7 = fVar9 * *(float *)(param_3 + 0xa4);
      fVar9 = fVar9 * *(float *)(param_3 + 0xa8);
      *(float *)(param_3 + 0xa0) = fVar8;
      *(float *)(param_3 + 0xa4) = fVar7;
      *(float *)(param_3 + 0xa8) = fVar9;
    }
    fVar11 = *(float *)(param_3 + 0x5c);
    fVar10 = *param_8 + fVar11;
    fVar7 = fVar7 * fVar10;
    fVar9 = fVar9 * fVar10;
    fVar5 = fVar5 + fVar8 * fVar10;
  }
  uVar4 = *(uint *)(param_3 + 0x84);
  *(uint *)(param_3 + 0x84) = uVar4 | 0x20;
  *(float *)(param_3 + 0xb8) = fVar5;
  *(float *)(param_3 + 0xbc) = fVar7 + 0.0;
  *(float *)(param_3 + 0xc0) = fVar9 + 0.0;
  if (fVar11 + *param_8 <= fVar6) {
    return;
  }
  uVar4 = uVar4 | 0x30;
LAB_001ace60:
  *(uint *)(param_3 + 0x84) = uVar4;
  return;
}


