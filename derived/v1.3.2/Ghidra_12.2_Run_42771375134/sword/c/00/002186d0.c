/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002186d0; name: FUN_002186d0
 */


undefined4 * FUN_002186d0(undefined4 *param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  local_40 = fVar5 * (float)param_1[9] + fVar6 * (float)param_1[0xd] + fVar7 * (float)param_1[0x11]
             + (float)param_1[0x15];
  local_3c = fVar5 * (float)param_1[10] + fVar6 * (float)param_1[0xe] + fVar7 * (float)param_1[0x12]
             + (float)param_1[0x16];
  local_38 = fVar5 * (float)param_1[0xb] + fVar6 * (float)param_1[0xf] +
             fVar7 * (float)param_1[0x13] + (float)param_1[0x17];
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  uVar3 = param_1[8] + 1;
  param_1[8] = uVar3;
  local_50 = local_40;
  local_4c = local_3c;
  local_48 = local_38;
  switch(*param_1) {
  case 0:
    lVar2 = *(long *)(param_1 + 0x1a);
    local_54 = (float)param_1[1];
    uVar3 = *(uint *)(lVar2 + 0x10);
    if (uVar3 < (*(uint *)(lVar2 + 0x14) & 0x7fffffff)) {
      pfVar4 = (float *)(*(long *)(lVar2 + 8) + (ulong)uVar3 * 0x10);
      pfVar4[3] = local_54;
      *pfVar4 = local_40;
      pfVar4[1] = local_3c;
      pfVar4[2] = local_38;
      *(uint *)(lVar2 + 0x10) = uVar3 + 1;
    }
    else {
      local_60 = local_40;
      fStack_5c = local_3c;
      local_58 = local_38;
      FUN_001fe050(lVar2 + 8,&local_60);
    }
    goto LAB_00218a74;
  case 1:
    if (uVar3 != 2) break;
    lVar2 = *(long *)(param_1 + 0x1a);
    local_60 = (float)param_1[2];
    fStack_5c = (float)param_1[3];
    local_58 = (float)param_1[4];
    local_54 = (float)param_1[1];
    uVar3 = *(uint *)(lVar2 + 0x20);
    if (uVar3 < (*(uint *)(lVar2 + 0x24) & 0x7fffffff)) {
      pfVar4 = (float *)(*(long *)(lVar2 + 0x18) + (ulong)uVar3 * 0x20);
      *pfVar4 = local_60;
      pfVar4[1] = fStack_5c;
      pfVar4[2] = local_58;
      pfVar4[3] = local_54;
      pfVar4[4] = local_40;
      pfVar4[5] = local_3c;
      pfVar4[6] = local_38;
      pfVar4[7] = local_54;
      *(uint *)(lVar2 + 0x20) = uVar3 + 1;
      param_1[8] = 0;
    }
    else {
      local_44 = local_54;
      FUN_001fe1b0(lVar2 + 0x18,&local_60);
      param_1[8] = 0;
    }
    goto LAB_00218aa0;
  case 2:
    if (uVar3 < 2) goto LAB_00218aa0;
    local_60 = (float)param_1[2];
    fStack_5c = (float)param_1[3];
    lVar2 = *(long *)(param_1 + 0x1a);
    local_58 = (float)param_1[4];
    local_54 = (float)param_1[1];
    uVar3 = *(uint *)(lVar2 + 0x20);
    if (uVar3 < (*(uint *)(lVar2 + 0x24) & 0x7fffffff)) {
      pfVar4 = (float *)(*(long *)(lVar2 + 0x18) + (ulong)uVar3 * 0x20);
      *pfVar4 = local_60;
      pfVar4[1] = fStack_5c;
      pfVar4[2] = local_58;
      pfVar4[3] = local_54;
      pfVar4[4] = local_40;
      pfVar4[5] = local_3c;
      pfVar4[6] = local_38;
      pfVar4[7] = local_54;
      *(uint *)(lVar2 + 0x20) = uVar3 + 1;
    }
    else {
      local_44 = local_54;
      FUN_001fe1b0(lVar2 + 0x18,&local_60);
    }
LAB_00218a74:
    uVar3 = param_1[8];
    break;
  case 3:
    if (uVar3 == 3) {
      local_60 = (float)param_1[5];
      fStack_5c = (float)param_1[6];
      lVar2 = *(long *)(param_1 + 0x1a);
      local_58 = (float)param_1[7];
      local_54 = (float)param_1[1];
      local_50 = (float)param_1[2];
      local_4c = (float)param_1[3];
      local_48 = (float)param_1[4];
      uVar3 = *(uint *)(lVar2 + 0x30);
      if (uVar3 < (*(uint *)(lVar2 + 0x34) & 0x7fffffff)) {
        pfVar4 = (float *)(*(long *)(lVar2 + 0x28) + (ulong)uVar3 * 0x30);
        *pfVar4 = local_60;
        pfVar4[1] = fStack_5c;
        pfVar4[2] = local_58;
        pfVar4[3] = local_54;
        pfVar4[4] = local_50;
        pfVar4[5] = local_4c;
        pfVar4[6] = local_48;
        pfVar4[7] = local_54;
        pfVar4[8] = local_40;
        pfVar4[9] = local_3c;
        pfVar4[10] = local_38;
        pfVar4[0xb] = local_54;
        *(uint *)(lVar2 + 0x30) = uVar3 + 1;
        param_1[8] = 0;
      }
      else {
        local_44 = local_54;
        local_34 = local_54;
        FUN_001fe4a0(lVar2 + 0x28,&local_60);
        param_1[8] = 0;
      }
      goto LAB_00218aa0;
    }
    break;
  case 4:
    if (2 < uVar3) {
      pfVar4 = (float *)(param_1 + 5);
      pfVar1 = (float *)(param_1 + 2);
      if ((uVar3 & 1) == 0) {
        pfVar4 = (float *)(param_1 + 2);
        pfVar1 = (float *)(param_1 + 5);
      }
      lVar2 = *(long *)(param_1 + 0x1a);
      local_60 = *pfVar1;
      fStack_5c = pfVar1[1];
      local_58 = pfVar1[2];
      local_54 = (float)param_1[1];
      local_50 = *pfVar4;
      local_4c = pfVar4[1];
      local_48 = pfVar4[2];
      uVar3 = *(uint *)(lVar2 + 0x30);
      if (uVar3 < (*(uint *)(lVar2 + 0x34) & 0x7fffffff)) {
        pfVar4 = (float *)(*(long *)(lVar2 + 0x28) + (ulong)uVar3 * 0x30);
        *pfVar4 = local_60;
        pfVar4[1] = fStack_5c;
        pfVar4[2] = local_58;
        pfVar4[3] = local_54;
        pfVar4[4] = local_50;
        pfVar4[5] = local_4c;
        pfVar4[6] = local_48;
        pfVar4[7] = local_54;
        pfVar4[8] = local_40;
        pfVar4[9] = local_3c;
        pfVar4[10] = local_38;
        pfVar4[0xb] = local_54;
        *(uint *)(lVar2 + 0x30) = uVar3 + 1;
      }
      else {
        local_44 = local_54;
        local_34 = local_54;
        FUN_001fe4a0(lVar2 + 0x28,&local_60);
      }
      goto LAB_00218a74;
    }
  }
  if (uVar3 < 2) {
LAB_00218aa0:
    param_1[2] = *param_2;
  }
  else {
    *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_1 + 2);
    param_1[7] = param_1[4];
    param_1[2] = *param_2;
  }
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  return param_1;
}


