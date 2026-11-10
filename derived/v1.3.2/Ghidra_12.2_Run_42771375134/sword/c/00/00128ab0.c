/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00128ab0; name: FUN_00128ab0
 */


undefined8 FUN_00128ab0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  
  if (((*(ushort *)(param_3 + 3) | *(ushort *)(param_2 + 3)) & 1) != 0) {
    return 0;
  }
  fVar4 = 0.0;
  bVar2 = *(byte *)((long)param_2 + 0xe) >> 4;
  bVar3 = *(byte *)((long)param_3 + 0xe) >> 4;
  if (bVar3 <= bVar2) {
    bVar3 = bVar2;
  }
  fVar5 = 0.0;
  switch(bVar3) {
  case 0:
    fVar5 = (param_2[1] + param_3[1]) * 0.5;
    fVar4 = (*param_2 + *param_3) * 0.5;
    break;
  case 1:
    fVar4 = *param_2;
    if (*param_3 <= *param_2) {
      fVar4 = *param_3;
    }
    fVar5 = param_2[1];
    if (param_3[1] <= param_2[1]) {
      fVar5 = param_3[1];
    }
    break;
  case 2:
    fVar5 = param_2[1] * param_3[1];
    fVar4 = *param_2 * *param_3;
    break;
  case 3:
    fVar4 = *param_2;
    if (*param_2 <= *param_3) {
      fVar4 = *param_3;
    }
    fVar5 = param_2[1];
    if (param_2[1] <= param_3[1]) {
      fVar5 = param_3[1];
    }
  }
  fVar4 = fVar4 * param_1[1];
  fVar1 = fVar5 * *param_1;
  if (fVar5 * *param_1 - fVar4 < 0.0) {
    fVar1 = fVar4;
  }
  return CONCAT44(fVar4,fVar1);
}


