/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00747fc0; name: FUN_00747fc0
 */


bool FUN_00747fc0(long param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  fVar2 = (float)*(undefined8 *)(param_1 + 0x10) * *(float *)(param_1 + 0x20);
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * *(float *)(param_1 + 0x24);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x18) * *(float *)(param_1 + 0x28);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) * *(float *)(param_1 + 0x2c);
  auVar6._4_4_ = fVar3;
  auVar6._0_4_ = fVar2;
  auVar6._8_4_ = fVar4;
  auVar6._12_4_ = fVar5;
  auVar1._4_4_ = fVar3;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar4;
  auVar1._12_4_ = fVar5;
  auVar6 = NEON_ext(auVar6,auVar1,8,1);
  fVar4 = cosf(*(float *)PTR_FloatPi_02715d90 / 18.0 + *(float *)(*(long *)(param_1 + 0xd0) + 0xd0))
  ;
  return fVar4 < ABS(auVar6._0_4_ + fVar2 + auVar6._4_4_ + fVar3);
}


