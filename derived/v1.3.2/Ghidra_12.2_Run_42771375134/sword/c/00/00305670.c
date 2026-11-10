/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00305670; name: FUN_00305670
 */


void FUN_00305670(long param_1,float *param_2,float *param_3,ulong param_4)

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
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  FUN_002fe180();
  fVar6 = *(float *)(param_1 + 100);
  fVar5 = local_ac * local_ac + 0.0 + fStack_a8 * fStack_a8;
  if (fVar6 * fVar6 < fVar5) {
    fVar1 = sqrtf(fVar5);
    local_ac = fVar6 * local_ac * (1.0 / fVar1);
    fStack_a8 = fVar6 * fStack_a8 * (1.0 / fVar1);
  }
  fVar1 = sinf(*(float *)(param_1 + 0x68) * 0.5);
  fVar2 = cosf(*(float *)(param_1 + 0x68) * 0.5);
  if (fVar1 <= DAT_01d4c2dc) {
    if (0.0 <= local_b4) {
      fVar7 = local_c0;
      fVar3 = local_b8;
      fVar4 = local_bc;
    }
    else {
      fVar7 = -local_c0;
      fVar3 = -local_b8;
      fVar4 = -local_bc;
    }
    fVar8 = fVar7 * fVar7 + fVar4 * fVar4 + fVar3 * fVar3;
    if (fVar1 * fVar1 < fVar8) {
      fVar5 = sqrtf(fVar8);
      fVar5 = 1.0 / fVar5;
      local_c0 = fVar1 * fVar7 * fVar5;
      local_bc = fVar1 * fVar4 * fVar5;
      local_b8 = fVar1 * fVar3 * fVar5;
      local_b4 = fVar2;
      goto joined_r0x00305b18;
    }
  }
  if (fVar5 <= fVar6 * fVar6) {
    return;
  }
joined_r0x00305b18:
  if ((param_4 & 1) == 0) {
    fVar6 = *(float *)(param_1 + 0x18);
    fVar7 = *(float *)(param_1 + 0x1c);
    fVar8 = *(float *)(param_1 + 0x24) * -2.0;
    fVar3 = *(float *)(param_1 + 0x28) * -2.0;
    fVar5 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar1 = *(float *)(param_1 + 0x20) * -2.0;
    fVar4 = fVar7 * fVar7 + -0.5;
    fVar11 = fVar1 * fVar5 + fVar8 * fVar2 + fVar3 * fVar6;
    fVar13 = ((fVar7 * -local_c0 - local_b4 * fVar5) + local_bc * fVar6) - local_b8 * fVar2;
    fVar14 = ((local_b4 * fVar7 - local_c0 * fVar5) - local_bc * fVar2) - local_b8 * fVar6;
    fVar15 = local_b4 * local_b4 + -0.5;
    fVar9 = local_94 * local_94 + -0.5;
    fVar10 = (fVar2 * fVar11 + (fVar8 * fVar4 - fVar7 * (fVar1 * fVar6 - fVar3 * fVar5))) - local_ac
    ;
    fVar12 = ((fVar3 * fVar4 - fVar7 * (fVar8 * fVar5 - fVar1 * fVar2)) + fVar6 * fVar11) -
             fStack_a8;
    fVar10 = fVar10 + fVar10;
    fVar12 = fVar12 + fVar12;
    fVar11 = (fVar5 * fVar11 + (fVar1 * fVar4 - fVar7 * (fVar3 * fVar2 - fVar8 * fVar6))) - local_b0
    ;
    fVar11 = fVar11 + fVar11;
    fVar1 = (local_b8 * fVar5 + (fVar7 * -local_bc - local_b4 * fVar2)) - local_c0 * fVar6;
    fVar5 = (local_c0 * fVar2 + (fVar7 * -local_b8 - local_b4 * fVar6)) - local_bc * fVar5;
    fVar3 = (fVar14 * local_a0 + local_94 * fVar13 + local_9c * fVar5) - fVar1 * fStack_98;
    fVar4 = (fVar13 * fStack_98 + local_94 * fVar1 + fVar14 * local_9c) - local_a0 * fVar5;
    fVar8 = (local_a0 * fVar1 + local_94 * fVar5 + fVar14 * fStack_98) - fVar13 * local_9c;
    fVar5 = ((local_94 * fVar14 - local_a0 * fVar13) - fVar1 * local_9c) - fVar5 * fStack_98;
    fVar2 = (fVar11 * -local_c0 - fVar10 * local_bc) - fVar12 * local_b8;
    fVar1 = (fVar15 * fVar10 + local_b4 * (fVar12 * local_c0 - fVar11 * local_b8)) -
            fVar2 * local_bc;
    fVar1 = fVar1 + fVar1;
    fVar6 = (fVar15 * fVar11 + local_b4 * (fVar10 * local_b8 - fVar12 * local_bc)) -
            fVar2 * local_c0;
    fVar7 = (fVar15 * fVar12 + local_b4 * (fVar11 * local_bc - fVar10 * local_c0)) -
            fVar2 * local_b8;
    fVar7 = fVar7 + fVar7;
    fVar6 = fVar6 + fVar6;
    *param_2 = fVar3;
    param_2[1] = fVar4;
    param_2[2] = fVar8;
    param_2[3] = fVar5;
    fVar2 = fStack_98 * fVar7 + local_a0 * fVar6 + local_9c * fVar1;
    param_2[4] = local_90 +
                 local_a0 * fVar2 +
                 fVar9 * fVar6 + local_94 * (local_9c * fVar7 - fStack_98 * fVar1);
    param_2[5] = fStack_8c +
                 local_9c * fVar2 +
                 fVar9 * fVar1 + local_94 * (fStack_98 * fVar6 - local_a0 * fVar7);
    param_2[6] = local_88 +
                 fVar9 * fVar7 + local_94 * (local_a0 * fVar1 - local_9c * fVar6) +
                 fStack_98 * fVar2;
    fVar5 = sqrtf(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4 + fVar8 * fVar8);
    if (fVar5 != 0.0) {
      fVar5 = 1.0 / fVar5;
      *param_2 = fVar5 * *param_2;
      param_2[1] = fVar5 * param_2[1];
      param_2[2] = fVar5 * param_2[2];
      param_2[3] = fVar5 * param_2[3];
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x34);
    fVar1 = *(float *)(param_1 + 0x38);
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(param_1 + 0x30);
    fVar8 = *(float *)(param_1 + 0x40) * -2.0;
    fVar5 = *(float *)(param_1 + 0x3c) * -2.0;
    fVar7 = *(float *)(param_1 + 0x44) * -2.0;
    fVar9 = fVar1 * fVar1 + -0.5;
    fVar4 = local_b4 * local_b4 + -0.5;
    fVar10 = fVar5 * fVar2 + fVar8 * fVar3 + fVar7 * fVar6;
    fVar12 = ((fVar1 * local_c0 - local_b4 * fVar2) - local_bc * fVar6) + local_b8 * fVar3;
    fVar11 = ((fVar1 * local_b8 - local_b4 * fVar6) - local_c0 * fVar3) + local_bc * fVar2;
    fVar13 = fVar2 * fVar10 + (fVar5 * fVar9 - fVar1 * (fVar7 * fVar3 - fVar8 * fVar6));
    fVar14 = (fVar7 * fVar9 - fVar1 * (fVar8 * fVar2 - fVar5 * fVar3)) + fVar6 * fVar10;
    fVar9 = fVar3 * fVar10 + (fVar8 * fVar9 - fVar1 * (fVar5 * fVar6 - fVar7 * fVar2));
    fVar13 = fVar13 + fVar13;
    fVar9 = fVar9 + fVar9;
    fVar14 = fVar14 + fVar14;
    fVar5 = local_74 * local_74 + -0.5;
    fVar7 = ((fVar1 * local_bc - local_b4 * fVar3) - local_b8 * fVar2) + local_c0 * fVar6;
    fVar6 = fVar1 * local_b4 + local_c0 * fVar2 + local_bc * fVar3 + local_b8 * fVar6;
    fVar1 = (fVar12 * fStack_78 + local_74 * fVar7 + fVar6 * local_7c) - local_80 * fVar11;
    fVar15 = (local_80 * fVar7 + local_74 * fVar11 + fVar6 * fStack_78) - fVar12 * local_7c;
    fVar2 = ((local_74 * fVar6 - local_80 * fVar12) - fVar7 * local_7c) - fVar11 * fStack_78;
    fVar10 = fVar14 * local_b8 + fVar13 * local_c0 + fVar9 * local_bc;
    fVar8 = fVar10 * local_c0 + fVar4 * fVar13 + (fVar14 * local_bc - fVar9 * local_b8) * local_b4 +
            local_b0;
    fVar3 = local_ac +
            fVar10 * local_bc + fVar4 * fVar9 + (fVar13 * local_b8 - fVar14 * local_c0) * local_b4;
    fVar4 = fStack_a8 +
            fVar4 * fVar14 + (fVar9 * local_c0 - fVar13 * local_bc) * local_b4 + fVar10 * local_b8;
    fVar8 = fVar8 + fVar8;
    fVar3 = fVar3 + fVar3;
    fVar4 = fVar4 + fVar4;
    fVar6 = (fVar6 * local_80 + local_74 * fVar12 + local_7c * fVar11) - fVar7 * fStack_78;
    param_3[2] = fVar15;
    param_3[3] = fVar2;
    fVar7 = fStack_78 * fVar4 + local_80 * fVar8 + local_7c * fVar3;
    *param_3 = fVar6;
    param_3[1] = fVar1;
    param_3[4] = local_70 +
                 local_80 * fVar7 +
                 fVar5 * fVar8 + local_74 * (local_7c * fVar4 - fStack_78 * fVar3);
    param_3[5] = fStack_6c +
                 local_7c * fVar7 +
                 fVar5 * fVar3 + local_74 * (fStack_78 * fVar8 - local_80 * fVar4);
    param_3[6] = local_68 +
                 fVar5 * fVar4 + local_74 * (local_80 * fVar3 - local_7c * fVar8) +
                 fStack_78 * fVar7;
    fVar5 = sqrtf(fVar2 * fVar2 + fVar6 * fVar6 + fVar1 * fVar1 + fVar15 * fVar15);
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


