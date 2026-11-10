/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00231b90; name: FUN_00231b90
 */


void FUN_00231b90(long *param_1,long *param_2,long param_3,long param_4,uint param_5,long param_6,
                 long param_7,uint param_8,float *param_9)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((param_5 & 1) != 0) {
    *param_1 = param_6;
    *param_2 = param_7;
    return;
  }
  *param_2 = param_4;
  *param_1 = param_3;
  if (param_8 != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      *(char *)(*param_2 + uVar2) = (char)uVar2;
      pfVar3 = (float *)(param_6 + (ulong)*(byte *)(param_7 + uVar2) * 0xc);
      fVar4 = param_9[1];
      uVar2 = uVar2 + 1;
      fVar5 = param_9[2];
      fVar6 = param_9[4];
      fVar7 = param_9[5];
      fVar8 = param_9[7];
      fVar9 = *pfVar3;
      fVar11 = pfVar3[1];
      fVar12 = pfVar3[2];
      fVar10 = param_9[8];
      pfVar3 = (float *)(*param_1 + lVar1);
      lVar1 = lVar1 + 0xc;
      *pfVar3 = fVar9 * *param_9 + fVar11 * param_9[3] + fVar12 * param_9[6];
      pfVar3[1] = fVar9 * fVar4 + fVar11 * fVar6 + fVar12 * fVar8;
      pfVar3[2] = fVar9 * fVar5 + fVar11 * fVar7 + fVar12 * fVar10;
    } while (param_8 != uVar2);
  }
  return;
}


