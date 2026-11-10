/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de0dc0; name: FUN_00de0dc0
 */


void FUN_00de0dc0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  float extraout_s0;
  float fVar12;
  float extraout_var;
  float fVar13;
  float extraout_var_00;
  float fVar14;
  float fVar15;
  float extraout_var_01;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  lVar8 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x80) = 0;
  fVar12 = DAT_01d4bb64;
  lVar4 = *(long *)(param_1 + 0x10) - lVar8 >> 5;
  if (*(int *)(param_1 + 0x84) == 0) {
    if (lVar4 != 1) {
      lVar10 = *(long *)(param_1 + 0x10) - lVar8;
      if (lVar10 != 0) {
        lVar5 = 0;
        uVar7 = 0;
        uVar6 = lVar10 >> 5;
        do {
          uVar7 = uVar7 + 1;
          if (uVar6 <= uVar7) break;
          pfVar11 = (float *)(lVar8 + lVar5);
          fVar12 = (float)*(undefined8 *)(pfVar11 + 8) - *pfVar11;
          fVar13 = (float)((ulong)*(undefined8 *)(pfVar11 + 8) >> 0x20) - pfVar11[1];
          fVar14 = (float)*(undefined8 *)(pfVar11 + 10) - pfVar11[2];
          fVar16 = (float)((ulong)*(undefined8 *)(pfVar11 + 10) >> 0x20) - pfVar11[3];
          fVar12 = fVar12 * fVar12;
          fVar13 = fVar13 * fVar13;
          fVar14 = fVar14 * fVar14;
          fVar16 = fVar16 * fVar16;
          auVar19._4_4_ = fVar13;
          auVar19._0_4_ = fVar12;
          auVar19._8_4_ = fVar14;
          auVar19._12_4_ = fVar16;
          auVar3._4_4_ = fVar13;
          auVar3._0_4_ = fVar12;
          auVar3._8_4_ = fVar14;
          auVar3._12_4_ = fVar16;
          auVar19 = NEON_ext(auVar19,auVar3,8,1);
          fVar12 = SQRT(auVar19._0_4_ + fVar12 + auVar19._4_4_ + fVar13);
          pfVar11[4] = fVar12;
          *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + fVar12;
          if (lVar4 - 1U <= uVar7) {
            return;
          }
          lVar8 = *(long *)(param_1 + 8);
          uVar6 = *(long *)(param_1 + 0x10) - lVar8 >> 5;
          lVar5 = lVar5 + 0x20;
        } while (uVar7 < uVar6);
      }
LAB_00de0fb0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
  else if ((*(int *)(param_1 + 0x84) == 1) && (lVar4 != 1)) {
    uVar7 = 0;
    do {
      if (uVar7 == 0) {
        lVar8 = *(long *)(param_1 + 8);
        uVar6 = *(long *)(param_1 + 0x10) - lVar8 >> 5;
        lVar10 = param_1 + 0x40;
        if (uVar6 == 0) goto LAB_00de0fb0;
      }
      else {
        lVar8 = *(long *)(param_1 + 8);
        uVar6 = *(long *)(param_1 + 0x10) - lVar8 >> 5;
        if ((uVar6 <= uVar7 - 1) || (lVar10 = lVar8 + (uVar7 - 1) * 0x20, uVar6 <= uVar7))
        goto LAB_00de0fb0;
      }
      uVar1 = uVar7 + 1;
      if (uVar6 <= uVar1) goto LAB_00de0fb0;
      lVar5 = param_1 + 0x60;
      if (uVar1 < uVar6 - 1) {
        if (uVar6 <= uVar7 + 2) goto LAB_00de0fb0;
        lVar5 = lVar8 + (uVar7 + 2) * 0x20;
      }
      puVar2 = (undefined8 *)(lVar8 + uVar7 * 0x20);
      pfVar11 = (float *)(puVar2 + 2);
      *pfVar11 = 0.0;
      fVar16 = (float)puVar2[1];
      fVar15 = (float)((ulong)puVar2[1] >> 0x20);
      fVar13 = (float)*puVar2;
      fVar14 = (float)((ulong)*puVar2 >> 0x20);
      iVar9 = 1;
      do {
        FUN_00dd65a0((float)iVar9 * fVar12,lVar10,puVar2,lVar8 + uVar1 * 0x20,lVar5);
        auVar18._0_4_ = (extraout_s0 - fVar13) * (extraout_s0 - fVar13);
        auVar18._4_4_ = (extraout_var - fVar14) * (extraout_var - fVar14);
        auVar18._8_4_ = (extraout_var_00 - fVar16) * (extraout_var_00 - fVar16);
        auVar18._12_4_ = (extraout_var_01 - fVar15) * (extraout_var_01 - fVar15);
        auVar19 = NEON_ext(auVar18,auVar18,8,1);
        iVar9 = iVar9 + 1;
        fVar17 = *pfVar11 + SQRT(auVar19._0_4_ + auVar18._0_4_ + auVar19._4_4_ + auVar18._4_4_);
        *pfVar11 = fVar17;
        fVar13 = extraout_s0;
        fVar14 = extraout_var;
        fVar16 = extraout_var_00;
        fVar15 = extraout_var_01;
      } while (iVar9 != 0x11);
      *(float *)(param_1 + 0x80) = fVar17 + *(float *)(param_1 + 0x80);
      uVar7 = uVar1;
    } while (uVar1 < lVar4 - 1U);
  }
  return;
}


