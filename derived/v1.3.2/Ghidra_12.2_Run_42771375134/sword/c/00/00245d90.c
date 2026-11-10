/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00245d90; name: FUN_00245d90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00245d90(float param_1,undefined4 param_2,undefined4 param_3,long *param_4,long param_5,
                 undefined1 (*param_6) [12],long param_7,undefined1 (*param_8) [16],
                 undefined1 (*param_9) [12],undefined1 (*param_10) [12],undefined2 *param_11,
                 byte param_12,byte param_13)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
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
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  bool bVar30;
  long lVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long lVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  long lVar41;
  undefined8 uVar42;
  float fVar43;
  ulong uVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar61;
  undefined8 uVar59;
  float fVar62;
  undefined1 auVar60 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar67 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  long lVar79;
  undefined8 uVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  long lVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  
  puVar29 = PTR_DAT_02711e68;
  uVar2 = *(undefined1 *)(param_7 + 0x48);
  *(undefined4 *)(param_4 + 1) = 2;
  lVar28 = _UNK_01d4b588;
  lVar27 = _DAT_01d4b580;
  lVar79 = _UNK_01d4b578;
  lVar31 = _DAT_01d4b570;
  lVar41 = _UNK_01d4ae58;
  lVar37 = _DAT_01d4ae50;
  lVar26 = _UNK_01d49dc8;
  lVar25 = _DAT_01d49dc0;
  uVar4 = *param_11;
  param_4[10] = 0;
  param_4[0xb] = (long)&DAT_7f7fffff00000000;
  *(undefined1 *)(param_4 + 2) = uVar2;
  *(undefined2 *)((long)param_4 + 0xe) = 0;
  *(undefined4 *)((long)param_4 + 0x14) = param_3;
  param_4[0x2c] = 0;
  param_4[0x2a] = param_7;
  param_4[0x2b] = 0;
  *(undefined2 *)((long)param_4 + 0x16c) = 0;
  param_4[0x2e] = 0;
  param_4[0x2f] = 0;
  param_4[0x30] = 0;
  *(undefined4 *)(param_4 + 0xc) = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  *(undefined1 *)((long)param_4 + 100) = 0;
  *(undefined2 *)((long)param_4 + 0xc) = uVar4;
  *param_4 = (long)(puVar29 + 0x10);
  param_4[0x23] = lVar26;
  param_4[0x22] = lVar25;
  param_4[0x25] = 0;
  param_4[0x24] = 0;
  param_4[0x1f] = lVar41;
  param_4[0x1e] = lVar37;
  param_4[0x21] = lVar28;
  param_4[0x20] = lVar27;
  param_4[0x27] = lVar79;
  param_4[0x26] = lVar31;
  param_4[0x29] = 0;
  param_4[0x28] = 0;
  *(undefined4 *)(param_4 + 0x36) = *(undefined4 *)*param_10;
  *(undefined4 *)((long)param_4 + 0x1b4) = *(undefined4 *)(*param_10 + 4);
  uVar1 = *(undefined4 *)(*param_10 + 8);
  *(undefined4 *)(param_4 + 0x39) = param_2;
  *(byte *)((long)param_4 + 0x1cc) = param_13 & 1;
  *(byte *)((long)param_4 + 0x1cd) = param_12 & 1;
  *(float *)(param_4 + 0x31) = param_1;
  *(undefined4 *)(param_4 + 0x2d) = 0xffffffff;
  *(undefined4 *)(param_4 + 0x37) = uVar1;
  fVar34 = *(float *)(*param_10 + 4) + *(float *)(*param_10 + 4);
  fVar77 = *(float *)(*param_9 + 8);
  fVar81 = *(float *)param_9[1];
  fVar70 = *(float *)*param_9;
  fVar73 = *(float *)(*param_9 + 4);
  fVar32 = *(float *)*param_10 + *(float *)*param_10;
  fVar56 = *(float *)(*param_10 + 8) + *(float *)(*param_10 + 8);
  fVar64 = fVar81 * fVar81 + -0.5;
  fVar85 = fVar32 * fVar70 + fVar34 * fVar73 + fVar56 * fVar77;
  *(float *)(param_4 + 0x38) =
       fVar73 * fVar85 + (fVar34 * fVar64 - fVar81 * (fVar32 * fVar77 - fVar56 * fVar70));
  *(float *)((long)param_4 + 0x1bc) =
       fVar70 * fVar85 + (fVar32 * fVar64 - fVar81 * (fVar56 * fVar73 - fVar34 * fVar77));
  *(float *)((long)param_4 + 0x1c4) =
       (fVar56 * fVar64 - fVar81 * (fVar34 * fVar70 - fVar32 * fVar73)) + fVar77 * fVar85;
  auVar51 = *param_8;
  fVar74 = *(float *)(param_9[1] + 4);
  auVar23 = *param_10;
  fVar35 = (float)*(undefined8 *)(*param_9 + 8);
  fVar75 = (float)((ulong)*(undefined8 *)(*param_9 + 8) >> 0x20);
  auVar21 = *param_9;
  auVar20 = *param_9;
  fVar73 = (float)*(undefined8 *)*param_9;
  fVar81 = (float)((ulong)*(undefined8 *)*param_9 >> 0x20);
  fVar36 = auVar51._0_4_;
  fVar34 = -fVar36;
  fVar39 = auVar51._4_4_;
  fVar64 = -fVar39;
  auVar82._4_4_ = fVar64;
  auVar82._0_4_ = fVar34;
  fVar40 = auVar51._8_4_;
  fVar70 = -fVar40;
  fVar43 = auVar51._12_4_;
  auVar82._12_4_ = -fVar43;
  auVar82._8_4_ = fVar70;
  fVar76 = *(float *)(param_9[1] + 8);
  fVar56 = *(float *)param_9[2];
  auVar83._0_12_ = auVar82._0_12_;
  auVar19 = *(undefined1 (*) [12])param_8[1];
  auVar83._12_4_ = 0;
  fVar86 = fVar43 * fVar43 + -0.5;
  auVar89 = NEON_ext(auVar83,auVar83,8,1);
  param_4[0x32] = CONCAT44(param_1,param_1);
  fVar74 = fVar74 - auVar19._0_4_;
  fVar76 = fVar76 - auVar19._4_4_;
  fVar56 = fVar56 - auVar19._8_4_;
  fVar32 = fVar34 * fVar74;
  fVar85 = fVar64 * fVar76;
  auVar90._4_4_ = fVar76;
  auVar90._0_4_ = fVar74;
  auVar90._8_4_ = fVar56;
  auVar90._12_4_ = 0;
  auVar10._4_4_ = fVar76;
  auVar10._0_4_ = fVar74;
  auVar10._8_4_ = fVar56;
  auVar10._12_4_ = 0;
  auVar90 = NEON_ext(auVar90,auVar10,8,1);
  fVar48 = fVar73 * fVar34;
  fVar49 = fVar81 * fVar64;
  auVar17._4_4_ = fVar85;
  auVar17._0_4_ = fVar32;
  auVar17._8_4_ = fVar70 * fVar56;
  auVar17._12_4_ = 0;
  auVar18._4_4_ = fVar85;
  auVar18._0_4_ = fVar32;
  auVar18._8_4_ = fVar70 * fVar56;
  auVar18._12_4_ = 0;
  auVar46 = NEON_ext(auVar17,auVar18,8,1);
  auVar50._0_4_ = -(auVar23._0_4_ * param_1);
  auVar50._4_4_ = -(auVar23._4_4_ * param_1);
  auVar50._8_4_ = -(auVar23._8_4_ * param_1);
  auVar47._12_4_ = 0;
  auVar47._0_12_ = auVar20;
  auVar84._12_4_ = 0;
  auVar84._0_12_ = auVar21;
  auVar47 = NEON_ext(auVar47,auVar84,8,1);
  fVar77 = fVar81 * fVar34 - fVar73 * fVar64;
  param_4[0x27] = auVar51._8_8_;
  param_4[0x26] = auVar51._0_8_;
  param_4[0x29] = (ulong)(uint)auVar19._8_4_;
  param_4[0x28] = auVar19._0_8_;
  fVar78 = fVar34 * fVar76 - fVar64 * fVar74;
  uVar42 = NEON_ext(CONCAT44(fVar64 * fVar56 - fVar70 * fVar76,fVar78),
                    CONCAT44(auVar89._4_4_ * fVar76 - fVar64 * auVar90._4_4_,
                             auVar89._0_4_ * fVar74 - fVar34 * auVar90._0_4_),4,1);
  uVar80 = NEON_ext(CONCAT44(fVar35 * fVar64 - fVar81 * fVar70,fVar77),
                    CONCAT44(fVar81 * auVar89._4_4_ - auVar47._4_4_ * fVar64,
                             fVar73 * auVar89._0_4_ - auVar47._0_4_ * fVar34),4,1);
  fVar32 = fVar32 + fVar85 + auVar46._0_4_ + auVar46._4_4_;
  auVar46._4_4_ = fVar49;
  auVar46._0_4_ = fVar48;
  auVar46._8_4_ = fVar35 * fVar70;
  auVar46._12_4_ = 0;
  auVar89._4_4_ = fVar49;
  auVar89._0_4_ = fVar48;
  auVar89._8_4_ = fVar35 * fVar70;
  auVar89._12_4_ = 0;
  auVar47 = NEON_ext(auVar46,auVar89,8,1);
  fVar73 = fVar73 * fVar43 + fVar34 * fVar75 + (float)uVar80;
  fVar85 = fVar81 * fVar43 + fVar64 * fVar75 + (float)((ulong)uVar80 >> 0x20);
  fVar77 = fVar35 * fVar43 + fVar70 * fVar75 + fVar77;
  fVar49 = fVar75 * fVar43 - (fVar48 + fVar49 + auVar47._0_4_ + auVar47._4_4_);
  fVar75 = fVar74 * fVar86 + (float)uVar42 * fVar43;
  fVar48 = fVar76 * fVar86 + (float)((ulong)uVar42 >> 0x20) * fVar43;
  fVar56 = fVar56 * fVar86 + fVar78 * fVar43;
  fVar81 = fVar43 * 0.0 + 0.0;
  auVar50._12_4_ = 0;
  auVar11._4_4_ = fVar48;
  auVar11._0_4_ = fVar75;
  auVar11._8_4_ = fVar56;
  auVar11._12_4_ = fVar81;
  auVar12._4_4_ = fVar48;
  auVar12._0_4_ = fVar75;
  auVar12._8_4_ = fVar56;
  auVar12._12_4_ = fVar81;
  auVar47 = NEON_ext(auVar11,auVar12,8,1);
  fVar76 = fVar73 + fVar73;
  fVar78 = fVar85 + fVar85;
  fVar86 = fVar77 + fVar77;
  fVar56 = fVar85 * fVar78;
  fVar74 = fVar77 * fVar86;
  uVar80 = NEON_fmov(0x3f800000,4);
  fVar81 = (float)uVar80;
  fVar35 = (float)((ulong)uVar80 >> 0x20);
  fVar75 = fVar34 * fVar32 + fVar75;
  fVar48 = fVar64 * fVar32 + fVar48;
  fVar34 = fVar70 * fVar32 + auVar47._0_4_;
  fVar32 = fVar32 * 0.0 + 0.0;
  fVar64 = fVar81 - fVar73 * fVar76;
  lVar88 = NEON_ext(CONCAT44(fVar77 * fVar76 + fVar49 * fVar78,fVar77 * fVar76 + fVar49 * fVar78),
                    CONCAT44(fVar77 * fVar78 - fVar49 * fVar76,fVar77 * fVar78 - fVar49 * fVar76),4,
                    1);
  auVar13._4_4_ = fVar48;
  auVar13._0_4_ = fVar75;
  auVar13._8_4_ = fVar34;
  auVar13._12_4_ = fVar32;
  auVar14._4_4_ = fVar48;
  auVar14._0_4_ = fVar75;
  auVar14._8_4_ = fVar34;
  auVar14._12_4_ = fVar32;
  auVar47 = NEON_ext(auVar13,auVar14,8,1);
  lVar31 = NEON_ext(CONCAT44((fVar35 - fVar56) - fVar74,(fVar81 - fVar56) - fVar74),
                    CONCAT44(fVar85 * fVar76 + fVar49 * fVar86,fVar85 * fVar76 + fVar49 * fVar86),4,
                    1);
  lVar79 = NEON_ext(CONCAT44(fVar85 * fVar76 - fVar49 * fVar86,fVar85 * fVar76 - fVar49 * fVar86),
                    CONCAT44((fVar35 - fVar73 * fVar76) - fVar74,fVar64 - fVar74),4,1);
  auVar84 = NEON_ext(auVar50,auVar50,8,1);
  param_4[0x1f] = (ulong)(uint)(fVar77 * fVar76 - fVar49 * fVar78);
  param_4[0x1e] = lVar31;
  param_4[0x21] = (ulong)(uint)(fVar77 * fVar78 + fVar49 * fVar76);
  param_4[0x20] = lVar79;
  param_4[0x23] = (ulong)(uint)(fVar64 - fVar56);
  param_4[0x22] = lVar88;
  param_4[0x25] = (ulong)(uint)(auVar47._0_4_ + auVar47._0_4_);
  param_4[0x24] = CONCAT44(fVar48 + fVar48,fVar75 + fVar75);
  fVar34 = fVar43 * fVar43 + -0.5;
  auVar15._12_4_ = 0;
  auVar15._0_12_ = auVar51._0_12_;
  auVar16._12_4_ = 0;
  auVar16._0_12_ = auVar51._0_12_;
  auVar47 = NEON_ext(auVar15,auVar16,8,1);
  auVar51._0_4_ = auVar50._0_4_ * fVar36;
  auVar51._4_4_ = auVar50._4_4_ * fVar39;
  auVar51._8_4_ = auVar50._8_4_ * fVar40;
  auVar51._12_4_ = 0;
  fVar32 = auVar50._4_4_ * fVar36 - auVar50._0_4_ * fVar39;
  uVar80 = NEON_ext(CONCAT44(auVar50._8_4_ * fVar39 - auVar50._4_4_ * fVar40,fVar32),
                    CONCAT44(auVar50._4_4_ * auVar47._4_4_ - auVar84._4_4_ * fVar39,
                             auVar50._0_4_ * auVar47._0_4_ - auVar84._0_4_ * fVar36),4,1);
  auVar60._0_4_ = auVar50._0_4_ * fVar34 - (float)uVar80 * fVar43;
  auVar60._4_4_ = auVar50._4_4_ * fVar34 - (float)((ulong)uVar80 >> 0x20) * fVar43;
  auVar60._8_4_ = auVar50._8_4_ * fVar34 - fVar32 * fVar43;
  auVar60._12_4_ = 0.0 - fVar43 * 0.0;
  auVar47 = NEON_ext(auVar60,auVar60,8,1);
  auVar84 = NEON_ext(auVar51,auVar51,8,1);
  fVar32 = auVar51._0_4_ + auVar51._4_4_ + auVar84._0_4_ + auVar84._4_4_;
  auVar52._0_4_ = auVar60._0_4_ + fVar36 * fVar32;
  auVar52._4_4_ = auVar60._4_4_ + fVar39 * fVar32;
  auVar52._8_4_ = auVar47._0_4_ + fVar40 * fVar32;
  auVar52._12_4_ = fVar32 * 0.0 + 0.0;
  auVar47 = NEON_ext(auVar52,auVar52,8,1);
  param_4[0x35] = (ulong)(uint)(auVar47._0_4_ + auVar47._0_4_);
  param_4[0x34] = CONCAT44(auVar52._4_4_ + auVar52._4_4_,auVar52._0_4_ + auVar52._0_4_);
  fVar77 = (float)*(undefined8 *)(*param_6 + 8);
  auVar24 = *param_6;
  auVar23 = *param_6;
  auVar21 = *param_6;
  auVar20 = *param_6;
  auVar19 = *param_6;
  fVar70 = (float)*(undefined8 *)*param_6;
  fVar73 = (float)((ulong)*(undefined8 *)*param_6 >> 0x20);
  fVar32 = *(float *)param_6[1];
  fVar34 = *(float *)(param_6[1] + 4);
  fVar56 = *(float *)(param_6[1] + 8);
  fVar64 = *(float *)param_6[2];
  if ((fVar70 == 1.0) && (*(float *)(*param_6 + 4) == 1.0)) {
    bVar30 = *(float *)(*param_6 + 8) == 1.0;
  }
  else {
    bVar30 = false;
  }
  auVar22 = *(undefined1 (*) [12])(param_5 + 0x3c);
  fVar85 = fVar77 * auVar22._8_4_;
  uVar80 = NEON_fminp(CONCAT44(fVar85,fVar85),
                      CONCAT44(fVar73 * auVar22._4_4_,fVar70 * auVar22._0_4_),4);
  uVar80 = NEON_fminp(uVar80,uVar80,4);
  fVar85 = (float)uVar80;
  fVar75 = DAT_01d4c158 * fVar85;
  lVar31 = *(long *)(param_5 + 0x28);
  bVar3 = *(byte *)(param_5 + 0x27);
  *(float *)(param_4 + 10) = DAT_01d4bec4 * fVar85;
  *(float *)((long)param_4 + 0x54) = fVar75;
  *(float *)(param_4 + 0xb) = DAT_01d4bb3c * fVar85;
  if (bVar30) {
    param_4[0xf] = lVar41;
    param_4[0xe] = lVar37;
    param_4[0x11] = lVar28;
    param_4[0x10] = lVar27;
    param_4[0x13] = lVar26;
    param_4[0x12] = lVar25;
    param_4[0x15] = lVar41;
    param_4[0x14] = lVar37;
    param_4[0x17] = lVar28;
    param_4[0x16] = lVar27;
    param_4[0x19] = lVar26;
    param_4[0x18] = lVar25;
  }
  else {
    auVar5._12_4_ = 0;
    auVar5._0_12_ = auVar19;
    auVar47 = NEON_frecpe(auVar5,4);
    auVar6._12_4_ = 0;
    auVar6._0_12_ = auVar20;
    auVar84 = NEON_frecps(auVar47,auVar6,4);
    auVar53._0_4_ = auVar47._0_4_ * auVar84._0_4_;
    auVar53._4_4_ = auVar47._4_4_ * auVar84._4_4_;
    auVar53._8_4_ = auVar47._8_4_ * auVar84._8_4_;
    auVar53._12_4_ = auVar47._12_4_ * auVar84._12_4_;
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar21;
    auVar47 = NEON_frecps(auVar53,auVar7,4);
    auVar54._0_4_ = auVar53._0_4_ * auVar47._0_4_;
    auVar54._4_4_ = auVar53._4_4_ * auVar47._4_4_;
    auVar54._8_4_ = auVar53._8_4_ * auVar47._8_4_;
    auVar54._12_4_ = auVar53._12_4_ * auVar47._12_4_;
    auVar8._12_4_ = 0;
    auVar8._0_12_ = auVar23;
    auVar47 = NEON_frecps(auVar54,auVar8,4);
    auVar55._0_4_ = auVar54._0_4_ * auVar47._0_4_;
    auVar55._4_4_ = auVar54._4_4_ * auVar47._4_4_;
    auVar55._8_4_ = auVar54._8_4_ * auVar47._8_4_;
    auVar55._12_4_ = auVar54._12_4_ * auVar47._12_4_;
    auVar9._12_4_ = 0;
    auVar9._0_12_ = auVar24;
    auVar47 = NEON_frecps(auVar55,auVar9,4);
    fVar85 = auVar55._0_4_ * auVar47._0_4_;
    fVar75 = auVar55._4_4_ * auVar47._4_4_;
    fVar48 = auVar55._8_4_ * auVar47._8_4_;
    auVar67._4_4_ = -(uint)(fVar70 == fVar73);
    auVar67._0_4_ = 0xffffffff;
    auVar67._8_4_ = -(uint)(fVar70 == fVar77);
    auVar67._12_4_ = 0xffffffff;
    NEON_ext(auVar67,auVar67,8,1);
    if (CONCAT12((char)auVar67._8_4_,CONCAT11((char)auVar67._4_4_,0xff)) == -1) {
      fVar57 = fVar70 * (float)lVar37;
      fVar56 = (float)((ulong)lVar37 >> 0x20);
      fVar61 = fVar73 * fVar56;
      fVar62 = fVar77 * (float)lVar41;
      fVar64 = (float)((ulong)lVar41 >> 0x20);
      fVar63 = fVar64 * 0.0;
      fVar81 = (float)((ulong)lVar27 >> 0x20);
      lVar79 = CONCAT44(fVar73 * fVar81,fVar70 * (float)lVar27);
      fVar35 = (float)((ulong)lVar28 >> 0x20);
      uVar33 = CONCAT44(fVar35 * 0.0,fVar77 * (float)lVar28);
      fVar70 = fVar70 * (float)lVar25;
      fVar49 = (float)((ulong)lVar25 >> 0x20);
      fVar73 = fVar73 * fVar49;
      fVar77 = fVar77 * (float)lVar26;
      fVar34 = (float)((ulong)lVar26 >> 0x20);
      fVar32 = fVar34 * 0.0;
      lVar37 = CONCAT44(fVar75 * fVar56,fVar85 * (float)lVar37);
      uVar38 = CONCAT44(fVar64 * 0.0,fVar48 * (float)lVar41);
      lVar41 = CONCAT44(fVar75 * fVar81,fVar85 * (float)lVar27);
      uVar44 = CONCAT44(fVar35 * 0.0,fVar48 * (float)lVar28);
      fVar85 = fVar85 * (float)lVar25;
      fVar75 = fVar75 * fVar49;
      fVar48 = fVar48 * (float)lVar26;
      fVar34 = fVar34 * 0.0;
    }
    else {
      fVar39 = fVar32 + fVar32;
      fVar49 = fVar34 + fVar34;
      fVar43 = fVar56 + fVar56;
      fVar76 = fVar34 * fVar49;
      fVar78 = fVar56 * fVar43;
      fVar87 = fVar56 * fVar39 - fVar64 * fVar49;
      fVar40 = fVar56 * fVar49 + fVar64 * fVar39;
      fVar74 = fVar81 - fVar32 * fVar39;
      uVar80 = NEON_ext(CONCAT44(fVar56 * fVar39 + fVar64 * fVar49,fVar56 * fVar39 + fVar64 * fVar49
                                ),
                        CONCAT44(fVar56 * fVar49 - fVar64 * fVar39,fVar56 * fVar49 - fVar64 * fVar39
                                ),4,1);
      fVar49 = (float)uVar80;
      fVar36 = (float)((ulong)uVar80 >> 0x20);
      fVar58 = fVar74 - fVar76;
      uVar42 = NEON_ext(CONCAT44((fVar35 - fVar76) - fVar78,(fVar81 - fVar76) - fVar78),
                        CONCAT44(fVar34 * fVar39 + fVar64 * fVar43,fVar34 * fVar39 + fVar64 * fVar43
                                ),4,1);
      uVar80 = NEON_ext(CONCAT44(fVar34 * fVar39 - fVar64 * fVar43,fVar34 * fVar39 - fVar64 * fVar43
                                ),CONCAT44((fVar35 - fVar32 * fVar39) - fVar78,fVar74 - fVar78),4,1)
      ;
      fVar35 = (float)((ulong)uVar80 >> 0x20);
      fVar39 = (float)uVar42;
      uVar45 = NEON_ext(CONCAT44(fVar39,fVar39),uVar80,4,1);
      uVar66 = NEON_ext(uVar42,CONCAT44(fVar35,fVar35),4,1);
      uVar59 = NEON_ext(CONCAT44(fVar87,fVar87),(ulong)(uint)fVar40,4,1);
      fVar56 = (float)uVar45 * fVar70;
      fVar74 = (float)((ulong)uVar45 >> 0x20);
      fVar64 = fVar74 * fVar70;
      fVar81 = fVar49 * fVar70;
      fVar70 = (float)uVar66 * fVar73;
      fVar68 = (float)((ulong)uVar66 >> 0x20);
      fVar71 = fVar68 * fVar73;
      fVar72 = fVar36 * fVar73;
      fVar65 = (float)uVar66 * fVar75;
      fVar68 = fVar68 * fVar75;
      fVar69 = fVar36 * fVar75;
      fVar32 = (float)uVar59 * fVar77;
      fVar86 = (float)((ulong)uVar59 >> 0x20);
      fVar34 = fVar86 * fVar77;
      fVar77 = fVar58 * fVar77;
      fVar43 = (float)uVar45 * fVar85;
      fVar74 = fVar74 * fVar85;
      fVar76 = fVar49 * fVar85;
      fVar78 = (float)uVar59 * fVar48;
      fVar86 = fVar86 * fVar48;
      fVar48 = fVar58 * fVar48;
      fVar75 = (float)((ulong)uVar42 >> 0x20);
      fVar85 = (float)uVar80;
      fVar57 = fVar32 * fVar87 + fVar56 * fVar39 + fVar70 * fVar75;
      fVar61 = fVar34 * fVar87 + fVar64 * fVar39 + fVar71 * fVar75;
      fVar62 = fVar77 * fVar87 + fVar81 * fVar39 + fVar72 * fVar75;
      fVar63 = 0.0;
      lVar79 = CONCAT44(fVar34 * fVar40 + fVar64 * fVar85 + fVar71 * fVar35,
                        fVar32 * fVar40 + fVar56 * fVar85 + fVar70 * fVar35);
      uVar33 = (ulong)(uint)(fVar77 * fVar40 + fVar81 * fVar85 + fVar72 * fVar35);
      fVar70 = fVar32 * fVar58 + fVar56 * fVar49 + fVar70 * fVar36;
      fVar73 = fVar34 * fVar58 + fVar64 * fVar49 + fVar71 * fVar36;
      fVar77 = fVar77 * fVar58 + fVar81 * fVar49 + fVar72 * fVar36;
      fVar32 = 0.0;
      lVar37 = CONCAT44(fVar86 * fVar87 + fVar74 * fVar39 + fVar68 * fVar75,
                        fVar78 * fVar87 + fVar43 * fVar39 + fVar65 * fVar75);
      uVar38 = (ulong)(uint)(fVar48 * fVar87 + fVar76 * fVar39 + fVar69 * fVar75);
      lVar41 = CONCAT44(fVar86 * fVar40 + fVar74 * fVar85 + fVar68 * fVar35,
                        fVar78 * fVar40 + fVar43 * fVar85 + fVar65 * fVar35);
      uVar44 = (ulong)(uint)(fVar48 * fVar40 + fVar76 * fVar85 + fVar69 * fVar35);
      fVar85 = fVar78 * fVar58 + fVar43 * fVar49 + fVar65 * fVar36;
      fVar75 = fVar86 * fVar58 + fVar74 * fVar49 + fVar68 * fVar36;
      fVar48 = fVar48 * fVar58 + fVar76 * fVar49 + fVar69 * fVar36;
      fVar34 = 0.0;
    }
    *(float *)(param_4 + 0xf) = fVar62;
    *(float *)((long)param_4 + 0x7c) = fVar63;
    *(float *)(param_4 + 0xe) = fVar57;
    *(float *)((long)param_4 + 0x74) = fVar61;
    param_4[0x11] = uVar33;
    param_4[0x10] = lVar79;
    param_4[0x17] = uVar44;
    param_4[0x16] = lVar41;
    param_4[0x19] = CONCAT44(fVar34,fVar48);
    param_4[0x18] = CONCAT44(fVar75,fVar85);
    param_4[0x13] = CONCAT44(fVar32,fVar77);
    param_4[0x12] = CONCAT44(fVar73,fVar70);
    param_4[0x15] = uVar38;
    param_4[0x14] = lVar37;
    param_4[9] = (ulong)(uint)(fVar77 * 0.0 + (float)uVar33 * 0.0 + fVar62 * 0.0);
    param_4[8] = CONCAT44(fVar73 * 0.0 + (float)((ulong)lVar79 >> 0x20) * 0.0 + fVar61 * 0.0,
                          fVar70 * 0.0 + (float)lVar79 * 0.0 + fVar57 * 0.0);
  }
  param_4[0x1c] = lVar31 + (ulong)bVar3 * 0x14;
  *(undefined1 *)(param_4 + 0x1d) = *(undefined1 *)(param_5 + 0x26);
  param_4[8] = 0;
  param_4[9] = 0;
  lVar31 = *(long *)(param_5 + 0x30);
  param_4[0x1a] = param_5;
  param_4[0x1b] = lVar31;
  if (lVar31 != 0) {
    Hint_Prefetch(*(long *)(lVar31 + 0x18),0,0,0);
    Hint_Prefetch(*(long *)(lVar31 + 0x18) + 0x80,0,0,0);
    Hint_Prefetch(*(undefined8 *)(lVar31 + 0x20),0,0,0);
  }
  return;
}


