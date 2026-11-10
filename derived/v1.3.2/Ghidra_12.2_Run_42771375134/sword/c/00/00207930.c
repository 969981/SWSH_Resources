/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207930; name: FUN_00207930
 */


void FUN_00207930(float *param_1,long *param_2,long *param_3)

{
  float *pfVar1;
  ushort uVar2;
  undefined *puVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  param_1[0] = 8.5070587e+37;
  param_1[1] = 8.5070587e+37;
  param_1[2] = 8.5070587e+37;
  param_1[3] = -8.5070587e+37;
  param_1[4] = -8.5070587e+37;
  param_1[5] = -8.5070587e+37;
  uVar2 = *(ushort *)(param_2 + 1);
  uVar7 = (ulong)uVar2;
  (**(code **)(*param_3 + 0xa8))(&local_80,param_3);
  puVar3 = PTR_DAT_02710c00;
  if ((short)param_2[1] != 1) {
    param_2 = (long *)*param_2;
  }
  if (uVar2 != 0) {
    do {
      lVar6 = *param_2;
      if ((*(uint *)(lVar6 + 0x38) & 1) == 0) {
        pfVar5 = *(float **)(lVar6 + 0x40);
        pfVar4 = (float *)(lVar6 + 0x98);
      }
      else {
        pfVar5 = *(float **)(lVar6 + 0x40);
        pfVar4 = pfVar5 + 0xe;
      }
      pfVar1 = (float *)(lVar6 + 0x70);
      if ((*(uint *)(lVar6 + 0x38) & 4) != 0) {
        pfVar1 = pfVar5;
      }
      fVar13 = pfVar1[3];
      fVar14 = *pfVar1;
      fVar10 = pfVar1[4] + pfVar1[4];
      fVar15 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar8 = pfVar1[6] + pfVar1[6];
      fVar11 = pfVar1[5] + pfVar1[5];
      fVar16 = fStack_74 * fStack_74 + -0.5;
      fVar9 = fVar10 * local_80 + fVar11 * fStack_7c + fVar8 * local_78;
      local_b8 = (fStack_74 * fVar14 + local_80 * fVar13 + fStack_7c * fVar12) - local_78 * fVar15;
      fStack_b4 = (local_78 * fVar14 + fStack_7c * fVar13 + fStack_74 * fVar15) - local_80 * fVar12;
      local_a8 = local_70 +
                 local_80 * fVar9 +
                 fVar10 * fVar16 + fStack_74 * (fVar8 * fStack_7c - fVar11 * local_78);
      fStack_a4 = fStack_6c +
                  fStack_7c * fVar9 +
                  fVar11 * fVar16 + fStack_74 * (fVar10 * local_78 - fVar8 * local_80);
      local_b0 = (local_80 * fVar15 + local_78 * fVar13 + fStack_74 * fVar12) - fStack_7c * fVar14;
      fStack_ac = ((fStack_74 * fVar13 - local_80 * fVar14) - fStack_7c * fVar15) -
                  local_78 * fVar12;
      local_a0 = local_68 +
                 fVar8 * fVar16 + fStack_74 * (fVar11 * local_80 - fVar10 * fStack_7c) +
                 local_78 * fVar9;
      FUN_002938e0(0,0x3f800000,&local_98,pfVar4,&local_b8,0,*puVar3 == '\0');
      fVar8 = *param_1;
      if (local_98 <= *param_1) {
        fVar8 = local_98;
      }
      fVar9 = param_1[1];
      if (local_94 <= param_1[1]) {
        fVar9 = local_94;
      }
      *param_1 = fVar8;
      param_1[1] = fVar9;
      fVar8 = param_1[2];
      if (local_90 <= param_1[2]) {
        fVar8 = local_90;
      }
      param_1[2] = fVar8;
      fVar8 = param_1[3];
      if (param_1[3] <= local_8c) {
        fVar8 = local_8c;
      }
      fVar9 = param_1[4];
      if (param_1[4] <= fStack_88) {
        fVar9 = fStack_88;
      }
      fVar10 = param_1[5];
      if (param_1[5] <= local_84) {
        fVar10 = local_84;
      }
      param_2 = param_2 + 1;
      uVar7 = uVar7 - 1;
      param_1[3] = fVar8;
      param_1[4] = fVar9;
      param_1[5] = fVar10;
    } while (uVar7 != 0);
  }
  return;
}


