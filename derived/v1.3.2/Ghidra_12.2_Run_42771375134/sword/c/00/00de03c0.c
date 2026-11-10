/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de03c0; name: FUN_00de03c0
 */


bool FUN_00de03c0(float *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  if (3 < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[(long)(int)param_3 * 8 + 8] == 2.8026e-45) {
    fVar2 = param_1[(long)(int)param_3 * 8 + 10];
    if (param_1[(long)(int)param_3 * 8 + 10] <= param_1[(long)(int)param_3 * 8 + 9]) {
      fVar2 = param_1[(long)(int)param_3 * 8 + 9];
    }
  }
  else {
    if (param_1[(long)(int)param_3 * 8 + 8] != 1.4013e-45) {
      return true;
    }
    fVar2 = param_1[(long)(int)param_3 * 8 + 9];
  }
  fVar3 = (float)*param_2 - *param_1;
  fVar4 = (float)param_2[1] - param_1[2];
  fVar5 = (float)((ulong)param_2[1] >> 0x20) - param_1[3];
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = fVar3;
  auVar6._8_4_ = fVar4;
  auVar6._12_4_ = fVar5;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = fVar3;
  auVar1._8_4_ = fVar4;
  auVar1._12_4_ = fVar5;
  auVar6 = NEON_ext(auVar6,auVar1,8,1);
  return auVar6._0_4_ + fVar3 + auVar6._4_4_ + 0.0 <= (fVar2 + fVar2) * (fVar2 + fVar2);
}


