/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f08a0; name: FUN_001f08a0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001f08a0(long param_1,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  undefined1 local_58;
  
  FUN_001f0ad0();
  pbVar1 = (byte *)(*(long *)(PTR_DAT_02711068 +
                             (ulong)(*(uint *)(param_1 + 0x68) >> 0x18 & 0xf) * 8 + 0x30) + param_1
                   + 0x6c);
  if ((*(uint *)(param_1 + 0x68) & 1) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x70);
  }
  if ((*pbVar1 & 1) == 0) {
    return;
  }
  fVar6 = (float)(**(code **)(*param_3 + 0x268))(param_3,0);
  fVar7 = (float)(**(code **)(*param_3 + 0x268))(param_3,3);
  if (fVar6 * fVar7 == 0.0) {
    return;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    fVar6 = *(float *)(param_1 + 0x174) / *(float *)(param_3 + 0x444);
    if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    uVar4 = (uint)(fVar6 * DAT_01d4c154);
    uVar5 = uVar4 | uVar4 << 8 | uVar4 << 0x10;
    uVar4 = *(uint *)(param_1 + 0x17c);
  }
  else {
    uVar5 = 0xff0000;
    uVar4 = *(uint *)(param_1 + 0x17c);
  }
  if ((uVar4 >> 1 & 1) == 0) {
    pfVar2 = (float *)FUN_003be160(param_1 + 0x80);
    uVar4 = *(uint *)(param_1 + 0x17c);
  }
  else {
    pfVar2 = (float *)(*(long *)(param_1 + 0x70) + 0xa8);
  }
  fVar7 = pfVar2[2];
  fVar6 = 0.0;
  if (*pfVar2 != 0.0) {
    fVar6 = 1.0 / *pfVar2;
  }
  if (pfVar2[1] == 0.0) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    if (fVar7 != 0.0) {
      fVar10 = 1.0 / fVar7;
    }
  }
  else {
    fVar9 = 1.0 / pfVar2[1];
    fVar10 = 0.0;
    if (fVar7 != 0.0) {
      fVar10 = 1.0 / fVar7;
    }
  }
  if ((uVar4 & 1) == 0) {
    fVar7 = (float)FUN_003be0e0(param_1 + 0x80);
  }
  else {
    fVar7 = *(float *)(*(long *)(param_1 + 0x70) + 0xa4);
  }
  fVar7 = 6.0 / (1.0 / fVar7);
  fVar6 = fVar6 * fVar7;
  fVar9 = fVar9 * fVar7;
  fVar10 = fVar10 * fVar7;
  fVar7 = fabsf(fVar10 + (fVar9 - fVar6));
  fVar7 = sqrtf(fVar7);
  fVar8 = fabsf(fVar10 + (fVar6 - fVar9));
  fVar8 = sqrtf(fVar8);
  fVar6 = fabsf((fVar6 + fVar9) - fVar10);
  fVar6 = sqrtf(fVar6);
  uVar3 = FUN_00218580(param_2,uVar5);
  uVar3 = FUN_00218620(uVar3,param_1 + 0x140);
  local_60 = fVar8 * 0.5;
  fStack_64 = fVar7 * 0.5;
  local_70 = fVar7 * -0.5;
  fStack_6c = fVar8 * -0.5;
  local_68 = fVar6 * -0.5;
  fStack_5c = fVar6 * 0.5;
  local_58 = 1;
  FUN_00218ad0(uVar3,&local_70);
  return;
}


