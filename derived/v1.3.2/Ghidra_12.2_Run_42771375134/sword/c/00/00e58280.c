/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e58280; name: FUN_00e58280
 */


bool FUN_00e58280(long param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  fVar2 = (float)*(undefined8 *)(param_1 + 0xb0) - *param_2;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) - param_2[1];
  fVar4 = (float)*(undefined8 *)(param_1 + 0xb8) - param_2[2];
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) - param_2[3];
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  auVar6._4_4_ = fVar3;
  auVar6._0_4_ = fVar2;
  auVar6._8_4_ = fVar4;
  auVar6._12_4_ = fVar5;
  auVar1._4_4_ = fVar3;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar4;
  auVar1._12_4_ = fVar5;
  auVar6 = NEON_ext(auVar6,auVar1,8,1);
  return auVar6._0_4_ + fVar2 + auVar6._4_4_ + fVar3 <= DAT_01d4bc0c;
}


