/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00582860; name: FUN_00582860
 */


float FUN_00582860(float param_1,float param_2,undefined8 param_3,float *param_4,float *param_5,
                  undefined8 param_6)

{
  bool bVar1;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float local_18c;
  undefined1 auStack_158 [64];
  float local_118;
  float fStack_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  ulong local_ac;
  undefined8 local_a4;
  float local_9c;
  ulong local_98;
  undefined8 uStack_90;
  float local_88;
  
  fVar12 = *param_4;
  fVar9 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = param_4[6];
  fVar16 = param_4[4];
  fVar8 = param_4[5];
  fVar14 = param_4[10];
  fVar17 = param_4[8];
  fVar10 = param_4[9];
  fVar13 = param_5[2];
  fVar15 = *param_5;
  fVar18 = param_5[1];
  fVar2 = fVar12 * fVar12 + fVar9 * fVar9 + fVar6 * fVar6;
  fVar21 = param_5[4];
  fVar20 = param_5[5];
  fVar11 = 1.0;
  fVar19 = param_5[6];
  fVar22 = param_5[10];
  fVar24 = param_5[8];
  fVar23 = param_5[9];
  fVar3 = param_5[3];
  fVar5 = param_5[7];
  local_98 = *(ulong *)(param_5 + 0xb);
  uStack_90 = *(undefined8 *)(param_5 + 0xd);
  local_88 = param_5[0xf];
  bVar1 = true;
  if ((fVar2 != 0.0) && (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 == 1.0;
  }
  if (!bVar1) {
    fVar4 = SQRT(fVar2);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar2);
    }
    fVar4 = 1.0 / fVar4;
    fVar12 = fVar12 * fVar4;
    fVar9 = fVar9 * fVar4;
    fVar6 = fVar6 * fVar4;
  }
  fVar2 = fVar16 * fVar16 + fVar8 * fVar8 + fVar7 * fVar7;
  bVar1 = true;
  if ((fVar2 != 0.0) && (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 == 1.0;
  }
  if (!bVar1) {
    fVar4 = SQRT(fVar2);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar2);
    }
    fVar4 = 1.0 / fVar4;
    fVar16 = fVar16 * fVar4;
    fVar8 = fVar8 * fVar4;
    fVar7 = fVar7 * fVar4;
  }
  fVar2 = fVar17 * fVar17 + fVar10 * fVar10 + fVar14 * fVar14;
  bVar1 = true;
  if ((fVar2 != 0.0) && (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 == 1.0;
  }
  if (!bVar1) {
    fVar4 = SQRT(fVar2);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar2);
    }
    fVar4 = 1.0 / fVar4;
    fVar17 = fVar17 * fVar4;
    fVar10 = fVar10 * fVar4;
    fVar14 = fVar14 * fVar4;
  }
  fVar2 = fVar15 * fVar15 + fVar18 * fVar18 + fVar13 * fVar13;
  bVar1 = true;
  if ((fVar2 != 0.0) && (bVar1 = false, !NAN(fVar2))) {
    bVar1 = fVar2 == 1.0;
  }
  if (!bVar1) {
    fVar4 = SQRT(fVar2);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar2);
    }
    fVar4 = 1.0 / fVar4;
    fVar15 = fVar15 * fVar4;
    fVar18 = fVar18 * fVar4;
    fVar13 = fVar13 * fVar4;
  }
  fVar2 = fVar21 * fVar21 + fVar20 * fVar20 + fVar19 * fVar19;
  if ((fVar2 != 0.0) && (fVar2 != 1.0)) {
    fVar4 = SQRT(fVar2);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar2);
    }
    fVar4 = 1.0 / fVar4;
    fVar21 = fVar21 * fVar4;
    fVar20 = fVar20 * fVar4;
    fVar19 = fVar19 * fVar4;
  }
  fVar2 = fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22;
  if ((fVar2 != 0.0) && (fVar2 != 1.0)) {
    fVar4 = SQRT(fVar2);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar2);
    }
    fVar4 = 1.0 / fVar4;
    fVar24 = fVar24 * fVar4;
    fVar23 = fVar23 * fVar4;
    fVar22 = fVar22 * fVar4;
  }
  local_a4 = 0;
  local_ac = local_98 & 0xffffffff;
  local_9c = local_88;
  local_fc = 0;
  local_10c = 0;
  local_e4 = 0;
  local_ec = 0;
  local_dc = 0x3f800000;
  local_118 = fVar12;
  fStack_114 = fVar16;
  local_110 = fVar17;
  local_108 = fVar9;
  fStack_104 = fVar8;
  local_100 = fVar10;
  local_f8 = fVar6;
  fStack_f4 = fVar7;
  local_f0 = fVar14;
  local_d8 = fVar15;
  fStack_d4 = fVar18;
  local_d0 = fVar13;
  local_cc = fVar3;
  local_c8 = fVar21;
  fStack_c4 = fVar20;
  local_c0 = fVar19;
  local_bc = fVar5;
  local_b8 = fVar24;
  fStack_b4 = fVar23;
  local_b0 = fVar22;
  FUN_00515cb0(&local_198,&local_d8,&local_118);
  FUN_00515cb0(auStack_158,&local_198,param_6);
  local_1a8 = 0;
  uStack_1a0 = 0x3f8000003f800000;
  FUN_00510070(&local_198,&local_1a8,auStack_158);
  fVar2 = local_198 * (1.0 / local_18c);
  fVar6 = fStack_194 * (1.0 / local_18c);
  FUN_0050fa30(param_6,&local_198,&local_1ac);
  fVar3 = fVar2 * local_198;
  fVar5 = fVar6 * local_1ac;
  fVar3 = fVar3 * fVar3 + fVar5 * fVar5;
  if ((fVar3 != 0.0) && (fVar3 != 1.0)) {
    fVar5 = SQRT(fVar3);
    if (!NAN(fVar5)) goto LAB_00582d20;
    fVar3 = sqrtf(fVar3);
  }
  fVar5 = fVar3;
LAB_00582d20:
  fVar3 = atanf(fVar5);
  if (0.0 < fVar5) {
    fVar11 = fVar3 / fVar5;
  }
  fVar3 = fVar6 * fVar11 * param_1;
  fVar2 = (local_198 / local_1ac) * fVar2 * fVar11 * param_1;
  fVar5 = fVar3 * fVar3 + fVar2 * fVar2;
  fVar3 = fVar5;
  if (((fVar5 != 0.0) && (fVar5 != 1.0)) && (fVar3 = SQRT(fVar5), NAN(SQRT(fVar5)))) {
    fVar3 = sqrtf(fVar5);
  }
  if ((0.0 < param_2 + param_2) && (param_2 + param_2 < fVar3)) {
    fVar2 = fVar2 * ((param_2 + param_2) / fVar3);
  }
  return (fVar2 / (local_198 / local_1ac)) * -0.5;
}


