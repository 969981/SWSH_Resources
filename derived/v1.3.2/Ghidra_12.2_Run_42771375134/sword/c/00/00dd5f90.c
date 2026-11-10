/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd5f90; name: FUN_00dd5f90
 */


bool FUN_00dd5f90(float *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  fVar2 = ((float)*param_2 - *param_1) * (*param_4 - (float)*param_3);
  fVar3 = ((float)param_2[1] - param_1[2]) * (param_4[2] - (float)param_3[1]);
  fVar4 = ((float)((ulong)param_2[1] >> 0x20) - param_1[3]) *
          (param_4[3] - (float)((ulong)param_3[1] >> 0x20));
  auVar5._4_4_ = 0;
  auVar5._0_4_ = fVar2;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = fVar4;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar3;
  auVar1._12_4_ = fVar4;
  auVar5 = NEON_ext(auVar5,auVar1,8,1);
  return auVar5._0_4_ + fVar2 + auVar5._4_4_ + 0.0 == 0.0;
}


