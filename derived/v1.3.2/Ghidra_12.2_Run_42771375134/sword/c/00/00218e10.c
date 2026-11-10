/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00218e10; name: FUN_00218e10
 */


void FUN_00218e10(undefined4 *param_1,float *param_2)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  fVar7 = param_2[3] - *param_2;
  fVar9 = param_2[5] - param_2[2];
  fVar8 = param_2[4] - param_2[1];
  fVar2 = sqrtf(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    fVar7 = fVar7 * fVar2;
    fVar8 = fVar8 * fVar2;
    fVar9 = fVar9 * fVar2;
  }
  fVar3 = fabsf(fVar7);
  fVar13 = fVar8;
  fVar2 = -fVar9;
  fVar10 = 0.0;
  if (DAT_01d4bfe0 <= fVar3) {
    fVar13 = 0.0;
    fVar2 = fVar7;
    fVar10 = -fVar8;
  }
  fVar3 = sqrtf(fVar13 * fVar13 + fVar10 * fVar10 + fVar2 * fVar2);
  if (0.0 < fVar3) {
    fVar3 = 1.0 / fVar3;
    fVar10 = fVar3 * fVar10;
    fVar2 = fVar3 * fVar2;
    fVar13 = fVar3 * fVar13;
  }
  fVar14 = param_2[6] * 0.25;
  fVar3 = fVar10 * fVar14;
  fVar11 = fVar13 * fVar14;
  fVar12 = fVar2 * fVar14;
  fVar4 = sqrtf(3.0);
  fVar14 = fVar14 * fVar4;
  fVar4 = (fVar8 * fVar13 - fVar9 * fVar2) * fVar14;
  fVar13 = (fVar9 * fVar10 - fVar7 * fVar13) * fVar14;
  fVar14 = (fVar7 * fVar2 - fVar8 * fVar10) * fVar14;
  fVar2 = param_2[5];
  fVar10 = param_2[6];
  fVar5 = param_2[3];
  fVar6 = param_2[4];
  *param_1 = 1;
  param_1[8] = 0;
  local_80 = *param_2;
  local_7c = param_2[1];
  local_78 = param_2[2];
  fVar5 = fVar5 - fVar7 * fVar10;
  fVar6 = fVar6 - fVar8 * fVar10;
  fVar2 = fVar2 - fVar9 * fVar10;
  uVar1 = FUN_002186d0(param_1,&local_80);
  local_90 = param_2[3];
  local_8c = param_2[4];
  local_88 = param_2[5];
  uVar1 = FUN_002186d0(uVar1,&local_90);
  *param_1 = 4;
  param_1[8] = 0;
  local_a0 = param_2[3];
  local_9c = param_2[4];
  local_98 = param_2[5];
  uVar1 = FUN_002186d0(uVar1,&local_a0);
  fVar9 = fVar12 + fVar12 + fVar6;
  fVar8 = fVar11 + fVar11 + fVar2;
  fVar7 = fVar3 + fVar3 + fVar5;
  local_b0 = fVar7;
  fStack_ac = fVar9;
  local_a8 = fVar8;
  uVar1 = FUN_002186d0(uVar1,&local_b0);
  fVar5 = fVar5 - fVar3;
  fVar6 = fVar6 - fVar12;
  fVar2 = fVar2 - fVar11;
  local_c0 = fVar5 - fVar4;
  fStack_bc = fVar6 - fVar13;
  local_b8 = fVar2 - fVar14;
  uVar1 = FUN_002186d0(uVar1,&local_c0);
  local_d0 = fVar4 + fVar5;
  fStack_cc = fVar13 + fVar6;
  local_c8 = fVar14 + fVar2;
  uVar1 = FUN_002186d0(uVar1,&local_d0);
  local_e0 = param_2[3];
  local_dc = param_2[4];
  local_d8 = param_2[5];
  uVar1 = FUN_002186d0(uVar1,&local_e0);
  local_f0 = fVar7;
  fStack_ec = fVar9;
  local_e8 = fVar8;
  FUN_002186d0(uVar1,&local_f0);
  return;
}


