/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a6ec0; name: FUN_002a6ec0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a6ec0(long *param_1,long param_2,undefined1 (*param_3) [12],long *param_4,float *param_5
                 ,float *param_6,byte param_7,float *param_8)

{
  undefined *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  float fVar32;
  undefined8 uVar30;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
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
  ulong uVar58;
  float fVar59;
  long lVar60;
  ulong uVar61;
  undefined8 uVar62;
  undefined8 local_c;
  undefined2 local_4;
  undefined1 local_2;
  
  uVar35 = _UNK_01d4b588;
  lVar10 = _DAT_01d4b580;
  fVar28 = _UNK_01d4ae5c;
  fVar26 = _UNK_01d4ae58;
  fVar25 = _UNK_01d4ae54;
  fVar19 = _DAT_01d4ae50;
  fVar34 = _UNK_01d49dcc;
  fVar33 = _UNK_01d49dc8;
  fVar32 = _UNK_01d49dc4;
  fVar29 = _DAT_01d49dc0;
  *(undefined4 *)(param_1 + 1) = 2;
  *(float *)(param_1 + 7) = fVar33;
  *(float *)((long)param_1 + 0x3c) = fVar34;
  *(float *)(param_1 + 6) = fVar29;
  *(float *)((long)param_1 + 0x34) = fVar32;
  param_1[9] = 0;
  param_1[8] = 0;
  *(float *)(param_1 + 3) = fVar26;
  *(float *)((long)param_1 + 0x1c) = fVar28;
  *(float *)(param_1 + 2) = fVar19;
  *(float *)((long)param_1 + 0x14) = fVar25;
  param_1[5] = uVar35;
  param_1[4] = lVar10;
  puVar1 = PTR_DAT_02711fd0 + 0x10;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(float *)(param_1 + 0x27) = fVar33;
  *(float *)((long)param_1 + 0x13c) = fVar34;
  *(float *)(param_1 + 0x26) = fVar29;
  *(float *)((long)param_1 + 0x134) = fVar32;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *param_1 = (long)puVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(byte *)((long)param_1 + 0x181) = param_7 & 1;
  param_1[0xe] = 0;
  param_1[0xf] = (long)&DAT_7f7fffff00000000;
  *(float *)(param_1 + 0x23) = fVar26;
  *(float *)((long)param_1 + 0x11c) = fVar28;
  *(float *)(param_1 + 0x22) = fVar19;
  *(float *)((long)param_1 + 0x114) = fVar25;
  param_1[0x25] = uVar35;
  param_1[0x24] = lVar10;
  if ((param_7 & 1) == 0) {
    lVar12 = *param_4;
    lVar8 = *(long *)((long)param_4 + 0xc);
    lVar60 = param_4[3];
    uVar13 = *(uint *)((long)param_4 + 0x14);
    uVar16 = *(uint *)(param_4 + 4);
    param_1[0x2b] = (ulong)*(uint *)(param_4 + 1);
    param_1[0x2a] = lVar12;
    param_1[0x2d] = (ulong)uVar13;
    param_1[0x2c] = lVar8;
    param_1[0x2f] = (ulong)uVar16;
    param_1[0x2e] = lVar60;
  }
  fVar54 = (float)*(undefined8 *)(*param_3 + 8);
  fVar59 = (float)*(undefined8 *)*param_3;
  fVar27 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  if ((fVar59 == 1.0) && (*(float *)(*param_3 + 4) == 1.0)) {
    bVar7 = *(float *)(*param_3 + 8) == 1.0;
  }
  else {
    bVar7 = false;
  }
  lVar8 = *(long *)(param_2 + 0x48);
  bVar2 = *(byte *)(param_2 + 0x47);
  fVar14 = fVar54 * *(float *)(param_2 + 100);
  uVar11 = NEON_fminp(CONCAT44(fVar14,fVar14),
                      CONCAT44(fVar27 * (float)((ulong)*(undefined8 *)(param_2 + 0x5c) >> 0x20),
                               fVar59 * (float)*(undefined8 *)(param_2 + 0x5c)),4);
  uVar11 = NEON_fminp(uVar11,uVar11,4);
  fVar17 = (float)uVar11;
  fVar15 = DAT_01d4c158 * fVar17;
  fVar18 = DAT_01d4bb3c * fVar17;
  uVar3 = *(undefined1 *)(param_2 + 0x46);
  uVar61 = 0;
  lVar60 = 0;
  lVar12 = lVar10;
  uVar58 = uVar35;
  fVar14 = fVar19;
  fVar49 = fVar25;
  fVar50 = fVar26;
  fVar51 = fVar28;
  fVar39 = fVar29;
  fVar40 = fVar32;
  fVar42 = fVar33;
  fVar43 = fVar34;
  if (!bVar7) {
    auVar20._12_4_ = 0;
    auVar20._0_12_ = *param_3;
    auVar20 = NEON_frecpe(auVar20,4);
    auVar31._12_4_ = 0;
    auVar31._0_12_ = *param_3;
    auVar31 = NEON_frecps(auVar20,auVar31,4);
    auVar21._0_4_ = auVar20._0_4_ * auVar31._0_4_;
    auVar21._4_4_ = auVar20._4_4_ * auVar31._4_4_;
    auVar21._8_4_ = auVar20._8_4_ * auVar31._8_4_;
    auVar21._12_4_ = auVar20._12_4_ * auVar31._12_4_;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = *param_3;
    auVar20 = NEON_frecps(auVar21,auVar4,4);
    auVar22._0_4_ = auVar21._0_4_ * auVar20._0_4_;
    auVar22._4_4_ = auVar21._4_4_ * auVar20._4_4_;
    auVar22._8_4_ = auVar21._8_4_ * auVar20._8_4_;
    auVar22._12_4_ = auVar21._12_4_ * auVar20._12_4_;
    auVar5._12_4_ = 0;
    auVar5._0_12_ = *param_3;
    auVar20 = NEON_frecps(auVar22,auVar5,4);
    auVar23._0_4_ = auVar22._0_4_ * auVar20._0_4_;
    auVar23._4_4_ = auVar22._4_4_ * auVar20._4_4_;
    auVar23._8_4_ = auVar22._8_4_ * auVar20._8_4_;
    auVar23._12_4_ = auVar22._12_4_ * auVar20._12_4_;
    auVar6._12_4_ = 0;
    auVar6._0_12_ = *param_3;
    auVar20 = NEON_frecps(auVar23,auVar6,4);
    fVar39 = auVar23._0_4_ * auVar20._0_4_;
    fVar40 = auVar23._4_4_ * auVar20._4_4_;
    fVar42 = auVar23._8_4_ * auVar20._8_4_;
    auVar24._4_4_ = -(uint)(fVar59 == fVar27);
    auVar24._0_4_ = 0xffffffff;
    auVar24._8_4_ = -(uint)(fVar59 == fVar54);
    auVar24._12_4_ = 0xffffffff;
    NEON_ext(auVar24,auVar24,8,1);
    if (CONCAT12((char)auVar24._8_4_,CONCAT11((char)auVar24._4_4_,0xff)) == -1) {
      fVar19 = fVar59 * _DAT_01d4ae50;
      fVar25 = fVar27 * _UNK_01d4ae54;
      fVar26 = fVar54 * _UNK_01d4ae58;
      fVar28 = _UNK_01d4ae5c * 0.0;
      fVar43 = (float)((ulong)_DAT_01d4b580 >> 0x20);
      lVar10 = CONCAT44(fVar27 * fVar43,fVar59 * (float)_DAT_01d4b580);
      fVar36 = (float)(_UNK_01d4b588 >> 0x20);
      uVar35 = CONCAT44(fVar36 * 0.0,fVar54 * (float)_UNK_01d4b588);
      fVar29 = fVar59 * _DAT_01d49dc0;
      fVar32 = fVar27 * _UNK_01d49dc4;
      fVar33 = fVar54 * _UNK_01d49dc8;
      fVar34 = _UNK_01d49dcc * 0.0;
      fVar14 = fVar39 * _DAT_01d4ae50;
      fVar49 = fVar40 * _UNK_01d4ae54;
      fVar50 = fVar42 * _UNK_01d4ae58;
      fVar51 = _UNK_01d4ae5c * 0.0;
      lVar12 = CONCAT44(fVar40 * fVar43,fVar39 * (float)_DAT_01d4b580);
      uVar58 = CONCAT44(fVar36 * 0.0,fVar42 * (float)_UNK_01d4b588);
      fVar39 = fVar39 * _DAT_01d49dc0;
      fVar40 = fVar40 * _UNK_01d49dc4;
      fVar42 = fVar42 * _UNK_01d49dc8;
      fVar43 = _UNK_01d49dcc * 0.0;
    }
    else {
      fVar29 = (float)*(undefined8 *)param_3[1];
      fVar26 = fVar29 + fVar29;
      fVar32 = (float)((ulong)*(undefined8 *)param_3[1] >> 0x20);
      fVar28 = fVar32 + fVar32;
      fVar34 = (float)*(undefined8 *)(param_3[1] + 8);
      fVar14 = fVar34 + fVar34;
      fVar25 = (float)((ulong)*(undefined8 *)(param_3[1] + 8) >> 0x20);
      fVar33 = fVar32 * fVar28;
      fVar19 = fVar34 * fVar14;
      uVar11 = NEON_fmov(0x3f800000,4);
      fVar44 = fVar34 * fVar26 - fVar25 * fVar28;
      fVar48 = fVar34 * fVar28 + fVar25 * fVar26;
      fVar49 = (float)uVar11 - fVar29 * fVar26;
      fVar50 = (float)((ulong)uVar11 >> 0x20);
      uVar46 = NEON_ext(CONCAT44(fVar34 * fVar26 + fVar25 * fVar28,fVar34 * fVar26 + fVar25 * fVar28
                                ),
                        CONCAT44(fVar34 * fVar28 - fVar25 * fVar26,fVar34 * fVar28 - fVar25 * fVar26
                                ),4,1);
      fVar52 = fVar49 - fVar33;
      uVar30 = NEON_ext(CONCAT44((fVar50 - fVar33) - fVar19,((float)uVar11 - fVar33) - fVar19),
                        CONCAT44(fVar32 * fVar26 + fVar25 * fVar14,fVar32 * fVar26 + fVar25 * fVar14
                                ),4,1);
      uVar11 = NEON_ext(CONCAT44(fVar32 * fVar26 - fVar25 * fVar14,fVar32 * fVar26 - fVar25 * fVar14
                                ),CONCAT44((fVar50 - fVar29 * fVar26) - fVar19,fVar49 - fVar19),4,1)
      ;
      fVar43 = (float)((ulong)uVar11 >> 0x20);
      fVar50 = (float)uVar30;
      fVar45 = (float)uVar46;
      fVar47 = (float)((ulong)uVar46 >> 0x20);
      uVar55 = NEON_ext(CONCAT44(fVar50,fVar50),uVar11,4,1);
      uVar62 = NEON_ext(uVar30,CONCAT44(fVar43,fVar43),4,1);
      fVar33 = (float)uVar55 * fVar59;
      fVar37 = (float)((ulong)uVar55 >> 0x20);
      fVar34 = fVar37 * fVar59;
      fVar59 = fVar45 * fVar59;
      fVar14 = (float)uVar62 * fVar27;
      fVar56 = (float)((ulong)uVar62 >> 0x20);
      fVar49 = fVar56 * fVar27;
      fVar27 = fVar47 * fVar27;
      uVar46 = NEON_ext(CONCAT44(fVar44,fVar44),(ulong)(uint)fVar48,4,1);
      fVar29 = (float)uVar46 * fVar54;
      fVar41 = (float)((ulong)uVar46 >> 0x20);
      fVar32 = fVar41 * fVar54;
      fVar54 = fVar52 * fVar54;
      fVar36 = (float)uVar55 * fVar39;
      fVar37 = fVar37 * fVar39;
      fVar38 = fVar45 * fVar39;
      fVar53 = (float)uVar62 * fVar40;
      fVar56 = fVar56 * fVar40;
      fVar57 = fVar47 * fVar40;
      fVar40 = (float)uVar46 * fVar42;
      fVar41 = fVar41 * fVar42;
      fVar42 = fVar52 * fVar42;
      fVar51 = (float)((ulong)uVar30 >> 0x20);
      fVar39 = (float)uVar11;
      fVar19 = fVar29 * fVar44 + fVar33 * fVar50 + fVar14 * fVar51;
      fVar25 = fVar32 * fVar44 + fVar34 * fVar50 + fVar49 * fVar51;
      fVar26 = fVar54 * fVar44 + fVar59 * fVar50 + fVar27 * fVar51;
      fVar28 = 0.0;
      lVar10 = CONCAT44(fVar32 * fVar48 + fVar34 * fVar39 + fVar49 * fVar43,
                        fVar29 * fVar48 + fVar33 * fVar39 + fVar14 * fVar43);
      uVar35 = (ulong)(uint)(fVar54 * fVar48 + fVar59 * fVar39 + fVar27 * fVar43);
      fVar29 = fVar29 * fVar52 + fVar33 * fVar45 + fVar14 * fVar47;
      fVar32 = fVar32 * fVar52 + fVar34 * fVar45 + fVar49 * fVar47;
      fVar33 = fVar54 * fVar52 + fVar59 * fVar45 + fVar27 * fVar47;
      fVar34 = 0.0;
      fVar14 = fVar40 * fVar44 + fVar36 * fVar50 + fVar53 * fVar51;
      fVar49 = fVar41 * fVar44 + fVar37 * fVar50 + fVar56 * fVar51;
      fVar50 = fVar42 * fVar44 + fVar38 * fVar50 + fVar57 * fVar51;
      fVar51 = 0.0;
      lVar12 = CONCAT44(fVar41 * fVar48 + fVar37 * fVar39 + fVar56 * fVar43,
                        fVar40 * fVar48 + fVar36 * fVar39 + fVar53 * fVar43);
      uVar58 = (ulong)(uint)(fVar42 * fVar48 + fVar38 * fVar39 + fVar57 * fVar43);
      fVar39 = fVar40 * fVar52 + fVar36 * fVar45 + fVar53 * fVar47;
      fVar40 = fVar41 * fVar52 + fVar37 * fVar45 + fVar56 * fVar47;
      fVar42 = fVar42 * fVar52 + fVar38 * fVar45 + fVar57 * fVar47;
      fVar43 = 0.0;
    }
    lVar60 = CONCAT44(fVar25 * 0.0 + (float)((ulong)lVar10 >> 0x20) * 0.0 + fVar32 * 0.0,
                      fVar19 * 0.0 + (float)lVar10 * 0.0 + fVar29 * 0.0);
    uVar61 = (ulong)(uint)(fVar26 * 0.0 + (float)uVar35 * 0.0 + fVar33 * 0.0);
  }
  lVar9 = *(long *)(param_2 + 0x50);
  *(float *)(param_1 + 0xe) = DAT_01d4bec4 * fVar17;
  param_1[0xd] = uVar61;
  param_1[0xc] = lVar60;
  *(float *)((long)param_1 + 0x74) = fVar15;
  *(float *)(param_1 + 0xf) = fVar18;
  *(undefined8 *)((long)param_1 + 0x7c) = 0x7f7fffff;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x8f) = local_2;
  *(undefined2 *)((long)param_1 + 0x8d) = local_4;
  *(undefined8 *)((long)param_1 + 0x85) = local_c;
  param_1[0x20] = lVar8 + (ulong)bVar2 * 0x14;
  *(float *)(param_1 + 0x13) = fVar26;
  *(float *)((long)param_1 + 0x9c) = fVar28;
  *(float *)(param_1 + 0x12) = fVar19;
  *(float *)((long)param_1 + 0x94) = fVar25;
  param_1[0x15] = uVar35;
  param_1[0x14] = lVar10;
  *(undefined1 *)(param_1 + 0x21) = uVar3;
  *(float *)(param_1 + 0x17) = fVar33;
  *(float *)((long)param_1 + 0xbc) = fVar34;
  *(float *)(param_1 + 0x16) = fVar29;
  *(float *)((long)param_1 + 0xb4) = fVar32;
  *(float *)(param_1 + 0x19) = fVar50;
  *(float *)((long)param_1 + 0xcc) = fVar51;
  *(float *)(param_1 + 0x18) = fVar14;
  *(float *)((long)param_1 + 0xc4) = fVar49;
  param_1[0x1e] = param_2 + 0x20;
  param_1[0x1f] = lVar9;
  param_1[0x1b] = uVar58;
  param_1[0x1a] = lVar12;
  *(float *)(param_1 + 0x1d) = fVar42;
  *(float *)((long)param_1 + 0xec) = fVar43;
  *(float *)(param_1 + 0x1c) = fVar39;
  *(float *)((long)param_1 + 0xe4) = fVar40;
  fVar29 = param_5[2];
  fVar19 = param_5[3];
  fVar32 = *param_5;
  fVar34 = param_5[1];
  fVar51 = (param_6[5] - param_5[5]) + (param_6[5] - param_5[5]);
  fVar14 = (param_6[4] - param_5[4]) + (param_6[4] - param_5[4]);
  fVar39 = (param_6[6] - param_5[6]) + (param_6[6] - param_5[6]);
  fVar40 = fVar19 * fVar19 + -0.5;
  fVar25 = (fVar14 * -fVar32 - fVar51 * fVar34) - fVar39 * fVar29;
  fVar54 = param_6[2];
  fVar59 = param_6[3];
  fVar26 = *param_6;
  fVar28 = param_6[1];
  *(byte *)((long)param_1 + 0x181) = param_7 & 1;
  fVar42 = ((fVar19 * fVar26 - fVar59 * fVar32) - fVar54 * fVar34) + fVar28 * fVar29;
  fVar43 = ((fVar19 * fVar28 - fVar59 * fVar34) - fVar26 * fVar29) + fVar54 * fVar32;
  fVar33 = fVar19 * fVar59 + fVar26 * fVar32 + fVar28 * fVar34 + fVar54 * fVar29;
  fVar15 = ((fVar19 * fVar54 - fVar59 * fVar29) - fVar28 * fVar32) + fVar26 * fVar34;
  fVar26 = fVar42 + fVar42;
  fVar54 = fVar43 + fVar43;
  fVar27 = fVar15 + fVar15;
  fVar49 = fVar43 * fVar54;
  fVar50 = fVar15 * fVar27;
  uVar11 = NEON_fmov(0x3f800000,4);
  fVar59 = (float)((ulong)uVar11 >> 0x20);
  fVar28 = (float)uVar11 - fVar42 * fVar26;
  lVar10 = NEON_ext(CONCAT44(fVar43 * fVar26 - fVar33 * fVar27,fVar43 * fVar26 - fVar33 * fVar27),
                    CONCAT44((fVar59 - fVar42 * fVar26) - fVar50,fVar28 - fVar50),4,1);
  lVar8 = NEON_ext(CONCAT44((fVar59 - fVar49) - fVar50,((float)uVar11 - fVar49) - fVar50),
                   CONCAT44(fVar43 * fVar26 + fVar33 * fVar27,fVar43 * fVar26 + fVar33 * fVar27),4,1
                  );
  lVar12 = NEON_ext(CONCAT44(fVar15 * fVar26 + fVar33 * fVar54,fVar15 * fVar26 + fVar33 * fVar54),
                    CONCAT44(fVar15 * fVar54 - fVar33 * fVar26,fVar15 * fVar54 - fVar33 * fVar26),4,
                    1);
  param_1[0x23] = (ulong)(uint)(fVar15 * fVar26 - fVar33 * fVar54);
  param_1[0x22] = lVar8;
  param_1[0x25] = (ulong)(uint)(fVar15 * fVar54 + fVar33 * fVar26);
  param_1[0x24] = lVar10;
  param_1[0x27] = (ulong)(uint)(fVar28 - fVar49);
  param_1[0x26] = lVar12;
  param_1[0x29] =
       (ulong)(uint)((fVar40 * fVar39 + fVar19 * (fVar14 * fVar34 - fVar51 * fVar32)) -
                    fVar25 * fVar29);
  param_1[0x28] =
       CONCAT44((fVar40 * fVar51 + fVar19 * (fVar39 * fVar32 - fVar14 * fVar29)) - fVar25 * fVar34,
                (fVar40 * fVar14 + fVar19 * (fVar51 * fVar29 - fVar39 * fVar34)) - fVar25 * fVar32);
  fVar59 = param_8[8];
  fVar27 = -param_8[9];
  fVar32 = *param_8;
  fVar33 = param_8[1];
  fVar14 = param_8[10];
  fVar49 = param_8[0xb];
  fVar34 = param_8[2];
  fVar19 = param_8[3];
  fVar25 = param_8[4];
  fVar26 = param_8[5];
  fVar28 = param_8[6];
  fVar54 = param_8[7];
  param_1[3] = (ulong)(uint)fVar28;
  param_1[2] = CONCAT44(fVar19,fVar32);
  param_1[5] = (ulong)(uint)fVar54;
  param_1[4] = CONCAT44(fVar25,fVar33);
  fVar29 = DAT_01d4c6ac;
  param_1[7] = (ulong)(uint)fVar59;
  param_1[6] = CONCAT44(fVar26,fVar34);
  param_1[9] = (ulong)(uint)((fVar28 * fVar27 - fVar54 * fVar14) - fVar59 * fVar49);
  param_1[8] = CONCAT44((fVar19 * fVar27 - fVar25 * fVar14) - fVar26 * fVar49,
                        (fVar32 * fVar27 - fVar33 * fVar14) - fVar34 * fVar49);
  fVar32 = param_8[0xc];
  fVar33 = param_8[0xd];
  param_1[0xb] = (ulong)(uint)(param_8[0xe] + fVar29);
  param_1[10] = CONCAT44(fVar33 + fVar29,fVar32 + fVar29);
  return;
}


