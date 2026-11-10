/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002ccb20; name: FUN_002ccb20
 */


undefined8
FUN_002ccb20(float param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6,float *param_7,undefined8 param_8,float *param_9)

{
  ulong uVar1;
  ushort uVar2;
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
  float fVar15;
  
  if (*(char *)(param_3 + 0x12) == '\0') {
    return 0;
  }
  if (*(char *)(param_3 + 0x13) == '\0') {
    fVar3 = *(float *)(param_4 + 0x24) * *(float *)(param_4 + 0x24) +
            *(float *)(param_4 + 0x28) * *(float *)(param_4 + 0x28) +
            *(float *)(param_4 + 0x2c) * *(float *)(param_4 + 0x2c);
    if (fVar3 <= 0.0) {
      fVar5 = 0.0;
      fVar4 = 0.0;
      fVar3 = 0.0;
    }
    else {
      fVar3 = sqrtf(fVar3);
      fVar3 = 1.0 / fVar3;
      fVar5 = *(float *)(param_4 + 0x24) * fVar3;
      fVar4 = fVar3 * *(float *)(param_4 + 0x28);
      fVar3 = fVar3 * *(float *)(param_4 + 0x2c);
    }
    if (0.0 < fVar5 * *(float *)(param_3 + 0x38) + fVar4 * *(float *)(param_3 + 0x3c) +
              fVar3 * *(float *)(param_3 + 0x40)) {
      fVar5 = -fVar5;
      fVar4 = -fVar4;
      fVar3 = -fVar3;
    }
    fVar5 = fVar5 + fVar5;
    fVar4 = fVar4 + fVar4;
    fVar3 = fVar3 + fVar3;
    fVar8 = *(float *)(param_4 + 0x18) + *(float *)(param_4 + 0x18);
    fVar9 = *(float *)(param_4 + 0x1c) + *(float *)(param_4 + 0x1c);
    fVar7 = *(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x20);
    *(float *)(param_4 + 0x30) = *(float *)(param_4 + 0x30) * param_1;
    fVar6 = *param_7;
    fVar10 = param_7[1];
    fVar11 = param_7[2];
    fVar12 = param_7[3];
    fVar13 = fVar12 * fVar12 + -0.5;
    fVar14 = fVar5 * fVar6 + fVar4 * fVar10 + fVar3 * fVar11;
    fVar15 = fVar6 * fVar8 + fVar10 * fVar9 + fVar11 * fVar7;
    *(float *)(param_4 + 0x24) =
         fVar6 * fVar14 + fVar5 * fVar13 + fVar12 * (fVar3 * fVar10 - fVar4 * fVar11);
    *(float *)(param_4 + 0x28) =
         fVar10 * fVar14 + fVar4 * fVar13 + fVar12 * (fVar5 * fVar11 - fVar3 * fVar6);
    *(float *)(param_4 + 0x2c) =
         fVar3 * fVar13 + fVar12 * (fVar4 * fVar6 - fVar5 * fVar10) + fVar11 * fVar14;
    fVar3 = param_7[5];
    fVar5 = param_7[6];
    uVar2 = 0x407;
    *(float *)(param_4 + 0x18) =
         param_7[4] + fVar6 * fVar15 + fVar13 * fVar8 + fVar12 * (fVar10 * fVar7 - fVar11 * fVar9);
    *(float *)(param_4 + 0x1c) =
         fVar3 + fVar10 * fVar15 + fVar13 * fVar9 + fVar12 * (fVar11 * fVar8 - fVar6 * fVar7);
    *(float *)(param_4 + 0x20) =
         fVar5 + fVar13 * fVar7 + fVar12 * (fVar6 * fVar9 - fVar10 * fVar8) + fVar11 * fVar15;
  }
  else {
    *(undefined2 *)(param_4 + 0x14) = 0x406;
    if (((*(byte *)(param_3 + 0x11) >> 1 & 1) == 0) ||
       (uVar1 = FUN_002b1c30(param_2,param_5,param_6,param_8,param_7,*(undefined1 *)(param_3 + 0x14)
                             ,1,param_4), (uVar1 & 1) == 0)) {
      *(undefined4 *)(param_4 + 0x30) = 0;
      fVar3 = param_9[1];
      fVar5 = param_9[2];
      *(float *)(param_4 + 0x24) = -*param_9;
      *(float *)(param_4 + 0x28) = -fVar3;
      *(float *)(param_4 + 0x2c) = -fVar5;
      return 1;
    }
    uVar2 = *(ushort *)(param_4 + 0x14) | 1;
  }
  *(ushort *)(param_4 + 0x14) = uVar2;
  return 1;
}


