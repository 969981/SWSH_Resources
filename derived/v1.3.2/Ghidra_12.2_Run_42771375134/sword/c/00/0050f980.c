/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050f980; name: FUN_0050f980
 */


void FUN_0050f980(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7,uint param_8,uint param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0;
  if ((param_9 & 1) == 0) {
    fVar3 = -1.0;
  }
  *param_7 = (param_5 + param_5) / (param_2 - param_1);
  param_7[5] = (param_5 + param_5) / (param_4 - param_3);
  param_7[8] = fVar3 * ((param_1 + param_2) / (param_1 - param_2));
  param_7[9] = fVar3 * ((param_3 + param_4) / (param_3 - param_4));
  if ((param_8 & 1) == 0) {
    fVar1 = param_6 / (param_6 - param_5);
    fVar2 = -(param_5 * param_6) / (param_6 - param_5);
  }
  else {
    fVar1 = (param_5 + param_6) / (param_6 - param_5);
    fVar2 = (param_6 * -2.0 * param_5) / (param_6 - param_5);
  }
  param_7[0xe] = fVar2;
  param_7[0xf] = 0.0;
  param_7[0xc] = 0.0;
  param_7[0xd] = 0.0;
  param_7[6] = 0.0;
  param_7[7] = 0.0;
  param_7[3] = 0.0;
  param_7[4] = 0.0;
  param_7[10] = fVar3 * fVar1;
  param_7[0xb] = fVar3;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  return;
}


