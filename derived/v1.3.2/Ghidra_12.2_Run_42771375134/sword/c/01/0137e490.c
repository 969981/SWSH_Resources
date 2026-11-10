/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137e490; name: FUN_0137e490
 */


void FUN_0137e490(float param_1,long param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_2 + 0xb4);
  *(float *)(param_2 + 0xb0) = param_1;
  if (iVar1 < 5) {
    if (*(float *)(param_2 + 0x7c) <= 0.0) {
      param_1 = 0.0;
    }
    else {
      param_1 = param_1 / *(float *)(param_2 + 0x7c);
    }
    if (*(float *)(&DAT_0216c56c + (long)(iVar1 + -1) * 8) < param_1) {
      FUN_0137e200(param_2);
      iVar1 = *(int *)(param_2 + 0xb4);
    }
    if (iVar1 < 2) {
      return;
    }
  }
  if (*(float *)(param_2 + 0x7c) <= 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_2 + 0xb0) / *(float *)(param_2 + 0x7c);
  }
  if ((float)(&DAT_0216c560)[(long)iVar1 * 2] <= fVar2) {
    return;
  }
  FUN_0137e350(param_2);
  return;
}


