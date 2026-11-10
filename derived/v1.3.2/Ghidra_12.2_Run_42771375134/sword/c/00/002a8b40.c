/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a8b40; name: FUN_002a8b40
 */


uint FUN_002a8b40(long param_1,float *param_2,float *param_3)

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
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_80;
  long lStack_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar9 = param_2[5] * -2.0;
  fVar8 = param_2[4] * -2.0;
  fVar5 = param_2[6] * -2.0;
  fVar6 = fVar13 * fVar13 + -0.5;
  fVar10 = fVar8 * fVar2 + fVar9 * fVar3 + fVar5 * fVar12;
  fVar11 = -fVar3;
  fVar4 = fVar11 - fVar3;
  fVar7 = -fVar2 - fVar2;
  fVar14 = -fVar12;
  local_60 = (fVar14 - fVar12) * fVar14;
  fStack_64 = fVar13 * (fVar14 - fVar12);
  local_70 = (1.0 - fVar4 * fVar11) - local_60;
  local_50 = fVar7 * fVar2 + 1.0;
  local_68 = fVar7 * fVar14 - fVar13 * fVar4;
  local_58 = fVar7 * fVar14 + fVar13 * fVar4;
  fStack_6c = fVar7 * fVar11 + fStack_64;
  fStack_64 = fVar7 * fVar11 - fStack_64;
  local_60 = local_50 - local_60;
  fStack_5c = fVar13 * fVar7 + fVar4 * fVar14;
  fStack_54 = fVar4 * fVar14 - fVar13 * fVar7;
  local_50 = local_50 - fVar4 * fVar11;
  fVar4 = (*param_3 + param_3[3]) * 0.5;
  fVar7 = (param_3[1] + param_3[4]) * 0.5;
  fVar11 = (param_3[2] + param_3[5]) * 0.5;
  local_40 = (param_3[3] - *param_3) * 0.5;
  fStack_4c = fVar2 * fVar10 + (fVar8 * fVar6 - fVar13 * (fVar5 * fVar3 - fVar9 * fVar12)) +
              local_70 * fVar4 + fStack_64 * fVar7 + local_58 * fVar11;
  local_48 = fVar3 * fVar10 + (fVar9 * fVar6 - fVar13 * (fVar8 * fVar12 - fVar5 * fVar2)) +
             fStack_6c * fVar4 + local_60 * fVar7 + fStack_54 * fVar11;
  fStack_44 = (fVar5 * fVar6 - fVar13 * (fVar9 * fVar2 - fVar8 * fVar3)) + fVar12 * fVar10 +
              local_68 * fVar4 + fStack_5c * fVar7 + local_50 * fVar11;
  fStack_3c = (param_3[4] - param_3[1]) * 0.5;
  local_38 = (param_3[5] - param_3[2]) * 0.5;
  local_80 = *(undefined8 *)(param_1 + 8);
  lStack_78 = param_1;
                    /* try { // try from 002a8d1c to 002a8d57 has its CatchHandler @ 002a8d74 */
  fabsf(*(float *)(param_1 + 0x14));
  fabsf(*(float *)(param_1 + 0x18));
  local_8c = 1.0 / *(float *)(param_1 + 0x10);
  local_90 = 1.0 / *(float *)(param_1 + 0x14);
  local_88 = 1.0 / *(float *)(param_1 + 0x18);
  uVar1 = FUN_002a8d80(&local_90,&local_70);
  return uVar1 & 1;
}


