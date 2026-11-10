/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002854f0; name: FUN_002854f0
 */


void FUN_002854f0(float param_1,long param_2,long param_3,long param_4,float *param_5,long param_6,
                 uint *param_7,undefined8 *param_8)

{
  undefined1 auVar1 [16];
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
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
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
  float fVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar38;
  undefined8 uVar36;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar37 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  int iVar47;
  int iVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  ulong uVar52;
  float fVar53;
  int iVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  
  fVar23 = -(float)*param_8;
  fVar24 = -(float)((ulong)*param_8 >> 0x20);
  fVar25 = -(float)param_8[1];
  puVar15 = *(undefined8 **)(param_4 + 0x30);
  fVar21 = *(float *)(puVar15 + 4);
  fVar22 = *(float *)((long)puVar15 + 0x24);
  fVar42 = *(float *)(puVar15 + 5);
  fVar33 = (float)puVar15[1];
  fVar29 = (float)*puVar15;
  fVar31 = (float)((ulong)*puVar15 >> 0x20);
  fVar34 = *(float *)(puVar15 + 2);
  fVar39 = *(float *)((long)puVar15 + 0x14);
  fVar41 = *(float *)(puVar15 + 3);
  uVar14 = *(uint *)(param_3 + 0x10);
  fVar26 = fVar29 * fVar23 + fVar34 * fVar24 + fVar21 * fVar25;
  fVar27 = fVar31 * fVar23 + fVar39 * fVar24 + fVar22 * fVar25;
  fVar28 = fVar33 * fVar23 + fVar41 * fVar24 + fVar42 * fVar25;
  param_1 = (float)*(undefined8 *)(param_2 + 0x50) + param_1;
  fVar35 = *(float *)(param_2 + 0x30);
  fVar38 = *(float *)(param_2 + 0x34);
  fVar40 = *(float *)(param_2 + 0x38);
  if (uVar14 == 0) {
    uVar18 = 0;
  }
  else {
    uVar52 = NEON_fmov(0x3f800000,4);
    uVar17 = 0;
    fVar30 = 0.0;
    fVar49 = (float)uVar52;
    uVar18 = 0;
    puVar15 = *(undefined8 **)(param_3 + 0x18);
    do {
      fVar57 = (float)*puVar15;
      fVar58 = (float)((ulong)*puVar15 >> 0x20);
      auVar56._0_4_ = fVar26 * fVar57;
      auVar56._4_4_ = fVar27 * fVar58;
      auVar56._8_4_ = fVar28 * (float)puVar15[1];
      auVar56._12_4_ = 0;
      auVar61 = NEON_ext(auVar56,auVar56,8,1);
      fVar57 = (fVar21 * fVar40 + fVar29 * fVar35 + fVar34 * fVar38) * fVar57;
      fVar58 = (fVar22 * fVar40 + fVar31 * fVar35 + fVar39 * fVar38) * fVar58;
      fVar59 = (fVar42 * fVar40 + fVar33 * fVar35 + fVar41 * fVar38) * (float)puVar15[1];
      fVar19 = auVar61._0_4_ + auVar61._4_4_;
      auVar61._4_4_ = fVar58;
      auVar61._0_4_ = fVar57;
      auVar61._8_4_ = fVar59;
      auVar61._12_4_ = 0;
      auVar13._4_4_ = fVar58;
      auVar13._0_4_ = fVar57;
      auVar13._8_4_ = fVar59;
      auVar13._12_4_ = 0;
      auVar61 = NEON_ext(auVar61,auVar13,8,1);
      fVar20 = auVar61._0_4_ + auVar61._4_4_;
      fVar59 = auVar56._0_4_ + auVar56._4_4_ + fVar19;
      uVar36 = CONCAT44(auVar56._0_4_ + auVar56._4_4_ + fVar19,fVar59);
      fVar19 = *(float *)((long)puVar15 + 0xc) + fVar57 + fVar58 + fVar20;
      if (1e-07 <= ABS(fVar59)) {
        uVar55 = NEON_frecpe(uVar36,4);
        uVar60 = NEON_frecps(uVar36,uVar55,4);
        fVar50 = (float)uVar55 * (float)uVar60;
        fVar51 = (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
        uVar55 = NEON_frecps(uVar36,CONCAT44(fVar51,fVar50),4);
        fVar50 = fVar50 * (float)uVar55;
        fVar51 = fVar51 * (float)((ulong)uVar55 >> 0x20);
        uVar55 = NEON_frecps(uVar36,CONCAT44(fVar51,fVar50),4);
        fVar50 = fVar50 * (float)uVar55;
        fVar51 = fVar51 * (float)((ulong)uVar55 >> 0x20);
        uVar55 = NEON_frecps(uVar36,CONCAT44(fVar51,fVar50),4);
        fVar50 = fVar50 * (float)uVar55;
        fVar51 = fVar51 * (float)((ulong)uVar55 >> 0x20);
        uVar36 = NEON_frecps(uVar36,CONCAT44(fVar51,fVar50),4);
        fVar19 = -(fVar19 * fVar50 * (float)uVar36);
        fVar20 = -((*(float *)((long)puVar15 + 0xc) + fVar57 + fVar58 + fVar20) *
                  fVar51 * (float)((ulong)uVar36 >> 0x20));
        iVar54 = -(uint)(fVar59 < 0.0);
        iVar48 = -(uint)(fVar19 < (float)uVar52);
        iVar47 = -(uint)(fVar30 < fVar19 && fVar59 < 0.0);
        uVar18 = uVar18 ^ (uVar18 ^ CONCAT44(fVar20,fVar19)) & CONCAT44(iVar47,iVar47);
        fVar30 = (float)uVar18;
        uVar52 = (ulong)(uint)fVar49 ^
                 ((ulong)(uint)fVar49 ^ CONCAT44(fVar20,fVar19)) &
                 (ulong)CONCAT13((byte)((uint)iVar48 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                 CONCAT12((byte)((uint)iVar48 >> 0x10) &
                                          ~(byte)((uint)iVar54 >> 0x10),
                                          CONCAT11((byte)((uint)iVar48 >> 8) &
                                                   ~(byte)((uint)iVar54 >> 8),
                                                   (byte)iVar48 & ~(byte)iVar54)));
        fVar49 = (float)uVar52;
        if (fVar49 < fVar30) goto LAB_00285724;
      }
      else if ((0.0 < fVar19) || ((float)uVar52 < fVar30)) goto LAB_00285724;
      uVar17 = uVar17 + 1;
      puVar15 = (undefined8 *)((long)puVar15 + 0x14);
    } while (uVar17 < uVar14);
  }
  fVar30 = (float)uVar18;
  if (fVar30 <= param_1) {
    fVar35 = fVar35 - param_5[0xc];
    fVar38 = fVar38 - param_5[0xd];
    fVar40 = fVar40 - param_5[0xe];
    fVar42 = *(float *)(param_2 + 0x3c) - param_5[0xf];
    auVar45._0_4_ = fVar35 * param_5[4];
    auVar45._4_4_ = fVar38 * param_5[5];
    auVar45._8_4_ = fVar40 * param_5[6];
    auVar45._12_4_ = fVar42 * param_5[7];
    auVar43._0_4_ = *param_5 * fVar35;
    auVar43._4_4_ = param_5[1] * fVar38;
    auVar43._8_4_ = param_5[2] * fVar40;
    auVar43._12_4_ = param_5[3] * fVar42;
    auVar61 = NEON_ext(auVar43,auVar43,8,1);
    fVar35 = fVar35 * (float)*(undefined8 *)(param_5 + 8);
    fVar38 = fVar38 * (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
    fVar40 = fVar40 * (float)*(undefined8 *)(param_5 + 10);
    fVar42 = fVar42 * (float)((ulong)*(undefined8 *)(param_5 + 10) >> 0x20);
    fVar21 = auVar61._0_4_ + auVar61._4_4_;
    auVar61 = NEON_ext(auVar45,auVar45,8,1);
    fVar22 = auVar61._0_4_ + auVar61._4_4_;
    auVar5._4_4_ = fVar38;
    auVar5._0_4_ = fVar35;
    auVar5._8_4_ = fVar40;
    auVar5._12_4_ = fVar42;
    auVar6._4_4_ = fVar38;
    auVar6._0_4_ = fVar35;
    auVar6._8_4_ = fVar40;
    auVar6._12_4_ = fVar42;
    auVar61 = NEON_ext(auVar5,auVar6,8,1);
    uVar36 = NEON_ext(CONCAT44(auVar43._0_4_ + auVar43._4_4_ + fVar21,
                               auVar43._0_4_ + auVar43._4_4_ + fVar21),
                      CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar22,
                               auVar45._0_4_ + auVar45._4_4_ + fVar22),4,1);
    puVar15 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
    puVar15[1] = (ulong)(uint)(fVar35 + fVar38 + auVar61._0_4_ + auVar61._4_4_);
    *puVar15 = uVar36;
    fVar21 = fVar23 * fVar30 + *(float *)(param_2 + 0x30);
    fVar22 = fVar24 * fVar30 + *(float *)(param_2 + 0x34);
    fVar42 = fVar25 * fVar30 + *(float *)(param_2 + 0x38);
    fVar34 = fVar30 * 0.0 + *(float *)(param_2 + 0x3c);
    auVar7._4_4_ = fVar22;
    auVar7._0_4_ = fVar21;
    auVar7._8_4_ = fVar42;
    auVar7._12_4_ = fVar34;
    auVar8._4_4_ = fVar22;
    auVar8._0_4_ = fVar21;
    auVar8._8_4_ = fVar42;
    auVar8._12_4_ = fVar34;
    auVar61 = NEON_ext(auVar7,auVar8,8,1);
    lVar16 = param_6 + (ulong)*param_7 * 0x30;
    *(ulong *)(lVar16 + 0x18) = (ulong)auVar61._0_4_;
    *(ulong *)(lVar16 + 0x10) = CONCAT44(fVar22,fVar21);
    uVar55 = param_8[1];
    uVar36 = *param_8;
    lVar16 = param_6 + (ulong)*param_7 * 0x30;
    *param_7 = *param_7 + 1;
    *(ulong *)(lVar16 + 0x28) = CONCAT44((int)(uVar18 >> 0x20),(int)uVar55);
    *(undefined8 *)(lVar16 + 0x20) = uVar36;
    puVar15 = *(undefined8 **)(param_4 + 0x30);
    fVar21 = *(float *)(puVar15 + 4);
    fVar22 = *(float *)((long)puVar15 + 0x24);
    fVar42 = *(float *)(puVar15 + 5);
    fVar33 = (float)puVar15[1];
    fVar29 = (float)*puVar15;
    fVar31 = (float)((ulong)*puVar15 >> 0x20);
    fVar34 = *(float *)(puVar15 + 2);
    fVar39 = *(float *)((long)puVar15 + 0x14);
    fVar41 = *(float *)(puVar15 + 3);
    uVar14 = *(uint *)(param_3 + 0x10);
  }
LAB_00285724:
  fVar35 = *(float *)(param_2 + 0x40);
  fVar38 = *(float *)(param_2 + 0x44);
  fVar40 = *(float *)(param_2 + 0x48);
  if (uVar14 == 0) {
    fVar30 = 0.0;
    uVar32 = 0;
  }
  else {
    uVar52 = NEON_fmov(0x3f800000,4);
    uVar18 = 0;
    fVar49 = 0.0;
    puVar15 = *(undefined8 **)(param_3 + 0x18);
    fVar30 = 0.0;
    uVar32 = 0;
    uVar17 = uVar52;
    do {
      fVar50 = (float)*puVar15;
      fVar51 = (float)((ulong)*puVar15 >> 0x20);
      fVar57 = fVar26 * fVar50;
      fVar58 = fVar27 * fVar51;
      fVar59 = fVar28 * (float)puVar15[1];
      auVar9._4_4_ = fVar58;
      auVar9._0_4_ = fVar57;
      auVar9._8_4_ = fVar59;
      auVar9._12_4_ = 0;
      auVar10._4_4_ = fVar58;
      auVar10._0_4_ = fVar57;
      auVar10._8_4_ = fVar59;
      auVar10._12_4_ = 0;
      auVar61 = NEON_ext(auVar9,auVar10,8,1);
      fVar50 = (fVar29 * fVar35 + fVar34 * fVar38 + fVar21 * fVar40) * fVar50;
      fVar51 = (fVar31 * fVar35 + fVar39 * fVar38 + fVar22 * fVar40) * fVar51;
      fVar59 = (fVar33 * fVar35 + fVar41 * fVar38 + fVar42 * fVar40) * (float)puVar15[1];
      fVar20 = auVar61._0_4_ + auVar61._4_4_;
      auVar11._4_4_ = fVar51;
      auVar11._0_4_ = fVar50;
      auVar11._8_4_ = fVar59;
      auVar11._12_4_ = 0;
      auVar12._4_4_ = fVar51;
      auVar12._0_4_ = fVar50;
      auVar12._8_4_ = fVar59;
      auVar12._12_4_ = 0;
      auVar61 = NEON_ext(auVar11,auVar12,8,1);
      fVar19 = auVar61._0_4_ + auVar61._4_4_;
      fVar59 = fVar57 + fVar58 + fVar20;
      fVar20 = fVar57 + fVar58 + fVar20;
      fVar57 = *(float *)((long)puVar15 + 0xc) + fVar50 + fVar51 + fVar19;
      if (1e-07 <= ABS(fVar59)) {
        uVar36 = NEON_frecpe(CONCAT44(fVar20,fVar59),4);
        uVar55 = NEON_frecps(CONCAT44(fVar20,fVar59),uVar36,4);
        fVar58 = (float)uVar36 * (float)uVar55;
        fVar53 = (float)((ulong)uVar36 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
        uVar36 = NEON_frecps(CONCAT44(fVar20,fVar59),CONCAT44(fVar53,fVar58),4);
        fVar58 = fVar58 * (float)uVar36;
        fVar53 = fVar53 * (float)((ulong)uVar36 >> 0x20);
        uVar36 = NEON_frecps(CONCAT44(fVar20,fVar59),CONCAT44(fVar53,fVar58),4);
        fVar58 = fVar58 * (float)uVar36;
        fVar53 = fVar53 * (float)((ulong)uVar36 >> 0x20);
        uVar36 = NEON_frecps(CONCAT44(fVar20,fVar59),CONCAT44(fVar53,fVar58),4);
        fVar58 = fVar58 * (float)uVar36;
        fVar53 = fVar53 * (float)((ulong)uVar36 >> 0x20);
        uVar36 = NEON_frecps(CONCAT44(fVar20,fVar59),CONCAT44(fVar53,fVar58),4);
        fVar20 = -(fVar57 * fVar58 * (float)uVar36);
        fVar19 = -((*(float *)((long)puVar15 + 0xc) + fVar50 + fVar51 + fVar19) *
                  fVar53 * (float)((ulong)uVar36 >> 0x20));
        iVar48 = -(uint)(fVar59 < 0.0);
        iVar47 = -(uint)(fVar20 < (float)uVar52);
        uVar46 = -(uint)(fVar49 < fVar20 && fVar59 < 0.0);
        fVar30 = (float)((uint)fVar30 ^ ((uint)fVar30 ^ (uint)fVar20) & uVar46);
        uVar32 = uVar32 ^ (uVar32 ^ (uint)fVar19) & uVar46;
        uVar52 = uVar17 ^ (uVar17 ^ CONCAT44(fVar19,fVar20)) &
                          (ulong)CONCAT13((byte)((uint)iVar47 >> 0x18) &
                                          ~(byte)((uint)iVar48 >> 0x18),
                                          CONCAT12((byte)((uint)iVar47 >> 0x10) &
                                                   ~(byte)((uint)iVar48 >> 0x10),
                                                   CONCAT11((byte)((uint)iVar47 >> 8) &
                                                            ~(byte)((uint)iVar48 >> 8),
                                                            (byte)iVar47 & ~(byte)iVar48)));
        uVar17 = uVar52;
        fVar49 = fVar30;
        if ((float)uVar52 < fVar30) {
          return;
        }
      }
      else {
        if (0.0 < fVar57) {
          return;
        }
        if ((float)uVar52 < fVar49) {
          return;
        }
      }
      uVar18 = uVar18 + 1;
      puVar15 = (undefined8 *)((long)puVar15 + 0x14);
    } while (uVar18 < uVar14);
  }
  if (param_1 < fVar30) {
    return;
  }
  fVar35 = fVar35 - (float)*(undefined8 *)(param_5 + 0xc);
  fVar38 = fVar38 - (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20);
  fVar40 = fVar40 - (float)*(undefined8 *)(param_5 + 0xe);
  fVar42 = *(float *)(param_2 + 0x4c) - (float)((ulong)*(undefined8 *)(param_5 + 0xe) >> 0x20);
  auVar37._0_4_ = *param_5 * fVar35;
  auVar37._4_4_ = param_5[1] * fVar38;
  auVar37._8_4_ = param_5[2] * fVar40;
  auVar37._12_4_ = param_5[3] * fVar42;
  auVar61 = NEON_ext(auVar37,auVar37,8,1);
  auVar44._0_4_ = fVar35 * param_5[4];
  auVar44._4_4_ = fVar38 * param_5[5];
  auVar44._8_4_ = fVar40 * param_5[6];
  auVar44._12_4_ = fVar42 * param_5[7];
  fVar21 = auVar61._0_4_ + auVar61._4_4_;
  auVar61 = NEON_ext(auVar44,auVar44,8,1);
  fVar22 = auVar61._0_4_ + auVar61._4_4_;
  fVar35 = fVar35 * (float)*(undefined8 *)(param_5 + 8);
  fVar38 = fVar38 * (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20);
  fVar40 = fVar40 * (float)*(undefined8 *)(param_5 + 10);
  fVar42 = fVar42 * (float)((ulong)*(undefined8 *)(param_5 + 10) >> 0x20);
  auVar1._4_4_ = fVar38;
  auVar1._0_4_ = fVar35;
  auVar1._8_4_ = fVar40;
  auVar1._12_4_ = fVar42;
  auVar2._4_4_ = fVar38;
  auVar2._0_4_ = fVar35;
  auVar2._8_4_ = fVar40;
  auVar2._12_4_ = fVar42;
  auVar61 = NEON_ext(auVar1,auVar2,8,1);
  uVar36 = NEON_ext(CONCAT44(auVar37._0_4_ + auVar37._4_4_ + fVar21,
                             auVar37._0_4_ + auVar37._4_4_ + fVar21),
                    CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar22,
                             auVar44._0_4_ + auVar44._4_4_ + fVar22),4,1);
  puVar15 = (undefined8 *)(param_6 + (ulong)*param_7 * 0x30);
  puVar15[1] = (ulong)(uint)(fVar35 + fVar38 + auVar61._0_4_ + auVar61._4_4_);
  *puVar15 = uVar36;
  fVar21 = fVar23 * fVar30 + *(float *)(param_2 + 0x40);
  fVar22 = fVar24 * fVar30 + *(float *)(param_2 + 0x44);
  fVar42 = fVar25 * fVar30 + *(float *)(param_2 + 0x48);
  fVar34 = fVar30 * 0.0 + *(float *)(param_2 + 0x4c);
  auVar3._4_4_ = fVar22;
  auVar3._0_4_ = fVar21;
  auVar3._8_4_ = fVar42;
  auVar3._12_4_ = fVar34;
  auVar4._4_4_ = fVar22;
  auVar4._0_4_ = fVar21;
  auVar4._8_4_ = fVar42;
  auVar4._12_4_ = fVar34;
  auVar61 = NEON_ext(auVar3,auVar4,8,1);
  lVar16 = param_6 + (ulong)*param_7 * 0x30;
  *(ulong *)(lVar16 + 0x18) = (ulong)auVar61._0_4_;
  *(ulong *)(lVar16 + 0x10) = CONCAT44(fVar22,fVar21);
  uVar55 = param_8[1];
  uVar36 = *param_8;
  param_6 = param_6 + (ulong)*param_7 * 0x30;
  *param_7 = *param_7 + 1;
  *(ulong *)(param_6 + 0x28) = CONCAT44(uVar32,(int)uVar55);
  *(undefined8 *)(param_6 + 0x20) = uVar36;
  return;
}


