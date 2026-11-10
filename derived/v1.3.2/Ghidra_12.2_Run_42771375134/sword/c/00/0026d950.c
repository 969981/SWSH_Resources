/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026d950; name: FUN_0026d950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0026d950(undefined8 param_1,long param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            undefined8 param_6,ulong param_7,undefined8 param_8,undefined8 *param_9,
            undefined8 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auStack_110 [16];
  undefined *local_100 [4];
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 *local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_48 = _UNK_01d4ae58;
  local_50 = _DAT_01d4ae50;
  uStack_38 = _UNK_01d4b588;
  uStack_40 = _DAT_01d4b580;
  uStack_28 = _UNK_01d49dc8;
  local_30 = _DAT_01d49dc0;
  fVar18 = *param_3;
  fVar20 = param_3[1];
  fVar21 = param_3[2];
  fVar9 = param_3[5];
  fVar16 = param_3[8];
  fVar28 = (float)param_9[3];
  fVar24 = (float)param_9[2];
  fVar26 = (float)((ulong)param_9[2] >> 0x20);
  fVar22 = (float)*param_9;
  fVar23 = (float)((ulong)*param_9 >> 0x20);
  fVar25 = (float)param_9[1];
  fVar10 = (float)*(undefined8 *)(param_3 + 3);
  fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_3 + 6);
  fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
  fVar14 = *(float *)(param_9 + 6);
  fVar15 = *(float *)((long)param_9 + 0x34);
  fVar17 = *(float *)(param_9 + 7);
  fVar30 = *(float *)((long)param_9 + 0x3c);
  fVar35 = (float)param_9[4];
  fVar36 = (float)((ulong)param_9[4] >> 0x20);
  fVar37 = (float)param_9[5];
  fVar11 = fVar14 + fVar22 * fVar18 + fVar24 * fVar20 + fVar35 * fVar21;
  fVar12 = fVar15 + fVar23 * fVar18 + fVar26 * fVar20 + fVar36 * fVar21;
  local_80 = CONCAT44(fVar12,fVar11);
  fVar21 = fVar17 + fVar25 * fVar18 + fVar28 * fVar20 + fVar37 * fVar21;
  fVar13 = fVar30 + 0.0;
  uStack_78 = CONCAT44(fVar13,fVar21);
  fVar18 = fVar14 + fVar22 * fVar10 + fVar24 * fVar19 + fVar35 * fVar9;
  fVar20 = fVar15 + fVar23 * fVar10 + fVar26 * fVar19 + fVar36 * fVar9;
  local_70 = CONCAT44(fVar20,fVar18);
  fVar10 = fVar17 + fVar25 * fVar10 + fVar28 * fVar19 + fVar37 * fVar9;
  uStack_68 = CONCAT44(fVar30 + 0.0,fVar10);
  fVar14 = fVar14 + fVar22 * fVar27 + fVar24 * fVar29 + fVar35 * fVar16;
  fVar15 = fVar15 + fVar23 * fVar27 + fVar26 * fVar29 + fVar36 * fVar16;
  uStack_60 = CONCAT44(fVar15,fVar14);
  fVar17 = fVar17 + fVar25 * fVar27 + fVar28 * fVar29 + fVar37 * fVar16;
  uStack_58 = CONCAT44(fVar30 + 0.0,fVar17);
  if ((param_7 & 1) == 0) {
    fVar19 = fVar18 - fVar11;
    fVar9 = fVar20 - fVar12;
    fVar22 = fVar10 - fVar21;
    fVar23 = (fVar30 + 0.0) - fVar13;
    fVar25 = fVar14 - fVar11;
    fVar27 = fVar15 - fVar12;
    fVar29 = fVar17 - fVar21;
    fVar30 = (fVar30 + 0.0) - fVar13;
    auVar32._4_4_ = fVar9;
    auVar32._0_4_ = fVar19;
    auVar32._8_4_ = fVar22;
    auVar32._12_4_ = fVar23;
    auVar38._4_4_ = fVar9;
    auVar38._0_4_ = fVar19;
    auVar38._8_4_ = fVar22;
    auVar38._12_4_ = fVar23;
    auVar32 = NEON_ext(auVar32,auVar38,8,1);
    auVar3._4_4_ = fVar27;
    auVar3._0_4_ = fVar25;
    auVar3._8_4_ = fVar29;
    auVar3._12_4_ = fVar30;
    auVar4._4_4_ = fVar27;
    auVar4._0_4_ = fVar25;
    auVar4._8_4_ = fVar29;
    auVar4._12_4_ = fVar30;
    auVar38 = NEON_ext(auVar3,auVar4,8,1);
    fVar23 = fVar19 * fVar27 - fVar9 * fVar25;
    uVar33 = NEON_ext(CONCAT44(fVar9 * fVar29 - fVar22 * fVar27,fVar23),
                      CONCAT44(auVar32._4_4_ * fVar27 - fVar9 * auVar38._4_4_,
                               auVar32._0_4_ * fVar25 - fVar19 * auVar38._0_4_),4,1);
    fVar9 = (float)uVar33;
    fVar22 = (float)((ulong)uVar33 >> 0x20);
    fVar25 = fVar9 * fVar9;
    fVar27 = fVar22 * fVar22;
    auVar5._4_4_ = fVar27;
    auVar5._0_4_ = fVar25;
    auVar5._8_4_ = fVar23 * fVar23;
    auVar5._12_4_ = 0;
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar25;
    auVar6._8_4_ = fVar23 * fVar23;
    auVar6._12_4_ = 0;
    auVar32 = NEON_ext(auVar5,auVar6,8,1);
    fVar19 = auVar32._0_4_ + auVar32._4_4_;
    fVar30 = fVar25 + fVar27 + fVar19;
    fVar19 = fVar25 + fVar27 + fVar19;
    uVar33 = NEON_frsqrte(CONCAT44(fVar19,fVar30),4);
    fVar25 = (float)uVar33;
    fVar27 = (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(CONCAT44(fVar27 * fVar27,fVar25 * fVar25),CONCAT44(fVar19,fVar30),4);
    fVar25 = fVar25 * (float)uVar33;
    fVar27 = fVar27 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(CONCAT44(fVar27 * fVar27,fVar25 * fVar25),CONCAT44(fVar19,fVar30),4);
    fVar25 = fVar25 * (float)uVar33;
    fVar27 = fVar27 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(CONCAT44(fVar27 * fVar27,fVar25 * fVar25),CONCAT44(fVar19,fVar30),4);
    fVar25 = fVar25 * (float)uVar33;
    fVar27 = fVar27 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(CONCAT44(fVar27 * fVar27,fVar25 * fVar25),CONCAT44(fVar19,fVar30),4);
    uVar31 = CONCAT44(fVar19 * fVar27 * (float)((ulong)uVar33 >> 0x20),
                      fVar30 * fVar25 * (float)uVar33);
    uVar31 = uVar31 ^ (uVar31 ^ CONCAT44(fVar19,fVar30)) &
                      CONCAT44(-(uint)(fVar30 == 0.0),-(uint)(fVar30 == 0.0));
    uVar33 = NEON_frecpe(uVar31,4);
    uVar34 = NEON_frecps(uVar31,uVar33,4);
    fVar25 = (float)uVar33 * (float)uVar34;
    fVar30 = (float)((ulong)uVar33 >> 0x20) * (float)((ulong)uVar34 >> 0x20);
    uVar33 = NEON_frecps(uVar31,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar33;
    fVar30 = fVar30 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frecps(uVar31,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar33;
    fVar30 = fVar30 * (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frecps(uVar31,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar33;
    uVar33 = NEON_frecps(uVar31,CONCAT44(fVar30 * (float)((ulong)uVar33 >> 0x20),fVar25),4);
    fVar25 = fVar25 * (float)uVar33;
    fVar27 = fVar11 * fVar9 * fVar25;
    fVar29 = fVar12 * fVar22 * fVar25;
    fVar30 = fVar21 * fVar23 * fVar25;
    auVar7._4_4_ = fVar29;
    auVar7._0_4_ = fVar27;
    auVar7._8_4_ = fVar30;
    auVar7._12_4_ = fVar13 * 0.0;
    auVar8._4_4_ = fVar29;
    auVar8._0_4_ = fVar27;
    auVar8._8_4_ = fVar30;
    auVar8._12_4_ = fVar13 * 0.0;
    auVar32 = NEON_ext(auVar7,auVar8,8,1);
    fVar30 = *(float *)(param_2 + 0x10) * fVar9 * fVar25;
    fVar19 = *(float *)(param_2 + 0x14) * fVar22 * fVar25;
    fVar9 = *(float *)(param_2 + 0x18) * fVar23 * fVar25;
    fVar22 = *(float *)(param_2 + 0x1c) * 0.0;
    auVar1._4_4_ = fVar19;
    auVar1._0_4_ = fVar30;
    auVar1._8_4_ = fVar9;
    auVar1._12_4_ = fVar22;
    auVar2._4_4_ = fVar19;
    auVar2._0_4_ = fVar30;
    auVar2._8_4_ = fVar9;
    auVar2._12_4_ = fVar22;
    auVar38 = NEON_ext(auVar1,auVar2,8,1);
    if ((fVar30 + fVar19 + auVar38._0_4_ + auVar38._4_4_) -
        (fVar27 + fVar29 + auVar32._0_4_ + auVar32._4_4_) < 0.0) {
      return 0;
    }
  }
  local_90 = 5;
  puStack_d8 = &local_50;
  local_8c = 0;
  uStack_a8 = (ulong)(uint)((fVar17 + fVar21 + fVar10) * 0.333333);
  local_b0 = CONCAT44((fVar15 + fVar12 + fVar20) * 0.333333,(fVar14 + fVar11 + fVar18) * 0.333333);
  local_c8 = 1;
  local_a0 = &DAT_7f7fffff00000000;
  local_100[0] = PTR_DAT_02711ef8 + 0x10;
  local_98 = 0x7f7fffff7f7fffff;
  local_c0 = &local_b0;
                    /* try { // try from 0026dbf4 to 0026dc1b has its CatchHandler @ 0026dc30 */
  local_e0 = param_8;
  local_d0 = puStack_d8;
  FUN_0028eaa0(&local_b0,param_4,param_5,param_1,local_100,param_2,param_10,param_11,param_6,
               auStack_110,0);
  return 1;
}


