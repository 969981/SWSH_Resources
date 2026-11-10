/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00222310; name: FUN_00222310
 */


bool FUN_00222310(long param_1,long param_2,float *param_3,float *param_4,float *param_5,
                 undefined8 param_6,long param_7)

{
  long lVar1;
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
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_1c8;
  float local_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float local_190;
  float local_18c;
  float local_188;
  float fStack_184;
  float *local_180;
  float local_178;
  float fStack_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  undefined4 uStack_150;
  long local_148;
  undefined1 *puStack_140;
  undefined1 auStack_138 [80];
  undefined1 auStack_e8 [36];
  undefined1 auStack_c4 [12];
  undefined1 auStack_b8 [16];
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  fVar14 = *param_3;
  fVar6 = param_3[3];
  fVar12 = fVar6 + fVar6;
  fVar17 = fVar14 + fVar14;
  fVar11 = *(float *)(param_1 + 8);
  fVar4 = param_4[3];
  fVar3 = param_4[1];
  fVar2 = param_4[2];
  fVar5 = fVar17 * param_3[2] - fVar12 * param_3[1];
  fVar7 = param_3[2] * fVar12 + fVar17 * param_3[1];
  fVar6 = fVar14 * fVar17 + fVar6 * fVar12 + -1.0;
  fVar10 = fVar4 * fVar4 + -0.5;
  fVar14 = -(fVar11 * fVar7) - (param_4[5] - param_3[5]);
  fVar12 = -(fVar11 * fVar5) - (param_4[6] - param_3[6]);
  fVar13 = fVar11 * fVar7 - (param_4[5] - param_3[5]);
  fVar7 = -(fVar11 * fVar6) - (param_4[4] - param_3[4]);
  fVar17 = fVar11 * fVar6 - (param_4[4] - param_3[4]);
  fVar12 = fVar12 + fVar12;
  fVar14 = fVar14 + fVar14;
  fVar6 = *param_4;
  fVar15 = fVar11 * fVar5 - (param_4[6] - param_3[6]);
  fVar13 = fVar13 + fVar13;
  fVar15 = fVar15 + fVar15;
  fVar17 = fVar17 + fVar17;
  fVar7 = fVar7 + fVar7;
  fVar16 = fVar17 * fVar6 + fVar13 * fVar3 + fVar15 * fVar2;
  fVar5 = fVar7 * fVar6 + fVar14 * fVar3 + fVar12 * fVar2;
  fVar11 = *(float *)(param_1 + 4) + *param_5;
  fVar9 = fVar6 * fVar16 + (fVar17 * fVar10 - fVar4 * (fVar15 * fVar3 - fVar13 * fVar2));
  fVar8 = fVar3 * fVar16 + (fVar13 * fVar10 - fVar4 * (fVar17 * fVar2 - fVar6 * fVar15));
  fVar17 = (fVar15 * fVar10 - fVar4 * (fVar13 * fVar6 - fVar17 * fVar3)) + fVar2 * fVar16;
  fVar15 = fVar6 * fVar5 + (fVar7 * fVar10 - fVar4 * (fVar12 * fVar3 - fVar14 * fVar2));
  fVar13 = fVar3 * fVar5 + (fVar14 * fVar10 - fVar4 * (fVar7 * fVar2 - fVar6 * fVar12));
  fVar2 = (fVar12 * fVar10 - fVar4 * (fVar14 * fVar6 - fVar7 * fVar3)) + fVar2 * fVar5;
  lVar1 = *(long *)(param_2 + 0x30);
  local_1c8 = (undefined **)CONCAT44(fVar8,fVar9);
  local_1b8 = CONCAT44(fVar2,fVar13);
                    /* try { // try from 00222518 to 00222523 has its CatchHandler @ 00222888 */
  local_1c0 = fVar17;
  fStack_1bc = fVar15;
  local_1b0 = fVar11;
  local_a8 = fVar9;
  fStack_a4 = fVar8;
  local_a0 = fVar17;
  local_9c = fVar15;
  local_98 = fVar13;
  local_94 = fVar2;
  FUN_00295c10(auStack_e8,&local_1c8);
  local_158 = fVar11;
  local_148 = lVar1;
  if (((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) &&
     (*(float *)(param_2 + 0xc) == 1.0)) {
    local_154 = *param_5;
    uStack_150 = *(undefined4 *)(param_1 + 4);
    local_1c0 = 2.8026e-45;
    local_1c8 = &PTR_LAB_025e43b0;
    fVar3 = *param_4;
    fVar6 = param_4[1];
    fVar5 = fVar6 + fVar6;
    fVar12 = param_4[2];
    fVar7 = param_4[3];
    fVar4 = fVar3 + fVar3;
    local_1a0 = fVar12 * (fVar12 + fVar12);
    fStack_1a4 = (fVar12 + fVar12) * fVar7;
    local_190 = 1.0 - fVar3 * fVar4;
    fStack_1ac = fVar4 * fVar6 + fStack_1a4;
    local_1a8 = fVar4 * fVar12 - fVar5 * fVar7;
    fStack_1a4 = fVar4 * fVar6 - fStack_1a4;
    fStack_19c = fVar5 * fVar12 + fVar4 * fVar7;
    local_198 = fVar4 * fVar12 + fVar5 * fVar7;
    fStack_194 = fVar5 * fVar12 - fVar4 * fVar7;
    local_1b0 = (1.0 - fVar6 * fVar5) - local_1a0;
    local_1a0 = local_190 - local_1a0;
    local_190 = local_190 - fVar6 * fVar5;
    local_18c = param_4[4];
    local_178 = (fVar9 + fVar15) * 0.5;
    fStack_174 = (fVar8 + fVar13) * 0.5;
    local_188 = param_4[5];
    fStack_184 = param_4[6];
    local_170 = (fVar17 + fVar2) * 0.5;
    local_180 = &local_a8;
    local_1b8 = param_7;
                    /* try { // try from 00222638 to 0022266b has its CatchHandler @ 00222884 */
    local_168 = fabsf((fVar9 - fVar15) * 0.5);
    local_168 = fVar11 + local_168;
    local_164 = fabsf((fVar8 - fVar13) * 0.5);
    local_164 = fVar11 + local_164;
    local_160 = fabsf((fVar17 - fVar2) * 0.5);
    local_160 = fVar11 + local_160;
                    /* try { // try from 0022268c to 002226a3 has its CatchHandler @ 0022287c */
    (*(code *)(&PTR_LAB_025e43c8)[*(ushort *)(lVar1 + 8) - 3])(lVar1,auStack_e8,&local_1c8,1,1);
  }
  else {
                    /* try { // try from 002226ac to 002226b3 has its CatchHandler @ 00222880 */
    FUN_001b0f90(auStack_138,(float *)(param_2 + 4),param_2 + 0x10);
    fVar4 = local_94;
    fVar6 = local_98;
    fVar3 = local_a0;
    fVar2 = fStack_a4;
    local_154 = *param_5;
    uStack_150 = *(undefined4 *)(param_1 + 4);
    local_1c0 = 2.8026e-45;
    local_1c8 = &PTR_LAB_025e43b0;
    fVar5 = *param_4;
    fVar12 = param_4[1];
    fVar14 = fVar12 + fVar12;
    fVar17 = param_4[2];
    fVar8 = param_4[3];
    fVar7 = fVar5 + fVar5;
    local_1a0 = fVar17 * (fVar17 + fVar17);
    fStack_1a4 = (fVar17 + fVar17) * fVar8;
    local_190 = 1.0 - fVar5 * fVar7;
    fStack_1ac = fVar7 * fVar12 + fStack_1a4;
    local_1a8 = fVar7 * fVar17 - fVar14 * fVar8;
    fStack_1a4 = fVar7 * fVar12 - fStack_1a4;
    fStack_19c = fVar14 * fVar17 + fVar7 * fVar8;
    fStack_194 = fVar14 * fVar17 - fVar7 * fVar8;
    local_1b0 = (1.0 - fVar12 * fVar14) - local_1a0;
    local_1a0 = local_190 - local_1a0;
    local_190 = local_190 - fVar12 * fVar14;
    local_198 = fVar7 * fVar17 + fVar14 * fVar8;
    local_18c = param_4[4];
    fStack_174 = (fStack_a4 + local_98) * 0.5;
    local_188 = param_4[5];
    fStack_184 = param_4[6];
    local_178 = (local_a8 + local_9c) * 0.5;
    local_170 = (local_a0 + local_94) * 0.5;
    local_180 = &local_a8;
    local_1b8 = param_7;
                    /* try { // try from 002227ac to 002227df has its CatchHandler @ 00222890 */
    local_168 = fabsf((local_a8 - local_9c) * 0.5);
    local_168 = fVar11 + local_168;
    local_164 = fabsf((fVar2 - fVar6) * 0.5);
    local_164 = fVar11 + local_164;
    local_160 = fabsf((fVar3 - fVar4) * 0.5);
    local_160 = fVar11 + local_160;
    local_1c8 = &PTR_LAB_025e43e8;
    puStack_140 = auStack_138;
                    /* try { // try from 0022280c to 00222843 has its CatchHandler @ 0022288c */
    FUN_002228b0(auStack_138,auStack_c4,auStack_b8,auStack_e8);
    (*(code *)(&PTR_LAB_025e43c8)[*(ushort *)(lVar1 + 8) - 3])(lVar1,auStack_e8,&local_1c8,1,1);
  }
  return *(int *)(param_7 + 0x1000) != 0;
}


