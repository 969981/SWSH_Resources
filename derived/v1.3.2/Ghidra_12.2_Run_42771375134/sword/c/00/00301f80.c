/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00301f80; name: FUN_00301f80
 */


void FUN_00301f80(long param_1,float *param_2,float *param_3,ulong param_4)

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
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  
  FUN_002fe180();
  fVar7 = *(float *)(param_1 + 0x7c);
  fVar8 = local_c0 * local_c0 + fStack_bc * fStack_bc + local_b8 * local_b8;
  if (fVar7 * fVar7 < fVar8) {
    fVar1 = sqrtf(fVar8);
    fVar1 = 1.0 / fVar1;
    local_c0 = fVar7 * local_c0 * fVar1;
    fStack_bc = fVar7 * fVar1 * fStack_bc;
    local_b8 = fVar7 * fVar1 * local_b8;
  }
  if (local_d0 == 0.0) {
    fVar12 = 0.0;
    fVar1 = 1.0;
    fVar6 = 0.0;
  }
  else {
    fVar1 = sqrtf(local_d0 * local_d0 + 0.0 + local_c4 * local_c4);
    fVar1 = 1.0 / fVar1;
    fVar12 = local_d0 * fVar1;
    fVar6 = fVar1 * 0.0;
    fVar1 = local_c4 * fVar1;
  }
  fVar2 = -fVar6;
  fVar11 = ((fVar1 * local_d0 - local_c4 * fVar12) + local_cc * fVar2) - local_c8 * fVar2;
  fVar10 = ((local_c4 * fVar2 + fVar1 * local_cc) - local_c8 * fVar12) - local_d0 * fVar2;
  fVar9 = local_d0 * fVar2 + local_c4 * fVar2 + fVar1 * local_c8 + local_cc * fVar12;
  fVar2 = ((fVar1 * local_c4 + local_d0 * fVar12) - local_cc * fVar2) - local_c8 * fVar2;
  fVar3 = sinf(*(float *)(param_1 + 0x80) * 0.5);
  fVar4 = cosf(*(float *)(param_1 + 0x80) * 0.5);
  if (fVar3 <= DAT_01d4c2dc) {
    fVar14 = fVar10;
    fVar13 = fVar11;
    if (fVar2 < 0.0) {
      fVar14 = -fVar10;
      fVar13 = -fVar11;
    }
    fVar15 = fVar9;
    if (fVar2 < 0.0) {
      fVar15 = -fVar9;
    }
    fVar5 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
    if (fVar3 * fVar3 < fVar5) {
      fVar9 = sqrtf(fVar5);
      fVar9 = 1.0 / fVar9;
      fVar11 = fVar3 * fVar13 * fVar9;
      fVar10 = fVar3 * fVar14 * fVar9;
      fVar9 = fVar3 * fVar15 * fVar9;
      fVar2 = fVar4;
      goto LAB_00302198;
    }
  }
  if (fVar8 <= fVar7 * fVar7) {
    return;
  }
LAB_00302198:
  fVar8 = (fVar12 * fVar9 + fVar1 * fVar10 + fVar6 * fVar2) - fVar6 * fVar11;
  fVar3 = (fVar6 * fVar11 + fVar1 * fVar9 + fVar6 * fVar2) - fVar12 * fVar10;
  fVar7 = (fVar6 * fVar10 + fVar1 * fVar11 + fVar12 * fVar2) - fVar6 * fVar9;
  fVar1 = ((fVar1 * fVar2 - fVar12 * fVar11) - fVar6 * fVar10) - fVar6 * fVar9;
  if ((param_4 & 1) == 0) {
    fVar12 = *(float *)(param_1 + 0x18);
    fVar9 = *(float *)(param_1 + 0x1c);
    fVar2 = *(float *)(param_1 + 0x24) * -2.0;
    fVar10 = *(float *)(param_1 + 0x28) * -2.0;
    fVar13 = *(float *)(param_1 + 0x20) * -2.0;
    fVar6 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar11 = fVar9 * fVar9 + -0.5;
    fVar14 = fVar13 * fVar6 + fVar2 * fVar4 + fVar10 * fVar12;
    fVar16 = ((fVar9 * -fVar7 - fVar1 * fVar6) + fVar8 * fVar12) - fVar3 * fVar4;
    fVar15 = (fVar6 * fVar14 + (fVar13 * fVar11 - fVar9 * (fVar10 * fVar4 - fVar2 * fVar12))) -
             local_c0;
    fVar5 = ((fVar10 * fVar11 - fVar9 * (fVar2 * fVar6 - fVar13 * fVar4)) + fVar12 * fVar14) -
            local_b8;
    fVar14 = (fVar4 * fVar14 + (fVar2 * fVar11 - fVar9 * (fVar13 * fVar12 - fVar10 * fVar6))) -
             fStack_bc;
    fVar15 = fVar15 + fVar15;
    fVar5 = fVar5 + fVar5;
    fVar14 = fVar14 + fVar14;
    fVar13 = ((fVar1 * fVar9 - fVar7 * fVar6) - fVar8 * fVar4) - fVar3 * fVar12;
    fVar17 = fVar1 * fVar1 + -0.5;
    fVar10 = local_a4 * local_a4 + -0.5;
    fVar2 = (fVar3 * fVar6 + (fVar9 * -fVar8 - fVar1 * fVar4)) - fVar7 * fVar12;
    fVar6 = (fVar7 * fVar4 + (fVar9 * -fVar3 - fVar1 * fVar12)) - fVar8 * fVar6;
    fVar4 = (fVar13 * local_b0 + local_a4 * fVar16 + local_ac * fVar6) - fVar2 * fStack_a8;
    fVar9 = (fVar16 * fStack_a8 + local_a4 * fVar2 + fVar13 * local_ac) - local_b0 * fVar6;
    fVar11 = (local_b0 * fVar2 + local_a4 * fVar6 + fVar13 * fStack_a8) - fVar16 * local_ac;
    fVar2 = ((local_a4 * fVar13 - local_b0 * fVar16) - fVar2 * local_ac) - fVar6 * fStack_a8;
    fVar13 = (fVar15 * -fVar7 - fVar14 * fVar8) - fVar5 * fVar3;
    fVar12 = (fVar17 * fVar5 + fVar1 * (fVar15 * fVar8 - fVar14 * fVar7)) - fVar13 * fVar3;
    fVar6 = (fVar17 * fVar15 + fVar1 * (fVar14 * fVar3 - fVar5 * fVar8)) - fVar13 * fVar7;
    fVar7 = (fVar17 * fVar14 + fVar1 * (fVar5 * fVar7 - fVar15 * fVar3)) - fVar13 * fVar8;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar12 = fVar12 + fVar12;
    fVar8 = fStack_a8 * fVar12 + local_b0 * fVar6 + local_ac * fVar7;
    *param_2 = fVar4;
    param_2[1] = fVar9;
    param_2[2] = fVar11;
    param_2[3] = fVar2;
    param_2[4] = local_a0 +
                 local_b0 * fVar8 +
                 fVar10 * fVar6 + local_a4 * (local_ac * fVar12 - fStack_a8 * fVar7);
    param_2[5] = fStack_9c +
                 local_ac * fVar8 +
                 fVar10 * fVar7 + local_a4 * (fStack_a8 * fVar6 - local_b0 * fVar12);
    param_2[6] = local_98 +
                 fVar10 * fVar12 + local_a4 * (local_b0 * fVar7 - local_ac * fVar6) +
                 fStack_a8 * fVar8;
    fVar7 = sqrtf(fVar2 * fVar2 + fVar4 * fVar4 + fVar9 * fVar9 + fVar11 * fVar11);
    if (fVar7 != 0.0) {
      fVar7 = 1.0 / fVar7;
      *param_2 = fVar7 * *param_2;
      param_2[1] = fVar7 * param_2[1];
      param_2[2] = fVar7 * param_2[2];
      param_2[3] = fVar7 * param_2[3];
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x34);
    fVar2 = *(float *)(param_1 + 0x38);
    fVar4 = *(float *)(param_1 + 0x2c);
    fVar9 = *(float *)(param_1 + 0x30);
    fVar12 = *(float *)(param_1 + 0x40) * -2.0;
    fVar14 = *(float *)(param_1 + 0x3c) * -2.0;
    fVar11 = *(float *)(param_1 + 0x44) * -2.0;
    fVar13 = fVar2 * fVar2 + -0.5;
    fVar5 = fVar14 * fVar4 + fVar12 * fVar9 + fVar11 * fVar6;
    fVar15 = fVar4 * fVar5 + (fVar14 * fVar13 - fVar2 * (fVar11 * fVar9 - fVar12 * fVar6));
    fVar17 = fVar9 * fVar5 + (fVar12 * fVar13 - fVar2 * (fVar14 * fVar6 - fVar11 * fVar4));
    fVar10 = fStack_84 * fStack_84 + -0.5;
    fVar5 = (fVar11 * fVar13 - fVar2 * (fVar12 * fVar4 - fVar14 * fVar9)) + fVar6 * fVar5;
    fVar14 = fVar1 * fVar1 + -0.5;
    fVar13 = ((fVar7 * fVar2 - fVar1 * fVar4) - fVar8 * fVar6) + fVar3 * fVar9;
    fVar11 = ((fVar3 * fVar2 - fVar1 * fVar6) - fVar7 * fVar9) + fVar8 * fVar4;
    fVar12 = fVar1 * fVar2 + fVar7 * fVar4 + fVar8 * fVar9 + fVar3 * fVar6;
    fVar6 = ((fVar8 * fVar2 - fVar1 * fVar9) - fVar3 * fVar4) + fVar7 * fVar6;
    fVar15 = fVar15 + fVar15;
    fVar17 = fVar17 + fVar17;
    fVar5 = fVar5 + fVar5;
    fVar9 = ((fStack_84 * fVar12 - local_90 * fVar13) - fVar6 * local_8c) - fVar11 * local_88;
    fVar4 = (fVar13 * local_88 + fStack_84 * fVar6 + fVar12 * local_8c) - local_90 * fVar11;
    fVar18 = (local_90 * fVar6 + fStack_84 * fVar11 + fVar12 * local_88) - fVar13 * local_8c;
    fVar16 = fVar3 * fVar5 + fVar7 * fVar15 + fVar8 * fVar17;
    fVar2 = (fVar12 * local_90 + fStack_84 * fVar13 + local_8c * fVar11) - fVar6 * local_88;
    *param_3 = fVar2;
    param_3[1] = fVar4;
    param_3[2] = fVar18;
    param_3[3] = fVar9;
    fVar6 = local_c0 + fVar7 * fVar16 + fVar14 * fVar15 + fVar1 * (fVar8 * fVar5 - fVar3 * fVar17);
    fVar12 = local_b8 + fVar14 * fVar5 + fVar1 * (fVar7 * fVar17 - fVar8 * fVar15) + fVar3 * fVar16;
    fVar7 = fStack_bc + fVar8 * fVar16 + fVar14 * fVar17 + fVar1 * (fVar3 * fVar15 - fVar7 * fVar5);
    fVar6 = fVar6 + fVar6;
    fVar12 = fVar12 + fVar12;
    fVar7 = fVar7 + fVar7;
    fVar8 = local_88 * fVar12 + local_90 * fVar6 + local_8c * fVar7;
    param_3[4] = local_80 +
                 local_90 * fVar8 +
                 fVar10 * fVar6 + fStack_84 * (local_8c * fVar12 - local_88 * fVar7);
    param_3[5] = fStack_7c +
                 local_8c * fVar8 +
                 fVar10 * fVar7 + fStack_84 * (local_88 * fVar6 - local_90 * fVar12);
    param_3[6] = local_78 +
                 fVar10 * fVar12 + fStack_84 * (local_90 * fVar7 - local_8c * fVar6) +
                 local_88 * fVar8;
    fVar7 = sqrtf(fVar9 * fVar9 + fVar2 * fVar2 + fVar4 * fVar4 + fVar18 * fVar18);
    if (fVar7 != 0.0) {
      fVar7 = 1.0 / fVar7;
      *param_3 = fVar7 * *param_3;
      param_3[1] = fVar7 * param_3[1];
      param_3[2] = fVar7 * param_3[2];
      param_3[3] = fVar7 * param_3[3];
    }
  }
  return;
}


