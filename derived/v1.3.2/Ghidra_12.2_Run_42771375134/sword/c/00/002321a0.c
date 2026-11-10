/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002321a0; name: FUN_002321a0
 */


void FUN_002321a0(undefined4 *param_1,undefined8 param_2,float *param_3,float *param_4)

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
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined1 auStack_90 [48];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  fStack_ac = 1.0 / param_4[1];
  local_b0 = 1.0 / *param_4;
  local_a8 = 1.0 / param_4[2];
  local_a4 = param_4[3];
  local_a0 = param_4[4];
  local_9c = param_4[5];
  local_98 = param_4[6];
  fVar3 = param_3[5] * -2.0;
  fVar1 = param_3[2];
  fVar8 = param_3[3];
  fVar2 = param_3[4] * -2.0;
  fVar4 = param_3[6] * -2.0;
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar6 = fVar8 * fVar8 + -0.5;
  fVar5 = fVar2 * fVar9 + fVar3 * fVar10 + fVar4 * fVar1;
  fVar11 = -fVar9 - fVar9;
  fVar13 = -fVar1;
  fStack_d4 = fVar8 * (fVar13 - fVar1);
  local_d0 = (fVar13 - fVar1) * fVar13;
  fVar12 = -fVar10;
  fStack_dc = fVar11 * fVar12 + fStack_d4;
  fStack_d4 = fVar11 * fVar12 - fStack_d4;
  fVar7 = fVar12 - fVar10;
  local_c0 = fVar11 * fVar9 + 1.0;
  local_e0 = (1.0 - fVar7 * fVar12) - local_d0;
  local_d0 = local_c0 - local_d0;
  local_d8 = fVar11 * fVar13 - fVar8 * fVar7;
  fStack_cc = fVar8 * fVar11 + fVar7 * fVar13;
  local_c8 = fVar11 * fVar13 + fVar8 * fVar7;
  fStack_c4 = fVar7 * fVar13 - fVar8 * fVar11;
  local_c0 = local_c0 - fVar7 * fVar12;
  fStack_bc = fVar9 * fVar5 + (fVar2 * fVar6 - fVar8 * (fVar4 * fVar10 - fVar3 * fVar1));
  local_b8 = fVar10 * fVar5 + (fVar3 * fVar6 - fVar8 * (fVar2 * fVar1 - fVar4 * fVar9));
  fStack_b4 = (fVar4 * fVar6 - fVar8 * (fVar3 * fVar9 - fVar2 * fVar10)) + fVar1 * fVar5;
  FUN_002325a0(auStack_90,&local_b0,&local_e0);
  FUN_002323c0(&local_60,auStack_90,param_2);
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  param_1[3] = local_54;
  param_1[4] = local_50;
  param_1[5] = local_4c;
  param_1[6] = local_48;
  param_1[7] = local_44;
  param_1[8] = local_40;
  param_1[9] = local_3c;
  param_1[10] = local_38;
  param_1[0xb] = local_34;
  param_1[0xc] = local_30;
  param_1[0xd] = local_2c;
  param_1[0xe] = local_28;
  return;
}


