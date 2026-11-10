/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00234f30; name: FUN_00234f30
 */


void FUN_00234f30(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  fVar5 = *param_2;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fStack_8c = fVar1 * 0.5 + param_1[1];
  local_90 = fVar5 * 0.5 + *param_1;
  local_88 = fVar2 * 0.5 + param_1[2];
  local_80 = fVar5;
  fStack_7c = fVar1;
  local_78 = fVar2;
  fVar3 = sqrtf(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar6 = 0.0;
  if (fVar3 == 0.0) {
    fVar7 = 0.0;
    local_b4 = fVar3;
  }
  else {
    fVar7 = 1.0 / fVar3;
    local_80 = fVar7 * fVar5;
    fStack_7c = fVar7 * fVar1;
    local_78 = fVar7 * fVar2;
    local_b4 = fVar3 * 0.5;
  }
  fVar5 = *param_4;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fStack_ac = fVar1 * 0.5 + param_3[1];
  local_b0 = fVar5 * 0.5 + *param_3;
  local_a8 = fVar2 * 0.5 + param_3[2];
  local_a0 = fVar5;
  fStack_9c = fVar1;
  local_98 = fVar2;
  fVar4 = sqrtf(fVar5 * fVar5 + fVar1 * fVar1 + fVar2 * fVar2);
  if (fVar4 == 0.0) {
    fVar5 = fVar4;
  }
  else {
    fVar6 = 1.0 / fVar4;
    local_a0 = fVar6 * fVar5;
    fStack_9c = fVar6 * fVar1;
    local_98 = fVar6 * fVar2;
    fVar5 = fVar4 * 0.5;
  }
  FUN_00234860(local_b4,fVar5,&local_90,&local_80,&local_b0,&local_a0,param_5,param_6);
  if (param_5 != (float *)0x0) {
    if (fVar3 == 0.0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = fVar7 * (local_b4 + *param_5);
    }
    *param_5 = fVar7;
  }
  if (param_6 != (float *)0x0) {
    if (fVar4 == 0.0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = fVar6 * (fVar5 + *param_6);
    }
    *param_6 = fVar6;
  }
  return;
}


