/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a81d20; name: FUN_00a81d20
 */


void FUN_00a81d20(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (float)*param_3 - (float)*param_2;
  fVar4 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar5 = (float)param_3[1] - (float)param_2[1];
  fVar2 = (float)FUN_00a81e00(CONCAT44(fVar4,fVar1),fVar5);
  fVar6 = (float)((ulong)*param_4 >> 0x20);
  fVar3 = fVar2 + DAT_01d4c6ec;
  if (fVar2 - fVar6 <= DAT_01d4c284) {
    fVar3 = fVar2;
  }
  fVar2 = fVar3 + DAT_01d4bef8;
  if (DAT_01d4c4ec <= fVar3 - fVar6) {
    fVar2 = fVar3;
  }
  param_4[1] = param_4[1];
  *param_4 = CONCAT44(fVar2,(int)*param_4);
  if ((param_5 & 1) != 0) {
    fVar3 = fVar1 * fVar1 + fVar5 * fVar5;
    fVar1 = SQRT(fVar3);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar3);
    }
    fVar3 = (float)FUN_00a81e00(fVar4,fVar1);
    param_4[1] = param_4[1];
    *param_4 = CONCAT44((int)((ulong)*param_4 >> 0x20),-fVar3);
  }
  return;
}


