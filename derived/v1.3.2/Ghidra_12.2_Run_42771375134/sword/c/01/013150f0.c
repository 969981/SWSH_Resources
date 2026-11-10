/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013150f0; name: FUN_013150f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013150f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined2 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined2 uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined2 uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  float fVar57;
  float fVar58;
  float fVar62;
  float fVar64;
  undefined1 auVar59 [16];
  float fVar66;
  undefined1 auVar60 [16];
  float fVar63;
  float fVar65;
  float fVar67;
  undefined1 auVar61 [16];
  float fVar68;
  float fVar69;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar70 [16];
  float fVar74;
  float fVar75;
  float fVar76;
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
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  
  if (((DAT_02a6d630 & 1) == 0) && (iVar36 = __cxa_guard_acquire(&DAT_02a6d630), iVar36 != 0)) {
    fVar42 = (float)((ulong)uRam0000000002a6d678 >> 0x20);
    fVar40 = (float)((ulong)_DAT_02a6d670 >> 0x20);
    fVar44 = (float)((ulong)_DAT_02a6d690 >> 0x20);
    fVar46 = (float)((ulong)uRam0000000002a6d698 >> 0x20);
    fVar62 = (float)((ulong)_DAT_02a6d680 >> 0x20);
    fVar64 = (float)((ulong)uRam0000000002a6d688 >> 0x20);
    fVar66 = (float)((ulong)_DAT_02a6d6a0 >> 0x20);
    fVar79 = (float)((ulong)uRam0000000002a6d6a8 >> 0x20);
    fVar41 = (float)_DAT_02a6d640;
    fVar37 = fVar41 + ((float)_DAT_02a6d670 + (float)_DAT_02a6d690) * 0.5;
    fVar43 = (float)((ulong)_DAT_02a6d640 >> 0x20);
    fVar68 = fVar43 + (fVar40 + fVar44) * 0.5;
    fVar45 = (float)uRam0000000002a6d648;
    fVar38 = fVar45 + ((float)uRam0000000002a6d678 + (float)uRam0000000002a6d698) * 0.5;
    fVar47 = (float)((ulong)uRam0000000002a6d648 >> 0x20);
    fVar57 = fVar47 + (fVar42 + fVar46) * 0.5;
    fVar58 = fVar41 + ((float)_DAT_02a6d690 + (float)_DAT_02a6d680) * 0.5;
    fVar63 = fVar43 + (fVar44 + fVar62) * 0.5;
    fVar65 = fVar45 + ((float)uRam0000000002a6d698 + (float)uRam0000000002a6d688) * 0.5;
    fVar67 = fVar47 + (fVar46 + fVar64) * 0.5;
    fVar69 = fVar41 + ((float)_DAT_02a6d680 + (float)_DAT_02a6d6a0) * 0.5;
    fVar71 = fVar43 + (fVar62 + fVar66) * 0.5;
    fVar72 = fVar45 + ((float)uRam0000000002a6d688 + (float)uRam0000000002a6d6a8) * 0.5;
    fVar73 = fVar47 + (fVar64 + fVar79) * 0.5;
    fVar41 = fVar41 + ((float)_DAT_02a6d670 + (float)_DAT_02a6d6a0) * 0.5;
    fVar43 = fVar43 + (fVar40 + fVar66) * 0.5;
    fVar45 = fVar45 + ((float)uRam0000000002a6d678 + (float)uRam0000000002a6d6a8) * 0.5;
    fVar47 = fVar47 + (fVar42 + fVar79) * 0.5;
    fVar74 = (float)_DAT_02a6d660;
    fVar78 = fVar37 - fVar74;
    fVar75 = (float)((ulong)_DAT_02a6d660 >> 0x20);
    fVar80 = fVar68 - fVar75;
    fVar76 = (float)uRam0000000002a6d668;
    fVar81 = fVar38 - fVar76;
    fVar77 = (float)((ulong)uRam0000000002a6d668 >> 0x20);
    fVar83 = fVar57 - fVar77;
    fVar84 = fVar58 - fVar74;
    fVar85 = fVar63 - fVar75;
    fVar86 = fVar65 - fVar76;
    fVar87 = fVar67 - fVar77;
    fVar40 = fVar78 * fVar78;
    fVar42 = fVar80 * fVar80;
    uVar48 = (undefined1)((uint)fVar42 >> 8);
    uVar49 = (undefined1)((uint)fVar42 >> 0x10);
    uVar50 = (undefined1)((uint)fVar42 >> 0x18);
    fVar44 = fVar81 * fVar81;
    uVar51 = (undefined1)((uint)fVar44 >> 8);
    uVar52 = (undefined1)((uint)fVar44 >> 0x10);
    uVar53 = (undefined1)((uint)fVar44 >> 0x18);
    fVar46 = fVar83 * fVar83;
    uVar54 = (undefined1)((uint)fVar46 >> 8);
    uVar55 = (undefined1)((uint)fVar46 >> 0x10);
    uVar56 = (undefined1)((uint)fVar46 >> 0x18);
    auVar59[4] = SUB41(fVar42,0);
    auVar59._0_4_ = fVar40;
    auVar59[5] = uVar48;
    auVar59[6] = uVar49;
    auVar59[7] = uVar50;
    auVar59[8] = SUB41(fVar44,0);
    auVar59[9] = uVar51;
    auVar59[10] = uVar52;
    auVar59[0xb] = uVar53;
    auVar59[0xc] = SUB41(fVar46,0);
    auVar59[0xd] = uVar54;
    auVar59[0xe] = uVar55;
    auVar59[0xf] = uVar56;
    auVar100[4] = SUB41(fVar42,0);
    auVar100._0_4_ = fVar40;
    auVar100[5] = uVar48;
    auVar100[6] = uVar49;
    auVar100[7] = uVar50;
    auVar100[8] = SUB41(fVar44,0);
    auVar100[9] = uVar51;
    auVar100[10] = uVar52;
    auVar100[0xb] = uVar53;
    auVar100[0xc] = SUB41(fVar46,0);
    auVar100[0xd] = uVar54;
    auVar100[0xe] = uVar55;
    auVar100[0xf] = uVar56;
    auVar59 = NEON_ext(auVar59,auVar100,8,1);
    fVar44 = fVar84 * fVar84;
    fVar46 = fVar85 * fVar85;
    uVar48 = (undefined1)((uint)fVar46 >> 8);
    uVar49 = (undefined1)((uint)fVar46 >> 0x10);
    uVar50 = (undefined1)((uint)fVar46 >> 0x18);
    fVar62 = fVar86 * fVar86;
    uVar51 = (undefined1)((uint)fVar62 >> 8);
    uVar52 = (undefined1)((uint)fVar62 >> 0x10);
    uVar53 = (undefined1)((uint)fVar62 >> 0x18);
    fVar64 = fVar87 * fVar87;
    uVar54 = (undefined1)((uint)fVar64 >> 8);
    uVar55 = (undefined1)((uint)fVar64 >> 0x10);
    uVar56 = (undefined1)((uint)fVar64 >> 0x18);
    auVar104[4] = SUB41(fVar46,0);
    auVar104._0_4_ = fVar44;
    auVar104[5] = uVar48;
    auVar104[6] = uVar49;
    auVar104[7] = uVar50;
    auVar104[8] = SUB41(fVar62,0);
    auVar104[9] = uVar51;
    auVar104[10] = uVar52;
    auVar104[0xb] = uVar53;
    auVar104[0xc] = SUB41(fVar64,0);
    auVar104[0xd] = uVar54;
    auVar104[0xe] = uVar55;
    auVar104[0xf] = uVar56;
    auVar107[4] = SUB41(fVar46,0);
    auVar107._0_4_ = fVar44;
    auVar107[5] = uVar48;
    auVar107[6] = uVar49;
    auVar107[7] = uVar50;
    auVar107[8] = SUB41(fVar62,0);
    auVar107[9] = uVar51;
    auVar107[10] = uVar52;
    auVar107[0xb] = uVar53;
    auVar107[0xc] = SUB41(fVar64,0);
    auVar107[0xd] = uVar54;
    auVar107[0xe] = uVar55;
    auVar107[0xf] = uVar56;
    auVar100 = NEON_ext(auVar104,auVar107,8,1);
    fVar88 = fVar69 - fVar74;
    fVar89 = fVar71 - fVar75;
    fVar90 = fVar72 - fVar76;
    fVar91 = fVar73 - fVar77;
    fVar40 = auVar59._0_4_ + fVar40;
    fVar42 = auVar59._4_4_ + fVar42;
    fVar62 = fVar88 * fVar88;
    fVar64 = fVar89 * fVar89;
    uVar48 = (undefined1)((uint)fVar64 >> 8);
    uVar49 = (undefined1)((uint)fVar64 >> 0x10);
    uVar50 = (undefined1)((uint)fVar64 >> 0x18);
    fVar66 = fVar90 * fVar90;
    uVar51 = (undefined1)((uint)fVar66 >> 8);
    uVar52 = (undefined1)((uint)fVar66 >> 0x10);
    uVar53 = (undefined1)((uint)fVar66 >> 0x18);
    fVar79 = fVar91 * fVar91;
    uVar54 = (undefined1)((uint)fVar79 >> 8);
    uVar55 = (undefined1)((uint)fVar79 >> 0x10);
    uVar56 = (undefined1)((uint)fVar79 >> 0x18);
    auVar19[4] = SUB41(fVar64,0);
    auVar19._0_4_ = fVar62;
    auVar19[5] = uVar48;
    auVar19[6] = uVar49;
    auVar19[7] = uVar50;
    auVar19[8] = SUB41(fVar66,0);
    auVar19[9] = uVar51;
    auVar19[10] = uVar52;
    auVar19[0xb] = uVar53;
    auVar19[0xc] = SUB41(fVar79,0);
    auVar19[0xd] = uVar54;
    auVar19[0xe] = uVar55;
    auVar19[0xf] = uVar56;
    auVar20[4] = SUB41(fVar64,0);
    auVar20._0_4_ = fVar62;
    auVar20[5] = uVar48;
    auVar20[6] = uVar49;
    auVar20[7] = uVar50;
    auVar20[8] = SUB41(fVar66,0);
    auVar20[9] = uVar51;
    auVar20[10] = uVar52;
    auVar20[0xb] = uVar53;
    auVar20[0xc] = SUB41(fVar79,0);
    auVar20[0xd] = uVar54;
    auVar20[0xe] = uVar55;
    auVar20[0xf] = uVar56;
    auVar59 = NEON_ext(auVar19,auVar20,8,1);
    fVar62 = auVar59._0_4_ + fVar62;
    fVar64 = auVar59._4_4_ + fVar64;
    fVar74 = fVar41 - fVar74;
    fVar75 = fVar43 - fVar75;
    fVar76 = fVar45 - fVar76;
    fVar77 = fVar47 - fVar77;
    fVar66 = fVar74 * fVar74;
    fVar79 = fVar75 * fVar75;
    uVar48 = (undefined1)((uint)fVar79 >> 8);
    uVar49 = (undefined1)((uint)fVar79 >> 0x10);
    uVar50 = (undefined1)((uint)fVar79 >> 0x18);
    fVar39 = fVar76 * fVar76;
    uVar51 = (undefined1)((uint)fVar39 >> 8);
    uVar52 = (undefined1)((uint)fVar39 >> 0x10);
    uVar53 = (undefined1)((uint)fVar39 >> 0x18);
    fVar82 = fVar77 * fVar77;
    uVar54 = (undefined1)((uint)fVar82 >> 8);
    uVar55 = (undefined1)((uint)fVar82 >> 0x10);
    uVar56 = (undefined1)((uint)fVar82 >> 0x18);
    auVar27[4] = SUB41(fVar79,0);
    auVar27._0_4_ = fVar66;
    auVar27[5] = uVar48;
    auVar27[6] = uVar49;
    auVar27[7] = uVar50;
    auVar27[8] = SUB41(fVar39,0);
    auVar27[9] = uVar51;
    auVar27[10] = uVar52;
    auVar27[0xb] = uVar53;
    auVar27[0xc] = SUB41(fVar82,0);
    auVar27[0xd] = uVar54;
    auVar27[0xe] = uVar55;
    auVar27[0xf] = uVar56;
    auVar28[4] = SUB41(fVar79,0);
    auVar28._0_4_ = fVar66;
    auVar28[5] = uVar48;
    auVar28[6] = uVar49;
    auVar28[7] = uVar50;
    auVar28[8] = SUB41(fVar39,0);
    auVar28[9] = uVar51;
    auVar28[10] = uVar52;
    auVar28[0xb] = uVar53;
    auVar28[0xc] = SUB41(fVar82,0);
    auVar28[0xd] = uVar54;
    auVar28[0xe] = uVar55;
    auVar28[0xf] = uVar56;
    auVar59 = NEON_ext(auVar27,auVar28,8,1);
    fVar66 = auVar59._0_4_ + fVar66;
    fVar79 = auVar59._4_4_ + fVar79;
    fVar39 = fVar40 + fVar42;
    fVar40 = fVar40 + fVar42;
    uVar48 = SUB41(fVar40,0);
    uVar49 = (undefined1)((uint)fVar40 >> 8);
    uVar50 = (undefined1)((uint)fVar40 >> 0x10);
    uVar51 = (undefined1)((uint)fVar40 >> 0x18);
    fVar44 = auVar100._0_4_ + fVar44;
    fVar46 = auVar100._4_4_ + fVar46;
    fVar42 = fVar44 + fVar46;
    fVar44 = fVar44 + fVar46;
    uVar52 = SUB41(fVar44,0);
    uVar53 = (undefined1)((uint)fVar44 >> 8);
    uVar54 = (undefined1)((uint)fVar44 >> 0x10);
    uVar55 = (undefined1)((uint)fVar44 >> 0x18);
    auVar102[4] = uVar48;
    auVar102._0_4_ = fVar39;
    auVar102[5] = uVar49;
    auVar102[6] = uVar50;
    auVar102[7] = uVar51;
    auVar102[8] = SUB41(fVar39,0);
    auVar102[9] = (char)((uint)fVar39 >> 8);
    auVar102[10] = (char)((uint)fVar39 >> 0x10);
    auVar102[0xb] = (char)((uint)fVar39 >> 0x18);
    auVar102[0xc] = uVar48;
    auVar102[0xd] = uVar49;
    auVar102[0xe] = uVar50;
    auVar102[0xf] = uVar51;
    auVar59 = NEON_frsqrte(auVar102,4);
    fVar46 = fVar62 + fVar64;
    fVar62 = fVar62 + fVar64;
    uVar56 = SUB41(fVar62,0);
    uVar92 = (undefined1)((uint)fVar62 >> 8);
    uVar93 = (undefined1)((uint)fVar62 >> 0x10);
    uVar94 = (undefined1)((uint)fVar62 >> 0x18);
    fVar64 = fVar66 + fVar79;
    fVar66 = fVar66 + fVar79;
    uVar95 = SUB41(fVar66,0);
    uVar96 = (undefined1)((uint)fVar66 >> 8);
    uVar97 = (undefined1)((uint)fVar66 >> 0x10);
    uVar98 = (undefined1)((uint)fVar66 >> 0x18);
    auVar21[4] = uVar56;
    auVar21._0_4_ = fVar46;
    auVar21[5] = uVar92;
    auVar21[6] = uVar93;
    auVar21[7] = uVar94;
    auVar21[8] = SUB41(fVar46,0);
    auVar21[9] = (char)((uint)fVar46 >> 8);
    auVar21[10] = (char)((uint)fVar46 >> 0x10);
    auVar21[0xb] = (char)((uint)fVar46 >> 0x18);
    auVar21[0xc] = uVar56;
    auVar21[0xd] = uVar92;
    auVar21[0xe] = uVar93;
    auVar21[0xf] = uVar94;
    auVar102 = NEON_frsqrte(auVar21,4);
    auVar106._0_4_ = auVar59._0_4_ * fVar39;
    auVar106._4_4_ = auVar59._4_4_ * fVar40;
    auVar106._8_4_ = auVar59._8_4_ * fVar39;
    uVar9 = (undefined2)(CONCAT15(uVar49,CONCAT14(uVar48,fVar39)) >> 0x20);
    auVar106._12_4_ = auVar59._12_4_ * (float)CONCAT13(uVar51,CONCAT12(uVar50,uVar9));
    auVar13[4] = uVar52;
    auVar13._0_4_ = fVar42;
    auVar13[5] = uVar53;
    auVar13[6] = uVar54;
    auVar13[7] = uVar55;
    auVar13[8] = SUB41(fVar42,0);
    auVar13[9] = (char)((uint)fVar42 >> 8);
    auVar13[10] = (char)((uint)fVar42 >> 0x10);
    auVar13[0xb] = (char)((uint)fVar42 >> 0x18);
    auVar13[0xc] = uVar52;
    auVar13[0xd] = uVar53;
    auVar13[0xe] = uVar54;
    auVar13[0xf] = uVar55;
    auVar100 = NEON_frsqrte(auVar13,4);
    auVar29[4] = uVar95;
    auVar29._0_4_ = fVar64;
    auVar29[5] = uVar96;
    auVar29[6] = uVar97;
    auVar29[7] = uVar98;
    auVar29[8] = SUB41(fVar64,0);
    auVar29[9] = (char)((uint)fVar64 >> 8);
    auVar29[10] = (char)((uint)fVar64 >> 0x10);
    auVar29[0xb] = (char)((uint)fVar64 >> 0x18);
    auVar29[0xc] = uVar95;
    auVar29[0xd] = uVar96;
    auVar29[0xe] = uVar97;
    auVar29[0xf] = uVar98;
    auVar104 = NEON_frsqrte(auVar29,4);
    auVar107 = NEON_frsqrts(auVar59,auVar106,4);
    auVar99._0_4_ = auVar59._0_4_ * auVar107._0_4_;
    auVar99._4_4_ = auVar59._4_4_ * auVar107._4_4_;
    auVar99._8_4_ = auVar59._8_4_ * auVar107._8_4_;
    auVar99._12_4_ = auVar59._12_4_ * auVar107._12_4_;
    auVar108._0_4_ = auVar100._0_4_ * fVar42;
    auVar108._4_4_ = auVar100._4_4_ * fVar44;
    auVar108._8_4_ = auVar100._8_4_ * fVar42;
    uVar14 = (undefined2)(CONCAT15(uVar53,CONCAT14(uVar52,fVar42)) >> 0x20);
    auVar108._12_4_ = auVar100._12_4_ * (float)CONCAT13(uVar55,CONCAT12(uVar54,uVar14));
    auVar59 = NEON_frsqrts(auVar100,auVar108,4);
    auVar101._0_4_ = auVar100._0_4_ * auVar59._0_4_;
    auVar101._4_4_ = auVar100._4_4_ * auVar59._4_4_;
    auVar101._8_4_ = auVar100._8_4_ * auVar59._8_4_;
    auVar101._12_4_ = auVar100._12_4_ * auVar59._12_4_;
    auVar109._0_4_ = auVar102._0_4_ * fVar46;
    auVar109._4_4_ = auVar102._4_4_ * fVar62;
    auVar109._8_4_ = auVar102._8_4_ * fVar46;
    uVar22 = (undefined2)(CONCAT15(uVar92,CONCAT14(uVar56,fVar46)) >> 0x20);
    auVar109._12_4_ = auVar102._12_4_ * (float)CONCAT13(uVar94,CONCAT12(uVar93,uVar22));
    auVar59 = NEON_frsqrts(auVar102,auVar109,4);
    auVar103._0_4_ = auVar102._0_4_ * auVar59._0_4_;
    auVar103._4_4_ = auVar102._4_4_ * auVar59._4_4_;
    auVar103._8_4_ = auVar102._8_4_ * auVar59._8_4_;
    auVar103._12_4_ = auVar102._12_4_ * auVar59._12_4_;
    auVar110._0_4_ = auVar104._0_4_ * fVar64;
    auVar110._4_4_ = auVar104._4_4_ * fVar66;
    auVar110._8_4_ = auVar104._8_4_ * fVar64;
    uVar30 = (undefined2)(CONCAT15(uVar96,CONCAT14(uVar95,fVar64)) >> 0x20);
    auVar110._12_4_ = auVar104._12_4_ * (float)CONCAT13(uVar98,CONCAT12(uVar97,uVar30));
    auVar59 = NEON_frsqrts(auVar104,auVar110,4);
    auVar105._0_4_ = auVar104._0_4_ * auVar59._0_4_;
    auVar105._4_4_ = auVar104._4_4_ * auVar59._4_4_;
    auVar105._8_4_ = auVar104._8_4_ * auVar59._8_4_;
    auVar105._12_4_ = auVar104._12_4_ * auVar59._12_4_;
    auVar111._0_4_ = fVar39 * auVar99._0_4_;
    auVar111._4_4_ = fVar40 * auVar99._4_4_;
    auVar111._8_4_ = fVar39 * auVar99._8_4_;
    auVar111._12_4_ = (float)CONCAT13(uVar51,CONCAT12(uVar50,uVar9)) * auVar99._12_4_;
    iVar36 = -(uint)(fVar39 == 0.0);
    iVar10 = -(uint)(fVar40 == 0.0);
    iVar11 = -(uint)(fVar39 == 0.0);
    iVar12 = -(uint)((float)CONCAT13(uVar51,CONCAT12(uVar50,uVar9)) == 0.0);
    auVar59 = NEON_frsqrts(auVar99,auVar111,4);
    auVar112._0_4_ = fVar42 * auVar101._0_4_;
    auVar112._4_4_ = fVar44 * auVar101._4_4_;
    auVar112._8_4_ = fVar42 * auVar101._8_4_;
    auVar112._12_4_ = (float)CONCAT13(uVar55,CONCAT12(uVar54,uVar14)) * auVar101._12_4_;
    iVar15 = -(uint)(fVar42 == 0.0);
    iVar16 = -(uint)(fVar44 == 0.0);
    iVar17 = -(uint)(fVar42 == 0.0);
    iVar18 = -(uint)((float)CONCAT13(uVar55,CONCAT12(uVar54,uVar14)) == 0.0);
    auVar100 = NEON_frsqrts(auVar101,auVar112,4);
    auVar113._0_4_ = fVar46 * auVar103._0_4_;
    auVar113._4_4_ = fVar62 * auVar103._4_4_;
    auVar113._8_4_ = fVar46 * auVar103._8_4_;
    auVar113._12_4_ = (float)CONCAT13(uVar94,CONCAT12(uVar93,uVar22)) * auVar103._12_4_;
    auVar102 = NEON_frsqrts(auVar103,auVar113,4);
    auVar114._0_4_ = fVar64 * auVar105._0_4_;
    auVar114._4_4_ = fVar66 * auVar105._4_4_;
    auVar114._8_4_ = fVar64 * auVar105._8_4_;
    auVar114._12_4_ = (float)CONCAT13(uVar98,CONCAT12(uVar97,uVar30)) * auVar105._12_4_;
    fVar79 = fVar78 * auVar99._0_4_ * auVar59._0_4_ * 150.0;
    fVar39 = fVar80 * auVar99._4_4_ * auVar59._4_4_ * 150.0;
    fVar82 = fVar81 * auVar99._8_4_ * auVar59._8_4_ * 150.0;
    fVar78 = fVar83 * auVar99._12_4_ * auVar59._12_4_ * 150.0;
    auVar59 = NEON_frsqrts(auVar105,auVar114,4);
    fVar80 = fVar84 * auVar101._0_4_ * auVar100._0_4_ * 150.0;
    fVar81 = fVar85 * auVar101._4_4_ * auVar100._4_4_ * 150.0;
    fVar83 = fVar86 * auVar101._8_4_ * auVar100._8_4_ * 150.0;
    fVar84 = fVar87 * auVar101._12_4_ * auVar100._12_4_ * 150.0;
    fVar79 = fVar79 + fVar79;
    fVar39 = fVar39 + fVar39;
    fVar82 = fVar82 + fVar82;
    fVar78 = fVar78 + fVar78;
    fVar80 = fVar80 + fVar80;
    fVar81 = fVar81 + fVar81;
    fVar83 = fVar83 + fVar83;
    fVar84 = fVar84 + fVar84;
    iVar23 = -(uint)(fVar46 == 0.0);
    iVar24 = -(uint)(fVar62 == 0.0);
    iVar25 = -(uint)(fVar46 == 0.0);
    iVar26 = -(uint)((float)CONCAT13(uVar94,CONCAT12(uVar93,uVar22)) == 0.0);
    fVar62 = fVar88 * auVar103._0_4_ * auVar102._0_4_ * 150.0;
    fVar85 = fVar89 * auVar103._4_4_ * auVar102._4_4_ * 150.0;
    fVar86 = fVar90 * auVar103._8_4_ * auVar102._8_4_ * 150.0;
    fVar87 = fVar91 * auVar103._12_4_ * auVar102._12_4_ * 150.0;
    fVar40 = fVar74 * auVar105._0_4_ * auVar59._0_4_ * 150.0;
    fVar42 = fVar75 * auVar105._4_4_ * auVar59._4_4_ * 150.0;
    fVar44 = fVar76 * auVar105._8_4_ * auVar59._8_4_ * 150.0;
    fVar46 = fVar77 * auVar105._12_4_ * auVar59._12_4_ * 150.0;
    iVar31 = -(uint)(fVar64 == 0.0);
    iVar32 = -(uint)(fVar66 == 0.0);
    iVar33 = -(uint)(fVar64 == 0.0);
    iVar34 = -(uint)((float)CONCAT13(uVar98,CONCAT12(uVar97,uVar30)) == 0.0);
    fVar68 = fVar68 + (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                      CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                               ~(byte)((uint)iVar10 >> 0x10),
                                               CONCAT11((byte)((uint)fVar39 >> 8) &
                                                        ~(byte)((uint)iVar10 >> 8),
                                                        SUB41(fVar39,0) & ~(byte)iVar10)));
    fVar57 = fVar57 + (float)CONCAT13((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                                      CONCAT12((byte)((uint)fVar78 >> 0x10) &
                                               ~(byte)((uint)iVar12 >> 0x10),
                                               CONCAT11((byte)((uint)fVar78 >> 8) &
                                                        ~(byte)((uint)iVar12 >> 8),
                                                        SUB41(fVar78,0) & ~(byte)iVar12)));
    fVar62 = fVar62 + fVar62;
    fVar85 = fVar85 + fVar85;
    fVar86 = fVar86 + fVar86;
    fVar87 = fVar87 + fVar87;
    fVar40 = fVar40 + fVar40;
    fVar42 = fVar42 + fVar42;
    fVar44 = fVar44 + fVar44;
    fVar46 = fVar46 + fVar46;
    auVar61._0_8_ =
         CONCAT44(fVar63 + (float)CONCAT13((byte)((uint)fVar81 >> 0x18) &
                                           ~(byte)((uint)iVar16 >> 0x18),
                                           CONCAT12((byte)((uint)fVar81 >> 0x10) &
                                                    ~(byte)((uint)iVar16 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar81 >> 8) &
                                                             ~(byte)((uint)iVar16 >> 8),
                                                             SUB41(fVar81,0) & ~(byte)iVar16))),
                  fVar58 + (float)CONCAT13((byte)((uint)fVar80 >> 0x18) &
                                           ~(byte)((uint)iVar15 >> 0x18),
                                           CONCAT12((byte)((uint)fVar80 >> 0x10) &
                                                    ~(byte)((uint)iVar15 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar80 >> 8) &
                                                             ~(byte)((uint)iVar15 >> 8),
                                                             SUB41(fVar80,0) & ~(byte)iVar15))));
    auVar61._8_4_ =
         fVar65 + (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                  CONCAT12((byte)((uint)fVar83 >> 0x10) &
                                           ~(byte)((uint)iVar17 >> 0x10),
                                           CONCAT11((byte)((uint)fVar83 >> 8) &
                                                    ~(byte)((uint)iVar17 >> 8),
                                                    SUB41(fVar83,0) & ~(byte)iVar17)));
    auVar61._12_4_ =
         fVar67 + (float)CONCAT13((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                  CONCAT12((byte)((uint)fVar84 >> 0x10) &
                                           ~(byte)((uint)iVar18 >> 0x10),
                                           CONCAT11((byte)((uint)fVar84 >> 8) &
                                                    ~(byte)((uint)iVar18 >> 8),
                                                    SUB41(fVar84,0) & ~(byte)iVar18)));
    DAT_02a6d6b8 = CONCAT17((char)((uint)fVar57 >> 0x18),
                            CONCAT16((char)((uint)fVar57 >> 0x10),
                                     CONCAT15((char)((uint)fVar57 >> 8),
                                              CONCAT14(SUB41(fVar57,0),
                                                       fVar38 + (float)CONCAT13((byte)((uint)fVar82
                                                                                      >> 0x18) &
                                                                                ~(byte)((uint)iVar11
                                                                                       >> 0x18),
                                                                                CONCAT12((byte)((
                                                  uint)fVar82 >> 0x10) &
                                                  ~(byte)((uint)iVar11 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar82 >> 8) &
                                                           ~(byte)((uint)iVar11 >> 8),
                                                           SUB41(fVar82,0) & ~(byte)iVar11)))))));
    DAT_02a6d6b0 = CONCAT17((char)((uint)fVar68 >> 0x18),
                            CONCAT16((char)((uint)fVar68 >> 0x10),
                                     CONCAT15((char)((uint)fVar68 >> 8),
                                              CONCAT14(SUB41(fVar68,0),
                                                       fVar37 + (float)CONCAT13((byte)((uint)fVar79
                                                                                      >> 0x18) &
                                                                                ~(byte)((uint)iVar36
                                                                                       >> 0x18),
                                                                                CONCAT12((byte)((
                                                  uint)fVar79 >> 0x10) &
                                                  ~(byte)((uint)iVar36 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar79 >> 8) &
                                                           ~(byte)((uint)iVar36 >> 8),
                                                           SUB41(fVar79,0) & ~(byte)iVar36)))))));
    DAT_02a6d6c8 = auVar61._8_8_;
    auVar70._0_8_ =
         CONCAT44(fVar71 + (float)CONCAT13((byte)((uint)fVar85 >> 0x18) &
                                           ~(byte)((uint)iVar24 >> 0x18),
                                           CONCAT12((byte)((uint)fVar85 >> 0x10) &
                                                    ~(byte)((uint)iVar24 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar85 >> 8) &
                                                             ~(byte)((uint)iVar24 >> 8),
                                                             SUB41(fVar85,0) & ~(byte)iVar24))),
                  fVar69 + (float)CONCAT13((byte)((uint)fVar62 >> 0x18) &
                                           ~(byte)((uint)iVar23 >> 0x18),
                                           CONCAT12((byte)((uint)fVar62 >> 0x10) &
                                                    ~(byte)((uint)iVar23 >> 0x10),
                                                    CONCAT11((byte)((uint)fVar62 >> 8) &
                                                             ~(byte)((uint)iVar23 >> 8),
                                                             SUB41(fVar62,0) & ~(byte)iVar23))));
    auVar70._8_4_ =
         fVar72 + (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                  CONCAT12((byte)((uint)fVar86 >> 0x10) &
                                           ~(byte)((uint)iVar25 >> 0x10),
                                           CONCAT11((byte)((uint)fVar86 >> 8) &
                                                    ~(byte)((uint)iVar25 >> 8),
                                                    SUB41(fVar86,0) & ~(byte)iVar25)));
    auVar70._12_4_ =
         fVar73 + (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                                  CONCAT12((byte)((uint)fVar87 >> 0x10) &
                                           ~(byte)((uint)iVar26 >> 0x10),
                                           CONCAT11((byte)((uint)fVar87 >> 8) &
                                                    ~(byte)((uint)iVar26 >> 8),
                                                    SUB41(fVar87,0) & ~(byte)iVar26)));
    DAT_02a6d6d8 = auVar70._8_8_;
    DAT_02a6d6e8 = CONCAT44(fVar47 + (float)CONCAT13((byte)((uint)fVar46 >> 0x18) &
                                                     ~(byte)((uint)iVar34 >> 0x18),
                                                     CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                                              ~(byte)((uint)iVar34 >> 0x10),
                                                              CONCAT11((byte)((uint)fVar46 >> 8) &
                                                                       ~(byte)((uint)iVar34 >> 8),
                                                                       SUB41(fVar46,0) &
                                                                       ~(byte)iVar34))),
                            fVar45 + (float)CONCAT13((byte)((uint)fVar44 >> 0x18) &
                                                     ~(byte)((uint)iVar33 >> 0x18),
                                                     CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                                              ~(byte)((uint)iVar33 >> 0x10),
                                                              CONCAT11((byte)((uint)fVar44 >> 8) &
                                                                       ~(byte)((uint)iVar33 >> 8),
                                                                       SUB41(fVar44,0) &
                                                                       ~(byte)iVar33))));
    DAT_02a6d6e0 = CONCAT44(fVar43 + (float)CONCAT13((byte)((uint)fVar42 >> 0x18) &
                                                     ~(byte)((uint)iVar32 >> 0x18),
                                                     CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                                              ~(byte)((uint)iVar32 >> 0x10),
                                                              CONCAT11((byte)((uint)fVar42 >> 8) &
                                                                       ~(byte)((uint)iVar32 >> 8),
                                                                       SUB41(fVar42,0) &
                                                                       ~(byte)iVar32))),
                            fVar41 + (float)CONCAT13((byte)((uint)fVar40 >> 0x18) &
                                                     ~(byte)((uint)iVar31 >> 0x18),
                                                     CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                                              ~(byte)((uint)iVar31 >> 0x10),
                                                              CONCAT11((byte)((uint)fVar40 >> 8) &
                                                                       ~(byte)((uint)iVar31 >> 8),
                                                                       SUB41(fVar40,0) &
                                                                       ~(byte)iVar31))));
    DAT_02a6d6c0 = auVar61._0_8_;
    DAT_02a6d6d0 = auVar70._0_8_;
    __cxa_guard_release(&DAT_02a6d630);
  }
  if (((DAT_02a6d638 & 1) == 0) && (iVar36 = __cxa_guard_acquire(&DAT_02a6d638), iVar36 != 0)) {
    DAT_02a6d6f0 = DAT_02a6d6b0;
    DAT_02a6d6f8 = DAT_02a6d6b8;
    DAT_02a6d700 = DAT_02a6d6d0;
    DAT_02a6d708 = DAT_02a6d6d8;
    DAT_02a6d710 = DAT_02a6d6c0;
    DAT_02a6d718 = DAT_02a6d6c8;
    DAT_02a6d740 = DAT_02a6d6b0;
    DAT_02a6d748 = DAT_02a6d6b8;
    DAT_02a6d730 = DAT_02a6d6d0;
    DAT_02a6d738 = DAT_02a6d6d8;
    DAT_02a6d760 = DAT_02a6d6c0;
    DAT_02a6d768 = DAT_02a6d6c8;
    DAT_02a6d720 = DAT_02a6d6e0;
    DAT_02a6d728 = DAT_02a6d6e8;
    DAT_02a6d750 = DAT_02a6d6e0;
    DAT_02a6d758 = DAT_02a6d6e8;
    __cxa_guard_release(&DAT_02a6d638);
  }
  fVar44 = (float)param_3[1];
  fVar46 = (float)((ulong)param_3[1] >> 0x20);
  fVar40 = (float)*param_3;
  fVar42 = (float)((ulong)*param_3 >> 0x20);
  fVar37 = (float)DAT_02a6d6f0 - fVar40;
  fVar68 = (float)((ulong)DAT_02a6d6f0 >> 0x20) - fVar42;
  fVar38 = (float)DAT_02a6d6f8 - fVar44;
  fVar57 = (float)((ulong)DAT_02a6d6f8 >> 0x20) - fVar46;
  fVar37 = fVar37 * fVar37;
  fVar68 = fVar68 * fVar68;
  uVar48 = (undefined1)((uint)fVar68 >> 8);
  uVar49 = (undefined1)((uint)fVar68 >> 0x10);
  uVar50 = (undefined1)((uint)fVar68 >> 0x18);
  fVar38 = fVar38 * fVar38;
  uVar51 = (undefined1)((uint)fVar38 >> 8);
  uVar52 = (undefined1)((uint)fVar38 >> 0x10);
  uVar53 = (undefined1)((uint)fVar38 >> 0x18);
  fVar57 = fVar57 * fVar57;
  uVar54 = (undefined1)((uint)fVar57 >> 8);
  uVar55 = (undefined1)((uint)fVar57 >> 0x10);
  uVar56 = (undefined1)((uint)fVar57 >> 0x18);
  auVar5[4] = SUB41(fVar68,0);
  auVar5._0_4_ = fVar37;
  auVar5[5] = uVar48;
  auVar5[6] = uVar49;
  auVar5[7] = uVar50;
  auVar5[8] = SUB41(fVar38,0);
  auVar5[9] = uVar51;
  auVar5[10] = uVar52;
  auVar5[0xb] = uVar53;
  auVar5[0xc] = SUB41(fVar57,0);
  auVar5[0xd] = uVar54;
  auVar5[0xe] = uVar55;
  auVar5[0xf] = uVar56;
  auVar6[4] = SUB41(fVar68,0);
  auVar6._0_4_ = fVar37;
  auVar6[5] = uVar48;
  auVar6[6] = uVar49;
  auVar6[7] = uVar50;
  auVar6[8] = SUB41(fVar38,0);
  auVar6[9] = uVar51;
  auVar6[10] = uVar52;
  auVar6[0xb] = uVar53;
  auVar6[0xc] = SUB41(fVar57,0);
  auVar6[0xd] = uVar54;
  auVar6[0xe] = uVar55;
  auVar6[0xf] = uVar56;
  auVar59 = NEON_ext(auVar5,auVar6,8,1);
  fVar37 = auVar59._0_4_ + fVar37 + auVar59._4_4_ + fVar68;
  fVar68 = (float)NEON_fminnm(fVar37,DAT_01d4c18c);
  puVar1 = &DAT_02a6d6f0;
  if (DAT_01d4c18c <= fVar37) {
    puVar1 = (undefined8 *)0x0;
  }
  fVar37 = (float)DAT_02a6d710 - fVar40;
  fVar38 = (float)((ulong)DAT_02a6d710 >> 0x20) - fVar42;
  fVar57 = (float)DAT_02a6d718 - fVar44;
  fVar62 = (float)((ulong)DAT_02a6d718 >> 0x20) - fVar46;
  fVar37 = fVar37 * fVar37;
  fVar38 = fVar38 * fVar38;
  uVar48 = (undefined1)((uint)fVar38 >> 8);
  uVar49 = (undefined1)((uint)fVar38 >> 0x10);
  uVar50 = (undefined1)((uint)fVar38 >> 0x18);
  fVar57 = fVar57 * fVar57;
  uVar51 = (undefined1)((uint)fVar57 >> 8);
  uVar52 = (undefined1)((uint)fVar57 >> 0x10);
  uVar53 = (undefined1)((uint)fVar57 >> 0x18);
  fVar62 = fVar62 * fVar62;
  uVar54 = (undefined1)((uint)fVar62 >> 8);
  uVar55 = (undefined1)((uint)fVar62 >> 0x10);
  uVar56 = (undefined1)((uint)fVar62 >> 0x18);
  auVar7[4] = SUB41(fVar38,0);
  auVar7._0_4_ = fVar37;
  auVar7[5] = uVar48;
  auVar7[6] = uVar49;
  auVar7[7] = uVar50;
  auVar7[8] = SUB41(fVar57,0);
  auVar7[9] = uVar51;
  auVar7[10] = uVar52;
  auVar7[0xb] = uVar53;
  auVar7[0xc] = SUB41(fVar62,0);
  auVar7[0xd] = uVar54;
  auVar7[0xe] = uVar55;
  auVar7[0xf] = uVar56;
  auVar8[4] = SUB41(fVar38,0);
  auVar8._0_4_ = fVar37;
  auVar8[5] = uVar48;
  auVar8[6] = uVar49;
  auVar8[7] = uVar50;
  auVar8[8] = SUB41(fVar57,0);
  auVar8[9] = uVar51;
  auVar8[10] = uVar52;
  auVar8[0xb] = uVar53;
  auVar8[0xc] = SUB41(fVar62,0);
  auVar8[0xd] = uVar54;
  auVar8[0xe] = uVar55;
  auVar8[0xf] = uVar56;
  auVar59 = NEON_ext(auVar7,auVar8,8,1);
  fVar57 = (float)DAT_02a6d730 - fVar40;
  fVar62 = (float)((ulong)DAT_02a6d730 >> 0x20) - fVar42;
  fVar64 = (float)DAT_02a6d738 - fVar44;
  fVar66 = (float)((ulong)DAT_02a6d738 >> 0x20) - fVar46;
  fVar37 = auVar59._0_4_ + fVar37 + auVar59._4_4_ + fVar38;
  uVar48 = SUB41(fVar37,0);
  uVar49 = (undefined1)((uint)fVar37 >> 8);
  uVar50 = (undefined1)((uint)fVar37 >> 0x10);
  uVar51 = (undefined1)((uint)fVar37 >> 0x18);
  auVar60._0_4_ = fVar57 * fVar57;
  auVar60._4_4_ = fVar62 * fVar62;
  auVar60._8_4_ = fVar64 * fVar64;
  auVar60._12_4_ = fVar66 * fVar66;
  if (fVar68 <= fVar37) {
    uVar48 = SUB41(fVar68,0);
    uVar49 = (undefined1)((uint)fVar68 >> 8);
    uVar50 = (undefined1)((uint)fVar68 >> 0x10);
    uVar51 = (undefined1)((uint)fVar68 >> 0x18);
  }
  auVar59 = NEON_ext(auVar60,auVar60,8,1);
  fVar40 = (float)DAT_02a6d750 - fVar40;
  fVar42 = (float)((ulong)DAT_02a6d750 >> 0x20) - fVar42;
  fVar44 = (float)DAT_02a6d758 - fVar44;
  fVar46 = (float)((ulong)DAT_02a6d758 >> 0x20) - fVar46;
  fVar38 = auVar59._0_4_ + auVar60._0_4_ + auVar59._4_4_ + auVar60._4_4_;
  fVar40 = fVar40 * fVar40;
  fVar42 = fVar42 * fVar42;
  fVar44 = fVar44 * fVar44;
  fVar46 = fVar46 * fVar46;
  puVar2 = &DAT_02a6d710;
  if (fVar68 <= fVar37) {
    puVar2 = puVar1;
  }
  bVar35 = (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) <= fVar38;
  uVar52 = SUB41(fVar38,0);
  uVar53 = (char)((uint)fVar38 >> 8);
  uVar54 = (char)((uint)fVar38 >> 0x10);
  uVar55 = (char)((uint)fVar38 >> 0x18);
  if (bVar35) {
    uVar52 = uVar48;
    uVar53 = uVar49;
    uVar54 = uVar50;
    uVar55 = uVar51;
  }
  auVar3._4_4_ = fVar42;
  auVar3._0_4_ = fVar40;
  auVar3._8_4_ = fVar44;
  auVar3._12_4_ = fVar46;
  auVar4._4_4_ = fVar42;
  auVar4._0_4_ = fVar40;
  auVar4._8_4_ = fVar44;
  auVar4._12_4_ = fVar46;
  auVar59 = NEON_ext(auVar3,auVar4,8,1);
  puVar1 = &DAT_02a6d730;
  if (bVar35) {
    puVar1 = puVar2;
  }
  puVar2 = &DAT_02a6d750;
  if ((float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) <=
      auVar59._0_4_ + fVar40 + auVar59._4_4_ + fVar42) {
    puVar2 = puVar1;
  }
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  param_1[1] = puVar2[1];
  *param_1 = *puVar2;
  param_2[1] = puVar2[3];
  *param_2 = puVar2[2];
  return;
}


