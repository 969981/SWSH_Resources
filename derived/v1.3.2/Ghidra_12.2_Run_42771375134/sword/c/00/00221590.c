/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00221590; name: FUN_00221590
 */


void FUN_00221590(float param_1,float param_2,long param_3,float *param_4,long param_5,
                 float *param_6,uint param_7,long param_8,float *param_9)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
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
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  
  fStack_bc = 1.0 / param_6[1];
  local_c0 = 1.0 / *param_6;
  local_b8 = 1.0 / param_6[2];
  local_b4 = param_6[3];
  local_b0 = param_6[4];
  local_ac = param_6[5];
  local_a8 = param_6[6];
  fVar12 = param_4[2];
  fStack_d4 = param_4[3];
  fVar8 = param_4[5] * -2.0;
  fVar7 = param_4[4] * -2.0;
  fVar9 = param_4[6] * -2.0;
  local_d8 = -fVar12;
  fVar10 = *param_4;
  fVar13 = param_4[1];
  local_e0 = -fVar10;
  fStack_dc = -fVar13;
  fVar11 = fStack_d4 * fStack_d4 + -0.5;
  fVar17 = fVar7 * fVar10 + fVar8 * fVar13 + fVar9 * fVar12;
  local_d0 = fVar10 * fVar17 + (fVar7 * fVar11 - fStack_d4 * (fVar9 * fVar13 - fVar8 * fVar12));
  fStack_cc = fVar13 * fVar17 + (fVar8 * fVar11 - fStack_d4 * (fVar7 * fVar12 - fVar9 * fVar10));
  local_c8 = (fVar9 * fVar11 - fStack_d4 * (fVar8 * fVar10 - fVar7 * fVar13)) + fVar12 * fVar17;
  FUN_00221930(&local_a0,&local_c0,&local_e0);
  if (param_7 != 0) {
    fVar8 = param_9[1];
    fVar7 = -*param_9;
    fVar9 = param_9[2];
    iVar1 = *(int *)(param_5 + 0x10);
    pfVar4 = *(float **)(param_5 + 0x18);
    fVar10 = param_1 + param_2 + DAT_01d4bc28;
    uVar3 = 0;
    do {
      if (iVar1 != 0) {
        pfVar6 = (float *)(param_8 + uVar3 * 0xc);
        fVar13 = *pfVar6;
        fVar17 = pfVar6[1];
        fVar18 = pfVar6[2];
        pfVar6 = pfVar4;
        fVar11 = DAT_01d4c5a8;
        fVar12 = DAT_01d4c18c;
        iVar5 = iVar1;
        do {
          while( true ) {
            fVar16 = ((local_a0 * fVar7 - fStack_94 * fVar8) - local_88 * fVar9) * *pfVar6 +
                     ((fStack_9c * fVar7 - local_90 * fVar8) - fStack_84 * fVar9) * pfVar6[1] +
                     ((local_98 * fVar7 - fStack_8c * fVar8) - local_80 * fVar9) * pfVar6[2];
            fVar14 = pfVar6[3] +
                     (local_7c + local_a0 * fVar13 + fStack_94 * fVar17 + local_88 * fVar18) *
                     *pfVar6 + (fStack_9c * fVar13 + local_90 * fVar17 + fStack_84 * fVar18 +
                               fStack_78) * pfVar6[1] +
                     (local_98 * fVar13 + fStack_8c * fVar17 + local_80 * fVar18 + local_74) *
                     pfVar6[2];
            fVar15 = -fVar14 / fVar16;
            if (fVar16 <= DAT_01d4bf24) break;
            if (fVar15 <= fVar12) {
              fVar12 = fVar15;
            }
joined_r0x00221864:
            pfVar6 = pfVar6 + 5;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_00221880;
          }
          if (fVar16 < DAT_01d4bd28) {
            if (fVar11 <= fVar15) {
              fVar11 = fVar15;
            }
            goto joined_r0x00221864;
          }
          if (0.0 < fVar14) goto LAB_002218f8;
          iVar5 = iVar5 + -1;
          pfVar6 = pfVar6 + 5;
        } while (iVar5 != 0);
LAB_00221880:
        if (((fVar11 < fVar10) && (fVar11 < fVar12)) && (fVar11 != DAT_01d4c5a8)) {
          uVar2 = *(uint *)(param_3 + 0x1000);
          if (uVar2 < 0x40) {
            fVar14 = *param_9;
            pfVar6 = (float *)(param_3 + (ulong)uVar2 * 0x40);
            fVar15 = param_9[1];
            fVar12 = param_9[2];
            *(uint *)(param_3 + 0x1000) = uVar2 + 1;
            *pfVar6 = fVar14;
            pfVar6[1] = fVar15;
            pfVar6[4] = fVar13 - fVar11 * fVar14;
            pfVar6[2] = fVar12;
            pfVar6[5] = fVar17 - fVar11 * fVar15;
            pfVar6[6] = fVar18 - fVar11 * fVar12;
            pfVar6[3] = fVar11 - param_1;
            pfVar6[0xd] = -NAN;
          }
        }
      }
LAB_002218f8:
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_7);
  }
  return;
}


