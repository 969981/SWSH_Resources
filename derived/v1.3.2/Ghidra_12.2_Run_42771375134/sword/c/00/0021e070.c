/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021e070; name: FUN_0021e070
 */


void FUN_0021e070(float param_1,float param_2,long param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_88 [4];
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_50;
  float fStack_4c;
  float local_48;
  
  local_50 = param_5[0xc];
  fStack_4c = param_5[0xd];
  local_48 = param_5[0xe];
  local_60 = -local_50;
  fStack_5c = -fStack_4c;
  local_58 = -local_48;
  fVar4 = *param_6;
  fVar5 = param_6[1];
  fVar6 = param_6[2];
  local_70 = -(*param_5 * fVar4 + param_5[1] * fVar5 + param_5[2] * fVar6);
  fStack_6c = -(fVar4 * param_5[3] + fVar5 * param_5[4] + fVar6 * param_5[5]);
  local_68 = -(fVar4 * param_5[6] + fVar5 * param_5[7] + fVar6 * param_5[8]);
  fVar5 = param_4[1] - param_5[10];
  fVar4 = *param_4 - param_5[9];
  fVar6 = param_4[2] - param_5[0xb];
  local_80 = fVar4 * *param_5 + fVar5 * param_5[1] + fVar6 * param_5[2];
  fStack_7c = fVar4 * param_5[3] + fVar5 * param_5[4] + fVar6 * param_5[5];
  local_78 = fVar4 * param_5[6] + fVar5 * param_5[7] + fVar6 * param_5[8];
  iVar3 = FUN_00239e60(&local_60,&local_50,&local_80,&local_70,&local_84,auStack_88);
  if ((iVar3 != -1) && (local_84 < param_1 + param_2)) {
    uVar2 = *(uint *)(param_3 + 0x1000);
    if (uVar2 < 0x40) {
      fVar7 = param_6[1];
      fVar5 = param_6[2];
      fVar6 = *param_6;
      pfVar1 = (float *)(param_3 + (ulong)uVar2 * 0x40);
      fVar9 = param_4[1];
      fVar4 = param_4[2];
      fVar8 = *param_4;
      *(uint *)(param_3 + 0x1000) = uVar2 + 1;
      pfVar1[2] = fVar5;
      pfVar1[1] = fVar7;
      *pfVar1 = fVar6;
      pfVar1[0xd] = -NAN;
      pfVar1[4] = fVar8 - local_84 * fVar6;
      pfVar1[5] = fVar9 - local_84 * fVar7;
      pfVar1[6] = fVar4 - local_84 * fVar5;
      pfVar1[3] = local_84 - param_1;
    }
  }
  fVar6 = param_4[5] - param_5[0xb];
  fVar4 = param_4[3] - param_5[9];
  fVar5 = param_4[4] - param_5[10];
  local_80 = fVar4 * *param_5 + fVar5 * param_5[1] + fVar6 * param_5[2];
  fStack_7c = fVar4 * param_5[3] + fVar5 * param_5[4] + fVar6 * param_5[5];
  local_78 = fVar4 * param_5[6] + fVar5 * param_5[7] + fVar6 * param_5[8];
  iVar3 = FUN_00239e60(&local_60,&local_50,&local_80,&local_70,&local_84,auStack_88);
  if ((iVar3 != -1) && (local_84 < param_1 + param_2)) {
    uVar2 = *(uint *)(param_3 + 0x1000);
    if (uVar2 < 0x40) {
      fVar7 = param_6[1];
      fVar5 = param_6[2];
      fVar6 = *param_6;
      pfVar1 = (float *)(param_3 + (ulong)uVar2 * 0x40);
      fVar9 = param_4[4];
      fVar4 = param_4[5];
      fVar8 = param_4[3];
      *(uint *)(param_3 + 0x1000) = uVar2 + 1;
      pfVar1[2] = fVar5;
      pfVar1[1] = fVar7;
      *pfVar1 = fVar6;
      pfVar1[0xd] = -NAN;
      pfVar1[4] = fVar8 - local_84 * fVar6;
      pfVar1[5] = fVar9 - local_84 * fVar7;
      pfVar1[6] = fVar4 - local_84 * fVar5;
      pfVar1[3] = local_84 - param_1;
    }
  }
  return;
}


