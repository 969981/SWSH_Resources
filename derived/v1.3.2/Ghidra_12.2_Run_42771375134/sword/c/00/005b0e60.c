/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b0e60; name: FUN_005b0e60
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005b0e60(long param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  undefined *puVar2;
  float *pfVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar2 = PTR_DAT_027139b0;
  iVar4 = *(int *)PTR_DAT_027139b0;
  if (iVar4 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar2 = 1;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar4 + 1;
    if (1 < iVar4 + 1) goto LAB_005b0f4c;
  }
  if (plVar5 == (long *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar5 + 0x20))(plVar5);
    FUN_005b9b10(uVar6,plVar5);
    iVar4 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005b0f4c:
  *(int *)puVar2 = iVar4;
  plVar7 = (long *)plVar5[6];
  pfVar3 = (float *)FUN_00573970();
  (**(code **)(*plVar7 + 0xa0))(plVar7,(int)plVar5[0x1c],param_1 + 0x1e8);
  fVar12 = *(float *)(param_1 + 0x1e4) * 0.5;
  *pfVar3 = fVar12;
  if ((param_2 & 1) == 0) {
    pfVar3[1] = (1.0 / *(float *)(param_1 + 0x278)) / DAT_01d4c05c;
    pfVar3[2] = 0.0;
    pfVar3[3] = 0.5;
  }
  else {
    fVar11 = *(float *)(*(long *)(param_1 + 0x2e0) + (long)*(int *)(param_1 + 0x2ac) * 4);
    fVar8 = (float)FUN_005b4b60(param_1,1);
    pfVar3[1] = (1.0 / (fVar11 * (fVar8 / DAT_01d4c058) * DAT_01d4c2a4)) * 0.5;
    fVar13 = *(float *)(param_1 + 0x2b0);
    fVar8 = powf(*(float *)(param_1 + 0x1b4) * 0.5,*(float *)(param_1 + 0x2b8));
    fVar11 = powf(*(float *)(param_1 + 0x19c) * 4.0,*(float *)(param_1 + 0x2b4));
    fVar9 = powf(*(float *)(param_1 + 0x1a8) /
                 (*(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1a8)) + 1.0,
                 *(float *)(param_1 + 700));
    if (*(int *)(param_1 + 0x2ac) == 5) {
      fVar8 = 0.0;
      if (0.0 < *(float *)(param_1 + 0x3e4)) {
        fVar8 = *(float *)(param_1 + 0x3e4) / *(float *)(param_1 + 0x1c0);
      }
      if (fVar8 <= 0.0) {
        fVar8 = 1.0;
      }
      fVar11 = *(float *)(param_1 + 0x2b0);
      if (fVar11 <= 0.0) {
        fVar11 = -fVar11;
      }
      fVar11 = fVar11 * fVar8;
      fVar8 = fVar11;
      if (1.0 < fVar11) {
        fVar8 = 1.0;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar11) {
        fVar9 = fVar8;
      }
      pfVar3[2] = 0.0;
      pfVar3[3] = fVar9;
    }
    else {
      fVar10 = *(float *)(*(long *)(param_1 + 0x2e8) + (long)*(int *)(param_1 + 0x2ac) * 4);
      pfVar3[2] = ((8.0 / fVar13) * fVar8 * fVar11) / fVar9;
      pfVar3[3] = fVar10;
    }
  }
  if ((param_3 & 1) == 0) {
    pfVar3[4] = fVar12;
    pfVar3[5] = fVar12;
    pfVar3[6] = 0.0;
    pfVar3[7] = 0.0;
    cVar1 = *(char *)(param_1 + 0x12d);
  }
  else if (*(char *)(param_1 + 0x3f0) == '\0') {
    pfVar3[4] = fVar12;
    pfVar3[5] = fVar12;
    pfVar3[6] = -0.0;
    pfVar3[7] = 0.0;
    cVar1 = *(char *)(param_1 + 0x12d);
  }
  else {
    fVar8 = *(float *)(param_1 + 0x3f4) + *(float *)(param_1 + 0x3f4);
    fVar11 = fVar8 * DAT_01d4bc88;
    fVar8 = fVar8 * DAT_01d4bd94;
    pfVar3[4] = fVar12;
    pfVar3[5] = fVar12;
    pfVar3[6] = fVar11;
    pfVar3[7] = fVar8;
    cVar1 = *(char *)(param_1 + 0x12d);
  }
  if (cVar1 != '\0') {
    fVar12 = *(float *)(*(long *)(param_1 + 0x420) + 0x78) * 0.5;
    fVar8 = fVar12 * 1.5;
    fVar12 = 1.0 / (fVar12 - fVar8);
    pfVar3[10] = fVar12;
    pfVar3[0xb] = 0.0 - fVar8 * fVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x005b1188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0xb0))(plVar7,*(undefined4 *)((long)plVar5 + 0x104),pfVar3,4);
  return;
}


