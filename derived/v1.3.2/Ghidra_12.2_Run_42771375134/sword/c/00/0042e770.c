/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042e770; name: FUN_0042e770
 */


undefined1  [16] FUN_0042e770(float param_1,long *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float extraout_s0;
  undefined4 uVar10;
  undefined4 extraout_var;
  undefined8 uVar11;
  undefined1 auVar9 [16];
  undefined8 extraout_var_00;
  float fVar12;
  float fVar13;
  
  uVar2 = (int)param_2[1] - 1;
  lVar3 = *param_2;
  if (param_3 < uVar2) {
    pfVar5 = (float *)(lVar3 + (ulong)param_3 * 0xc);
    uVar7 = (ulong)param_3;
    fVar13 = *pfVar5;
    do {
      pfVar5 = pfVar5 + 3;
      if (param_1 <= fVar13) {
LAB_0042e914:
        fVar8 = *(float *)(lVar3 + (uVar7 & 0xffffffff) * 0xc + 4);
        uVar10 = 0;
        uVar11 = 0;
LAB_0042e954:
        *param_4 = (uint)uVar7;
        iVar1 = *(int *)((long)param_2 + 0xc);
        goto joined_r0x0042e964;
      }
      fVar12 = *pfVar5;
      if (param_1 < fVar12) {
        uVar4 = uVar7 & 0xffffffff;
        iVar1 = *(int *)(lVar3 + uVar4 * 0xc + 8);
        if (iVar1 == 9) goto LAB_0042e914;
        uVar6 = (ulong)((uint)uVar7 + 1);
        if (iVar1 == 4) {
          fVar8 = *(float *)(lVar3 + uVar4 * 0xc + 4);
          fVar8 = fVar8 + ((param_1 - fVar13) / (fVar12 - fVar13)) *
                          (*(float *)(lVar3 + uVar6 * 0xc + 4) - fVar8);
          uVar10 = 0;
          uVar11 = 0;
        }
        else {
          FUN_0042ea00((param_1 - fVar13) / (fVar12 - fVar13),
                       *(undefined4 *)(lVar3 + uVar4 * 0xc + 4),
                       *(undefined4 *)(lVar3 + uVar6 * 0xc + 4));
          fVar8 = extraout_s0;
          uVar10 = extraout_var;
          uVar11 = extraout_var_00;
        }
        goto LAB_0042e954;
      }
      uVar7 = uVar7 + 1;
      fVar13 = fVar12;
    } while (uVar7 < uVar2);
    param_3 = (uint)uVar7;
  }
  fVar8 = *(float *)(lVar3 + (ulong)uVar2 * 0xc + 4);
  uVar10 = 0;
  uVar11 = 0;
  *param_4 = param_3;
  iVar1 = *(int *)((long)param_2 + 0xc);
joined_r0x0042e964:
  if (iVar1 == 4) {
    if (fVar8 * DAT_01d4c158 < DAT_01d4c2ec) {
      return ZEXT816(0);
    }
    fVar13 = DAT_01d4bda4;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        fVar12 = (float)NEON_fminnm(fVar8,0x3f800000);
        fVar13 = 1.0;
        if (0.0 <= fVar8) {
          fVar13 = -1.0;
        }
        if (fVar12 <= -1.0) {
          fVar12 = -1.0;
        }
        fVar8 = fVar13 * fVar12 + 1.0;
        fVar12 = (float)((uint)fVar8 & 0x7fffff | 0x3f800000);
        fVar12 = (fVar12 + -1.0) / (fVar12 + 1.0);
        fVar8 = fVar13 * DAT_01d4c2e8 *
                (fVar12 + fVar12 + (fVar12 + fVar12) * fVar12 * fVar12 * DAT_01d4bd24 +
                DAT_01d4c4dc * ((float)((uint)fVar8 >> 0x17 & 0xff) + DAT_01d4bf90));
        uVar10 = 0;
        uVar11 = 0;
      }
      auVar9._4_4_ = uVar10;
      auVar9._0_4_ = fVar8;
      auVar9._8_8_ = uVar11;
      return auVar9;
    }
    if (fVar8 < DAT_01d4c2ec) {
      return ZEXT816(0);
    }
    fVar13 = DAT_01d4c280;
  }
  uVar2 = (uint)(DAT_01d4c714 + fVar13 * fVar8);
  fVar13 = (float)(uVar2 & 0x7fffff | 0x3f800000);
  return ZEXT416((uint)((DAT_01d4c23c + fVar13 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar13)) *
                       (float)(uVar2 & 0xff800000)));
}


