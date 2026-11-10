/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a92fd0; name: FUN_00a92fd0
 */


float FUN_00a92fd0(float param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  float fVar4;
  
  if ((param_1 == 0.0) && (param_2 == 0.0)) {
    uVar2 = 0;
    goto LAB_00a93180;
  }
  if (0.0 <= param_2) {
    if (0.0 <= param_1) {
      if (param_1 <= param_2) {
        iVar1 = (int)((param_1 / param_2) * 128.0);
        uVar2 = *(int *)(PTR_AtanSampleTable_02719630 + (long)iVar1 * 8) +
                (int)(((param_1 / param_2) * DAT_01d4c1f0 - (float)iVar1) *
                     *(float *)((long)(PTR_AtanSampleTable_02719630 + (long)iVar1 * 8) + 4));
        goto LAB_00a93180;
      }
      piVar3 = (int *)PTR_AngleIndexQuarterRound_02719620;
LAB_00a9303c:
      param_1 = param_2 / param_1;
      goto LAB_00a9306c;
    }
    param_1 = -param_1;
    if (param_1 <= param_2) {
      iVar1 = (int)((param_1 / param_2) * 128.0);
      uVar2 = -(*(int *)(PTR_AtanSampleTable_02719630 + (long)iVar1 * 8) +
               (int)(((param_1 / param_2) * DAT_01d4c1f0 - (float)iVar1) *
                    *(float *)((long)(PTR_AtanSampleTable_02719630 + (long)iVar1 * 8) + 4)));
      goto LAB_00a93180;
    }
    piVar3 = (int *)PTR_AngleIndexThreeQuarterRound_02719628;
LAB_00a93058:
    param_2 = param_2 / param_1;
  }
  else {
    if (0.0 <= param_1) {
      param_2 = -param_2;
      if (param_2 < param_1) {
        piVar3 = (int *)PTR_AngleIndexQuarterRound_02719620;
        goto LAB_00a93058;
      }
      param_1 = param_1 / param_2;
      piVar3 = (int *)PTR_AngleIndexHalfRound_02715d18;
LAB_00a9306c:
      uVar2 = (*piVar3 - *(int *)(PTR_AtanSampleTable_02719630 + (long)(int)(param_1 * 128.0) * 8))
              - (int)((param_1 * DAT_01d4c1f0 - (float)(int)(param_1 * 128.0)) *
                     *(float *)((long)(PTR_AtanSampleTable_02719630 +
                                      (long)(int)(param_1 * 128.0) * 8) + 4));
      goto LAB_00a93180;
    }
    if (param_1 < param_2) {
      piVar3 = (int *)PTR_AngleIndexThreeQuarterRound_02719628;
      goto LAB_00a9303c;
    }
    param_2 = param_1 / param_2;
    piVar3 = (int *)PTR_AngleIndexHalfRound_02715d18;
  }
  uVar2 = *(int *)(PTR_AtanSampleTable_02719630 + (long)(int)(param_2 * 128.0) * 8) + *piVar3 +
          (int)((param_2 * DAT_01d4c1f0 - (float)(int)(param_2 * 128.0)) *
               *(float *)((long)(PTR_AtanSampleTable_02719630 + (long)(int)(param_2 * 128.0) * 8) +
                         4));
LAB_00a93180:
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  return (*(float *)PTR_FloatPi_02715160 / fVar4) * (float)uVar2;
}


