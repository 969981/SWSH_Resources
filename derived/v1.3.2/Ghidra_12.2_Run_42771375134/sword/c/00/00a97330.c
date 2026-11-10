/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a97330; name: FUN_00a97330
 */


void FUN_00a97330(float param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (*(char *)(param_2 + 0x81) == '\0') {
    fVar1 = (float)*(undefined8 *)(param_2 + 0x30) + *(float *)(param_2 + 0x60);
    fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) + *(float *)(param_2 + 100);
    fVar3 = (float)*(undefined8 *)(param_2 + 0x38) + *(float *)(param_2 + 0x68);
    fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20) + *(float *)(param_2 + 0x6c);
    fVar5 = *(float *)(param_2 + 0x58);
    if (*(char *)(param_2 + 0xc1) != '\0') {
      fVar2 = (float)((uint)fVar2 ^ ((uint)fVar2 ^ (uint)fVar5) & -(uint)(fVar2 < fVar5));
    }
    fVar6 = *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x70);
    fVar7 = *(float *)(param_2 + 0x44) + *(float *)(param_2 + 0x74);
    fVar8 = *(float *)(param_2 + 0x48) + *(float *)(param_2 + 0x78);
    fVar9 = *(float *)(param_2 + 0x4c) + *(float *)(param_2 + 0x7c);
    fVar7 = (float)((uint)fVar7 ^
                   ((uint)fVar7 ^ (uint)fVar5) &
                   -(uint)(fVar7 < fVar5 && *(char *)(param_2 + 0xc1) != '\0'));
  }
  else {
    fVar3 = (float)*(undefined8 *)(param_2 + 0xd8);
    fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0xd8) >> 0x20);
    fVar1 = (float)*(undefined8 *)(param_2 + 0xd0);
    fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0xd0) >> 0x20);
    fVar6 = *(float *)(param_2 + 0xe0);
    fVar7 = *(float *)(param_2 + 0xe4);
    fVar8 = *(float *)(param_2 + 0xe8);
    fVar9 = *(float *)(param_2 + 0xec);
  }
  fVar6 = fVar1 - fVar6;
  fVar7 = fVar2 - fVar7;
  fVar8 = fVar3 - fVar8;
  fVar9 = fVar4 - fVar9;
  auVar11._0_4_ = fVar6 * fVar6;
  auVar11._4_4_ = fVar7 * fVar7;
  auVar11._8_4_ = fVar8 * fVar8;
  auVar11._12_4_ = fVar9 * fVar9;
  auVar12 = NEON_ext(auVar11,auVar11,8,1);
  fVar10 = SQRT(auVar12._0_4_ + auVar11._0_4_ + auVar12._4_4_ + auVar11._4_4_);
  fVar5 = DAT_01d4c6ac;
  if (fVar10 != 0.0) {
    fVar5 = fVar10;
  }
  param_1 = param_1 / fVar5;
  param_3[1] = CONCAT44(fVar4 - fVar9 * param_1,fVar3 - fVar8 * param_1);
  *param_3 = CONCAT44(fVar2 - fVar7 * param_1,fVar1 - fVar6 * param_1);
  return;
}


