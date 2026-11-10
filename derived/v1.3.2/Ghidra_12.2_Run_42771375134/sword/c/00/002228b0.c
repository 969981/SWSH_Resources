/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002228b0; name: FUN_002228b0
 */


void FUN_002228b0(long param_1,float *param_2,float *param_3,float *param_4)

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
  float local_30;
  float local_2c;
  float local_28;
  
  fVar1 = *param_3;
  fVar2 = fVar1 * *param_4;
  fVar3 = fVar1 * param_4[1];
  fVar1 = fVar1 * param_4[2];
  fVar4 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x2c);
  fVar7 = *(float *)(param_1 + 0x34);
  fVar9 = *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x40);
  fVar8 = *(float *)(param_1 + 0x44);
  *param_4 = fVar2 * *(float *)(param_1 + 0x24) + fVar3 * *(float *)(param_1 + 0x30) +
             fVar1 * *(float *)(param_1 + 0x3c);
  param_4[1] = fVar2 * fVar4 + fVar3 * fVar7 + fVar1 * fVar6;
  param_4[2] = fVar2 * fVar5 + fVar3 * fVar9 + fVar1 * fVar8;
  fVar1 = param_3[1];
  fVar5 = *(float *)(param_1 + 0x2c);
  fVar2 = fVar1 * param_4[3];
  fVar3 = fVar1 * param_4[4];
  fVar1 = fVar1 * param_4[5];
  fVar4 = *(float *)(param_1 + 0x28);
  fVar7 = *(float *)(param_1 + 0x34);
  fVar9 = *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x40);
  fVar8 = *(float *)(param_1 + 0x44);
  param_4[3] = fVar2 * *(float *)(param_1 + 0x24) + fVar3 * *(float *)(param_1 + 0x30) +
               fVar1 * *(float *)(param_1 + 0x3c);
  param_4[4] = fVar2 * fVar4 + fVar3 * fVar7 + fVar1 * fVar6;
  param_4[5] = fVar2 * fVar5 + fVar3 * fVar9 + fVar1 * fVar8;
  fVar1 = param_3[2];
  fVar2 = fVar1 * param_4[6];
  fVar3 = fVar1 * param_4[7];
  fVar1 = fVar1 * param_4[8];
  fVar4 = *(float *)(param_1 + 0x28);
  fVar5 = *(float *)(param_1 + 0x2c);
  fVar7 = *(float *)(param_1 + 0x34);
  fVar9 = *(float *)(param_1 + 0x38);
  fVar6 = *(float *)(param_1 + 0x40);
  fVar8 = *(float *)(param_1 + 0x44);
  param_4[6] = fVar2 * *(float *)(param_1 + 0x24) + fVar3 * *(float *)(param_1 + 0x30) +
               fVar1 * *(float *)(param_1 + 0x3c);
  param_4[7] = fVar2 * fVar4 + fVar3 * fVar7 + fVar1 * fVar6;
  param_4[8] = fVar2 * fVar5 + fVar3 * fVar9 + fVar1 * fVar8;
  fVar1 = *(float *)(param_1 + 0x28);
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar5 = *(float *)(param_1 + 0x2c);
  fVar6 = *(float *)(param_1 + 0x34);
  fVar8 = *(float *)(param_1 + 0x38);
  fVar9 = *(float *)(param_1 + 0x44);
  fVar4 = param_2[2];
  fVar7 = *(float *)(param_1 + 0x40);
  *param_2 = fVar2 * *(float *)(param_1 + 0x24) + fVar3 * *(float *)(param_1 + 0x30) +
             fVar4 * *(float *)(param_1 + 0x3c);
  param_2[1] = fVar2 * fVar1 + fVar3 * fVar6 + fVar4 * fVar7;
  param_2[2] = fVar2 * fVar5 + fVar3 * fVar8 + fVar4 * fVar9;
  FUN_004015c0(&local_30,param_4);
  *param_3 = local_30;
  param_3[1] = local_2c;
  param_3[2] = local_28;
  return;
}


