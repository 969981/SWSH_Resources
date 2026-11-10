/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00578590; name: FUN_00578590
 */


/* WARNING: Removing unreachable block (ram,0x00578654) */

undefined8
FUN_00578590(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,int param_9,float *param_10,float *param_11,float *param_12,
            float *param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_34;
  
  if ((0.0 < param_4) && (param_4 <= DAT_01d4bb38)) {
    if (param_1 < param_4) {
      if (param_1 <= param_5) {
        local_34 = -param_3;
      }
      else {
        local_34 = ((param_1 - param_4) / (param_4 - param_5)) * param_3;
      }
      fVar1 = 1.0 - (param_1 - param_5) / param_4;
      fVar2 = 0.0;
      if (0.0 <= fVar1) {
        fVar2 = fVar1;
      }
      fVar2 = tanf(fVar2 * param_7);
      fVar2 = powf(fVar2,DAT_01d4bd24);
      param_1 = atanf(fVar2);
      goto LAB_00578684;
    }
    if (param_1 < param_6) {
      fVar2 = powf((param_1 - param_4) / (param_6 - param_4),DAT_01d4bd24);
      param_3 = fVar2 * param_3;
    }
  }
  local_34 = param_3;
LAB_00578684:
  fVar4 = 1.0;
  fVar2 = param_2 * param_2 + 1.0;
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar2 = tanf(param_1 * 0.5);
  fVar3 = atanf(fVar2 * param_2);
  fVar2 = atanf(fVar1 * fVar2);
  if (param_9 != 0) {
    if (param_9 == 2) {
      param_1 = fVar2 + fVar2;
      fVar4 = 1.0 / fVar1;
      param_2 = fVar4 * param_2;
    }
    else if (param_9 == 1) {
      param_1 = fVar3 + fVar3;
      fVar4 = 1.0 / param_2;
      param_2 = 1.0;
    }
    else {
      param_1 = 0.0;
      param_2 = 0.0;
      fVar4 = 0.0;
    }
  }
  fVar2 = tanf(param_1 * 0.5);
  fVar2 = atanf(fVar2 * param_8);
  if (param_10 != (float *)0x0) {
    *param_10 = fVar2 + fVar2;
  }
  if (param_11 != (float *)0x0) {
    *param_11 = param_2 / param_8;
    *param_12 = fVar4 / param_8;
  }
  if (param_13 != (float *)0x0) {
    *param_13 = local_34;
  }
  return 0;
}


