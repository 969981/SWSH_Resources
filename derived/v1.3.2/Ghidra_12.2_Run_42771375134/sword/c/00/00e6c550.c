/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6c550; name: FUN_00e6c550
 */


float FUN_00e6c550(float param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  
  if (0.0 <= param_1) {
    if (DAT_01d4bfe0 < param_1) {
      fVar6 = 1.0 - param_1 * param_1;
      fVar5 = SQRT(fVar6);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      iVar2 = (int)((fVar5 / param_1) * 128.0);
      uVar3 = *(int *)(PTR_AtanSampleTable_02719630 + (long)iVar2 * 8) +
              (int)(*(float *)((long)(PTR_AtanSampleTable_02719630 + (long)iVar2 * 8) + 4) *
                   ((fVar5 / param_1) * DAT_01d4c1f0 - (float)iVar2));
      goto LAB_00e6c724;
    }
    fVar6 = 1.0 - param_1 * param_1;
    fVar5 = SQRT(fVar6);
    iVar2 = *(int *)PTR_AngleIndexQuarterRound_02719620;
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    iVar1 = (int)((param_1 / fVar5) * 128.0);
    piVar4 = (int *)(PTR_AtanSampleTable_02719630 + (long)iVar1 * 8);
    fVar5 = (param_1 / fVar5) * DAT_01d4c1f0 - (float)iVar1;
  }
  else {
    if (DAT_01d4c778 <= param_1) {
      fVar6 = 1.0 - param_1 * param_1;
      fVar5 = SQRT(fVar6);
      iVar2 = *(int *)PTR_AngleIndexQuarterRound_02719620;
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      iVar1 = (int)((-param_1 / fVar5) * 128.0);
      uVar3 = *(int *)(PTR_AtanSampleTable_02719630 + (long)iVar1 * 8) + iVar2 +
              (int)(*(float *)((long)(PTR_AtanSampleTable_02719630 + (long)iVar1 * 8) + 4) *
                   ((-param_1 / fVar5) * DAT_01d4c1f0 - (float)iVar1));
      goto LAB_00e6c724;
    }
    fVar6 = 1.0 - param_1 * param_1;
    fVar5 = SQRT(fVar6);
    iVar2 = *(int *)PTR_AngleIndexHalfRound_02715d18;
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    fVar5 = (fVar5 / param_1) * DAT_01d4c6a8;
    iVar1 = (int)fVar5;
    piVar4 = (int *)(PTR_AtanSampleTable_02719630 + (long)iVar1 * 8);
    fVar5 = fVar5 - (float)iVar1;
  }
  uVar3 = (iVar2 - *piVar4) - (int)((float)piVar4[1] * fVar5);
LAB_00e6c724:
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  return (*(float *)PTR_FloatDegree180_027194f0 / fVar5) * (float)uVar3;
}


