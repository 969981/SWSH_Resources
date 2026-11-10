/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0030cd50; name: FUN_0030cd50
 */


void FUN_0030cd50(float *param_1,undefined8 param_2,undefined4 param_3,float *param_4,
                 undefined1 *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_50;
  undefined4 local_48;
  
  *param_5 = 0;
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 4:
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    param_1[3] = param_4[3];
    break;
  case 3:
    local_50 = 0;
    local_48 = 0x3f800000;
    goto LAB_0030cdec;
  case 5:
    local_50 = 0x3f80000000000000;
    goto LAB_0030cde4;
  case 6:
    local_50 = 0x3f800000;
LAB_0030cde4:
    local_48 = 0;
LAB_0030cdec:
    FUN_0030cee0(param_2,param_1,param_4,&local_50,param_5);
    break;
  case 7:
    fVar2 = param_4[3];
    fVar4 = *param_4;
    fVar3 = (float)param_2;
    if (0.0 <= fVar2) {
      fVar6 = param_4[1];
      fVar5 = param_4[2];
      bVar1 = fVar2 < fVar3;
      *param_5 = bVar1;
    }
    else {
      fVar4 = -fVar4;
      fVar6 = -param_4[1];
      fVar5 = -param_4[2];
      fVar2 = -fVar2;
      bVar1 = fVar2 < fVar3;
      *param_5 = bVar1;
    }
    if (bVar1) {
      fVar2 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
      if (fVar2 <= 0.0) {
        fVar4 = 0.0;
        fVar6 = 0.0;
        fVar5 = 0.0;
      }
      else {
        fVar2 = sqrtf(fVar2);
        fVar2 = 1.0 / fVar2;
        fVar4 = fVar4 * fVar2;
        fVar6 = fVar6 * fVar2;
        fVar5 = fVar5 * fVar2;
      }
      fVar2 = sqrtf(1.0 - fVar3 * fVar3);
      *param_1 = fVar4 * fVar2;
      param_1[1] = fVar6 * fVar2;
      param_1[2] = fVar5 * fVar2;
      param_1[3] = fVar3;
    }
    else {
      *param_1 = fVar4;
      param_1[1] = fVar6;
      param_1[2] = fVar5;
      param_1[3] = fVar2;
    }
    break;
  default:
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
  }
  return;
}


