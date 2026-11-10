/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397160; name: FUN_00397160
 */


void FUN_00397160(undefined8 param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  byte *pbVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar35 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  pauVar13 = (undefined1 (*) [16])local_80;
  lVar12 = *(long *)(param_3 + 0x10);
  pauVar1 = (undefined1 (*) [16])(param_2 + 0x40);
  if ((*(uint *)(param_2 + 8) & 4) != 0) {
    pauVar1 = *(undefined1 (**) [16])(param_2 + 0x10);
  }
  pbVar2 = (byte *)(param_3 + 0x4c);
  if ((*(uint *)(param_3 + 0x11c) & 0x4000) != 0) {
    pbVar2 = (byte *)(lVar12 + 0x14c);
  }
  if ((~*pbVar2 & 3) == 0) {
    if ((*(uint *)(param_3 + 0x11c) >> 0xf & 1) != 0) {
      local_80[0] = *(undefined4 *)(lVar12 + 0x100);
      local_80[1] = *(undefined4 *)(lVar12 + 0x104);
      local_80[2] = *(undefined4 *)(lVar12 + 0x108);
      local_80[3] = *(undefined4 *)(lVar12 + 0x10c);
      local_70 = *(undefined4 *)(lVar12 + 0x110);
      local_6c = *(undefined4 *)(lVar12 + 0x114);
      uStack_68 = *(undefined4 *)(lVar12 + 0x118);
      goto LAB_00397230;
    }
    if (((*(uint *)(param_3 + 8) >> 0x1e < 3) && ((*(byte *)(param_3 + 0x4c) & 1) != 0)) &&
       (uVar11 = FUN_003becd0(param_3 + 0x20,local_80), pauVar13 = (undefined1 (*) [16])local_80,
       (uVar11 & 1) != 0)) goto LAB_00397230;
  }
  pauVar13 = (undefined1 (*) [16])(param_3 + 0xe0);
LAB_00397230:
  auVar14 = *pauVar1;
  pauVar3 = (undefined1 (*) [16])(param_3 + 0x50);
  if ((*(uint *)(param_3 + 0x11c) & 0x200) != 0) {
    pauVar3 = (undefined1 (*) [16])(*(long *)(param_3 + 0x10) + 0xd0);
  }
  auVar46 = *pauVar3;
  fVar25 = auVar14._4_4_;
  auVar38._0_12_ = auVar14._0_12_;
  auVar38._12_4_ = 0;
  fVar29 = auVar46._4_4_;
  auVar19._0_12_ = auVar46._0_12_;
  auVar19._12_4_ = 0;
  fVar28 = auVar14._8_4_;
  fVar26 = auVar46._0_4_;
  fVar18 = auVar46._8_4_;
  auVar43 = NEON_ext(auVar19,auVar19,8,1);
  fVar17 = auVar14._12_4_;
  fVar21 = auVar46._12_4_;
  fVar37 = auVar14._0_4_;
  auVar14 = NEON_ext(auVar38,auVar38,8,1);
  auVar22._0_4_ = fVar37 * fVar26;
  auVar22._4_4_ = fVar25 * fVar29;
  auVar22._8_4_ = fVar28 * fVar18;
  auVar22._12_4_ = 0;
  fVar31 = fVar37 * fVar29 - fVar25 * fVar26;
  uVar44 = NEON_ext(CONCAT44(fVar25 * fVar18 - fVar28 * fVar29,fVar31),
                    CONCAT44(auVar14._4_4_ * fVar29 - fVar25 * auVar43._4_4_,
                             auVar14._0_4_ * fVar26 - fVar37 * auVar43._0_4_),4,1);
  fVar24 = (float)*(undefined8 *)pauVar1[1] - *(float *)pauVar3[1];
  fVar27 = (float)((ulong)*(undefined8 *)pauVar1[1] >> 0x20) - *(float *)(pauVar3[1] + 4);
  fVar30 = *(float *)(pauVar1[1] + 8) - *(float *)(pauVar3[1] + 8);
  auVar33._0_4_ = fVar37 * fVar21 + (float)uVar44;
  auVar33._4_4_ = fVar25 * fVar21 + (float)((ulong)uVar44 >> 0x20);
  auVar33._8_4_ = fVar28 * fVar21 + fVar31;
  auVar33._12_4_ = fVar21 * 0.0 + 0.0;
  auVar41._4_4_ = fVar27;
  auVar41._0_4_ = fVar24;
  auVar41._8_4_ = fVar30;
  auVar41._12_4_ = 0;
  auVar42._4_4_ = fVar27;
  auVar42._0_4_ = fVar24;
  auVar42._8_4_ = fVar30;
  auVar42._12_4_ = 0;
  auVar46 = NEON_ext(auVar41,auVar42,8,1);
  auVar14 = NEON_ext(auVar33,auVar33,8,1);
  fVar40 = fVar24 * fVar29 - fVar27 * fVar26;
  fVar37 = fVar21 * fVar21 + -0.5;
  uVar44 = NEON_ext(CONCAT44(fVar27 * fVar18 - fVar30 * fVar29,fVar40),
                    CONCAT44(auVar46._4_4_ * fVar29 - fVar27 * auVar43._4_4_,
                             auVar46._0_4_ * fVar26 - fVar24 * auVar43._0_4_),4,1);
  fVar25 = fVar24 * fVar26;
  fVar28 = fVar27 * fVar29;
  auVar43._4_4_ = fVar28;
  auVar43._0_4_ = fVar25;
  auVar43._8_4_ = fVar30 * fVar18;
  auVar43._12_4_ = 0;
  auVar4._4_4_ = fVar28;
  auVar4._0_4_ = fVar25;
  auVar4._8_4_ = fVar30 * fVar18;
  auVar4._12_4_ = 0;
  auVar41 = NEON_ext(auVar43,auVar4,8,1);
  fVar31 = auVar33._0_4_ - fVar26 * fVar17;
  fVar36 = auVar33._4_4_ - fVar29 * fVar17;
  auVar35._0_8_ = CONCAT44(fVar36,fVar31);
  auVar35._8_4_ = auVar14._0_4_ - fVar18 * fVar17;
  auVar35._12_4_ = 0.0 - fVar17 * 0.0;
  auVar14 = NEON_ext(auVar35,auVar35,8,1);
  auVar42 = NEON_ext(auVar22,auVar22,8,1);
  fVar32 = auVar14._0_4_;
  uVar45 = NEON_ext(auVar35._0_8_,(ulong)(uint)fVar32,4,1);
  auVar39._0_4_ = fVar24 * fVar37 + (float)uVar44 * fVar21;
  auVar39._4_4_ = fVar27 * fVar37 + (float)((ulong)uVar44 >> 0x20) * fVar21;
  auVar39._8_4_ = fVar30 * fVar37 + fVar40 * fVar21;
  auVar39._12_4_ = fVar21 * 0.0 + 0.0;
  auVar46 = NEON_ext(auVar39,auVar39,8,1);
  fVar25 = fVar25 + fVar28 + auVar41._0_4_ + auVar41._4_4_;
  auVar14 = *pauVar13;
  fVar24 = auVar14._4_4_;
  fVar26 = fVar26 * fVar25 + auVar39._0_4_;
  fVar29 = fVar29 * fVar25 + auVar39._4_4_;
  fVar28 = fVar18 * fVar25 + auVar46._0_4_;
  fVar25 = fVar25 * 0.0 + 0.0;
  auVar5._4_4_ = fVar29;
  auVar5._0_4_ = fVar26;
  auVar5._8_4_ = fVar28;
  auVar5._12_4_ = fVar25;
  auVar6._4_4_ = fVar29;
  auVar6._0_4_ = fVar26;
  auVar6._8_4_ = fVar28;
  auVar6._12_4_ = fVar25;
  auVar46 = NEON_ext(auVar5,auVar6,8,1);
  fVar27 = auVar14._8_4_;
  fVar28 = auVar42._0_4_ + auVar42._4_4_;
  auVar20._0_12_ = auVar14._0_12_;
  auVar20._12_4_ = 0;
  auVar41 = NEON_ext(auVar20,auVar20,8,1);
  fVar26 = fVar26 + fVar26;
  fVar29 = fVar29 + fVar29;
  fVar47 = auVar46._0_4_ + auVar46._0_4_;
  fVar18 = auVar14._0_4_;
  fVar25 = fVar18 * (float)uVar45 - fVar24 * fVar31;
  fVar37 = fVar18 * fVar31;
  fVar40 = fVar24 * fVar36;
  fVar30 = auVar14._12_4_;
  uVar44 = NEON_ext(CONCAT44(fVar24 * (float)((ulong)uVar45 >> 0x20) - fVar27 * fVar36,fVar25),
                    CONCAT44(auVar41._4_4_ * fVar36 - fVar24 * 0.0,
                             auVar41._0_4_ * fVar31 - fVar18 * fVar32),4,1);
  auVar34._0_4_ = fVar31 * fVar30 + (float)uVar44;
  auVar34._4_4_ = fVar36 * fVar30 + (float)((ulong)uVar44 >> 0x20);
  auVar34._8_4_ = fVar32 * fVar30 + fVar25;
  auVar34._12_4_ = fVar30 * 0.0 + 0.0;
  auVar42 = NEON_ext(auVar34,auVar34,8,1);
  fVar31 = fVar17 * fVar21 + auVar22._0_4_ + auVar22._4_4_ + fVar28;
  fVar25 = fVar30 * fVar30 + -0.5;
  auVar9._4_4_ = fVar29;
  auVar9._0_4_ = fVar26;
  auVar9._8_4_ = fVar47;
  auVar9._12_4_ = 0;
  auVar10._4_4_ = fVar29;
  auVar10._0_4_ = fVar26;
  auVar10._8_4_ = fVar47;
  auVar10._12_4_ = 0;
  auVar14 = NEON_ext(auVar9,auVar10,8,1);
  fVar36 = fVar18 * fVar29 - fVar24 * fVar26;
  uVar44 = NEON_ext(CONCAT44(fVar24 * fVar47 - fVar27 * fVar29,fVar36),
                    CONCAT44(auVar41._4_4_ * fVar29 - fVar24 * auVar14._4_4_,
                             auVar41._0_4_ * fVar26 - fVar18 * auVar14._0_4_),4,1);
  auVar15._0_4_ = fVar26 * fVar25 + (float)uVar44 * fVar30;
  auVar15._4_4_ = fVar29 * fVar25 + (float)((ulong)uVar44 >> 0x20) * fVar30;
  auVar15._8_4_ = fVar47 * fVar25 + fVar36 * fVar30;
  auVar15._12_4_ = fVar30 * 0.0 + 0.0;
  auVar14 = NEON_ext(auVar15,auVar15,8,1);
  auVar7._4_4_ = fVar40;
  auVar7._0_4_ = fVar37;
  auVar7._8_4_ = fVar27 * fVar32;
  auVar7._12_4_ = 0;
  auVar8._4_4_ = fVar40;
  auVar8._0_4_ = fVar37;
  auVar8._8_4_ = fVar27 * fVar32;
  auVar8._12_4_ = 0;
  auVar46 = NEON_ext(auVar7,auVar8,8,1);
  auVar23._0_4_ = fVar18 * fVar26;
  auVar23._4_4_ = fVar24 * fVar29;
  auVar23._8_4_ = fVar27 * fVar47;
  auVar23._12_4_ = 0;
  auVar41 = NEON_ext(auVar23,auVar23,8,1);
  fVar25 = auVar23._0_4_ + auVar23._4_4_ + auVar41._0_4_ + auVar41._4_4_;
  auVar16._0_4_ = fVar18 * fVar25 + auVar15._0_4_;
  auVar16._4_4_ = fVar24 * fVar25 + auVar15._4_4_;
  auVar16._8_4_ = fVar27 * fVar25 + auVar14._0_4_;
  auVar16._12_4_ = fVar25 * 0.0 + 0.0;
  auVar14 = NEON_ext(auVar16,auVar16,8,1);
  fVar25 = *(float *)pauVar13[1] + auVar16._0_4_ + auVar16._0_4_;
  fVar26 = *(float *)(pauVar13[1] + 4) + auVar16._4_4_ + auVar16._4_4_;
  fVar29 = *(float *)(pauVar13[1] + 8) + auVar14._0_4_ + auVar14._0_4_;
  uStack_58 = CONCAT44((fVar17 * fVar21 + auVar22._0_4_ + auVar22._4_4_ + fVar28) * fVar30 -
                       (fVar37 + fVar40 + auVar46._0_4_ + auVar46._4_4_),
                       fVar27 * fVar31 + auVar42._0_4_);
  auVar14._4_4_ = fVar26;
  auVar14._0_4_ = fVar25;
  auVar14._8_4_ = fVar29;
  auVar14._12_4_ = 0;
  auVar46._4_4_ = fVar26;
  auVar46._0_4_ = fVar25;
  auVar46._8_4_ = fVar29;
  auVar46._12_4_ = 0;
  auVar14 = NEON_ext(auVar14,auVar46,8,1);
  local_48 = auVar14._0_4_;
  local_50 = CONCAT44(fVar26,fVar25);
  local_60 = CONCAT44(fVar24 * fVar31 + auVar34._4_4_,fVar18 * fVar31 + auVar34._0_4_);
  lVar12 = param_2 + 0x68;
  if ((*(uint *)(param_2 + 8) & 1) != 0) {
    lVar12 = *(long *)(param_2 + 0x10) + 0x38;
  }
  FUN_002938e0(0,DAT_01d4be58,param_1,lVar12,&local_60,0,0);
  return;
}


