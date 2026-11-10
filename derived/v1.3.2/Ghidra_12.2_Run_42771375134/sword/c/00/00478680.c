/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00478680; name: FUN_00478680
 */


void FUN_00478680(long *param_1,float *param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar3 = (float *)*param_1;
  fVar6 = pfVar3[1];
  fVar4 = pfVar3[4];
  iVar1 = *(int *)((long)param_1 + 0xc);
  if (iVar1 == 4) {
    fVar7 = 0.0;
    if (DAT_01d4c2ec <= fVar6 * DAT_01d4c158) {
      uVar2 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar6);
      fVar6 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      fVar7 = (DAT_01d4c23c + fVar6 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar6)) *
              (float)(uVar2 & 0xff800000);
    }
    fVar6 = fVar7;
    if (fVar4 * DAT_01d4c158 < DAT_01d4c2ec) {
LAB_00478880:
      fVar4 = 0.0;
      goto LAB_004788e0;
    }
    fVar7 = DAT_01d4bda4;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        fVar7 = (float)NEON_fminnm(fVar6,0x3f800000);
        fVar5 = (float)NEON_fminnm(fVar4,0x3f800000);
        if (fVar5 <= -1.0) {
          fVar5 = -1.0;
        }
        fVar9 = 1.0;
        if (0.0 <= fVar6) {
          fVar9 = -1.0;
        }
        if (fVar7 <= -1.0) {
          fVar7 = -1.0;
        }
        fVar8 = 1.0;
        if (0.0 <= fVar4) {
          fVar8 = -1.0;
        }
        fVar6 = fVar9 * fVar7 + 1.0;
        fVar5 = fVar8 * fVar5 + 1.0;
        fVar4 = (float)((uint)fVar6 & 0x7fffff | 0x3f800000);
        fVar7 = (fVar4 + -1.0) / (fVar4 + 1.0);
        fVar4 = (float)((uint)fVar5 & 0x7fffff | 0x3f800000);
        fVar6 = fVar9 * DAT_01d4c2e8 *
                (fVar7 + fVar7 + (fVar7 + fVar7) * fVar7 * fVar7 * DAT_01d4bd24 +
                DAT_01d4c4dc * ((float)((uint)fVar6 >> 0x17 & 0xff) + DAT_01d4bf90));
        fVar4 = (fVar4 + -1.0) / (fVar4 + 1.0);
        fVar4 = fVar8 * DAT_01d4c2e8 *
                (fVar4 + fVar4 + (fVar4 + fVar4) * fVar4 * fVar4 * DAT_01d4bd24 +
                DAT_01d4c4dc * ((float)((uint)fVar5 >> 0x17 & 0xff) + DAT_01d4bf90));
      }
      goto LAB_004788e0;
    }
    fVar7 = 0.0;
    if (DAT_01d4c2ec <= fVar6) {
      uVar2 = (uint)(DAT_01d4c714 + DAT_01d4c280 * fVar6);
      fVar6 = (float)(uVar2 & 0x7fffff | 0x3f800000);
      fVar7 = (DAT_01d4c23c + fVar6 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar6)) *
              (float)(uVar2 & 0xff800000);
    }
    fVar6 = fVar7;
    if (fVar4 < DAT_01d4c2ec) goto LAB_00478880;
    fVar7 = DAT_01d4c280;
  }
  uVar2 = (uint)(DAT_01d4c714 + fVar7 * fVar4);
  fVar4 = (float)(uVar2 & 0x7fffff | 0x3f800000);
  fVar4 = (DAT_01d4c23c + fVar4 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar4)) *
          (float)(uVar2 & 0xff800000);
LAB_004788e0:
  fVar5 = 0.0;
  fVar7 = 0.0;
  if (DAT_01d4c2ec <= fVar6 * DAT_01d4c158) {
    uVar2 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar6);
    fVar6 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    fVar7 = (DAT_01d4c23c + fVar6 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar6)) *
            (float)(uVar2 & 0xff800000);
  }
  if (DAT_01d4c2ec <= fVar4 * DAT_01d4c158) {
    uVar2 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar4);
    fVar4 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    fVar5 = (DAT_01d4c23c + fVar4 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar4)) *
            (float)(uVar2 & 0xff800000);
  }
  fVar4 = pfVar3[3] - *pfVar3;
  *param_3 = fVar7 - (*pfVar3 / fVar4) * (fVar5 - fVar7);
  *param_2 = (fVar5 - fVar7) * (1.0 / fVar4);
  return;
}


