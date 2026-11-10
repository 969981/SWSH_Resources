/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a11f00; name: FUN_00a11f00
 */


float FUN_00a11f00(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = ABS(param_1[2] - param_1[1]);
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  fVar1 = 1.0;
  if (DAT_01d4c708 <= param_1[5]) {
    fVar1 = param_1[5];
  }
  fVar1 = ((*param_1 / fVar2) * ABS(param_1[4] - param_1[3])) / fVar1;
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  return fVar1;
}


