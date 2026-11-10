/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00510350; name: FUN_00510350
 */


void FUN_00510350(float param_1,float param_2,float param_3,float *param_4)

{
  *param_4 = param_1;
  param_4[5] = param_2;
  param_4[10] = param_3;
  param_4[0xb] = 0.0;
  param_4[3] = 0.0;
  param_4[4] = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[6] = 0.0;
  param_4[7] = 0.0;
  param_4[8] = 0.0;
  param_4[9] = 0.0;
  param_4[0xf] = 1.0;
  param_4[0xc] = (1.0 - param_1) * 0.5;
  param_4[0xd] = (1.0 - param_2) * 0.5;
  param_4[0xe] = (1.0 - param_3) * 0.5;
  return;
}


