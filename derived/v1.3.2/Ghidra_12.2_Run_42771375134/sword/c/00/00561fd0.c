/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00561fd0; name: FUN_00561fd0
 */


void FUN_00561fd0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 1.0 / *param_3;
  fVar1 = (fVar1 * (*param_2 - *param_3 * 0.5)) / (fVar1 + -1.0);
  fVar2 = 1.0 / param_3[1];
  fVar1 = fVar1 + fVar1 + -1.0;
  fVar2 = (fVar2 * (param_2[1] - param_3[1] * 0.5)) / (fVar2 + -1.0);
  fVar2 = fVar2 + fVar2 + -1.0;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  if ((fVar1 == 0.0) || (fVar1 == 1.0)) {
LAB_005620fc:
    if (1.0 <= fVar1) goto LAB_00562108;
LAB_00562070:
    fVar2 = cosf(fVar1 * DAT_01d4bb38 * *param_4 + DAT_01d4bb38);
    fVar3 = (fVar2 * param_4[1] + 1.0) * 0.5;
    fVar2 = fVar3;
    if (fVar1 <= DAT_01d4be10) goto LAB_0056211c;
  }
  else {
    fVar2 = SQRT(fVar1);
    if (NAN(fVar2)) {
      fVar1 = sqrtf(fVar1);
      goto LAB_005620fc;
    }
    fVar1 = fVar2;
    if (fVar2 < 1.0) goto LAB_00562070;
LAB_00562108:
    fVar2 = 0.0;
    fVar3 = 0.0;
    if (fVar1 <= DAT_01d4be10) goto LAB_0056211c;
  }
  if (1.0 <= fVar1) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (1.0 - fVar1) / DAT_01d4bba4;
    fVar1 = sinf(fVar2 * DAT_01d4bb38);
    fVar2 = fVar2 + fVar1 * fVar1 * DAT_01d4bcb8;
  }
  fVar2 = fVar3 * fVar2;
LAB_0056211c:
  *param_1 = fVar2;
  param_1[1] = fVar2;
  param_1[2] = fVar2;
  param_1[3] = fVar2;
  return;
}


