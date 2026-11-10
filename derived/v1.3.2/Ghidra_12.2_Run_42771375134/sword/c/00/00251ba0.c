/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00251ba0; name: FUN_00251ba0
 */


void FUN_00251ba0(long param_1,int param_2,uint param_3,uint param_4,uint param_5,float *param_6,
                 float *param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  float fVar8;
  
  param_2 = param_3 * -3 + param_2;
  if (param_2 == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    fVar3 = *(float *)(lVar1 + 0x10);
    fVar4 = *(float *)(lVar1 + 0x14);
    sVar7 = *(short *)(lVar5 + (ulong)(*(int *)(*(long *)(param_1 + 0x10) + 0x3c) + param_3) * 4);
    fVar2 = fVar3 * (float)(int)*(short *)(lVar5 + (ulong)param_3 * 4);
    param_6[2] = *(float *)(lVar1 + 0x18) * (float)param_5;
    *param_6 = fVar4 * (float)param_4;
    param_6[1] = fVar2;
    *param_7 = fVar4;
    param_7[1] = fVar3 * (float)(int)sVar7 - fVar2;
    param_7[2] = 0.0;
  }
  else {
    if (param_2 == 1) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(param_1 + 0x18);
      lVar6 = *(long *)(lVar1 + 0x50);
      fVar2 = *(float *)(lVar5 + 0x10);
      if (*(char *)(lVar6 + (ulong)param_3 * 4 + 2) < '\0') {
        sVar7 = *(short *)(lVar6 + (ulong)(param_3 + *(int *)(lVar1 + 0x3c) + 1) * 4);
        fVar3 = fVar2 * (float)(int)*(short *)(lVar6 + (ulong)param_3 * 4);
        fVar4 = *(float *)(lVar5 + 0x14);
        fVar8 = *(float *)(lVar5 + 0x18);
        param_6[2] = fVar8 * (float)param_5;
        *param_6 = fVar4 * (float)param_4;
        param_6[1] = fVar3;
        *param_7 = fVar4;
        param_7[1] = fVar2 * (float)(int)sVar7 - fVar3;
        param_7[2] = fVar8;
        return;
      }
      fVar4 = *(float *)(lVar5 + 0x14);
      fVar8 = *(float *)(lVar5 + 0x18);
      sVar7 = *(short *)(lVar6 + (ulong)(*(int *)(lVar1 + 0x3c) + param_3) * 4);
      fVar3 = fVar2 * (float)(int)*(short *)(lVar6 + (ulong)(param_3 + 1) * 4);
      param_6[1] = fVar3;
      *param_6 = fVar4 * (float)param_4;
      param_6[2] = fVar8 * (float)(param_5 + 1);
      *param_7 = fVar4;
      param_7[1] = fVar2 * (float)(int)sVar7 - fVar3;
      param_7[2] = -fVar8;
      return;
    }
    if (param_2 == 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
      fVar8 = *(float *)(lVar1 + 0x18);
      fVar3 = *(float *)(lVar1 + 0x10);
      fVar4 = *(float *)(lVar1 + 0x14);
      sVar7 = *(short *)(lVar5 + (ulong)(param_3 + 1) * 4);
      fVar2 = fVar3 * (float)(int)*(short *)(lVar5 + (ulong)param_3 * 4);
      param_6[1] = fVar2;
      *param_6 = fVar4 * (float)param_4;
      param_6[2] = fVar8 * (float)param_5;
      *param_7 = 0.0;
      param_7[1] = fVar3 * (float)(int)sVar7 - fVar2;
      param_7[2] = fVar8;
      return;
    }
  }
  return;
}


