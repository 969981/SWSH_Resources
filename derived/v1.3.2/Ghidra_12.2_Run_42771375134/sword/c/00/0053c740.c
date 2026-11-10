/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053c740; name: FUN_0053c740
 */


/* WARNING: Removing unreachable block (ram,0x0053c944) */

void FUN_0053c740(float *param_1,long param_2,float *param_3,float *param_4,undefined8 param_5,
                 uint param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  if (*param_1 == DAT_01d4c24c) {
    return;
  }
  fVar2 = DAT_01d4c24c;
  FUN_00511bb0(&local_b0,param_2,param_2 + 8,param_2 + 0x10,param_2 + 0x18);
  FUN_005156a0(&local_f0,&local_b0);
  local_118 = local_d8;
  local_120 = local_e0;
  local_f8 = local_b8;
  local_100 = local_c0;
  local_108 = local_c8;
  local_110 = local_d0;
  if ((param_7 & 1) == 0) {
    fVar2 = *param_3;
    fStack_ec = -(fVar2 * DAT_01d4c654);
    if (0.0 <= fVar2) {
      fStack_ec = fVar2;
    }
    local_f0 = (fStack_ec / DAT_01d4c654) * DAT_01d4be90;
    local_e8 = (fStack_ec / DAT_01d4c654) * DAT_01d4be94;
  }
  else {
    local_b0 = 153.84616;
    fVar1 = (float)FUN_0053cdf0(&local_b0);
    fVar6 = fVar1 + fVar1 + fVar2 * -8.0 + 4.0;
    fVar1 = (fVar1 * 3.0) / fVar6;
    fVar6 = (fVar2 + fVar2) / fVar6;
    fVar2 = *param_3;
    fStack_ec = -(fVar2 * fVar6);
    if (0.0 <= fVar2) {
      fStack_ec = fVar2;
    }
    local_f0 = fVar1 * (fStack_ec / fVar6);
    local_e8 = ((1.0 - fVar1) - fVar6) * (fStack_ec / fVar6);
  }
  FUN_00510120(&local_b0,&local_f0,local_130);
  fVar1 = 1.0 / fStack_ac;
  fVar2 = *param_1;
  fVar8 = 1.0 / local_b0;
  fVar6 = 1.0 / local_a8;
  if ((param_7 & 1) != 0) {
    if (DAT_01d4bd50 <= fVar2) {
      local_b0 = DAT_01d4c73c / fVar2;
      fVar2 = DAT_01d4c73c;
    }
    else {
      local_b0 = DAT_01d4c49c;
      fVar2 = fStack_ac;
    }
    fVar3 = (float)FUN_0053cdf0(&local_b0);
    local_e8 = fVar3 + fVar3 + fVar2 * -8.0 + 4.0;
    local_f0 = (fVar3 * 3.0) / local_e8;
    local_e8 = (fVar2 + fVar2) / local_e8;
    fVar2 = *param_3;
    fStack_ec = -(fVar2 * local_e8);
    if (0.0 <= fVar2) {
      fStack_ec = fVar2;
    }
    fVar2 = fStack_ec / local_e8;
    local_e8 = (1.0 - local_f0) - local_e8;
    local_f0 = local_f0 * fVar2;
    goto LAB_0053caac;
  }
  if (DAT_01d4be24 <= fVar2) {
    if (fVar2 <= DAT_01d4bbd8) {
      dVar4 = (double)fVar2;
      if (fVar2 < DAT_01d4c658) goto LAB_0053c9e8;
      dVar5 = dVar4 * dVar4;
      dVar7 = dVar5 * dVar4;
      if (DAT_01d4c114 < fVar2) goto LAB_0053ca24;
      dVar5 = DAT_01cd50e8 / dVar4 + DAT_01cd4fe8 / dVar5 + DAT_01cd50c8 / dVar7;
      dVar4 = DAT_01cd50f0;
    }
    else {
      dVar4 = DAT_01cd5300;
      dVar5 = DAT_01cd5148;
      dVar7 = DAT_01cd53a8;
LAB_0053ca24:
      dVar5 = DAT_01cd5408 / dVar5 + DAT_01cd5290 / dVar7 + DAT_01cd5368 / dVar4;
      dVar4 = DAT_01cd5240;
    }
    dVar5 = dVar5 + dVar4;
  }
  else {
    dVar4 = DAT_01cd50e0;
LAB_0053c9e8:
    dVar4 = log(dVar4);
    dVar5 = dVar4 * dVar4 * DAT_01cd5248 + DAT_01cd4ff0;
  }
  fVar2 = *param_3;
  local_e8 = (float)(dVar5 * DAT_01cd5170 + dVar5 * dVar5 * -3.0 + DAT_01cd5088);
  fStack_ec = -(fVar2 * local_e8);
  if (0.0 <= fVar2) {
    fStack_ec = fVar2;
  }
  fVar2 = fStack_ec / local_e8;
  local_e8 = (1.0 - (float)dVar5) - local_e8;
  local_f0 = fVar2 * (float)dVar5;
LAB_0053caac:
  local_e8 = local_e8 * fVar2;
  FUN_00510120(&local_b0,&local_f0,local_130);
  fStack_ac = fVar1 * fStack_ac;
  local_b0 = fVar8 * local_b0;
  local_a8 = fVar6 * local_a8;
  if ((param_6 & 1) != 0) {
    local_b0 = 1.0 / local_b0;
    fStack_ac = 1.0 / fStack_ac;
    local_a8 = 1.0 / local_a8;
  }
  if (*param_4 < 0.0) {
    FUN_0053cb90(&local_b0,param_4,param_2);
  }
  return;
}


