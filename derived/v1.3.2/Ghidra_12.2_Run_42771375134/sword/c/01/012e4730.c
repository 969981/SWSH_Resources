/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e4730; name: FUN_012e4730
 */


void FUN_012e4730(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  float fVar3;
  float __x;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 local_40 [16];
  
  puVar2 = (undefined8 *)FUN_012dcaa0();
  fVar3 = (float)*param_2 - (float)*puVar2;
  __x = (float)param_2[1] - (float)puVar2[1];
  fVar4 = (float)((ulong)param_2[1] >> 0x20) - (float)((ulong)puVar2[1] >> 0x20);
  fVar5 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = fVar5;
  auVar6._8_4_ = __x * __x;
  auVar6._12_4_ = fVar4;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = __x * __x;
  auVar1._12_4_ = fVar4;
  auVar6 = NEON_ext(auVar6,auVar1,8,1);
  if (DAT_01d4c708 < SQRT(auVar6._0_4_ + fVar5 + auVar6._4_4_ + 0.0)) {
    fVar3 = atan2f(fVar3,__x);
    local_40 = FUN_00a92cd0(fVar3,0,ZEXT816(0));
    FUN_012e4b60(param_1,local_40,param_3);
  }
  return;
}


