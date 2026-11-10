/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046c5a0; name: FUN_0046c5a0
 */


void FUN_0046c5a0(float param_1,undefined8 *param_2,uint param_3,int *param_4,long param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  fVar8 = (float)param_4[2];
  if (fVar8 == 0.0) {
    fVar7 = (float)param_4[1];
    fVar6 = 1.0;
    fVar8 = 0.0;
    fVar5 = (float)param_3;
    if (fVar5 <= fVar7) goto LAB_0046c680;
LAB_0046c5f8:
    fVar7 = fVar7 / fVar5;
    *(float *)(param_2 + 2) = fVar7;
    iVar2 = *param_4;
  }
  else {
    dVar9 = (double)param_3;
    fVar7 = (float)param_4[1];
    dVar4 = (double)NEON_fminnm((double)fVar7,dVar9);
    dVar4 = log((dVar9 * 0.5) / dVar4);
    dVar4 = exp(-(dVar4 * (double)fVar8));
    dVar4 = cos(((dVar4 * dVar9 * 0.5) / dVar9) * DAT_01cd5428);
    dVar4 = 2.0 - dVar4;
    fVar8 = (float)(SQRT(dVar4 * dVar4 + -1.0) - dVar4);
    fVar6 = fVar8 + 1.0;
    fVar5 = (float)param_3;
    if (fVar7 < fVar5) goto LAB_0046c5f8;
LAB_0046c680:
    fVar7 = 1.0;
    *(undefined4 *)(param_2 + 2) = 0x3f800000;
    iVar2 = *param_4;
  }
  if (iVar2 == 0) {
    *(float *)(param_2 + 2) = fVar7 * DAT_01d4bdf4;
  }
  *(float *)((long)param_2 + 4) = fVar6;
  *(float *)(param_2 + 1) = fVar8;
  iVar2 = *(int *)((long)param_2 + 0x14);
  if (iVar2 != *param_4) {
    if (iVar2 == 0) {
      fVar8 = DAT_01d4c3ec;
LAB_0046c6d0:
      *(float *)((long)param_2 + 0xc) = *(float *)((long)param_2 + 0xc) * fVar8;
    }
    else if (*param_4 == 0) {
      fVar8 = DAT_01d4bdf4;
      goto LAB_0046c6d0;
    }
    iVar2 = *param_4;
  }
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(int *)((long)param_2 + 0x14) = iVar2;
  fVar8 = DAT_01d4bdf4;
  uVar3 = *param_2;
  fVar7 = DAT_01d4bdf4;
  if (*param_4 != 0) {
    fVar7 = 1.0;
  }
  fVar6 = param_1 * DAT_01d4c060 * fVar7;
  if (iVar2 == 1) {
    fVar8 = 0.25;
LAB_0046c740:
    fVar6 = fVar6 + fVar8;
    fVar5 = fVar6 + fVar7;
    if (0.0 <= fVar6) {
      fVar5 = fVar6;
    }
    *(undefined4 *)(param_2 + 1) = uVar1;
    *param_2 = uVar3;
    *(int *)((long)param_2 + 0x14) = iVar2;
    if (fVar7 <= fVar5) {
      fVar5 = fVar5 - fVar7;
    }
    *(float *)((long)param_2 + 0xc) = fVar5;
  }
  else {
    if (iVar2 == 5) {
      *(undefined4 *)(param_2 + 1) = uVar1;
      fVar8 = fVar6 + fVar7;
      if (0.0 <= fVar6) {
        fVar8 = fVar6;
      }
      *param_2 = uVar3;
      if (fVar7 <= fVar8) {
        fVar8 = fVar8 - fVar7;
      }
      *(float *)((long)param_2 + 0xc) = fVar8;
      *(undefined4 *)((long)param_2 + 0x14) = 5;
      param_2[3] = param_5 * 0x5851f42d4c957f2d + 1;
      return;
    }
    if (iVar2 == 3) {
      fVar8 = 0.5;
      goto LAB_0046c740;
    }
    fVar5 = fVar6 + fVar7;
    if (0.0 <= fVar6) {
      fVar5 = fVar6;
    }
    *(undefined4 *)(param_2 + 1) = uVar1;
    *param_2 = uVar3;
    if (fVar7 <= fVar5) {
      fVar5 = fVar5 - fVar7;
    }
    *(float *)((long)param_2 + 0xc) = fVar5;
    *(int *)((long)param_2 + 0x14) = iVar2;
    if (iVar2 == 0) goto LAB_0046c800;
  }
  fVar8 = 1.0;
LAB_0046c800:
  fVar8 = fmodf(fVar5,fVar8);
  *(float *)((long)param_2 + 0xc) = fVar8;
  return;
}


