/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017e820; name: FUN_0017e820
 */


float FUN_0017e820(float param_1,float param_2,float param_3,float param_4,undefined8 *param_5,
                  float *param_6,float *param_7,undefined8 *param_8,float *param_9,float *param_10)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_c0;
  float local_bc;
  float fStack_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  
  if (*(short *)(param_5 + 2) == -1) {
    fVar7 = *(float *)(param_5[1] + 0xc);
    fVar5 = fVar7 * *param_6 * param_1;
    fVar6 = fVar7 * param_6[1] * param_1;
    param_1 = fVar7 * param_6[2] * param_1;
    *param_7 = fVar5;
    param_7[1] = fVar6;
    param_7[2] = param_1;
    fVar7 = param_6[4] * param_2;
    fVar8 = param_6[5] * param_2;
    param_2 = param_6[6] * param_2;
    param_7[4] = fVar7;
    param_7[5] = fVar8;
    param_7[6] = param_2;
  }
  else {
    local_c0 = *param_6 * param_1;
    local_bc = param_6[1] * param_1;
    fStack_b8 = param_6[2] * param_1;
    local_b0 = param_6[4] * param_2;
    fStack_ac = param_6[5] * param_2;
    local_a8 = param_6[6] * param_2;
    local_b4 = 0;
    local_a4 = 0;
                    /* try { // try from 0017e8dc to 0017e8e7 has its CatchHandler @ 0017eb34 */
    FUN_0015d1f0(*param_5,*(short *)(param_5 + 2),&local_c0,param_7);
    fVar5 = *param_7;
    fVar6 = param_7[1];
    param_1 = param_7[2];
    fVar7 = param_7[4];
    fVar8 = param_7[5];
    param_2 = param_7[6];
  }
  fVar14 = *param_6;
  fVar11 = param_6[1];
  fVar12 = param_6[2];
  fVar9 = param_6[4];
  fVar10 = param_6[5];
  fVar13 = param_6[6];
  if (*(short *)(param_8 + 2) == -1) {
    fVar3 = *(float *)(param_8[1] + 0xc);
    fVar2 = fVar3 * *param_9 * param_3;
    fVar1 = fVar3 * param_9[1] * param_3;
    param_3 = fVar3 * param_9[2] * param_3;
    *param_10 = fVar2;
    param_10[1] = fVar1;
    param_10[2] = param_3;
    fVar3 = param_9[4] * param_4;
    fVar4 = param_9[5] * param_4;
    param_4 = param_9[6] * param_4;
    param_10[4] = fVar3;
    param_10[5] = fVar4;
    param_10[6] = param_4;
  }
  else {
    local_c0 = *param_9 * param_3;
    local_bc = param_9[1] * param_3;
    fStack_b8 = param_9[2] * param_3;
    local_b0 = param_9[4] * param_4;
    local_b4 = 0;
    local_a4 = 0;
    fStack_ac = param_9[5] * param_4;
    local_a8 = param_9[6] * param_4;
                    /* try { // try from 0017e9f8 to 0017ea03 has its CatchHandler @ 0017eb30 */
    FUN_0015d1f0(*param_8,*(short *)(param_8 + 2),&local_c0,param_10);
    fVar2 = *param_10;
    fVar1 = param_10[1];
    param_3 = param_10[2];
    fVar3 = param_10[4];
    fVar4 = param_10[5];
    param_4 = param_10[6];
  }
  return fVar14 * fVar5 + fVar11 * fVar6 + fVar12 * param_1 +
         fVar9 * fVar7 + fVar10 * fVar8 + fVar13 * param_2 +
         *param_9 * fVar2 + param_9[1] * fVar1 + param_9[2] * param_3 +
         param_9[4] * fVar3 + param_9[5] * fVar4 + param_9[6] * param_4;
}


