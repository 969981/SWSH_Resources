/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfd2e0; name: FUN_00dfd2e0
 */


void FUN_00dfd2e0(undefined8 param_1,undefined8 *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  float fVar9;
  float fVar12;
  ulong uVar10;
  undefined1 auVar11 [16];
  float fVar13;
  int iVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined1 auVar20 [16];
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float local_a0;
  float fStack_9c;
  ulong local_88;
  undefined1 auStack_80 [24];
  float fStack_68;
  ulong local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar2 + 0x60);
  FUN_00dfb240(auStack_80,param_1);
  lVar3 = *(long *)(lVar4 + 0x100);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x128);
  uVar45 = *(undefined8 *)(lVar1 + 0xe8);
  uVar43 = *(undefined8 *)(lVar1 + 0xe0);
  uVar40 = *(undefined8 *)(lVar1 + 0xf8);
  uVar38 = *(undefined8 *)(lVar1 + 0xf0);
  uVar31 = *(undefined8 *)(lVar1 + 0x108);
  uVar29 = *(undefined8 *)(lVar1 + 0x100);
  uVar36 = *(undefined8 *)(lVar1 + 0x118);
  uVar34 = *(undefined8 *)(lVar1 + 0x110);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  local_a0 = auStack_80._16_4_;
  fStack_9c = auStack_80._20_4_;
  fVar18 = local_a0 + (float)*param_2;
  fVar9 = fStack_9c + (float)((ulong)*param_2 >> 0x20);
  fVar12 = fStack_68 + (float)param_2[1];
  fVar42 = (float)uVar43;
  fVar44 = (float)((ulong)uVar43 >> 0x20);
  fVar46 = (float)((ulong)uVar45 >> 0x20);
  fVar37 = (float)uVar38;
  fVar39 = (float)((ulong)uVar38 >> 0x20);
  fVar41 = (float)((ulong)uVar40 >> 0x20);
  fVar28 = (float)uVar29;
  fVar30 = (float)((ulong)uVar29 >> 0x20);
  fVar32 = (float)((ulong)uVar31 >> 0x20);
  fVar33 = (float)uVar34;
  fVar35 = (float)((ulong)uVar34 >> 0x20);
  fVar13 = (float)((ulong)uVar36 >> 0x20);
  fVar17 = fVar13 + fVar46 * fVar18 + fVar41 * fVar9 + fVar32 * fVar12;
  auVar11._4_4_ = fVar17;
  auVar11._0_4_ = fVar17;
  auVar11._8_4_ = fVar17;
  auVar11._12_4_ = fVar17;
  auVar16 = NEON_frecpe(auVar11,4);
  auVar19 = NEON_frecps(auVar16,auVar11,4);
  auVar20._0_4_ = auVar16._0_4_ * auVar19._0_4_;
  auVar20._4_4_ = auVar16._4_4_ * auVar19._4_4_;
  auVar20._8_4_ = auVar16._8_4_ * auVar19._8_4_;
  auVar20._12_4_ = auVar16._12_4_ * auVar19._12_4_;
  auVar11 = NEON_frecps(auVar20,auVar11,4);
  fVar17 = auVar20._0_4_ * auVar11._0_4_ *
           (fVar33 + fVar42 * fVar18 + fVar37 * fVar9 + fVar28 * fVar12);
  fVar18 = auVar20._4_4_ * auVar11._4_4_ *
           (fVar35 + fVar44 * fVar18 + fVar39 * fVar9 + fVar30 * fVar12);
  local_a0 = local_a0 + *param_3;
  fStack_9c = fStack_9c + param_3[1];
  fStack_68 = fStack_68 + param_3[2];
  fVar13 = fVar13 + fVar46 * local_a0 + fVar41 * fStack_9c + fVar32 * fStack_68;
  auVar16._4_4_ = fVar13;
  auVar16._0_4_ = fVar13;
  auVar16._8_4_ = fVar13;
  auVar16._12_4_ = fVar13;
  auVar11 = NEON_frecpe(auVar16,4);
  auVar20 = NEON_frecps(auVar11,auVar16,4);
  auVar19._0_4_ = auVar11._0_4_ * auVar20._0_4_;
  auVar19._4_4_ = auVar11._4_4_ * auVar20._4_4_;
  auVar19._8_4_ = auVar11._8_4_ * auVar20._8_4_;
  auVar19._12_4_ = auVar11._12_4_ * auVar20._12_4_;
  auVar11 = NEON_frecps(auVar19,auVar16,4);
  bVar21 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar22 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar23 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar24 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar25 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar26 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar27 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  fVar9 = auVar19._0_4_ * auVar11._0_4_ *
          (fVar33 + fVar42 * local_a0 + fVar37 * fStack_9c + fVar28 * fStack_68);
  fVar12 = auVar19._4_4_ * auVar11._4_4_ *
           (fVar35 + fVar44 * local_a0 + fVar39 * fStack_9c + fVar30 * fStack_68);
  fVar9 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & bVar23,
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & bVar22,
                                   CONCAT11((byte)((uint)fVar9 >> 8) & bVar21,
                                            SUB41(fVar9,0) & (byte)DAT_01d4ab50)));
  fVar17 = DAT_01d4c030 *
           (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & bVar23,
                           CONCAT12((byte)((uint)fVar17 >> 0x10) & bVar22,
                                    CONCAT11((byte)((uint)fVar17 >> 8) & bVar21,
                                             SUB41(fVar17,0) & (byte)DAT_01d4ab50)));
  fVar13 = DAT_01d4beac *
           (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & bVar27,
                           CONCAT12((byte)((uint)fVar18 >> 0x10) & bVar26,
                                    CONCAT11((byte)((uint)fVar18 >> 8) & bVar25,
                                             SUB41(fVar18,0) & bVar24)));
  fVar18 = DAT_01d4beac *
           (float)(CONCAT17((byte)((uint)fVar12 >> 0x18) & bVar27,
                            CONCAT16((byte)((uint)fVar12 >> 0x10) & bVar26,
                                     CONCAT15((byte)((uint)fVar12 >> 8) & bVar25,
                                              CONCAT14(SUB41(fVar12,0) & bVar24,fVar9)))) >> 0x20);
  iVar14 = -(uint)(fVar18 < fVar13);
  uVar15 = CONCAT44(iVar14,iVar14);
  uVar5 = SUB41(fVar13,0);
  uVar6 = (undefined1)((uint)fVar13 >> 8);
  uVar7 = (undefined1)((uint)fVar13 >> 0x10);
  uVar8 = (undefined1)((uint)fVar13 >> 0x18);
  uVar10 = CONCAT44(fVar18,DAT_01d4c030 * fVar9);
  local_88 = uVar10 ^ (uVar10 ^ CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,fVar17))
                                                       ))) & uVar15;
  local_38 = CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,fVar17)))) ^
             (CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,fVar17)))) ^ uVar10) &
             uVar15;
  FUN_016b1490(*(undefined8 *)(lVar4 + 0x630),&local_38,&local_88);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


