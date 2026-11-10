/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b55c0; name: FUN_002b55c0
 */


undefined8 FUN_002b55c0(float *param_1,long param_2,float *param_3,long param_4)

{
  float *pfVar1;
  long lVar2;
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
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  
  lVar2 = *(long *)(param_2 + 0x20);
  FUN_001b0f90(&local_c0,param_2 + 4,param_2 + 0x10);
  pfVar1 = (float *)(*(long *)(lVar2 + 0x48) + (ulong)*(byte *)(lVar2 + 0x47) * 0x14);
  fVar3 = *pfVar1;
  fVar4 = pfVar1[1];
  fVar14 = pfVar1[2];
  fVar12 = fVar3 * fStack_bc + fVar4 * fStack_b0 + fVar14 * fStack_a4;
  fVar10 = fVar3 * local_c0 + fVar4 * local_b4 + fVar14 * local_a8;
  fVar3 = fVar3 * local_b8 + fVar4 * local_ac + fVar14 * local_a0;
  fVar12 = fVar12 + fVar12;
  fVar10 = fVar10 + fVar10;
  fVar3 = fVar3 + fVar3;
  fVar14 = param_3[2];
  fVar11 = param_3[3];
  fVar13 = fVar11 * fVar11 + -0.5;
  fVar15 = *param_3;
  fVar16 = param_3[1];
  fVar17 = fVar10 * fVar15 + fVar12 * fVar16 + fVar3 * fVar14;
  local_c4 = param_3[4] +
             fVar15 * fVar17 + fVar10 * fVar13 + fVar11 * (fVar3 * fVar16 - fVar12 * fVar14);
  fVar4 = param_3[5] +
          fVar16 * fVar17 + fVar12 * fVar13 + fVar11 * (fVar10 * fVar14 - fVar15 * fVar3);
  fVar18 = *param_1;
  fVar19 = param_1[1];
  fVar10 = param_3[6] +
           fVar3 * fVar13 + fVar11 * (fVar12 * fVar15 - fVar10 * fVar16) + fVar14 * fVar17;
  fVar12 = param_1[2];
  fVar3 = param_1[3] + fVar10 * fVar12 + fVar18 * local_c4 + fVar19 * fVar4;
  if (1 < (ulong)*(byte *)(lVar2 + 0x46)) {
    pfVar1 = pfVar1 + 5;
    lVar2 = (ulong)*(byte *)(lVar2 + 0x46) - 1;
    do {
      fVar17 = pfVar1[-2];
      fVar5 = pfVar1[-1];
      fVar6 = *pfVar1;
      fVar7 = local_c0 * fVar17 + local_b4 * fVar5 + local_a8 * fVar6;
      fVar8 = fStack_bc * fVar17 + fStack_b0 * fVar5 + fStack_a4 * fVar6;
      fVar17 = local_b8 * fVar17 + local_ac * fVar5 + local_a0 * fVar6;
      fVar7 = fVar7 + fVar7;
      fVar8 = fVar8 + fVar8;
      fVar17 = fVar17 + fVar17;
      fVar9 = fVar14 * fVar17 + fVar15 * fVar7 + fVar16 * fVar8;
      fVar5 = param_3[4] +
              fVar15 * fVar9 + fVar13 * fVar7 + fVar11 * (fVar16 * fVar17 - fVar14 * fVar8);
      fVar6 = param_3[5] +
              fVar16 * fVar9 + fVar13 * fVar8 + fVar11 * (fVar14 * fVar7 - fVar15 * fVar17);
      fVar17 = param_3[6] +
               fVar13 * fVar17 + fVar11 * (fVar15 * fVar8 - fVar16 * fVar7) + fVar14 * fVar9;
      fVar7 = param_1[3] + fVar12 * fVar17 + fVar18 * fVar5 + fVar19 * fVar6;
      if (fVar7 < fVar3) {
        fVar3 = fVar7;
        fVar4 = fVar6;
        fVar10 = fVar17;
        local_c4 = fVar5;
      }
      pfVar1 = pfVar1 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(float *)(param_4 + 0x24) = fVar18;
  *(float *)(param_4 + 0x28) = fVar19;
  *(float *)(param_4 + 0x2c) = fVar12;
  *(float *)(param_4 + 0x30) = fVar3;
  fVar14 = *param_1;
  fVar11 = param_1[2];
  *(float *)(param_4 + 0x1c) = fVar4 - fVar3 * param_1[1];
  *(float *)(param_4 + 0x18) = local_c4 - fVar3 * fVar14;
  *(float *)(param_4 + 0x20) = fVar10 - fVar3 * fVar11;
  return 1;
}


