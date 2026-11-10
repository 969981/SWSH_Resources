/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ace90; name: FUN_001ace90
 */


void FUN_001ace90(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  
                    /* try { // try from 001acec8 to 001ad0fb has its CatchHandler @ 001ad124 */
  FUN_001b0d40(&local_98,param_2,param_5);
  local_b0 = (fStack_94 + fStack_88) * 0.5;
  local_b4 = (local_98 + local_8c) * 0.5;
  fStack_ac = (local_90 + local_84) * 0.5;
  local_b8 = 0x3f800000;
  local_d8 = 0x3f800000;
  uStack_d0 = 0;
  local_c8 = 0x3f800000;
  uStack_c0 = 0;
  if ((param_4 & 1) == 0) {
    fVar15 = *(float *)(param_3 + 0x24);
    fVar7 = *(float *)(param_3 + 0x28);
    fVar8 = *(float *)(param_3 + 0x2c);
    fVar9 = *(float *)(param_3 + 0x30);
    fVar10 = *(float *)(param_3 + 0x34);
    fVar11 = *(float *)(param_3 + 0x38);
    fVar12 = *(float *)(param_3 + 0x3c);
    fVar13 = *(float *)(param_3 + 0x40);
    fVar17 = (local_8c - local_98) * 0.5;
    fVar14 = *(float *)(param_3 + 0x44);
    fVar1 = fabsf(fVar17 * fVar15);
    fVar18 = (fStack_88 - fStack_94) * 0.5;
    fVar2 = fabsf(fVar18 * fVar9);
    fVar16 = (local_84 - local_90) * 0.5;
    fVar3 = fabsf(fVar16 * fVar12);
    fVar4 = fabsf(fVar17 * fVar7);
    fVar5 = fabsf(fVar18 * fVar10);
    fVar6 = fabsf(fVar16 * fVar13);
    fVar17 = fabsf(fVar17 * fVar8);
    fVar18 = fabsf(fVar18 * fVar11);
    fVar16 = fabsf(fVar16 * fVar14);
    local_8c = local_b4 * fVar15 + local_b0 * fVar9 + fStack_ac * fVar12;
    fStack_88 = local_b4 * fVar7 + local_b0 * fVar10 + fStack_ac * fVar13;
    fVar3 = fVar1 + fVar2 + fVar3;
    fVar6 = fVar4 + fVar5 + fVar6;
    fVar16 = fVar17 + fVar18 + fVar16;
    fVar1 = local_b4 * fVar8 + local_b0 * fVar11 + fStack_ac * fVar14;
    fVar4 = fVar1 - fVar16;
    fVar1 = fVar1 + fVar16;
    fVar2 = local_8c - fVar3;
    local_8c = local_8c + fVar3;
    fVar3 = fStack_88 - fVar6;
    fStack_88 = fStack_88 + fVar6;
    local_84 = fVar1 - fVar4;
    fStack_ac = (fVar4 + fVar1) * 0.5;
    local_b4 = (fVar2 + local_8c) * 0.5;
    local_b0 = (fVar3 + fStack_88) * 0.5;
    local_8c = local_8c - fVar2;
    fStack_88 = fStack_88 - fVar3;
  }
  else {
    local_8c = local_8c - local_98;
    fStack_88 = fStack_88 - fStack_94;
    local_84 = local_84 - local_90;
  }
  local_a0 = local_84 * 0.5;
  fStack_a4 = fStack_88 * 0.5;
  local_a8 = local_8c * 0.5;
  FUN_0023b9b0(param_1,&local_d8,param_6,1,1);
  return;
}


