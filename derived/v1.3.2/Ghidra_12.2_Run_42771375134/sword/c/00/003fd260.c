/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fd260; name: FUN_003fd260
 */


bool FUN_003fd260(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  bool bVar21;
  long lVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  undefined1 auVar64 [16];
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  
  lVar25 = *(long *)(param_1 + 0x40);
                    /* try { // try from 003fd2b0 to 003fd2c7 has its CatchHandler @ 003fd6c4 */
  fVar26 = (float)FUN_00294810(&local_70,&local_80,lVar25 + 0x48,
                               *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) +
                                                                      0x48) + 0x720) + 0xa48) + 8) +
                               ((ulong)*(uint *)(param_1 + 0x18) & 0x1fffffff) * 0x20,0);
  fVar27 = local_68;
  fVar28 = local_6c;
  fVar29 = local_70;
  lVar22 = *(long *)(param_1 + 0x10);
  cVar1 = *(char *)(*(long *)(lVar22 + 0x50) + 0xd);
  auVar62 = *(undefined1 (*) [16])(lVar25 + 0x20);
  fVar40 = auVar62._4_4_;
  fVar49 = auVar62._8_4_;
  if (cVar1 != '\x04' && cVar1 != '\x01') {
    lVar22 = 0;
  }
  lVar23 = *(long *)(lVar22 + 0x50);
  auVar64 = *(undefined1 (*) [16])(lVar23 + 0x30);
  fVar58 = (float)((ulong)*(undefined8 *)*(undefined1 (*) [16])(lVar23 + 0x30) >> 0x20);
  auVar20 = *(undefined1 (*) [12])(lVar25 + 0x30);
  auVar5 = *(undefined1 (*) [16])(lVar22 + 0x60);
  auVar44._0_12_ = auVar64._0_12_;
  auVar44._12_4_ = 0;
  auVar60 = NEON_ext(auVar44,auVar44,8,1);
  fVar45 = (float)*(undefined8 *)(lVar23 + 0x38);
  fVar50 = auVar64._0_4_;
  fVar41 = auVar64._4_4_;
  fVar33 = auVar62._12_4_;
  fVar53 = (float)((ulong)*(undefined8 *)(lVar23 + 0x38) >> 0x20);
  auVar34._0_4_ = auVar20._0_4_ - *(float *)(lVar23 + 0x40);
  auVar34._4_4_ = auVar20._4_4_ - *(float *)(lVar23 + 0x44);
  auVar34._8_4_ = auVar20._8_4_ - *(float *)(lVar23 + 0x48);
  auVar34._12_4_ = 0;
  fVar43 = auVar64._8_4_;
  auVar31._0_12_ = auVar62._0_12_;
  auVar31._12_4_ = 0;
  auVar64 = NEON_ext(auVar31,auVar31,8,1);
  auVar42._0_12_ = auVar5._0_12_;
  auVar42._12_4_ = 0;
  fVar51 = auVar62._0_4_;
  auVar62 = NEON_ext(auVar34,auVar34,8,1);
  fVar46 = fVar51 * fVar58 - fVar40 * fVar50;
  uVar59 = NEON_ext(CONCAT44(fVar40 * fVar45 - fVar49 * fVar41,fVar46),
                    CONCAT44(auVar64._4_4_ * fVar41 - fVar40 * auVar60._4_4_,
                             auVar64._0_4_ * fVar50 - fVar51 * auVar60._0_4_),4,1);
  fVar63 = fVar53 * fVar53 + -0.5;
  fVar37 = auVar34._0_4_ * fVar58 - auVar34._4_4_ * fVar50;
  uVar55 = NEON_ext(CONCAT44(auVar34._4_4_ * fVar45 - auVar34._8_4_ * fVar41,fVar37),
                    CONCAT44(auVar62._4_4_ * fVar41 - auVar34._4_4_ * auVar60._4_4_,
                             auVar62._0_4_ * fVar50 - auVar34._0_4_ * auVar60._0_4_),4,1);
  fVar58 = (float)((ulong)*(undefined8 *)*(undefined1 (*) [16])(lVar22 + 0x60) >> 0x20);
  fVar45 = (float)*(undefined8 *)(lVar22 + 0x68);
  fVar30 = (float)((ulong)*(undefined8 *)(lVar22 + 0x68) >> 0x20);
  fVar56 = fVar30 * fVar30 + -0.5;
  auVar61 = NEON_ext(auVar42,auVar42,8,1);
  auVar35._0_4_ = auVar34._0_4_ * fVar50;
  auVar35._4_4_ = auVar34._4_4_ * fVar41;
  auVar35._8_4_ = auVar34._8_4_ * fVar43;
  auVar35._12_4_ = 0;
  auVar32._0_4_ = fVar51 * fVar50;
  auVar32._4_4_ = fVar40 * fVar41;
  auVar32._8_4_ = fVar49 * fVar43;
  auVar32._12_4_ = 0;
  fVar38 = fVar51 * fVar53 + (float)uVar59;
  fVar39 = fVar40 * fVar53 + (float)((ulong)uVar59 >> 0x20);
  fVar46 = fVar49 * fVar53 + fVar46;
  fVar40 = fVar53 * 0.0 + 0.0;
  auVar60._4_4_ = fVar39;
  auVar60._0_4_ = fVar38;
  auVar60._8_4_ = fVar46;
  auVar60._12_4_ = fVar40;
  auVar2._4_4_ = fVar39;
  auVar2._0_4_ = fVar38;
  auVar2._8_4_ = fVar46;
  auVar2._12_4_ = fVar40;
  auVar60 = NEON_ext(auVar60,auVar2,8,1);
  auVar62 = NEON_ext(auVar35,auVar35,8,1);
  fVar46 = auVar34._0_4_ * fVar63 + (float)uVar55 * fVar53;
  fVar47 = auVar34._4_4_ * fVar63 + (float)((ulong)uVar55 >> 0x20) * fVar53;
  fVar49 = auVar34._8_4_ * fVar63 + fVar37 * fVar53;
  fVar51 = fVar53 * 0.0 + 0.0;
  fVar40 = auVar35._0_4_ + auVar35._4_4_ + auVar62._0_4_ + auVar62._4_4_;
  auVar8._4_4_ = fVar47;
  auVar8._0_4_ = fVar46;
  auVar8._8_4_ = fVar49;
  auVar8._12_4_ = fVar51;
  auVar9._4_4_ = fVar47;
  auVar9._0_4_ = fVar46;
  auVar9._8_4_ = fVar49;
  auVar9._12_4_ = fVar51;
  auVar62 = NEON_ext(auVar8,auVar9,8,1);
  auVar64 = NEON_ext(auVar32,auVar32,8,1);
  fVar49 = auVar64._0_4_ + auVar64._4_4_;
  fVar38 = fVar38 - fVar50 * fVar33;
  fVar39 = fVar39 - fVar41 * fVar33;
  fVar51 = auVar60._0_4_ - fVar43 * fVar33;
  fVar37 = 0.0 - fVar33 * 0.0;
  auVar3._4_4_ = fVar39;
  auVar3._0_4_ = fVar38;
  auVar3._8_4_ = fVar51;
  auVar3._12_4_ = fVar37;
  auVar4._4_4_ = fVar39;
  auVar4._0_4_ = fVar38;
  auVar4._8_4_ = fVar51;
  auVar4._12_4_ = fVar37;
  auVar64 = NEON_ext(auVar3,auVar4,8,1);
  fVar46 = fVar50 * fVar40 + fVar46;
  fVar47 = fVar41 * fVar40 + fVar47;
  fVar51 = fVar43 * fVar40 + auVar62._0_4_;
  fVar40 = fVar40 * 0.0 + 0.0;
  auVar10._4_4_ = fVar47;
  auVar10._0_4_ = fVar46;
  auVar10._8_4_ = fVar51;
  auVar10._12_4_ = fVar40;
  auVar11._4_4_ = fVar47;
  auVar11._0_4_ = fVar46;
  auVar11._8_4_ = fVar51;
  auVar11._12_4_ = fVar40;
  auVar62 = NEON_ext(auVar10,auVar11,8,1);
  fVar51 = auVar64._0_4_;
  uVar55 = NEON_ext(CONCAT44(fVar39,fVar38),(ulong)(uint)fVar51,4,1);
  fVar37 = fVar33 * fVar53 + auVar32._0_4_ + auVar32._4_4_ + fVar49;
  fVar46 = fVar46 + fVar46;
  fVar47 = fVar47 + fVar47;
  fVar50 = auVar62._0_4_ + auVar62._0_4_;
  auVar12._4_4_ = fVar47;
  auVar12._0_4_ = fVar46;
  auVar12._8_4_ = fVar50;
  auVar12._12_4_ = 0;
  auVar13._4_4_ = fVar47;
  auVar13._0_4_ = fVar46;
  auVar13._8_4_ = fVar50;
  auVar13._12_4_ = 0;
  auVar62 = NEON_ext(auVar12,auVar13,8,1);
  fVar41 = auVar5._0_4_;
  fVar43 = auVar5._4_4_;
  fVar40 = fVar41 * fVar46;
  fVar48 = fVar43 * fVar47;
  fVar63 = auVar5._8_4_;
  fVar52 = fVar41 * fVar47 - fVar58 * fVar46;
  fVar54 = fVar41 * (float)uVar55 - fVar58 * fVar38;
  uVar59 = NEON_ext(CONCAT44(fVar43 * fVar50 - fVar45 * fVar47,fVar52),
                    CONCAT44(auVar61._4_4_ * fVar47 - fVar43 * auVar62._4_4_,
                             auVar61._0_4_ * fVar46 - fVar41 * auVar62._0_4_),4,1);
  auVar14._4_4_ = fVar48;
  auVar14._0_4_ = fVar40;
  auVar14._8_4_ = fVar63 * fVar50;
  auVar14._12_4_ = 0;
  auVar15._4_4_ = fVar48;
  auVar15._0_4_ = fVar40;
  auVar15._8_4_ = fVar63 * fVar50;
  auVar15._12_4_ = 0;
  auVar64 = NEON_ext(auVar14,auVar15,8,1);
  fVar57 = fVar46 * fVar56 + (float)uVar59 * fVar30;
  fVar47 = fVar47 * fVar56 + (float)((ulong)uVar59 >> 0x20) * fVar30;
  fVar58 = fVar50 * fVar56 + fVar52 * fVar30;
  fVar46 = fVar30 * 0.0 + 0.0;
  auVar18._4_4_ = fVar47;
  auVar18._0_4_ = fVar57;
  auVar18._8_4_ = fVar58;
  auVar18._12_4_ = fVar46;
  auVar19._4_4_ = fVar47;
  auVar19._0_4_ = fVar57;
  auVar19._8_4_ = fVar58;
  auVar19._12_4_ = fVar46;
  auVar62 = NEON_ext(auVar18,auVar19,8,1);
  fVar46 = fVar41 * fVar38;
  fVar50 = fVar43 * fVar39;
  fVar40 = fVar40 + fVar48 + auVar64._0_4_ + auVar64._4_4_;
  uVar59 = NEON_ext(CONCAT44(fVar43 * (float)((ulong)uVar55 >> 0x20) - fVar45 * fVar39,fVar54),
                    CONCAT44(auVar61._4_4_ * fVar39 - fVar43 * 0.0,
                             auVar61._0_4_ * fVar38 - fVar41 * fVar51),4,1);
  fVar57 = fVar41 * fVar40 + fVar57;
  fVar47 = fVar43 * fVar40 + fVar47;
  fVar58 = fVar63 * fVar40 + auVar62._0_4_;
  fVar40 = fVar40 * 0.0 + 0.0;
  auVar16._4_4_ = fVar47;
  auVar16._0_4_ = fVar57;
  auVar16._8_4_ = fVar58;
  auVar16._12_4_ = fVar40;
  auVar17._4_4_ = fVar47;
  auVar17._0_4_ = fVar57;
  auVar17._8_4_ = fVar58;
  auVar17._12_4_ = fVar40;
  auVar64 = NEON_ext(auVar16,auVar17,8,1);
  fVar58 = fVar38 * fVar30 + (float)uVar59;
  fVar45 = fVar39 * fVar30 + (float)((ulong)uVar59 >> 0x20);
  fVar54 = fVar51 * fVar30 + fVar54;
  fVar40 = fVar30 * 0.0 + 0.0;
  auVar6._4_4_ = fVar45;
  auVar6._0_4_ = fVar58;
  auVar6._8_4_ = fVar54;
  auVar6._12_4_ = fVar40;
  auVar7._4_4_ = fVar45;
  auVar7._0_4_ = fVar58;
  auVar7._8_4_ = fVar54;
  auVar7._12_4_ = fVar40;
  auVar60 = NEON_ext(auVar6,auVar7,8,1);
  auVar5._4_4_ = fVar50;
  auVar5._0_4_ = fVar46;
  auVar5._8_4_ = fVar63 * fVar51;
  auVar5._12_4_ = 0;
  auVar61._4_4_ = fVar50;
  auVar61._0_4_ = fVar46;
  auVar61._8_4_ = fVar63 * fVar51;
  auVar61._12_4_ = 0;
  auVar62 = NEON_ext(auVar5,auVar61,8,1);
  fVar40 = auVar62._0_4_ + auVar62._4_4_;
  auVar36._0_8_ = CONCAT44(fVar43 * fVar37 + fVar45,fVar41 * fVar37 + fVar58);
  auVar36._8_4_ = fVar63 * fVar37 + auVar60._0_4_;
  fVar51 = (fVar33 * fVar53 + auVar32._0_4_ + auVar32._4_4_ + fVar49) * fVar30 -
           (fVar46 + fVar50 + fVar40);
  fVar49 = *(float *)(lVar22 + 0x70) + fVar57 + fVar57;
  fVar58 = *(float *)(lVar22 + 0x74) + fVar47 + fVar47;
  fVar45 = *(float *)(lVar22 + 0x78) + auVar64._0_4_ + auVar64._0_4_;
  auVar62._4_4_ = fVar58;
  auVar62._0_4_ = fVar49;
  auVar62._8_4_ = fVar45;
  auVar62._12_4_ = 0;
  auVar64._4_4_ = fVar58;
  auVar64._0_4_ = fVar49;
  auVar64._8_4_ = fVar45;
  auVar64._12_4_ = 0;
  auVar62 = NEON_ext(auVar62,auVar64,8,1);
  auVar36._12_4_ = fVar51;
  local_88 = auVar62._0_4_;
  local_90 = CONCAT44(fVar58,fVar49);
  uStack_98 = auVar36._8_8_;
                    /* try { // try from 003fd5a0 to 003fd5b7 has its CatchHandler @ 003fd6c0 */
  local_a0 = auVar36._0_8_;
  FUN_002938e0(0,0x3f800000,CONCAT44(fVar51,fVar37 * fVar30 - (fVar46 + fVar50 + fVar40)),&local_b8,
               lVar25 + 0x48,&local_a0,0,*PTR_DAT_02710c00 == '\0');
  local_70 = (local_b8 + local_ac) * 0.5 - local_70;
  local_6c = (fStack_b4 + fStack_a8) * 0.5 - local_6c;
  local_68 = (local_b0 + local_a4) * 0.5 - local_68;
  fVar58 = fVar29 - local_80;
  fVar40 = fVar28 - local_7c;
  fVar49 = fVar27 - local_78;
  fVar29 = fVar29 + local_80;
  fVar28 = fVar28 + local_7c;
  fVar27 = fVar27 + local_78;
  bVar21 = fVar26 * fVar26 <= local_70 * local_70 + local_6c * local_6c + local_68 * local_68;
  if (bVar21) {
    if (local_b8 <= fVar58) {
      fVar58 = local_b8;
    }
    if (fStack_b4 <= fVar40) {
      fVar40 = fStack_b4;
    }
    if (local_b0 <= fVar49) {
      fVar49 = local_b0;
    }
    if (fVar29 <= local_ac) {
      fVar29 = local_ac;
    }
    if (fVar28 <= fStack_a8) {
      fVar28 = fStack_a8;
    }
    if (fVar27 <= local_a4) {
      fVar27 = local_a4;
    }
  }
  lVar22 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x808);
  pfVar24 = (float *)(*(long *)(lVar22 + 8) + ((ulong)*(uint *)(param_1 + 0x18) & 0x1fffffff) * 0x18
                     );
  *pfVar24 = fVar58;
  pfVar24[1] = fVar40;
  pfVar24[2] = fVar49;
  pfVar24[3] = fVar29;
  pfVar24[4] = fVar28;
  pfVar24[5] = fVar27;
  *(undefined1 *)(lVar22 + 0x18) = 1;
  return bVar21;
}


