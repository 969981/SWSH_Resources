/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026b420; name: FUN_0026b420
 */


uint FUN_0026b420(long param_1,long param_2,undefined1 (*param_3) [16],float *param_4,float *param_5
                 ,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  void *__dest;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulong uVar27;
  float *pfVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  char cVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  byte bVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  int iVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  float fVar70;
  undefined1 auVar71 [16];
  float fVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auStack_1450 [36];
  undefined1 auStack_142c [12];
  undefined1 auStack_1420 [16];
  undefined *local_1410;
  ulong uStack_1408;
  undefined8 *local_1400;
  ulong local_13f8;
  undefined8 local_13f0;
  ulong uStack_13e8;
  undefined8 local_13e0;
  ulong uStack_13d8;
  undefined4 local_10ec [16];
  undefined1 local_10ac [16];
  int local_109c;
  undefined1 auStack_1090 [2040];
  long local_898 [37];
  undefined8 local_770;
  float local_760 [2];
  undefined8 local_758 [9];
  long local_710;
  undefined8 local_708;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined1 local_18c;
  undefined8 local_180;
  ulong uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  undefined8 local_160;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  
  local_b0 = *param_5;
  fVar33 = *(float *)(param_1 + 4);
  pfVar28 = (float *)*param_6;
  local_a8 = CONCAT44(fVar33,fVar33);
  uStack_c0 = *(undefined8 *)param_3[1];
  auVar51 = *param_3;
  uStack_b8 = (ulong)(uint)*(float *)(param_3[1] + 8);
  uStack_c8 = auVar51._8_8_;
  local_d0 = auVar51._0_8_;
  auVar17 = *(undefined1 (*) [12])(param_4 + 4);
  uStack_e8 = *(undefined8 *)(param_4 + 2);
  local_f0 = *(undefined8 *)param_4;
  fVar54 = -(float)local_f0;
  fVar57 = -(float)((ulong)local_f0 >> 0x20);
  fVar62 = -(float)uStack_e8;
  fVar64 = (float)((ulong)uStack_e8 >> 0x20);
  auVar65._12_4_ = -fVar64;
  auVar65._8_4_ = fVar62;
  auVar65._4_4_ = fVar57;
  auVar65._0_4_ = fVar54;
  auVar66._0_12_ = auVar65._0_12_;
  fVar55 = (float)uStack_c0 - auVar17._0_4_;
  fVar58 = (float)((ulong)uStack_c0 >> 0x20) - auVar17._4_4_;
  fVar63 = *(float *)(param_3[1] + 8) - auVar17._8_4_;
  auVar71._4_4_ = fVar58;
  auVar71._0_4_ = fVar55;
  auVar71._8_4_ = fVar63;
  auVar71._12_4_ = 0;
  auVar75._4_4_ = fVar58;
  auVar75._0_4_ = fVar55;
  auVar75._8_4_ = fVar63;
  auVar75._12_4_ = 0;
  auVar74 = NEON_ext(auVar71,auVar75,8,1);
  uStack_d8 = (ulong)(uint)auVar17._8_4_;
  uStack_e0 = auVar17._0_8_;
  fVar61 = auVar51._12_4_;
  auVar66._12_4_ = 0;
  fVar35 = fVar64 * fVar64 + -0.5;
  auVar71 = NEON_ext(auVar66,auVar66,8,1);
  fVar77 = fVar54 * fVar58 - fVar57 * fVar55;
  fVar56 = fVar54 * fVar55;
  fVar59 = fVar57 * fVar58;
  uVar73 = NEON_ext(CONCAT44(fVar57 * fVar63 - fVar62 * fVar58,fVar77),
                    CONCAT44(auVar71._4_4_ * fVar58 - fVar57 * auVar74._4_4_,
                             auVar71._0_4_ * fVar55 - fVar54 * auVar74._0_4_),4,1);
  auVar69._0_4_ = fVar55 * fVar35 + (float)uVar73 * fVar64;
  auVar69._4_4_ = fVar58 * fVar35 + (float)((ulong)uVar73 >> 0x20) * fVar64;
  auVar69._8_4_ = fVar63 * fVar35 + fVar77 * fVar64;
  auVar69._12_4_ = fVar64 * 0.0 + 0.0;
  auVar74 = NEON_ext(auVar69,auVar69,8,1);
  auVar11._4_4_ = fVar59;
  auVar11._0_4_ = fVar56;
  auVar11._8_4_ = fVar62 * fVar63;
  auVar11._12_4_ = 0;
  auVar12._4_4_ = fVar59;
  auVar12._0_4_ = fVar56;
  auVar12._8_4_ = fVar62 * fVar63;
  auVar12._12_4_ = 0;
  auVar75 = NEON_ext(auVar11,auVar12,8,1);
  fVar35 = fVar56 + fVar59 + auVar75._0_4_ + auVar75._4_4_;
  fVar77 = fVar54 * fVar35 + auVar69._0_4_;
  fVar60 = fVar57 * fVar35 + auVar69._4_4_;
  fVar55 = fVar62 * fVar35 + auVar74._0_4_;
  fVar35 = fVar35 * 0.0 + 0.0;
  auVar13._4_4_ = fVar60;
  auVar13._0_4_ = fVar77;
  auVar13._8_4_ = fVar55;
  auVar13._12_4_ = fVar35;
  auVar14._4_4_ = fVar60;
  auVar14._0_4_ = fVar77;
  auVar14._8_4_ = fVar55;
  auVar14._12_4_ = fVar35;
  auVar74 = NEON_ext(auVar13,auVar14,8,1);
  fVar56 = auVar51._4_4_;
  fVar59 = auVar51._8_4_;
  uVar53 = CONCAT44(fVar60 + fVar60,fVar77 + fVar77);
  fVar63 = auVar74._0_4_ + auVar74._0_4_;
  auVar34._0_12_ = auVar51._0_12_;
  auVar34._12_4_ = 0;
  fVar35 = auVar51._0_4_;
  auVar76._0_4_ = fVar35 * fVar54;
  auVar76._4_4_ = fVar56 * fVar57;
  auVar76._8_4_ = fVar59 * fVar62;
  auVar76._12_4_ = 0;
  uVar27 = (ulong)(uint)fVar63;
  auVar51 = NEON_ext(auVar76,auVar76,8,1);
  auVar74 = NEON_ext(auVar34,auVar34,8,1);
  fVar55 = fVar56 * fVar54 - fVar35 * fVar57;
  uVar73 = NEON_ext(CONCAT44(fVar59 * fVar57 - fVar56 * fVar62,fVar55),
                    CONCAT44(fVar56 * auVar71._4_4_ - auVar74._4_4_ * fVar57,
                             fVar35 * auVar71._0_4_ - auVar74._0_4_ * fVar54),4,1);
  fVar58 = fVar61 * fVar64 - (auVar76._0_4_ + auVar76._4_4_ + auVar51._0_4_ + auVar51._4_4_);
  fVar35 = fVar35 * fVar64 + fVar54 * fVar61 + (float)uVar73;
  fVar56 = fVar56 * fVar64 + fVar57 * fVar61 + (float)((ulong)uVar73 >> 0x20);
  fVar55 = fVar59 * fVar64 + fVar62 * fVar61 + fVar55;
  fVar59 = ABS((fVar77 + fVar77) - (float)*(undefined8 *)(pfVar28 + 4));
  fVar61 = ABS((fVar60 + fVar60) - (float)((ulong)*(undefined8 *)(pfVar28 + 4) >> 0x20));
  fVar64 = ABS(fVar63 - (float)*(undefined8 *)(pfVar28 + 6));
  fVar63 = ABS(0.0 - (float)((ulong)*(undefined8 *)(pfVar28 + 6) >> 0x20));
  auVar15._4_4_ = fVar61;
  auVar15._0_4_ = fVar59;
  auVar15._8_4_ = fVar64;
  auVar15._12_4_ = fVar63;
  auVar16._4_4_ = fVar61;
  auVar16._0_4_ = fVar59;
  auVar16._8_4_ = fVar64;
  auVar16._12_4_ = fVar63;
  auVar51 = NEON_ext(auVar15,auVar16,8,1);
  uVar73 = NEON_fmaxp(auVar51._0_8_,CONCAT44(fVar61,fVar59),4);
  auVar52._0_4_ = fVar35 * *pfVar28;
  auVar52._4_4_ = fVar56 * pfVar28[1];
  auVar52._8_4_ = fVar55 * pfVar28[2];
  auVar52._12_4_ = fVar58 * pfVar28[3];
  uVar73 = NEON_fmaxp(uVar73,uVar73,4);
  iVar10 = -(uint)(fVar33 * 0.02 < (float)uVar73);
  auVar51 = NEON_ext(auVar52,auVar52,8,1);
  iVar50 = -(uint)(auVar52._0_4_ + auVar52._4_4_ + auVar51._0_4_ + auVar51._4_4_ < 0.9998);
  bVar36 = (byte)((uint)iVar50 >> 0x10) | (byte)((uint)iVar10 >> 0x10);
  bVar37 = (byte)((uint)iVar50 >> 0x18) | (byte)((uint)iVar10 >> 0x18);
  uVar9 = CONCAT11((byte)((uint)iVar50 >> 8) | (byte)((uint)iVar10 >> 8),(byte)iVar50 | (byte)iVar10
                  );
  iVar10 = -(uint)(CONCAT13(bVar37,CONCAT12(bVar36,uVar9)) == -1);
  iVar50 = -(uint)(CONCAT13(bVar37,CONCAT12(bVar36,uVar9)) == -1);
  uVar38 = (undefined1)iVar50;
  uVar39 = (undefined1)((uint)iVar50 >> 8);
  uVar40 = (undefined1)((uint)iVar50 >> 0x10);
  uVar41 = (undefined1)((uint)iVar50 >> 0x18);
  iVar50 = -(uint)(CONCAT13(bVar37,CONCAT12(bVar36,uVar9)) == -1);
  uVar42 = (undefined1)iVar50;
  uVar43 = (undefined1)((uint)iVar50 >> 8);
  uVar44 = (undefined1)((uint)iVar50 >> 0x10);
  uVar45 = (undefined1)((uint)iVar50 >> 0x18);
  iVar50 = -(uint)(CONCAT13(bVar37,CONCAT12(bVar36,uVar9)) == -1);
  uVar46 = (undefined1)iVar50;
  uVar47 = (undefined1)((uint)iVar50 >> 8);
  uVar48 = (undefined1)((uint)iVar50 >> 0x10);
  uVar49 = (undefined1)((uint)iVar50 >> 0x18);
  auVar51[4] = uVar38;
  auVar51._0_4_ = iVar10;
  auVar51[5] = uVar39;
  auVar51[6] = uVar40;
  auVar51[7] = uVar41;
  auVar51[8] = uVar42;
  auVar51[9] = uVar43;
  auVar51[10] = uVar44;
  auVar51[0xb] = uVar45;
  auVar51[0xc] = uVar46;
  auVar51[0xd] = uVar47;
  auVar51[0xe] = uVar48;
  auVar51[0xf] = uVar49;
  auVar74[4] = uVar38;
  auVar74._0_4_ = iVar10;
  auVar74[5] = uVar39;
  auVar74[6] = uVar40;
  auVar74[7] = uVar41;
  auVar74[8] = uVar42;
  auVar74[9] = uVar43;
  auVar74[10] = uVar44;
  auVar74[0xb] = uVar45;
  auVar74[0xc] = uVar46;
  auVar74[0xd] = uVar47;
  auVar74[0xe] = uVar48;
  auVar74[0xf] = uVar49;
  NEON_ext(auVar51,auVar74,8,1);
  fStack_ac = local_b0;
  if (CONCAT13(uVar46,CONCAT12(uVar42,CONCAT11(uVar38,(char)iVar10))) == -1) {
    local_128 = 0x3f8000003f800000;
    local_118 = 0x3f80000000000000;
    local_108 = 0x3f80000000000000;
    local_148 = 0x3f800000;
    local_f8 = CONCAT44(fVar33 * 0.001,fVar33 * 0.001);
    local_140 = 0;
    local_138 = 0x3f800000;
    local_130 = 0;
    local_120 = 0;
    local_110 = 0;
    local_100 = 0;
    if (((*(float *)(param_2 + 4) == 1.0) && (*(float *)(param_2 + 8) == 1.0)) &&
       (*(float *)(param_2 + 0xc) == 1.0)) {
      cVar32 = '\x01';
    }
    else {
      FUN_001b0f90(&local_148,(float *)(param_2 + 4),param_2 + 0x10);
      cVar32 = '\0';
    }
    fVar59 = *(float *)(*param_3 + 0xc);
    fVar33 = *(float *)(param_3[1] + 8);
    fVar72 = *(float *)*param_3;
    fVar79 = fVar72 + fVar72;
    fVar81 = fVar59 + fVar59;
    fVar63 = *(float *)param_3[1];
    fVar57 = *(float *)(param_3[1] + 4);
    fVar54 = param_4[4];
    fVar60 = param_4[5];
    fVar61 = *param_4;
    fVar64 = param_4[1];
    fVar77 = param_4[2];
    fVar70 = param_4[3];
    fVar62 = param_4[6];
    fVar68 = fVar70 * fVar70 + -0.5;
    fVar78 = (fVar57 - fVar60) + (fVar57 - fVar60);
    fVar80 = (fVar63 - fVar54) + (fVar63 - fVar54);
    fVar67 = (fVar33 - fVar62) + (fVar33 - fVar62);
    fVar83 = *(float *)(param_1 + 8);
    fVar82 = fVar83 * (fVar79 * *(float *)(*param_3 + 8) - fVar81 * *(float *)(*param_3 + 4));
    fVar84 = fVar83 * (*(float *)(*param_3 + 8) * fVar81 + fVar79 * *(float *)(*param_3 + 4));
    fVar83 = fVar83 * (fVar72 * fVar79 + fVar59 * fVar81 + -1.0);
    fVar81 = fVar82 + fVar82;
    fVar85 = fVar84 + fVar84;
    fVar72 = fVar80 * fVar61 + fVar78 * fVar64 + fVar67 * fVar77;
    fVar86 = fVar83 + fVar83;
    fVar87 = (fVar57 + fVar84) - fVar60;
    fVar60 = (fVar57 - fVar84) - fVar60;
    fVar59 = (fVar33 - fVar82) - fVar62;
    fVar62 = (fVar82 + fVar33) - fVar62;
    fVar79 = (fVar63 + fVar83) - fVar54;
    fVar54 = (fVar63 - fVar83) - fVar54;
    fVar60 = fVar60 + fVar60;
    fVar59 = fVar59 + fVar59;
    fVar57 = fVar61 * fVar72 + (fVar80 * fVar68 - fVar70 * (fVar67 * fVar64 - fVar78 * fVar77));
    fVar54 = fVar54 + fVar54;
    fVar83 = fVar86 * fVar61 + fVar85 * fVar64 + fVar81 * fVar77;
    fVar33 = fVar54 * fVar61 + fVar60 * fVar64 + fVar59 * fVar77;
    fVar87 = fVar87 + fVar87;
    fVar62 = fVar62 + fVar62;
    fVar82 = fVar64 * fVar72 + (fVar78 * fVar68 - fVar70 * (fVar80 * fVar77 - fVar67 * fVar61));
    fVar72 = (fVar67 * fVar68 - fVar70 * (fVar78 * fVar61 - fVar80 * fVar64)) + fVar77 * fVar72;
    fVar79 = fVar79 + fVar79;
    fVar63 = fVar61 * fVar83 + (fVar86 * fVar68 - fVar70 * (fVar81 * fVar64 - fVar85 * fVar77));
    local_1b0 = CONCAT44(fVar82,fVar57);
    fVar78 = fVar79 * fVar61 + fVar87 * fVar64 + fVar62 * fVar77;
    fVar67 = fVar64 * fVar83 + (fVar85 * fVar68 - fVar70 * (fVar86 * fVar77 - fVar81 * fVar61));
    fVar83 = (fVar81 * fVar68 - fVar70 * (fVar85 * fVar61 - fVar86 * fVar64)) + fVar77 * fVar83;
    uStack_1a8 = (ulong)(uint)fVar72;
    local_1c0 = fVar64 * fVar33 + (fVar60 * fVar68 - fVar70 * (fVar54 * fVar77 - fVar59 * fVar61));
    local_1c4 = fVar61 * fVar33 + (fVar54 * fVar68 - fVar70 * (fVar59 * fVar64 - fVar60 * fVar77));
    local_1bc = (fVar59 * fVar68 - fVar70 * (fVar60 * fVar61 - fVar54 * fVar64)) + fVar77 * fVar33;
    local_1b8 = *(float *)(param_1 + 4) + *param_5;
    local_1c8 = (fVar62 * fVar68 - fVar70 * (fVar87 * fVar61 - fVar79 * fVar64)) + fVar77 * fVar78;
    local_1d0 = fVar61 * fVar78 + (fVar79 * fVar68 - fVar70 * (fVar62 * fVar64 - fVar87 * fVar77));
    local_194 = 0x47f7fffff;
    local_160 = local_a8;
    local_1cc = fVar64 * fVar78 + (fVar87 * fVar68 - fVar70 * (fVar79 * fVar77 - fVar62 * fVar61));
    uStack_178 = (ulong)(uint)(fVar72 + fVar83);
    local_180 = CONCAT44(fVar82 + fVar67,fVar57 + fVar63);
    uStack_168 = (ulong)(uint)(fVar72 - fVar83);
    local_170 = CONCAT44(fVar82 - fVar67,fVar57 - fVar63);
    local_198 = (undefined4)local_a8;
    local_1a0 = CONCAT44(local_198,local_198);
    local_1400 = &local_148;
    local_18c = 1;
    lVar29 = *(long *)(param_2 + 0x30);
    *(undefined1 *)((long)pfVar28 + 0x3e) = 0;
    *(ulong *)(pfVar28 + 2) = CONCAT44(fVar58,fVar55);
    *(ulong *)pfVar28 = CONCAT44(fVar56,fVar35);
    *(ulong *)(pfVar28 + 6) = uVar27;
    *(undefined8 *)(pfVar28 + 4) = uVar53;
    local_13f8 = *(ulong *)(lVar29 + 0x50);
    uStack_1408 = CONCAT44(uStack_1408._4_4_,2);
    local_13f0 = CONCAT71(local_13f0._1_7_,cVar32);
    local_109c = 0;
    local_1410 = PTR_DAT_02711ef0 + 0x10;
                    /* try { // try from 0026bc10 to 0026bc3b has its CatchHandler @ 0026bff0 */
    FUN_0026ae60(auStack_1090,&local_b0,&local_f8,&local_d0,&local_f0,pfVar28,param_7,0,param_8);
    fVar35 = (float)local_160 + local_b0;
    fVar33 = (float)((ulong)local_160 >> 0x20) + fStack_ac;
    local_1e8 = CONCAT44(fVar33,fVar35);
    local_1e0 = CONCAT44(fVar33 * fVar33,fVar35 * fVar35);
                    /* try { // try from 0026bc58 to 0026bcb3 has its CatchHandler @ 0026bff4 */
    local_1d8 = &local_1b0;
    FUN_00295c10(auStack_1450,&local_1d0);
    if (cVar32 == '\0') {
      FUN_002228b0(&local_148,auStack_142c,auStack_1420,auStack_1450);
    }
    (*(code *)(&PTR_LAB_025e4c50)[*(ushort *)(lVar29 + 8) - 3])(lVar29,auStack_1450,&local_1410,1,1)
    ;
    iVar10 = local_109c;
    if (local_109c != 0) {
      lVar29 = 0;
      lVar30 = 0x264;
      lVar31 = 0x24;
      do {
                    /* try { // try from 0026bce8 to 0026bcef has its CatchHandler @ 0026bff8 */
        FUN_0026fc90(auStack_1090,auStack_1420 + lVar31 + 0x10,local_10ec[lVar29],local_10ac[lVar29]
                     ,auStack_1420 + lVar30 + 0x10);
        lVar29 = lVar29 + 1;
        lVar30 = lVar30 + 0xc;
        lVar31 = lVar31 + 0x24;
      } while (iVar10 != (int)lVar29);
      local_109c = 0;
    }
    iVar10 = (int)local_708;
    if ((int)local_708 != 0) {
      uVar18 = local_708._4_4_;
      uVar27 = (ulong)local_708._4_4_;
      if (1 < local_708._4_4_) {
        iVar50 = -1;
        uVar21 = 1;
        do {
          lVar29 = local_898[uVar21];
          if ((float)*(undefined8 *)(local_898[uVar21 + 1] + 0x28) <
              (float)*(undefined8 *)(lVar29 + 0x28)) {
            local_898[uVar21] = local_898[uVar21 + 1];
            local_898[uVar21 + 1] = lVar29;
            if (-1 < (int)uVar21 + -2) {
              uVar23 = (long)iVar50 + 1;
              plVar24 = local_898 + (long)iVar50 + 1;
              do {
                uVar1 = uVar23 & 0xffffffff;
                lVar29 = local_898[uVar1 + 1];
                if ((float)*(undefined8 *)(*plVar24 + 0x28) <= (float)*(undefined8 *)(lVar29 + 0x28)
                   ) break;
                uVar23 = uVar23 - 1;
                local_898[uVar1 + 1] = *plVar24;
                *plVar24 = lVar29;
                plVar24 = plVar24 + -1;
              } while (0 < (long)uVar23);
            }
          }
          uVar21 = uVar21 + 1;
          iVar50 = iVar50 + 1;
        } while (uVar21 != uVar27);
      }
      lVar29 = local_710;
      if (uVar18 == 0) {
        local_708._4_4_ = 0;
      }
      else {
        uVar21 = 0;
        uVar23 = 0xffffffff;
        do {
          puVar22 = (undefined8 *)local_898[uVar21 + 1];
          puVar22[2] = 0;
          iVar10 = *(int *)((long)puVar22 + 0x34) - *(int *)(puVar22 + 6);
          puVar22[3] = puVar22;
          puVar22[4] = puVar22;
          *(int *)(puVar22 + 7) = iVar10;
          if (uVar21 != 0) {
            lVar30 = 0;
            do {
              lVar31 = (local_898 + 1)[uVar23 + lVar30];
              puVar25 = *(undefined8 **)(lVar31 + 0x20);
              fVar35 = (float)*puVar22 * (float)*puVar25;
              fVar33 = (float)((ulong)*puVar22 >> 0x20) * (float)((ulong)*puVar25 >> 0x20);
              fVar55 = (float)puVar22[1] * (float)puVar25[1];
              fVar56 = (float)((ulong)puVar22[1] >> 0x20) * (float)((ulong)puVar25[1] >> 0x20);
              auVar7._4_4_ = fVar33;
              auVar7._0_4_ = fVar35;
              auVar7._8_4_ = fVar55;
              auVar7._12_4_ = fVar56;
              auVar8._4_4_ = fVar33;
              auVar8._0_4_ = fVar35;
              auVar8._8_4_ = fVar55;
              auVar8._12_4_ = fVar56;
              auVar51 = NEON_ext(auVar7,auVar8,8,1);
              if (local_760[0] <= fVar35 + fVar33 + auVar51._0_4_ + auVar51._4_4_) {
                *(undefined8 **)(lVar31 + 0x10) = puVar22;
                puVar25[3] = puVar22;
                puVar22[4] = puVar25;
                *(int *)(*(long *)(lVar31 + 0x20) + 0x38) =
                     *(int *)(*(long *)(lVar31 + 0x20) + 0x38) + iVar10;
                break;
              }
              lVar30 = lVar30 + -1;
            } while ((int)uVar21 + (int)lVar30 != 0);
          }
          uVar23 = (ulong)((int)uVar23 + 1);
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar27);
        uVar21 = 0;
        do {
          lVar30 = local_898[uVar21 + 1];
          if (lVar30 != 0 && *(long *)(lVar30 + 0x20) == lVar30) {
            for (lVar31 = *(long *)(lVar30 + 0x10); lVar31 != 0; lVar31 = *(long *)(lVar31 + 0x10))
            {
              uVar23 = (ulong)*(uint *)(lVar30 + 0x30);
              uVar18 = *(uint *)(lVar30 + 0x34);
              if (*(uint *)(lVar30 + 0x30) < uVar18) {
                uVar19 = *(uint *)(lVar31 + 0x34);
                do {
                  uVar26 = *(uint *)(lVar31 + 0x30);
                  if (uVar26 < uVar19) {
                    lVar3 = lVar29 + uVar23 * 0x40;
                    do {
                      __dest = (void *)(lVar29 + (ulong)uVar26 * 0x40);
                      fVar35 = (float)*(undefined8 *)((long)__dest + 0x10) -
                               *(float *)(lVar3 + 0x10);
                      fVar33 = (float)((ulong)*(undefined8 *)((long)__dest + 0x10) >> 0x20) -
                               *(float *)(lVar3 + 0x14);
                      fVar55 = (float)*(undefined8 *)((long)__dest + 0x18) -
                               *(float *)(lVar3 + 0x18);
                      fVar56 = (float)((ulong)*(undefined8 *)((long)__dest + 0x18) >> 0x20) -
                               *(float *)(lVar3 + 0x1c);
                      fVar35 = fVar35 * fVar35;
                      fVar33 = fVar33 * fVar33;
                      fVar55 = fVar55 * fVar55;
                      fVar56 = fVar56 * fVar56;
                      auVar5._4_4_ = fVar33;
                      auVar5._0_4_ = fVar35;
                      auVar5._8_4_ = fVar55;
                      auVar5._12_4_ = fVar56;
                      auVar6._4_4_ = fVar33;
                      auVar6._0_4_ = fVar35;
                      auVar6._8_4_ = fVar55;
                      auVar6._12_4_ = fVar56;
                      auVar51 = NEON_ext(auVar5,auVar6,8,1);
                      if (fVar35 + fVar33 + auVar51._0_4_ + auVar51._4_4_ < (float)local_758[0]) {
                        memcpy(__dest,(void *)(lVar29 + (ulong)(uVar19 - 1) * 0x40),0x34);
                        uVar19 = *(int *)(lVar31 + 0x34) - 1;
                        uVar26 = uVar26 - 1;
                        *(uint *)(lVar31 + 0x34) = uVar19;
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 < uVar19);
                    uVar18 = *(uint *)(lVar30 + 0x34);
                  }
                  uVar23 = uVar23 + 1;
                } while (uVar23 < uVar18);
              }
              lVar30 = lVar31;
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar27);
        iVar10 = (int)local_708;
      }
                    /* try { // try from 0026bf94 to 0026bf9b has its CatchHandler @ 0026bff4 */
      FUN_00292960(local_770,local_710,iVar10,local_898 + 1,local_708._4_4_,local_758,local_760,3);
      local_708 = 0;
    }
  }
  else {
    fVar61 = fVar35 + fVar35;
    fVar64 = fVar56 + fVar56;
    fVar63 = fVar55 + fVar55;
    fVar54 = fVar56 * fVar64;
    fVar77 = fVar55 * fVar63;
    uVar73 = NEON_fmov(0x3f800000,4);
    fVar59 = fVar55 * fVar61 + fVar58 * fVar64;
    uStack_1408 = (ulong)(uint)(fVar55 * fVar61 - fVar58 * fVar64);
    fVar60 = (float)uVar73 - fVar35 * fVar61;
    fVar57 = (float)((ulong)uVar73 >> 0x20);
    local_13f8 = (ulong)(uint)(fVar55 * fVar64 + fVar58 * fVar61);
    local_1410 = (undefined *)
                 NEON_ext(CONCAT44((fVar57 - fVar54) - fVar77,((float)uVar73 - fVar54) - fVar77),
                          CONCAT44(fVar56 * fVar61 + fVar58 * fVar63,
                                   fVar56 * fVar61 + fVar58 * fVar63),4,1);
    local_1400 = (undefined8 *)
                 NEON_ext(CONCAT44(fVar56 * fVar61 - fVar58 * fVar63,
                                   fVar56 * fVar61 - fVar58 * fVar63),
                          CONCAT44((fVar57 - fVar35 * fVar61) - fVar77,fVar60 - fVar77),4,1);
    uStack_13e8 = (ulong)(uint)(fVar60 - fVar54);
    local_13f0 = NEON_ext(CONCAT17((char)((uint)fVar59 >> 0x18),
                                   CONCAT16((char)((uint)fVar59 >> 0x10),
                                            CONCAT15((char)((uint)fVar59 >> 8),
                                                     CONCAT14(SUB41(fVar59,0),
                                                              fVar55 * fVar61 + fVar58 * fVar64)))),
                          CONCAT44(fVar55 * fVar64 - fVar58 * fVar61,
                                   fVar55 * fVar64 - fVar58 * fVar61),4,1);
    local_1b0 = CONCAT44(fVar33 * 0.05,fVar33 * 0.05);
    local_148 = CONCAT44(fVar33 + local_b0,fVar33 + local_b0);
    uVar18 = (uint)*(byte *)((long)pfVar28 + 0x3e);
    local_13e0 = uVar53;
    uStack_13d8 = uVar27;
    if (*(byte *)((long)pfVar28 + 0x3e) != 0) {
      uVar27 = 0;
      do {
        while( true ) {
          pbVar2 = (byte *)((long)pfVar28 + uVar27 + 0x38);
          uVar26 = (uint)uVar27;
          uVar19 = uVar26;
          if (uVar18 - 2 <= uVar26) {
            uVar19 = uVar18 - 2;
          }
          bVar36 = *pbVar2;
          pfVar20 = pfVar28 + (ulong)*(byte *)((long)pfVar28 + (ulong)(uVar19 + 1) + 0x38) * 100 +
                              0x10;
          Hint_Prefetch(pfVar20,0,0,0);
          Hint_Prefetch(pfVar20 + 0x20,0,0,0);
          Hint_Prefetch(pfVar20 + 0x40,0,0,0);
          fVar35 = (float)FUN_00292800(pfVar20,pfVar28 + (ulong)bVar36 * 100 + 0x10,&local_1410,
                                       &local_1b0,&local_148);
          if ((pfVar28 + (ulong)bVar36 * 100 + 0x10)[0x60] == 0.0) break;
          pfVar28[(ulong)bVar36 + 8] = fVar35;
          uVar18 = (uint)*(byte *)((long)pfVar28 + 0x3e);
          uVar27 = (ulong)(uVar26 + 1);
          if (uVar18 <= uVar26 + 1) goto LAB_0026bfa0;
        }
        bVar4 = *(char *)((long)pfVar28 + 0x3e) - 1;
        *(byte *)((long)pfVar28 + 0x3e) = bVar4;
        bVar37 = *(byte *)((long)pfVar28 + (ulong)bVar4 + 0x38);
        *(byte *)((long)pfVar28 + (ulong)bVar4 + 0x38) = bVar36;
        *pbVar2 = bVar37;
        uVar18 = (uint)*(byte *)((long)pfVar28 + 0x3e);
      } while (uVar26 < uVar18);
    }
  }
LAB_0026bfa0:
  uVar18 = FUN_00293400(pfVar28,param_7,&local_d0,&local_f0,&local_a8);
  return uVar18 & 1;
}


