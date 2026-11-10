/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f0ad0; name: FUN_001f0ad0
 */


void FUN_001f0ad0(long *param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_00207fc0(param_1 + 5,param_2,param_3,param_1);
  pbVar1 = (byte *)((long)param_1 +
                   *(long *)(PTR_DAT_02711068 +
                            (ulong)(*(uint *)(param_1 + 0xd) >> 0x18 & 0xf) * 8 + 0x30) + 0x6c);
  if ((*(uint *)(param_1 + 0xd) & 1) != 0) {
    pbVar1 = (byte *)param_1[0xe];
  }
  if ((*pbVar1 & 1) == 0) {
    return;
  }
  if (((*(byte *)(param_3 + 0x2428) >> 6 & 1) == 0) || (*(char *)(param_3 + 0x22bc) == '\0')) {
    fVar5 = (float)FUN_003e6620(param_3 + 0x20,0);
    if ((*(byte *)(param_3 + 0x2428) >> 6 & 1) != 0) {
      cVar2 = *(char *)(param_3 + 0x22c7);
      goto joined_r0x001f0b84;
    }
  }
  else {
    fVar5 = *(float *)(param_3 + 0x2228);
    cVar2 = *(char *)(param_3 + 0x22c7);
joined_r0x001f0b84:
    if (cVar2 != '\0') {
      fVar4 = fVar5 * *(float *)(param_3 + 0x2254);
      goto joined_r0x001f0bb8;
    }
  }
  fVar4 = (float)FUN_003e6620(param_3 + 0x20,0xb);
  fVar4 = fVar5 * fVar4;
joined_r0x001f0bb8:
  if (fVar4 != 0.0) {
    (**(code **)(*param_1 + 0xa8))(&local_80,param_1);
    uVar3 = FUN_00218620(param_2,&local_80);
    local_94 = -NAN;
    fStack_90 = -1.7146522e+38;
    local_8c = -1.7014636e+38;
    local_a0 = fVar4;
    fStack_9c = fVar4;
    local_98 = fVar4;
    FUN_002190d0(uVar3,&local_a0);
  }
  if (((*(byte *)(param_3 + 0x2428) >> 6 & 1) == 0) || (*(char *)(param_3 + 0x22be) == '\0')) {
    fVar4 = (float)FUN_003e6620(param_3 + 0x20,2);
  }
  else {
    fVar4 = *(float *)(param_3 + 0x2230);
  }
  fVar4 = fVar5 * fVar4;
  if (fVar4 != 0.0) {
    uVar3 = FUN_00218620(param_2,param_1 + 0x28);
    local_80 = CONCAT44(fVar4,fVar4);
    local_78 = CONCAT44(0xffff0000,fVar4);
    local_70 = 0xff0000ffff00ff00;
    FUN_002190d0(uVar3,&local_80);
  }
  if (((*(byte *)(param_3 + 0x2428) >> 6 & 1) == 0) || (*(char *)(param_3 + 0x22c0) == '\0')) {
    fVar4 = (float)FUN_003e6620(param_3 + 0x20,4);
  }
  else {
    fVar4 = *(float *)(param_3 + 0x2238);
  }
  fVar4 = fVar5 * fVar4;
  if (fVar4 != 0.0) {
    uVar3 = FUN_00218580(param_2,0xffffff);
    local_80 = 0x3f800000;
    local_78 = 0;
    local_70 = 0x3f80000000000000;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0x3f800000;
    local_50 = 0;
    uStack_48 = 0x3f80000000000000;
    uVar3 = FUN_00218590(uVar3,&local_80);
    local_a0 = *(float *)(param_1 + 0x2a);
    fStack_9c = *(float *)((long)param_1 + 0x154);
    fStack_88 = fVar4 * DAT_01d4c554;
    local_94 = fVar4 * *(float *)((long)param_1 + 0x15c) + local_a0;
    local_98 = *(float *)(param_1 + 0x2b);
    fStack_90 = fVar4 * *(float *)(param_1 + 0x2c) + fStack_9c;
    local_8c = fVar4 * *(float *)((long)param_1 + 0x164) + local_98;
    FUN_00218e10(uVar3,&local_a0);
  }
  if (((*(byte *)(param_3 + 0x2428) >> 6 & 1) == 0) || (*(char *)(param_3 + 0x22c1) == '\0')) {
    fVar4 = (float)FUN_003e6620(param_3 + 0x20,5);
  }
  else {
    fVar4 = *(float *)(param_3 + 0x223c);
  }
  fVar5 = fVar5 * fVar4;
  if (fVar5 != 0.0) {
    uVar3 = FUN_00218580(param_2,0);
    local_80 = 0x3f800000;
    local_78 = 0;
    local_70 = 0x3f80000000000000;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0x3f800000;
    local_50 = 0;
    uStack_48 = 0x3f80000000000000;
    uVar3 = FUN_00218590(uVar3,&local_80);
    local_a0 = *(float *)(param_1 + 0x2a);
    fStack_9c = *(float *)((long)param_1 + 0x154);
    fStack_88 = fVar5 * DAT_01d4c554;
    local_94 = fVar5 * *(float *)(param_1 + 0x2d) + local_a0;
    local_98 = *(float *)(param_1 + 0x2b);
    fStack_90 = fVar5 * *(float *)((long)param_1 + 0x16c) + fStack_9c;
    local_8c = fVar5 * *(float *)(param_1 + 0x2e) + local_98;
    FUN_00218e10(uVar3,&local_a0);
  }
  return;
}


