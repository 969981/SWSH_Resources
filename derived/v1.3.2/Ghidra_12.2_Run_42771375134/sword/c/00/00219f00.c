/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00219f00; name: FUN_00219f00
 */


void FUN_00219f00(float param_1,float param_2,undefined8 param_3,float *param_4,undefined8 param_5,
                 uint param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  fVar4 = DAT_01d4c058;
  if (param_1 != 0.0) {
    fVar7 = param_4[3];
    fVar3 = *param_4;
    fVar5 = fVar3 + fVar3;
    fVar9 = fVar7 + fVar7;
    fVar10 = param_4[4] + (fVar3 * fVar5 + fVar7 * fVar9 + -1.0) * param_2;
    fVar11 = param_4[5] + (param_4[2] * fVar9 + fVar5 * param_4[1]) * param_2;
    fVar12 = param_4[6] + (fVar5 * param_4[2] - fVar9 * param_4[1]) * param_2;
    fVar3 = sinf(DAT_01d4c058);
    fVar4 = cosf(fVar4);
    fVar7 = param_4[2];
    fVar9 = param_4[3];
    fVar6 = *param_4;
    fVar8 = param_4[1];
    fVar5 = fVar3 * 0.0;
    fStack_7c = (fVar3 * fVar9 + fVar4 * fVar8 + fVar5 * fVar7) - fVar5 * fVar6;
    local_80 = (fVar5 * fVar9 + fVar4 * fVar6 + fVar5 * fVar8) - fVar3 * fVar7;
    local_78 = (fVar3 * fVar6 + fVar5 * fVar9 + fVar4 * fVar7) - fVar5 * fVar8;
    fStack_74 = ((fVar4 * fVar9 - fVar5 * fVar6) - fVar3 * fVar8) - fVar5 * fVar7;
    uVar1 = 0xffff0000;
    if ((param_6 & 1) == 0) {
      uVar1 = 0xff808080;
    }
    local_70 = fVar10;
    fStack_6c = fVar11;
    local_68 = fVar12;
    FUN_00218580(param_3,uVar1);
    local_a0 = 0;
    local_98 = 0x3f80000000000000;
    local_90 = 0;
    local_88 = 0.0;
    FUN_00218620(param_3,&local_a0);
    fVar4 = param_4[4];
    local_a0 = *(undefined8 *)(param_4 + 4);
    fVar11 = fVar11 - param_4[5];
    fVar10 = fVar10 - fVar4;
    fVar3 = param_4[6];
    fVar12 = fVar12 - fVar3;
    local_98 = CONCAT44(fVar4 + fVar10,fVar3);
    local_90 = CONCAT44(fVar3 + fVar12,param_4[5] + fVar11);
    local_88 = sqrtf(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
    local_88 = local_88 * DAT_01d4bacc;
    FUN_00218e10(param_3,&local_a0);
    uVar2 = FUN_00218620(param_3,&local_80);
    local_a0 = CONCAT44(param_1 * DAT_01d4c774,0x14);
    FUN_002191b0(uVar2,&local_a0);
  }
  return;
}


