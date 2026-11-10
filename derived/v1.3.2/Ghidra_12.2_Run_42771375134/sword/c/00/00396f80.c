/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00396f80; name: FUN_00396f80
 */


void FUN_00396f80(undefined8 param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [16];
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  pauVar2 = (undefined1 (*) [12])(param_2 + 0x40);
  if ((*(uint *)(param_2 + 8) & 4) != 0) {
    pauVar2 = *(undefined1 (**) [12])(param_2 + 0x10);
  }
  fVar22 = *(float *)(pauVar2[1] + 8);
  fVar25 = *(float *)pauVar2[2];
  pauVar1 = (undefined1 (*) [12])(pauVar2[1] + 4);
  fVar19 = *(float *)*pauVar1;
  pauVar3 = (undefined1 (*) [16])(param_3 + 0x30);
  if ((*(uint *)(param_3 + 8) & 0x40) != 0) {
    pauVar3 = (undefined1 (*) [16])(*(long *)(param_3 + 0x10) + 0xb0);
  }
  fVar17 = (float)*(undefined8 *)(*pauVar3 + 8);
  fVar18 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
  auVar24 = *pauVar3;
  fVar36 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  auVar33._0_12_ = auVar24._0_12_;
  auVar33._12_4_ = 0;
  auVar5._12_4_ = 0;
  auVar5._0_12_ = *pauVar1;
  auVar6._12_4_ = 0;
  auVar6._0_12_ = *pauVar1;
  auVar38 = NEON_ext(auVar5,auVar6,8,1);
  auVar26 = NEON_ext(auVar33,auVar33,8,1);
  fVar32 = auVar24._0_4_;
  fVar34 = auVar24._4_4_;
  fVar27 = fVar18 * fVar18 + -0.5;
  fVar23 = fVar32 * fVar22 - fVar36 * fVar19;
  fVar39 = (float)*(undefined8 *)(*pauVar2 + 8);
  fVar40 = (float)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
  fVar29 = (float)*(undefined8 *)*pauVar2;
  fVar31 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  uVar37 = NEON_ext(CONCAT44(fVar34 * fVar25 - fVar17 * fVar22,fVar23),
                    CONCAT44(auVar26._4_4_ * fVar22 - fVar34 * auVar38._4_4_,
                             auVar26._0_4_ * fVar19 - fVar32 * auVar38._0_4_),4,1);
  fVar35 = auVar24._8_4_;
  fVar20 = fVar32 * fVar19;
  fVar21 = fVar34 * fVar22;
  fVar36 = fVar32 * fVar31 - fVar36 * fVar29;
  auVar7._4_4_ = fVar21;
  auVar7._0_4_ = fVar20;
  auVar7._8_4_ = fVar35 * fVar25;
  auVar7._12_4_ = 0;
  auVar8._4_4_ = fVar21;
  auVar8._0_4_ = fVar20;
  auVar8._8_4_ = fVar35 * fVar25;
  auVar8._12_4_ = 0;
  auVar41 = NEON_ext(auVar7,auVar8,8,1);
  fVar28 = fVar19 * fVar27 + (float)uVar37 * fVar18;
  fVar30 = fVar22 * fVar27 + (float)((ulong)uVar37 >> 0x20) * fVar18;
  fVar19 = fVar25 * fVar27 + fVar23 * fVar18;
  fVar22 = fVar18 * 0.0 + 0.0;
  auVar11._4_4_ = fVar30;
  auVar11._0_4_ = fVar28;
  auVar11._8_4_ = fVar19;
  auVar11._12_4_ = fVar22;
  auVar12._4_4_ = fVar30;
  auVar12._0_4_ = fVar28;
  auVar12._8_4_ = fVar19;
  auVar12._12_4_ = fVar22;
  auVar38 = NEON_ext(auVar11,auVar12,8,1);
  auVar15._12_4_ = 0;
  auVar15._0_12_ = *pauVar2;
  auVar16._12_4_ = 0;
  auVar16._0_12_ = *pauVar2;
  auVar24 = NEON_ext(auVar15,auVar16,8,1);
  fVar19 = fVar20 + fVar21 + auVar41._0_4_ + auVar41._4_4_;
  uVar37 = NEON_ext(CONCAT44(fVar34 * fVar39 - fVar17 * fVar31,fVar36),
                    CONCAT44(auVar26._4_4_ * fVar31 - fVar34 * auVar24._4_4_,
                             auVar26._0_4_ * fVar29 - fVar32 * auVar24._0_4_),4,1);
  fVar28 = fVar32 * fVar19 + fVar28;
  fVar30 = fVar34 * fVar19 + fVar30;
  fVar22 = fVar35 * fVar19 + auVar38._0_4_;
  fVar19 = fVar19 * 0.0 + 0.0;
  auVar9._4_4_ = fVar30;
  auVar9._0_4_ = fVar28;
  auVar9._8_4_ = fVar22;
  auVar9._12_4_ = fVar19;
  auVar10._4_4_ = fVar30;
  auVar10._0_4_ = fVar28;
  auVar10._8_4_ = fVar22;
  auVar10._12_4_ = fVar19;
  auVar24 = NEON_ext(auVar9,auVar10,8,1);
  fVar17 = fVar29 * fVar18 + (float)uVar37;
  fVar20 = fVar31 * fVar18 + (float)((ulong)uVar37 >> 0x20);
  fVar36 = fVar39 * fVar18 + fVar36;
  fVar19 = fVar18 * 0.0 + 0.0;
  auVar38._4_4_ = fVar20;
  auVar38._0_4_ = fVar17;
  auVar38._8_4_ = fVar36;
  auVar38._12_4_ = fVar19;
  auVar41._4_4_ = fVar20;
  auVar41._0_4_ = fVar17;
  auVar41._8_4_ = fVar36;
  auVar41._12_4_ = fVar19;
  auVar38 = NEON_ext(auVar38,auVar41,8,1);
  fVar29 = fVar32 * fVar29;
  fVar31 = fVar34 * fVar31;
  auVar13._4_4_ = fVar31;
  auVar13._0_4_ = fVar29;
  auVar13._8_4_ = fVar35 * fVar39;
  auVar13._12_4_ = 0;
  auVar14._4_4_ = fVar31;
  auVar14._0_4_ = fVar29;
  auVar14._8_4_ = fVar35 * fVar39;
  auVar14._12_4_ = 0;
  auVar26 = NEON_ext(auVar13,auVar14,8,1);
  fVar17 = fVar32 * fVar40 + fVar17;
  fVar22 = *(float *)pauVar3[1] + fVar28 + fVar28;
  fVar25 = *(float *)(pauVar3[1] + 4) + fVar30 + fVar30;
  fVar36 = *(float *)(pauVar3[1] + 8) + auVar24._0_4_ + auVar24._0_4_;
  fVar19 = auVar26._0_4_ + auVar26._4_4_;
  auVar24._4_4_ = fVar25;
  auVar24._0_4_ = fVar22;
  auVar24._8_4_ = fVar36;
  auVar24._12_4_ = 0;
  auVar26._4_4_ = fVar25;
  auVar26._0_4_ = fVar22;
  auVar26._8_4_ = fVar36;
  auVar26._12_4_ = 0;
  auVar24 = NEON_ext(auVar24,auVar26,8,1);
  local_18 = auVar24._0_4_;
  local_20 = CONCAT44(fVar25,fVar22);
  uStack_28 = CONCAT44(fVar18 * fVar40 - (fVar29 + fVar31 + fVar19),fVar35 * fVar40 + auVar38._0_4_)
  ;
  local_30 = CONCAT44(fVar34 * fVar40 + fVar20,fVar17);
  puVar4 = (undefined1 *)(param_2 + 0x68);
  if ((*(uint *)(param_2 + 8) & 1) != 0) {
    puVar4 = (*(undefined1 (**) [12])(param_2 + 0x10))[4] + 8;
  }
  FUN_002938e0(0,DAT_01d4be58,fVar17,fVar18 * fVar40 - (fVar29 + fVar31 + fVar19),param_1,puVar4,
               &local_30,0,0);
  return;
}


