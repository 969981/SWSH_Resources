/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050fdb0; name: FUN_0050fdb0
 */


void FUN_0050fdb0(long param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float __x;
  float fVar2;
  float fVar3;
  
  fVar1 = atan2f(*(float *)(param_1 + 4),*(float *)(param_1 + 0x14));
  __x = asinf(-*(float *)(param_1 + 0x24));
  fVar2 = atan2f(*(float *)(param_1 + 0x20),*(float *)(param_1 + 0x28));
  fVar3 = cosf(__x);
  if (ABS(fVar3) < DAT_01d4c1cc) {
    fVar3 = DAT_01d4bb38;
    if (*(float *)(param_1 + 4) <= 0.0) {
      fVar3 = DAT_01d4be68;
    }
    fVar1 = fVar1 + fVar3;
    fVar3 = DAT_01d4bb38;
    if (*(float *)(param_1 + 0x20) <= 0.0) {
      fVar3 = DAT_01d4be68;
    }
    fVar2 = fVar2 + fVar3;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar2;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = __x;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar1;
  }
  return;
}


