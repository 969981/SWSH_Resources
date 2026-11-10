/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00288bc0; name: FUN_00288bc0
 */


undefined8
FUN_00288bc0(long param_1,long param_2,long param_3,undefined1 (*param_4) [12],undefined8 *param_5,
            long param_6,byte param_7,long param_8,undefined1 (*param_9) [16],undefined8 param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  int local_11c;
  undefined *local_118 [4];
  undefined1 (*local_f8) [12];
  long lStack_f0;
  long local_e8;
  byte local_e0;
  long local_d8;
  undefined1 auStack_c8 [104];
  
  FUN_0028b510(param_2,param_7 & 1,auStack_c8);
  lStack_f0 = param_2 + 0x30;
  local_e8 = param_2 + 0x60;
  local_118[0] = PTR_DAT_02711ec0;
  if ((param_7 & 1) == 0) {
    local_118[0] = PTR_DAT_02711eb8;
  }
  local_118[0] = local_118[0] + 0x10;
  local_11c = 0;
  local_f8 = param_4;
  local_e0 = param_7 & 1;
  local_d8 = param_2;
  uVar7 = FUN_00285910(param_1,auStack_c8,local_118,param_5,&local_11c,param_10,param_9,1);
  uVar8 = 0;
  if (((uVar7 & 1) != 0) && (local_11c != 0)) {
    uVar20 = *param_5;
    puVar9 = *(undefined8 **)(param_8 + 0x30);
    uVar8 = 1;
    puVar9[1] = param_5[1];
    *puVar9 = uVar20;
    uVar20 = param_5[2];
    puVar9[3] = param_5[3];
    puVar9[2] = uVar20;
    uVar20 = param_5[4];
    puVar9[5] = param_5[5];
    puVar9[4] = uVar20;
    *(undefined1 *)(param_8 + 0x20) = 1;
    fVar19 = (float)*(undefined8 *)(*param_4 + 8);
    fVar17 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
    fVar14 = (float)*(undefined8 *)*param_4;
    fVar16 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
    auVar2 = *param_9;
    fVar13 = auVar2._4_4_;
    auVar21 = NEON_ext(auVar2,auVar2,8,1);
    fVar18 = auVar2._8_4_;
    fVar24 = fVar17 * fVar17 + -0.5;
    auVar25._12_4_ = 0;
    auVar25._0_12_ = *param_4;
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *param_4;
    auVar25 = NEON_ext(auVar25,auVar1,8,1);
    fVar15 = auVar2._0_4_;
    fVar22 = fVar14 * fVar13 - fVar16 * fVar15;
    uVar20 = NEON_ext(CONCAT44(fVar16 * fVar18 - fVar19 * fVar13,fVar22),
                      CONCAT44(auVar25._4_4_ * fVar13 - fVar16 * auVar21._4_4_,
                               auVar25._0_4_ * fVar15 - fVar14 * auVar21._0_4_),4,1);
    auVar11._0_4_ = fVar14 * fVar15;
    auVar11._4_4_ = fVar16 * fVar13;
    auVar11._8_4_ = fVar19 * fVar18;
    auVar11._12_4_ = auVar2._12_4_ * 0.0;
    auVar25 = NEON_ext(auVar11,auVar11,8,1);
    fVar10 = auVar11._0_4_ + auVar11._4_4_ + auVar25._0_4_ + auVar25._4_4_;
    fVar12 = fVar15 * fVar24 + (float)uVar20 * fVar17;
    fVar13 = fVar13 * fVar24 + (float)((ulong)uVar20 >> 0x20) * fVar17;
    fVar15 = fVar18 * fVar24 + fVar22 * fVar17;
    fVar18 = fVar17 * 0.0 + 0.0;
    auVar3._4_4_ = fVar13;
    auVar3._0_4_ = fVar12;
    auVar3._8_4_ = fVar15;
    auVar3._12_4_ = fVar18;
    auVar4._4_4_ = fVar13;
    auVar4._0_4_ = fVar12;
    auVar4._8_4_ = fVar15;
    auVar4._12_4_ = fVar18;
    auVar25 = NEON_ext(auVar3,auVar4,8,1);
    uVar23 = *(undefined8 *)(param_3 + 0x18);
    uVar20 = *(undefined8 *)(param_3 + 0x10);
    fVar15 = *(float *)((long)param_5 + 0x2c);
    fVar12 = fVar14 * fVar10 + fVar12;
    fVar13 = fVar16 * fVar10 + fVar13;
    fVar18 = fVar19 * fVar10 + auVar25._0_4_;
    fVar10 = fVar10 * 0.0 + 0.0;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar12;
    auVar2._8_4_ = fVar18;
    auVar2._12_4_ = fVar10;
    auVar21._4_4_ = fVar13;
    auVar21._0_4_ = fVar12;
    auVar21._8_4_ = fVar18;
    auVar21._12_4_ = fVar10;
    auVar25 = NEON_ext(auVar2,auVar21,8,1);
    fVar10 = auVar25._0_4_ + auVar25._0_4_;
    puVar9 = (undefined8 *)(param_6 + (ulong)*(uint *)(param_6 + 0x1000) * 0x40);
    fVar17 = (float)*(undefined8 *)(param_1 + 0x50);
    *(uint *)(param_6 + 0x1000) = *(uint *)(param_6 + 0x1000) + 1;
    fVar18 = (float)uVar20 - (fVar12 + fVar12) * fVar17;
    fVar14 = (float)((ulong)uVar20 >> 0x20) - (fVar13 + fVar13) * fVar17;
    fVar16 = (float)uVar23 - fVar10 * fVar17;
    fVar19 = (float)((ulong)uVar23 >> 0x20) - fVar17 * 0.0;
    auVar5._4_4_ = fVar14;
    auVar5._0_4_ = fVar18;
    auVar5._8_4_ = fVar16;
    auVar5._12_4_ = fVar19;
    auVar6._4_4_ = fVar14;
    auVar6._0_4_ = fVar18;
    auVar6._8_4_ = fVar16;
    auVar6._12_4_ = fVar19;
    auVar25 = NEON_ext(auVar5,auVar6,8,1);
    puVar9[1] = (ulong)(uint)fVar10;
    *puVar9 = CONCAT44(fVar13 + fVar13,fVar12 + fVar12);
    puVar9[3] = (ulong)auVar25._0_4_;
    puVar9[2] = CONCAT44(fVar14,fVar18);
    *(float *)((long)puVar9 + 0xc) = fVar15 - fVar17;
    *(undefined4 *)((long)puVar9 + 0x34) = 0xffffffff;
  }
  return uVar8;
}


