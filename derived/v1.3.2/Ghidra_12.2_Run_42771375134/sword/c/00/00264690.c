/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00264690; name: FUN_00264690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00264690(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 (*param_8) [12],
            long param_9,int *param_10,undefined8 param_11,undefined8 param_12,
            undefined1 (*param_13) [16],undefined8 param_14,undefined8 param_15,byte param_16)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined *local_240 [4];
  undefined1 (*local_220) [12];
  undefined8 *puStack_218;
  undefined8 *local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [224];
  undefined1 auStack_d8 [104];
  
  FUN_0028b370(auStack_1b8,param_5);
  FUN_0028b4e0(auStack_1b8,auStack_d8);
  uStack_1e8 = _UNK_01d4ae58;
  local_1f0 = _DAT_01d4ae50;
  uStack_1d8 = _UNK_01d4b588;
  local_1e0 = _DAT_01d4b580;
  puStack_218 = &local_1f0;
  local_208 = 1;
  uStack_1c8 = _UNK_01d49dc8;
  local_1d0 = _DAT_01d49dc0;
  local_240[0] = PTR_DAT_02711eb0 + 0x10;
  iVar6 = *param_10;
                    /* try { // try from 0026474c to 00264897 has its CatchHandler @ 002648c0 */
  local_220 = param_8;
  local_210 = puStack_218;
  local_200 = param_4;
  uVar5 = FUN_002841d0(param_1,param_2,param_3,auStack_d8,local_240,param_6,param_9,param_10,
                       param_15,param_13,param_14,param_16 & 1);
  if ((uVar5 & 1) == 0) {
    uVar16 = 0;
  }
  else {
    iVar1 = *param_10;
    if (iVar6 == 0) {
      iVar6 = iVar1;
    }
    else if (iVar1 != iVar6) {
      param_9 = param_9 + 0x30;
      *param_10 = iVar1 + -1;
      iVar6 = iVar1 + -1;
    }
    FUN_00291740(param_12,param_9,iVar6);
    fVar11 = (float)*(undefined8 *)(*param_8 + 8);
    fVar14 = (float)((ulong)*(undefined8 *)(*param_8 + 8) >> 0x20);
    fVar13 = (float)*(undefined8 *)*param_8;
    fVar9 = (float)((ulong)*(undefined8 *)*param_8 >> 0x20);
    auVar19 = *param_13;
    fVar10 = auVar19._4_4_;
    auVar17 = NEON_ext(auVar19,auVar19,8,1);
    fVar12 = auVar19._8_4_;
    fVar20 = fVar14 * fVar14 + -0.5;
    auVar3._12_4_ = 0;
    auVar3._0_12_ = *param_8;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = *param_8;
    auVar21 = NEON_ext(auVar3,auVar4,8,1);
    fVar8 = auVar19._0_4_;
    fVar18 = fVar13 * fVar10 - fVar9 * fVar8;
    uVar16 = NEON_ext(CONCAT44(fVar9 * fVar12 - fVar11 * fVar10,fVar18),
                      CONCAT44(auVar21._4_4_ * fVar10 - fVar9 * auVar17._4_4_,
                               auVar21._0_4_ * fVar8 - fVar13 * auVar17._0_4_),4,1);
    auVar15._0_4_ = fVar13 * fVar8;
    auVar15._4_4_ = fVar9 * fVar10;
    auVar15._8_4_ = fVar11 * fVar12;
    auVar15._12_4_ = auVar19._12_4_ * 0.0;
    auVar19 = NEON_ext(auVar15,auVar15,8,1);
    fVar7 = auVar15._0_4_ + auVar15._4_4_ + auVar19._0_4_ + auVar19._4_4_;
    fVar8 = fVar8 * fVar20 + (float)uVar16 * fVar14;
    fVar10 = fVar10 * fVar20 + (float)((ulong)uVar16 >> 0x20) * fVar14;
    fVar12 = fVar12 * fVar20 + fVar18 * fVar14;
    fVar14 = fVar14 * 0.0 + 0.0;
    auVar19._4_4_ = fVar10;
    auVar19._0_4_ = fVar8;
    auVar19._8_4_ = fVar12;
    auVar19._12_4_ = fVar14;
    auVar17._4_4_ = fVar10;
    auVar17._0_4_ = fVar8;
    auVar17._8_4_ = fVar12;
    auVar17._12_4_ = fVar14;
    auVar19 = NEON_ext(auVar19,auVar17,8,1);
    fVar8 = fVar13 * fVar7 + fVar8;
    fVar10 = fVar9 * fVar7 + fVar10;
    fVar13 = fVar11 * fVar7 + auVar19._0_4_;
    fVar7 = fVar7 * 0.0 + 0.0;
    auVar21._4_4_ = fVar10;
    auVar21._0_4_ = fVar8;
    auVar21._8_4_ = fVar13;
    auVar21._12_4_ = fVar7;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar8;
    auVar2._8_4_ = fVar13;
    auVar2._12_4_ = fVar7;
    auVar19 = NEON_ext(auVar21,auVar2,8,1);
    *(ulong *)(*param_13 + 8) = (ulong)(uint)(auVar19._0_4_ + auVar19._0_4_);
    *(ulong *)*param_13 = CONCAT44(fVar10 + fVar10,fVar8 + fVar8);
    FUN_002902f0(param_12,param_11,param_13,param_13,param_7,param_3 + 0x50,param_15);
    uVar16 = 1;
  }
  return uVar16;
}


