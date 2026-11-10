/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002fb8d0; name: FUN_002fb8d0
 */


void FUN_002fb8d0(long param_1,float *param_2,float *param_3,ulong param_4)

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
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  
  FUN_002fe180();
  fVar6 = *(float *)(param_1 + 0x48);
  fVar5 = local_c0 * local_c0 + fStack_bc * fStack_bc + local_b8 * local_b8;
  if (fVar6 * fVar6 < fVar5) {
    fVar1 = sqrtf(fVar5);
    fVar1 = 1.0 / fVar1;
    local_c0 = fVar6 * local_c0 * fVar1;
    fStack_bc = fVar6 * fVar1 * fStack_bc;
    local_b8 = fVar6 * fVar1 * local_b8;
  }
  fVar1 = sinf(*(float *)(param_1 + 0x4c) * 0.5);
  fVar2 = cosf(*(float *)(param_1 + 0x4c) * 0.5);
  if (fVar1 <= DAT_01d4c2dc) {
    if (0.0 <= local_c4) {
      fVar3 = local_d0;
      fVar4 = local_c8;
      fVar7 = local_cc;
    }
    else {
      fVar3 = -local_d0;
      fVar4 = -local_c8;
      fVar7 = -local_cc;
    }
    fVar8 = fVar3 * fVar3 + fVar7 * fVar7 + fVar4 * fVar4;
    if (fVar1 * fVar1 < fVar8) {
      fVar5 = sqrtf(fVar8);
      fVar5 = 1.0 / fVar5;
      local_d0 = fVar1 * fVar3 * fVar5;
      local_cc = fVar1 * fVar7 * fVar5;
      local_c8 = fVar1 * fVar4 * fVar5;
      local_c4 = fVar2;
      goto joined_r0x002fbd84;
    }
  }
  if (fVar5 <= fVar6 * fVar6) {
    return;
  }
joined_r0x002fbd84:
  if ((param_4 & 1) == 0) {
    fVar1 = *(float *)(param_1 + 0x18);
    fVar3 = *(float *)(param_1 + 0x1c);
    fVar6 = *(float *)(param_1 + 0x24) * -2.0;
    fVar4 = *(float *)(param_1 + 0x28) * -2.0;
    fVar8 = *(float *)(param_1 + 0x20) * -2.0;
    fVar5 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar7 = fVar3 * fVar3 + -0.5;
    fVar9 = fVar8 * fVar5 + fVar6 * fVar2 + fVar4 * fVar1;
    fVar11 = (fVar5 * fVar9 + (fVar8 * fVar7 - fVar3 * (fVar4 * fVar2 - fVar6 * fVar1))) - local_c0;
    fVar12 = ((fVar4 * fVar7 - fVar3 * (fVar6 * fVar5 - fVar8 * fVar2)) + fVar1 * fVar9) - local_b8;
    fVar13 = ((fVar3 * -local_d0 - local_c4 * fVar5) + local_cc * fVar1) - local_c8 * fVar2;
    fVar14 = ((local_c4 * fVar3 - local_d0 * fVar5) - local_cc * fVar2) - local_c8 * fVar1;
    fVar15 = local_c4 * local_c4 + -0.5;
    fVar10 = (fVar2 * fVar9 + (fVar6 * fVar7 - fVar3 * (fVar8 * fVar1 - fVar4 * fVar5))) - fStack_bc
    ;
    fVar11 = fVar11 + fVar11;
    fVar10 = fVar10 + fVar10;
    fVar12 = fVar12 + fVar12;
    fVar8 = local_a4 * local_a4 + -0.5;
    fVar6 = (local_d0 * fVar2 + (fVar3 * -local_c8 - local_c4 * fVar1)) - local_cc * fVar5;
    fVar5 = (local_c8 * fVar5 + (fVar3 * -local_cc - local_c4 * fVar2)) - local_d0 * fVar1;
    fVar4 = (fVar14 * local_b0 + local_a4 * fVar13 + local_ac * fVar6) - fVar5 * fStack_a8;
    fVar7 = (fVar13 * fStack_a8 + local_a4 * fVar5 + fVar14 * local_ac) - local_b0 * fVar6;
    fVar9 = (local_b0 * fVar5 + local_a4 * fVar6 + fVar14 * fStack_a8) - fVar13 * local_ac;
    fVar5 = ((local_a4 * fVar14 - local_b0 * fVar13) - fVar5 * local_ac) - fVar6 * fStack_a8;
    fVar1 = (fVar11 * -local_d0 - fVar10 * local_cc) - fVar12 * local_c8;
    fVar6 = (fVar15 * fVar11 + local_c4 * (fVar10 * local_c8 - fVar12 * local_cc)) -
            fVar1 * local_d0;
    fVar3 = (fVar15 * fVar12 + local_c4 * (fVar11 * local_cc - fVar10 * local_d0)) -
            fVar1 * local_c8;
    fVar1 = (fVar15 * fVar10 + local_c4 * (fVar12 * local_d0 - fVar11 * local_c8)) -
            fVar1 * local_cc;
    fVar6 = fVar6 + fVar6;
    fVar1 = fVar1 + fVar1;
    fVar3 = fVar3 + fVar3;
    fVar2 = fStack_a8 * fVar3 + local_b0 * fVar6 + local_ac * fVar1;
    *param_2 = fVar4;
    param_2[1] = fVar7;
    param_2[2] = fVar9;
    param_2[3] = fVar5;
    param_2[6] = local_98 +
                 fVar8 * fVar3 + local_a4 * (local_b0 * fVar1 - local_ac * fVar6) +
                 fStack_a8 * fVar2;
    param_2[4] = local_a0 +
                 local_b0 * fVar2 +
                 fVar8 * fVar6 + local_a4 * (local_ac * fVar3 - fStack_a8 * fVar1);
    param_2[5] = fStack_9c +
                 local_ac * fVar2 +
                 fVar8 * fVar1 + local_a4 * (fStack_a8 * fVar6 - local_b0 * fVar3);
    fVar5 = sqrtf(fVar5 * fVar5 + fVar4 * fVar4 + fVar7 * fVar7 + fVar9 * fVar9);
    if (fVar5 != 0.0) {
      fVar5 = 1.0 / fVar5;
      *param_2 = fVar5 * *param_2;
      param_2[1] = fVar5 * param_2[1];
      param_2[2] = fVar5 * param_2[2];
      param_2[3] = fVar5 * param_2[3];
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0x34);
    fVar6 = *(float *)(param_1 + 0x38);
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(param_1 + 0x30);
    fVar9 = *(float *)(param_1 + 0x40) * -2.0;
    fVar8 = *(float *)(param_1 + 0x3c) * -2.0;
    fVar2 = *(float *)(param_1 + 0x44) * -2.0;
    fVar7 = fVar6 * fVar6 + -0.5;
    fVar10 = fVar8 * fVar1 + fVar9 * fVar3 + fVar2 * fVar5;
    fVar14 = fVar3 * fVar10 + (fVar9 * fVar7 - fVar6 * (fVar8 * fVar5 - fVar2 * fVar1));
    fVar4 = local_84 * local_84 + -0.5;
    fVar11 = fVar1 * fVar10 + (fVar8 * fVar7 - fVar6 * (fVar2 * fVar3 - fVar9 * fVar5));
    fVar12 = (fVar2 * fVar7 - fVar6 * (fVar9 * fVar1 - fVar8 * fVar3)) + fVar5 * fVar10;
    fVar7 = local_c4 * local_c4 + -0.5;
    fVar2 = ((fVar6 * local_cc - local_c4 * fVar3) - local_c8 * fVar1) + local_d0 * fVar5;
    fVar10 = ((fVar6 * local_d0 - local_c4 * fVar1) - local_cc * fVar5) + local_c8 * fVar3;
    fVar9 = ((fVar6 * local_c8 - local_c4 * fVar5) - local_d0 * fVar3) + local_cc * fVar1;
    fVar5 = fVar6 * local_c4 + local_d0 * fVar1 + local_cc * fVar3 + local_c8 * fVar5;
    fVar11 = fVar11 + fVar11;
    fVar14 = fVar14 + fVar14;
    fVar12 = fVar12 + fVar12;
    fVar6 = (fVar10 * fStack_88 + local_84 * fVar2 + fVar5 * local_8c) - local_90 * fVar9;
    fVar1 = ((local_84 * fVar5 - local_90 * fVar10) - fVar2 * local_8c) - fVar9 * fStack_88;
    fVar15 = (local_90 * fVar2 + local_84 * fVar9 + fVar5 * fStack_88) - fVar10 * local_8c;
    fVar13 = fVar12 * local_c8 + fVar11 * local_d0 + fVar14 * local_cc;
    fVar3 = local_c0 +
            fVar13 * local_d0 + fVar7 * fVar11 + (fVar12 * local_cc - fVar14 * local_c8) * local_c4;
    fVar3 = fVar3 + fVar3;
    fVar8 = local_b8 +
            fVar7 * fVar12 + (fVar14 * local_d0 - fVar11 * local_cc) * local_c4 + fVar13 * local_c8;
    fVar7 = fStack_bc +
            fVar13 * local_cc + fVar7 * fVar14 + (fVar11 * local_c8 - fVar12 * local_d0) * local_c4;
    fVar7 = fVar7 + fVar7;
    fVar5 = (fVar5 * local_90 + local_84 * fVar10 + local_8c * fVar9) - fVar2 * fStack_88;
    param_3[2] = fVar15;
    param_3[3] = fVar1;
    fVar8 = fVar8 + fVar8;
    *param_3 = fVar5;
    param_3[1] = fVar6;
    fVar2 = fStack_88 * fVar8 + local_90 * fVar3 + local_8c * fVar7;
    param_3[4] = local_80 +
                 local_90 * fVar2 +
                 fVar4 * fVar3 + local_84 * (local_8c * fVar8 - fStack_88 * fVar7);
    param_3[5] = fStack_7c +
                 local_8c * fVar2 +
                 fVar4 * fVar7 + local_84 * (fStack_88 * fVar3 - local_90 * fVar8);
    param_3[6] = local_78 +
                 fVar4 * fVar8 + local_84 * (local_90 * fVar7 - local_8c * fVar3) +
                 fStack_88 * fVar2;
    fVar5 = sqrtf(fVar1 * fVar1 + fVar5 * fVar5 + fVar6 * fVar6 + fVar15 * fVar15);
    if (fVar5 != 0.0) {
      fVar5 = 1.0 / fVar5;
      *param_3 = fVar5 * *param_3;
      param_3[1] = fVar5 * param_3[1];
      param_3[2] = fVar5 * param_3[2];
      param_3[3] = fVar5 * param_3[3];
    }
  }
  return;
}


