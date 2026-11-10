/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00273010; name: FUN_00273010
 */


/* WARNING: Removing unreachable block (ram,0x002731c8) */
/* WARNING: Removing unreachable block (ram,0x00273208) */

undefined8
FUN_00273010(undefined1 param_1 [16],long param_2,long param_3,undefined8 param_4,
            undefined1 (*param_5) [16],byte param_6,byte param_7,undefined8 param_8,
            undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14,byte param_15,undefined8 param_16)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  float *pfVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar34;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined8 local_1f0;
  ulong uStack_1e8;
  undefined *local_1e0 [4];
  undefined1 (*local_1c0) [16];
  long lStack_1b8;
  long local_1b0;
  byte local_1a8;
  long local_1a0;
  undefined *local_190 [4];
  undefined8 local_170;
  long lStack_168;
  long local_160;
  byte local_158;
  long local_150;
  undefined1 auStack_140 [104];
  undefined1 auStack_d8 [104];
  int local_64;
  
  uVar35 = param_1._8_8_;
  FUN_0028b510(param_2,param_6 & 1,auStack_d8);
  FUN_0028b510(param_3,param_7 & 1,auStack_140);
  lStack_168 = param_2 + 0x30;
  local_160 = param_2 + 0x60;
  local_190[0] = PTR_DAT_02711ec0 + 0x10;
  if ((param_6 & 1) == 0) {
    local_190[0] = PTR_DAT_02711eb8 + 0x10;
  }
  lStack_1b8 = param_3 + 0x30;
  local_1b0 = param_3 + 0x60;
  local_1e0[0] = PTR_DAT_02711ec0 + 0x10;
  if ((param_7 & 1) == 0) {
    local_1e0[0] = PTR_DAT_02711eb8 + 0x10;
  }
  auVar33._8_8_ = uVar35;
  auVar33._0_8_ = param_1._0_8_;
  local_64 = 0;
  local_1c0 = param_5;
  local_1a8 = param_7 & 1;
  local_1a0 = param_3;
  local_170 = param_4;
  local_158 = param_6 & 1;
  local_150 = param_2;
  uVar8 = FUN_00281180(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_3 + 0x10),auVar33,
                       auStack_d8,auStack_140,local_190,local_1e0,param_8,&local_64,param_14,
                       param_11,param_12,param_13,param_15 & 1,param_16);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (local_64 == 0) {
    if ((param_15 & 1) != 0) {
      return 1;
    }
    lVar9 = *(long *)(param_10 + 0x30);
    pauVar1 = (undefined1 (*) [16])(lVar9 + 0x20);
    uVar17 = (undefined4)*(undefined8 *)(lVar9 + 0x28);
    auVar36 = *pauVar1;
    auVar22 = SUB1612(*pauVar1,0);
    auVar21 = SUB1612(*pauVar1,0);
    uVar13 = (undefined4)*(undefined8 *)*pauVar1;
    uVar15 = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    bVar2 = *(byte *)(param_10 + 0x20);
    if ((ulong)bVar2 < 2) goto LAB_0027327c;
    uVar10 = ~(uint)bVar2 & 1;
    if (bVar2 != 2) {
      lVar11 = 1;
      pfVar12 = (float *)(lVar9 + 0x80);
      do {
        lVar11 = lVar11 + 2;
        auVar21._0_4_ = auVar36._0_4_ + (float)*(undefined8 *)(pfVar12 + -0xc) + *pfVar12;
        auVar21._4_4_ =
             auVar36._4_4_ + (float)((ulong)*(undefined8 *)(pfVar12 + -0xc) >> 0x20) + pfVar12[1];
        auVar21._8_4_ = auVar36._8_4_ + (float)*(undefined8 *)(pfVar12 + -10) + pfVar12[2];
        auVar36._12_4_ =
             auVar36._12_4_ + (float)((ulong)*(undefined8 *)(pfVar12 + -10) >> 0x20) + pfVar12[3];
        auVar36._0_12_ = auVar21;
        pfVar12 = pfVar12 + 0x18;
      } while ((ulong)bVar2 - (ulong)uVar10 != lVar11);
      goto LAB_00273268;
    }
    lVar11 = 1;
  }
  else {
    FUN_00290460(param_1._0_8_,param_10,param_8);
    lVar9 = *(long *)(param_10 + 0x30);
    pauVar1 = (undefined1 (*) [16])(lVar9 + 0x20);
    uVar17 = (undefined4)*(undefined8 *)(lVar9 + 0x28);
    auVar38 = *pauVar1;
    auVar21 = SUB1612(*pauVar1,0);
    uVar13 = (undefined4)*(undefined8 *)*pauVar1;
    uVar15 = (undefined4)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    bVar2 = *(byte *)(param_10 + 0x20);
    if ((ulong)bVar2 < 2) goto LAB_0027327c;
    uVar10 = ~(uint)bVar2 & 1;
    if (bVar2 == 2) {
      lVar11 = 1;
      auVar22 = SUB1612(*pauVar1,0);
    }
    else {
      lVar11 = 1;
      pfVar12 = (float *)(lVar9 + 0x80);
      do {
        lVar11 = lVar11 + 2;
        auVar21._0_4_ = auVar38._0_4_ + (float)*(undefined8 *)(pfVar12 + -0xc) + *pfVar12;
        auVar21._4_4_ =
             auVar38._4_4_ + (float)((ulong)*(undefined8 *)(pfVar12 + -0xc) >> 0x20) + pfVar12[1];
        auVar21._8_4_ = auVar38._8_4_ + (float)*(undefined8 *)(pfVar12 + -10) + pfVar12[2];
        auVar38._12_4_ =
             auVar38._12_4_ + (float)((ulong)*(undefined8 *)(pfVar12 + -10) >> 0x20) + pfVar12[3];
        auVar38._0_12_ = auVar21;
        pfVar12 = pfVar12 + 0x18;
      } while ((ulong)bVar2 - (ulong)uVar10 != lVar11);
LAB_00273268:
      auVar22 = auVar21;
      if (uVar10 == 0) goto LAB_0027327c;
    }
  }
  lVar9 = lVar9 + lVar11 * 0x30;
  uVar35 = *(undefined8 *)(lVar9 + 0x20);
  auVar21._0_4_ = auVar22._0_4_ + (float)uVar35;
  auVar21._4_4_ = auVar22._4_4_ + (float)((ulong)uVar35 >> 0x20);
  auVar21._8_4_ = auVar22._8_4_ + (float)*(undefined8 *)(lVar9 + 0x28);
LAB_0027327c:
  auVar26._0_4_ = auVar21._0_4_ * auVar21._0_4_;
  auVar26._4_4_ = auVar21._4_4_ * auVar21._4_4_;
  auVar26._8_4_ = auVar21._8_4_ * auVar21._8_4_;
  auVar26._12_4_ = 0;
  auVar33 = NEON_ext(auVar26,auVar26,8,1);
  auVar27._0_4_ =
       -(uint)(1.1920929e-07 < auVar26._0_4_ + auVar26._4_4_ + auVar33._0_4_ + auVar33._4_4_);
  auVar27._4_4_ = auVar27._0_4_;
  auVar27._8_4_ = auVar27._0_4_;
  auVar27._12_4_ = auVar27._0_4_;
  auVar22._4_4_ = uVar15;
  auVar22._0_4_ = uVar13;
  auVar22._8_4_ = uVar17;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = auVar22 ^ auVar21;
  auVar28._4_4_ = uVar15;
  auVar28._0_4_ = uVar13;
  auVar28._8_4_ = uVar17;
  auVar28._12_4_ = 0;
  auVar28 = auVar28 ^ auVar3 & auVar27;
  fVar20 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
  auVar33 = *param_5;
  fVar16 = auVar28._4_4_;
  fVar34 = auVar28._8_4_;
  auVar23._0_12_ = auVar33._0_12_;
  auVar23._12_4_ = 0;
  fVar30 = fVar20 * fVar20 + -0.5;
  auVar36 = NEON_ext(auVar23,auVar23,8,1);
  auVar38 = NEON_ext(auVar28,auVar28,8,1);
  fVar19 = auVar33._0_4_;
  fVar31 = auVar33._4_4_;
  fVar18 = auVar28._0_4_;
  fVar37 = fVar19 * fVar16 - (float)((ulong)*(undefined8 *)*param_5 >> 0x20) * fVar18;
  auVar29._0_4_ = fVar19 * fVar18;
  auVar29._4_4_ = fVar31 * fVar16;
  auVar29._8_4_ = auVar33._8_4_ * fVar34;
  auVar29._12_4_ = auVar28._12_4_ * 0.0;
  uVar35 = NEON_ext(CONCAT44(fVar31 * fVar34 - (float)*(undefined8 *)(*param_5 + 8) * fVar16,fVar37)
                    ,CONCAT44(auVar36._4_4_ * fVar16 - fVar31 * auVar38._4_4_,
                              auVar36._0_4_ * fVar18 - fVar19 * auVar38._0_4_),4,1);
  fVar14 = fVar18 * fVar30 + (float)uVar35 * fVar20;
  fVar16 = fVar16 * fVar30 + (float)((ulong)uVar35 >> 0x20) * fVar20;
  fVar18 = fVar34 * fVar30 + fVar37 * fVar20;
  fVar20 = fVar20 * 0.0 + 0.0;
  auVar4._4_4_ = fVar16;
  auVar4._0_4_ = fVar14;
  auVar4._8_4_ = fVar18;
  auVar4._12_4_ = fVar20;
  auVar5._4_4_ = fVar16;
  auVar5._0_4_ = fVar14;
  auVar5._8_4_ = fVar18;
  auVar5._12_4_ = fVar20;
  auVar36 = NEON_ext(auVar4,auVar5,8,1);
  auVar38 = NEON_ext(auVar29,auVar29,8,1);
  fVar18 = auVar29._0_4_ + auVar29._4_4_ + auVar38._0_4_ + auVar38._4_4_;
  fVar14 = fVar19 * fVar18 + fVar14;
  fVar16 = fVar31 * fVar18 + fVar16;
  fVar20 = auVar33._8_4_ * fVar18 + auVar36._0_4_;
  fVar18 = fVar18 * 0.0 + 0.0;
  auVar6._4_4_ = fVar16;
  auVar6._0_4_ = fVar14;
  auVar6._8_4_ = fVar20;
  auVar6._12_4_ = fVar18;
  auVar7._4_4_ = fVar16;
  auVar7._0_4_ = fVar14;
  auVar7._8_4_ = fVar20;
  auVar7._12_4_ = fVar18;
  auVar33 = NEON_ext(auVar6,auVar7,8,1);
  fVar14 = fVar14 + fVar14;
  fVar16 = fVar16 + fVar16;
  fVar19 = auVar33._0_4_ + auVar33._0_4_;
  auVar24._0_4_ = fVar14 * fVar14;
  auVar24._4_4_ = fVar16 * fVar16;
  auVar24._8_4_ = fVar19 * fVar19;
  auVar24._12_4_ = 0;
  auVar33 = NEON_ext(auVar24,auVar24,8,1);
  fVar20 = auVar33._0_4_ + auVar33._4_4_;
  fVar18 = auVar24._0_4_ + auVar24._4_4_ + fVar20;
  fVar20 = auVar24._0_4_ + auVar24._4_4_ + fVar20;
  uVar8 = CONCAT44(fVar20,fVar18);
  uVar35 = NEON_frsqrte(uVar8,4);
  fVar31 = (float)uVar35;
  fVar34 = (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar31 * fVar31),uVar8,4);
  fVar31 = fVar31 * (float)uVar35;
  fVar34 = fVar34 * (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar31 * fVar31),uVar8,4);
  fVar31 = fVar31 * (float)uVar35;
  fVar34 = fVar34 * (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar31 * fVar31),uVar8,4);
  fVar31 = fVar31 * (float)uVar35;
  fVar34 = fVar34 * (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar31 * fVar31),uVar8,4);
  uVar25 = CONCAT44(fVar20 * fVar34 * (float)((ulong)uVar35 >> 0x20),fVar18 * fVar31 * (float)uVar35
                   );
  uVar25 = uVar25 ^ (uVar25 ^ uVar8) & CONCAT44(-(uint)(fVar18 == 0.0),-(uint)(fVar18 == 0.0));
  uVar35 = NEON_frecpe(uVar25,4);
  uVar32 = NEON_frecps(uVar25,uVar35,4);
  fVar18 = (float)uVar35 * (float)uVar32;
  fVar20 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar32 >> 0x20);
  uVar35 = NEON_frecps(uVar25,CONCAT44(fVar20,fVar18),4);
  fVar18 = fVar18 * (float)uVar35;
  fVar20 = fVar20 * (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frecps(uVar25,CONCAT44(fVar20,fVar18),4);
  fVar18 = fVar18 * (float)uVar35;
  fVar20 = fVar20 * (float)((ulong)uVar35 >> 0x20);
  uVar35 = NEON_frecps(uVar25,CONCAT44(fVar20,fVar18),4);
  fVar18 = fVar18 * (float)uVar35;
  uVar35 = NEON_frecps(uVar25,CONCAT44(fVar20 * (float)((ulong)uVar35 >> 0x20),fVar18),4);
  fVar18 = fVar18 * (float)uVar35;
  uStack_1e8 = (ulong)(uint)(fVar19 * fVar18);
  local_1f0 = CONCAT44(fVar16 * fVar18,fVar14 * fVar18);
  FUN_00290110(param_10,param_9,&local_1f0,param_5,param_14);
  return 1;
}


