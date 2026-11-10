/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00528d70; name: FUN_00528d70
 */


undefined8
FUN_00528d70(float param_1,float param_2,long param_3,float *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_5 == 6) {
    param_5 = *(int *)(param_3 + 0x5c);
  }
  if (param_6 == 6) {
    param_6 = *(int *)(param_3 + 0x5c);
    cVar3 = *(char *)(param_3 + 0x895);
  }
  else {
    cVar3 = *(char *)(param_3 + 0x895);
  }
  if (cVar3 != '\0') {
    FUN_005282d0(param_3);
  }
  if (param_5 == param_6) {
    fVar4 = 0.0;
    fVar7 = 1.0;
  }
  else {
    fVar5 = *(float *)(param_3 + 0x6c4);
    fVar8 = *(float *)(param_3 + 0x6c8);
    iVar1 = param_5;
    if (param_6 <= param_5) {
      iVar1 = param_6;
    }
    iVar2 = param_5;
    if (param_5 <= param_6) {
      iVar2 = param_6;
    }
    if (*(char *)(param_3 + 0x895) != '\0') {
      FUN_005282d0(param_3);
    }
    fVar4 = 0.0;
    fVar7 = 1.0;
    if ((iVar1 < 1) && (0 < iVar2)) {
      fVar7 = ((fVar8 - fVar5) * *(float *)(param_3 + 0x1064)) / (fVar5 * fVar8);
      fVar4 = (1.0 - *(float *)(param_3 + 0x1064) / fVar5) + fVar7 * 0.0;
    }
    if ((iVar1 < 2) && (1 < iVar2)) {
      fVar7 = fVar7 * *(float *)(param_3 + 0x1054);
      fVar4 = fVar4 * *(float *)(param_3 + 0x1054) + *(float *)(param_3 + 0x1058);
    }
    if ((iVar1 < 3) && (2 < iVar2)) {
      fVar8 = *(float *)(param_3 + 0x105c);
      fVar5 = *(float *)(param_3 + 0x1060);
      if (*(char *)(param_3 + 0x895) != '\0') {
        FUN_005282d0(param_3);
      }
      fVar6 = 0.0;
      if (*(char *)(param_3 + 0x1050) != '\0') {
        fVar6 = *(float *)(*(long *)(param_3 + 0x1a0) + 0x1e4);
      }
      fVar7 = fVar7 * fVar8 * fVar6;
      fVar4 = (fVar4 * fVar8 + fVar5) * fVar6 + 0.0;
    }
    if (param_6 <= param_5) {
      fVar4 = -fVar4 / fVar7;
      fVar7 = 1.0 / fVar7;
    }
  }
  if ((param_1 != 1.0) || (param_2 != 0.0)) {
    fVar5 = (param_2 / param_1) * fVar7;
    fVar7 = (1.0 / param_1) * fVar7;
    fVar4 = fVar4 - fVar5;
  }
  *param_4 = fVar7;
  param_4[1] = fVar4;
  param_4[2] = 1.0 / fVar7;
  param_4[3] = -fVar4 / fVar7;
  return 0;
}


