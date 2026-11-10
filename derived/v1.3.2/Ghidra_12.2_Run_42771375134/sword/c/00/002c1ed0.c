/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002c1ed0; name: FUN_002c1ed0
 */


undefined8
FUN_002c1ed0(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,byte *param_8)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float local_64;
  
  fVar8 = param_3[6] + param_2[3];
  if ((*param_8 >> 4 & 1) == 0) {
    local_98 = *param_3;
    fVar9 = param_3[4] - param_3[1];
    fVar5 = param_2[1] - param_3[1];
    local_8c = param_3[3];
    fVar10 = local_8c - local_98;
    fVar7 = param_3[5] - param_3[2];
    fVar6 = *param_2 - local_98;
    fVar4 = param_2[2] - param_3[2];
    fVar11 = fVar10 * fVar6 + fVar9 * fVar5 + fVar7 * fVar4;
    if (0.0 < fVar11) {
      fVar12 = fVar10 * fVar10 + fVar9 * fVar9 + fVar7 * fVar7;
      if (fVar11 < fVar12) {
        fVar11 = fVar11 / fVar12;
        fVar10 = fVar10 * fVar11;
        fVar9 = fVar9 * fVar11;
        fVar7 = fVar7 * fVar11;
      }
      fVar6 = fVar6 - fVar10;
      fVar5 = fVar5 - fVar9;
      fVar4 = fVar4 - fVar7;
    }
    if (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 < fVar8 * fVar8) {
      *param_5 = 0.0;
      fVar8 = param_4[1];
      fVar4 = param_4[2];
      *param_7 = -*param_4;
      param_7[1] = -fVar8;
      param_7[2] = -fVar4;
      return 1;
    }
  }
  else {
    local_98 = *param_3;
    local_8c = param_3[3];
  }
  fStack_94 = param_3[1];
  local_88 = param_3[4];
  bVar1 = false;
  if ((local_98 == local_8c) && (bVar1 = false, !NAN(fStack_94) && !NAN(local_88))) {
    bVar1 = fStack_94 == local_88;
  }
  if ((bVar1) && (param_3[2] == param_3[5])) {
    local_98 = -(*param_4 * param_1);
    fStack_94 = -(param_4[1] * param_1);
    local_90 = -(param_4[2] * param_1);
    uVar3 = FUN_002c23d0(param_2,param_3,&local_98,param_5,param_7);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    *param_5 = *param_5 * param_1;
    fVar5 = param_7[1];
    fVar4 = param_2[3];
    fVar8 = fVar4 * param_7[2] + param_2[2];
    fVar6 = param_2[1];
    *param_6 = fVar4 * *param_7 + *param_2;
    param_6[1] = fVar4 * fVar5 + fVar6;
    goto LAB_002c2390;
  }
  local_90 = param_3[2];
  local_84 = param_3[5];
  fVar9 = local_8c - local_98;
  fVar7 = local_88 - fStack_94;
  fVar10 = local_84 - local_90;
  fVar6 = *param_2 - local_98;
  fVar4 = param_2[1] - fStack_94;
  fVar5 = param_2[2] - local_90;
  fVar11 = fVar9 * fVar6 + fVar7 * fVar4 + fVar10 * fVar5;
  if (0.0 < fVar11) {
    fVar12 = fVar9 * fVar9 + fVar7 * fVar7 + fVar10 * fVar10;
    if (fVar11 < fVar12) {
      fVar11 = fVar11 / fVar12;
      fVar9 = fVar9 * fVar11;
      fVar7 = fVar7 * fVar11;
      fVar10 = fVar10 * fVar11;
    }
    fVar6 = fVar6 - fVar9;
    fVar4 = fVar4 - fVar7;
    fVar5 = fVar5 - fVar10;
  }
  local_80 = fVar8;
                    /* try { // try from 002c2130 to 002c21a7 has its CatchHandler @ 002c23c0 */
  fVar4 = sqrtf(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  fVar4 = fVar4 - fVar8;
  if (fVar4 <= 0.0) {
    bVar1 = true;
joined_r0x002c21ec:
    fVar5 = 0.0;
    if (param_1 < 0.0) {
      return 0;
    }
  }
  else {
    fVar5 = fVar4 + -10.0;
    if (fVar4 <= 10.0) {
      fVar5 = 0.0;
    }
    local_78 = fVar5 * *param_4 + *param_2;
    fStack_74 = fVar5 * param_4[1] + param_2[1];
    local_70 = fVar5 * param_4[2] + param_2[2];
    iVar2 = FUN_0024cb60(fVar8,&local_78,param_4,&local_98,&local_8c,&local_68);
    if (iVar2 == 0) {
      bVar1 = false;
      goto joined_r0x002c21ec;
    }
    if ((iVar2 != 1) && (local_64 <= local_68)) {
      local_68 = local_64;
    }
    fVar5 = fVar5 + local_68;
    bVar1 = true;
    if (param_1 < fVar5) {
      return 0;
    }
  }
  if (!bVar1) {
    return 0;
  }
  if (fVar5 < 0.0) {
    return 0;
  }
  *param_5 = fVar5;
  fStack_94 = fStack_94 - fVar5 * param_4[1];
  local_98 = local_98 - fVar5 * *param_4;
  local_8c = local_8c - fVar5 * *param_4;
  local_88 = local_88 - fVar5 * param_4[1];
  local_90 = local_90 - fVar5 * param_4[2];
  local_84 = local_84 - fVar5 * param_4[2];
  fVar8 = local_8c - local_98;
  fVar4 = local_88 - fStack_94;
  fVar5 = local_84 - local_90;
  fVar6 = fVar8 * (*param_2 - local_98) + fVar4 * (param_2[1] - fStack_94) +
          fVar5 * (param_2[2] - local_90);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  else {
    fVar7 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
    if (fVar7 <= fVar6) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = fVar6 / fVar7;
    }
  }
  fVar8 = local_98 + fVar8 * fVar6;
  fVar4 = fStack_94 + fVar4 * fVar6;
  fVar5 = local_90 + fVar5 * fVar6;
  *param_6 = fVar8;
  param_6[1] = fVar4;
  param_6[2] = fVar5;
  fVar4 = fVar4 - param_2[1];
  fVar8 = fVar8 - *param_2;
  fVar6 = param_2[2];
  param_7[1] = fVar4;
  fVar5 = fVar5 - fVar6;
  *param_7 = fVar8;
  param_7[2] = fVar5;
                    /* try { // try from 002c2328 to 002c232b has its CatchHandler @ 002c23bc */
  fVar8 = sqrtf(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5);
  if (fVar8 <= 0.0) {
    fVar4 = *param_7;
    fVar5 = param_7[1];
    fVar8 = param_7[2];
  }
  else {
    fVar8 = 1.0 / fVar8;
    fVar4 = fVar8 * *param_7;
    fVar5 = fVar8 * param_7[1];
    fVar8 = fVar8 * param_7[2];
    *param_7 = fVar4;
    param_7[1] = fVar5;
    param_7[2] = fVar8;
  }
  fVar6 = param_3[6];
  *param_6 = *param_6 - fVar6 * fVar4;
  param_6[1] = param_6[1] - fVar6 * fVar5;
  fVar8 = param_6[2] - fVar6 * fVar8;
LAB_002c2390:
  param_6[2] = fVar8;
  return 1;
}


