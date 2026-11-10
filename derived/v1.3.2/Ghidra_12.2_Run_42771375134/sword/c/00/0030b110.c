/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0030b110; name: FUN_0030b110
 */


void FUN_0030b110(long param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
                 undefined8 param_5,float *param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  
  fVar2 = sqrtf(*param_4 * *param_4 + param_4[1] * param_4[1] + param_4[2] * param_4[2] +
                param_4[3] * param_4[3]);
  fVar2 = 1.0 / fVar2;
  uVar1 = *(undefined8 *)(param_4 + 4);
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  fVar7 = param_4[6];
  *(float *)(param_1 + 0x28) = *param_4 * fVar2;
  *(float *)(param_1 + 0x2c) = fVar2 * fVar3;
  *(float *)(param_1 + 0x30) = fVar2 * fVar4;
  *(float *)(param_1 + 0x34) = fVar2 * fVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(float *)(param_1 + 0x40) = fVar7;
  fVar2 = sqrtf(*param_6 * *param_6 + param_6[1] * param_6[1] + param_6[2] * param_6[2] +
                param_6[3] * param_6[3]);
  fVar2 = 1.0 / fVar2;
  fVar3 = *param_6;
  fVar4 = param_6[1];
  fVar5 = param_6[2];
  fVar6 = param_6[3];
  fVar7 = param_6[6];
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_6 + 4);
  *(float *)(param_1 + 0x5c) = fVar7;
  *(float *)(param_1 + 0x44) = fVar3 * fVar2;
  *(float *)(param_1 + 0x48) = fVar2 * fVar4;
  *(float *)(param_1 + 0x4c) = fVar2 * fVar5;
  *(float *)(param_1 + 0x50) = fVar2 * fVar6;
  FUN_0030b4c0(&local_70,param_1,param_3);
  fVar8 = *param_4;
  fVar9 = param_4[1];
  fVar2 = (param_4[6] - local_58) + (param_4[6] - local_58);
  fVar4 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = (param_4[5] - fStack_5c) + (param_4[5] - fStack_5c);
  fVar5 = (param_4[4] - local_60) + (param_4[4] - local_60);
  fVar10 = local_64 * local_64 + -0.5;
  fVar3 = (fVar5 * -local_70 - fVar7 * local_6c) - fVar2 * local_68;
  *(float *)(param_2 + 2) =
       ((local_64 * fVar8 - fVar6 * local_70) - fVar4 * local_6c) + fVar9 * local_68;
  *(float *)((long)param_2 + 0x14) =
       ((local_64 * fVar9 - fVar6 * local_6c) - fVar8 * local_68) + fVar4 * local_70;
  *(float *)(param_2 + 3) =
       ((local_64 * fVar4 - fVar6 * local_68) - fVar9 * local_70) + fVar8 * local_6c;
  *(float *)((long)param_2 + 0x1c) =
       local_64 * fVar6 + fVar8 * local_70 + fVar9 * local_6c + fVar4 * local_68;
  *(float *)(param_2 + 4) =
       (fVar10 * fVar5 + local_64 * (fVar7 * local_68 - fVar2 * local_6c)) - fVar3 * local_70;
  *(float *)((long)param_2 + 0x24) =
       (fVar10 * fVar7 + local_64 * (fVar2 * local_70 - fVar5 * local_68)) - fVar3 * local_6c;
  *(float *)(param_2 + 5) =
       (fVar10 * fVar2 + local_64 * (fVar5 * local_6c - fVar7 * local_70)) - fVar3 * local_68;
  FUN_0030b4c0(&local_70,param_1,param_5);
  fVar5 = *param_6;
  fVar6 = param_6[1];
  fVar8 = param_6[2];
  fVar9 = param_6[3];
  fVar2 = (param_6[6] - local_58) + (param_6[6] - local_58);
  fVar4 = (param_6[5] - fStack_5c) + (param_6[5] - fStack_5c);
  fVar7 = (param_6[4] - local_60) + (param_6[4] - local_60);
  fVar10 = local_64 * local_64 + -0.5;
  *(float *)((long)param_2 + 0x34) =
       ((local_64 * fVar8 - fVar9 * local_68) - fVar6 * local_70) + fVar5 * local_6c;
  *(float *)(param_2 + 7) =
       local_64 * fVar9 + fVar5 * local_70 + fVar6 * local_6c + fVar8 * local_68;
  fVar3 = (fVar7 * -local_70 - fVar4 * local_6c) - fVar2 * local_68;
  *(float *)((long)param_2 + 0x2c) =
       ((local_64 * fVar5 - fVar9 * local_70) - fVar8 * local_6c) + fVar6 * local_68;
  *(float *)(param_2 + 6) =
       ((local_64 * fVar6 - fVar9 * local_6c) - fVar5 * local_68) + fVar8 * local_70;
  *(float *)((long)param_2 + 0x3c) =
       (fVar10 * fVar7 + local_64 * (fVar4 * local_68 - fVar2 * local_6c)) - fVar3 * local_70;
  *(float *)(param_2 + 8) =
       (fVar10 * fVar4 + local_64 * (fVar2 * local_70 - fVar7 * local_68)) - fVar3 * local_6c;
  *param_2 = 0x3f8000003f800000;
  param_2[1] = 0x3f8000003f800000;
  *(float *)((long)param_2 + 0x44) =
       (fVar10 * fVar2 + local_64 * (fVar7 * local_6c - fVar4 * local_70)) - fVar3 * local_68;
  return;
}


