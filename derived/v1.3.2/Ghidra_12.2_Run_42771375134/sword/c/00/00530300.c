/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00530300; name: FUN_00530300
 */


void FUN_00530300(float param_1,float param_2,undefined8 param_3,undefined1 param_4 [16],
                 undefined8 param_5,uint param_6,uint param_7,ulong param_8,ulong param_9,
                 undefined8 param_10)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar5 = param_4._0_4_;
  fVar10 = 0.5;
  if ((param_7 & 1) == 0) {
    fVar10 = 1.0;
  }
  fVar6 = (float)param_3;
  fVar11 = fVar10 * fVar5 * DAT_01d4c554;
  fVar9 = fVar10 * fVar6 * DAT_01d4bed0;
  fVar12 = fVar6 * DAT_01d4bb3c;
  uVar1 = param_4._0_8_;
  if ((param_7 & 1) == 0) {
    fVar8 = fVar5 * DAT_01d4c650;
    fVar13 = fVar12;
    if ((param_8 & 1) != 0) goto LAB_00530450;
  }
  else {
    fVar8 = (fVar5 + fVar5 * DAT_01d4c504) - fVar11;
    fVar13 = fVar10 * fVar12;
    if ((param_8 & 1) != 0) goto LAB_00530450;
    param_2 = param_2 + fVar10 * fVar5 * DAT_01d4bc74;
  }
  fVar15 = fVar13 + param_1;
  if ((param_9 & 1) != 0) {
    fVar15 = (fVar6 - fVar9) - (fVar13 + param_1);
  }
  FUN_0052f5f0(param_3,uVar1,fVar15,param_2 + fVar8,fVar9,fVar11,0,0,param_5,0,param_6 & 1,
               param_7 & 1,param_10);
  fVar8 = fVar10 * fVar5 * DAT_01d4bd44 + fVar8;
LAB_00530450:
  fVar14 = fVar13 + param_1;
  fVar7 = (fVar6 - fVar9) - fVar14;
  fVar15 = fVar11 * DAT_01d4be70;
  fVar5 = fVar14;
  if ((param_9 & 1) != 0) {
    fVar5 = fVar7;
  }
  FUN_0052f5f0(param_3,uVar1,fVar5,param_2 + fVar8,fVar9,fVar15,0,0,param_5,0,param_6 & 1,
               param_7 & 1,param_10);
  fVar15 = fVar15 + fVar8;
  fVar5 = fVar14;
  if ((param_9 & 1) != 0) {
    fVar5 = fVar7;
  }
  uVar4 = 1;
  if ((param_8 & 1) != 0) {
    uVar4 = 2;
  }
  FUN_0052f5f0(param_3,uVar1,fVar5,param_2 + fVar15,fVar9,fVar11,0,0,param_5,uVar4,param_6 & 1,
               param_7 & 1,param_10);
  if ((param_8 & 1) == 0) {
    bVar2 = (param_7 & 1) == 0;
    fVar5 = -1.0;
    if (bVar2) {
      fVar5 = 1.0;
    }
    fVar10 = fVar10 * fVar6 * 0.25;
    fVar15 = fVar5 * fVar11 * DAT_01d4bcb8 + fVar15;
    fVar9 = fVar10 * DAT_01d4c080;
    fVar5 = fVar15 - fVar9;
    if (bVar2) {
      fVar5 = fVar15;
    }
    if ((param_9 & 1) == 0) {
      FUN_0052f5f0(param_3,uVar1,fVar14,fVar5 + param_2,fVar10,fVar10,0,0,param_5,3,param_6 & 1,
                   param_7 & 1,param_10);
      param_1 = fVar13 + fVar9 + param_1;
    }
    else {
      FUN_0052f5f0(param_3,uVar1,(fVar6 - fVar10) - fVar14,fVar5 + param_2,fVar10,fVar10,0,0,param_5
                   ,3,param_6 & 1,param_7 & 1,param_10);
      param_1 = (fVar6 - fVar10 * 0.75) - (fVar13 + fVar9 + param_1);
    }
    fVar9 = fVar10 * 0.75;
    param_2 = fVar5 + fVar10 * 0.25 + param_2;
    uVar3 = 4;
    fVar5 = 0.0;
    fVar10 = fVar9;
  }
  else {
    uVar3 = 5;
    fVar5 = fVar9 * DAT_01d4be10 * DAT_01d4c310;
    if ((param_7 & 1) == 0) {
      fVar5 = fVar11 * DAT_01d4bcb8;
    }
    param_1 = fVar10 * fVar12 + param_1;
    param_2 = param_2 + fVar5 + fVar15;
    if ((param_9 & 1) != 0) {
      param_1 = (fVar6 - fVar9) - param_1;
    }
    fVar10 = fVar9 * DAT_01d4be10;
    fVar5 = DAT_01d4be10;
  }
  FUN_0052f5f0(param_3,uVar1,param_1,param_2,fVar9,fVar10,0,fVar5,param_5,uVar3,param_6 & 1,
               param_7 & 1,param_10);
  return;
}


