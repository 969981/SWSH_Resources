/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00239b00; name: FUN_00239b00
 */


int FUN_00239b00(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                float *param_6)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_10 [4];
  
  local_10[0] = -1.0;
  local_10[1] = -1.0;
  local_10[2] = -1.0;
  if (*param_1 <= *param_3) {
    fVar3 = -1.0;
    if (*param_3 <= *param_2) {
      bVar1 = true;
      fVar5 = param_3[1];
      fVar4 = param_1[1];
      if (fVar4 <= fVar5) goto LAB_00239bb8;
    }
    else {
      *param_5 = *param_2;
      fVar4 = *param_4;
      if (fVar4 != 0.0) {
        fVar3 = *param_2;
        goto LAB_00239b68;
      }
      bVar1 = false;
      fVar5 = param_3[1];
      fVar4 = param_1[1];
      if (fVar4 <= fVar5) goto LAB_00239bb8;
    }
LAB_00239b88:
    param_5[1] = fVar4;
    fVar4 = param_4[1];
    if (fVar4 != 0.0) {
      fVar5 = param_1[1];
LAB_00239be0:
      bVar1 = false;
      local_10[1] = (fVar5 - param_3[1]) / fVar4;
      goto LAB_00239bf0;
    }
    bVar1 = false;
    local_10[1] = -1.0;
    fVar4 = param_3[2];
    fVar5 = param_1[2];
    if (fVar5 <= fVar4) goto LAB_00239c4c;
LAB_00239c00:
    param_5[2] = fVar5;
    local_10[2] = param_4[2];
    if (local_10[2] == 0.0) goto LAB_00239cac;
    fVar4 = param_1[2];
LAB_00239c6c:
    local_10[2] = (fVar4 - param_3[2]) / local_10[2];
  }
  else {
    *param_5 = *param_1;
    fVar4 = *param_4;
    if (fVar4 == 0.0) {
      bVar1 = false;
      fVar3 = -1.0;
      fVar5 = param_3[1];
      fVar4 = param_1[1];
      if (fVar4 <= fVar5) goto LAB_00239bb8;
      goto LAB_00239b88;
    }
    fVar3 = *param_1;
LAB_00239b68:
    bVar1 = false;
    fVar3 = (fVar3 - *param_3) / fVar4;
    local_10[1] = -1.0;
    local_10[0] = fVar3;
    fVar5 = param_3[1];
    fVar4 = param_1[1];
    if (fVar5 < fVar4) goto LAB_00239b88;
LAB_00239bb8:
    local_10[1] = -1.0;
    if (param_2[1] < fVar5) {
      param_5[1] = param_2[1];
      fVar4 = param_4[1];
      if (fVar4 == 0.0) {
        bVar1 = false;
        fVar4 = param_3[2];
        fVar5 = param_1[2];
        if (fVar5 <= fVar4) goto LAB_00239c4c;
        goto LAB_00239c00;
      }
      fVar5 = param_2[1];
      goto LAB_00239be0;
    }
LAB_00239bf0:
    fVar4 = param_3[2];
    fVar5 = param_1[2];
    if (fVar4 < fVar5) goto LAB_00239c00;
LAB_00239c4c:
    if (param_2[2] < fVar4) {
      param_5[2] = param_2[2];
      local_10[2] = param_4[2];
      if (local_10[2] == 0.0) goto LAB_00239cac;
      fVar4 = param_2[2];
      goto LAB_00239c6c;
    }
    if (bVar1) {
      *param_5 = *param_3;
      param_5[1] = param_3[1];
      param_5[2] = param_3[2];
      *param_6 = 0.0;
      return 1;
    }
LAB_00239cac:
    local_10[2] = -1.0;
  }
  fVar4 = DAT_01d4bc28;
  fVar5 = *(float *)((ulong)local_10 | (ulong)(fVar3 < local_10[1]) << 2);
  uVar2 = 2;
  if (local_10[2] <= fVar5) {
    uVar2 = (uint)(fVar3 < local_10[1]);
  }
  fVar3 = local_10[uVar2];
  if ((int)fVar3 < 0) {
    return 0;
  }
  if (uVar2 != 0) {
    fVar6 = *param_3 + *param_4 * fVar3;
    *param_5 = fVar6;
    if (fVar6 < *param_1 + fVar4) {
      return 0;
    }
    if (*param_2 + DAT_01d4c050 < fVar6) {
      return 0;
    }
    if (uVar2 == 1) goto LAB_00239de0;
  }
  fVar4 = DAT_01d4bc28;
  fVar6 = param_3[1] + param_4[1] * fVar3;
  param_5[1] = fVar6;
  if (fVar6 < param_1[1] + fVar4) {
    return 0;
  }
  if (param_2[1] + DAT_01d4c050 < fVar6) {
    return 0;
  }
LAB_00239de0:
  fVar4 = DAT_01d4bc28;
  if (local_10[2] <= fVar5) {
    fVar5 = param_3[2] + param_4[2] * fVar3;
    param_5[2] = fVar5;
    if (fVar5 < param_1[2] + fVar4) {
      return 0;
    }
    if (param_2[2] + DAT_01d4c050 < fVar5) {
      return 0;
    }
  }
  *param_6 = fVar3;
  return uVar2 + 1;
}


