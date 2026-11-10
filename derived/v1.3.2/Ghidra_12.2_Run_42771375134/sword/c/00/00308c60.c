/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00308c60; name: FUN_00308c60
 */


void FUN_00308c60(long param_1,float *param_2,float *param_3,ulong param_4)

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
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
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
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  FUN_002fe180();
  fVar7 = *(float *)(param_1 + 0x70);
  fVar1 = local_b0 * local_b0 + fStack_ac * fStack_ac + local_a8 * local_a8;
  if (fVar7 * fVar7 < fVar1) {
    fVar1 = sqrtf(fVar1);
    fVar1 = 1.0 / fVar1;
    fVar3 = fVar7 * local_b0 * fVar1;
    fVar2 = fVar7 * fVar1 * fStack_ac;
    fVar7 = fVar7 * fVar1 * local_a8;
    if ((param_4 & 1) == 0) {
      fVar6 = *(float *)(param_1 + 0x18);
      fVar11 = *(float *)(param_1 + 0x1c);
      fVar9 = *(float *)(param_1 + 0x10);
      fVar8 = *(float *)(param_1 + 0x14);
      fVar4 = *(float *)(param_1 + 0x24) * -2.0;
      fVar1 = *(float *)(param_1 + 0x20) * -2.0;
      fVar5 = *(float *)(param_1 + 0x28) * -2.0;
      fVar10 = fVar11 * fVar11 + -0.5;
      fVar12 = fVar1 * fVar9 + fVar4 * fVar8 + fVar5 * fVar6;
      fVar3 = (fVar9 * fVar12 + (fVar1 * fVar10 - fVar11 * (fVar5 * fVar8 - fVar4 * fVar6))) - fVar3
      ;
      fVar7 = ((fVar5 * fVar10 - fVar11 * (fVar4 * fVar9 - fVar1 * fVar8)) + fVar6 * fVar12) - fVar7
      ;
      fVar2 = (fVar8 * fVar12 + (fVar4 * fVar10 - fVar11 * (fVar1 * fVar6 - fVar5 * fVar9))) - fVar2
      ;
      fVar12 = fStack_b4 * fStack_b4 + -0.5;
      fVar3 = fVar3 + fVar3;
      fVar2 = fVar2 + fVar2;
      fVar7 = fVar7 + fVar7;
      fVar5 = ((fVar11 * -local_c0 - fVar9 * fStack_b4) + fVar6 * fStack_bc) - fVar8 * local_b8;
      fVar13 = ((fVar11 * fStack_b4 - fVar9 * local_c0) - fVar8 * fStack_bc) - fVar6 * local_b8;
      fVar4 = (fVar9 * local_b8 + (fVar11 * -fStack_bc - fVar8 * fStack_b4)) - fVar6 * local_c0;
      fVar10 = local_94 * local_94 + -0.5;
      fVar1 = (fVar8 * local_c0 + (fVar11 * -local_b8 - fVar6 * fStack_b4)) - fVar9 * fStack_bc;
      fVar6 = (fVar13 * local_a0 + local_94 * fVar5 + local_9c * fVar1) - fVar4 * fStack_98;
      fVar8 = (fVar5 * fStack_98 + local_94 * fVar4 + fVar13 * local_9c) - local_a0 * fVar1;
      fVar11 = (local_a0 * fVar4 + local_94 * fVar1 + fVar13 * fStack_98) - fVar5 * local_9c;
      fVar9 = ((local_94 * fVar13 - local_a0 * fVar5) - fVar4 * local_9c) - fVar1 * fStack_98;
      fVar4 = (fVar3 * -local_c0 - fVar2 * fStack_bc) - fVar7 * local_b8;
      fVar1 = (fVar12 * fVar2 + (fVar7 * local_c0 - fVar3 * local_b8) * fStack_b4) -
              fVar4 * fStack_bc;
      fVar5 = (fVar12 * fVar7 + (fVar3 * fStack_bc - fVar2 * local_c0) * fStack_b4) -
              fVar4 * local_b8;
      fVar7 = (fVar12 * fVar3 + (fVar2 * local_b8 - fVar7 * fStack_bc) * fStack_b4) -
              fVar4 * local_c0;
      fVar7 = fVar7 + fVar7;
      fVar1 = fVar1 + fVar1;
      fVar5 = fVar5 + fVar5;
      fVar2 = fStack_98 * fVar5 + local_a0 * fVar7 + local_9c * fVar1;
      *param_2 = fVar6;
      param_2[1] = fVar8;
      param_2[2] = fVar11;
      param_2[3] = fVar9;
      param_2[4] = local_90 +
                   local_a0 * fVar2 +
                   fVar10 * fVar7 + local_94 * (local_9c * fVar5 - fStack_98 * fVar1);
      param_2[5] = fStack_8c +
                   local_9c * fVar2 +
                   fVar10 * fVar1 + local_94 * (fStack_98 * fVar7 - local_a0 * fVar5);
      param_2[6] = local_88 +
                   fVar10 * fVar5 + local_94 * (local_a0 * fVar1 - local_9c * fVar7) +
                   fStack_98 * fVar2;
      fVar1 = sqrtf(fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8 + fVar11 * fVar11);
      if (fVar1 != 0.0) {
        fVar1 = 1.0 / fVar1;
        *param_2 = fVar1 * *param_2;
        param_2[1] = fVar1 * param_2[1];
        param_2[2] = fVar1 * param_2[2];
        param_2[3] = fVar1 * param_2[3];
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x34);
      fVar4 = *(float *)(param_1 + 0x38);
      fVar5 = *(float *)(param_1 + 0x2c);
      fVar6 = *(float *)(param_1 + 0x30);
      fVar12 = *(float *)(param_1 + 0x40) * -2.0;
      fVar11 = *(float *)(param_1 + 0x3c) * -2.0;
      fVar9 = *(float *)(param_1 + 0x44) * -2.0;
      fVar10 = fVar4 * fVar4 + -0.5;
      fVar13 = fVar11 * fVar5 + fVar12 * fVar6 + fVar9 * fVar1;
      fVar15 = fVar6 * fVar13 + (fVar12 * fVar10 - fVar4 * (fVar11 * fVar1 - fVar9 * fVar5));
      fVar8 = local_74 * local_74 + -0.5;
      fVar14 = fVar5 * fVar13 + (fVar11 * fVar10 - fVar4 * (fVar9 * fVar6 - fVar12 * fVar1));
      fVar13 = (fVar9 * fVar10 - fVar4 * (fVar12 * fVar5 - fVar11 * fVar6)) + fVar1 * fVar13;
      fVar12 = fStack_b4 * fStack_b4 + -0.5;
      fVar9 = ((fVar4 * fStack_bc - fStack_b4 * fVar6) - local_b8 * fVar5) + local_c0 * fVar1;
      fVar11 = ((fVar4 * local_c0 - fStack_b4 * fVar5) - fStack_bc * fVar1) + local_b8 * fVar6;
      fVar10 = ((fVar4 * local_b8 - fStack_b4 * fVar1) - local_c0 * fVar6) + fStack_bc * fVar5;
      fVar1 = fVar4 * fStack_b4 + local_c0 * fVar5 + fStack_bc * fVar6 + local_b8 * fVar1;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar13 = fVar13 + fVar13;
      fVar5 = (fVar11 * fStack_78 + local_74 * fVar9 + fVar1 * local_7c) - local_80 * fVar10;
      fVar6 = ((local_74 * fVar1 - local_80 * fVar11) - fVar9 * local_7c) - fVar10 * fStack_78;
      fVar16 = (local_80 * fVar9 + local_74 * fVar10 + fVar1 * fStack_78) - fVar11 * local_7c;
      fVar4 = fVar13 * local_b8 + fVar14 * local_c0 + fVar15 * fStack_bc;
      fVar3 = fVar3 + fVar4 * local_c0 +
                      fVar12 * fVar14 + (fVar13 * fStack_bc - fVar15 * local_b8) * fStack_b4;
      fVar2 = fVar2 + fVar4 * fStack_bc +
                      fVar12 * fVar15 + (fVar14 * local_b8 - fVar13 * local_c0) * fStack_b4;
      fVar3 = fVar3 + fVar3;
      fVar7 = fVar7 + fVar12 * fVar13 + (fVar15 * local_c0 - fVar14 * fStack_bc) * fStack_b4 +
                      fVar4 * local_b8;
      fVar2 = fVar2 + fVar2;
      fVar7 = fVar7 + fVar7;
      fVar4 = (fVar1 * local_80 + local_74 * fVar11 + local_7c * fVar10) - fVar9 * fStack_78;
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = fVar16;
      param_3[3] = fVar6;
      fVar1 = fStack_78 * fVar7 + local_80 * fVar3 + local_7c * fVar2;
      param_3[4] = local_70 +
                   local_80 * fVar1 +
                   fVar8 * fVar3 + local_74 * (local_7c * fVar7 - fStack_78 * fVar2);
      param_3[5] = fStack_6c +
                   local_7c * fVar1 +
                   fVar8 * fVar2 + local_74 * (fStack_78 * fVar3 - local_80 * fVar7);
      param_3[6] = local_68 +
                   fVar8 * fVar7 + local_74 * (local_80 * fVar2 - local_7c * fVar3) +
                   fStack_78 * fVar1;
      fVar1 = sqrtf(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5 + fVar16 * fVar16);
      if (fVar1 != 0.0) {
        fVar1 = 1.0 / fVar1;
        *param_3 = fVar1 * *param_3;
        param_3[1] = fVar1 * param_3[1];
        param_3[2] = fVar1 * param_3[2];
        param_3[3] = fVar1 * param_3[3];
      }
    }
  }
  return;
}


