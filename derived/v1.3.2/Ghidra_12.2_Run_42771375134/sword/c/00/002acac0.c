/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002acac0; name: FUN_002acac0
 */


undefined8
FUN_002acac0(float param_1,long param_2,float *param_3,float *param_4,float *param_5,ushort *param_6
            ,undefined8 param_7,long param_8)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_90 [4];
  float local_80 [4];
  float local_70;
  float fStack_6c;
  float local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_34;
  
  fVar11 = *param_3;
  fVar12 = param_3[1];
  fVar6 = (param_4[1] - param_3[5]) + (param_4[1] - param_3[5]);
  fVar5 = (*param_4 - param_3[4]) + (*param_4 - param_3[4]);
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  fVar7 = (param_4[2] - param_3[6]) + (param_4[2] - param_3[6]);
  fVar13 = fVar5 * fVar11 + fVar6 * fVar12 + fVar7 * fVar8;
  fVar10 = fVar9 * fVar9 + -0.5;
  local_60 = fVar11 * fVar13 + (fVar5 * fVar10 - fVar9 * (fVar7 * fVar12 - fVar6 * fVar8));
  fStack_5c = fVar12 * fVar13 + (fVar6 * fVar10 - fVar9 * (fVar5 * fVar8 - fVar7 * fVar11));
  local_58 = (fVar7 * fVar10 - fVar9 * (fVar6 * fVar11 - fVar5 * fVar12)) + fVar8 * fVar13;
  fVar6 = param_5[1] + param_5[1];
  fVar5 = *param_5 + *param_5;
  fVar7 = param_5[2] + param_5[2];
  fVar13 = fVar11 * fVar5 + fVar12 * fVar6 + fVar8 * fVar7;
  local_70 = fVar11 * fVar13 + (fVar10 * fVar5 - fVar9 * (fVar12 * fVar7 - fVar8 * fVar6));
  fStack_6c = fVar12 * fVar13 + (fVar10 * fVar6 - fVar9 * (fVar8 * fVar5 - fVar11 * fVar7));
  local_68 = (fVar10 * fVar7 - fVar9 * (fVar11 * fVar6 - fVar12 * fVar5)) + fVar8 * fVar13;
  local_90[1] = -*(float *)(param_2 + 8);
  local_90[0] = -*(float *)(param_2 + 4);
  local_90[2] = -*(float *)(param_2 + 0xc);
  uVar3 = FUN_00239b00(local_90,(float *)(param_2 + 4),&local_60,&local_70,local_80,&local_34);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if (local_34 <= param_1) {
    *(float *)(param_8 + 0x30) = local_34;
    *(undefined8 *)(param_8 + 0x34) = 0;
    *(undefined4 *)(param_8 + 0x10) = 0xffffffff;
    uVar1 = *param_6;
    if ((uVar1 & 1) == 0) {
      uVar4 = 4;
    }
    else if (local_34 == 0.0) {
      *(float *)(param_8 + 0x18) = *param_4;
      *(float *)(param_8 + 0x1c) = param_4[1];
      *(float *)(param_8 + 0x20) = param_4[2];
      uVar4 = 5;
    }
    else {
      fVar7 = *param_3;
      fVar8 = param_3[1];
      local_80[1] = local_80[1] + local_80[1];
      fVar5 = param_3[2];
      fVar6 = param_3[3];
      local_80[0] = local_80[0] + local_80[0];
      local_80[2] = local_80[2] + local_80[2];
      fVar9 = fVar6 * fVar6 + -0.5;
      fVar10 = local_80[0] * fVar7 + local_80[1] * fVar8 + local_80[2] * fVar5;
      fVar12 = param_3[5];
      fVar11 = param_3[6];
      *(float *)(param_8 + 0x18) =
           param_3[4] +
           fVar7 * fVar10 +
           local_80[0] * fVar9 + fVar6 * (local_80[2] * fVar8 - local_80[1] * fVar5);
      *(float *)(param_8 + 0x1c) =
           fVar12 + fVar8 * fVar10 +
                    local_80[1] * fVar9 + fVar6 * (local_80[0] * fVar5 - local_80[2] * fVar7);
      *(float *)(param_8 + 0x20) =
           fVar11 + local_80[2] * fVar9 + fVar6 * (local_80[1] * fVar7 - local_80[0] * fVar8) +
                    fVar5 * fVar10;
      uVar4 = 5;
    }
    if ((uVar1 >> 1 & 1) == 0) {
      *(undefined8 *)(param_8 + 0x24) = 0;
      *(undefined4 *)(param_8 + 0x2c) = 0;
    }
    else {
      uVar4 = uVar4 | 2;
      if (local_34 == 0.0) {
        fVar5 = param_5[1];
        fVar6 = param_5[2];
        *(float *)(param_8 + 0x24) = -*param_5;
        *(float *)(param_8 + 0x28) = -fVar5;
        *(float *)(param_8 + 0x2c) = -fVar6;
      }
      else {
        uVar2 = (int)uVar3 - 1;
        fVar5 = 1.0;
        if (local_80[uVar2] <= 0.0) {
          fVar5 = -1.0;
        }
        local_90[0] = 0.0;
        local_90[1] = 0.0;
        local_90[2] = 0.0;
        local_90[uVar2] = fVar5;
        local_90[1] = local_90[1] + local_90[1];
        fVar5 = param_3[2];
        fVar6 = param_3[3];
        fVar7 = *param_3;
        fVar8 = param_3[1];
        local_90[0] = local_90[0] + local_90[0];
        local_90[2] = local_90[2] + local_90[2];
        fVar9 = fVar6 * fVar6 + -0.5;
        fVar10 = local_90[0] * fVar7 + local_90[1] * fVar8 + local_90[2] * fVar5;
        *(float *)(param_8 + 0x2c) =
             local_90[2] * fVar9 + fVar6 * (local_90[1] * fVar7 - local_90[0] * fVar8) +
             fVar5 * fVar10;
        *(float *)(param_8 + 0x24) =
             fVar7 * fVar10 +
             local_90[0] * fVar9 + fVar6 * (local_90[2] * fVar8 - local_90[1] * fVar5);
        *(float *)(param_8 + 0x28) =
             fVar8 * fVar10 +
             local_90[1] * fVar9 + fVar6 * (local_90[0] * fVar5 - local_90[2] * fVar7);
      }
    }
    *(ushort *)(param_8 + 0x14) = uVar4;
    return 1;
  }
  return 0;
}


