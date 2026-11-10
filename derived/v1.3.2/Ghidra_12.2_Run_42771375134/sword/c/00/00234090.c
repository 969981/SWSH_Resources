/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00234090; name: FUN_00234090
 */


void FUN_00234090(uint param_1,uint param_2,uint param_3,long param_4,long param_5,long param_6,
                 float *param_7,float *param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = (ulong)param_1;
  uVar2 = (ulong)param_2;
  lVar3 = uVar1 * 4;
  lVar4 = uVar2 * 4;
  fVar5 = *(float *)(param_4 + lVar3) - *(float *)(param_6 + lVar3);
  fVar6 = *(float *)(param_4 + lVar4) - *(float *)(param_6 + lVar4);
  fVar7 = fVar5 * *(float *)(param_5 + lVar4);
  fVar8 = fVar6 * *(float *)(param_5 + lVar3);
  if (fVar8 <= fVar7) {
    *(float *)(param_4 + lVar3) = *(float *)(param_6 + lVar3);
    fVar6 = *(float *)(param_4 + lVar4) + *(float *)(param_6 + lVar4);
    fVar8 = *(float *)(param_5 + lVar3);
    fVar9 = fVar7 - fVar8 * fVar6;
    if (fVar9 < 0.0) {
      if (param_7 != (float *)0x0) {
        *(float *)(param_4 + uVar2 * 4) = *(float *)(param_4 + lVar4) - fVar7 * (1.0 / fVar8);
        *param_7 = -(fVar5 * (1.0 / fVar8));
      }
      goto LAB_00234200;
    }
    fVar7 = *(float *)(param_5 + uVar2 * 4);
    fVar7 = 1.0 / (fVar8 * fVar8 + fVar7 * fVar7);
    *param_8 = *param_8 + fVar9 * fVar9 * fVar7;
    if (param_7 == (float *)0x0) goto LAB_00234200;
    *(float *)(param_4 + lVar4) = -*(float *)(param_6 + lVar4);
    fVar5 = fVar5 * *(float *)(param_5 + uVar1 * 4);
    fVar8 = *(float *)(param_5 + lVar4);
LAB_002341f0:
    fVar6 = fVar7 * (fVar5 + fVar6 * fVar8);
  }
  else {
    *(float *)(param_4 + lVar4) = *(float *)(param_6 + lVar4);
    fVar5 = *(float *)(param_4 + lVar3) + *(float *)(param_6 + lVar3);
    fVar7 = *(float *)(param_5 + lVar4);
    fVar9 = fVar8 - fVar7 * fVar5;
    if (0.0 <= fVar9) {
      fVar8 = *(float *)(param_5 + uVar1 * 4);
      fVar7 = 1.0 / (fVar7 * fVar7 + fVar8 * fVar8);
      *param_8 = *param_8 + fVar9 * fVar9 * fVar7;
      if (param_7 == (float *)0x0) goto LAB_00234200;
      *(float *)(param_4 + lVar3) = -*(float *)(param_6 + lVar3);
      fVar5 = fVar5 * *(float *)(param_5 + lVar3);
      fVar8 = *(float *)(param_5 + uVar2 * 4);
      goto LAB_002341f0;
    }
    if (param_7 == (float *)0x0) goto LAB_00234200;
    fVar6 = fVar6 * (1.0 / fVar7);
    *(float *)(param_4 + uVar1 * 4) = *(float *)(param_4 + lVar3) - fVar8 * (1.0 / fVar7);
  }
  *param_7 = -fVar6;
LAB_00234200:
  lVar3 = (ulong)param_3 * 4;
  fVar5 = *(float *)(param_6 + lVar3);
  fVar6 = *(float *)(param_4 + lVar3);
  if (fVar6 < -fVar5) {
    *param_8 = (fVar6 + fVar5) * (fVar6 + fVar5) + *param_8;
    *(float *)(param_4 + lVar3) = -*(float *)(param_6 + lVar3);
    return;
  }
  if (fVar5 < fVar6) {
    *param_8 = (fVar6 - fVar5) * (fVar6 - fVar5) + *param_8;
    *(undefined4 *)(param_4 + lVar3) = *(undefined4 *)(param_6 + lVar3);
  }
  return;
}


