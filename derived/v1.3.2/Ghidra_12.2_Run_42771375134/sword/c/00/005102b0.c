/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005102b0; name: FUN_005102b0
 */


void FUN_005102b0(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float *pfVar1;
  
  if (param_4 == 0.0) {
    param_5[3] = 0.0;
    param_5[4] = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[6] = 0.0;
    param_5[7] = 0.0;
    param_5[8] = 0.0;
    param_5[9] = 0.0;
    param_5[0xf] = 1.0;
    param_5[10] = 1.0;
    param_5[0xb] = 0.0;
    param_5[5] = 1.0;
    pfVar1 = param_5;
  }
  else {
    pfVar1 = param_5 + 0xf;
    param_5[0xb] = 0.0;
    param_5[3] = 0.0;
    param_5[4] = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[6] = 0.0;
    param_5[7] = 0.0;
    param_5[8] = 0.0;
    param_5[9] = 0.0;
    *param_5 = ((1.0 - param_1) + -1.0) * param_4 + 1.0;
    param_5[5] = ((1.0 - param_2) + -1.0) * param_4 + 1.0;
    param_5[10] = ((1.0 - param_3) + -1.0) * param_4 + 1.0;
  }
  *pfVar1 = 1.0;
  param_5[0xc] = param_1;
  param_5[0xd] = param_2;
  param_5[0xe] = param_3;
  return;
}


