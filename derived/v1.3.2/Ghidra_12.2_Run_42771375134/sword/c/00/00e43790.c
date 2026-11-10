/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e43790; name: FUN_00e43790
 */


void FUN_00e43790(long param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  if (*(int *)(param_1 + 0x4e8) == 1) {
    *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_1 + 0x4ec);
    return;
  }
  if (*(int *)(param_1 + 0x4e8) == 2) {
    fVar3 = (float)*(undefined8 *)(param_1 + 0x508);
    fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x508) >> 0x20);
    fVar2 = (float)*(undefined8 *)(param_1 + 0x500);
    fVar2 = fVar2 * fVar2;
    fVar3 = fVar3 * fVar3;
    fVar4 = fVar4 * fVar4;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = fVar2;
    auVar5._8_4_ = fVar3;
    auVar5._12_4_ = fVar4;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = fVar2;
    auVar1._8_4_ = fVar3;
    auVar1._12_4_ = fVar4;
    auVar5 = NEON_ext(auVar5,auVar1,8,1);
    *(float *)(param_1 + 0x5bc) = SQRT(auVar5._0_4_ + fVar2 + auVar5._4_4_ + 0.0);
    return;
  }
  *(undefined4 *)(param_1 + 0x5bc) = 0;
  return;
}


