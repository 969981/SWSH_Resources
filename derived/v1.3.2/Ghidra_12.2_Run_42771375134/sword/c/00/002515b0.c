/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002515b0; name: FUN_002515b0
 */


void FUN_002515b0(long param_1,int param_2,uint param_3,uint param_4,uint param_5,float *param_6,
                 float *param_7)

{
  long lVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar5 = 0;
  uVar6 = 0;
  fVar2 = 0.0;
  param_2 = param_3 * -3 + param_2;
  if (param_2 == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    fVar10 = *(float *)(lVar1 + 0x14);
    fVar7 = *(float *)(lVar1 + 0x10) * (float)(int)*(short *)(lVar3 + (ulong)param_3 * 4);
    fVar9 = *(float *)(lVar1 + 0x18) * (float)param_5;
    fVar11 = *(float *)(lVar1 + 0x10) *
             (float)(int)*(short *)(lVar3 + (ulong)(*(int *)(*(long *)(param_1 + 0x10) + 0x3c) +
                                                   param_3) * 4) - fVar7;
    fVar13 = fVar10 * fVar10;
    fVar8 = fVar10 * (float)param_4;
  }
  else {
    if (param_2 == 1) {
      lVar1 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
      lVar4 = *(long *)(lVar1 + 0x50);
      fVar13 = *(float *)(lVar3 + 0x10);
      if (*(char *)(lVar4 + (ulong)param_3 * 4 + 2) < '\0') {
        fVar7 = fVar13 * (float)(int)*(short *)(lVar4 + (ulong)param_3 * 4);
        fVar10 = *(float *)(lVar3 + 0x14);
        fVar2 = *(float *)(lVar3 + 0x18);
        fVar9 = fVar2 * (float)param_5;
        fVar12 = fVar2 * fVar2;
        fVar8 = fVar10 * (float)param_4;
        fVar11 = fVar13 * (float)(int)*(short *)(lVar4 + (ulong)(param_3 + *(int *)(lVar1 + 0x3c) +
                                                                1) * 4) - fVar7;
        fVar13 = fVar10 * fVar10;
      }
      else {
        fVar10 = *(float *)(lVar3 + 0x14);
        fVar12 = *(float *)(lVar3 + 0x18);
        fVar9 = fVar12 * (float)(param_5 + 1);
        fVar7 = fVar13 * (float)(int)*(short *)(lVar4 + (ulong)(param_3 + 1) * 4);
        fVar11 = fVar13 * (float)(int)*(short *)(lVar4 + (ulong)(*(int *)(lVar1 + 0x3c) + param_3) *
                                                         4) - fVar7;
        fVar8 = fVar10 * (float)param_4;
        fVar2 = -fVar12;
        fVar13 = fVar10 * fVar10;
        fVar12 = fVar12 * fVar12;
      }
      fVar13 = fVar13 + fVar12 + fVar11 * fVar11;
      goto LAB_00251790;
    }
    if (param_2 != 0) {
      fVar10 = 0.0;
      fVar11 = 0.0;
      fVar8 = 0.0;
      fVar7 = 0.0;
      fVar9 = 0.0;
      fVar13 = 0.0;
      goto LAB_00251790;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    fVar7 = *(float *)(lVar1 + 0x10) * (float)(int)*(short *)(lVar3 + (ulong)param_3 * 4);
    fVar11 = *(float *)(lVar1 + 0x10) * (float)(int)*(short *)(lVar3 + (ulong)(param_3 + 1) * 4) -
             fVar7;
    fVar8 = *(float *)(lVar1 + 0x14) * (float)param_4;
    fVar10 = 0.0;
    fVar13 = *(float *)(lVar1 + 0x18);
    uVar5 = SUB42(fVar13,0);
    uVar6 = (undefined2)((uint)fVar13 >> 0x10);
    fVar9 = fVar13 * (float)param_5;
    fVar13 = fVar13 * fVar13;
  }
  fVar2 = (float)CONCAT22(uVar6,uVar5);
  fVar13 = fVar13 + fVar11 * fVar11;
LAB_00251790:
  fVar13 = (fVar10 * (*param_6 - fVar8) + fVar11 * (param_6[1] - fVar7) +
           fVar2 * (param_6[2] - fVar9)) / fVar13;
  if (0.0 <= fVar13) {
    if (fVar13 <= 1.0) {
      *param_7 = fVar8 + fVar10 * fVar13;
      param_7[1] = fVar7 + fVar11 * fVar13;
      param_7[2] = fVar9 + fVar2 * fVar13;
      return;
    }
    fVar8 = fVar10 + fVar8;
    fVar7 = fVar11 + fVar7;
    fVar9 = fVar2 + fVar9;
  }
  *param_7 = fVar8;
  param_7[1] = fVar7;
  param_7[2] = fVar9;
  return;
}


