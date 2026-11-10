/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f3520; name: FUN_004f3520
 */


void FUN_004f3520(long param_1,float *param_2,float *param_3,float *param_4,long param_5,int param_6
                 ,undefined4 *param_7)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  long *plVar4;
  float *pfVar5;
  long lVar6;
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
  float fVar25;
  float fVar26;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f4;
  float fStack_f0;
  float local_ec;
  float fStack_e8;
  float local_e0;
  float local_dc;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  fVar9 = DAT_01d4c6ac;
  fVar7 = DAT_01d4c5a4;
  local_fc = *param_3;
  local_100 = param_3[1];
  local_e0 = param_3[2];
  local_104 = param_3[3];
  local_108 = param_3[4];
  local_dc = param_3[5];
  local_b0 = param_3[6];
  fStack_ac = param_3[7];
  local_a8 = param_3[8];
  iVar3 = *(int *)(param_1 + 0x100);
  iVar1 = iVar3 + -1;
  if (-1 < iVar1) {
    lVar6 = (long)iVar1;
    plVar4 = (long *)(param_1 + (long)(iVar3 + -2) * 8);
    pfVar5 = (float *)(param_5 + (long)iVar1 * 0xc + 8);
    local_f4 = local_fc;
    fStack_f0 = local_104;
    local_ec = local_100;
    fStack_e8 = local_108;
    do {
      pfVar2 = param_2;
      if (lVar6 != 0) {
        pfVar2 = (float *)(*plVar4 + 0x48);
      }
      local_b8 = pfVar2[2];
      local_c0 = *(undefined8 *)pfVar2;
      local_d0 = 0;
      local_c8 = 0.0;
      FUN_004ead90(*(undefined8 *)(param_1 + lVar6 * 8),&local_b0,&local_c0,&local_d0);
      fVar14 = local_c8;
      fVar11 = (float)local_d0;
      fVar12 = local_d0._4_4_;
      if (lVar6 < param_6) {
        pfVar5[-2] = (float)local_d0;
        pfVar5[-1] = local_d0._4_4_;
        *pfVar5 = local_c8;
      }
      fVar19 = (float)local_d0 - local_b0;
      fVar22 = (float)local_c0 - (float)local_d0;
      fVar23 = local_c0._4_4_ - local_d0._4_4_;
      fVar18 = local_d0._4_4_ - fStack_ac;
      fVar17 = local_b8 - local_c8;
      fVar21 = local_c8 - local_a8;
      fVar15 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar21 * fVar21);
      fVar20 = SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar17 * fVar17) * fVar15;
      if (fVar9 < fVar20) {
        if (iVar3 != *(int *)(param_1 + 0x100)) {
          fVar8 = (float)NEON_fminnm(*param_7,*(float *)PTR_DAT_02713718);
          fVar8 = fVar8 / *(float *)PTR_DAT_02713718;
          fVar15 = fVar15 + fVar15 * (*(float *)PTR_DAT_02713710 * fVar8 - fVar8) +
                   (float)param_7[1];
        }
        fVar8 = (fVar22 * fVar19 + fVar18 * fVar23 + fVar21 * fVar17) / fVar20;
        param_7[1] = fVar15;
        if (fVar8 < fVar7) {
          fVar15 = (float)NEON_fminnm(fVar8,0x3f800000);
          if (fVar15 <= -1.0) {
            fVar15 = -1.0;
          }
          acosf(fVar15);
          fVar20 = 1.0 / fVar20;
          *param_7 = *param_7;
          fVar16 = fVar20 * (fVar23 * fVar19 - fVar22 * fVar18);
          fVar10 = 1.0;
          fVar13 = fVar20 * (fVar22 * fVar21 - fVar17 * fVar19);
          fVar20 = fVar20 * (fVar17 * fVar18 - fVar23 * fVar21);
          fVar17 = SQRT(fVar20 * fVar20 + fVar13 * fVar13 + fVar16 * fVar16);
          fVar22 = 0.0;
          fVar15 = 0.0;
          if (0.0 < fVar17) {
            fVar15 = 1.0 / fVar17;
            fVar22 = fVar15 * fVar20;
            fVar10 = fVar15 * fVar13;
            fVar15 = fVar15 * fVar16;
          }
          fVar20 = 1.0 - fVar8;
          local_f4 = fVar19 + local_f4;
          fStack_f0 = fVar19 + fStack_f0;
          fVar24 = fVar8 + fVar20 * fVar22 * fVar22;
          fVar16 = fVar8 + fVar20 * fVar10 * fVar10;
          fVar8 = fVar8 + fVar20 * fVar15 * fVar15;
          fVar25 = fVar22 * fVar20 * fVar10;
          fVar13 = fVar15 * fVar22 * fVar20;
          fVar20 = fVar20 * fVar10 * fVar15;
          fVar26 = fVar13 + fVar10 * fVar17;
          fVar13 = fVar13 - fVar10 * fVar17;
          fVar10 = fVar15 * fVar17 + fVar25;
          fVar23 = fVar20 - fVar22 * fVar17;
          fVar20 = fVar20 + fVar22 * fVar17;
          fVar25 = fVar25 - fVar15 * fVar17;
          fVar17 = fVar21 + local_dc;
          local_ec = fVar18 + local_ec;
          fStack_e8 = fVar18 + fStack_e8;
          fVar15 = fVar21 + local_e0;
          local_fc = fVar24 * fVar19 + fVar18 * fVar25 + fVar21 * fVar26;
          local_108 = fVar10 * fVar19 + fVar18 * fVar16 + fVar21 * fVar23;
          local_dc = fVar13 * fVar19 + fVar18 * fVar20 + fVar21 * fVar8;
          local_104 = (fVar24 * fStack_f0 + fStack_e8 * fVar25 + fVar17 * fVar26) - local_fc;
          local_fc = (fVar24 * local_f4 + local_ec * fVar25 + fVar15 * fVar26) - local_fc;
          local_e0 = (fVar13 * local_f4 + local_ec * fVar20 + fVar15 * fVar8) - local_dc;
          local_dc = (fVar13 * fStack_f0 + fStack_e8 * fVar20 + fVar17 * fVar8) - local_dc;
          local_100 = (fVar10 * local_f4 + local_ec * fVar16 + fVar15 * fVar23) - local_108;
          local_108 = (fVar10 * fStack_f0 + fStack_e8 * fVar16 + fVar17 * fVar23) - local_108;
          local_f4 = local_fc;
          fStack_f0 = local_104;
          local_ec = local_100;
          fStack_e8 = local_108;
        }
        local_b0 = fVar11;
        fStack_ac = fVar12;
        local_a8 = fVar14;
      }
      lVar6 = lVar6 + -1;
      iVar3 = iVar3 + -1;
      plVar4 = plVar4 + -1;
      pfVar5 = pfVar5 + -3;
    } while (-1 < (int)lVar6);
  }
  fVar11 = fStack_ac - param_2[1];
  fVar7 = local_b0 - *param_2;
  fVar9 = local_a8 - param_2[2];
  fVar12 = SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar9 * fVar9);
  if (fVar12 <= 0.0) {
    memcpy(param_4,param_3,0x24);
  }
  else {
    fVar14 = (float)NEON_fminnm(*param_7,*(float *)PTR_DAT_02713718);
    fVar14 = fVar14 / *(float *)PTR_DAT_02713718;
    fVar14 = fVar12 + fVar12 * (*(float *)PTR_DAT_02713710 * fVar14 - fVar14) + (float)param_7[1];
    param_7[1] = fVar14;
    fVar14 = fVar14 * (1.0 / fVar12);
    fVar12 = *param_2;
    fVar20 = param_2[1];
    fVar15 = param_2[2];
    *param_4 = local_fc;
    param_4[6] = fVar12 + fVar7 * fVar14;
    param_4[7] = fVar20 + fVar11 * fVar14;
    param_4[1] = local_100;
    param_4[2] = local_e0;
    param_4[3] = local_104;
    param_4[8] = fVar15 + fVar9 * fVar14;
    param_4[4] = local_108;
    param_4[5] = local_dc;
  }
  return;
}


