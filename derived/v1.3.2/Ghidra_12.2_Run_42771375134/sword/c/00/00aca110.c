/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aca110; name: FUN_00aca110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00aca110(undefined1 param_1 [16],float param_2,long *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  bool bVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar61;
  undefined1 auVar60 [16];
  float fVar62;
  int iVar63;
  float fVar68;
  int iVar69;
  float fVar70;
  int iVar71;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar78;
  float fVar79;
  undefined1 auVar77 [16];
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 local_70 [8];
  float fStack_68;
  undefined8 uStack_60;
  float fStack_58;
  
  uVar15 = (**(code **)(*param_3 + 400))();
  puVar13 = PTR_SinCosSampleTable_02715d20;
  fVar26 = DAT_01d4c2f4;
  fVar25 = DAT_01d4bc78;
  if ((uVar15 & 1) == 0) {
    bVar14 = false;
  }
  else {
    fVar21 = *(float *)PTR_FloatDegree180_027194f0;
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    uVar15 = (ulong)-((fVar16 / fVar21) * DAT_01d4c2f4);
    pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar15 >> 0x18 & 0xff) * 0x10);
    fVar35 = (float)((uint)uVar15 & 0xffffff) * DAT_01d4bc78;
    fVar22 = pfVar1[1] + pfVar1[3] * fVar35;
    fVar17 = *pfVar1 + pfVar1[2] * fVar35;
    fVar70 = (float)_UNK_01d4b108;
    fVar62 = (float)_DAT_01d4b100;
    fVar68 = (float)((ulong)_DAT_01d4b100 >> 0x20);
    fVar18 = (fVar17 * param_1._0_4_ - fVar22 * param_1._8_4_) + fVar62;
    fVar19 = param_1._4_4_ + fVar68;
    fVar22 = fVar22 * param_1._0_4_ + fVar17 * param_1._8_4_ + fVar70;
    fVar20 = (float)((ulong)_UNK_01d4b108 >> 0x20) + 0.0;
    (**(code **)(*param_3 + 0x1c0))(local_70,param_3);
    fVar17 = (float)((ulong)uStack_60 >> 0x20) + param_2;
    fVar33 = local_70._4_4_ - param_2;
    fStack_68 = fStack_68 - param_2;
    fStack_58 = fStack_58 + param_2;
    fVar31 = (float)uStack_60 + param_2;
    uVar15 = (ulong)-((fVar16 / fVar21) *
                     (*(float *)((long)param_3 + 0x454) + *(float *)((long)param_3 + 0x464) + fVar26
                     ));
    pfVar2 = (float *)(puVar13 + (uVar15 >> 0x18 & 0xff) * 0x10);
    fVar25 = (float)((uint)uVar15 & 0xffffff) * fVar25;
    fVar57 = pfVar2[1] + pfVar2[3] * fVar25;
    fVar25 = *pfVar2 + pfVar2[2] * fVar25;
    param_2 = local_70._0_4_ - param_2;
    fVar26 = (float)param_3[0x7a] + *(float *)(param_3 + 0x7c) + *(float *)(param_3 + 0x7e) +
             *(float *)(param_3 + 0x86) + *(float *)(param_3 + 0x88);
    fVar16 = (float)param_3[0x7b] + *(float *)(param_3 + 0x7d) + *(float *)(param_3 + 0x7f) +
             *(float *)(param_3 + 0x87) + *(float *)(param_3 + 0x89);
    fVar73 = pfVar1[1] + fVar35 * pfVar1[3];
    fVar21 = *pfVar1 + fVar35 * pfVar1[2];
    fVar62 = (fVar21 * fVar26 - fVar73 * fVar16) + fVar62;
    fVar68 = (float)((ulong)param_3[0x7a] >> 0x20) + *(float *)((long)param_3 + 0x3e4) +
             *(float *)((long)param_3 + 0x3f4) + *(float *)((long)param_3 + 0x434) +
             *(float *)((long)param_3 + 0x444) + fVar68;
    fVar70 = fVar73 * fVar26 + fVar21 * fVar16 + fVar70;
    fVar21 = fVar17 - fVar33;
    fVar35 = ((param_2 * fVar25 - fStack_68 * fVar57) + fVar62 +
             (fVar31 * fVar25 - fStack_58 * fVar57) + fVar62) * 0.5;
    fVar73 = (fVar33 + fVar68 + fVar17 + fVar68) * 0.5;
    fVar34 = (param_2 * fVar57 + fStack_68 * fVar25 + fVar70 +
             fVar31 * fVar57 + fStack_58 * fVar25 + fVar70) * 0.5;
    fVar74 = fVar25 - fVar57 * 0.0;
    fVar26 = fVar25 + fVar57 * 0.0;
    fVar75 = fVar57 + fVar25 * 0.0;
    fVar57 = fVar25 * 0.0 - fVar57;
    fVar25 = fVar74 * fVar74;
    fVar16 = fVar75 * fVar75;
    uVar42 = (undefined1)((uint)fVar16 >> 8);
    uVar44 = (undefined1)((uint)fVar16 >> 0x10);
    uVar46 = (undefined1)((uint)fVar16 >> 0x18);
    auVar58._4_4_ = 0;
    auVar58._0_4_ = fVar25;
    auVar58[8] = SUB41(fVar16,0);
    auVar58[9] = uVar42;
    auVar58[10] = uVar44;
    auVar58[0xb] = uVar46;
    auVar58._12_4_ = 0;
    auVar65._4_4_ = 0;
    auVar65._0_4_ = fVar25;
    auVar65[8] = SUB41(fVar16,0);
    auVar65[9] = uVar42;
    auVar65[10] = uVar44;
    auVar65[0xb] = uVar46;
    auVar65._12_4_ = 0;
    auVar58 = NEON_ext(auVar58,auVar65,8,1);
    fVar25 = auVar58._0_4_ + fVar25;
    fVar16 = auVar58._4_4_ + 0.0;
    fVar17 = fVar25 + fVar16;
    fVar25 = fVar25 + fVar16;
    uVar42 = SUB41(fVar25,0);
    uVar44 = (undefined1)((uint)fVar25 >> 8);
    uVar46 = (undefined1)((uint)fVar25 >> 0x10);
    uVar49 = (undefined1)((uint)fVar25 >> 0x18);
    auVar7[4] = uVar42;
    auVar7._0_4_ = fVar17;
    auVar7[5] = uVar44;
    auVar7[6] = uVar46;
    auVar7[7] = uVar49;
    auVar7[8] = SUB41(fVar17,0);
    auVar7[9] = (char)((uint)fVar17 >> 8);
    auVar7[10] = (char)((uint)fVar17 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar17 >> 0x18);
    auVar7[0xc] = uVar42;
    auVar7[0xd] = uVar44;
    auVar7[0xe] = uVar46;
    auVar7[0xf] = uVar49;
    auVar58 = NEON_frsqrte(auVar7,4);
    auVar64._0_4_ = auVar58._0_4_ * fVar17;
    auVar64._4_4_ = auVar58._4_4_ * fVar25;
    auVar64._8_4_ = auVar58._8_4_ * fVar17;
    uVar8 = (undefined2)(CONCAT15(uVar44,CONCAT14(uVar42,fVar17)) >> 0x20);
    auVar64._12_4_ = auVar58._12_4_ * (float)CONCAT13(uVar49,CONCAT12(uVar46,uVar8));
    auVar65 = NEON_frsqrts(auVar58,auVar64,4);
    auVar59._0_4_ = auVar58._0_4_ * auVar65._0_4_;
    auVar59._4_4_ = auVar58._4_4_ * auVar65._4_4_;
    auVar59._8_4_ = auVar58._8_4_ * auVar65._8_4_;
    auVar59._12_4_ = auVar58._12_4_ * auVar65._12_4_;
    auVar66._0_4_ = fVar17 * auVar59._0_4_;
    auVar66._4_4_ = fVar25 * auVar59._4_4_;
    auVar66._8_4_ = fVar17 * auVar59._8_4_;
    auVar66._12_4_ = (float)CONCAT13(uVar49,CONCAT12(uVar46,uVar8)) * auVar59._12_4_;
    iVar9 = -(uint)(fVar17 == 0.0);
    iVar10 = -(uint)(fVar25 == 0.0);
    iVar11 = -(uint)(fVar17 == 0.0);
    iVar12 = -(uint)((float)CONCAT13(uVar49,CONCAT12(uVar46,uVar8)) == 0.0);
    auVar58 = NEON_frsqrts(auVar59,auVar66,4);
    fVar16 = (float)((ulong)DAT_01cd52f0 >> 0x20);
    fVar25 = (float)DAT_01cd52f0 + fVar16;
    fVar16 = (float)DAT_01cd52f0 + fVar16;
    fVar74 = fVar74 * auVar59._0_4_ * auVar58._0_4_;
    fVar17 = auVar59._4_4_ * auVar58._4_4_ * 0.0;
    fVar75 = fVar75 * auVar59._8_4_ * auVar58._8_4_;
    fVar61 = auVar59._12_4_ * auVar58._12_4_ * 0.0;
    auVar67._8_8_ = CONCAT44(fVar16,fVar25);
    auVar67._0_8_ = CONCAT44(fVar16,fVar25);
    auVar58 = NEON_frsqrte(auVar67,4);
    auVar82._0_4_ = auVar58._0_4_ * fVar25;
    auVar82._4_4_ = auVar58._4_4_ * fVar16;
    auVar82._8_4_ = auVar58._8_4_ * fVar25;
    auVar82._12_4_ = auVar58._12_4_ * fVar16;
    auVar65 = NEON_frsqrts(auVar58,auVar82,4);
    auVar77._0_4_ = auVar58._0_4_ * auVar65._0_4_;
    auVar77._4_4_ = auVar58._4_4_ * auVar65._4_4_;
    auVar77._8_4_ = auVar58._8_4_ * auVar65._8_4_;
    auVar77._12_4_ = auVar58._12_4_ * auVar65._12_4_;
    auVar83._0_4_ = fVar25 * auVar77._0_4_;
    auVar83._4_4_ = fVar16 * auVar77._4_4_;
    auVar83._8_4_ = fVar25 * auVar77._8_4_;
    auVar83._12_4_ = fVar16 * auVar77._12_4_;
    iVar63 = -(uint)(fVar25 == 0.0);
    iVar69 = -(uint)(fVar16 == 0.0);
    iVar71 = -(uint)(fVar25 == 0.0);
    iVar72 = -(uint)(fVar16 == 0.0);
    auVar58 = NEON_frsqrts(auVar77,auVar83,4);
    fVar76 = auVar77._0_4_ * auVar58._0_4_ * (float)_DAT_01d4b580;
    fVar78 = auVar77._4_4_ * auVar58._4_4_ * (float)((ulong)_DAT_01d4b580 >> 0x20);
    fVar79 = auVar77._8_4_ * auVar58._8_4_ * (float)_UNK_01d4b588;
    fVar80 = auVar77._12_4_ * auVar58._12_4_ * (float)((ulong)_UNK_01d4b588 >> 0x20);
    auVar84._0_4_ = fVar57 * fVar57;
    auVar84._4_4_ = 0;
    auVar84._8_4_ = fVar26 * fVar26;
    auVar84._12_4_ = 0;
    auVar58 = NEON_ext(auVar84,auVar84,8,1);
    fVar16 = auVar58._0_4_ + auVar84._0_4_;
    fVar62 = auVar58._4_4_ + 0.0;
    fVar25 = fVar16 + fVar62;
    fVar16 = fVar16 + fVar62;
    auVar85._8_8_ = CONCAT44(fVar16,fVar25);
    auVar85._0_8_ = CONCAT44(fVar16,fVar25);
    auVar58 = NEON_frsqrte(auVar85,4);
    iVar27 = -(uint)(fVar25 == 0.0);
    iVar28 = -(uint)(fVar16 == 0.0);
    iVar29 = -(uint)(fVar25 == 0.0);
    iVar30 = -(uint)(fVar16 == 0.0);
    auVar87._0_4_ = auVar58._0_4_ * fVar25;
    auVar87._4_4_ = auVar58._4_4_ * fVar16;
    auVar87._8_4_ = auVar58._8_4_ * fVar25;
    auVar87._12_4_ = auVar58._12_4_ * fVar16;
    auVar65 = NEON_frsqrts(auVar58,auVar87,4);
    auVar86._0_4_ = auVar58._0_4_ * auVar65._0_4_;
    auVar86._4_4_ = auVar58._4_4_ * auVar65._4_4_;
    auVar86._8_4_ = auVar58._8_4_ * auVar65._8_4_;
    auVar86._12_4_ = auVar58._12_4_ * auVar65._12_4_;
    auVar88._0_4_ = fVar25 * auVar86._0_4_;
    auVar88._4_4_ = fVar16 * auVar86._4_4_;
    auVar88._8_4_ = fVar25 * auVar86._8_4_;
    auVar88._12_4_ = fVar16 * auVar86._12_4_;
    fVar81 = fVar21 * 0.5;
    auVar58 = NEON_frsqrts(auVar86,auVar88,4);
    fVar62 = (fVar31 - param_2) * 0.5;
    fVar57 = fVar57 * auVar86._0_4_ * auVar58._0_4_;
    fVar25 = auVar86._4_4_ * auVar58._4_4_ * 0.0;
    fVar26 = fVar26 * auVar86._8_4_ * auVar58._8_4_;
    fVar68 = auVar86._12_4_ * auVar58._12_4_ * 0.0;
    fVar70 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                             CONCAT12((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                      CONCAT11((byte)((uint)fVar57 >> 8) &
                                               ~(byte)((uint)iVar27 >> 8),
                                               SUB41(fVar57,0) & ~(byte)iVar27)));
    fVar57 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                             CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                      CONCAT11((byte)((uint)fVar25 >> 8) &
                                               ~(byte)((uint)iVar28 >> 8),
                                               SUB41(fVar25,0) & ~(byte)iVar28)));
    fVar33 = (float)CONCAT13((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                             CONCAT12((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                      CONCAT11((byte)((uint)fVar26 >> 8) &
                                               ~(byte)((uint)iVar29 >> 8),
                                               SUB41(fVar26,0) & ~(byte)iVar29)));
    bVar36 = SUB41(fVar74,0) & ~(byte)iVar9;
    bVar37 = (byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar9 >> 8);
    bVar38 = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
    bVar39 = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
    bVar40 = SUB41(fVar17,0) & ~(byte)iVar10;
    bVar41 = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar10 >> 8);
    bVar43 = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10);
    bVar45 = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18);
    bVar47 = SUB41(fVar75,0) & ~(byte)iVar11;
    bVar48 = (byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar11 >> 8);
    bVar50 = (byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
    bVar52 = (byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
    fVar25 = fVar18 - fVar35;
    fVar26 = fVar19 - fVar73;
    fVar16 = fVar22 - fVar34;
    fVar17 = fVar20 - 0.0;
    auVar60._0_4_ = (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36))) * fVar25;
    auVar60._4_4_ = (float)CONCAT13(bVar45,CONCAT12(bVar43,CONCAT11(bVar41,bVar40))) * fVar26;
    auVar60._8_4_ = (float)CONCAT13(bVar52,CONCAT12(bVar50,CONCAT11(bVar48,bVar47))) * fVar16;
    auVar60._12_4_ =
         (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                         CONCAT12((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                  CONCAT11((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                           SUB41(fVar61,0) & ~(byte)iVar12))) * fVar17;
    auVar58 = NEON_ext(auVar60,auVar60,8,1);
    auVar32._0_4_ = fVar25 * fVar70;
    auVar32._4_4_ = fVar26 * fVar57;
    auVar32._8_4_ = fVar16 * fVar33;
    auVar32._12_4_ =
         fVar17 * (float)(CONCAT17((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                                   CONCAT16((byte)((uint)fVar68 >> 0x10) &
                                            ~(byte)((uint)iVar30 >> 0x10),
                                            CONCAT15((byte)((uint)fVar68 >> 8) &
                                                     ~(byte)((uint)iVar30 >> 8),
                                                     CONCAT14(SUB41(fVar68,0) & ~(byte)iVar30,fVar33
                                                             )))) >> 0x20);
    fVar21 = fVar21 * -0.5;
    fVar68 = auVar58._0_4_ + auVar60._0_4_ + auVar58._4_4_ + auVar60._4_4_;
    if (fVar68 <= fVar62) {
      fVar62 = fVar68;
    }
    fVar68 = (fVar31 - param_2) * -0.5;
    if (fVar68 <= fVar62) {
      fVar68 = fVar62;
    }
    fVar62 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                             CONCAT12((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                                      CONCAT11((byte)((uint)fVar76 >> 8) &
                                               ~(byte)((uint)iVar63 >> 8),
                                               SUB41(fVar76,0) & ~(byte)iVar63)));
    auVar23._0_8_ =
         CONCAT17((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                  CONCAT16((byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                           CONCAT15((byte)((uint)fVar78 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                    CONCAT14(SUB41(fVar78,0) & ~(byte)iVar69,fVar62))));
    auVar23[8] = SUB41(fVar79,0) & ~(byte)iVar71;
    auVar23[9] = (byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar71 >> 8);
    auVar23[10] = (byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
    auVar23[0xb] = (byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
    auVar24[0xc] = SUB41(fVar80,0) & ~(byte)iVar72;
    auVar24._0_12_ = auVar23;
    auVar24[0xd] = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar72 >> 8);
    auVar24[0xe] = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
    auVar24[0xf] = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
    fVar25 = fVar62 * fVar25;
    fVar31 = (float)((ulong)auVar23._0_8_ >> 0x20);
    fVar26 = fVar31 * fVar26;
    uVar42 = (undefined1)((uint)fVar26 >> 8);
    uVar44 = (undefined1)((uint)fVar26 >> 0x10);
    uVar46 = (undefined1)((uint)fVar26 >> 0x18);
    fVar16 = auVar23._8_4_ * fVar16;
    uVar49 = (undefined1)((uint)fVar16 >> 8);
    uVar51 = (undefined1)((uint)fVar16 >> 0x10);
    uVar53 = (undefined1)((uint)fVar16 >> 0x18);
    fVar17 = auVar24._12_4_ * fVar17;
    uVar54 = (undefined1)((uint)fVar17 >> 8);
    uVar55 = (undefined1)((uint)fVar17 >> 0x10);
    uVar56 = (undefined1)((uint)fVar17 >> 0x18);
    auVar5[4] = SUB41(fVar26,0);
    auVar5._0_4_ = fVar25;
    auVar5[5] = uVar42;
    auVar5[6] = uVar44;
    auVar5[7] = uVar46;
    auVar5[8] = SUB41(fVar16,0);
    auVar5[9] = uVar49;
    auVar5[10] = uVar51;
    auVar5[0xb] = uVar53;
    auVar5[0xc] = SUB41(fVar17,0);
    auVar5[0xd] = uVar54;
    auVar5[0xe] = uVar55;
    auVar5[0xf] = uVar56;
    auVar6[4] = SUB41(fVar26,0);
    auVar6._0_4_ = fVar25;
    auVar6[5] = uVar42;
    auVar6[6] = uVar44;
    auVar6[7] = uVar46;
    auVar6[8] = SUB41(fVar16,0);
    auVar6[9] = uVar49;
    auVar6[10] = uVar51;
    auVar6[0xb] = uVar53;
    auVar6[0xc] = SUB41(fVar17,0);
    auVar6[0xd] = uVar54;
    auVar6[0xe] = uVar55;
    auVar6[0xf] = uVar56;
    auVar58 = NEON_ext(auVar5,auVar6,8,1);
    fVar25 = auVar58._0_4_ + fVar25 + auVar58._4_4_ + fVar26;
    uVar42 = SUB41(fVar81,0);
    uVar44 = (char)((uint)fVar81 >> 8);
    uVar46 = (char)((uint)fVar81 >> 0x10);
    uVar49 = (char)((uint)fVar81 >> 0x18);
    if (fVar25 <= fVar81) {
      uVar42 = SUB41(fVar25,0);
      uVar44 = (char)((uint)fVar25 >> 8);
      uVar46 = (char)((uint)fVar25 >> 0x10);
      uVar49 = (char)((uint)fVar25 >> 0x18);
    }
    if (fVar21 <= (float)CONCAT13(uVar49,CONCAT12(uVar46,CONCAT11(uVar44,uVar42)))) {
      fVar21 = (float)CONCAT13(uVar49,CONCAT12(uVar46,CONCAT11(uVar44,uVar42)));
    }
    fVar25 = (fStack_58 - fStack_68) * 0.5;
    auVar58 = NEON_ext(auVar32,auVar32,8,1);
    fVar16 = auVar58._0_4_ + auVar32._0_4_ + auVar58._4_4_ + auVar32._4_4_;
    fVar26 = (fStack_58 - fStack_68) * -0.5;
    if (fVar16 <= fVar25) {
      fVar25 = fVar16;
    }
    if (fVar26 <= fVar25) {
      fVar26 = fVar25;
    }
    fVar18 = (fVar35 + fVar68 * (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36))) +
              fVar21 * fVar62 + fVar26 * fVar70) - fVar18;
    fVar19 = (fVar73 + fVar68 * (float)CONCAT13(bVar45,CONCAT12(bVar43,CONCAT11(bVar41,bVar40))) +
              fVar21 * fVar31 + fVar26 * fVar57) - fVar19;
    fVar22 = (fVar34 + fVar68 * (float)CONCAT13(bVar52,CONCAT12(bVar50,CONCAT11(bVar48,bVar47))) +
              fVar21 * auVar23._8_4_ + fVar26 * fVar33) - fVar22;
    fVar20 = 0.0 - fVar20;
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    fVar22 = fVar22 * fVar22;
    fVar20 = fVar20 * fVar20;
    auVar3._4_4_ = fVar19;
    auVar3._0_4_ = fVar18;
    auVar3._8_4_ = fVar22;
    auVar3._12_4_ = fVar20;
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar22;
    auVar4._12_4_ = fVar20;
    auVar58 = NEON_ext(auVar3,auVar4,8,1);
    bVar14 = auVar58._0_4_ + fVar18 + auVar58._4_4_ + fVar19 <= 25.0;
  }
  return bVar14;
}


