/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002cb940; name: FUN_002cb940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cb940(float param_1,undefined4 param_2,long *param_3,long param_4,long param_5,
                 undefined1 (*param_6) [12],undefined1 (*param_7) [16],undefined1 (*param_8) [12],
                 undefined1 (*param_9) [12],ushort *param_10)

{
  undefined4 uVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  bool bVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  ulong uVar31;
  long lVar32;
  undefined8 uVar33;
  ulong uVar34;
  undefined8 uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  long lVar67;
  float fVar69;
  float fVar70;
  undefined1 auVar68 [16];
  float fVar71;
  float fVar72;
  long lVar73;
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  long lVar87;
  
  puVar23 = PTR_DAT_02712028;
  lVar22 = _UNK_01d4b588;
  lVar21 = _DAT_01d4b580;
  lVar73 = _UNK_01d4b578;
  lVar67 = _DAT_01d4b570;
  lVar20 = _UNK_01d4ae58;
  lVar32 = _DAT_01d4ae50;
  lVar19 = _UNK_01d49dc8;
  lVar25 = _DAT_01d49dc0;
  uVar3 = *param_10;
  *(undefined2 *)((long)param_3 + 0x12) = 0;
  *(ushort *)(param_3 + 2) = uVar3;
  *param_3 = (long)(puVar23 + 0x10);
  param_3[1] = param_4;
  bVar4 = (byte)(uVar3 >> 7) & 1;
  bVar2 = *(byte *)(*(long *)(param_4 + 0x18) + 0x1c);
  *(byte *)((long)param_3 + 0x15) = (byte)((uVar3 & 0xff) >> 6) & 1;
  puVar23 = PTR_DAT_02712038;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined1 *)((long)param_3 + 0xa4) = 0;
  param_3[9] = lVar19;
  param_3[8] = lVar25;
  param_3[0xb] = 0;
  param_3[10] = 0;
  *(undefined2 *)((long)param_3 + 0x144) = 0;
  param_3[5] = lVar20;
  param_3[4] = lVar32;
  param_3[7] = lVar22;
  param_3[6] = lVar21;
  param_3[0x2b] = 0;
  param_3[0xd] = lVar73;
  param_3[0xc] = lVar67;
  param_3[0xf] = 0;
  param_3[0xe] = 0;
  if ((bVar2 & 2) != 0) {
    bVar4 = 1;
  }
  param_3[0x11] = 0;
  param_3[0x10] = 0;
  *param_3 = (long)(puVar23 + 0x10);
  *(byte *)((long)param_3 + 0x14) = bVar4;
  param_3[0x29] = 0;
  param_3[0x2a] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = (long)&DAT_7f7fffff00000000;
  param_3[0x26] = 0;
  param_3[0x27] = 0;
  *(undefined4 *)(param_3 + 0x31) = *(undefined4 *)*param_9;
  *(undefined4 *)((long)param_3 + 0x18c) = *(undefined4 *)(*param_9 + 4);
  uVar1 = *(undefined4 *)(*param_9 + 8);
  *(undefined4 *)(param_3 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x34) = param_2;
  *(float *)(param_3 + 0x2c) = param_1;
  *(undefined4 *)(param_3 + 0x32) = uVar1;
  auVar17 = *param_9;
  auVar46 = *param_7;
  fVar78 = (float)*(undefined8 *)(*param_8 + 8);
  fVar30 = (float)((ulong)*(undefined8 *)(*param_8 + 8) >> 0x20);
  auVar15 = *param_8;
  auVar14 = *param_8;
  fVar64 = (float)*(undefined8 *)*param_8;
  fVar77 = (float)((ulong)*(undefined8 *)*param_8 >> 0x20);
  fVar58 = auVar46._0_4_;
  fVar27 = -fVar58;
  fVar65 = auVar46._4_4_;
  fVar28 = -fVar65;
  fVar71 = auVar46._8_4_;
  fVar29 = -fVar71;
  fVar72 = auVar46._12_4_;
  auVar13 = *(undefined1 (*) [12])param_7[1];
  fVar74 = fVar72 * fVar72 + -0.5;
  auVar82._0_4_ = (float)*(undefined8 *)(param_8[1] + 4) - auVar13._0_4_;
  auVar82._4_4_ = (float)((ulong)*(undefined8 *)(param_8[1] + 4) >> 0x20) - auVar13._4_4_;
  auVar82._8_4_ = *(float *)param_8[2] - auVar13._8_4_;
  auVar82._12_4_ = 0;
  auVar11._4_4_ = fVar28;
  auVar11._0_4_ = fVar27;
  auVar11._8_4_ = fVar29;
  auVar11._12_4_ = 0;
  auVar12._4_4_ = fVar28;
  auVar12._0_4_ = fVar27;
  auVar12._8_4_ = fVar29;
  auVar12._12_4_ = 0;
  auVar83 = NEON_ext(auVar11,auVar12,8,1);
  auVar84._0_4_ = fVar27 * auVar82._0_4_;
  auVar84._4_4_ = fVar28 * auVar82._4_4_;
  auVar84._8_4_ = fVar29 * auVar82._8_4_;
  auVar84._12_4_ = 0;
  auVar85 = NEON_ext(auVar82,auVar82,8,1);
  param_3[0xd] = auVar46._8_8_;
  param_3[0xc] = auVar46._0_8_;
  param_3[0xf] = (ulong)(uint)auVar13._8_4_;
  param_3[0xe] = auVar13._0_8_;
  fVar43 = fVar64 * fVar27;
  fVar44 = fVar77 * fVar28;
  fVar86 = fVar27 * auVar82._4_4_ - fVar28 * auVar82._0_4_;
  auVar42 = NEON_ext(auVar84,auVar84,8,1);
  fVar26 = auVar84._0_4_ + auVar84._4_4_ + auVar42._0_4_ + auVar42._4_4_;
  uVar81 = NEON_ext(CONCAT44(fVar28 * auVar82._8_4_ - fVar29 * auVar82._4_4_,fVar86),
                    CONCAT44(auVar83._4_4_ * auVar82._4_4_ - fVar28 * auVar85._4_4_,
                             auVar83._0_4_ * auVar82._0_4_ - fVar27 * auVar85._0_4_),4,1);
  auVar42._12_4_ = 0;
  auVar42._0_12_ = auVar14;
  auVar85._12_4_ = 0;
  auVar85._0_12_ = auVar15;
  auVar85 = NEON_ext(auVar42,auVar85,8,1);
  auVar75._0_4_ = auVar82._0_4_ * fVar74 + (float)uVar81 * fVar72;
  auVar75._4_4_ = auVar82._4_4_ * fVar74 + (float)((ulong)uVar81 >> 0x20) * fVar72;
  auVar75._8_4_ = auVar82._8_4_ * fVar74 + fVar86 * fVar72;
  auVar75._12_4_ = fVar72 * 0.0 + 0.0;
  auVar42 = NEON_ext(auVar75,auVar75,8,1);
  param_3[0x30] = CONCAT44(param_1,param_1);
  auVar55._0_4_ = -(auVar17._0_4_ * param_1);
  auVar55._4_4_ = -(auVar17._4_4_ * param_1);
  auVar55._8_4_ = -(auVar17._8_4_ * param_1);
  auVar76._0_4_ = fVar27 * fVar26 + auVar75._0_4_;
  auVar76._4_4_ = fVar28 * fVar26 + auVar75._4_4_;
  auVar76._8_4_ = fVar29 * fVar26 + auVar42._0_4_;
  auVar76._12_4_ = fVar26 * 0.0 + 0.0;
  fVar26 = fVar77 * fVar27 - fVar64 * fVar28;
  auVar42 = NEON_ext(auVar76,auVar76,8,1);
  uVar81 = NEON_ext(CONCAT44(fVar78 * fVar28 - fVar77 * fVar29,fVar26),
                    CONCAT44(fVar77 * auVar83._4_4_ - auVar85._4_4_ * fVar28,
                             fVar64 * auVar83._0_4_ - auVar85._0_4_ * fVar27),4,1);
  auVar83._4_4_ = fVar44;
  auVar83._0_4_ = fVar43;
  auVar83._8_4_ = fVar78 * fVar29;
  auVar83._12_4_ = 0;
  auVar10._4_4_ = fVar44;
  auVar10._0_4_ = fVar43;
  auVar10._8_4_ = fVar78 * fVar29;
  auVar10._12_4_ = 0;
  auVar85 = NEON_ext(auVar83,auVar10,8,1);
  fVar64 = fVar64 * fVar72 + fVar27 * fVar30 + (float)uVar81;
  fVar28 = fVar77 * fVar72 + fVar28 * fVar30 + (float)((ulong)uVar81 >> 0x20);
  fVar26 = fVar78 * fVar72 + fVar29 * fVar30 + fVar26;
  fVar27 = fVar30 * fVar72 - (fVar43 + fVar44 + auVar85._0_4_ + auVar85._4_4_);
  fVar78 = fVar64 + fVar64;
  fVar44 = fVar28 + fVar28;
  fVar74 = fVar26 + fVar26;
  fVar29 = fVar28 * fVar44;
  fVar77 = fVar26 * fVar74;
  uVar81 = NEON_fmov(0x3f800000,4);
  fVar30 = (float)uVar81;
  fVar43 = (float)((ulong)uVar81 >> 0x20);
  fVar86 = fVar30 - fVar64 * fVar78;
  auVar55._12_4_ = 0;
  lVar73 = NEON_ext(CONCAT44(fVar28 * fVar78 - fVar27 * fVar74,fVar28 * fVar78 - fVar27 * fVar74),
                    CONCAT44((fVar43 - fVar64 * fVar78) - fVar77,fVar86 - fVar77),4,1);
  lVar67 = NEON_ext(CONCAT44(fVar26 * fVar78 + fVar27 * fVar44,fVar26 * fVar78 + fVar27 * fVar44),
                    CONCAT44(fVar26 * fVar44 - fVar27 * fVar78,fVar26 * fVar44 - fVar27 * fVar78),4,
                    1);
  lVar87 = NEON_ext(CONCAT44((fVar43 - fVar29) - fVar77,(fVar30 - fVar29) - fVar77),
                    CONCAT44(fVar28 * fVar78 + fVar27 * fVar74,fVar28 * fVar78 + fVar27 * fVar74),4,
                    1);
  param_3[9] = (ulong)(uint)(fVar86 - fVar29);
  param_3[8] = lVar67;
  param_3[0xb] = (ulong)(uint)(auVar42._0_4_ + auVar42._0_4_);
  param_3[10] = CONCAT44(auVar76._4_4_ + auVar76._4_4_,auVar76._0_4_ + auVar76._0_4_);
  param_3[5] = (ulong)(uint)(fVar26 * fVar78 - fVar27 * fVar44);
  param_3[4] = lVar87;
  param_3[7] = (ulong)(uint)(fVar26 * fVar44 + fVar27 * fVar78);
  param_3[6] = lVar73;
  auVar85 = NEON_ext(auVar55,auVar55,8,1);
  auVar68._0_12_ = auVar46._0_12_;
  auVar68._12_4_ = 0;
  fVar27 = fVar72 * fVar72 + -0.5;
  auVar42 = NEON_ext(auVar68,auVar68,8,1);
  auVar56._0_4_ = auVar55._0_4_ * fVar58;
  auVar56._4_4_ = auVar55._4_4_ * fVar65;
  auVar56._8_4_ = auVar55._8_4_ * fVar71;
  auVar56._12_4_ = 0;
  fVar26 = auVar55._4_4_ * fVar58 - auVar55._0_4_ * fVar65;
  uVar81 = NEON_ext(CONCAT44(auVar55._8_4_ * fVar65 - auVar55._4_4_ * fVar71,fVar26),
                    CONCAT44(auVar55._4_4_ * auVar42._4_4_ - auVar85._4_4_ * fVar65,
                             auVar55._0_4_ * auVar42._0_4_ - auVar85._0_4_ * fVar58),4,1);
  auVar46._0_4_ = auVar55._0_4_ * fVar27 - (float)uVar81 * fVar72;
  auVar46._4_4_ = auVar55._4_4_ * fVar27 - (float)((ulong)uVar81 >> 0x20) * fVar72;
  auVar46._8_4_ = auVar55._8_4_ * fVar27 - fVar26 * fVar72;
  auVar46._12_4_ = 0.0 - fVar72 * 0.0;
  auVar42 = NEON_ext(auVar46,auVar46,8,1);
  auVar85 = NEON_ext(auVar56,auVar56,8,1);
  fVar26 = auVar56._0_4_ + auVar56._4_4_ + auVar85._0_4_ + auVar85._4_4_;
  auVar47._0_4_ = auVar46._0_4_ + fVar58 * fVar26;
  auVar47._4_4_ = auVar46._4_4_ + fVar65 * fVar26;
  auVar47._8_4_ = auVar42._0_4_ + fVar71 * fVar26;
  auVar47._12_4_ = fVar26 * 0.0 + 0.0;
  auVar42 = NEON_ext(auVar47,auVar47,8,1);
  param_3[0x2f] = (ulong)(uint)(auVar42._0_4_ + auVar42._0_4_);
  param_3[0x2e] = CONCAT44(auVar47._4_4_ + auVar47._4_4_,auVar47._0_4_ + auVar47._0_4_);
  fVar71 = *(float *)(*param_8 + 8);
  fVar72 = *(float *)param_8[1];
  fVar26 = *(float *)param_6[1];
  fVar27 = *(float *)(param_6[1] + 4);
  fVar28 = *(float *)(param_6[1] + 8);
  fVar29 = *(float *)param_6[2];
  fVar44 = *(float *)*param_9 + *(float *)*param_9;
  fVar58 = *(float *)(*param_9 + 4) + *(float *)(*param_9 + 4);
  fVar65 = *(float *)(*param_9 + 8) + *(float *)(*param_9 + 8);
  fVar74 = fVar72 * fVar72 + -0.5;
  fVar86 = *(float *)*param_8;
  fVar79 = *(float *)(*param_8 + 4);
  fVar80 = fVar44 * fVar86 + fVar58 * fVar79 + fVar65 * fVar71;
  fVar78 = (float)*(undefined8 *)(*param_6 + 8);
  auVar18 = *param_6;
  auVar17 = *param_6;
  auVar15 = *param_6;
  auVar14 = *param_6;
  auVar13 = *param_6;
  fVar64 = (float)*(undefined8 *)*param_6;
  fVar77 = (float)((ulong)*(undefined8 *)*param_6 >> 0x20);
  *(float *)((long)param_3 + 0x194) =
       fVar86 * fVar80 + (fVar44 * fVar74 - fVar72 * (fVar65 * fVar79 - fVar58 * fVar71));
  *(float *)(param_3 + 0x33) =
       fVar79 * fVar80 + (fVar58 * fVar74 - fVar72 * (fVar44 * fVar71 - fVar65 * fVar86));
  *(float *)((long)param_3 + 0x19c) =
       (fVar65 * fVar74 - fVar72 * (fVar58 * fVar86 - fVar44 * fVar79)) + fVar71 * fVar80;
  if ((*(float *)*param_6 == 1.0) && (*(float *)(*param_6 + 4) == 1.0)) {
    bVar24 = *(float *)(*param_6 + 8) == 1.0;
  }
  else {
    bVar24 = false;
  }
  auVar16 = *(undefined1 (*) [12])(param_5 + 0x3c);
  fVar44 = fVar78 * auVar16._8_4_;
  uVar81 = NEON_fminp(CONCAT44(fVar44,fVar44),
                      CONCAT44(fVar77 * auVar16._4_4_,fVar64 * auVar16._0_4_),4);
  uVar81 = NEON_fminp(uVar81,uVar81,4);
  fVar44 = (float)uVar81;
  fVar58 = DAT_01d4c158 * fVar44;
  lVar67 = *(long *)(param_5 + 0x28);
  bVar4 = *(byte *)(param_5 + 0x27);
  *(float *)(param_3 + 0x12) = DAT_01d4bec4 * fVar44;
  *(float *)((long)param_3 + 0x94) = fVar58;
  *(float *)(param_3 + 0x13) = DAT_01d4bb3c * fVar44;
  if (bVar24) {
    param_3[0x17] = lVar20;
    param_3[0x16] = lVar32;
    param_3[0x19] = lVar22;
    param_3[0x18] = lVar21;
    param_3[0x1b] = lVar19;
    param_3[0x1a] = lVar25;
    param_3[0x1d] = lVar20;
    param_3[0x1c] = lVar32;
    param_3[0x1f] = lVar22;
    param_3[0x1e] = lVar21;
    param_3[0x21] = lVar19;
    param_3[0x20] = lVar25;
  }
  else {
    auVar5._12_4_ = 0;
    auVar5._0_12_ = auVar13;
    auVar42 = NEON_frecpe(auVar5,4);
    auVar6._12_4_ = 0;
    auVar6._0_12_ = auVar14;
    auVar85 = NEON_frecps(auVar42,auVar6,4);
    auVar48._0_4_ = auVar42._0_4_ * auVar85._0_4_;
    auVar48._4_4_ = auVar42._4_4_ * auVar85._4_4_;
    auVar48._8_4_ = auVar42._8_4_ * auVar85._8_4_;
    auVar48._12_4_ = auVar42._12_4_ * auVar85._12_4_;
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar15;
    auVar42 = NEON_frecps(auVar48,auVar7,4);
    auVar49._0_4_ = auVar48._0_4_ * auVar42._0_4_;
    auVar49._4_4_ = auVar48._4_4_ * auVar42._4_4_;
    auVar49._8_4_ = auVar48._8_4_ * auVar42._8_4_;
    auVar49._12_4_ = auVar48._12_4_ * auVar42._12_4_;
    auVar8._12_4_ = 0;
    auVar8._0_12_ = auVar17;
    auVar42 = NEON_frecps(auVar49,auVar8,4);
    auVar50._0_4_ = auVar49._0_4_ * auVar42._0_4_;
    auVar50._4_4_ = auVar49._4_4_ * auVar42._4_4_;
    auVar50._8_4_ = auVar49._8_4_ * auVar42._8_4_;
    auVar50._12_4_ = auVar49._12_4_ * auVar42._12_4_;
    auVar9._12_4_ = 0;
    auVar9._0_12_ = auVar18;
    auVar42 = NEON_frecps(auVar50,auVar9,4);
    fVar44 = auVar50._0_4_ * auVar42._0_4_;
    fVar58 = auVar50._4_4_ * auVar42._4_4_;
    fVar65 = auVar50._8_4_ * auVar42._8_4_;
    auVar61._4_4_ = -(uint)(fVar64 == fVar77);
    auVar61._0_4_ = 0xffffffff;
    auVar61._8_4_ = -(uint)(fVar64 == fVar78);
    auVar61._12_4_ = 0xffffffff;
    NEON_ext(auVar61,auVar61,8,1);
    if (CONCAT12((char)auVar61._8_4_,CONCAT11((char)auVar61._4_4_,0xff)) == -1) {
      fVar37 = fVar64 * (float)lVar32;
      fVar29 = (float)((ulong)lVar32 >> 0x20);
      fVar38 = fVar77 * fVar29;
      fVar40 = fVar78 * (float)lVar20;
      fVar43 = (float)((ulong)lVar20 >> 0x20);
      fVar41 = fVar43 * 0.0;
      fVar27 = (float)((ulong)lVar21 >> 0x20);
      lVar73 = CONCAT44(fVar77 * fVar27,fVar64 * (float)lVar21);
      fVar28 = (float)((ulong)lVar22 >> 0x20);
      uVar36 = CONCAT44(fVar28 * 0.0,fVar78 * (float)lVar22);
      fVar64 = fVar64 * (float)lVar25;
      fVar30 = (float)((ulong)lVar25 >> 0x20);
      fVar77 = fVar77 * fVar30;
      fVar78 = fVar78 * (float)lVar19;
      fVar71 = (float)((ulong)lVar19 >> 0x20);
      fVar26 = fVar71 * 0.0;
      fVar52 = fVar44 * (float)lVar32;
      fVar29 = fVar58 * fVar29;
      fVar57 = fVar65 * (float)lVar20;
      fVar43 = fVar43 * 0.0;
      lVar32 = CONCAT44(fVar58 * fVar27,fVar44 * (float)lVar21);
      uVar34 = CONCAT44(fVar28 * 0.0,fVar65 * (float)lVar22);
      lVar25 = CONCAT44(fVar58 * fVar30,fVar44 * (float)lVar25);
      uVar31 = CONCAT44(fVar71 * 0.0,fVar65 * (float)lVar19);
    }
    else {
      fVar72 = fVar26 + fVar26;
      fVar74 = fVar27 + fVar27;
      fVar86 = fVar28 + fVar28;
      fVar80 = fVar27 * fVar74;
      fVar63 = fVar28 * fVar86;
      fVar57 = fVar28 * fVar72 - fVar29 * fVar74;
      fVar71 = fVar28 * fVar74 + fVar29 * fVar72;
      fVar79 = fVar30 - fVar26 * fVar72;
      uVar81 = NEON_ext(CONCAT44(fVar28 * fVar72 + fVar29 * fVar74,fVar28 * fVar72 + fVar29 * fVar74
                                ),
                        CONCAT44(fVar28 * fVar74 - fVar29 * fVar72,fVar28 * fVar74 - fVar29 * fVar72
                                ),4,1);
      fVar53 = fVar79 - fVar80;
      uVar35 = NEON_ext(CONCAT44((fVar43 - fVar80) - fVar63,(fVar30 - fVar80) - fVar63),
                        CONCAT44(fVar27 * fVar72 + fVar29 * fVar86,fVar27 * fVar72 + fVar29 * fVar86
                                ),4,1);
      uVar33 = NEON_ext(CONCAT44(fVar27 * fVar72 - fVar29 * fVar86,fVar27 * fVar72 - fVar29 * fVar86
                                ),CONCAT44((fVar43 - fVar26 * fVar72) - fVar63,fVar79 - fVar63),4,1)
      ;
      fVar74 = (float)((ulong)uVar33 >> 0x20);
      fVar43 = (float)uVar35;
      fVar28 = (float)uVar81;
      fVar30 = (float)((ulong)uVar81 >> 0x20);
      uVar81 = NEON_ext(CONCAT44(fVar43,fVar43),uVar33,4,1);
      fVar39 = (float)((ulong)uVar81 >> 0x20);
      uVar60 = NEON_ext(uVar35,CONCAT44(fVar74,fVar74),4,1);
      uVar54 = NEON_ext(CONCAT44(fVar57,fVar57),(ulong)(uint)fVar71,4,1);
      fVar86 = (float)uVar81 * fVar64;
      fVar79 = fVar39 * fVar64;
      fVar80 = fVar28 * fVar64;
      fVar66 = (float)uVar60 * fVar77;
      fVar62 = (float)((ulong)uVar60 >> 0x20);
      fVar69 = fVar62 * fVar77;
      fVar70 = fVar30 * fVar77;
      fVar59 = (float)uVar60 * fVar58;
      fVar62 = fVar62 * fVar58;
      fVar58 = fVar30 * fVar58;
      fVar26 = (float)uVar54 * fVar78;
      fVar51 = (float)((ulong)uVar54 >> 0x20);
      fVar27 = fVar51 * fVar78;
      fVar78 = fVar53 * fVar78;
      fVar63 = (float)uVar81 * fVar44;
      fVar39 = fVar39 * fVar44;
      fVar44 = fVar28 * fVar44;
      fVar45 = (float)uVar54 * fVar65;
      fVar51 = fVar51 * fVar65;
      fVar65 = fVar53 * fVar65;
      fVar64 = (float)((ulong)uVar35 >> 0x20);
      fVar72 = (float)uVar33;
      fVar37 = fVar26 * fVar57 + fVar86 * fVar43 + fVar66 * fVar64;
      fVar38 = fVar27 * fVar57 + fVar79 * fVar43 + fVar69 * fVar64;
      fVar40 = fVar78 * fVar57 + fVar80 * fVar43 + fVar70 * fVar64;
      fVar41 = 0.0;
      fVar52 = fVar45 * fVar57 + fVar63 * fVar43 + fVar59 * fVar64;
      fVar29 = fVar51 * fVar57 + fVar39 * fVar43 + fVar62 * fVar64;
      fVar57 = fVar65 * fVar57 + fVar44 * fVar43 + fVar58 * fVar64;
      fVar43 = 0.0;
      lVar73 = CONCAT44(fVar27 * fVar71 + fVar79 * fVar72 + fVar69 * fVar74,
                        fVar26 * fVar71 + fVar86 * fVar72 + fVar66 * fVar74);
      uVar36 = (ulong)(uint)(fVar78 * fVar71 + fVar80 * fVar72 + fVar70 * fVar74);
      fVar64 = fVar26 * fVar53 + fVar86 * fVar28 + fVar66 * fVar30;
      fVar77 = fVar27 * fVar53 + fVar79 * fVar28 + fVar69 * fVar30;
      fVar78 = fVar78 * fVar53 + fVar80 * fVar28 + fVar70 * fVar30;
      fVar26 = 0.0;
      lVar32 = CONCAT44(fVar51 * fVar71 + fVar39 * fVar72 + fVar62 * fVar74,
                        fVar45 * fVar71 + fVar63 * fVar72 + fVar59 * fVar74);
      uVar34 = (ulong)(uint)(fVar65 * fVar71 + fVar44 * fVar72 + fVar58 * fVar74);
      lVar25 = CONCAT44(fVar51 * fVar53 + fVar39 * fVar28 + fVar62 * fVar30,
                        fVar45 * fVar53 + fVar63 * fVar28 + fVar59 * fVar30);
      uVar31 = (ulong)(uint)(fVar65 * fVar53 + fVar44 * fVar28 + fVar58 * fVar30);
    }
    param_3[0x1f] = uVar34;
    param_3[0x1e] = lVar32;
    param_3[0x21] = uVar31;
    param_3[0x20] = lVar25;
    param_3[0x1b] = CONCAT44(fVar26,fVar78);
    param_3[0x1a] = CONCAT44(fVar77,fVar64);
    *(float *)(param_3 + 0x1d) = fVar57;
    *(float *)((long)param_3 + 0xec) = fVar43;
    *(float *)(param_3 + 0x1c) = fVar52;
    *(float *)((long)param_3 + 0xe4) = fVar29;
    param_3[0x17] = CONCAT44(fVar41,fVar40);
    param_3[0x16] = CONCAT44(fVar38,fVar37);
    param_3[0x19] = uVar36;
    param_3[0x18] = lVar73;
    param_3[0x11] = (ulong)(uint)(fVar78 * 0.0 + (float)uVar36 * 0.0 + fVar40 * 0.0);
    param_3[0x10] =
         CONCAT44(fVar77 * 0.0 + (float)((ulong)lVar73 >> 0x20) * 0.0 + fVar38 * 0.0,
                  fVar64 * 0.0 + (float)lVar73 * 0.0 + fVar37 * 0.0);
  }
  param_3[0x24] = lVar67 + (ulong)bVar4 * 0x14;
  *(undefined1 *)(param_3 + 0x25) = *(undefined1 *)(param_5 + 0x26);
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  lVar25 = *(long *)(param_5 + 0x30);
  param_3[0x22] = param_5;
  param_3[0x23] = lVar25;
  if (lVar25 != 0) {
    Hint_Prefetch(*(long *)(lVar25 + 0x18),0,0,0);
    Hint_Prefetch(*(long *)(lVar25 + 0x18) + 0x80,0,0,0);
    Hint_Prefetch(*(undefined8 *)(lVar25 + 0x20),0,0,0);
  }
  return;
}


