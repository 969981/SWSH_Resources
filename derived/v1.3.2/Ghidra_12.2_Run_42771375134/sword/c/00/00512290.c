/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00512290; name: FUN_00512290
 */


void FUN_00512290(float param_1,uint param_2,long param_3,uint param_4)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0;
  if ((param_4 & 1) != 0) {
    fVar3 = 1.0 / (param_1 * DAT_01d4bbc8);
  }
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      fVar2 = expf(-((1.0 / ((param_1 + param_1) * param_1)) * (float)(int)uVar1 * (float)(int)uVar1
                    ));
      *(float *)(param_3 + uVar1 * 4) = fVar3 * fVar2;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
  }
  return;
}


