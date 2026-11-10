/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01385050; name: FUN_01385050
 */


void FUN_01385050(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_b0 [16];
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_90;
  
  puVar5 = PTR_DAT_02710840;
  lVar6 = FUN_0101f850(*(undefined8 *)PTR_DAT_02710840);
  (**(code **)(**(long **)(lVar6 + 0x210) + 0x18))(*(long **)(lVar6 + 0x210),1,auStack_b0);
  fVar11 = DAT_01d4bec4;
  fVar9 = 0.0;
  if (DAT_01d4bec4 <= ABS(local_90)) {
    fVar7 = -local_a0;
    fVar8 = -fStack_98;
    fVar9 = DAT_01d4bb3c;
    if (DAT_01d4bec4 <= ABS(local_9c)) {
      fVar9 = 1.0;
    }
    fVar10 = fVar7 * fVar7;
    *(ulong *)(param_1 + 200) = (ulong)(uint)fVar8;
    *(float *)(param_1 + 0xc0) = fVar7;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    auVar12._4_4_ = 0;
    auVar12._0_4_ = fVar10;
    auVar12._8_4_ = fVar8 * fVar8;
    auVar12._12_4_ = 0;
    auVar2._4_4_ = 0;
    auVar2._0_4_ = fVar10;
    auVar2._8_4_ = fVar8 * fVar8;
    auVar2._12_4_ = 0;
    auVar12 = NEON_ext(auVar12,auVar2,8,1);
    fVar8 = DAT_01d4c214 * SQRT(auVar12._0_4_ + fVar10 + auVar12._4_4_ + 0.0);
    fVar7 = (float)FUN_012dcb90(param_1);
    fVar9 = fVar9 * fVar7 * fVar8;
  }
  uVar1 = *(uint *)(param_1 + 300);
  *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_1 + 0xdc);
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_1 + 0xfc);
  *(undefined8 *)(param_1 + 0x11c) = *(undefined8 *)(param_1 + 0xf4);
  *(undefined8 *)(param_1 + 0x114) = *(undefined8 *)(param_1 + 0xec);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_1 + 0xe4);
  *(uint *)(param_1 + 300) = uVar1 + 1;
  *(float *)(param_1 + (ulong)(uVar1 % 10) * 4 + 0xdc) = fVar9;
  lVar6 = FUN_0101f850(*(undefined8 *)puVar5);
  (**(code **)(**(long **)(lVar6 + 0x210) + 0x18))(*(long **)(lVar6 + 0x210),2,auStack_b0);
  fVar9 = 0.0;
  if (fVar11 <= ABS(local_90)) {
    local_a0 = -local_a0;
    fStack_98 = -fStack_98;
    fVar9 = DAT_01d4bb3c;
    if (fVar11 <= ABS(local_9c)) {
      fVar9 = 1.0;
    }
    fVar11 = local_a0 * local_a0;
    *(ulong *)(param_1 + 200) = (ulong)(uint)fStack_98;
    *(float *)(param_1 + 0xc0) = local_a0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    auVar3._4_4_ = 0;
    auVar3._0_4_ = fVar11;
    auVar3._8_4_ = fStack_98 * fStack_98;
    auVar3._12_4_ = 0;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = fVar11;
    auVar4._8_4_ = fStack_98 * fStack_98;
    auVar4._12_4_ = 0;
    auVar12 = NEON_ext(auVar3,auVar4,8,1);
    fVar7 = DAT_01d4c214 * SQRT(auVar12._0_4_ + fVar11 + auVar12._4_4_ + 0.0);
    fVar11 = (float)FUN_012dcb90(param_1);
    fVar9 = fVar9 * fVar11 * fVar7;
  }
  uVar1 = *(uint *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x130);
  *(uint *)(param_1 + 0x180) = uVar1 + 1;
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x140);
  *(float *)(param_1 + 0x130 + (ulong)(uVar1 % 10) * 4) = fVar9;
  fVar11 = (*(float *)(param_1 + 0xdc) + 0.0 + *(float *)(param_1 + 0xe0) +
            *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xec) +
            *(float *)(param_1 + 0xf0) + *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0xf8) +
            *(float *)(param_1 + 0xfc) + *(float *)(param_1 + 0x100)) / 10.0;
  fVar9 = (*(float *)(param_1 + 0x130) + 0.0 + *(float *)(param_1 + 0x134) +
           *(float *)(param_1 + 0x138) + *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x140) +
           *(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x14c) +
           *(float *)(param_1 + 0x150) + *(float *)(param_1 + 0x154)) / 10.0;
  *(bool *)(param_1 + 0x200) = fVar9 < fVar11;
  *(float *)(param_1 + 0xd8) = fVar11 + *(float *)(param_1 + 0xd8) + fVar9;
  return;
}


