/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039f1d0; name: FUN_0039f1d0
 */


void FUN_0039f1d0(float param_1,float param_2,int *param_3,uint param_4,undefined8 *param_5,
                 undefined8 *param_6,long param_7,long param_8,uint param_9,int param_10)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50 [10];
  
  param_3[0] = 0;
  param_3[1] = 0;
  local_50[0] = 0x7e7fffff7e7fffff;
  local_50[1] = 0x7e7fffff;
  local_a0[0] = 0xfe7ffffffe7fffff;
  local_a0[1] = 0xfe7fffff;
  local_50[2] = 0x7e7fffff7e7fffff;
  local_50[3] = 0x7e7fffff;
  local_90 = 0xfe7ffffffe7fffff;
  uStack_88 = 0xfe7fffff;
  param_3[2] = 0;
  param_3[3] = 0;
  local_50[4] = 0x7e7fffff7e7fffff;
  local_50[5] = 0x7e7fffff;
  local_80 = 0xfe7ffffffe7fffff;
  uStack_78 = 0xfe7fffff;
  local_50[6] = 0x7e7fffff7e7fffff;
  local_50[7] = 0x7e7fffff;
  local_70 = 0xfe7ffffffe7fffff;
  uStack_68 = 0xfe7fffff;
  param_3[4] = 0;
  local_50[8] = 0x7e7fffff7e7fffff;
  local_50[9] = 0x7e7fffff;
  local_60 = 0xfe7ffffffe7fffff;
  uStack_58 = 0xfe7fffff;
  if (param_4 == 0) {
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    lVar3 = 1;
    if (param_10 == 1) {
      lVar3 = 2;
    }
    uVar11 = 0x10;
    if ((param_9 & 1) == 0) {
      uVar11 = 0;
    }
    uVar9 = (ulong)param_4;
    puVar12 = param_5;
    do {
      fVar18 = *(float *)((long)puVar12 + lVar3 * 4);
      fVar20 = *(float *)((long)puVar12 + lVar3 * 4 + 0x10);
      fVar25 = (float)puVar12[1];
      fVar26 = (float)((ulong)puVar12[1] >> 0x20);
      fVar23 = (float)*puVar12;
      fVar24 = (float)((ulong)*puVar12 >> 0x20);
      fVar27 = (float)puVar12[2];
      auVar19._0_4_ = fVar23 - fVar27;
      fVar28 = (float)((ulong)puVar12[2] >> 0x20);
      auVar19._4_4_ = fVar24 - fVar28;
      fVar29 = (float)puVar12[3];
      auVar19._8_4_ = fVar25 - fVar29;
      fVar30 = (float)((ulong)puVar12[3] >> 0x20);
      auVar19._12_4_ = fVar26 - fVar30;
      uVar9 = uVar9 - 1;
      uVar13 = (ulong)(byte)(&DAT_01d4dda0)
                            [uVar11 | (ulong)(param_2 < fVar18 - fVar20) << 2 |
                             (ulong)(fVar18 + fVar20 < param_2) << 3 |
                             (ulong)(param_1 < fVar23 - fVar27) |
                             (ulong)(fVar23 + fVar27 < param_1) << 1];
      auVar21._8_8_ = local_50[uVar13 * 2 + 1];
      auVar21._0_8_ = local_50[uVar13 * 2];
      *(uint *)((long)puVar12 + 0xc) =
           (uint)(byte)(&DAT_01d4dda0)
                       [uVar11 | (ulong)(param_2 < fVar18 - fVar20) << 2 |
                        (ulong)(fVar18 + fVar20 < param_2) << 3 | (ulong)(param_1 < fVar23 - fVar27)
                        | (ulong)(fVar23 + fVar27 < param_1) << 1];
      auVar19 = NEON_fmin(auVar21,auVar19,4);
      puVar12 = puVar12 + 4;
      auVar22._8_8_ = local_a0[uVar13 * 2 + 1];
      auVar22._0_8_ = local_a0[uVar13 * 2];
      auVar7._4_4_ = fVar24 + fVar28;
      auVar7._0_4_ = fVar23 + fVar27;
      auVar7._8_4_ = fVar25 + fVar29;
      auVar7._12_4_ = fVar26 + fVar30;
      auVar22 = NEON_fmax(auVar22,auVar7,4);
      local_50[uVar13 * 2 + 1] = auVar19._8_8_;
      local_50[uVar13 * 2] = auVar19._0_8_;
      local_a0[uVar13 * 2 + 1] = auVar22._8_8_;
      local_a0[uVar13 * 2] = auVar22._0_8_;
      param_3[uVar13] = param_3[uVar13] + 1;
    } while (uVar9 != 0);
    iVar8 = param_3[2];
    iVar10 = param_3[3];
  }
  iVar4 = *param_3;
  iVar1 = param_3[1] + iVar4;
  iVar8 = iVar8 + iVar1;
  param_3[5] = 0;
  param_3[6] = iVar4;
  param_3[7] = iVar1;
  param_3[8] = iVar8;
  param_3[9] = iVar10 + iVar8;
  if (param_4 != 0) {
    uVar11 = (ulong)param_4;
    param_5 = param_5 + 2;
    do {
      uVar6 = param_3[(ulong)*(uint *)((long)param_5 + -4) + 5];
      param_3[(ulong)*(uint *)((long)param_5 + -4) + 5] = uVar6 + 1;
      puVar12 = (undefined8 *)(param_7 + (ulong)uVar6 * 0x20);
      uVar15 = param_5[-1];
      uVar14 = param_5[-2];
      uVar17 = param_5[1];
      uVar16 = *param_5;
      puVar2 = (undefined8 *)(param_8 + (ulong)uVar6 * 0x10);
      param_5 = param_5 + 4;
      uVar11 = uVar11 - 1;
      uVar5 = param_6[1];
      *puVar2 = *param_6;
      puVar2[1] = uVar5;
      puVar12[1] = uVar15;
      *puVar12 = uVar14;
      puVar12[3] = uVar17;
      puVar12[2] = uVar16;
      param_6 = param_6 + 2;
    } while (uVar11 != 0);
  }
  param_3[5] = 0;
  param_3[6] = iVar4;
  param_3[7] = iVar1;
  param_3[8] = iVar8;
  param_3[9] = iVar10 + iVar8;
  fVar18 = (float)((ulong)local_50[0] >> 0x20);
  fVar20 = (float)((ulong)local_a0[0] >> 0x20);
  *(ulong *)(param_3 + 0xc) =
       CONCAT44((fVar18 + fVar20) * 0.5,((float)local_50[0] + (float)local_a0[0]) * 0.5);
  param_3[0xe] = (int)(((float)local_50[1] + (float)local_a0[1]) * 0.5);
  *(ulong *)(param_3 + 0x10) =
       CONCAT44((fVar20 - fVar18) * 0.5,((float)local_a0[0] - (float)local_50[0]) * 0.5);
  param_3[0x12] = (int)(((float)local_a0[1] - (float)local_50[1]) * 0.5);
  fVar18 = (float)((ulong)local_50[2] >> 0x20);
  *(ulong *)(param_3 + 0x14) =
       CONCAT44((fVar18 + local_90._4_4_) * 0.5,((float)local_50[2] + (float)local_90) * 0.5);
  param_3[0x16] = (int)(((float)local_50[3] + (float)uStack_88) * 0.5);
  *(ulong *)(param_3 + 0x18) =
       CONCAT44((local_90._4_4_ - fVar18) * 0.5,((float)local_90 - (float)local_50[2]) * 0.5);
  param_3[0x1a] = (int)(((float)uStack_88 - (float)local_50[3]) * 0.5);
  fVar18 = (float)((ulong)local_50[4] >> 0x20);
  *(ulong *)(param_3 + 0x1c) =
       CONCAT44((fVar18 + local_80._4_4_) * 0.5,((float)local_50[4] + (float)local_80) * 0.5);
  param_3[0x1e] = (int)(((float)local_50[5] + (float)uStack_78) * 0.5);
  *(ulong *)(param_3 + 0x20) =
       CONCAT44((local_80._4_4_ - fVar18) * 0.5,((float)local_80 - (float)local_50[4]) * 0.5);
  param_3[0x22] = (int)(((float)uStack_78 - (float)local_50[5]) * 0.5);
  fVar18 = (float)((ulong)local_50[6] >> 0x20);
  *(ulong *)(param_3 + 0x24) =
       CONCAT44((fVar18 + local_70._4_4_) * 0.5,((float)local_50[6] + (float)local_70) * 0.5);
  param_3[0x26] = (int)(((float)local_50[7] + (float)uStack_68) * 0.5);
  *(ulong *)(param_3 + 0x28) =
       CONCAT44((local_70._4_4_ - fVar18) * 0.5,((float)local_70 - (float)local_50[6]) * 0.5);
  param_3[0x2a] = (int)(((float)uStack_68 - (float)local_50[7]) * 0.5);
  fVar18 = (float)((ulong)local_50[8] >> 0x20);
  *(ulong *)(param_3 + 0x2c) =
       CONCAT44((fVar18 + local_60._4_4_) * 0.5,((float)local_50[8] + (float)local_60) * 0.5);
  param_3[0x2e] = (int)(((float)local_50[9] + (float)uStack_58) * 0.5);
  *(ulong *)(param_3 + 0x30) =
       CONCAT44((local_60._4_4_ - fVar18) * 0.5,((float)local_60 - (float)local_50[8]) * 0.5);
  param_3[0x32] = (int)(((float)uStack_58 - (float)local_50[9]) * 0.5);
  return;
}


