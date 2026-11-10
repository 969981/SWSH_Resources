/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007101c0; name: FUN_007101c0
 */


void FUN_007101c0(undefined8 *param_1)

{
  float fVar1;
  
  fVar1 = (float)((ulong)param_1[1] >> 0x20) * (float)*param_1 -
          (float)((ulong)*param_1 >> 0x20) * (float)param_1[1];
  fVar1 = fVar1 + fVar1;
  if (ABS(fVar1) <= DAT_01d4be60) {
    if (0.0 <= fVar1) {
      if (fVar1 <= DAT_01d4bfe0) {
        fVar1 = 1.0 - fVar1 * fVar1;
        if (NAN(SQRT(fVar1))) {
          sqrtf(fVar1);
        }
      }
      else {
        fVar1 = 1.0 - fVar1 * fVar1;
        if (NAN(SQRT(fVar1))) {
          sqrtf(fVar1);
        }
      }
    }
    else if (DAT_01d4c778 <= fVar1) {
      fVar1 = 1.0 - fVar1 * fVar1;
      if (NAN(SQRT(fVar1))) {
        sqrtf(fVar1);
      }
    }
    else {
      fVar1 = 1.0 - fVar1 * fVar1;
      if (NAN(SQRT(fVar1))) {
        sqrtf(fVar1);
      }
    }
  }
  return;
}


