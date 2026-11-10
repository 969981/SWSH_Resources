/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021eca0; name: FUN_0021eca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0021eca0(long param_1,long param_2,float *param_3,float *param_4,float *param_5,
            undefined8 param_6,float *param_7)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  float extraout_w8;
  undefined4 uVar15;
  long lVar16;
  undefined1 *puVar17;
  float *pfVar18;
  float extraout_w9;
  float extraout_w10;
  long lVar19;
  undefined1 (*pauVar20) [12];
  long lVar21;
  byte *pbVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float extraout_s16;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar52;
  float fVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float local_2240;
  float local_223c;
  float local_2238;
  float local_2224;
  float local_2220;
  float local_221c;
  float local_21f0 [4];
  undefined8 local_21e0;
  ulong uStack_21d8;
  ulong local_21d0;
  undefined1 *local_21c8;
  undefined4 local_21c0;
  undefined4 uStack_21bc;
  long local_21b8;
  undefined8 local_21b0;
  ulong uStack_21a8;
  undefined8 uStack_21a0;
  ulong uStack_2198;
  undefined8 local_2190;
  code *local_2188;
  code *local_2180;
  undefined8 local_2170;
  undefined8 local_2168;
  undefined8 local_2160;
  undefined8 local_2158;
  undefined8 local_2150;
  undefined8 uStack_2148;
  undefined8 local_2140;
  undefined8 uStack_2138;
  undefined8 local_2130;
  undefined1 local_2128;
  float local_2120;
  float fStack_211c;
  float fStack_2118;
  float fStack_2114;
  float local_2110;
  float local_210c;
  undefined8 local_2100;
  ulong uStack_20f8;
  undefined8 local_20f0;
  float *local_20e8;
  undefined8 local_20e0;
  undefined8 *local_20d8;
  float local_20d0;
  float fStack_20cc;
  float fStack_20c8;
  float fStack_20c4;
  float local_20c0;
  float fStack_20bc;
  undefined8 uStack_20b8;
  float local_20b0;
  float local_20ac;
  float local_20a8;
  undefined8 local_20a4;
  float local_209c;
  float local_2098;
  float local_2094;
  undefined8 local_2090;
  ulong uStack_2088;
  undefined8 uStack_2080;
  ulong uStack_2078;
  undefined8 local_2070;
  ulong uStack_2068;
  undefined8 uStack_2060;
  undefined8 uStack_2058;
  undefined8 local_2050;
  undefined8 uStack_2048;
  undefined8 uStack_2040;
  ulong uStack_2038;
  long local_2030;
  undefined8 local_2028;
  long local_2020;
  undefined1 local_2018;
  undefined8 local_c0;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a4;
  
  lVar16 = *(long *)(param_2 + 0x20);
  fVar24 = *(float *)(param_1 + 8);
  uVar34 = *(undefined8 *)(param_2 + 0x10);
  pauVar20 = (undefined1 (*) [12])(param_2 + 4);
  fVar29 = (float)*(undefined8 *)(param_2 + 0xc);
  fVar42 = (float)*(undefined8 *)*pauVar20;
  fVar26 = (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20);
  fVar27 = *param_4;
  fVar28 = param_4[1];
  fVar54 = *param_3;
  fVar61 = param_3[1];
  fVar31 = param_4[2];
  fVar25 = param_4[3];
  fVar64 = param_3[2];
  fVar69 = param_3[3];
  fVar80 = (param_3[4] - param_4[4]) + (param_3[4] - param_4[4]);
  fVar39 = (param_3[5] - param_4[5]) + (param_3[5] - param_4[5]);
  fVar81 = (param_3[6] - param_4[6]) + (param_3[6] - param_4[6]);
  fVar75 = ((fVar25 * fVar61 - fVar69 * fVar28) - fVar54 * fVar31) + fVar64 * fVar27;
  fVar62 = ((fVar25 * fVar54 - fVar69 * fVar27) - fVar64 * fVar28) + fVar61 * fVar31;
  fVar65 = fVar25 * fVar69 + fVar54 * fVar27 + fVar61 * fVar28 + fVar64 * fVar31;
  fVar55 = ((fVar25 * fVar64 - fVar69 * fVar31) - fVar61 * fVar27) + fVar54 * fVar28;
  fVar70 = fVar25 * fVar25 + -0.5;
  fVar45 = (fVar80 * -fVar27 - fVar39 * fVar28) - fVar81 * fVar31;
  fVar66 = (fVar70 * fVar81 + fVar25 * (fVar80 * fVar28 - fVar39 * fVar27)) - fVar45 * fVar31;
  uStack_21d8 = (ulong)(uint)fVar66;
  fVar61 = fVar62 + fVar62;
  fVar64 = fVar75 + fVar75;
  fVar69 = fVar55 + fVar55;
  fVar54 = (fVar70 * fVar80 + fVar25 * (fVar39 * fVar31 - fVar81 * fVar28)) - fVar45 * fVar27;
  fVar52 = fVar75 * fVar64;
  fVar53 = fVar55 * fVar69;
  fVar25 = (fVar70 * fVar39 + fVar25 * (fVar81 * fVar27 - fVar80 * fVar31)) - fVar45 * fVar28;
  uVar44 = NEON_fmov(0x3f800000,4);
  uVar13 = CONCAT44(fVar25,fVar54);
  fVar27 = (float)uVar44;
  fVar28 = (float)((ulong)uVar44 >> 0x20);
  fVar31 = fVar27 - fVar62 * fVar61;
  uVar30 = NEON_ext(CONCAT44(fVar75 * fVar61 - fVar65 * fVar69,fVar75 * fVar61 - fVar65 * fVar69),
                    CONCAT44((fVar28 - fVar62 * fVar61) - fVar53,fVar31 - fVar53),4,1);
  uVar44 = NEON_ext(CONCAT44((fVar28 - fVar52) - fVar53,(fVar27 - fVar52) - fVar53),
                    CONCAT44(fVar75 * fVar61 + fVar65 * fVar69,fVar75 * fVar61 + fVar65 * fVar69),4,
                    1);
  local_2030 = lVar16 + 0x20;
  uVar33 = NEON_ext(CONCAT44(fVar55 * fVar61 + fVar65 * fVar64,fVar55 * fVar61 + fVar65 * fVar64),
                    CONCAT44(fVar55 * fVar64 - fVar65 * fVar61,fVar55 * fVar64 - fVar65 * fVar61),4,
                    1);
  if ((*(float *)*pauVar20 == 1.0) && (*(float *)(param_2 + 8) == 1.0)) {
    bVar7 = *(float *)(param_2 + 0xc) == 1.0;
  }
  else {
    bVar7 = false;
  }
  local_209c = (float)((uint)local_209c & 0xffffff00);
  local_20c0 = 0.0;
  fStack_20bc = 0.0;
  uStack_20b8 = 0;
  local_20a4 = 0x7f7fffff;
  local_2020 = *(long *)(lVar16 + 0x48) + (ulong)*(byte *)(lVar16 + 0x47) * 0x14;
  local_2018 = *(undefined1 *)(lVar16 + 0x46);
  fVar69 = fVar29 * *(float *)(lVar16 + 100);
  uVar57 = NEON_fminp(CONCAT44(fVar69,fVar69),
                      CONCAT44(fVar26 * (float)((ulong)*(undefined8 *)(lVar16 + 0x5c) >> 0x20),
                               fVar42 * (float)*(undefined8 *)(lVar16 + 0x5c)),4);
  uVar57 = NEON_fminp(uVar57,uVar57,4);
  local_20a8 = (float)uVar57;
  local_20b0 = DAT_01d4bec4 * local_20a8;
  local_20ac = DAT_01d4c158 * local_20a8;
  local_20a8 = DAT_01d4bb3c * local_20a8;
  fVar69 = (float)_DAT_01d4ae50;
  fVar39 = (float)((ulong)_DAT_01d4ae50 >> 0x20);
  fVar45 = (float)_UNK_01d4ae58;
  if (bVar7) {
    uStack_2088 = _UNK_01d4ae58;
    local_2090 = _DAT_01d4ae50;
    uStack_2078 = _UNK_01d4b588;
    uStack_2080 = _DAT_01d4b580;
    uStack_2068 = _UNK_01d49dc8;
    local_2070 = _DAT_01d49dc0;
    uStack_2058 = _UNK_01d4ae58;
    uStack_2060 = _DAT_01d4ae50;
    uStack_2048 = _UNK_01d4b588;
    local_2050 = _DAT_01d4b580;
    uStack_2038 = _UNK_01d49dc8;
    uStack_2040 = _DAT_01d49dc0;
    uVar34 = _DAT_01d4b580;
  }
  else {
    auVar48._12_4_ = 0;
    auVar48._0_12_ = *pauVar20;
    auVar48 = NEON_frecpe(auVar48,4);
    auVar59._12_4_ = 0;
    auVar59._0_12_ = *pauVar20;
    auVar59 = NEON_frecps(auVar48,auVar59,4);
    auVar49._0_4_ = auVar48._0_4_ * auVar59._0_4_;
    auVar49._4_4_ = auVar48._4_4_ * auVar59._4_4_;
    auVar49._8_4_ = auVar48._8_4_ * auVar59._8_4_;
    auVar49._12_4_ = auVar48._12_4_ * auVar59._12_4_;
    auVar3._12_4_ = 0;
    auVar3._0_12_ = *pauVar20;
    auVar48 = NEON_frecps(auVar49,auVar3,4);
    auVar50._0_4_ = auVar49._0_4_ * auVar48._0_4_;
    auVar50._4_4_ = auVar49._4_4_ * auVar48._4_4_;
    auVar50._8_4_ = auVar49._8_4_ * auVar48._8_4_;
    auVar50._12_4_ = auVar49._12_4_ * auVar48._12_4_;
    auVar4._12_4_ = 0;
    auVar4._0_12_ = *pauVar20;
    auVar48 = NEON_frecps(auVar50,auVar4,4);
    auVar51._0_4_ = auVar50._0_4_ * auVar48._0_4_;
    auVar51._4_4_ = auVar50._4_4_ * auVar48._4_4_;
    auVar51._8_4_ = auVar50._8_4_ * auVar48._8_4_;
    auVar51._12_4_ = auVar50._12_4_ * auVar48._12_4_;
    auVar5._12_4_ = 0;
    auVar5._0_12_ = *pauVar20;
    auVar48 = NEON_frecps(auVar51,auVar5,4);
    fVar53 = auVar51._0_4_ * auVar48._0_4_;
    fVar62 = auVar51._4_4_ * auVar48._4_4_;
    fVar70 = auVar51._8_4_ * auVar48._8_4_;
    auVar60._4_4_ = -(uint)(fVar42 == fVar26);
    auVar60._0_4_ = 0xffffffff;
    auVar60._8_4_ = -(uint)(fVar42 == fVar29);
    auVar60._12_4_ = 0xffffffff;
    NEON_ext(auVar60,auVar60,8,1);
    if (CONCAT12((char)auVar60._8_4_,CONCAT11((char)auVar60._4_4_,0xff)) == -1) {
      local_2090 = CONCAT44(fVar26 * fVar39,fVar42 * fVar69);
      fVar27 = (float)(_UNK_01d4ae58 >> 0x20);
      uStack_2088 = CONCAT44(fVar27 * 0.0,fVar29 * fVar45);
      fVar40 = (float)((ulong)_DAT_01d4b580 >> 0x20);
      uStack_2080 = CONCAT44(fVar26 * fVar40,fVar42 * (float)_DAT_01d4b580);
      fVar37 = (float)(_UNK_01d4b588 >> 0x20);
      uStack_2078 = CONCAT44(fVar37 * 0.0,fVar29 * (float)_UNK_01d4b588);
      fVar28 = fVar53 * fVar69;
      fVar75 = fVar62 * fVar39;
      fVar35 = fVar70 * fVar45;
      fVar27 = fVar27 * 0.0;
      fVar42 = fVar42 * (float)_DAT_01d49dc0;
      fVar38 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
      fVar26 = fVar26 * fVar38;
      fVar29 = fVar29 * (float)_UNK_01d49dc8;
      fVar41 = (float)(_UNK_01d49dc8 >> 0x20);
      fVar80 = fVar41 * 0.0;
      fVar32 = fVar53 * (float)_DAT_01d4b580;
      fVar40 = fVar62 * fVar40;
      fVar81 = fVar70 * (float)_UNK_01d4b588;
      fVar37 = fVar37 * 0.0;
      uStack_2040 = CONCAT44(fVar62 * fVar38,fVar53 * (float)_DAT_01d49dc0);
      uStack_2038 = CONCAT44(fVar41 * 0.0,fVar70 * (float)_UNK_01d49dc8);
    }
    else {
      fVar75 = (float)uVar34;
      fVar35 = fVar75 + fVar75;
      fVar80 = (float)((ulong)uVar34 >> 0x20);
      fVar38 = fVar80 + fVar80;
      fVar32 = (float)*(undefined8 *)(param_2 + 0x18);
      fVar41 = fVar32 + fVar32;
      fVar40 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
      fVar46 = fVar80 * fVar38;
      fVar56 = fVar32 * fVar41;
      fVar81 = fVar32 * fVar38 + fVar40 * fVar35;
      fVar37 = fVar27 - fVar75 * fVar35;
      fVar79 = fVar32 * fVar35 - fVar40 * fVar38;
      uVar34 = NEON_ext(CONCAT44(fVar32 * fVar35 + fVar40 * fVar38,fVar32 * fVar35 + fVar40 * fVar38
                                ),
                        CONCAT44(fVar32 * fVar38 - fVar40 * fVar35,fVar32 * fVar38 - fVar40 * fVar35
                                ),4,1);
      fVar43 = fVar37 - fVar46;
      uVar58 = NEON_ext(CONCAT44((fVar28 - fVar46) - fVar56,(fVar27 - fVar46) - fVar56),
                        CONCAT44(fVar80 * fVar35 + fVar40 * fVar41,fVar80 * fVar35 + fVar40 * fVar41
                                ),4,1);
      uVar57 = NEON_ext(CONCAT44(fVar80 * fVar35 - fVar40 * fVar41,fVar80 * fVar35 - fVar40 * fVar41
                                ),CONCAT44((fVar28 - fVar75 * fVar35) - fVar56,fVar37 - fVar56),4,1)
      ;
      fVar46 = (float)((ulong)uVar57 >> 0x20);
      fVar67 = (float)uVar58;
      fVar32 = (float)uVar34;
      fVar40 = (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_ext(CONCAT44(fVar67,fVar67),uVar57,4,1);
      uVar73 = NEON_ext(uVar58,CONCAT44(fVar46,fVar46),4,1);
      uVar68 = NEON_ext(CONCAT44(fVar79,fVar79),(ulong)(uint)fVar81,4,1);
      fVar35 = (float)uVar34 * fVar42;
      fVar72 = (float)((ulong)uVar34 >> 0x20);
      fVar37 = fVar72 * fVar42;
      fVar38 = fVar32 * fVar42;
      fVar76 = (float)uVar73 * fVar26;
      fVar74 = (float)((ulong)uVar73 >> 0x20);
      fVar77 = fVar74 * fVar26;
      fVar78 = fVar40 * fVar26;
      fVar71 = (float)uVar73 * fVar62;
      fVar74 = fVar74 * fVar62;
      fVar62 = fVar40 * fVar62;
      fVar27 = (float)uVar68 * fVar29;
      fVar63 = (float)((ulong)uVar68 >> 0x20);
      fVar28 = fVar63 * fVar29;
      fVar75 = fVar43 * fVar29;
      fVar47 = (float)uVar34 * fVar53;
      fVar72 = fVar72 * fVar53;
      fVar53 = fVar32 * fVar53;
      fVar56 = (float)uVar68 * fVar70;
      fVar63 = fVar63 * fVar70;
      fVar70 = fVar43 * fVar70;
      fVar36 = (float)((ulong)uVar58 >> 0x20);
      fVar41 = (float)uVar57;
      fVar42 = fVar27 * fVar43 + fVar35 * fVar32 + fVar76 * fVar40;
      fVar26 = fVar28 * fVar43 + fVar37 * fVar32 + fVar77 * fVar40;
      fVar29 = fVar75 * fVar43 + fVar38 * fVar32 + fVar78 * fVar40;
      fVar80 = 0.0;
      local_2090 = CONCAT44(fVar28 * fVar79 + fVar37 * fVar67 + fVar77 * fVar36,
                            fVar27 * fVar79 + fVar35 * fVar67 + fVar76 * fVar36);
      uStack_2088 = (ulong)(uint)(fVar75 * fVar79 + fVar38 * fVar67 + fVar78 * fVar36);
      uStack_2080 = CONCAT44(fVar28 * fVar81 + fVar37 * fVar41 + fVar77 * fVar46,
                             fVar27 * fVar81 + fVar35 * fVar41 + fVar76 * fVar46);
      uStack_2078 = (ulong)(uint)(fVar75 * fVar81 + fVar38 * fVar41 + fVar78 * fVar46);
      fVar28 = fVar56 * fVar79 + fVar47 * fVar67 + fVar71 * fVar36;
      fVar75 = fVar63 * fVar79 + fVar72 * fVar67 + fVar74 * fVar36;
      fVar35 = fVar70 * fVar79 + fVar53 * fVar67 + fVar62 * fVar36;
      fVar27 = 0.0;
      uStack_2040 = CONCAT44(fVar63 * fVar43 + fVar72 * fVar32 + fVar74 * fVar40,
                             fVar56 * fVar43 + fVar47 * fVar32 + fVar71 * fVar40);
      uStack_2038 = (ulong)(uint)(fVar70 * fVar43 + fVar53 * fVar32 + fVar62 * fVar40);
      fVar32 = fVar56 * fVar81 + fVar47 * fVar41 + fVar71 * fVar46;
      fVar40 = fVar63 * fVar81 + fVar72 * fVar41 + fVar74 * fVar46;
      fVar81 = fVar70 * fVar81 + fVar53 * fVar41 + fVar62 * fVar46;
      fVar37 = 0.0;
    }
    uStack_2048 = CONCAT44(fVar37,fVar81);
    local_2050 = CONCAT44(fVar40,fVar32);
    fVar53 = (float)local_2090 * 0.0;
    fVar62 = (float)((ulong)local_2090 >> 0x20) * 0.0;
    uVar34 = CONCAT44(fVar62,fVar53);
    uStack_2068 = CONCAT44(fVar80,fVar29);
    local_2070 = CONCAT44(fVar26,fVar42);
    uStack_2058 = CONCAT44(fVar27,fVar35);
    uStack_2060 = CONCAT44(fVar75,fVar28);
    local_20c0 = fVar42 * 0.0 + (float)uStack_2080 * 0.0 + fVar53;
    fStack_20bc = fVar26 * 0.0 + (float)((ulong)uStack_2080 >> 0x20) * 0.0 + fVar62;
    uStack_20b8 = (ulong)(uint)(fVar29 * 0.0 + (float)uStack_2078 * 0.0 + (float)uStack_2088 * 0.0);
  }
  fVar42 = (float)uVar34;
  local_2100 = CONCAT44(fVar25 - fStack_20bc,fVar54 - local_20c0);
  uStack_20f8 = (ulong)(uint)(fVar66 - (float)uStack_20b8);
  local_2028 = *(undefined8 *)(lVar16 + 0x50);
  fVar69 = fVar69 * fVar24;
  fVar39 = fVar39 * fVar24;
  fVar45 = fVar45 * fVar24;
  local_21c0 = 4;
  local_20d8 = &local_21e0;
  local_20e8 = &local_20c0;
  local_20e0 = PTR_DAT_02711e08 + 0x10;
  fVar24 = (float)uVar33 * fVar45 + (float)uVar44 * fVar69 + (float)uVar30 * fVar39;
  fVar27 = (float)((ulong)uVar33 >> 0x20) * fVar45 +
           (float)((ulong)uVar44 >> 0x20) * fVar69 + (float)((ulong)uVar30 >> 0x20) * fVar39;
  fVar28 = (fVar31 - fVar52) * fVar45 +
           (fVar55 * fVar61 - fVar65 * fVar64) * fVar69 +
           (fVar55 * fVar64 + fVar65 * fVar61) * fVar39;
  local_21b0 = CONCAT44(fVar25 + fVar27,fVar54 + fVar24);
  uStack_21a8 = (ulong)(uint)(fVar66 + fVar28);
  local_20f0 = PTR_DAT_02711e10 + 0x10;
  uStack_21a0 = CONCAT44(fVar25 - fVar27,fVar54 - fVar24);
  uStack_2198 = (ulong)(uint)(fVar66 - fVar28);
  local_21d0 = 0;
  local_21c8 = &DAT_7f7fffff00000000;
  local_2190 = 0;
  uStack_21bc = CONCAT31(uStack_21bc._1_3_,1);
  local_c0 = 0x7f7fffff7f7fffff;
                    /* try { // try from 0021f2ec to 0021f30f has its CatchHandler @ 00220728 */
  local_21e0 = uVar13;
  iVar10 = FUN_00220760(&local_20e0,&local_20f0,&local_2100,&local_c0,&local_2170,&local_2120,
                        &local_20d0,&local_b0);
  fVar24 = (float)uVar13;
  if (iVar10 == 2) {
    fVar25 = extraout_s16;
    fVar27 = extraout_w9;
    fVar54 = extraout_w10;
    fVar28 = extraout_w8;
    fVar31 = 0.0;
  }
  else {
    fVar26 = fStack_20cc + fStack_20cc;
    fStack_211c = fStack_211c + fStack_211c;
    local_2120 = local_2120 + local_2120;
    fVar24 = param_4[2];
    fVar64 = param_4[3];
    fStack_2118 = fStack_2118 + fStack_2118;
    fVar31 = *param_4;
    fVar61 = param_4[1];
    fVar69 = local_20d0 + local_20d0;
    fVar29 = fStack_20c8 + fStack_20c8;
    fVar25 = local_2120 * fVar31 + fStack_211c * fVar61 + fStack_2118 * fVar24;
    fVar45 = fVar64 * fVar64 + -0.5;
    fVar39 = fVar31 * fVar69 + fVar26 * fVar61 + fVar29 * fVar24;
    fVar42 = fVar31 * fVar39 + fVar69 * fVar45 + fVar64 * (fVar29 * fVar61 - fVar26 * fVar24);
    fVar28 = param_4[4] +
             fVar31 * fVar25 +
             local_2120 * fVar45 + fVar64 * (fStack_2118 * fVar61 - fStack_211c * fVar24);
    fVar27 = param_4[5] +
             fVar61 * fVar25 +
             fStack_211c * fVar45 + fVar64 * (local_2120 * fVar24 - fStack_2118 * fVar31);
    fVar54 = param_4[6] +
             fStack_2118 * fVar45 + fVar64 * (fStack_211c * fVar31 - local_2120 * fVar61) +
             fVar24 * fVar25;
    fVar25 = fVar61 * fVar39 + fVar26 * fVar45 + fVar64 * (fVar69 * fVar24 - fVar31 * fVar29);
    fVar24 = fVar29 * fVar45 + fVar64 * (fVar31 * fVar26 - fVar69 * fVar61) + fVar24 * fVar39;
    fVar31 = local_b0;
  }
  if (*(float *)(param_1 + 4) + *param_5 <= fVar31) {
LAB_0021ff20:
    uVar13 = 0;
  }
  else {
    fVar64 = param_3[3];
    fVar39 = fVar64 + fVar64;
    fVar69 = *param_3;
    fVar29 = fVar69 + fVar69;
    fVar61 = *(float *)(param_1 + 8);
    local_2170 = 0x3f800000;
    local_2168 = 0;
    local_2160 = 0x3f800000;
    local_2158 = 0;
    local_2128 = 0;
    fVar26 = fVar61 * (param_3[2] * fVar39 + fVar29 * param_3[1]);
    fVar64 = fVar61 * (fVar69 * fVar29 + fVar64 * fVar39 + -1.0);
    fVar69 = param_3[4] - fVar64;
    fVar64 = param_3[4] + fVar64;
    fVar61 = fVar61 * (fVar29 * param_3[2] - fVar39 * param_3[1]);
    fVar29 = param_3[5] + fVar26;
    fVar26 = param_3[5] - fVar26;
    fVar39 = param_3[6] - fVar61;
    bVar7 = fVar64 != fVar69;
    fVar61 = fVar61 + param_3[6];
    bVar8 = fVar29 != fVar26;
    bVar9 = fVar61 != fVar39;
    uVar15 = 1;
    if ((bVar7 || bVar8) || bVar9) {
      uVar15 = 2;
    }
    local_2150 = 0x3f8000003f800000;
    uStack_2148 = 0;
    local_2140 = 0x3f80000000000000;
    uStack_2138 = 0;
    local_2130 = 0x3f80000000000000;
    local_2120 = fVar64;
    fStack_211c = fVar29;
    fStack_2118 = fVar61;
    fStack_2114 = fVar69;
    local_2110 = fVar26;
    local_210c = fVar39;
    if (((*(float *)*pauVar20 != 1.0) || (*(float *)(param_2 + 8) != 1.0)) ||
       (*(float *)(param_2 + 0xc) != 1.0)) {
                    /* try { // try from 0021f58c to 0021f59b has its CatchHandler @ 00220720 */
      FUN_001b0f90(&local_2170,pauVar20,(undefined8 *)(param_2 + 0x10));
    }
                    /* try { // try from 0021f5a0 to 0021f5ab has its CatchHandler @ 00220724 */
    FUN_00232cd0(&local_21e0,*(undefined8 *)(param_2 + 0x30),&local_2170);
    puVar17 = local_21c8;
    local_20d8._0_4_ = fVar61;
    local_20e8._0_4_ = fVar39;
    if (0.0 < fVar31) {
      fVar55 = -fVar42;
      fVar53 = -fVar25;
      fVar52 = -fVar24;
                    /* try { // try from 0021f5ec to 0021f60b has its CatchHandler @ 00220714 */
      local_21f0[0] = fVar55;
      local_21f0[1] = fVar53;
      local_21f0[2] = fVar52;
      FUN_00221590(*(undefined4 *)(param_1 + 4),*param_5,param_7,param_4,&local_21e0,pauVar20,uVar15
                   ,&local_2120,local_21f0);
      fVar45 = param_7[0x400];
      if (fVar45 != 2.8026e-45) {
        if ((bVar7 || bVar8) || bVar9) {
          fVar45 = *param_4;
          fVar62 = param_4[1];
          fVar70 = fVar62 + fVar62;
          fVar66 = fVar45 + fVar45;
          fVar75 = param_4[2];
          fVar80 = param_4[3];
          fVar40 = fVar75 * (fVar75 + fVar75);
          fVar32 = (fVar75 + fVar75) * fVar80;
          fVar45 = 1.0 - fVar45 * fVar66;
          fVar46 = fVar66 * fVar62 + fVar32;
          fVar32 = fVar66 * fVar62 - fVar32;
          fVar63 = fVar70 * fVar75 - fVar66 * fVar80;
          fVar67 = fVar45 - fVar40;
          fVar40 = (1.0 - fVar62 * fVar70) - fVar40;
          fVar45 = fVar45 - fVar62 * fVar70;
          fVar65 = fVar66 * fVar75 - fVar70 * fVar80;
          fVar56 = fVar70 * fVar75 + fVar66 * fVar80;
          fVar41 = fVar66 * fVar75 + fVar70 * fVar80;
          local_20d0 = fVar65 * fVar52 + fVar40 * fVar55 + fVar46 * fVar53;
          fStack_20cc = fVar56 * fVar52 + fVar32 * fVar55 + fVar67 * fVar53;
          fVar66 = param_4[4];
          fVar70 = param_4[5];
          fVar75 = param_4[6];
          fVar80 = *(float *)(param_1 + 4);
          fStack_20c8 = fVar45 * fVar52 + fVar41 * fVar55 + fVar63 * fVar53;
          fVar81 = *param_5;
                    /* try { // try from 0021f710 to 0021f763 has its CatchHandler @ 00220718 */
          uVar12 = (*local_2180)(&local_21e0,&local_2170,&local_20d0);
          uVar12 = uVar12 & 0xffffffff;
          fVar38 = fVar26 - fVar29;
          fVar37 = fVar69 - fVar64;
          local_20e0 = (undefined *)CONCAT44(fVar29,fVar64);
          fVar35 = fVar39 - fVar61;
          local_20f0 = (undefined *)CONCAT44(fVar26,fVar69);
          fVar62 = sqrtf(fVar37 * fVar37 + fVar38 * fVar38 + fVar35 * fVar35);
          if (0.0 < fVar62) {
            fVar62 = DAT_01d4c4d4 / fVar62;
            fVar64 = fVar64 - fVar37 * fVar62;
            fVar29 = fVar29 - fVar38 * fVar62;
            fVar61 = fVar61 - fVar35 * fVar62;
            fVar69 = fVar37 * fVar62 + fVar69;
            fVar26 = fVar38 * fVar62 + fVar26;
            local_20e8._0_4_ = fVar35 * fVar62 + fVar39;
            fVar37 = fVar69 - fVar64;
            fVar38 = fVar26 - fVar29;
            fVar35 = local_20e8._0_4_ - fVar61;
            local_20e0 = (undefined *)CONCAT44(fVar29,fVar64);
            local_20f0 = (undefined *)CONCAT44(fVar26,fVar69);
            local_20d8._0_4_ = fVar61;
          }
          fVar26 = fVar38 * fVar52 - fVar35 * fVar53;
          fVar36 = -(fVar35 * fVar55 - fVar37 * fVar52);
          fVar39 = fVar37 * fVar53 - fVar38 * fVar55;
          fVar69 = -fVar26;
          fVar62 = -fVar39;
          local_2100 = CONCAT44(fVar38,fVar37);
          uStack_20f8 = CONCAT44(uStack_20f8._4_4_,fVar35);
          _local_20c0 = CONCAT44(fVar36,fVar69);
          uStack_20b8 = CONCAT44(-((fVar29 * fVar36 - fVar64 * fVar26) - fVar61 * fVar39),fVar62);
                    /* try { // try from 0021ff98 to 0021ffb3 has its CatchHandler @ 00220718 */
          fVar61 = fabsf(fVar69);
          fVar64 = fabsf(fVar36);
          fVar69 = fabsf(fVar62);
          if ((fVar64 <= fVar61) || (fVar64 <= fVar69)) {
            if (fVar69 <= fVar61) {
              lVar16 = 1;
              lVar19 = 2;
              puVar17 = local_21c8 + uVar12 * 0x14;
              bVar1 = puVar17[0x12];
            }
            else {
              lVar16 = 0;
              lVar19 = 1;
              puVar17 = local_21c8 + uVar12 * 0x14;
              bVar1 = puVar17[0x12];
            }
          }
          else {
            lVar19 = 0;
            lVar16 = 2;
            puVar17 = local_21c8 + uVar12 * 0x14;
            bVar1 = puVar17[0x12];
          }
          if (bVar1 != 0) {
            fVar61 = *(float *)((long)&local_2100 + lVar19 * 4);
            fVar64 = local_21f0[lVar16];
            fVar69 = *(float *)((long)&local_2100 + lVar16 * 4);
            fVar26 = local_21f0[lVar19];
            lVar6 = CONCAT44(uStack_21bc,local_21c0);
            uVar2 = *(ushort *)(puVar17 + 0x10);
            uVar11 = bVar1 - 1;
            lVar21 = 0;
            do {
              pfVar18 = (float *)(lVar6 + (ulong)*(byte *)(local_21b8 + (ulong)uVar2 + (ulong)uVar11
                                                          ) * 0xc);
              fVar62 = *pfVar18;
              fVar37 = pfVar18[1];
              fVar36 = pfVar18[2];
              pfVar18 = (float *)(lVar6 + (ulong)*(byte *)(local_21b8 + (ulong)uVar2 + lVar21) * 0xc
                                 );
              fVar43 = *pfVar18;
              fVar47 = pfVar18[1];
              fVar72 = pfVar18[2];
              fVar35 = fVar62 * (float)local_2170 + fVar37 * local_2168._4_4_ +
                       fVar36 * (float)local_2158;
              fVar38 = fVar62 * local_2170._4_4_ + fVar37 * (float)local_2160 +
                       fVar36 * local_2158._4_4_;
              fVar29 = (float)local_2170 * fVar43 + local_2168._4_4_ * fVar47 +
                       (float)local_2158 * fVar72;
              fVar39 = local_2170._4_4_ * fVar43 + (float)local_2160 * fVar47 +
                       local_2158._4_4_ * fVar72;
              fVar62 = fVar62 * (float)local_2168 + fVar37 * local_2160._4_4_ +
                       fVar36 * (float)local_2150;
              fVar37 = (float)local_2168 * fVar43 + local_2160._4_4_ * fVar47 +
                       (float)local_2150 * fVar72;
              local_c0 = CONCAT44(fVar25,fVar42);
                    /* try { // try from 002202c8 to 002202f7 has its CatchHandler @ 00220730 */
              local_b8 = fVar24;
              uVar12 = FUN_00221c30(1.0 / (fVar61 * fVar64 - fVar69 * fVar26),
                                    fVar66 + fVar40 * fVar35 + fVar32 * fVar38 + fVar41 * fVar62,
                                    fVar70 + fVar46 * fVar35 + fVar67 * fVar38 + fVar63 * fVar62,
                                    fVar75 + fVar65 * fVar35 + fVar56 * fVar38 + fVar45 * fVar62,
                                    fVar66 + fVar41 * fVar37 + fVar40 * fVar29 + fVar32 * fVar39,
                                    fVar70 + fVar63 * fVar37 + fVar46 * fVar29 + fVar67 * fVar39,
                                    fVar75 + fVar45 * fVar37 + fVar65 * fVar29 + fVar56 * fVar39,0,
                                    &local_20e0,&local_20f0,&local_2100,&local_20c0,lVar16,lVar19,
                                    &local_c0,&local_a4,&local_b0);
              if (((uVar12 & 1) != 0) && (local_a4 < fVar80 + fVar81)) {
                fVar29 = param_7[0x400];
                if ((uint)fVar29 < 0x40) {
                  pfVar18 = param_7 + (ulong)(uint)fVar29 * 0x10;
                  param_7[0x400] = (float)((int)fVar29 + 1);
                  *pfVar18 = fVar55;
                  pfVar18[1] = fVar53;
                  pfVar18[4] = local_b0 - local_a4 * fVar55;
                  pfVar18[5] = fStack_ac - local_a4 * fVar53;
                  pfVar18[6] = fStack_a8 - local_a4 * fVar52;
                  pfVar18[2] = fVar52;
                  pfVar18[3] = local_a4 - fVar80;
                  pfVar18[0xd] = -NAN;
                }
              }
              uVar11 = (uint)lVar21;
              lVar21 = lVar21 + 1;
            } while ((uint)bVar1 != (uint)lVar21);
          }
          fVar45 = param_7[0x400];
        }
        if (fVar45 == 0.0) {
          fVar24 = *(float *)(param_1 + 4);
          param_7[0x400] = 1.4013e-45;
          *param_7 = local_21f0[0];
          param_7[1] = local_21f0[1];
          param_7[4] = fVar28;
          param_7[5] = fVar27;
          param_7[2] = local_21f0[2];
          param_7[0xd] = -NAN;
          param_7[6] = fVar54;
          param_7[3] = fVar31 - fVar24;
          return 1;
        }
      }
    }
    else {
      fVar24 = *param_4;
      fVar25 = param_4[1];
      fVar27 = param_4[2];
      fVar54 = param_4[3];
      fVar28 = fVar24 + fVar24;
      fVar31 = fVar25 + fVar25;
      uStack_20b8._4_4_ = (fVar27 + fVar27) * fVar54;
      local_20c0 = fVar27 * (fVar27 + fVar27);
      fStack_20bc = fVar28 * fVar25 + uStack_20b8._4_4_;
      uStack_20b8._4_4_ = fVar28 * fVar25 - uStack_20b8._4_4_;
      local_20a4._4_4_ = 1.0 - fVar24 * fVar28;
      uStack_20b8._0_4_ = fVar28 * fVar27 - fVar31 * fVar54;
      local_20a8 = fVar28 * fVar27 + fVar31 * fVar54;
      local_20b0 = local_20a4._4_4_ - local_20c0;
      local_20c0 = (1.0 - fVar25 * fVar31) - local_20c0;
      local_20ac = fVar31 * fVar27 + fVar28 * fVar54;
      local_20a4._0_4_ = fVar31 * fVar27 - fVar28 * fVar54;
      local_20a4._4_4_ = local_20a4._4_4_ - fVar25 * fVar31;
      fVar25 = *(float *)(param_1 + 4);
      local_209c = param_4[4];
      local_2098 = param_4[5];
      local_2094 = param_4[6];
      iVar10 = (int)local_21d0;
      uVar12 = local_21d0 & 0xffffffff;
      fVar24 = DAT_01d4c18c;
      if ((int)local_21d0 == 0) {
        fVar27 = 0.0;
        fVar54 = 0.0;
        fVar28 = 0.0;
        local_2224 = 0.0;
        local_2220 = 0.0;
        local_221c = 0.0;
      }
      else {
        fVar54 = 0.0;
        fVar27 = 0.0;
        pfVar18 = (float *)(local_21c8 + 8);
        uVar23 = 1;
        fVar28 = 0.0;
        local_2224 = 0.0;
        local_2220 = 0.0;
        local_221c = 0.0;
        while( true ) {
          fVar42 = pfVar18[-2];
          fVar45 = pfVar18[-1];
          fVar31 = *pfVar18;
          local_20d0 = local_20c0 * fVar42 + uStack_20b8._4_4_ * fVar45 + local_20a8 * fVar31;
          fStack_20cc = fStack_20bc * fVar42 + local_20b0 * fVar45 + (float)local_20a4 * fVar31;
          fStack_20c8 = (float)uStack_20b8 * fVar42 + local_20ac * fVar45 +
                        local_20a4._4_4_ * fVar31;
          fVar45 = fVar61 * fStack_20c8 + fVar64 * local_20d0 + fVar29 * fStack_20cc;
          fVar42 = fVar39 * fStack_20c8 + fVar69 * local_20d0 + fVar26 * fStack_20cc;
          fVar31 = fVar45;
          if (fVar45 <= fVar42) {
            fVar31 = fVar42;
            fVar42 = fVar45;
          }
                    /* try { // try from 0021f974 to 0021f98f has its CatchHandler @ 00220738 */
          (*local_2188)(&local_21e0,&local_20d0,&local_20c0,&local_2170,&local_20e0,&local_20f0);
          if (fVar25 + fVar31 < (float)local_20e0) goto LAB_0021ff20;
          if ((float)local_20f0 < fVar42 - fVar25) goto LAB_0021ff20;
          fVar31 = (fVar25 + fVar31) - (float)local_20e0;
          fVar42 = (float)local_20f0 - (fVar42 - fVar25);
          if (fVar42 <= fVar31) {
            fVar31 = fVar42;
          }
          if (fVar31 < fVar24) {
            local_2224 = fStack_20cc;
            local_2220 = local_20d0;
            local_221c = fStack_20c8;
            fVar24 = fVar31;
            fVar27 = fStack_20cc;
            fVar54 = fStack_20c8;
            fVar28 = local_20d0;
          }
          if (uVar12 <= uVar23) break;
          uVar23 = uVar23 + 1;
          pfVar18 = pfVar18 + 5;
        }
      }
      if ((bVar7 || bVar8) || bVar9) {
        local_2238 = fVar69 - fVar64;
        local_223c = fVar26 - fVar29;
        local_2240 = fVar39 - fVar61;
        fVar31 = local_2238 * local_2238 + local_223c * local_223c + local_2240 * local_2240;
        if (fVar31 <= 0.0) {
          local_223c = 0.0;
          local_2238 = 0.0;
          local_2240 = 0.0;
          fVar31 = DAT_01d4c1cc;
        }
        else {
                    /* try { // try from 0021fa60 to 0021fa67 has its CatchHandler @ 0022071c */
          fVar31 = sqrtf(fVar31);
          fVar31 = 1.0 / fVar31;
          local_2238 = local_2238 * fVar31;
          local_223c = local_223c * fVar31;
          local_2240 = local_2240 * fVar31;
          fVar31 = DAT_01d4c1cc;
        }
        DAT_01d4c1cc = fVar31;
        if (iVar10 != 0) {
          pfVar18 = (float *)(puVar17 + 8);
          uVar23 = 0;
          do {
            fVar52 = pfVar18[-2];
            fVar53 = pfVar18[-1];
            fVar55 = *pfVar18;
            fVar45 = fVar52 * fStack_20bc + fVar53 * local_20b0 + fVar55 * (float)local_20a4;
            fVar42 = fVar52 * local_20c0 + fVar53 * uStack_20b8._4_4_ + fVar55 * local_20a8;
            fVar52 = fVar52 * (float)uStack_20b8 + fVar53 * local_20ac + fVar55 * local_20a4._4_4_;
            local_20d0 = local_223c * fVar52 - local_2240 * fVar45;
            fStack_20cc = local_2240 * fVar42 - local_2238 * fVar52;
            fStack_20c8 = local_2238 * fVar45 - local_223c * fVar42;
                    /* try { // try from 0021fb68 to 0021fc5f has its CatchHandler @ 00220734 */
            fVar42 = fabsf(local_20d0);
            if ((fVar31 < fVar42) || (fVar42 = fabsf(fStack_20cc), fVar31 < fVar42)) {
LAB_0021fba0:
              fVar52 = local_20d0 * local_20d0 + fStack_20cc * fStack_20cc +
                       fStack_20c8 * fStack_20c8;
              fVar53 = 0.0;
              fVar42 = 0.0;
              fVar45 = 0.0;
              if (0.0 < fVar52) {
                fVar45 = sqrtf(fVar52);
                fVar45 = 1.0 / fVar45;
                fVar53 = fVar45 * fStack_20cc;
                fVar42 = fVar45 * local_20d0;
                fVar45 = fVar45 * fStack_20c8;
              }
              fStack_20c8 = fVar45;
              local_20d0 = fVar42;
              fVar52 = local_20d0 * fVar64 + fVar53 * fVar29 + fStack_20c8 * fVar61;
              fVar45 = local_20d0 * fVar69 + fVar53 * fVar26 + fStack_20c8 * fVar39;
              fVar42 = fVar52;
              if (fVar52 <= fVar45) {
                fVar42 = fVar45;
                fVar45 = fVar52;
              }
              fStack_20cc = fVar53;
              (*local_2188)(&local_21e0,&local_20d0,&local_20c0,&local_2170,&local_20e0,&local_20f0)
              ;
              if (fVar25 + fVar42 < (float)local_20e0) goto LAB_0021ff20;
              if ((float)local_20f0 < fVar45 - fVar25) goto LAB_0021ff20;
              fVar42 = (fVar25 + fVar42) - (float)local_20e0;
              fVar45 = (float)local_20f0 - (fVar45 - fVar25);
              if (fVar45 <= fVar42) {
                fVar42 = fVar45;
              }
              if (fVar42 < fVar24) {
                local_2224 = fStack_20cc;
                local_2220 = local_20d0;
                local_221c = fStack_20c8;
                fVar24 = fVar42;
                fVar27 = fStack_20cc;
                fVar54 = fStack_20c8;
                fVar28 = local_20d0;
              }
            }
            else {
              fVar42 = fabsf(fStack_20c8);
              if (fVar31 < fVar42) goto LAB_0021fba0;
            }
            uVar23 = uVar23 + 1;
            pfVar18 = pfVar18 + 5;
          } while (uVar23 < uVar12);
        }
      }
      fVar42 = param_4[2];
      fVar45 = param_4[3];
      fVar52 = fVar45 * fVar45 + -0.5;
      fVar24 = (float)local_21e0 + (float)local_21e0;
      fVar25 = local_21e0._4_4_ + local_21e0._4_4_;
      fVar31 = (float)uStack_21d8 + (float)uStack_21d8;
      fVar53 = *param_4;
      fVar55 = param_4[1];
      fVar62 = fVar24 * fVar53 + fVar25 * fVar55 + fVar31 * fVar42;
      if (local_221c *
          ((fVar61 + fVar39) * 0.5 -
          (param_4[6] +
          fVar31 * fVar52 + fVar45 * (fVar25 * fVar53 - fVar24 * fVar55) + fVar42 * fVar62)) +
          local_2220 *
          ((fVar64 + fVar69) * 0.5 -
          (param_4[4] +
          fVar53 * fVar62 + fVar24 * fVar52 + fVar45 * (fVar31 * fVar55 - fVar25 * fVar42))) +
          local_2224 *
          ((fVar29 + fVar26) * 0.5 -
          (param_4[5] +
          fVar55 * fVar62 + fVar25 * fVar52 + fVar45 * (fVar24 * fVar42 - fVar31 * fVar53))) < 0.0)
      {
        fVar27 = -local_2224;
        fVar54 = -local_221c;
        fVar28 = -local_2220;
      }
      local_c0 = CONCAT44(fVar27,fVar28);
                    /* try { // try from 0021fe04 to 0021feab has its CatchHandler @ 0022071c */
      local_b8 = fVar54;
      FUN_00221590(*(undefined4 *)(param_1 + 4),*param_5,param_7,param_4,&local_21e0,pauVar20,uVar15
                   ,&local_2120,&local_c0);
      if (((bVar7 || bVar8) || bVar9) && param_7[0x400] != 2.8026e-45) {
        fVar52 = *(float *)(param_1 + 4);
        fVar24 = *param_5;
        uVar11 = FUN_00231e40(0x200,&local_20c0,local_21d0 & 0xffffffff,local_21c8,local_21b8);
        uVar12 = (ulong)uVar11;
        fVar42 = fVar26 - fVar29;
        fVar45 = fVar69 - fVar64;
        fVar31 = fVar39 - fVar61;
        local_20e0 = (undefined *)CONCAT44(fVar29,fVar64);
        local_20f0 = (undefined *)CONCAT44(fVar26,fVar69);
        fVar25 = sqrtf(fVar45 * fVar45 + fVar42 * fVar42 + fVar31 * fVar31);
        if (0.0 < fVar25) {
          fVar25 = DAT_01d4c4d4 / fVar25;
          fVar64 = fVar64 - fVar45 * fVar25;
          fVar29 = fVar29 - fVar42 * fVar25;
          fVar61 = fVar61 - fVar31 * fVar25;
          fVar69 = fVar45 * fVar25 + fVar69;
          fVar26 = fVar42 * fVar25 + fVar26;
          local_20e8._0_4_ = fVar31 * fVar25 + fVar39;
          fVar45 = fVar69 - fVar64;
          fVar42 = fVar26 - fVar29;
          fVar31 = local_20e8._0_4_ - fVar61;
          local_20e0 = (undefined *)CONCAT44(fVar29,fVar64);
          local_20f0 = (undefined *)CONCAT44(fVar26,fVar69);
          local_20d8._0_4_ = fVar61;
        }
        local_20d0 = fVar42 * fVar54 - fVar31 * fVar27;
        fVar26 = fVar31 * fVar28 - fVar45 * fVar54;
        fVar69 = fVar45 * fVar27 - fVar42 * fVar28;
        local_2100 = CONCAT44(fVar42,fVar45);
        uStack_20f8 = CONCAT44(uStack_20f8._4_4_,fVar31);
        fStack_20c4 = -(fVar61 * fVar69 + fVar64 * local_20d0 + fVar29 * fVar26);
        fStack_20cc = fVar26;
        fStack_20c8 = fVar69;
                    /* try { // try from 00220088 to 002200a3 has its CatchHandler @ 0022071c */
        fVar25 = fabsf(local_20d0);
        fVar31 = fabsf(fVar26);
        fVar61 = fabsf(fVar69);
        if ((fVar31 <= fVar25) || (fVar31 <= fVar61)) {
          if (fVar61 <= fVar25) {
            lVar16 = 2;
          }
          else {
            lVar16 = 1;
          }
          uVar23 = (ulong)(fVar61 <= fVar25);
        }
        else {
          lVar16 = 0;
          uVar23 = 2;
        }
        if (uVar11 != 0) {
          fVar25 = *(float *)((long)&local_2100 + uVar23 * 4);
          fVar31 = *(float *)((long)&local_c0 + lVar16 * 4);
          fVar61 = *(float *)((long)&local_2100 + lVar16 * 4);
          fVar64 = *(float *)((long)&local_c0 + uVar23 * 4);
          pbVar22 = (byte *)((ulong)&local_20c0 | 1);
          lVar19 = CONCAT44(uStack_21bc,local_21c0);
          do {
            pfVar18 = (float *)(lVar19 + (ulong)pbVar22[-1] * 0xc);
            fVar53 = param_4[2];
            fVar66 = param_4[3];
            fVar26 = *pfVar18;
            fVar42 = pfVar18[1];
            fVar69 = pfVar18[2];
            pfVar18 = (float *)(lVar19 + (ulong)*pbVar22 * 0xc);
            fVar70 = fVar66 * fVar66 + -0.5;
            fVar75 = *pfVar18;
            fVar80 = pfVar18[1];
            fVar81 = pfVar18[2];
            fVar45 = fVar26 * (float)local_2170 + fVar42 * local_2168._4_4_ +
                     fVar69 * (float)local_2158;
            fVar55 = fVar26 * local_2170._4_4_ + fVar42 * (float)local_2160 +
                     fVar69 * local_2158._4_4_;
            fVar39 = fVar26 * (float)local_2168 + fVar42 * local_2160._4_4_ +
                     fVar69 * (float)local_2150;
            fVar69 = local_2170._4_4_ * fVar75 + (float)local_2160 * fVar80 +
                     local_2158._4_4_ * fVar81;
            fVar29 = (float)local_2168 * fVar75 + local_2160._4_4_ * fVar80 +
                     (float)local_2150 * fVar81;
            fVar45 = fVar45 + fVar45;
            fVar55 = fVar55 + fVar55;
            fVar39 = fVar39 + fVar39;
            fVar62 = *param_4;
            fVar65 = param_4[1];
            fVar42 = (float)local_2170 * fVar75 + local_2168._4_4_ * fVar80 +
                     (float)local_2158 * fVar81;
            fVar69 = fVar69 + fVar69;
            fVar29 = fVar29 + fVar29;
            fVar42 = fVar42 + fVar42;
            fVar26 = fVar45 * fVar62 + fVar55 * fVar65 + fVar39 * fVar53;
            fVar75 = fVar53 * fVar29 + fVar62 * fVar42 + fVar65 * fVar69;
                    /* try { // try from 00220668 to 00220697 has its CatchHandler @ 0022072c */
            uVar14 = FUN_00221c30(1.0 / (fVar25 * fVar31 - fVar61 * fVar64),
                                  param_4[4] +
                                  fVar62 * fVar26 +
                                  fVar45 * fVar70 + fVar66 * (fVar39 * fVar65 - fVar55 * fVar53),
                                  param_4[5] +
                                  fVar65 * fVar26 +
                                  fVar55 * fVar70 + fVar66 * (fVar45 * fVar53 - fVar62 * fVar39),
                                  param_4[6] +
                                  fVar39 * fVar70 + fVar66 * (fVar55 * fVar62 - fVar45 * fVar65) +
                                  fVar53 * fVar26,
                                  param_4[4] +
                                  fVar62 * fVar75 +
                                  fVar70 * fVar42 + fVar66 * (fVar65 * fVar29 - fVar53 * fVar69),
                                  param_4[5] +
                                  fVar65 * fVar75 +
                                  fVar70 * fVar69 + fVar66 * (fVar53 * fVar42 - fVar62 * fVar29),
                                  param_4[6] +
                                  fVar70 * fVar29 + fVar66 * (fVar62 * fVar69 - fVar65 * fVar42) +
                                  fVar53 * fVar75,-fVar52 - fVar24,&local_20e0,&local_20f0,
                                  &local_2100,&local_20d0,uVar23,lVar16,&local_c0,local_21f0,
                                  &local_b0);
            if ((uVar14 & 1) != 0) {
              fVar69 = param_7[0x400];
              if ((uint)fVar69 < 0x40) {
                pfVar18 = param_7 + (ulong)(uint)fVar69 * 0x10;
                param_7[0x400] = (float)((int)fVar69 + 1);
                *pfVar18 = fVar28;
                pfVar18[1] = fVar27;
                pfVar18[2] = fVar54;
                pfVar18[0xd] = -NAN;
                pfVar18[3] = -(fVar52 + local_21f0[0]);
                pfVar18[4] = local_b0 - local_21f0[0] * fVar28;
                pfVar18[5] = fStack_ac - local_21f0[0] * fVar27;
                pfVar18[6] = fStack_a8 - local_21f0[0] * fVar54;
              }
            }
            uVar12 = uVar12 - 1;
            pbVar22 = pbVar22 + 0x10;
          } while (uVar12 != 0);
        }
      }
    }
    uVar13 = 1;
  }
  return uVar13;
}


