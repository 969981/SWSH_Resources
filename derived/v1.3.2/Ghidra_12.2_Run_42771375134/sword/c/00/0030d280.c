/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0030d280; name: FUN_0030d280
 */


void FUN_0030d280(long param_1,float *param_2,float *param_3,ulong param_4)

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
  float fVar15;
  float fVar16;
  float fVar17;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  char local_e4 [4];
  undefined1 auStack_e0 [16];
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  
  FUN_002fe180();
  uVar1 = *(uint *)(param_1 + 0x144);
  local_e4[0] = '\0';
  fVar8 = *(float *)(param_1 + 0x178);
  fVar5 = 0.0;
  if ((uVar1 & 1) != 0) {
    fVar5 = local_d0;
  }
  fVar6 = 0.0;
  if ((uVar1 & 2) != 0) {
    fVar6 = fStack_cc;
  }
  fVar10 = 0.0;
  if ((uVar1 & 4) != 0) {
    fVar10 = local_c8;
  }
  fVar7 = fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10;
  fVar3 = fVar5;
  fVar4 = fVar6;
  fVar2 = fVar10;
  if (fVar8 * fVar8 < fVar7) {
    fVar2 = sqrtf(fVar7);
    fVar2 = 1.0 / fVar2;
    fVar3 = fVar8 * fVar5 * fVar2;
    fVar4 = fVar8 * fVar6 * fVar2;
    fVar2 = fVar8 * fVar10 * fVar2;
    uVar1 = *(uint *)(param_1 + 0x144);
  }
  cosf(*(float *)(param_1 + 0x17c) * 0.5);
  FUN_0030cd50(&local_f8,uVar1 >> 3,auStack_e0,local_e4);
  if ((local_e4[0] != '\0') || (fVar8 * fVar8 < fVar7)) {
    fVar3 = fVar3 + (local_d0 - fVar5);
    fVar4 = fVar4 + (fStack_cc - fVar6);
    fVar2 = fVar2 + (local_c8 - fVar10);
    if ((param_4 & 1) == 0) {
      fVar7 = *(float *)(param_1 + 0x18);
      fVar13 = *(float *)(param_1 + 0x1c);
      fVar10 = *(float *)(param_1 + 0x10);
      fVar9 = *(float *)(param_1 + 0x14);
      fVar8 = *(float *)(param_1 + 0x24) * -2.0;
      fVar5 = *(float *)(param_1 + 0x20) * -2.0;
      fVar6 = *(float *)(param_1 + 0x28) * -2.0;
      fVar11 = fVar13 * fVar13 + -0.5;
      fVar12 = fVar5 * fVar10 + fVar8 * fVar9 + fVar6 * fVar7;
      fVar3 = (fVar10 * fVar12 + (fVar5 * fVar11 - fVar13 * (fVar6 * fVar9 - fVar8 * fVar7))) -
              fVar3;
      fVar2 = ((fVar6 * fVar11 - fVar13 * (fVar8 * fVar10 - fVar5 * fVar9)) + fVar7 * fVar12) -
              fVar2;
      fVar4 = (fVar9 * fVar12 + (fVar8 * fVar11 - fVar13 * (fVar5 * fVar7 - fVar6 * fVar10))) -
              fVar4;
      fVar6 = fStack_ec * fStack_ec + -0.5;
      fVar3 = fVar3 + fVar3;
      fVar4 = fVar4 + fVar4;
      fVar2 = fVar2 + fVar2;
      fVar14 = ((fVar13 * -local_f8 - fVar10 * fStack_ec) + fVar7 * fStack_f4) - fVar9 * local_f0;
      fVar15 = ((fVar13 * fStack_ec - fVar10 * local_f8) - fVar9 * fStack_f4) - fVar7 * local_f0;
      fVar8 = (fVar10 * local_f0 + (fVar13 * -fStack_f4 - fVar9 * fStack_ec)) - fVar7 * local_f8;
      fVar12 = local_b4 * local_b4 + -0.5;
      fVar5 = (fVar9 * local_f8 + (fVar13 * -local_f0 - fVar7 * fStack_ec)) - fVar10 * fStack_f4;
      fVar9 = (fVar15 * local_c0 + local_b4 * fVar14 + local_bc * fVar5) - fVar8 * fStack_b8;
      fVar11 = (fVar14 * fStack_b8 + local_b4 * fVar8 + fVar15 * local_bc) - local_c0 * fVar5;
      fVar13 = (local_c0 * fVar8 + local_b4 * fVar5 + fVar15 * fStack_b8) - fVar14 * local_bc;
      fVar7 = ((local_b4 * fVar15 - local_c0 * fVar14) - fVar8 * local_bc) - fVar5 * fStack_b8;
      fVar8 = (fVar3 * -local_f8 - fVar4 * fStack_f4) - fVar2 * local_f0;
      fVar5 = (fVar6 * fVar4 + (fVar2 * local_f8 - fVar3 * local_f0) * fStack_ec) -
              fVar8 * fStack_f4;
      fVar10 = (fVar6 * fVar2 + (fVar3 * fStack_f4 - fVar4 * local_f8) * fStack_ec) -
               fVar8 * local_f0;
      fVar8 = (fVar6 * fVar3 + (fVar4 * local_f0 - fVar2 * fStack_f4) * fStack_ec) -
              fVar8 * local_f8;
      fVar8 = fVar8 + fVar8;
      fVar5 = fVar5 + fVar5;
      fVar10 = fVar10 + fVar10;
      fVar6 = fStack_b8 * fVar10 + local_c0 * fVar8 + local_bc * fVar5;
      *param_2 = fVar9;
      param_2[1] = fVar11;
      param_2[2] = fVar13;
      param_2[3] = fVar7;
      param_2[4] = local_b0 +
                   local_c0 * fVar6 +
                   fVar12 * fVar8 + local_b4 * (local_bc * fVar10 - fStack_b8 * fVar5);
      param_2[5] = fStack_ac +
                   local_bc * fVar6 +
                   fVar12 * fVar5 + local_b4 * (fStack_b8 * fVar8 - local_c0 * fVar10);
      param_2[6] = local_a8 +
                   fVar12 * fVar10 + local_b4 * (local_c0 * fVar5 - local_bc * fVar8) +
                   fStack_b8 * fVar6;
      fVar5 = sqrtf(fVar7 * fVar7 + fVar9 * fVar9 + fVar11 * fVar11 + fVar13 * fVar13);
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
      fVar8 = *(float *)(param_1 + 0x38);
      fVar6 = *(float *)(param_1 + 0x2c);
      fVar7 = *(float *)(param_1 + 0x30);
      fVar13 = *(float *)(param_1 + 0x40) * -2.0;
      fVar12 = *(float *)(param_1 + 0x3c) * -2.0;
      fVar10 = *(float *)(param_1 + 0x44) * -2.0;
      fVar11 = fVar8 * fVar8 + -0.5;
      fVar14 = fVar12 * fVar6 + fVar13 * fVar7 + fVar10 * fVar5;
      fVar16 = fVar7 * fVar14 + (fVar13 * fVar11 - fVar8 * (fVar12 * fVar5 - fVar10 * fVar6));
      fVar9 = local_94 * local_94 + -0.5;
      fVar15 = fVar6 * fVar14 + (fVar12 * fVar11 - fVar8 * (fVar10 * fVar7 - fVar13 * fVar5));
      fVar14 = (fVar10 * fVar11 - fVar8 * (fVar13 * fVar6 - fVar12 * fVar7)) + fVar5 * fVar14;
      fVar13 = fStack_ec * fStack_ec + -0.5;
      fVar10 = ((fVar8 * fStack_f4 - fStack_ec * fVar7) - local_f0 * fVar6) + local_f8 * fVar5;
      fVar12 = ((fVar8 * local_f8 - fStack_ec * fVar6) - fStack_f4 * fVar5) + local_f0 * fVar7;
      fVar11 = ((fVar8 * local_f0 - fStack_ec * fVar5) - local_f8 * fVar7) + fStack_f4 * fVar6;
      fVar5 = fVar8 * fStack_ec + local_f8 * fVar6 + fStack_f4 * fVar7 + local_f0 * fVar5;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar14 = fVar14 + fVar14;
      fVar6 = (fVar12 * fStack_98 + local_94 * fVar10 + fVar5 * local_9c) - local_a0 * fVar11;
      fVar7 = ((local_94 * fVar5 - local_a0 * fVar12) - fVar10 * local_9c) - fVar11 * fStack_98;
      fVar17 = (local_a0 * fVar10 + local_94 * fVar11 + fVar5 * fStack_98) - fVar12 * local_9c;
      fVar8 = fVar14 * local_f0 + fVar15 * local_f8 + fVar16 * fStack_f4;
      fVar3 = fVar3 + fVar8 * local_f8 +
                      fVar13 * fVar15 + (fVar14 * fStack_f4 - fVar16 * local_f0) * fStack_ec;
      fVar4 = fVar4 + fVar8 * fStack_f4 +
                      fVar13 * fVar16 + (fVar15 * local_f0 - fVar14 * local_f8) * fStack_ec;
      fVar3 = fVar3 + fVar3;
      fVar2 = fVar2 + fVar13 * fVar14 + (fVar16 * local_f8 - fVar15 * fStack_f4) * fStack_ec +
                      fVar8 * local_f0;
      fVar4 = fVar4 + fVar4;
      fVar2 = fVar2 + fVar2;
      fVar8 = (fVar5 * local_a0 + local_94 * fVar12 + local_9c * fVar11) - fVar10 * fStack_98;
      *param_3 = fVar8;
      param_3[1] = fVar6;
      param_3[2] = fVar17;
      param_3[3] = fVar7;
      fVar5 = fStack_98 * fVar2 + local_a0 * fVar3 + local_9c * fVar4;
      param_3[4] = local_90 +
                   local_a0 * fVar5 +
                   fVar9 * fVar3 + local_94 * (local_9c * fVar2 - fStack_98 * fVar4);
      param_3[5] = fStack_8c +
                   local_9c * fVar5 +
                   fVar9 * fVar4 + local_94 * (fStack_98 * fVar3 - local_a0 * fVar2);
      param_3[6] = local_88 +
                   fVar9 * fVar2 + local_94 * (local_a0 * fVar4 - local_9c * fVar3) +
                   fStack_98 * fVar5;
      fVar5 = sqrtf(fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6 + fVar17 * fVar17);
      if (fVar5 != 0.0) {
        fVar5 = 1.0 / fVar5;
        *param_3 = fVar5 * *param_3;
        param_3[1] = fVar5 * param_3[1];
        param_3[2] = fVar5 * param_3[2];
        param_3[3] = fVar5 * param_3[3];
      }
    }
  }
  return;
}


