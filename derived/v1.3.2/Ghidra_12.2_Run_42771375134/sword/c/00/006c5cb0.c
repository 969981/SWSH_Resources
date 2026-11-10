/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c5cb0; name: FUN_006c5cb0
 */


void FUN_006c5cb0(long param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 8) != '\0') {
    fVar10 = (float)param_2[1];
    fVar11 = (float)((ulong)param_2[1] >> 0x20);
    fVar8 = (float)*param_2;
    fVar9 = (float)((ulong)*param_2 >> 0x20);
    fVar4 = (float)uVar1 - fVar8;
    fVar5 = (float)((ulong)uVar1 >> 0x20) - fVar9;
    fVar6 = (float)*(undefined8 *)(param_1 + 0x18) - fVar10;
    fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) - fVar11;
    fVar8 = *param_4 - fVar8;
    fVar9 = param_4[1] - fVar9;
    fVar10 = param_4[2] - fVar10;
    fVar11 = param_4[3] - fVar11;
    fVar4 = fVar4 * fVar4;
    fVar5 = fVar5 * fVar5;
    fVar6 = fVar6 * fVar6;
    fVar7 = fVar7 * fVar7;
    auVar12._4_4_ = fVar5;
    auVar12._0_4_ = fVar4;
    auVar12._8_4_ = fVar6;
    auVar12._12_4_ = fVar7;
    auVar13._4_4_ = fVar5;
    auVar13._0_4_ = fVar4;
    auVar13._8_4_ = fVar6;
    auVar13._12_4_ = fVar7;
    auVar12 = NEON_ext(auVar12,auVar13,8,1);
    fVar8 = fVar8 * fVar8;
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    auVar2._4_4_ = fVar9;
    auVar2._0_4_ = fVar8;
    auVar2._8_4_ = fVar10;
    auVar2._12_4_ = fVar11;
    auVar3._4_4_ = fVar9;
    auVar3._0_4_ = fVar8;
    auVar3._8_4_ = fVar10;
    auVar3._12_4_ = fVar11;
    auVar13 = NEON_ext(auVar2,auVar3,8,1);
    if (SQRT(auVar12._0_4_ + fVar4 + auVar12._4_4_ + fVar5) <=
        SQRT(auVar13._0_4_ + fVar8 + auVar13._4_4_ + fVar9)) {
      return;
    }
  }
  uVar1 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = param_5;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


