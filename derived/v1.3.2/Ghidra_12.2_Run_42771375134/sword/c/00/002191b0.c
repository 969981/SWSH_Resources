/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002191b0; name: FUN_002191b0
 */


void FUN_002191b0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  float __x;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  float local_60;
  float fStack_5c;
  undefined4 local_58;
  
  uVar1 = *param_2;
  *param_1 = 2;
  param_1[8] = 0;
  fVar4 = (float)param_2[1];
  if (uVar1 != 0) {
    fVar3 = DAT_01d4bdf4 / (float)uVar1;
    __x = 0.0;
    uVar1 = 0;
    do {
      fVar2 = sinf(__x);
      fVar5 = (float)param_2[1];
      fStack_5c = cosf(__x);
      fStack_5c = fVar5 * fStack_5c;
      local_58 = 0;
      local_60 = fVar4 * fVar2;
      FUN_002186d0(param_1,&local_60);
      __x = fVar3 + __x;
      fVar4 = (float)param_2[1];
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  local_70 = 0;
  local_68 = 0;
  local_6c = fVar4;
  FUN_002186d0(param_1,&local_70);
  return;
}


