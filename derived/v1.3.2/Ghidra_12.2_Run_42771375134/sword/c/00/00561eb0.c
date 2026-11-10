/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00561eb0; name: FUN_00561eb0
 */


void FUN_00561eb0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_3;
  if ((fVar2 < 1.0) && (fVar1 = param_3[1], fVar1 < 1.0)) {
    fVar2 = ((1.0 / fVar2) * (*param_2 - fVar2 * 0.5)) / (1.0 / fVar2 + -1.0);
    fVar3 = fVar2 + fVar2 + -1.0;
    fVar2 = ((1.0 / fVar1) * (param_2[1] - fVar1 * 0.5)) / (1.0 / fVar1 + -1.0);
    fVar2 = fVar2 + fVar2 + -1.0;
    fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
    if ((fVar2 == 0.0) || (fVar2 == 1.0)) {
      fVar1 = *param_4;
      if (fVar2 <= fVar1) goto LAB_00561fac;
    }
    else {
      fVar3 = SQRT(fVar2);
      if (NAN(fVar3)) {
        fVar2 = sqrtf(fVar2);
        fVar1 = *param_4;
        if (fVar2 <= fVar1) {
LAB_00561fac:
          fVar2 = 1.0;
          goto LAB_00561f84;
        }
      }
      else {
        fVar1 = *param_4;
        fVar2 = fVar3;
        if (fVar3 <= fVar1) goto LAB_00561fac;
      }
    }
    if (fVar2 < 1.0) {
      fVar2 = (1.0 - fVar2) / (1.0 - fVar1);
      goto LAB_00561f84;
    }
  }
  fVar2 = 0.0;
LAB_00561f84:
  *param_1 = fVar2;
  param_1[1] = fVar2;
  param_1[2] = fVar2;
  param_1[3] = fVar2;
  return;
}


