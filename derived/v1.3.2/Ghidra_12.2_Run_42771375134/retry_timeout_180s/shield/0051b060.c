/* Ghidra 12.2 retry of SWSH 1.3.2 shield function 0051b060; C-like pseudocode, not original game source. */


/* WARNING: Removing unreachable block (ram,0x0051cdc4) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0051b060(char *param_1,long *param_2,uint param_3,uint param_4,undefined4 param_5,
                void *param_6)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  long *plVar34;
  ulong uVar35;
  long *plVar36;
  undefined8 uVar37;
  ulong uVar38;
  ulong *puVar39;
  ulong *puVar40;
  undefined8 uVar41;
  undefined8 *puVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  char cVar46;
  undefined4 uVar47;
  uint uVar48;
  uint uVar49;
  long *plVar50;
  int *piVar51;
  undefined4 uVar52;
  int iVar53;
  long *plVar54;
  ulong uVar55;
  uint *puVar56;
  uint *puVar57;
  undefined8 uVar58;
  long lVar59;
  uint uVar60;
  uint uVar61;
  ulong uVar62;
  uint uVar63;
  size_t __n;
  uint uVar64;
  long lVar65;
  long lVar66;
  char *pcVar67;
  long lVar68;
  int *piVar69;
  uint uVar70;
  float fVar71;
  double dVar72;
  double dVar73;
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
  uint local_6f0;
  long *local_6e0;
  uint local_6d0;
  uint local_698;
  uint uStack_694;
  uint local_690;
  uint uStack_68c;
  uint local_688;
  uint local_684;
  undefined4 uStack_680;
  uint local_67c;
  uint local_678;
  int iStack_674;
  uint uStack_670;
  int iStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  uint uStack_654;
  ulong local_650;
  undefined8 local_648;
  undefined4 local_640;
  int iStack_63c;
  float fStack_638;
  char cStack_634;
  undefined1 uStack_633;
  undefined2 uStack_632;
  uint uStack_630;
  undefined1 uStack_62c;
  undefined1 uStack_62b;
  undefined2 uStack_62a;
  char cStack_628;
  char cStack_627;
  undefined2 uStack_626;
  float fStack_624;
  float fStack_620;
  uint local_61c;
  undefined4 local_618;
  uint local_614;
  undefined4 uStack_610;
  uint uStack_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined8 uStack_600;
  undefined4 local_5f8;
  undefined5 uStack_5f4;
  undefined3 local_5ef;
  undefined5 uStack_5ec;
  undefined8 local_5e4;
  undefined8 local_5dc;
  undefined4 local_5d4;
  undefined5 uStack_5d0;
  undefined3 local_5cb;
  undefined5 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined4 local_5b0;
  undefined5 uStack_5ac;
  undefined3 local_5a7;
  undefined5 uStack_5a4;
  undefined8 local_59c;
  undefined8 local_594;
  undefined4 local_58c;
  undefined5 uStack_588;
  undefined3 local_583;
  undefined5 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  undefined5 uStack_564;
  undefined3 local_55f;
  undefined5 uStack_55c;
  undefined8 local_554;
  undefined8 local_54c;
  undefined4 local_544;
  undefined5 uStack_540;
  undefined3 local_53b;
  undefined5 uStack_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined4 local_520;
  undefined5 uStack_51c;
  undefined3 local_517;
  undefined5 uStack_514;
  undefined8 local_50c;
  undefined8 local_504;
  undefined4 local_4fc;
  undefined5 uStack_4f8;
  undefined3 local_4f3;
  undefined5 uStack_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined5 uStack_4d4;
  undefined3 local_4cf;
  undefined5 uStack_4cc;
  undefined8 local_4c4;
  undefined8 local_4bc;
  undefined4 local_4b4;
  undefined5 uStack_4b0;
  undefined3 local_4ab;
  undefined5 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined4 local_490;
  undefined5 uStack_48c;
  undefined3 local_487;
  undefined5 uStack_484;
  undefined8 local_47c;
  undefined8 local_474;
  undefined4 local_46c;
  undefined5 uStack_468;
  undefined3 local_463;
  undefined5 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined5 uStack_444;
  undefined3 local_43f;
  undefined5 uStack_43c;
  undefined8 local_434;
  undefined8 local_42c;
  undefined4 local_424;
  undefined5 uStack_420;
  undefined3 local_41b;
  undefined5 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined5 uStack_3fc;
  undefined3 local_3f7;
  undefined5 uStack_3f4;
  undefined8 local_3ec;
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined5 uStack_3d8;
  undefined3 local_3d3;
  undefined5 uStack_3d0;
  undefined1 auStack_3a8 [16];
  uint local_398 [9];
  undefined4 local_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 local_364;
  undefined5 uStack_360;
  undefined3 uStack_35b;
  undefined5 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined5 uStack_33c;
  undefined3 local_337;
  undefined5 uStack_334;
  undefined8 local_32c;
  undefined8 local_324;
  undefined4 local_31c;
  undefined5 uStack_318;
  undefined3 local_313;
  undefined5 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined5 uStack_2f4;
  undefined3 local_2ef;
  undefined5 uStack_2ec;
  undefined8 local_2e4;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined5 uStack_2d0;
  undefined3 local_2cb;
  undefined5 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined5 uStack_2ac;
  undefined3 local_2a7;
  undefined5 uStack_2a4;
  undefined8 local_29c;
  undefined8 local_294;
  undefined4 local_28c;
  undefined5 uStack_288;
  undefined3 local_283;
  undefined5 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined5 uStack_264;
  undefined3 local_25f;
  undefined5 uStack_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined4 local_244;
  undefined5 uStack_240;
  undefined3 local_23b;
  undefined5 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined5 uStack_21c;
  undefined3 local_217;
  undefined5 uStack_214;
  undefined8 local_20c;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined5 uStack_1f8;
  undefined3 local_1f3;
  undefined5 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined5 uStack_1d4;
  undefined3 local_1cf;
  undefined5 uStack_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined5 uStack_1b0;
  undefined3 local_1ab;
  undefined5 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined5 uStack_18c;
  undefined3 local_187;
  undefined5 uStack_184;
  undefined8 local_17c;
  undefined8 local_174;
  undefined4 local_16c;
  undefined5 uStack_168;
  undefined3 local_163;
  undefined5 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined5 uStack_144;
  undefined3 local_13f;
  undefined5 uStack_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined5 uStack_120;
  undefined3 uStack_11b;
  undefined5 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined5 uStack_fc;
  undefined3 local_f7;
  undefined5 uStack_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined5 uStack_d8;
  undefined3 local_d3;
  undefined5 uStack_d0;
  uint local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  uint local_b8;
  uint local_b4;
  long local_b0 [2];
  
  puVar22 = PTR_DAT_02713978;
  puVar21 = PTR_DAT_02713970;
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x107b);
    FUN_00517ae0("==== CPostEffect::Initialize() ====\n");
  }
  if (*param_1 != '\0') {
    if (*(int *)puVar21 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return -1;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x1096);
    FUN_00517ae0(
                "CPostEffect::Initialize(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                );
    return -1;
  }
  plVar50 = *(long **)(param_1 + 0x40);
  *param_1 = '\0';
  param_1[2] = '\0';
  plVar54 = (long *)(param_1 + 0x18);
  plVar34 = (long *)*plVar54;
  uVar63 = 0;
  plVar36 = plVar34;
  if (plVar50 != (long *)0x0) {
    plVar36 = plVar50;
  }
  if ((plVar36 != (long *)0x0) && (plVar34 != (long *)0x0)) {
    uVar35 = (**(code **)(*plVar34 + 0x20))(plVar34,plVar36);
    uVar63 = (uint)(uVar35 >> 0x1f) & 1 ^ 1;
    plVar50 = *(long **)(param_1 + 0x40);
  }
  if (plVar50 == (long *)0x0) {
    FUN_00519740(param_1,plVar36);
    local_b0[0] = *param_2;
    if (local_b0[0] != 0) goto LAB_0051b16c;
LAB_0051b1cc:
    iVar28 = FUN_00522a90(param_1,local_b0,param_2);
    if (iVar28 < 0) {
      return 1;
    }
    lVar65 = FUN_00523210(param_1,param_2[0xc],param_2[0xd],*(undefined8 *)(param_1 + 0x11a8));
    if ((*(int *)puVar21 == 0) || (*(int *)puVar22 == 0)) goto LAB_0051b170;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x10c7);
    FUN_00517ae0("CPostEffect::Initialize(): Create initGpuDeviceFramebuffer succeeded.\n");
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    if (param_6 == (void *)0x0) goto LAB_0051b22c;
LAB_0051b17c:
    memcpy(param_1 + 0x2b8,param_6,0x148);
  }
  else {
    local_b0[0] = *param_2;
    if (local_b0[0] == 0) goto LAB_0051b1cc;
LAB_0051b16c:
    lVar65 = param_2[1];
LAB_0051b170:
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    if (param_6 != (void *)0x0) goto LAB_0051b17c;
LAB_0051b22c:
    param_1[0x2c0] = '\0';
    param_1[0x2c1] = '\0';
    param_1[0x2c2] = '\0';
    param_1[0x2c3] = '\0';
    param_1[0x2b8] = '\x01';
    param_1[0x2b9] = '\0';
    param_1[0x2ba] = '\0';
    param_1[699] = '\0';
    param_1[700] = '\0';
    param_1[0x2bd] = '\0';
    param_1[0x2be] = '\0';
    param_1[0x2bf] = '\0';
    param_1[0x2e0] = '\0';
    param_1[0x2e1] = '\0';
    param_1[0x2e2] = '\0';
    param_1[0x2e3] = '\0';
    param_1[0x2e4] = '\0';
    param_1[0x2e5] = '\0';
    param_1[0x2e6] = '\0';
    param_1[0x2e7] = '\0';
    param_1[0x2d8] = '\0';
    param_1[0x2d9] = '\0';
    param_1[0x2da] = '\0';
    param_1[0x2db] = '\0';
    param_1[0x2dc] = '\0';
    param_1[0x2dd] = '\0';
    param_1[0x2de] = '\0';
    param_1[0x2df] = '\0';
    param_1[0x2d0] = '\0';
    param_1[0x2d1] = '\0';
    param_1[0x2d2] = '\0';
    param_1[0x2d3] = '\0';
    param_1[0x2d4] = '\0';
    param_1[0x2d5] = '\0';
    param_1[0x2d6] = '\0';
    param_1[0x2d7] = '\0';
    param_1[0x2c8] = '\0';
    param_1[0x2c9] = '\0';
    param_1[0x2ca] = '\0';
    param_1[0x2cb] = '\0';
    param_1[0x2cc] = '\0';
    param_1[0x2cd] = '\0';
    param_1[0x2ce] = '\0';
    param_1[0x2cf] = '\0';
    param_1[0x2e8] = '\x01';
    param_1[0x2ec] = -1;
    param_1[0x2ed] = -1;
    param_1[0x2ee] = -1;
    param_1[0x2ef] = -1;
    param_1[0x2f0] = '\x01';
    param_1[0x2f1] = '\0';
    param_1[0x2f2] = '\0';
    param_1[0x2f3] = '\0';
    param_1[0x30c] = '\0';
    param_1[0x30d] = '\0';
    param_1[0x30e] = '\0';
    param_1[0x30f] = '\0';
    param_1[0x310] = '\0';
    param_1[0x311] = '\0';
    param_1[0x312] = '\0';
    param_1[0x313] = '\0';
    param_1[0x304] = '\0';
    param_1[0x305] = '\0';
    param_1[0x306] = '\0';
    param_1[0x307] = '\0';
    param_1[0x308] = '\0';
    param_1[0x309] = '\0';
    param_1[0x30a] = '\0';
    param_1[0x30b] = '\0';
    param_1[0x2f4] = '\0';
    param_1[0x2f5] = '\0';
    param_1[0x2f6] = '\0';
    param_1[0x2f7] = '\0';
    param_1[0x2f8] = '\0';
    param_1[0x2f9] = '\0';
    param_1[0x2fa] = '\0';
    param_1[0x2fb] = '\0';
    param_1[0x2fc] = '\0';
    param_1[0x2fd] = '\0';
    param_1[0x2fe] = '\0';
    param_1[0x2ff] = '\0';
    param_1[0x300] = '\0';
    param_1[0x301] = '\0';
    param_1[0x302] = '\0';
    param_1[0x303] = '\0';
    param_1[0x318] = '\0';
    param_1[0x319] = '\0';
    param_1[0x31a] = -0x80;
    param_1[0x31b] = '>';
    param_1[0x31c] = '\0';
    param_1[0x31d] = '\0';
    param_1[0x31e] = '\0';
    param_1[799] = '\0';
    param_1[800] = '\x01';
    param_1[0x321] = '\x01';
    param_1[0x314] = '\0';
    param_1[0x315] = '\0';
    param_1[0x316] = '\0';
    param_1[0x317] = '\0';
    param_1[0x324] = '\b';
    param_1[0x325] = '\0';
    param_1[0x326] = '\0';
    param_1[0x327] = '\0';
    param_1[0x328] = '\0';
    param_1[0x329] = '\0';
    param_1[0x32a] = -0x80;
    param_1[0x32b] = '>';
    param_1[0x380] = '\0';
    param_1[0x381] = '\0';
    param_1[0x382] = '\0';
    param_1[899] = '\0';
    param_1[900] = -1;
    param_1[0x385] = -1;
    param_1[0x386] = -1;
    param_1[0x387] = -1;
    param_1[0x388] = -0x66;
    param_1[0x389] = -0x67;
    param_1[0x38a] = 'Y';
    param_1[0x38b] = '?';
    param_1[0x38c] = '\0';
    param_1[0x38d] = '\0';
    param_1[0x38e] = '@';
    param_1[0x38f] = '?';
    param_1[0x390] = '\0';
    param_1[0x391] = '\0';
    param_1[0x392] = '\0';
    param_1[0x393] = '\0';
    param_1[0x394] = '\0';
    param_1[0x395] = '\0';
    param_1[0x396] = -0x80;
    param_1[0x397] = '?';
    param_1[0x330] = '\x01';
    param_1[0x331] = '\0';
    param_1[0x332] = '\0';
    param_1[0x333] = '\0';
    param_1[0x334] = '\0';
    param_1[0x335] = '\0';
    param_1[0x336] = '\0';
    param_1[0x337] = '\0';
    param_1[0x398] = '\0';
    param_1[0x399] = '\0';
    param_1[0x39a] = -0x80;
    param_1[0x39b] = '?';
    param_1[0x32c] = '\0';
    param_1[0x32d] = '\0';
    param_1[0x32e] = '\0';
    param_1[0x32f] = '\0';
    param_1[0x338] = '\0';
    param_1[0x339] = '\0';
    param_1[0x33a] = '\0';
    param_1[0x33b] = '\0';
    param_1[0x33c] = '\0';
    param_1[0x33d] = '\0';
    param_1[0x33e] = '\0';
    param_1[0x33f] = '\0';
    param_1[0x340] = -1;
    param_1[0x341] = -1;
    param_1[0x342] = -1;
    param_1[0x343] = -1;
    param_1[0x344] = -1;
    param_1[0x345] = -1;
    param_1[0x346] = -1;
    param_1[0x347] = -1;
    param_1[0x2c4] = '\0';
    param_1[0x2c5] = '\0';
    param_1[0x2c6] = '\0';
    param_1[0x2c7] = '\0';
    param_1[0x39c] = '\0';
    param_1[0x39d] = '\0';
    param_1[0x39e] = '\0';
    param_1[0x39f] = '\0';
    param_1[0x3a0] = '\0';
    param_1[0x3a1] = '\0';
    param_1[0x3a2] = '\0';
    param_1[0x3a3] = '\0';
    param_1[0x378] = -1;
    param_1[0x379] = -1;
    param_1[0x37a] = -1;
    param_1[0x37b] = -1;
    param_1[0x37c] = -1;
    param_1[0x37d] = -1;
    param_1[0x37e] = -1;
    param_1[0x37f] = -1;
    param_1[0x370] = -1;
    param_1[0x371] = -1;
    param_1[0x372] = -1;
    param_1[0x373] = -1;
    param_1[0x374] = -1;
    param_1[0x375] = -1;
    param_1[0x376] = -1;
    param_1[0x377] = -1;
    param_1[0x368] = -1;
    param_1[0x369] = -1;
    param_1[0x36a] = -1;
    param_1[0x36b] = -1;
    param_1[0x36c] = -1;
    param_1[0x36d] = -1;
    param_1[0x36e] = -1;
    param_1[0x36f] = -1;
    param_1[0x360] = -1;
    param_1[0x361] = -1;
    param_1[0x362] = -1;
    param_1[0x363] = -1;
    param_1[0x364] = -1;
    param_1[0x365] = -1;
    param_1[0x366] = -1;
    param_1[0x367] = -1;
    param_1[0x358] = -1;
    param_1[0x359] = -1;
    param_1[0x35a] = -1;
    param_1[0x35b] = -1;
    param_1[0x35c] = -1;
    param_1[0x35d] = -1;
    param_1[0x35e] = -1;
    param_1[0x35f] = -1;
    param_1[0x350] = -1;
    param_1[0x351] = -1;
    param_1[0x352] = -1;
    param_1[0x353] = -1;
    param_1[0x354] = -1;
    param_1[0x355] = -1;
    param_1[0x356] = -1;
    param_1[0x357] = -1;
    param_1[0x348] = -1;
    param_1[0x349] = -1;
    param_1[0x34a] = -1;
    param_1[0x34b] = -1;
    param_1[0x34c] = -1;
    param_1[0x34d] = -1;
    param_1[0x34e] = -1;
    param_1[0x34f] = -1;
    param_1[0x3d4] = '\0';
    param_1[0x3d5] = '\x01';
    param_1[0x3d6] = '\0';
    param_1[0x3d7] = '\0';
    param_1[0x3a4] = '\0';
    param_1[0x3b8] = '\0';
    param_1[0x3b9] = '\0';
    param_1[0x3ba] = '\0';
    param_1[0x3bb] = '\0';
    param_1[0x3b0] = '\0';
    param_1[0x3b1] = '\0';
    param_1[0x3b2] = '\0';
    param_1[0x3b3] = '\0';
    param_1[0x3b4] = '\0';
    param_1[0x3b5] = '\0';
    param_1[0x3b6] = '\0';
    param_1[0x3b7] = '\0';
    param_1[0x3a8] = '\0';
    param_1[0x3a9] = '\0';
    param_1[0x3aa] = '\0';
    param_1[0x3ab] = '\0';
    param_1[0x3ac] = '\0';
    param_1[0x3ad] = '\0';
    param_1[0x3ae] = '\0';
    param_1[0x3af] = '\0';
    param_1[0x3bc] = '\0';
    param_1[0x3bd] = '\0';
    param_1[0x3be] = '\0';
    param_1[0x3bf] = -0x80;
    param_1[0x3d0] = '\0';
    param_1[0x3d1] = '\0';
    param_1[0x3d2] = '\0';
    param_1[0x3d3] = '\0';
    param_1[0x3c8] = '\0';
    param_1[0x3c9] = '\0';
    param_1[0x3ca] = '\0';
    param_1[0x3cb] = '\0';
    param_1[0x3cc] = '\0';
    param_1[0x3cd] = '\0';
    param_1[0x3ce] = '\0';
    param_1[0x3cf] = '\0';
    param_1[0x3c0] = '\0';
    param_1[0x3c1] = '\0';
    param_1[0x3c2] = '\0';
    param_1[0x3c3] = '\0';
    param_1[0x3c4] = '\0';
    param_1[0x3c5] = '\0';
    param_1[0x3c6] = '\0';
    param_1[0x3c7] = '\0';
    param_1[0x3d8] = '@';
    param_1[0x3d9] = '\0';
    param_1[0x3da] = '\0';
    param_1[0x3db] = '\0';
    param_1[0x3f8] = '\0';
    param_1[0x3f9] = '\0';
    param_1[0x3fa] = '\0';
    param_1[0x3fb] = '\0';
    param_1[0x3ec] = '\0';
    param_1[0x3ed] = '\0';
    param_1[0x3ee] = '\0';
    param_1[0x3ef] = '\0';
    param_1[0x3f0] = '\0';
    param_1[0x3f1] = '\0';
    param_1[0x3f2] = '\0';
    param_1[0x3f3] = '\0';
    param_1[0x3f4] = '\0';
    param_1[0x3e4] = '\0';
    param_1[0x3e5] = '\0';
    param_1[0x3e6] = '\0';
    param_1[999] = '\0';
    param_1[1000] = '\0';
    param_1[0x3e9] = '\0';
    param_1[0x3ea] = '\0';
    param_1[0x3eb] = '\0';
    param_1[0x3dc] = '\0';
    param_1[0x3dd] = '\0';
    param_1[0x3de] = '\0';
    param_1[0x3df] = '\0';
    param_1[0x3e0] = '\0';
    param_1[0x3e1] = '\0';
    param_1[0x3e2] = '\0';
    param_1[0x3e3] = '\0';
    param_1[0x3fc] = '\0';
    param_1[0x3fd] = '\0';
    param_1[0x3fe] = '\0';
    param_1[0x3ff] = -0x80;
  }
  pcVar67 = param_1 + 0xe0;
  FUN_0053c590(param_1 + 0xd8,*(undefined8 *)pcVar67);
  param_1[0xe8] = '\0';
  param_1[0xe9] = '\0';
  param_1[0xea] = '\0';
  param_1[0xeb] = '\0';
  param_1[0xec] = '\0';
  param_1[0xed] = '\0';
  param_1[0xee] = '\0';
  param_1[0xef] = '\0';
  *(char **)(param_1 + 0xd8) = pcVar67;
  pcVar67[0] = '\0';
  pcVar67[1] = '\0';
  pcVar67[2] = '\0';
  pcVar67[3] = '\0';
  pcVar67[4] = '\0';
  pcVar67[5] = '\0';
  pcVar67[6] = '\0';
  pcVar67[7] = '\0';
  pcVar67 = param_1 + 0xf8;
  FUN_0053c540(param_1 + 0xf0,*(undefined8 *)pcVar67);
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  *(char **)(param_1 + 0xf0) = pcVar67;
  pcVar67[0] = '\0';
  pcVar67[1] = '\0';
  pcVar67[2] = '\0';
  pcVar67[3] = '\0';
  pcVar67[4] = '\0';
  pcVar67[5] = '\0';
  pcVar67[6] = '\0';
  pcVar67[7] = '\0';
  FUN_0053c4f0(param_1 + 0x108,*(undefined8 *)(param_1 + 0x110));
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  piVar69 = (int *)(param_1 + 0x400);
  *(char **)(param_1 + 0x108) = param_1 + 0x110;
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  memcpy(piVar69,param_1 + 0x2b8,0x148);
  *(undefined4 *)(param_1 + 0x2b0) = param_5;
  *(undefined4 *)(param_1 + 0x2b4) = param_5;
  param_1[0x6a8] = '\0';
  puVar21 = PTR_DAT_02713970;
  param_1[0x6a9] = '\0';
  param_1[0x6aa] = '\0';
  param_1[0x6ab] = '\0';
  param_1[0x6ac] = '\0';
  param_1[0x6ad] = '\0';
  param_1[0x6ae] = '\0';
  param_1[0x6af] = '\0';
  if (*param_1 == '\0') {
    param_1[10] = '\0';
    puVar21 = PTR_DAT_02713970;
  }
  else if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x9f8b);
    FUN_00517ae0(
                "CPostEffect::SetRenderSceneHeightReverse_Gcm(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                );
  }
  if ((int)param_3 < 0) {
    if (*(int *)puVar21 == 0) {
      return -6;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return -6;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x1120);
    pcVar67 = 
    "CPostEffect::Initialize(): Argment iGlareQuality must be greater than or equal to 0.\n";
    goto LAB_0051b890;
  }
  iVar28 = *(int *)(param_1 + 0x540);
  if (iVar28 - 1U < 2) {
    param_1[0x53c] = '\x01';
    uVar64 = *(uint *)(param_1 + 0x2b4);
    if ((uVar64 & 0xf) != 0) goto LAB_0051b474;
LAB_0051b454:
    uVar64 = uVar64 | 0xf;
    *(uint *)(param_1 + 0x2b4) = uVar64;
    if ((uVar64 & 1) == 0) goto LAB_0051b478;
LAB_0051b460:
    uVar49 = 1;
LAB_0051b4e8:
    uVar64 = uVar64 & 0xfffffff0 | uVar49;
    *(uint *)(param_1 + 0x2b4) = uVar64;
  }
  else {
    uVar64 = *(uint *)(param_1 + 0x2b4);
    if ((uVar64 & 0xf) == 0) goto LAB_0051b454;
LAB_0051b474:
    if ((uVar64 & 1) != 0) goto LAB_0051b460;
LAB_0051b478:
    if ((uVar64 >> 1 & 1) != 0) {
      uVar49 = 2;
      goto LAB_0051b4e8;
    }
    if ((uVar64 >> 2 & 1) != 0) {
      uVar49 = 4;
      goto LAB_0051b4e8;
    }
    if ((uVar64 >> 3 & 1) != 0) {
      uVar49 = 8;
      goto LAB_0051b4e8;
    }
  }
  if ((uVar64 & 0x70) == 0) {
    bVar18 = 0;
    uVar49 = uVar64 | 0x70;
    *(uint *)(param_1 + 0x2b4) = uVar49;
    if ((uVar64 & 0xf) != 8) goto LAB_0051b50c;
joined_r0x0051b55c:
    if ((uVar49 >> 6 & 1) == 0) {
      if ((uVar49 >> 5 & 1) == 0) {
        if ((uVar49 >> 4 & 1) == 0) goto LAB_0051b57c;
LAB_0051b548:
        uVar49 = uVar49 & 0xffffff8f | 0x10;
      }
      else {
LAB_0051b564:
        uVar49 = uVar49 & 0xffffff8f | 0x20;
      }
    }
    else {
LAB_0051b570:
      uVar49 = uVar49 & 0xffffff8f | 0x40;
    }
    *(uint *)(param_1 + 0x2b4) = uVar49;
  }
  else {
    bVar18 = 1;
    uVar49 = uVar64;
    if ((uVar64 & 0xf) == 8) goto joined_r0x0051b55c;
LAB_0051b50c:
    if ((uVar64 & 0xf) == 1) {
      if ((uVar49 >> 4 & 1) != 0) goto LAB_0051b548;
      if ((uVar49 >> 5 & 1) != 0) goto LAB_0051b564;
      if ((uVar49 >> 6 & 1) == 0) goto LAB_0051b57c;
      goto LAB_0051b570;
    }
    if ((uVar49 & 0xe) != 0) goto joined_r0x0051b55c;
  }
LAB_0051b57c:
  bVar27 = (bool)(bVar18 | (uVar49 & 0x40) == 0);
  if (!bVar27) {
    uVar49 = uVar49 | 0x80;
  }
  uVar64 = uVar49 & 0xffffff7f;
  if ((uVar49 & 0x40) != 0) {
    uVar64 = uVar49;
  }
  uVar48 = uVar64 | 0x400;
  if (iVar28 != 2) {
    uVar48 = uVar64;
  }
  if ((((uVar49 >> 6 & 1) == 0) || (!bVar27)) || (iVar28 == 2)) {
    *(uint *)(param_1 + 0x2b4) = uVar48;
    iVar28 = *piVar69;
  }
  else {
    iVar28 = *piVar69;
  }
  if (iVar28 < 1) {
    if (*(int *)puVar21 == 0) {
      return -6;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return -6;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x11f0);
    pcVar67 = 
    "CPostEffect::Initialize(): PFX_INITPARAM::m_nEffectViews must be greater than or equal to 0.\n"
    ;
    goto LAB_0051b890;
  }
  uVar64 = *(uint *)(param_1 + 0x2f8);
  if (0xf < (int)uVar64) {
    uVar64 = 0x10;
  }
  *(uint *)(param_1 + 0x440) = uVar64 & ((int)uVar64 >> 0x1f ^ 0xffffffffU);
  if ((uVar48 >> 0x12 & 1) == 0) {
    if ((uVar48 >> 0x13 & 1) != 0) goto LAB_0051b6e8;
LAB_0051b5e8:
    cVar46 = param_1[0x1c7];
  }
  else {
    iVar28 = *(int *)(param_1 + 0x444);
    if (iVar28 < 2) {
      iVar28 = 1;
    }
    *(int *)(param_1 + 0x444) = iVar28;
    if ((uVar48 >> 0x13 & 1) == 0) goto LAB_0051b5e8;
LAB_0051b6e8:
    iVar28 = *(int *)(param_1 + 0x444);
    if (iVar28 < 3) {
      iVar28 = 2;
    }
    *(int *)(param_1 + 0x444) = iVar28;
    cVar46 = param_1[0x1c7];
  }
  if (cVar46 != '\0') {
    iVar28 = *(int *)(param_1 + 0x444);
    if (iVar28 < 2) {
      iVar28 = 1;
    }
    *(int *)(param_1 + 0x444) = iVar28;
  }
  bVar18 = (byte)(uVar48 >> 0x12) & 1;
  param_1[0x1bf] = bVar18;
  param_1[0x1bc] = '\0';
  param_1[0x1bd] = '\0';
  param_1[0xd40] = '\0';
  param_1[0xd70] = '\0';
  param_1[0xd71] = '\0';
  param_1[0xd72] = '\0';
  param_1[0xd73] = '\0';
  param_1[0xd74] = '\0';
  param_1[0xd75] = '\0';
  param_1[0xd76] = '\0';
  param_1[0xd77] = '\0';
  if (((uVar48 >> 0x12 & 1) != 0) &&
     ((param_1[0x1bc] = '\x01', (uVar48 >> 0x15 & 1) != 0 || (*(int *)(param_1 + 0x504) != 0)))) {
    param_1[0x1bd] = '\x01';
  }
  bVar19 = (byte)(uVar48 >> 0x1a) & 1;
  param_1[0x1c3] = bVar19;
  param_1[0x1c2] = bVar19;
  param_1[0x1c1] = '\x01';
  param_1[0x1c4] = bVar18;
  param_1[0x1c5] = bVar18;
  param_1[0x1b9] = bVar18;
  param_1[0x1ba] = bVar18;
  param_1[0x1d1] = bVar18;
  param_1[0x1d2] = (byte)(uVar48 >> 0xd) & 1;
  param_1[0x1ca] = '\0';
  param_1[0x1c8] = '\0';
  param_1[0x1c9] = '\0';
  if ((uVar48 >> 0x1b & 1) != 0) {
    param_1[0x1c8] = '\x01';
    if ((int)*(uint *)(param_1 + 0x544) < 0) {
      param_1[0x544] = '\x01';
      param_1[0x545] = '\0';
      param_1[0x546] = '\0';
      param_1[0x547] = '\0';
    }
    else if ((*(uint *)(param_1 + 0x544) >> 1 & 1) != 0) {
      param_1[0x1ca] = '\x01';
    }
    param_1[0x1c9] = '\x01';
  }
  param_1[0x1bb] = bVar18;
  param_1[0x1c0] = bVar18;
  param_1[0x1cb] = bVar18;
  param_1[0x1d0] = bVar18;
  param_1[0x1cc] = (byte)(uVar48 >> 0xf) & 1;
  bVar18 = (byte)(uVar48 >> 10) & 1;
  param_1[0x1cd] = bVar18;
  param_1[0x1cf] = bVar18;
  param_1[0x1d3] = '\0';
  if (((uVar48 >> 0xb & 1) != 0) && (param_1[0x1d3] = '\x01', (uVar48 >> 0x10 & 1) != 0)) {
    if (*(int *)puVar21 == 0) {
      return -6;
    }
    if (*(int *)PTR_DAT_027139c0 == 0) {
      return -6;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x1334);
    pcVar67 = 
    "CPostEffect::Initialize(): PFXINIT_DEPTHTEXTURE cannot be set with PFXINIT_RENDERSCENE_EXTERNAL\n"
    ;
LAB_0051b890:
    FUN_00517ae0(pcVar67);
    return -6;
  }
  local_398[4] = 0;
  local_398[2] = 0;
  local_398[3] = 0;
  local_398[0] = 0;
  local_398[1] = 0;
  local_398[8] = *(uint *)(param_2 + 2);
  local_374 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_370 = (undefined4)lVar65;
  uStack_36c = (undefined4)((ulong)lVar65 >> 0x20);
  local_398[6] = (uint)*(undefined8 *)(param_1 + 0x10);
  local_398[7] = (uint)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  if (uVar63 == 0) {
    plVar36 = (long *)FUN_00542d10(local_398,local_b0[0]);
    *plVar54 = (long)plVar36;
    if (plVar36 == (long *)0x0) {
      if (*(int *)puVar21 == 0) {
        return -2;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return -2;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x1381);
      FUN_00517ae0("CPostEffect::Initialize(): IGPUDevice::CreateDevice() failed.\n");
      return -2;
    }
  }
  else {
    iVar28 = (**(code **)(*(long *)*plVar54 + 0x30))((long *)*plVar54,local_398);
    if (iVar28 < 0) {
      if ((*(int *)puVar21 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x138e)
        ;
        FUN_00517ae0("CPostEffect::Initialize(): m_pGPUDevice->Reset() failed.\n");
      }
      goto LAB_0052047c;
    }
    plVar36 = (long *)*plVar54;
  }
  (**(code **)(*plVar36 + 0x60))(plVar36,param_1 + 0x20);
  (**(code **)(**(long **)(param_1 + 0x18) + 0x58))(*(long **)(param_1 + 0x18),param_1 + 0x28);
  puVar21 = PTR_PTR_02713988;
  uVar37 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x18,
                        "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x13b4,0);
  *(undefined8 *)(param_1 + 0x30) = uVar37;
  uVar37 = FUN_005b9a50(*(undefined8 *)puVar21,0x18,
                        "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x13b5,0);
  *(undefined8 *)(param_1 + 0x38) = uVar37;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x40))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  plVar36 = *(long **)(param_1 + 0x28);
  if (plVar36 == (long *)0x0) {
    puVar42 = *(undefined8 **)(param_1 + 0x30);
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    uVar37 = *puVar42;
    uVar41 = puVar42[2];
    puVar6[1] = puVar42[1];
    puVar6[2] = uVar41;
    *puVar6 = uVar37;
    **(undefined4 **)(param_1 + 0x38) = 0;
  }
  else {
    (**(code **)(*plVar36 + 0x40))(plVar36,*(undefined8 *)(param_1 + 0x38));
  }
  param_1[0x1be] = '\0';
  if ((*(char *)(*(long *)(param_1 + 0x18) + 0x14efb) == '\0') &&
     (((byte)param_1[0x2b6] >> 4 & 1) != 0)) {
    param_1[0x1be] = '\x01';
  }
  if ((*(code **)PTR_DAT_027139c8 != (code *)0x0) && ((*PTR_DAT_027139d0 & 1) != 0)) {
    (**(code **)PTR_DAT_027139c8)(1,*(undefined8 *)PTR_DAT_027139d8);
  }
  uVar64 = *(uint *)(param_1 + 0x2b4);
  bVar27 = false;
  uVar49 = uVar64 >> 1 & 1;
  param_1[0x598] = (char)uVar49;
  param_1[0x597] = (byte)(uVar64 >> 2) & 1;
  uVar48 = uVar64 >> 3 & 1;
  bVar18 = (byte)uVar48;
  param_1[0x599] = bVar18;
  param_1[0x59a] = '\0';
  if ((uVar64 >> 8 & 1) == 0) {
    uVar35 = (ulong)uVar64;
  }
  else {
    uVar35 = (ulong)uVar64;
    if (((uVar64 >> 1 | uVar64 >> 2) & 1) != 0) {
      bVar27 = true;
      uVar35 = (ulong)(uVar64 | 0x4000);
      param_1[0x59a] = '\x01';
      *(uint *)(param_1 + 0x2b4) = uVar64 | 0x4000;
    }
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + 8);
  if (*(uint *)(param_1 + 0x2c8) != 0) {
    uVar2 = *(uint *)(param_1 + 0x2c8);
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x30) + 0xc);
  if (*(uint *)(param_1 + 0x2cc) != 0) {
    uVar3 = *(uint *)(param_1 + 0x2cc);
  }
  uVar70 = uVar2;
  if (*(uint *)(param_1 + 0x2d0) != 0) {
    uVar70 = *(uint *)(param_1 + 0x2d0);
  }
  uVar44 = uVar3;
  if (*(uint *)(param_1 + 0x2d4) != 0) {
    uVar44 = *(uint *)(param_1 + 0x2d4);
  }
  uVar45 = (uint)uVar35;
  uVar60 = uVar2;
  if ((uVar35 & 0x200) != 0) {
    uVar60 = 0x500;
  }
  if (*(int *)(param_1 + 0x300) != 0) {
    uVar60 = *(uint *)(param_1 + 0x448);
  }
  uVar7 = *(uint *)(param_1 + 0x450);
  uVar8 = *(uint *)(param_1 + 0x480);
  fVar83 = (float)uVar2;
  uVar9 = *(uint *)(param_1 + 0x4f4);
  uVar10 = *(uint *)(param_1 + 0x500);
  uVar11 = *(uint *)(param_1 + 0x50c);
  iVar33 = *(int *)(param_1 + 0x454);
  uVar12 = *(uint *)(param_1 + 0x484);
  uVar13 = *(uint *)(param_1 + 0x48c);
  fVar77 = *(float *)(param_1 + 0x420);
  fVar79 = *(float *)(param_1 + 0x44c);
  fVar84 = *(float *)(param_1 + 0x47c);
  fVar78 = *(float *)(param_1 + 0x4f0);
  fVar76 = *(float *)(param_1 + 0x4fc);
  fVar82 = *(float *)(param_1 + 0x508);
  fVar80 = *(float *)(param_1 + 0x4e8);
  iVar53 = *(int *)(param_1 + 0x4e4);
  if (fVar77 <= 0.0) {
    fVar77 = fVar83 / (float)uVar3;
  }
  *(float *)(param_1 + 0x420) = fVar77;
  uVar61 = *(uint *)(param_1 + 700);
  iVar28 = *(int *)(param_1 + 0x2c4);
  cVar46 = *PTR_DAT_027139e0;
  uVar31 = uVar61;
  if (bVar27) {
    uVar31 = 0;
  }
  local_6d0 = *(uint *)(param_1 + 0x310);
  if (*(uint *)(param_1 + 0x2c0) != 0) {
    uVar31 = *(uint *)(param_1 + 0x2c0);
  }
  uVar4 = uVar31;
  if (bVar27) {
    uVar4 = 0;
  }
  if (6 < (int)param_3) {
    param_3 = 7;
  }
  uVar43 = 10;
  if (cVar46 != '\0') {
    uVar43 = 0x13;
  }
  iVar30 = *(int *)(param_1 + 0x314);
  if ((int)uVar43 <= (int)param_4) {
    param_4 = uVar43;
  }
  if (uVar61 != 0) {
    uVar4 = uVar61;
  }
  uVar14 = *(uint *)(param_1 + 0x3b0);
  uVar43 = param_4 >> 0x1f ^ 1;
  uVar61 = (uint)(*(char *)(*(long *)(param_1 + 0x18) + 0x14ef4) != '\0') & uVar45 >> 0x10;
  uVar47 = *(undefined4 *)(param_1 + 0x2f0);
  uVar52 = *(undefined4 *)(param_1 + 0x2f4);
  uVar15 = *(uint *)(param_1 + 0x3c8);
  uVar16 = *(uint *)(param_1 + 0x3cc);
  param_1[0x1b8] = (char)uVar43;
  uVar20 = uVar45 >> 0x11 & 1;
  param_1[0x548] = (char)uVar61;
  param_1[0x594] = (char)uVar20;
  if ((((param_1[0x1c2] == '\0') && (param_1[0x1bc] == '\0' && uVar43 == 0)) &&
      ((uVar35 & 0x10000000) == 0)) && ((param_1[0x1c4] == '\0' && (param_1[0x1c9] == '\0')))) {
    uVar61 = 0;
  }
  else {
    uVar61 = uVar20 != 0 | uVar61;
  }
  bVar24 = uVar49 == 0;
  bVar25 = ((uVar64 >> 3 | uVar64 >> 2) & 1) == 0;
  param_1[0x59c] = !bVar24 || !bVar25;
  param_1[0x595] = (char)uVar61;
  *(uint *)(param_1 + 0x568) = -(uVar45 >> 0x16 & 1);
  param_1[0x59b] = '\0';
  if ((uVar45 >> 0xe & 1) == 0) {
    if (bVar24 && bVar25) goto LAB_0051bc14;
    local_6f0 = 0x1c;
    param_1[0x59d] = bVar18 ^ 1;
    if (uVar49 != 0) goto LAB_0051bed4;
LAB_0051bbf4:
    param_1[0x59e] = '\x01';
    cVar17 = param_1[0x53c];
    param_1[0x596] = cVar17;
    param_1[0x59f] = '\0';
  }
  else if (bVar24 && bVar25) {
LAB_0051bc14:
    param_1[0x59d] = '\0';
    param_1[0x59e] = '\0';
    local_6f0 = 0x1c;
    cVar17 = param_1[0x53c];
    param_1[0x596] = cVar17;
    param_1[0x59f] = '\0';
  }
  else {
    param_1[0x59b] = '\x01';
    local_6f0 = 0x1d;
    param_1[0x59d] = bVar18 ^ 1;
    if (uVar49 == 0) goto LAB_0051bbf4;
LAB_0051bed4:
    param_1[0x59e] = '\0';
    cVar17 = param_1[0x53c];
    param_1[0x596] = cVar17;
    param_1[0x59f] = '\0';
  }
  if (uVar48 != 0) {
    param_1[0x596] = '\x01';
    param_1[0x59f] = '\x01';
  }
  bVar24 = (cVar17 != '\0' || param_1[0x1d3] != '\0') || bVar27;
  if (param_1[0x1d3] != '\0' || bVar27) {
    param_1[0x596] = '\x01';
  }
  bVar25 = uVar31 != 0;
  bVar26 = uVar4 == 0;
  uVar64 = 0;
  if (!bVar25 || !bVar26) {
    uVar64 = uVar4;
  }
  uVar49 = uVar31;
  if ((!bVar25 || !bVar26) || (bVar27 || uVar48 != 0)) {
    uVar49 = uVar64;
  }
  if ((uVar61 & ((bVar25 && bVar26) && (!bVar27 && uVar48 == 0))) == 1) {
    iVar29 = FUN_00546b90();
    if ((2 < uVar31 - 0x18) && (3 < iVar29)) {
      uVar38 = FUN_00523530(uVar31);
      uVar49 = uVar31;
      if ((uVar38 & 1) != 0) goto LAB_0051bce8;
    }
    uVar49 = 0;
  }
LAB_0051bce8:
  uVar64 = *(uint *)(param_1 + 0x488);
  if ((int)*(uint *)(param_1 + 0x488) < 0) {
    uVar64 = *(uint *)((long)&DAT_0275d0a0 + (long)(int)param_4 * 0x1c);
  }
  iVar29 = *(int *)(param_1 + 0x4cc);
  if (*(int *)(param_1 + 0x4cc) < 0) {
    iVar29 = *(int *)((long)&DAT_0275d0a0 + (long)(int)param_4 * 0x1c + 4);
  }
  iVar5 = 0;
  if (iVar29 != 0 && cVar46 != '\0') {
    iVar5 = iVar29;
  }
  *(int *)(param_1 + 0x4cc) = iVar5;
  if ((*(uint *)(param_1 + 0x2b4) >> 0x1d & 1) != 0) {
    if (*(float *)(param_1 + 0x428) <= 0.0) {
      param_1[0x428] = '\0';
      param_1[0x429] = '\0';
      param_1[0x42a] = -0x40;
      param_1[0x42b] = '?';
    }
    if (*(float *)(param_1 + 0x424) <= 0.0) {
      param_1[0x424] = -0x55;
      param_1[0x425] = -0x56;
      param_1[0x426] = -0x56;
      param_1[0x427] = '?';
    }
  }
  if (((*(uint *)(param_1 + 0x2b4) >> 0x1e & 1) != 0) && (*(float *)(param_1 + 0x42c) <= 0.0)) {
    param_1[0x42c] = -0x55;
    param_1[0x42d] = -0x56;
    param_1[0x42e] = '*';
    param_1[0x42f] = '?';
  }
  if (*(float *)(param_1 + 0x428) <= 0.0) {
    param_1[0x428] = '\0';
    param_1[0x429] = '\0';
    param_1[0x42a] = -0x80;
    param_1[0x42b] = '?';
  }
  if (*(float *)(param_1 + 0x424) <= 0.0) {
    param_1[0x424] = '\0';
    param_1[0x425] = '\0';
    param_1[0x426] = -0x80;
    param_1[0x427] = '?';
  }
  if (*(float *)(param_1 + 0x42c) <= 0.0) {
    param_1[0x42c] = '\0';
    param_1[0x42d] = '\0';
    param_1[0x42e] = -0x80;
    param_1[0x42f] = '?';
  }
  uVar61 = *(uint *)(param_1 + 0x478);
  uVar48 = uVar61;
  if (0xf < uVar61) {
    uVar48 = 0x10;
  }
  if (uVar61 == 0) {
    uVar48 = 1;
  }
  *(uint *)(param_1 + 0x478) = uVar48;
  if ((uVar35 & 0x10000000) == 0) {
    param_1[0x478] = '\0';
    param_1[0x479] = '\0';
    param_1[0x47a] = '\0';
    param_1[0x47b] = '\0';
  }
  else {
    puVar39 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar21,(ulong)uVar48 * 0x68 + 8,
                                    "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x16c6,0);
    puVar40 = puVar39;
    if (puVar39 != (ulong *)0x0) {
      puVar40 = puVar39 + 1;
      *puVar39 = (ulong)uVar48;
    }
    *(ulong **)(param_1 + 0x858) = puVar40;
  }
  uVar61 = *(uint *)(param_1 + 0x524);
  uVar48 = uVar61;
  if (0xf < uVar61) {
    uVar48 = 0x10;
  }
  *(uint *)(param_1 + 0x524) = uVar48;
  if (uVar61 != 0) {
    puVar39 = (ulong *)FUN_005b9a50(*(undefined8 *)puVar21,(ulong)uVar48 * 0x34 + 8,
                                    "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x16d1,0);
    puVar40 = puVar39;
    if (puVar39 != (ulong *)0x0) {
      puVar40 = puVar39 + 1;
      *puVar39 = (ulong)uVar48;
    }
    *(ulong **)(param_1 + 0x868) = puVar40;
  }
  FUN_00546f60(uVar47,uVar52,&local_b4,&local_b8);
  param_1[0x1168] = '\0';
  param_1[0x1169] = '\0';
  param_1[0x116a] = '\0';
  param_1[0x116b] = '\0';
  param_1[0x116c] = '\0';
  param_1[0x116d] = '\0';
  param_1[0x116e] = '\0';
  param_1[0x116f] = '\0';
  param_1[0x128] = '\0';
  param_1[0x129] = '\0';
  param_1[0x12a] = '\0';
  param_1[299] = '\0';
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = '\0';
  param_1[0x12f] = '\0';
  param_1[0x130] = '\0';
  param_1[0x131] = '\0';
  param_1[0x132] = '\0';
  param_1[0x133] = '\0';
  param_1[0x134] = '\0';
  param_1[0x135] = '\0';
  param_1[0x136] = '\0';
  param_1[0x137] = '\0';
  param_1[0x120] = '\0';
  puVar22 = PTR_DAT_027139b0;
  param_1[0x121] = '\0';
  param_1[0x122] = '\0';
  param_1[0x123] = '\0';
  param_1[0x124] = '\0';
  param_1[0x125] = '\0';
  param_1[0x126] = '\0';
  param_1[0x127] = '\0';
  if (uVar63 == 0) {
    if (*(int *)PTR_DAT_027139b0 < 1) {
      uVar37 = FUN_005b9a50(*(undefined8 *)puVar21,0x29c08,"../src/GPU\\GPUClassUtil.h",0x49,0);
      FUN_0056dc10(uVar37,0);
      *(undefined8 *)PTR_DAT_027139b8 = uVar37;
      iVar29 = 1;
      *(undefined4 *)puVar22 = 0;
    }
    else {
      iVar29 = *(int *)PTR_DAT_027139b0 + 1;
    }
    *(int *)puVar22 = iVar29;
  }
  uVar37 = FUN_005b9a50(*(undefined8 *)puVar21,0x98,
                        "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x16f3,0);
  FUN_005a4710(uVar37,"CPostEffect::m_pRenderBuffer");
  *(undefined8 *)(param_1 + 400) = uVar37;
  uVar37 = FUN_005b9a50(*(undefined8 *)puVar21,0x430,
                        "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x16f4,0);
  FUN_00553160(uVar37,"CPostEffect::m_pRenderGlare");
  *(undefined8 *)(param_1 + 0x198) = uVar37;
  if (param_1[0x1cc] != '\0') {
    uVar37 = FUN_005b9a50(*(undefined8 *)puVar21,0x98,
                          "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x16f8,0);
    FUN_005a4710(uVar37,"CPostEffect::m_pGlareModulatorWork");
    *(undefined8 *)(param_1 + 0x1b0) = uVar37;
  }
  if (param_1[0x1cf] != '\0') {
    uVar37 = FUN_005b9a50(*(undefined8 *)puVar21,0x98,
                          "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x16fd,0);
    FUN_005a4710(uVar37,"CPostEffect::m_pEffectColorAlphaDestinationWork");
    *(undefined8 *)(param_1 + 0x1a8) = uVar37;
  }
  uVar37 = FUN_005b9a50(*(undefined8 *)puVar21,0x4b0,
                        "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1704,0);
  FUN_005a76e0(uVar37,"CPostEffect::m_pDepthOfField");
  uVar38 = *(ulong *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar37;
  if (uVar38 != 0) {
    uVar55 = uVar38 + *(long *)(uVar38 - 8) * 0x78;
    do {
      uVar55 = uVar55 - 0x78;
    } while (uVar38 <= uVar55);
    FUN_005b9b10(*(undefined8 *)puVar21);
    param_1[0x2a0] = '\0';
    param_1[0x2a1] = '\0';
    param_1[0x2a2] = '\0';
    param_1[0x2a3] = '\0';
    param_1[0x2a4] = '\0';
    param_1[0x2a5] = '\0';
    param_1[0x2a6] = '\0';
    param_1[0x2a7] = '\0';
  }
  uVar38 = *(ulong *)(param_1 + 0x2a8);
  if (uVar38 != 0) {
    uVar55 = uVar38 + *(long *)(uVar38 - 8) * 0x50;
    do {
      uVar55 = uVar55 - 0x50;
    } while (uVar38 <= uVar55);
    FUN_005b9b10(*(undefined8 *)puVar21);
    param_1[0x2a8] = '\0';
    param_1[0x2a9] = '\0';
    param_1[0x2aa] = '\0';
    param_1[0x2ab] = '\0';
    param_1[0x2ac] = '\0';
    param_1[0x2ad] = '\0';
    param_1[0x2ae] = '\0';
    param_1[0x2af] = '\0';
  }
  iVar29 = *(int *)(param_1 + 0x400);
  plVar34 = (long *)FUN_005b9a50(*(undefined8 *)puVar21,(long)iVar29 * 0x78 + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x170c,0);
  plVar36 = plVar34;
  if (plVar34 != (long *)0x0) {
    plVar36 = plVar34 + 1;
    *plVar34 = (long)iVar29;
  }
  iVar29 = *(int *)(param_1 + 0x400);
  *(long **)(param_1 + 0x2a0) = plVar36;
  plVar34 = (long *)FUN_005b9a50(*(undefined8 *)puVar21,(long)iVar29 * 0x50 | 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x170d,0);
  plVar36 = plVar34;
  if (plVar34 != (long *)0x0) {
    plVar36 = plVar34 + 1;
    *plVar34 = (long)iVar29;
  }
  uVar38 = (ulong)*(uint *)(param_1 + 0x400);
  *(long **)(param_1 + 0x2a8) = plVar36;
  if (0 < (int)*(uint *)(param_1 + 0x400)) {
    uVar55 = 0;
    lVar65 = 0x70;
    lVar68 = 0x48;
    do {
      FUN_00552650(&local_c8,uVar55 & 0xffffffff);
      FUN_00552a50(&local_698,"CPostEffect::m_pAutoExposureParam[",&local_c8);
      FUN_005528d0(local_398,&local_698,"].m_pQuerySceneLuminance");
      uVar37 = CONCAT44(local_398[3],local_398[2]);
      uVar41 = FUN_005b9a50(*(undefined8 *)puVar21,0x508,
                            "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1711,0);
      FUN_005b8780(uVar41,uVar37);
      *(undefined8 *)(*(long *)(param_1 + 0x2a0) + lVar65) = uVar41;
      FUN_00551380(local_398);
      FUN_00551380(&local_698);
      FUN_00551380(&local_c8);
      FUN_00552650(&local_c8,uVar55 & 0xffffffff);
      FUN_00552a50(&local_698,"CPostEffect::m_pAutoFocusParam[",&local_c8);
      FUN_005528d0(local_398,&local_698,"].m_pQuerySceneDepth");
      uVar37 = CONCAT44(local_398[3],local_398[2]);
      uVar41 = FUN_005b9a50(*(undefined8 *)puVar21,0x508,
                            "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1714,0);
      FUN_005b8780(uVar41,uVar37);
      *(undefined8 *)(*(long *)(param_1 + 0x2a8) + lVar68) = uVar41;
      FUN_00551380(local_398);
      FUN_00551380(&local_698);
      FUN_00551380(&local_c8);
      uVar38 = (ulong)*(int *)(param_1 + 0x400);
      uVar55 = uVar55 + 1;
      lVar65 = lVar65 + 0x78;
      lVar68 = lVar68 + 0x50;
    } while ((long)uVar55 < (long)uVar38);
  }
  plVar34 = (long *)FUN_005b9a50(*(undefined8 *)puVar21,
                                 (-(uVar38 >> 0x1f & 1) & 0xfffffffc00000000 |
                                 (uVar38 & 0xffffffff) << 2) + 8,
                                 "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1728,0);
  puVar22 = PTR_DAT_02713970;
  plVar36 = plVar34;
  if (plVar34 != (long *)0x0) {
    plVar36 = plVar34 + 1;
    *plVar34 = (long)(int)uVar38;
  }
  *(long **)(param_1 + 0x290) = plVar36;
  if ((0 < *(int *)(param_1 + 0x400)) && (*(undefined4 *)plVar36 = 0, 1 < *(int *)(param_1 + 0x400))
     ) {
    lVar65 = 1;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x290) + lVar65 * 4) = 0;
      lVar65 = lVar65 + 1;
    } while (lVar65 < *(int *)(param_1 + 0x400));
  }
  puVar23 = PTR_DAT_027139b0;
  *PTR_DAT_027139e8 = 0;
  iVar29 = *(int *)puVar23;
  if (iVar29 < 1) {
    plVar36 = (long *)FUN_005b9a50(*(undefined8 *)puVar21,0x29c08,"../src/GPU\\GPUClassUtil.h",0x49,
                                   0);
    FUN_0056dc10(plVar36,0);
    *(long **)PTR_DAT_027139b8 = plVar36;
    *(undefined4 *)puVar23 = 1;
LAB_0051c338:
    if (plVar36 == (long *)0x0) {
      iVar29 = 0;
      plVar34 = (long *)0x0;
    }
    else {
      uVar37 = *(undefined8 *)puVar21;
      (**(code **)(*plVar36 + 0x20))(plVar36);
      FUN_005b9b10(uVar37,plVar36);
      plVar34 = (long *)0x0;
      iVar29 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
  }
  else {
    plVar34 = *(long **)PTR_DAT_027139b8;
    *(int *)puVar23 = iVar29 + 1;
    plVar36 = plVar34;
    if (iVar29 + 1 < 2) goto LAB_0051c338;
  }
  *(int *)puVar23 = iVar29;
  *(undefined1 *)(plVar36 + 0x534c) = 0;
  *(char *)(plVar36 + 0x5356) = param_1[0x1c1];
  *(char *)(plVar36 + 0x535a) = param_1[0x1ca];
  uVar47 = *(undefined4 *)(param_1 + 0x400);
  *(undefined4 *)(plVar36 + 0x535d) = *(undefined4 *)(param_1 + 0x51c);
  *(undefined4 *)((long)plVar36 + 0x29aec) = uVar47;
  if (*(int *)(param_1 + 0x524) == 0) {
    uVar52 = 0;
    uVar47 = 0;
  }
  else {
    uVar47 = *(undefined4 *)(param_1 + 0x520);
    uVar52 = *(undefined4 *)(param_1 + 0x400);
  }
  *(undefined4 *)(plVar36 + 0x5380) = uVar47;
  *(undefined4 *)((long)plVar36 + 0x29c04) = uVar52;
  iVar29 = (**(code **)*plVar34)(plVar34,*plVar54);
  if (iVar29 < 0) {
    if ((*(int *)puVar22 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x175f);
      uVar37 = FUN_00546ea0(iVar29);
      FUN_00517ae0("CPostEffect::Initialize(): CSingleTextureUtil::InitializeDevice() failed (0x%x: %s).\n"
                   ,iVar29,uVar37);
    }
    (**(code **)(*(long *)*plVar54 + 0x38))((long *)*plVar54,0,*(undefined8 *)(param_1 + 0x20),0);
    (**(code **)(*(long *)*plVar54 + 0x40))((long *)*plVar54,*(undefined8 *)(param_1 + 0x28));
    return iVar29;
  }
  if ((*(int *)puVar22 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x1765);
    FUN_00517ae0("CPostEffect::Initialize(): CSingleTextureUtil::InitializeDevice() succeeded.\n");
  }
  if ((*(code **)PTR_DAT_027139c8 != (code *)0x0) && (((byte)*PTR_DAT_027139d0 >> 1 & 1) != 0)) {
    (**(code **)PTR_DAT_027139c8)(2,*(undefined8 *)PTR_DAT_027139d8);
  }
  uVar47 = 0x10000;
  if (param_1[0x548] != '\0') {
    uVar47 = 0x30000;
  }
  if (param_1[0x59d] == '\0') {
    uVar63 = uVar49;
    if (uVar49 == 0) {
      local_398[4] = (uint)DAT_01d6aeac;
      local_398[5] = (uint)((ulong)DAT_01d6aeac >> 0x20);
      local_398[2] = (uint)DAT_01d6aea4;
      local_398[3] = (uint)((ulong)DAT_01d6aea4 >> 0x20);
      local_398[0] = (uint)DAT_01d6ae9c;
      local_398[1] = (uint)((ulong)DAT_01d6ae9c >> 0x20);
      uVar63 = FUN_00542c70(*(undefined8 *)(param_1 + 0x18),
                            (*(uint *)(param_1 + 0x2b4) >> 0xc & 1) << 0x13 | 1,3,local_398,6,10);
    }
  }
  else {
    uVar63 = local_6f0;
    if (uVar49 != 0) {
      uVar63 = uVar49;
    }
  }
  if (local_6d0 == 0) {
    if ((uVar45 & 0x60) == 0x40) {
      iVar29 = FUN_00546b90(0x18);
      if (iVar29 < 5) {
        (**(code **)(*(long *)*plVar54 + 600))((long *)*plVar54,0x20001,3,0x18);
        local_6d0 = 0x18;
      }
      else {
        local_6d0 = 0x18;
      }
    }
    else {
      (**(code **)(*(long *)*plVar54 + 600))((long *)*plVar54,0x20001,3,0x1a);
      local_6d0 = 0x1a;
    }
  }
  if ((iVar30 == 0) && ((uVar45 >> 5 & 1) != 0)) {
    local_398[0] = 0x18;
    iVar30 = FUN_00542c70(*plVar54,0x20001,3,local_398,1,0x18);
  }
  if (iVar30 == 0) {
    switch(local_6d0) {
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x57:
    case 0x58:
    case 0x5b:
    case 0x5d:
      iVar30 = 0;
      if (param_1[0x59b] != '\0') {
        iVar30 = 0x1d;
      }
    }
  }
  if (((uVar31 != uVar63) && (uVar31 != 0)) && (uVar63 != 0)) {
    param_1[0x596] = '\x01';
  }
  if (uVar70 == uVar2 && uVar44 == uVar3) {
    iVar29 = 0x7fffffff;
    if (iVar28 != 0) {
      iVar29 = iVar28;
    }
    if (param_1[0x596] != '\0') goto LAB_0051c6d8;
    local_398[3] = 0;
    local_398[1] = 0;
    local_398[2] = 0;
    local_698 = uVar2;
    local_398[0] = uVar63;
    local_c8 = uVar3;
    iVar28 = FUN_00546ed0(&local_698,&local_c8,uVar2,uVar3,1,local_398,iVar28,local_b4,0);
    if (1 < iVar28) {
      param_1[0x596] = '\x01';
    }
    cVar46 = param_1[0x595];
  }
  else {
    bVar24 = true;
    param_1[0x596] = '\x01';
    iVar29 = 0x7fffffff;
    if (iVar28 != 0) {
      iVar29 = iVar28;
    }
LAB_0051c6d8:
    cVar46 = param_1[0x595];
  }
  if (cVar46 != '\0') {
    uVar49 = uVar63;
    if (uVar31 != 0) {
      uVar49 = uVar31;
    }
    iVar28 = (**(code **)(*(long *)*plVar54 + 600))((long *)*plVar54,0x80001,3,uVar49);
    if ((iVar28 < 0) && (*(char *)(*plVar54 + 0x14ef0) == '\0')) {
      bVar24 = true;
      param_1[0x596] = '\x01';
    }
  }
  if ((param_1[0x1cc] == '\0') || (*(char *)(*plVar54 + 0x14efa) == '\0')) {
    param_1[0x5a0] = '\0';
    if (param_1[0x596] == '\0') {
      bVar27 = true;
      bVar25 = false;
      goto LAB_0051c7e0;
    }
    if (param_1[0x1c2] == '\0') goto LAB_0051c7a0;
LAB_0051c7d0:
    bVar27 = false;
    bVar25 = false;
  }
  else {
    param_1[0x596] = '\x01';
    param_1[0x5a0] = '\0';
    if (param_1[0x1c2] != '\0') goto LAB_0051c7d0;
LAB_0051c7a0:
    if ((((param_1[0x1b8] != '\0') || (param_1[0x1b9] != '\0')) || (param_1[0x1bb] != '\0')) ||
       (((param_1[0x1bc] != '\0' || (param_1[0x1bf] != '\0')) || (param_1[0x1c0] != '\0'))))
    goto LAB_0051c7d0;
    if (((param_1[0x1c4] == '\0') && (param_1[0x1c6] == '\0')) &&
       ((param_1[0x1c8] == '\0' && (bVar25 = false, uVar70 <= uVar2)))) {
      bVar27 = false;
      if (param_1[0x1cb] == '\0') {
        bVar25 = false;
        if ((uVar3 < uVar44) || (param_1[0x1d3] != '\0')) goto LAB_0051f928;
        bVar27 = false;
        if (param_1[0x59f] != '\x01') {
          bVar27 = false;
          bVar25 = true;
          param_1[0x5a0] = '\x01';
        }
      }
    }
    else {
LAB_0051f928:
      bVar27 = false;
      bVar25 = bVar27;
    }
  }
LAB_0051c7e0:
  iVar28 = *(int *)(param_1 + 0x440);
  param_1[0x5d8] = '\0';
  param_1[0x5d9] = '\0';
  param_1[0x5da] = '\0';
  param_1[0x5db] = '\0';
  *(uint *)(param_1 + 0x5dc) = (uint)(iVar28 != 0);
  if (bVar27) {
    iVar32 = 0;
  }
  else {
    iVar32 = 0;
    if (!bVar25) {
      iVar32 = iVar28 + 1;
    }
  }
  *(int *)(param_1 + 0x5e0) = iVar32;
  param_1[0x694] = '\0';
  param_1[0x695] = '\0';
  param_1[0x696] = '\0';
  param_1[0x697] = '\0';
  param_1[0x688] = '\0';
  param_1[0x689] = '\0';
  param_1[0x68a] = '\0';
  param_1[0x68b] = '\0';
  param_1[0x68c] = '\0';
  param_1[0x68d] = '\0';
  param_1[0x68e] = '\0';
  param_1[0x68f] = '\0';
  param_1[0x680] = '\0';
  param_1[0x681] = '\0';
  param_1[0x682] = '\0';
  param_1[0x683] = '\0';
  param_1[0x684] = '\0';
  param_1[0x685] = '\0';
  param_1[0x686] = '\0';
  param_1[0x687] = '\0';
  *(int *)(param_1 + 0x5e4) = iVar32;
  uVar49 = iVar28 + 1U;
  if ((!bVar27) && (uVar49 = iVar28 + 2, bVar25)) {
    uVar49 = iVar28 + 1U;
  }
  param_1[0x5a1] = '\0';
  if (param_1[0x1b8] == '\0') {
    iVar28 = *(int *)(param_1 + 0x444);
  }
  else {
    cVar46 = *(char *)(*(long *)(param_1 + 0x18) + 0x14ef0);
    param_1[0x5a1] = cVar46;
    if (iVar5 - 5U < 3) {
      iVar28 = FUN_005b7360();
      if (iVar28 == 0) {
        cVar46 = param_1[0x5a1];
        goto LAB_0051c950;
      }
      param_1[0x5a1] = '\0';
joined_r0x0051c96c:
      iVar32 = 1;
    }
    else {
LAB_0051c950:
      if (cVar46 == '\0') goto joined_r0x0051c96c;
      iVar32 = 0;
    }
    if ((iVar5 - 5U < 3) && (iVar28 = FUN_005b7360(), iVar28 != 0)) {
      iVar32 = iVar32 + 1;
    }
    iVar28 = *(int *)(param_1 + 0x444);
    if (*(int *)(param_1 + 0x444) <= iVar32) {
      iVar28 = iVar32;
    }
    *(int *)(param_1 + 0x444) = iVar28;
  }
  if (0 < iVar28) {
    uVar49 = iVar28 + uVar49;
    uVar48 = *(uint *)(param_1 + 0x5e0);
    if (*(int *)(param_1 + 0x440) != 0) {
      uVar45 = (*(int *)(param_1 + 0x440) + *(int *)(param_1 + 0x5dc)) - 1;
      if (uVar48 <= uVar45) {
        uVar48 = uVar45;
      }
    }
    *(uint *)(param_1 + 0x5e4) = uVar48 + 1;
  }
  if (param_1[0x596] == '\0') {
    bVar27 = false;
    uVar48 = 0;
    uVar45 = uVar31;
  }
  else {
    if (param_1[0x599] == '\0') {
      if (uVar31 == 0) {
        cVar46 = '\x01';
        if (param_1[0x59a] == '\0') {
          bVar18 = 0;
          uVar31 = uVar63;
        }
        else {
          local_398[4] = (uint)DAT_01d6aeac;
          local_398[5] = (uint)((ulong)DAT_01d6aeac >> 0x20);
          local_398[2] = (uint)DAT_01d6aea4;
          local_398[3] = (uint)((ulong)DAT_01d6aea4 >> 0x20);
          local_398[0] = (uint)DAT_01d6ae9c;
          local_398[1] = (uint)((ulong)DAT_01d6ae9c >> 0x20);
          uVar31 = FUN_00542c70(*(undefined8 *)(param_1 + 0x18),
                                (*(uint *)(param_1 + 0x2b4) >> 0xc & 1) << 0x13 | 1,3,local_398,6,10
                               );
          cVar46 = param_1[0x596];
          bVar18 = 0;
        }
      }
      else {
        bVar18 = 0;
        cVar46 = '\x01';
      }
    }
    else {
      if (uVar31 != 0) {
        local_6f0 = uVar31;
      }
      cVar46 = '\x01';
      bVar18 = 1;
      uVar31 = local_6f0;
    }
    uVar48 = 0;
    if (cVar46 != '\0') {
      uVar48 = uVar31;
    }
    if (!bVar24 && cVar46 != '\0') {
      bVar27 = (bool)((uVar70 == uVar2 && uVar44 == uVar3) & uVar31 == uVar63 & (bVar18 ^ 1));
      uVar45 = 0;
      uVar48 = uVar31;
    }
    else {
      bVar27 = false;
      uVar45 = 0;
    }
  }
  local_398[2] = 0;
  local_398[3] = 0;
  local_398[0] = 0;
  local_398[1] = 0;
  local_398[4] = 1;
  local_398[7] = 0;
  local_398[8] = local_398[8] & 0xffffff00;
  local_398[5] = 0;
  local_398[6] = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  local_374 = 0;
  uStack_370 = 0;
  local_364 = 1;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_35b = 0;
  local_348 = 0;
  local_350 = 0;
  local_340 = 1;
  uStack_334 = 0;
  uStack_33c = 0;
  local_337 = 0;
  local_324 = 0;
  local_32c = 0;
  local_31c = 1;
  uStack_310 = 0;
  uStack_318 = 0;
  local_313 = 0;
  local_300 = 0;
  local_308 = 0;
  local_2f8 = 1;
  uStack_2ec = 0;
  uStack_2f4 = 0;
  local_2ef = 0;
  local_2dc = 0;
  local_2e4 = 0;
  local_2d4 = 1;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  local_2cb = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2b0 = 1;
  uStack_2a4 = 0;
  uStack_2ac = 0;
  local_2a7 = 0;
  local_294 = 0;
  local_29c = 0;
  local_28c = 1;
  uStack_280 = 0;
  uStack_288 = 0;
  local_283 = 0;
  local_270 = 0;
  local_278 = 0;
  local_268 = 1;
  uStack_25c = 0;
  uStack_264 = 0;
  local_25f = 0;
  local_254 = 0;
  local_24c = 0;
  local_244 = 1;
  uStack_238 = 0;
  uStack_240 = 0;
  local_23b = 0;
  local_228 = 0;
  local_230 = 0;
  local_220 = 1;
  uStack_214 = 0;
  uStack_21c = 0;
  local_217 = 0;
  local_20c = 0;
  local_204 = 0;
  local_1fc = 1;
  uStack_1f0 = 0;
  uStack_1f8 = 0;
  local_1f3 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1d8 = 1;
  uStack_1cc = 0;
  uStack_1d4 = 0;
  local_1cf = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1b4 = 1;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  local_1ab = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_190 = 1;
  uStack_184 = 0;
  uStack_18c = 0;
  local_187 = 0;
  local_17c = 0;
  local_174 = 0;
  local_16c = 1;
  uStack_160 = 0;
  uStack_168 = 0;
  local_163 = 0;
  local_150 = 0;
  local_158 = 0;
  local_148 = 1;
  uStack_13c = 0;
  uStack_144 = 0;
  local_13f = 0;
  local_134 = 0;
  local_12c = 0;
  local_124 = 1;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_11b = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 1;
  uStack_f4 = 0;
  uStack_fc = 0;
  local_f7 = 0;
  local_e4 = 0;
  local_ec = 0;
  local_dc = 1;
  uStack_d0 = 0;
  uStack_d8 = 0;
  local_d3 = 0;
  cVar46 = param_1[0x596];
  if (param_1[0x5a0] == '\0') {
    uVar38 = (ulong)*(uint *)(param_1 + 0x5e0);
    uVar43 = 0x100;
    uVar4 = local_b8;
    if (cVar46 != '\0') {
      uVar43 = 0x40000;
      uVar4 = 0;
    }
    local_398[uVar38 * 9] = uVar43;
    local_398[uVar38 * 9 + 1] = uVar2;
    uVar43 = local_b4;
    if (cVar46 != '\0') {
      uVar43 = 0;
    }
    local_398[uVar38 * 9 + 2] = uVar3;
    local_398[uVar38 * 9 + 3] = uVar63;
    local_398[uVar38 * 9 + 6] = uVar4;
    local_398[uVar38 * 9 + 7] = uVar45;
    *(undefined1 *)(local_398 + uVar38 * 9 + 8) = 0;
    local_398[uVar38 * 9 + 4] = 1;
    local_398[uVar38 * 9 + 5] = uVar43;
  }
  if (cVar46 != '\0') {
    uVar38 = (ulong)*(uint *)(param_1 + 0x5d8);
    local_398[uVar38 * 9] = 0x100;
    local_398[uVar38 * 9 + 1] = uVar70;
    local_398[uVar38 * 9 + 2] = uVar44;
    local_398[uVar38 * 9 + 3] = uVar48;
    local_398[uVar38 * 9 + 4] = 1;
    local_398[uVar38 * 9 + 5] = local_b4;
    local_398[uVar38 * 9 + 6] = local_b8;
    local_398[uVar38 * 9 + 7] = uVar31;
    *(undefined1 *)(local_398 + uVar38 * 9 + 8) = 0;
    if (param_1[0x1d3] != '\0') {
      local_398[uVar38 * 9] = 0x80000100;
    }
  }
  iVar28 = *(int *)(param_1 + 0x440);
  if (0 < iVar28) {
    uVar38 = (ulong)*(uint *)(param_1 + 0x5d8);
    puVar56 = local_398 + uVar38 * 9;
    uVar48 = *(uint *)(param_1 + 0x5dc);
    uVar55 = (long)iVar28 & 1;
    if (iVar28 == 1) {
      lVar65 = 0;
    }
    else {
      lVar65 = 0;
      do {
        uVar1 = (ulong)uVar48 + lVar65;
        lVar65 = lVar65 + 2;
        uVar62 = uVar1 & 0xffffffff;
        *(undefined8 *)(local_398 + uVar62 * 9) = *(undefined8 *)puVar56;
        uVar37 = *(undefined8 *)(local_398 + uVar38 * 9 + 2);
        uVar41 = *(undefined8 *)(local_398 + uVar38 * 9 + 4);
        uVar58 = *(undefined8 *)(local_398 + uVar38 * 9 + 6);
        *(char *)(local_398 + uVar62 * 9 + 8) = (char)local_398[uVar38 * 9 + 8];
        *(undefined8 *)(local_398 + uVar62 * 9 + 4) = uVar41;
        *(undefined8 *)(local_398 + uVar62 * 9 + 6) = uVar58;
        *(undefined8 *)(local_398 + uVar62 * 9 + 2) = uVar37;
        uVar1 = (ulong)((int)uVar1 + 1);
        *(undefined8 *)(local_398 + uVar1 * 9) = *(undefined8 *)puVar56;
        uVar37 = *(undefined8 *)(local_398 + uVar38 * 9 + 2);
        uVar41 = *(undefined8 *)(local_398 + uVar38 * 9 + 4);
        uVar58 = *(undefined8 *)(local_398 + uVar38 * 9 + 6);
        *(char *)(local_398 + uVar1 * 9 + 8) = (char)local_398[uVar38 * 9 + 8];
        *(undefined8 *)(local_398 + uVar1 * 9 + 4) = uVar41;
        *(undefined8 *)(local_398 + uVar1 * 9 + 6) = uVar58;
        *(undefined8 *)(local_398 + uVar1 * 9 + 2) = uVar37;
      } while ((long)iVar28 - uVar55 != lVar65);
      if (uVar55 == 0) goto LAB_0051ce60;
    }
    uVar55 = (ulong)(uVar48 + (int)lVar65);
    *(undefined8 *)(local_398 + uVar55 * 9) = *(undefined8 *)puVar56;
    uVar58 = *(undefined8 *)(local_398 + uVar38 * 9 + 6);
    uVar37 = *(undefined8 *)(local_398 + uVar38 * 9 + 2);
    uVar41 = *(undefined8 *)(local_398 + uVar38 * 9 + 4);
    *(char *)(local_398 + uVar55 * 9 + 8) = (char)local_398[uVar38 * 9 + 8];
    *(undefined8 *)(local_398 + uVar55 * 9 + 4) = uVar41;
    *(undefined8 *)(local_398 + uVar55 * 9 + 6) = uVar58;
    *(undefined8 *)(local_398 + uVar55 * 9 + 2) = uVar37;
  }
LAB_0051ce60:
  uVar48 = *(uint *)(param_1 + 0x5e4);
  uVar38 = (ulong)*(uint *)(param_1 + 0x5e0);
  if ((uVar48 != *(uint *)(param_1 + 0x5e0)) && (uVar48 < uVar49)) {
    lVar65 = (ulong)uVar49 - (ulong)uVar48;
    puVar56 = local_398 + (ulong)uVar48 * 9;
    do {
      uVar37 = *(undefined8 *)(local_398 + uVar38 * 9 + 6);
      uVar48 = local_398[uVar38 * 9 + 8];
      uVar41 = *(undefined8 *)(local_398 + uVar38 * 9 + 2);
      *(undefined8 *)(puVar56 + 4) = *(undefined8 *)(local_398 + uVar38 * 9 + 4);
      *(undefined8 *)(puVar56 + 6) = uVar37;
      uVar37 = *(undefined8 *)(local_398 + uVar38 * 9);
      *(char *)(puVar56 + 8) = (char)uVar48;
      *(undefined8 *)puVar56 = uVar37;
      *(undefined8 *)(puVar56 + 2) = uVar41;
      puVar56[5] = 0;
      puVar56[6] = 0;
      lVar65 = lVar65 + -1;
      *puVar56 = (uint)uVar37 & 0xfffffeff | 0x40000;
      puVar56 = puVar56 + 9;
    } while (lVar65 != 0);
  }
  if (0 < (int)uVar49) {
    if (iVar29 == 0x7fffffff) {
      uVar38 = 0;
      do {
        if (-1 < (int)local_398[uVar38 * 9]) {
          uVar48 = local_398[uVar38 * 9 + 7];
          if (uVar48 == 0) {
            uVar48 = local_398[uVar38 * 9 + 3];
          }
          puVar56 = local_398 + uVar38 * 9 + 5;
          uVar70 = *puVar56;
          iVar28 = 0x2d;
          if (**(int **)(param_1 + 0x38) != 0) {
            iVar28 = **(int **)(param_1 + 0x38);
          }
          puVar57 = local_398 + uVar38 * 9 + 6;
          if (uVar70 != 0) {
            uVar44 = *puVar57;
            do {
              while( true ) {
                iVar32 = (**(code **)(*(long *)*plVar54 + 0x250))
                                   ((long *)*plVar54,uVar48,uVar70,uVar44);
                if ((-1 < iVar32) &&
                   (iVar32 = (**(code **)(*(long *)*plVar54 + 0x250))
                                       ((long *)*plVar54,iVar28,*puVar56,*puVar57), -1 < iVar32))
                goto LAB_0051cfb4;
                if (*puVar57 == 0) break;
                uVar44 = *puVar57 - 1;
                *puVar57 = uVar44;
                uVar70 = *puVar56;
                if (uVar70 == 0) goto LAB_0051cfb0;
              }
              uVar44 = 0;
              uVar70 = *puVar56 - 1;
              *puVar56 = uVar70;
            } while (uVar70 != 0);
          }
LAB_0051cfb0:
          *puVar57 = 0;
        }
LAB_0051cfb4:
        uVar38 = uVar38 + 1;
      } while (uVar38 != uVar49);
    }
    else {
      uVar38 = 0;
      do {
        if (-1 < (int)local_398[uVar38 * 9]) {
          uVar48 = local_398[uVar38 * 9 + 7];
          if (uVar48 == 0) {
            uVar48 = local_398[uVar38 * 9 + 3];
            puVar57 = local_398 + uVar38 * 9 + 5;
            uVar70 = *puVar57;
            puVar56 = local_398 + uVar38 * 9 + 6;
          }
          else {
            puVar57 = local_398 + uVar38 * 9 + 5;
            uVar70 = *puVar57;
            puVar56 = local_398 + uVar38 * 9 + 6;
          }
          if (uVar70 != 0) {
            uVar44 = *puVar56;
            do {
              while( true ) {
                iVar28 = (**(code **)(*(long *)*plVar54 + 0x250))
                                   ((long *)*plVar54,uVar48,uVar70,uVar44);
                if ((-1 < iVar28) &&
                   (iVar28 = (**(code **)(*(long *)*plVar54 + 0x250))
                                       ((long *)*plVar54,iVar29,*puVar57,*puVar56), -1 < iVar28))
                goto LAB_0051d088;
                if (*puVar56 == 0) break;
                uVar44 = *puVar56 - 1;
                *puVar56 = uVar44;
                uVar70 = *puVar57;
                if (uVar70 == 0) goto LAB_0051d084;
              }
              uVar44 = 0;
              uVar70 = *puVar57 - 1;
              *puVar57 = uVar70;
            } while (uVar70 != 0);
          }
LAB_0051d084:
          *puVar56 = 0;
        }
LAB_0051d088:
        uVar38 = uVar38 + 1;
      } while (uVar38 != uVar49);
    }
  }
  uVar48 = local_398[(ulong)*(uint *)(param_1 + 0x5d8) * 9 + 3];
  *(uint *)(param_1 + 0x6a8) = uVar48;
  if (local_398[(ulong)*(uint *)(param_1 + 0x5d8) * 9 + 7] != 0) {
    uVar48 = local_398[(ulong)*(uint *)(param_1 + 0x5d8) * 9 + 7];
  }
  *(uint *)(param_1 + 0x6ac) = uVar48;
  iVar28 = FUN_005a56c0(*(undefined8 *)(param_1 + 400),uVar49,local_398,iVar29,0,uVar47);
  if (iVar28 < 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x1bad);
      uVar37 = FUN_00546ea0(iVar28);
      FUN_00517ae0("CPostEffect::Initialize(): m_pRenderBuffer->Initialize() failed (0x%x: %s).\n",
                   iVar28,uVar37);
    }
    goto LAB_0052047c;
  }
  if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x1bb5);
    FUN_00517ae0("CPostEffect::Initialize(): m_pRenderBuffer->Initialize() succeeded.\n");
  }
  if (bVar27) {
    iVar28 = *(int *)(param_1 + 0x5e0);
    lVar65 = *(long *)(param_1 + 400);
    if (iVar28 == -1) {
      iVar28 = *(int *)(lVar65 + 0x90);
    }
    if (iVar28 < *(int *)(lVar65 + 0x30)) {
      lVar68 = *(long *)(*(long *)(lVar65 + 0x38) + (long)iVar28 * 8);
      iVar28 = *(int *)(param_1 + 0x5d8);
    }
    else {
      lVar68 = 0;
      iVar28 = *(int *)(param_1 + 0x5d8);
    }
    if (iVar28 == -1) {
      iVar28 = *(int *)(lVar65 + 0x90);
    }
    if (iVar28 < *(int *)(lVar65 + 0x30)) {
      lVar65 = *(long *)(*(long *)(lVar65 + 0x38) + (long)iVar28 * 8);
    }
    else {
      lVar65 = 0;
    }
    local_698 = (uint)lVar65;
    uStack_694 = (uint)((ulong)lVar65 >> 0x20);
    *(long *)(lVar68 + 0x100) = lVar65;
    if (*(long **)(lVar68 + 0x110) == *(long **)(lVar68 + 0x118)) {
      FUN_0053c5e0(lVar68 + 0x108,&local_698);
    }
    else {
      **(long **)(lVar68 + 0x110) = lVar65;
      *(long *)(lVar68 + 0x110) = *(long *)(lVar68 + 0x110) + 8;
    }
    local_698 = (uint)lVar68;
    uStack_694 = (uint)((ulong)lVar68 >> 0x20);
    *(long *)(lVar65 + 0x100) = lVar68;
    if (*(long **)(lVar65 + 0x110) == *(long **)(lVar65 + 0x118)) {
      FUN_0053c5e0(lVar65 + 0x108,&local_698);
      goto LAB_0051d250;
    }
    **(long **)(lVar65 + 0x110) = lVar68;
    *(long *)(lVar65 + 0x110) = *(long *)(lVar65 + 0x110) + 8;
    cVar46 = param_1[0x1be];
  }
  else {
LAB_0051d250:
    cVar46 = param_1[0x1be];
  }
  if (cVar46 != '\0') {
    iVar28 = *(int *)(param_1 + 0x400);
    __n = (long)iVar28 * 8;
    plVar34 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,__n + 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1bed,0);
    plVar36 = plVar34;
    if (plVar34 != (long *)0x0) {
      plVar36 = plVar34 + 1;
      *plVar34 = (long)iVar28;
    }
    *(long **)(param_1 + 0x238) = plVar36;
                    /* WARNING: Subroutine does not return */
    memset(plVar36,0,__n);
  }
  iVar28 = *(int *)(param_1 + 0x5d8);
  iVar29 = *(int *)(param_1 + 0x5e0);
  param_1[0x558] = '\0';
  piVar69 = (int *)PTR_DAT_02713970;
  param_1[0x559] = '\0';
  param_1[0x55a] = '\0';
  param_1[0x55b] = '\0';
  if (iVar28 == iVar29) {
    param_1[0x550] = '\0';
    param_1[0x551] = '\0';
    param_1[0x552] = '\0';
    param_1[0x553] = '\0';
    param_1[0x554] = '\0';
    param_1[0x555] = '\0';
    param_1[0x556] = '\0';
    param_1[0x557] = '\0';
    uVar49 = *(uint *)(param_1 + 0x568);
    piVar69 = (int *)PTR_DAT_02713970;
  }
  else {
    lVar65 = *(long *)(param_1 + 400);
    if (iVar28 == -1) {
      iVar28 = *(int *)(lVar65 + 0x90);
    }
    if (iVar28 < *(int *)(lVar65 + 0x30)) {
      lVar68 = *(long *)(*(long *)(lVar65 + 0x38) + (long)iVar28 * 8);
    }
    else {
      lVar68 = 0;
    }
    if (iVar29 == -1) {
      iVar29 = *(int *)(lVar65 + 0x90);
    }
    lVar65 = *(long *)(*(long *)(lVar65 + 0x38) + (long)iVar29 * 8);
    fVar71 = (float)NEON_ucvtf(*(undefined4 *)(lVar68 + 0x54));
    fVar71 = (float)(*(int *)(lVar65 + 0x54) + 1) / fVar71;
    fVar74 = (float)NEON_ucvtf(*(undefined4 *)(lVar68 + 0x58));
    fVar74 = (float)(*(int *)(lVar65 + 0x58) + 1) / fVar74;
    if (fVar71 <= fVar74) {
      fVar71 = fVar74;
    }
    fVar71 = logf(fVar71);
    fVar71 = fVar71 / DAT_01d4c0dc;
    uVar49 = (int)fVar71 - 1;
    *(uint *)(param_1 + 0x558) = uVar49 & ((int)uVar49 >> 0x1f ^ 0xffffffffU);
    param_1[0x550] = '\0';
    puVar21 = PTR_DAT_027139b0;
    puVar42 = (undefined8 *)PTR_PTR_02713988;
    param_1[0x551] = '\0';
    param_1[0x552] = '\0';
    param_1[0x553] = '\0';
    param_1[0x554] = '\0';
    param_1[0x555] = '\0';
    param_1[0x556] = '\0';
    param_1[0x557] = '\0';
    if (1 < (int)fVar71) {
      iVar28 = *(int *)PTR_DAT_027139b0;
      if (iVar28 < 1) {
        plVar36 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                       "../src/GPU\\GPUClassUtil.h",0x49,0);
        FUN_0056dc10(plVar36,0);
        *(long **)PTR_DAT_027139b8 = plVar36;
        *(undefined4 *)puVar21 = 1;
      }
      else {
        plVar36 = *(long **)PTR_DAT_027139b8;
        *(int *)PTR_DAT_027139b0 = iVar28 + 1;
        puVar42 = (undefined8 *)PTR_PTR_02713988;
        if (1 < iVar28 + 1) goto LAB_0051d600;
      }
      if (plVar36 == (long *)0x0) {
        iVar28 = 0;
      }
      else {
        uVar37 = *puVar42;
        (**(code **)(*plVar36 + 0x20))(plVar36);
        FUN_005b9b10(uVar37,plVar36);
        iVar28 = 0;
        *(undefined8 *)PTR_DAT_027139b8 = 0;
      }
LAB_0051d600:
      *(int *)puVar21 = iVar28;
      iVar28 = *(int *)(param_1 + 0x558);
      plVar34 = (long *)FUN_005b9a50(*puVar42,(long)iVar28 * 8 + 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1c30,0);
      plVar36 = plVar34;
      if (plVar34 != (long *)0x0) {
        plVar36 = plVar34 + 1;
        *plVar34 = (long)iVar28;
      }
      *(long **)(param_1 + 0x550) = plVar36;
                    /* WARNING: Subroutine does not return */
      memset(plVar36,0,(long)*(int *)(param_1 + 0x558) << 3);
    }
    uVar49 = *(uint *)(param_1 + 0x568);
  }
  if ((int)uVar49 < 0) {
    iVar28 = *(int *)(param_1 + 0x5e0);
    if (iVar28 == -1) {
      iVar28 = *(int *)(*(long *)(param_1 + 400) + 0x90);
    }
    fVar71 = (float)NEON_ucvtf(*(undefined4 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 400) + 0x38) +
                                          (long)iVar28 * 8) + 0x54));
    fVar71 = logf(16.0 / fVar71);
    uVar49 = (int)(fVar71 / DAT_01d4c0dc) - 1;
    uVar49 = uVar49 & ((int)uVar49 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0x568) = uVar49;
  }
  param_1[0x560] = '\0';
  puVar21 = PTR_DAT_027139b0;
  puVar42 = (undefined8 *)PTR_PTR_02713988;
  param_1[0x561] = '\0';
  param_1[0x562] = '\0';
  param_1[0x563] = '\0';
  param_1[0x564] = '\0';
  param_1[0x565] = '\0';
  param_1[0x566] = '\0';
  param_1[0x567] = '\0';
  if (uVar49 != 0) {
    iVar28 = *(int *)PTR_DAT_027139b0;
    if (iVar28 < 1) {
      plVar36 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                     "../src/GPU\\GPUClassUtil.h",0x49,0);
      FUN_0056dc10(plVar36,0);
      *(long **)PTR_DAT_027139b8 = plVar36;
      *(undefined4 *)puVar21 = 1;
    }
    else {
      plVar36 = *(long **)PTR_DAT_027139b8;
      *(int *)PTR_DAT_027139b0 = iVar28 + 1;
      puVar42 = (undefined8 *)PTR_PTR_02713988;
      if (1 < iVar28 + 1) goto LAB_0051d828;
    }
    if (plVar36 == (long *)0x0) {
      iVar28 = 0;
    }
    else {
      uVar37 = *puVar42;
      (**(code **)(*plVar36 + 0x20))(plVar36);
      FUN_005b9b10(uVar37,plVar36);
      iVar28 = 0;
      *(undefined8 *)PTR_DAT_027139b8 = 0;
    }
LAB_0051d828:
    *(int *)puVar21 = iVar28;
    iVar28 = *(int *)(param_1 + 0x568);
    plVar34 = (long *)FUN_005b9a50(*puVar42,(long)iVar28 << 4 | 8,
                                   "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1c71,0);
    plVar36 = plVar34;
    if (plVar34 != (long *)0x0) {
      plVar36 = plVar34 + 1;
      *plVar34 = (long)iVar28;
    }
    *(long **)(param_1 + 0x560) = plVar36;
                    /* WARNING: Subroutine does not return */
    memset(plVar36,0,(long)*(int *)(param_1 + 0x568) << 4);
  }
  param_1[0x580] = '\0';
  param_1[0x581] = '\0';
  param_1[0x582] = '\0';
  param_1[0x583] = '\0';
  if (param_1[0x1d2] == '\0') {
    param_1[0x578] = '\0';
    param_1[0x579] = '\0';
    param_1[0x57a] = '\0';
    param_1[0x57b] = '\0';
    param_1[0x57c] = '\0';
    param_1[0x57d] = '\0';
    param_1[0x57e] = '\0';
    param_1[0x57f] = '\0';
    param_1[0x570] = '\0';
    param_1[0x571] = '\0';
    param_1[0x572] = '\0';
    param_1[0x573] = '\0';
    param_1[0x574] = '\0';
    param_1[0x575] = '\0';
    param_1[0x576] = '\0';
    param_1[0x577] = '\0';
    puVar42 = (undefined8 *)PTR_PTR_02713988;
  }
  else {
    uVar49 = uVar2;
    if (uVar3 <= uVar2) {
      uVar49 = uVar3;
    }
    dVar72 = log((double)(int)uVar49);
    dVar72 = ldexp(1.0,(int)(dVar72 / DAT_01cd5460));
    uVar48 = (uint)dVar72;
    uVar49 = uVar48;
    if (0x3ff < uVar48) {
      uVar49 = 0x400;
    }
    if (uVar48 == 0) {
      uVar49 = 1;
    }
    fVar71 = logf((float)uVar49);
    *(int *)(param_1 + 0x580) = (int)(fVar71 / DAT_01d4c4dc + -2.0 + DAT_01d4bdf0);
    fVar71 = logf((float)uVar49);
    fVar71 = fVar71 / DAT_01d4c494;
    param_1[0x578] = '\0';
    param_1[0x579] = '\0';
    param_1[0x57a] = '\0';
    param_1[0x57b] = '\0';
    param_1[0x57c] = '\0';
    param_1[0x57d] = '\0';
    param_1[0x57e] = '\0';
    param_1[0x57f] = '\0';
    param_1[0x570] = '\0';
    param_1[0x571] = '\0';
    param_1[0x572] = '\0';
    param_1[0x573] = '\0';
    param_1[0x574] = '\0';
    param_1[0x575] = '\0';
    param_1[0x576] = '\0';
    param_1[0x577] = '\0';
    iVar28 = (int)fVar71 + -1;
    if (2 < iVar28) {
      iVar28 = 3;
    }
    iVar28 = *(int *)(param_1 + 0x580) - iVar28;
    if (iVar28 < 2) {
      iVar28 = 1;
    }
    *(int *)(param_1 + 0x580) = iVar28;
    puVar21 = PTR_PTR_02713988;
    puVar42 = (undefined8 *)PTR_PTR_02713988;
    if (iVar28 != 0) {
      uVar48 = *(uint *)(param_1 + 0x400);
      lVar68 = (long)(int)uVar48;
      lVar65 = lVar68 * 8 + 8;
      plVar50 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,lVar65,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1ccf,0);
      plVar34 = plVar50;
      if (plVar50 != (long *)0x0) {
        plVar34 = plVar50 + 1;
        *plVar50 = lVar68;
      }
      *(long **)(param_1 + 0x570) = plVar34;
      plVar50 = (long *)FUN_005b9a50(*(undefined8 *)puVar21,lVar65,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1cd3,0);
      plVar34 = plVar50;
      if (plVar50 != (long *)0x0) {
        plVar34 = plVar50 + 1;
        *plVar50 = lVar68;
      }
      *(long **)(param_1 + 0x588) = plVar34;
      puVar42 = (undefined8 *)PTR_PTR_02713988;
      if (0 < (int)uVar48) {
        uVar38 = 0;
        do {
          FUN_00552650(auStack_3a8,uVar38 & 0xffffffff);
          FUN_00552a50(&local_c8,"CPostEffect::m_ppOetfSceneLuminanceBaseWork[",auStack_3a8);
          FUN_005527f0(&local_698,&local_c8,0x5d);
          uVar37 = CONCAT44(uStack_68c,local_690);
          uVar41 = FUN_005b9a50(*puVar42,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",
                                0x1cdc,0);
          FUN_0059aa70(uVar41,uVar37);
          lVar65 = uVar38 * 8;
          *(undefined8 *)(*(long *)(param_1 + 0x570) + lVar65) = uVar41;
          FUN_00551380(&local_698);
          FUN_00551380(&local_c8);
          FUN_00551380(auStack_3a8);
          local_698 = 0x400;
          uStack_68c = 0x1a;
          local_688 = 1;
          local_684 = 0;
          uStack_680 = 0;
          local_67c = 0;
          local_678 = local_678 & 0xffffff00;
          uStack_694 = uVar49;
          local_690 = uVar49;
          FUN_0059abd0(*(undefined8 *)(*(long *)(param_1 + 0x570) + lVar65),&local_698);
          FUN_00552650(auStack_3a8,uVar38 & 0xffffffff);
          FUN_00552a50(&local_c8,"CPostEffect::m_ppOetfQuerySceneLuminance[",auStack_3a8);
          FUN_005527f0(&local_698,&local_c8,0x5d);
          uVar37 = CONCAT44(uStack_68c,local_690);
          uVar41 = FUN_005b9a50(*puVar42,0x508,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",
                                0x1ce5,0);
          FUN_005b8780(uVar41,uVar37);
          *(undefined8 *)(*(long *)(param_1 + 0x588) + lVar65) = uVar41;
          FUN_00551380(&local_698);
          FUN_00551380(&local_c8);
          FUN_00551380(auStack_3a8);
          local_698 = 4;
          uStack_694 = 1;
          local_690 = 1;
          uStack_68c = 0;
          FUN_005b8880(*(undefined8 *)(*(long *)(param_1 + 0x588) + lVar65),&local_698);
          uVar38 = uVar38 + 1;
        } while (uVar48 != uVar38);
      }
      uVar48 = *(uint *)(param_1 + 0x580);
      plVar50 = (long *)FUN_005b9a50(*puVar42,(long)(int)uVar48 * 8 + 8,
                                     "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x1cf1,0);
      plVar34 = plVar50;
      if (plVar50 != (long *)0x0) {
        plVar34 = plVar50 + 1;
        *plVar50 = (long)(int)uVar48;
      }
      piVar69 = (int *)PTR_DAT_02713970;
      *(long **)(param_1 + 0x578) = plVar34;
      if (0 < (int)uVar48) {
        lVar65 = 0;
        uVar38 = (ulong)uVar48;
        uVar48 = uVar49;
        do {
          uVar70 = uVar49 >> 1;
          if (((uVar70 == 8) || (uVar70 == 0x80)) || (uVar70 == 0x20)) {
            uVar48 = uVar48 >> 2;
            uVar49 = uVar49 >> 2;
          }
          else {
            uVar48 = uVar48 >> 1;
            uVar49 = uVar70;
          }
          if (uVar49 < 2) {
            uVar49 = 1;
          }
          if (uVar48 < 2) {
            uVar48 = 1;
          }
          FUN_0059fcc0(plVar36[0x534b],*(long *)(param_1 + 0x578) + lVar65,uVar49,uVar48,0x1a,1,0,0)
          ;
          lVar65 = lVar65 + 8;
          uVar38 = uVar38 - 1;
          puVar42 = (undefined8 *)PTR_PTR_02713988;
        } while (uVar38 != 0);
      }
    }
  }
  fVar74 = DAT_01d4c374;
  fVar71 = DAT_01d4bdf0;
  local_6e0 = (long *)(param_1 + 0x570);
  puVar6 = &DAT_0275ce28;
  if (*PTR_DAT_027139f0 != '\0') {
    puVar6 = &DAT_0275ce68;
  }
  if (fVar79 <= 0.0) {
    fVar79 = *(float *)((long)puVar6 +
                       (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3));
  }
  fVar75 = *(float *)(param_1 + 0x420) / *(float *)(param_1 + 0x428);
  if (fVar75 < fVar77) {
    fVar79 = fVar79 * (fVar75 / fVar77);
  }
  fVar81 = (float)uVar60;
  uStack_68c = (uint)(fVar79 * fVar81 + DAT_01d4bdf0);
  if (uVar60 <= uStack_68c) {
    uStack_68c = uVar60;
  }
  if (uVar2 <= uStack_68c) {
    uStack_68c = uVar2;
  }
  if (uVar7 != 0) {
    uStack_68c = uVar7;
  }
  iStack_66c = *(int *)((long)puVar6 + (long)(int)param_3 * 8 + 4);
  if (iVar33 != 0) {
    iStack_66c = iVar33;
  }
  local_688 = (uint)((float)uStack_68c / fVar75 + DAT_01d4c374);
  if ((uStack_68c < 0x10) || (local_688 < 0x10)) {
    if (uStack_68c < local_688) {
      uStack_68c = 0x10;
      local_688 = (uint)(16.0 / fVar75 + DAT_01d4c374);
    }
    else {
      local_688 = 0x10;
      uStack_68c = (uint)(fVar75 * 16.0 + DAT_01d4c374);
    }
  }
  local_684 = local_684 & 0xffffff00;
  local_698 = 0;
  uStack_680 = *(undefined4 *)(param_1 + 0x460);
  uStack_668 = 0;
  uStack_664 = 0;
  local_660 = 0;
  uStack_65c = 0;
  local_67c = uVar2 >> 1;
  if (*(uint *)(param_1 + 0x464) != 0) {
    local_67c = *(uint *)(param_1 + 0x464);
  }
  uStack_658 = *(undefined4 *)(param_1 + 0x46c);
  uStack_654 = *(uint *)(param_1 + 0x470);
  local_650 = CONCAT44(*(undefined4 *)(param_1 + 0x400),
                       (int)CONCAT53(local_650._3_5_,
                                     CONCAT12((char)(*(uint *)(param_1 + 0x2b4) >> 7),
                                              *(undefined2 *)(param_1 + 0x468)))) &
              0xffffffffff01ffff;
  local_648 = CONCAT71(local_648._1_7_,1);
  local_648 = CONCAT44(2,(undefined4)local_648);
  local_640 = CONCAT31(local_640._1_3_,((byte)(uVar35 >> 0x18) & 0x10) >> 4);
  iStack_63c = *(int *)(param_1 + 0x478);
  fStack_638 = (float)CONCAT31(fStack_638._1_3_,uVar61 != 0);
  uVar47 = *(undefined4 *)(param_1 + 0x524);
  cStack_634 = (char)uVar47;
  uStack_633 = (undefined1)((uint)uVar47 >> 8);
  uStack_632 = (undefined2)((uint)uVar47 >> 0x10);
  pcVar67 = param_1 + 0x528;
  uStack_630 = (uint)pcVar67;
  uStack_62c = (undefined1)((ulong)pcVar67 >> 0x20);
  uStack_62b = (undefined1)((ulong)pcVar67 >> 0x28);
  uStack_62a = (undefined2)((ulong)pcVar67 >> 0x30);
  cStack_628 = param_1[0x1b9];
  cStack_627 = param_1[0x1cc];
  fStack_624 = *(float *)(param_1 + 0x420) / *(float *)(param_1 + 0x424);
  local_61c = CONCAT31(local_61c._1_3_,(char)(*(uint *)(param_1 + 0x2b4) >> 0x12)) & 0xffffff01;
  fStack_620 = *(float *)(param_1 + 0x42c) / *(float *)(param_1 + 0x424);
  uStack_694 = uVar2;
  local_690 = uVar3;
  local_678 = local_6d0;
  iStack_674 = iVar30;
  uStack_670 = uVar63;
  iVar28 = FUN_00555650(*(undefined8 *)(param_1 + 0x198),&local_698);
  if (iVar28 < 0) {
    if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x1dfb);
    uVar37 = FUN_00546ea0(iVar28);
    pcVar67 = "CPostEffect::Initialize(): m_pRenderGlare->Initialize() failed (0x%x: %s).\n";
    goto LAB_00520470;
  }
  puVar56 = (uint *)(param_1 + 0x6a8);
  if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x1e02);
    FUN_00517ae0("CPostEffect::Initialize(): m_pRenderGlare->Initialize() succeeded.\n");
  }
  if (param_1[0x1cc] != '\0') {
    local_678 = local_678 & 0xffffff00;
    local_698 = 0;
    local_688 = 1;
    local_684 = 0;
    uStack_680 = 0;
    iStack_66c = 0;
    uStack_668 = 0;
    iStack_674 = 0;
    uStack_670 = 0;
    uStack_664 = 1;
    uStack_658 = 0;
    uStack_654 = uStack_654 & 0xffffff00;
    local_660 = 0;
    uStack_65c = 0;
    local_640 = 1;
    local_650 = 0;
    local_648 = 0;
    cStack_634 = '\0';
    uStack_633 = 0;
    uStack_632 = 0;
    uStack_630 = uStack_630 & 0xffffff00;
    iStack_63c = 0;
    fStack_638 = 0.0;
    fStack_624 = 0.0;
    fStack_620 = 0.0;
    uStack_62c = 0;
    uStack_62b = 0;
    uStack_62a = 0;
    cStack_628 = '\0';
    cStack_627 = '\0';
    uStack_626 = 0;
    local_61c = 1;
    uStack_610 = 0;
    uStack_60c = uStack_60c & 0xffffff00;
    local_618 = 0;
    local_614 = 0;
    local_5f8 = 1;
    local_608 = 0;
    uStack_604 = 0;
    uStack_600 = 0;
    uStack_5ec = 0;
    uStack_5f4 = 0;
    local_5ef = 0;
    local_5dc = 0;
    local_5e4 = 0;
    local_5d4 = 1;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    local_5cb = 0;
    local_5b0 = 1;
    local_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5a4 = 0;
    uStack_5ac = 0;
    local_5a7 = 0;
    local_594 = 0;
    local_59c = 0;
    local_58c = 1;
    uStack_580 = 0;
    uStack_588 = 0;
    local_583 = 0;
    local_568 = 1;
    local_578 = 0;
    uStack_570 = 0;
    uStack_55c = 0;
    uStack_564 = 0;
    local_55f = 0;
    local_554 = 0;
    local_54c = 0;
    local_544 = 1;
    uStack_538 = 0;
    uStack_540 = 0;
    local_53b = 0;
    local_528 = 0;
    local_530 = 0;
    local_520 = 1;
    uStack_514 = 0;
    uStack_51c = 0;
    local_517 = 0;
    local_50c = 0;
    local_504 = 0;
    local_4fc = 1;
    uStack_4f0 = 0;
    uStack_4f8 = 0;
    local_4f3 = 0;
    local_4e0 = 0;
    local_4e8 = 0;
    local_4d8 = 1;
    uStack_4cc = 0;
    uStack_4d4 = 0;
    local_4cf = 0;
    local_4c4 = 0;
    local_4bc = 0;
    local_4b4 = 1;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    local_4ab = 0;
    local_498 = 0;
    local_4a0 = 0;
    local_490 = 1;
    uStack_484 = 0;
    uStack_48c = 0;
    local_487 = 0;
    local_47c = 0;
    local_474 = 0;
    local_46c = 1;
    uStack_460 = 0;
    uStack_468 = 0;
    local_463 = 0;
    local_450 = 0;
    local_458 = 0;
    local_448 = 1;
    uStack_43c = 0;
    uStack_444 = 0;
    local_43f = 0;
    local_434 = 0;
    local_42c = 0;
    local_424 = 1;
    uStack_418 = 0;
    uStack_420 = 0;
    local_41b = 0;
    local_408 = 0;
    local_410 = 0;
    local_400 = 1;
    uStack_3f4 = 0;
    uStack_3fc = 0;
    local_3f7 = 0;
    local_3e4 = 0;
    local_3ec = 0;
    local_3dc = 1;
    uStack_3d0 = 0;
    uStack_3d8 = 0;
    local_3d3 = 0;
    local_67c = *(uint *)(param_1 + 0x474);
    lVar65 = *(long *)(param_1 + 400);
    if (local_67c == 0) {
      iVar28 = *(int *)(param_1 + 0x5d8);
      if (iVar28 == -1) {
        iVar28 = *(int *)(lVar65 + 0x90);
      }
      puVar57 = puVar56;
      if ((iVar28 < *(int *)(lVar65 + 0x30)) &&
         (lVar68 = *(long *)(*(long *)(lVar65 + 0x38) + (long)iVar28 * 8), lVar68 != 0)) {
        puVar57 = (uint *)(lVar68 + 0x38);
      }
      iVar28 = *(int *)(param_1 + 0x5e0);
      local_67c = *puVar57;
      iVar33 = iVar28;
      if (iVar28 == -1) {
        iVar33 = *(int *)(lVar65 + 0x90);
      }
      uStack_68c = *(uint *)(*(long *)(*(long *)(lVar65 + 0x38) + (long)iVar33 * 8) + 0x38);
    }
    else {
      iVar28 = *(int *)(param_1 + 0x5e0);
      uStack_68c = local_67c;
    }
    iVar33 = iVar28;
    if (iVar28 == -1) {
      iVar33 = *(int *)(lVar65 + 0x90);
    }
    uStack_694 = *(uint *)(*(long *)(*(long *)(lVar65 + 0x38) + (long)iVar33 * 8) + 0x54) >> 1;
    if (iVar28 == -1) {
      iVar28 = *(int *)(lVar65 + 0x90);
    }
    uVar49 = *(uint *)(*(long *)(param_1 + 0x198) + 0xbc);
    uVar48 = *(uint *)(*(long *)(param_1 + 0x198) + 0xc0);
    local_690 = *(uint *)(*(long *)(*(long *)(lVar65 + 0x38) + (long)iVar28 * 8) + 0x58) >> 1;
    if (uStack_694 <= uVar49) {
      uStack_694 = uVar49;
    }
    if (local_690 <= uVar48) {
      local_690 = uVar48;
    }
    iVar28 = FUN_005a56c0(*(undefined8 *)(param_1 + 0x1b0),1,&local_698,0,0,0);
    if (iVar28 < 0) {
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x1e40);
      uVar37 = FUN_00546ea0(iVar28);
      pcVar67 = 
      "CPostEffect::Initialize(): m_pGlareModulatorWork->Initialize() failed (0x%x: %s).\n";
      goto LAB_00520470;
    }
    if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x1e48);
      FUN_00517ae0("CPostEffect::Initialize(): m_pGlareModulatorWork->Initialize() succeeded.\n");
    }
  }
  if (param_1[0x1cf] != '\0') {
    uVar37 = *(undefined8 *)(*(uint **)(param_1 + 0x30) + 2);
    uStack_68c = **(uint **)(param_1 + 0x30);
    local_698 = 0;
    uVar47 = 1;
    if (*(int *)(param_1 + 0x540) == 2) {
      uVar47 = 2;
    }
    uStack_694 = (uint)uVar37;
    local_690 = (uint)((ulong)uVar37 >> 0x20);
    local_688 = 1;
    local_67c = 0;
    local_678 = local_678 & 0xffffff00;
    local_684 = 0;
    uStack_680 = 0;
    iVar28 = FUN_005a56c0(*(undefined8 *)(param_1 + 0x1a8),uVar47,&local_698,0,1,0);
    if (iVar28 < 0) {
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x1e65);
      uVar37 = FUN_00546ea0(iVar28);
      pcVar67 = 
      "CPostEffect::Initialize(): m_pEffectColorAlphaDestinationWork->Initialize() failed (0x%x: %s).\n"
      ;
      goto LAB_00520470;
    }
    if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x1e6d);
      FUN_00517ae0(
                  "CPostEffect::Initialize(): m_pEffectColorAlphaDestinationWork->Initialize() succeeded.\n"
                  );
    }
  }
  if (param_1[0x1b8] != '\0') {
    if (fVar84 <= 0.0) {
      fVar84 = *(float *)((long)&DAT_0275d098 + (long)(int)param_4 * 0x1c);
    }
    fVar79 = *(float *)(param_1 + 0x420) / *(float *)(param_1 + 0x42c);
    if (param_1[0x430] == '\0') {
      fVar75 = SQRT(fVar79 / fVar77);
      if (NAN(fVar75)) {
        fVar75 = sqrtf(fVar79 / fVar77);
      }
LAB_0051e474:
      fVar84 = fVar84 * fVar75;
    }
    else if (fVar77 < fVar79) {
      fVar75 = fVar79 / fVar77;
      goto LAB_0051e474;
    }
    uVar49 = (uint)(fVar84 * fVar81 + fVar71);
    if (uVar60 <= uVar49) {
      uVar49 = uVar60;
    }
    if (uVar2 <= uVar49) {
      uVar49 = uVar2;
    }
    if (uVar8 != 0) {
      uVar49 = uVar8;
    }
    lVar65 = (long)(int)param_4 * 0x1c;
    uVar48 = *(uint *)((long)&DAT_0275d098 + lVar65 + 4);
    if (uVar12 != 0) {
      uVar48 = uVar12;
    }
    uVar70 = 9;
    if (-1 < (int)*(uint *)((long)&DAT_0275d0a8 + lVar65)) {
      uVar70 = *(uint *)((long)&DAT_0275d0a8 + lVar65);
    }
    if ((int)uVar13 < 0) {
      uVar13 = uVar70;
    }
    uVar70 = 0xfffffffe;
    if (*(int *)(param_1 + 0x490) < 0) {
      uVar70 = uVar13;
    }
    cVar46 = param_1[0x4ec];
    uVar44 = 7;
    if (uVar70 != 8 || 2 < iVar5 - 5U) {
      uVar44 = uVar70;
    }
    iVar28 = *(int *)((long)&DAT_0275d0a8 + lVar65 + 4);
    if (iVar53 != 0) {
      iVar28 = iVar53;
    }
    if (fVar80 <= 0.0) {
      fVar80 = *(float *)((long)&DAT_0275d0b0 + lVar65);
    }
    uVar70 = (uint)((float)uVar49 / fVar79 + fVar74);
    if ((uVar49 < 0x10) || (uVar70 < 0x10)) {
      if (uVar49 < uVar70) {
        uVar49 = 0x10;
        uVar70 = (uint)(16.0 / fVar79 + fVar74);
      }
      else {
        uVar70 = 0x10;
        uVar49 = (uint)(fVar79 * 16.0 + fVar74);
      }
    }
    if (*(uint *)(param_1 + 0x4c8) != 0) {
      uVar63 = *(uint *)(param_1 + 0x4c8);
    }
    if (param_1[0x597] == '\0') {
LAB_0051e5f0:
      if (uVar63 != 0) {
LAB_0051e5f4:
        iVar33 = (**(code **)(*(long *)*plVar54 + 600))((long *)*plVar54,0x20001,3,uVar63);
        uVar45 = 0;
        if (-1 < iVar33) {
          uVar45 = uVar63;
        }
        goto LAB_0051e628;
      }
      uVar45 = 0;
      if (*(int *)(param_1 + 0x4cc) != 0) goto LAB_0051e634;
LAB_0051e660:
      FUN_00542d00(*plVar54);
      if ((DAT_0275cc38 & 1) != 0) goto LAB_0051e644;
LAB_0051e684:
      DAT_0275cc38 = 1;
      DAT_0275cd58 = 0;
      DAT_0275cd60 = 0x600000002;
      DAT_0275cd68 = 6;
      if (4 < uVar64) goto LAB_0051e90c;
LAB_0051e6a8:
      uStack_68c = *(uint *)((long)&DAT_0275cd58 + (long)(int)uVar64 * 4);
      local_684 = uVar45;
      piVar69 = (int *)PTR_DAT_02713970;
      puVar42 = (undefined8 *)PTR_PTR_02713988;
    }
    else {
      if (0x27 < uVar63 - 2) {
        uVar45 = 0;
        if (0x39 < uVar63 - 10) goto LAB_0051e5e0;
LAB_0051e5c0:
        if ((1L << ((ulong)(uVar63 - 10) & 0x3f) & 0x200100001000001U) == 0) goto LAB_0051e5e0;
        goto LAB_0051e5f4;
      }
      uVar45 = (uint)(0xc0000c4011 >> ((ulong)(uVar63 - 2) & 0x3f)) & 1;
      if (uVar63 - 10 < 0x3a) goto LAB_0051e5c0;
LAB_0051e5e0:
      if (uVar45 != 0 || uVar63 == 0x1a) goto LAB_0051e5f0;
      uVar45 = 0;
      if ((uVar63 < 0x3c) && ((1L << ((ulong)uVar63 & 0x3f) & 0xf80007800007800U) != 0))
      goto LAB_0051e5f4;
LAB_0051e628:
      if (*(int *)(param_1 + 0x4cc) == 0) goto LAB_0051e660;
LAB_0051e634:
      if ((DAT_0275cc38 & 1) == 0) goto LAB_0051e684;
LAB_0051e644:
      if (uVar64 < 5) goto LAB_0051e6a8;
LAB_0051e90c:
      if (uVar64 != 0xffffffff) {
        if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",
                       0x3f0);
          FUN_00517ae0("GetEffectDofEdgeQualityTypeFromEdgeQualityType(): Unsupported EPFX_DOFEDGEQUALITY: %d is specified.\n"
                       ,uVar64);
        }
        goto LAB_0051e6a8;
      }
      uStack_68c = 0x10000000;
      local_684 = uVar45;
      piVar69 = (int *)PTR_DAT_02713970;
      puVar42 = (undefined8 *)PTR_PTR_02713988;
    }
    if ((DAT_0275cc39 & 1) == 0) {
      DAT_0275cc39 = 1;
      DAT_0275cdac = 0x100000000;
      DAT_0275cdb4 = 0x300000002;
      DAT_0275cdbc = 0x500000004;
      DAT_0275cdc4 = 0x500000005;
    }
    uStack_680 = *(undefined4 *)((long)&DAT_0275cdac + (long)iVar5 * 4);
    cStack_628 = '\x02';
    uStack_62b = 0;
    local_698 = 0;
    if ((int)uVar44 < 0) {
      local_678 = *(uint *)(param_1 + 0x490);
      iStack_674 = *(int *)(param_1 + 0x494);
      uStack_670 = *(uint *)(param_1 + 0x498);
      iStack_66c = *(int *)(param_1 + 0x49c);
      uStack_668 = *(undefined4 *)(param_1 + 0x4a0);
      uStack_664 = *(undefined4 *)(param_1 + 0x4a4);
      local_660 = *(undefined4 *)(param_1 + 0x4a8);
      uStack_65c = *(undefined4 *)(param_1 + 0x4ac);
      uStack_658 = *(undefined4 *)(param_1 + 0x4b0);
      uStack_654 = *(uint *)(param_1 + 0x4b4);
      local_650 = *(ulong *)(param_1 + 0x4b8);
      uVar47 = *(undefined4 *)(param_1 + 0x4c0);
      pcVar67 = param_1 + 0x4c4;
      local_67c = uVar44;
    }
    else {
      local_67c = 0xffffffff;
      lVar65 = (long)(int)uVar44;
      lVar68 = lVar65 * 0x38;
      local_678 = *(uint *)((long)&DAT_0275d2c4 + lVar68 + 4);
      iStack_674 = *(int *)(&DAT_0275d2cc + lVar65 * 7);
      uStack_670 = *(uint *)((long)&DAT_0275d2cc + lVar68 + 4);
      iStack_66c = *(int *)(&DAT_0275d2d4 + lVar65 * 7);
      uStack_668 = *(undefined4 *)((long)&DAT_0275d2d4 + lVar68 + 4);
      uStack_664 = (&DAT_0275d2dc)[lVar65 * 0xe];
      local_660 = *(undefined4 *)(&DAT_0275d2e0 + lVar65 * 7);
      uStack_65c = *(undefined4 *)((long)&DAT_0275d2e0 + lVar68 + 4);
      uStack_654 = *(uint *)((long)&DAT_0275d2e8 + lVar68 + 4);
      local_650 = (&DAT_0275d2f0)[lVar65 * 7];
      uStack_658 = *(undefined4 *)(&DAT_0275d2e8 + lVar65 * 7);
      pcVar67 = (char *)((long)&DAT_0275d2f8 + lVar68 + 4);
      uVar47 = *(undefined4 *)(&DAT_0275d2f8 + lVar65 * 7);
    }
    local_648 = CONCAT44(*(undefined4 *)pcVar67,uVar47);
    local_640 = 0xffffffff;
    uStack_633 = 1;
    uStack_630 = 2;
    uStack_62c = *(undefined1 *)(*plVar54 + 0x14ef0);
    if (iVar5 - 5U < 3) {
      uStack_62b = 1;
      cStack_628 = '\x02';
      if (iVar5 == 7) {
        cStack_628 = '\x01';
      }
      else if (iVar5 == 6) {
        cStack_628 = '\0';
      }
    }
    uStack_626 = 0;
    cStack_627 = '\0';
    fStack_624 = *(float *)(param_1 + 0x420) / *(float *)(param_1 + 0x424);
    fStack_620 = *(float *)(param_1 + 0x42c) / *(float *)(param_1 + 0x424);
    local_61c = *(uint *)(param_1 + 0x4d0);
    local_618 = *(undefined4 *)(param_1 + 0x4d4);
    uStack_610 = *(undefined4 *)(param_1 + 0x4d8);
    uStack_60c = *(uint *)(param_1 + 0x4dc);
    local_608 = *(undefined4 *)(param_1 + 0x4e0);
    local_614 = local_614 & 0xffffff00;
    iVar33 = *(int *)(param_1 + 0x5e0);
    lVar65 = *(long *)(param_1 + 400);
    if (iVar33 == -1) {
      iVar33 = *(int *)(lVar65 + 0x90);
    }
    if (iVar33 < *(int *)(lVar65 + 0x30)) {
      uVar37 = *(undefined8 *)(*(long *)(lVar65 + 0x38) + (long)iVar33 * 8);
    }
    else {
      uVar37 = 0;
    }
    PTR_DAT_02713970 = (undefined *)piVar69;
    PTR_PTR_02713988 = (undefined *)puVar42;
    uStack_694 = uVar49;
    local_690 = uVar70;
    local_688 = uVar48;
    iStack_63c = iVar28;
    fStack_638 = fVar80;
    cStack_634 = cVar46;
    iVar28 = FUN_005aa180(*(undefined8 *)(param_1 + 0x1a0),uVar37,&local_698);
    if (iVar28 < 0) {
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x1ffa);
      uVar37 = FUN_00546ea0(iVar28);
      pcVar67 = "CPostEffect::Initialize(): m_pDepthOfField->Initialize() failed (0x%x: %s).\n";
      goto LAB_00520470;
    }
    if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2001);
      FUN_00517ae0("CPostEffect::Initialize(): m_pDepthOfField->Initialize() succeeded.\n");
    }
  }
  if (fVar76 <= 0.0) {
    fVar76 = 0.5;
  }
  uVar63 = (int)(fVar76 * fVar81 + fVar71);
  if (uVar10 != 0) {
    uVar63 = uVar10;
  }
  if (uVar63 < uVar60) {
    uVar64 = (uint)((float)uVar63 / fVar77 + fVar74);
    uVar37 = FUN_005b9a50(*puVar42,0x98,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x2016,
                          0);
    FUN_005a4710(uVar37,"CPostEffect::m_pMotionBlurReducedWork");
    *(undefined8 *)(param_1 + 0x1e8) = uVar37;
    local_688 = 1;
    local_690 = uVar64;
    if (uVar3 <= uVar64) {
      local_690 = uVar3;
    }
    local_698 = 0;
    local_678 = local_678 & 0xffffff00;
    local_684 = 0;
    uStack_680 = 0;
    iVar28 = *(int *)(param_1 + 0x5d8);
    lVar65 = *(long *)(param_1 + 400);
    if (iVar28 == -1) {
      iVar28 = *(int *)(lVar65 + 0x90);
    }
    if (iVar28 < *(int *)(lVar65 + 0x30)) {
      lVar68 = *(long *)(*(long *)(lVar65 + 0x38) + (long)iVar28 * 8);
      if (lVar68 != 0) {
        puVar56 = (uint *)(lVar68 + 0x38);
      }
    }
    local_67c = *puVar56;
    iVar28 = *(int *)(param_1 + 0x5e0);
    if (iVar28 == -1) {
      iVar28 = *(int *)(lVar65 + 0x90);
    }
    uStack_68c = *(uint *)(*(long *)(*(long *)(lVar65 + 0x38) + (long)iVar28 * 8) + 0x38);
    uStack_694 = uVar63;
    iVar28 = FUN_005a56c0(uVar37,2,&local_698,0,1,0);
    if (iVar28 < 0) {
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x2027);
      uVar37 = FUN_00546ea0(iVar28);
      pcVar67 = 
      "CPostEffect::Initialize(): m_pMotionBlurReducedWork->Initialize() failed (0x%x: %s).\n";
      goto LAB_00520470;
    }
    if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x202f);
      FUN_00517ae0("CPostEffect::Initialize(): m_pMotionBlurReducedWork->Initialize() succeeded.\n")
      ;
    }
  }
  uVar63 = *(uint *)(param_1 + 0x504);
  if ((int)uVar63 < 0) {
    if (param_1[0x1bd] == '\0') {
      param_1[0x504] = '\0';
      param_1[0x505] = '\0';
      param_1[0x506] = '\0';
      param_1[0x507] = '\0';
      goto LAB_0051ee70;
    }
    uVar63 = uVar63 | 1;
    *(uint *)(param_1 + 0x504) = uVar63;
LAB_0051ebec:
    *(ulong *)(param_1 + 0xd48) = (ulong)(uVar63 & 1);
LAB_0051ebf8:
    if (fVar78 <= 0.0) {
      fVar78 = 0.5;
    }
    uVar63 = (uint)(fVar78 * fVar81 + fVar71);
    if (uVar60 <= uVar63) {
      uVar63 = uVar60;
    }
    if (uVar9 != 0) {
      uVar63 = uVar9;
    }
    uVar64 = (uint)((float)uVar63 / fVar77 + fVar74);
    if (uVar3 <= uVar64) {
      uVar64 = uVar3;
    }
    uVar49 = 0x18;
    if (uVar14 != 0) {
      uVar49 = uVar14;
    }
    uVar37 = FUN_005b9a50(*puVar42,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x2085
                          ,0);
    FUN_0059aa70(uVar37,"CPostEffect::m_pMotionBlurInternalVelocityTexture");
    *(undefined8 *)(param_1 + 0x1d8) = uVar37;
    local_698 = 0;
    local_688 = 1;
    local_67c = 0;
    local_678 = local_678 & 0xffffff00;
    local_684 = 0;
    uStack_680 = 0;
    uStack_694 = uVar63;
    local_690 = uVar64;
    uStack_68c = uVar49;
    iVar28 = FUN_0059abd0(uVar37,&local_698);
    if (iVar28 < 0) {
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x2095);
      uVar37 = FUN_00546ea0(iVar28);
      pcVar67 = 
      "CPostEffect::Initialize(): m_pMotionBlurInternalVelocityTexture->Initialize() failed (0x%x: %s).\n"
      ;
      goto LAB_00520470;
    }
    lVar65 = *(long *)(param_1 + 0x1e8);
    if (lVar65 == 0) {
LAB_0051ecd8:
      if (*(long *)(param_1 + 0xd48) != 1) goto LAB_0051ee78;
    }
    else {
      lVar65 = *(long *)(*(long *)(lVar65 + 0x38) + (long)*(int *)(lVar65 + 0x90) * 8);
      uVar48 = *(uint *)(lVar65 + 0x54);
      if (uVar63 <= uVar48) goto LAB_0051ecd8;
      uVar64 = *(uint *)(lVar65 + 0x58);
      uVar63 = uVar48;
    }
    uVar37 = FUN_005b9a50(*puVar42,0x98,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x20b3,
                          0);
    FUN_005a4710(uVar37,"CPostEffect::m_pMotionBlurInternalVelocityReducedWork");
    *(undefined8 *)(param_1 + 0x1e0) = uVar37;
    local_698 = 0;
    local_688 = 1;
    local_678 = local_678 & 0xffffff00;
    local_684 = 0;
    uStack_680 = 0;
    uStack_694 = uVar63;
    local_690 = uVar64;
    uStack_68c = uVar49;
    local_67c = uVar49;
    iVar28 = FUN_005a56c0(uVar37,2,&local_698,0,1,0);
    if (iVar28 < 0) {
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x20c3);
      uVar37 = FUN_00546ea0(iVar28);
      pcVar67 = 
      "CPostEffect::Initialize(): m_pMotionBlurInternalVelocityReducedWork->Initialize() failed (0x%x: %s).\n"
      ;
      goto LAB_00520470;
    }
    if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713978 == 0)) goto LAB_0051ee78;
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x20cb);
    FUN_00517ae0(
                "CPostEffect::Initialize(): m_pMotionBlurInternalVelocityReducedWork->Initialize() succeeded.\n"
                );
    cVar46 = param_1[0x1c3];
  }
  else {
    if (param_1[0x1bd] != '\0') goto LAB_0051ebec;
    if (uVar63 != 0) {
      param_1[0x504] = '\0';
      param_1[0x505] = '\0';
      param_1[0x506] = '\0';
      param_1[0x507] = '\0';
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_027139c0 == 0)) goto LAB_0051ee70;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x204f)
      ;
      FUN_00517ae0(
                  "CPostEffect::Initialize():\n\tFor using m_effectParam.m_uiVelocityDilationType,\n\tPFXINIT_MOTIONBLUR_INTERNALVELOCITYTEXTURE must be set at Initialize().\n"
                  );
      *(ulong *)(param_1 + 0xd48) = (ulong)*(uint *)(param_1 + 0x504) & 1;
      if (param_1[0x1bd] == '\0') goto LAB_0051ee78;
      goto LAB_0051ebf8;
    }
LAB_0051ee70:
    param_1[0xd48] = '\0';
    param_1[0xd49] = '\0';
    param_1[0xd4a] = '\0';
    param_1[0xd4b] = '\0';
    param_1[0xd4c] = '\0';
    param_1[0xd4d] = '\0';
    param_1[0xd4e] = '\0';
    param_1[0xd4f] = '\0';
LAB_0051ee78:
    cVar46 = param_1[0x1c3];
  }
  if (cVar46 == '\0') {
    uVar63 = 0;
    if (param_1[0x1c2] == '\0') goto LAB_0051f17c;
LAB_0051eefc:
    if (fVar82 <= 0.0) {
      fVar82 = 0.5;
    }
    uVar64 = (uint)(fVar82 * fVar81 + fVar71);
    if (uVar60 <= uVar64) {
      uVar64 = uVar60;
    }
    if (uVar11 != 0) {
      uVar64 = uVar11;
    }
    uVar49 = (uint)((float)uVar64 / fVar77 + fVar74);
    fVar79 = (float)uVar64 / fVar83;
    if (uVar3 <= uVar49) {
      uVar49 = uVar3;
    }
    uVar37 = FUN_005b9a50(*puVar42,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x214d
                          ,0);
    FUN_0059aa70(uVar37,"CPostEffect::m_pAmbientOcclusion_NormalDepthTexture_Reduced");
    *(undefined8 *)(param_1 + 0x1f8) = uVar37;
    uVar37 = FUN_005b9a50(*puVar42,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x214e
                          ,0);
    FUN_0059aa70(uVar37,"CPostEffect::m_pAmbientOcclusion_Result_Reduced");
    *(undefined8 *)(param_1 + 0x208) = uVar37;
    uVar37 = FUN_005b9a50(*puVar42,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x214f
                          ,0);
    FUN_0059aa70(uVar37,"CPostEffect::m_pAmbientOcclusion_Result_Reduced2");
    *(undefined8 *)(param_1 + 0x210) = uVar37;
    puVar21 = PTR_PTR_02713988;
    if (fVar79 < 0.375) {
      uVar37 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                            "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x2152,0);
      FUN_0059aa70(uVar37,"CPostEffect::m_pAmbientOcclusion_NormalDepthTexture_Reduced2");
      *(undefined8 *)(param_1 + 0x200) = uVar37;
      uVar37 = FUN_005b9a50(*(undefined8 *)puVar21,0x128,
                            "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x2153,0);
      FUN_0059aa70(uVar37,"CPostEffect::m_pAmbientOcclusion_Result_Reduced3");
      *(undefined8 *)(param_1 + 0x218) = uVar37;
    }
    local_698 = 0;
    local_688 = 1;
    local_67c = 0;
    local_678 = local_678 & 0xffffff00;
    local_684 = 0;
    uStack_680 = 0;
    uStack_694 = uVar64;
    local_690 = uVar49;
    uStack_68c = uVar63;
    iVar28 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x1f8),&local_698);
    if (iVar28 < 0) {
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x215d);
      uVar37 = FUN_00546ea0(iVar28);
      pcVar67 = 
      "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture_Reduced->Initialize() failed (0x%x: %s).\n"
      ;
    }
    else {
      local_698 = 0;
      local_688 = 1;
      local_67c = 0;
      local_678 = local_678 & 0xffffff00;
      local_684 = 0;
      uStack_680 = 0;
      uVar48 = 10;
      if (uVar16 != 0) {
        uVar48 = uVar16;
      }
      uStack_694 = uVar64;
      local_690 = uVar49;
      uStack_68c = uVar48;
      iVar28 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x208),&local_698);
      if (iVar28 < 0) {
        if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x216e)
        ;
        uVar37 = FUN_00546ea0(iVar28);
        pcVar67 = 
        "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced->Initialize() failed (0x%x: %s).\n"
        ;
      }
      else {
        local_698 = 0;
        local_688 = 1;
        local_67c = 0;
        local_678 = local_678 & 0xffffff00;
        local_684 = 0;
        uStack_680 = 0;
        uStack_694 = uVar64;
        local_690 = uVar49;
        uStack_68c = uVar48;
        iVar28 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x210),&local_698);
        if (-1 < iVar28) {
          if (0.375 <= fVar79) {
LAB_0051f170:
            param_1[0x220] = '\0';
            param_1[0x221] = '\0';
            param_1[0x222] = '\0';
            param_1[0x223] = '\0';
            param_1[0x224] = '\0';
            param_1[0x225] = '\0';
            param_1[0x226] = '\0';
            param_1[0x227] = '\0';
            puVar42 = (undefined8 *)PTR_PTR_02713988;
            goto LAB_0051f17c;
          }
          uVar64 = (uint)(fVar83 * 0.5 + fVar71);
          if (uVar2 <= uVar64) {
            uVar64 = uVar2;
          }
          uVar49 = (uint)((float)uVar64 / fVar77 + fVar74);
          if (uVar3 <= uVar49) {
            uVar49 = uVar3;
          }
          local_698 = 0;
          local_67c = 0;
          local_678 = local_678 & 0xffffff00;
          local_684 = 0;
          uStack_680 = 0;
          local_688 = 1;
          uStack_694 = uVar64;
          local_690 = uVar49;
          uStack_68c = uVar63;
          iVar28 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x200),&local_698);
          if (iVar28 < 0) {
            if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                         0x2193);
            uVar37 = FUN_00546ea0(iVar28);
            pcVar67 = 
            "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture_Reduced2->Initialize() failed (0x%x: %s).\n"
            ;
            goto LAB_00520470;
          }
          local_698 = 0;
          local_688 = 1;
          local_67c = 0;
          local_678 = local_678 & 0xffffff00;
          local_684 = 0;
          uStack_680 = 0;
          uStack_694 = uVar64;
          local_690 = uVar49;
          uStack_68c = uVar48;
          iVar28 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x218),&local_698);
          if (-1 < iVar28) goto LAB_0051f170;
          if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                       0x21a0);
          uVar37 = FUN_00546ea0(iVar28);
          pcVar67 = 
          "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced3->Initialize() failed (0x%x: %s).\n"
          ;
          goto LAB_00521100;
        }
        if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x217b)
        ;
        uVar37 = FUN_00546ea0(iVar28);
        pcVar67 = 
        "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced2->Initialize() failed (0x%x: %s).\n"
        ;
      }
    }
  }
  else {
    uVar37 = FUN_005b9a50(*puVar42,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x20d9
                          ,0);
    FUN_0059aa70(uVar37,"CPostEffect::m_pAmbientOcclusion_NormalDepthTexture");
    uVar63 = 0x1c;
    if (uVar15 != 0) {
      uVar63 = uVar15;
    }
    *(undefined8 *)(param_1 + 0x1f0) = uVar37;
    local_698 = 0;
    local_67c = 0;
    local_678 = local_678 & 0xffffff00;
    local_684 = 0;
    uStack_680 = 0;
    local_688 = 1;
    uStack_694 = uVar2;
    local_690 = uVar3;
    uStack_68c = uVar63;
    iVar28 = FUN_0059abd0(uVar37,&local_698);
    if (iVar28 < 0) {
      if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x20ea);
      uVar37 = FUN_00546ea0(iVar28);
      pcVar67 = 
      "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture->Initialize() failed (0x%x: %s).\n"
      ;
    }
    else {
      if (param_1[0x1c2] != '\0') goto LAB_0051eefc;
LAB_0051f17c:
      if (param_1[0x1ca] == '\0') {
LAB_0051f240:
        iVar33 = *(int *)(param_1 + 0x5e0);
        lVar65 = *(long *)(param_1 + 400);
        if (iVar33 == -1) {
          iVar33 = *(int *)(lVar65 + 0x90);
        }
        if (iVar33 < *(int *)(lVar65 + 0x30)) {
          lVar65 = *(long *)(*(long *)(lVar65 + 0x38) + (long)iVar33 * 8);
        }
        else {
          lVar65 = 0;
        }
        dVar73 = log((double)(*(uint *)(lVar65 + 0x54) >> 3));
        dVar72 = DAT_01cd5460;
        dVar73 = ldexp(1.0,(int)(dVar73 / DAT_01cd5460));
        uVar63 = (uint)dVar73;
        dVar73 = log((double)(*(uint *)(lVar65 + 0x58) >> 3));
        dVar72 = ldexp(1.0,(int)(dVar73 / dVar72));
        if (uVar63 < 0x81) {
          uVar49 = (uint)dVar72;
          uVar64 = *(uint *)(param_1 + 0x400);
        }
        else {
          uVar63 = 0x80;
          uVar49 = (uint)(DAT_01d4c1f0 / *(float *)(param_1 + 0x420) + DAT_01d4c64c);
          uVar64 = *(uint *)(param_1 + 0x400);
        }
        uVar35 = (ulong)uVar64;
        if (0 < (int)uVar64) {
          lVar65 = 0;
          lVar68 = 0x70;
          lVar59 = 0x48;
          do {
            lVar66 = *(long *)(param_1 + 0x2a8);
            local_698 = 5;
            uStack_68c = 0;
            uStack_694 = uVar63;
            local_690 = uVar49;
            iVar28 = FUN_005b8880(*(undefined8 *)(*(long *)(param_1 + 0x2a0) + lVar68),&local_698);
            if (iVar28 < 0) {
              if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x21f0);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): aeparam.m_pQuerySceneLuminance->Initialize() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            local_698 = 1;
            uStack_694 = 1;
            local_690 = 1;
            uStack_68c = 0;
            iVar28 = FUN_005b8880(*(undefined8 *)(lVar66 + lVar59),&local_698);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x2200);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): afaram.m_pQuerySceneDepth->Initialize() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            uVar35 = (ulong)*(int *)(param_1 + 0x400);
            lVar65 = lVar65 + 1;
            lVar68 = lVar68 + 0x78;
            lVar59 = lVar59 + 0x50;
          } while (lVar65 < (long)uVar35);
          piVar69 = (int *)PTR_DAT_02713970;
        }
        param_1[0x1c6] = '\0';
        param_1[0x270] = '\0';
        param_1[0x271] = '\0';
        if (param_1[0x2b6] < '\0') {
          param_1[0x1c6] = '\x01';
          uVar38 = -(uVar35 >> 0x1f & 1) & 0xfffffff800000000 | (uVar35 & 0xffffffff) << 3;
          plVar34 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,uVar38 + 8,
                                         "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x222e
                                         ,0);
          plVar36 = plVar34;
          if (plVar34 != (long *)0x0) {
            plVar36 = plVar34 + 1;
            *plVar34 = (long)(int)uVar35;
          }
          *(long **)(param_1 + 0x260) = plVar36;
                    /* WARNING: Subroutine does not return */
          memset(plVar36,0,uVar38);
        }
        piVar51 = *(int **)(param_1 + 0x30);
        param_1[0x1c7] = '\0';
        param_1[0xf2c] = '\0';
        param_1[0xf2d] = '\0';
        param_1[0xf2e] = '\0';
        param_1[0xf2f] = '\0';
        if ((uVar2 == piVar51[2]) && (uVar3 == piVar51[3])) {
          iVar33 = *(int *)(param_1 + 0x434);
          if (iVar33 != -1) goto LAB_0051f9e0;
LAB_0051f9ec:
          bVar27 = false;
          param_1[0x1ce] = '\0';
          if (-1 < *(int *)(param_1 + 0x2b4)) goto LAB_0051fa28;
LAB_0051f9fc:
          param_1[0x1ce] = '\x01';
          param_1[0x1c7] = '\x01';
LAB_0051fa58:
          FUN_0059fcc0(plVar36[0x534b],param_1 + 0x278,uVar2,uVar3,*piVar51,1,0,0);
          if (*(long *)(param_1 + 0x278) == 0) {
            if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x22e5);
              FUN_00517ae0(
                          "CPostEffect::Initialize(): pTexUtil->GetTexturePool()->AllocateTexture(&m_pTonemapConvolutionTexture) failed.\n"
                          );
            }
            goto LAB_0052047c;
          }
        }
        else {
          iVar33 = *(int *)(param_1 + 0x434);
          if (iVar33 == -1) {
            param_1[0xf2c] = '\x01';
            param_1[0xf2d] = '\0';
            param_1[0xf2e] = '\0';
            param_1[0xf2f] = '\0';
          }
          else {
LAB_0051f9e0:
            *(int *)(param_1 + 0xf2c) = iVar33;
            if (iVar33 < 1) goto LAB_0051f9ec;
          }
          bVar27 = true;
          param_1[0x1c7] = '\x01';
          param_1[0x1ce] = '\0';
          if (*(int *)(param_1 + 0x2b4) < 0) goto LAB_0051f9fc;
LAB_0051fa28:
          if ((bVar27) &&
             ((param_1[0x1c6] == '\0' ||
              (*(int *)(*(long *)(*(long *)(**(long **)(param_1 + 0x260) + 0x38) +
                                 (long)*(int *)(**(long **)(param_1 + 0x260) + 0x90) * 8) + 0x38) !=
               *piVar51)))) goto LAB_0051fa58;
        }
        *(uint *)(param_1 + 0x280) = (uint)(byte)param_1[0x1c8];
        if (param_1[0x1c6] == '\0') {
          if (param_1[0x1c7] != '\0') {
            iVar28 = (byte)param_1[0x1c8] + 1;
            goto LAB_0051fac4;
          }
        }
        else if ((param_1[0x270] == '\0') && (param_1[0x271] == '\0')) {
          iVar28 = 1;
LAB_0051fac4:
          *(int *)(param_1 + 0x280) = iVar28;
        }
        param_1[0x280] = '\0';
        param_1[0x281] = '\0';
        param_1[0x282] = '\0';
        param_1[0x283] = '\0';
        *(float *)(param_1 + 0x420) = fVar77;
        if ((*(code **)PTR_DAT_027139c8 != (code *)0x0) && (((byte)*PTR_DAT_027139d0 >> 2 & 1) != 0)
           ) {
          (**(code **)PTR_DAT_027139c8)(4,*(undefined8 *)PTR_DAT_027139d8);
        }
        iVar28 = (**(code **)**(undefined8 **)(param_1 + 400))
                           (*(undefined8 **)(param_1 + 400),*(undefined8 *)(param_1 + 0x18));
        if (-1 < iVar28) {
          if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x23c7);
            FUN_00517ae0(
                        "CPostEffect::Initialize(): m_pRenderBuffer->InitializeDevice() succeeded.\n"
                        );
          }
          puVar42 = *(undefined8 **)(param_1 + 0x1b0);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x23d4);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pGlareModulatorWork->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x23db)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pGlareModulatorWork->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x1a8);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x23e4);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pEffectColorAlphaDestinationWork->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x23eb)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pEffectColorAlphaDestinationWork->InitializeDevice() succeeded.\n"
                          );
            }
          }
          iVar28 = (**(code **)**(undefined8 **)(param_1 + 0x198))
                             (*(undefined8 **)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x18));
          if (iVar28 < 0) {
            if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                         0x23f6);
            uVar37 = FUN_00546ea0(iVar28);
            pcVar67 = 
            "CPostEffect::Initialize(): m_pRenderGlare->InitializeDevice() failed (0x%x: %s).\n";
LAB_00521100:
            FUN_00517ae0(pcVar67,iVar28,uVar37);
            goto LAB_0052047c;
          }
          if ((*piVar69 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2400);
            FUN_00517ae0(
                        "CPostEffect::Initialize(): m_pRenderGlare->InitializeDevice() succeeded.\n"
                        );
          }
          if (param_1[0x1b8] != '\0') {
            iVar28 = (**(code **)**(undefined8 **)(param_1 + 0x1a0))
                               (*(undefined8 **)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x18));
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x240d);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pDepthOfField->InitializeDevice() failed (0x%x: %s).\n";
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2416)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pDepthOfField->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x1d8);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x242a);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pMotionBlurInternalVelocityTexture->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2433)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pMotionBlurInternalVelocityTexture->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x1e0);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x243e);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pMotionBlurInternalVelocityReducedWork->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2445)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pMotionBlurInternalVelocityReducedWork->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x1e8);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x244f);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pMotionBlurReducedWork->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2456)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pMotionBlurReducedWork->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x1f0);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x2461);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2468)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x1f8);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x2470);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture_Reduced->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2477)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture_Reduced->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x200);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x247f);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture_Reduced2->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2486)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pAmbientOcclusion_NormalDepthTexture_Reduced2->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x208);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x248e);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2495)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x210);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x249d);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced2->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x24a4)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced2->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x218);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x24ad);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced3->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x24b4)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pAmbientOcclusion_Result_Reduced3->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x220);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x24bc);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pAmbientOcclusion_Result->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x24c3)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pAmbientOcclusion_Result->InitializeDevice() succeeded.\n"
                          );
            }
          }
          iVar28 = *(int *)(param_1 + 0x400);
          if (*(long **)(param_1 + 0x260) == (long *)0x0) {
LAB_00520178:
            if (0 < iVar28) {
              uVar35 = 0;
              lVar65 = 0x70;
              lVar68 = 0x48;
              do {
                puVar42 = *(undefined8 **)(*(long *)(param_1 + 0x2a0) + lVar65);
                if (puVar42 != (undefined8 *)0x0) {
                  iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
                  if (iVar28 < 0) {
                    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0)
                    goto LAB_0052047c;
                    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: "
                                 ,0x24f3);
                    uVar37 = FUN_00546ea0(iVar28);
                    pcVar67 = 
                    "CPostEffect::Initialize(): m_pAutoExposureParam[%d].m_pQuerySceneLuminance->InitializeDevice() failed (0x%x: %s).\n"
                    ;
                    goto LAB_00522420;
                  }
                  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
                    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",
                                 0x24fc);
                    FUN_00517ae0("CPostEffect::Initialize(): m_pAutoExposureParam[%d].m_pQuerySceneLuminance->InitializeDevice() succeeded.\n"
                                 ,uVar35 & 0xffffffff);
                  }
                }
                puVar42 = *(undefined8 **)(*(long *)(param_1 + 0x2a8) + lVar68);
                if (puVar42 != (undefined8 *)0x0) {
                  iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
                  if (iVar28 < 0) {
                    if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
                    goto LAB_0052047c;
                    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: "
                                 ,0x2507);
                    uVar37 = FUN_00546ea0(iVar28);
                    pcVar67 = 
                    "CPostEffect::Initialize(): m_pAutoFocusParam[%d].m_pQuerySceneDepth->InitializeDevice() failed (0x%x: %s).\n"
                    ;
                    goto LAB_00521100;
                  }
                  if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
                    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",
                                 0x2510);
                    FUN_00517ae0("CPostEffect::Initialize(): m_pAutoFocusParam[%d].m_pQuerySceneLuminance->InitializeDevice() succeeded.\n"
                                 ,uVar35 & 0xffffffff);
                  }
                }
                uVar35 = uVar35 + 1;
                lVar65 = lVar65 + 0x78;
                lVar68 = lVar68 + 0x50;
              } while ((long)uVar35 < (long)*(int *)(param_1 + 0x400));
            }
          }
          else if (0 < iVar28) {
            uVar35 = 0;
            puVar42 = (undefined8 *)**(long **)(param_1 + 0x260);
            while( true ) {
              if (puVar42 != (undefined8 *)0x0) {
                iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
                if (iVar28 < 0) {
                  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0)
                  goto LAB_0052047c;
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: "
                               ,0x24d1);
                  uVar37 = FUN_00546ea0(iVar28);
                  pcVar67 = 
                  "CPostEffect::Initialize(): m_ppFeedbackBuffer[%d]->InitializeDevice() failed (0x%x: %s).\n"
                  ;
                  goto LAB_00522420;
                }
                lVar65 = *(long *)(*(long *)(param_1 + 0x260) + uVar35 * 8);
                uVar63 = *(uint *)(lVar65 + 0x30);
                if (0 < (int)uVar63) {
                  uVar38 = 0;
                  while( true ) {
                    lVar65 = *(long *)(*(long *)(lVar65 + 0x38) + uVar38 * 8);
                    do {
                      lVar68 = lVar65;
                      lVar65 = *(long *)(lVar68 + 0x120);
                    } while (lVar65 != 0);
                    plVar34 = *(long **)(lVar68 + 0xa8);
                    (**(code **)(*plVar34 + 0x90))(plVar34,1);
                    uVar38 = uVar38 + 1;
                    if (uVar38 == uVar63) break;
                    lVar65 = *(long *)(*(long *)(param_1 + 0x260) + uVar35 * 8);
                  }
                }
                if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",
                               0x24e2);
                  FUN_00517ae0("CPostEffect::Initialize(): m_ppFeedbackBuffer[%d]->InitializeDevice() succeeded.\n"
                               ,uVar35 & 0xffffffff);
                }
              }
              iVar28 = *(int *)(param_1 + 0x400);
              uVar35 = uVar35 + 1;
              if ((long)iVar28 <= (long)uVar35) break;
              puVar42 = *(undefined8 **)(*(long *)(param_1 + 0x260) + uVar35 * 8);
            }
            goto LAB_00520178;
          }
          puVar42 = *(undefined8 **)(param_1 + 0x228);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x251b);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pSmaaEdgeTexture->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2522)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pSmaaEdgeTexture->InitializeDevice() succeeded.\n"
                          );
            }
          }
          puVar42 = *(undefined8 **)(param_1 + 0x230);
          if (puVar42 != (undefined8 *)0x0) {
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            if (iVar28 < 0) {
              if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
              goto LAB_0052047c;
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x252a);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_pSmaaBlendTexture->InitializeDevice() failed (0x%x: %s).\n"
              ;
              goto LAB_00521100;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2531)
              ;
              FUN_00517ae0(
                          "CPostEffect::Initialize(): m_pSmaaBlendTexture->InitializeDevice() succeeded.\n"
                          );
            }
          }
          if ((*(undefined8 **)(param_1 + 0x238) != (undefined8 *)0x0) &&
             (0 < *(int *)(param_1 + 0x400))) {
            puVar42 = (undefined8 *)**(undefined8 **)(param_1 + 0x238);
            iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
            bVar27 = *(int *)PTR_DAT_02713970 != 0;
            if (iVar28 < 0) {
              uVar63 = 0;
            }
            else {
              lVar65 = 1;
              do {
                if ((bVar27) && (*(int *)PTR_DAT_02713978 != 0)) {
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",
                               0x2547);
                  FUN_00517ae0("CPostEffect::Initialize(): m_ppTemporalAntialias_History[%d]->InitializeDevice() succeeded.\n"
                               ,(int)lVar65 + -1);
                }
                if (*(int *)(param_1 + 0x400) <= lVar65) goto LAB_00520954;
                puVar42 = *(undefined8 **)(*(long *)(param_1 + 0x238) + lVar65 * 8);
                iVar28 = (**(code **)*puVar42)(puVar42,*(undefined8 *)(param_1 + 0x18));
                bVar27 = *(int *)PTR_DAT_02713970 != 0;
                lVar65 = lVar65 + 1;
              } while (-1 < iVar28);
              uVar63 = (int)lVar65 - 1;
            }
            if ((bVar27) && (*(int *)PTR_DAT_02713980 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x2540);
              uVar37 = FUN_00546ea0(iVar28);
              pcVar67 = 
              "CPostEffect::Initialize(): m_ppTemporalAntialias_History[%d]->InitializeDevice() failed (0x%x: %s).\n"
              ;
              uVar35 = (ulong)uVar63;
LAB_00522424:
              FUN_00517ae0(pcVar67,uVar35,iVar28,uVar37);
            }
            goto LAB_0052047c;
          }
LAB_00520954:
          iVar28 = *(int *)(param_1 + 0x580);
          if (iVar28 != 0) {
            if (0 < *(int *)(param_1 + 0x400)) {
              uVar35 = 0;
              do {
                puVar42 = *(undefined8 **)(*local_6e0 + uVar35 * 8);
                iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
                if (iVar28 < 0) {
                  if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0)
                  goto LAB_0052047c;
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: "
                               ,0x255a);
                  uVar37 = FUN_00546ea0(iVar28);
                  pcVar67 = 
                  "CPostEffect::Initialize(): m_ppOetfSceneLuminanceBaseWork[%d]->InitializeDevice() failed (0x%x: %s).\n"
                  ;
                  goto LAB_00522420;
                }
                if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",
                               0x2561);
                  FUN_00517ae0("CPostEffect::Initialize(): m_ppOetfSceneLuminanceBaseWork[%d]->InitializeDevice() succeeded.\n"
                               ,uVar35 & 0xffffffff);
                }
                puVar42 = *(undefined8 **)(*(long *)(param_1 + 0x588) + uVar35 * 8);
                iVar28 = (**(code **)*puVar42)(puVar42,*(undefined8 *)(param_1 + 0x18));
                if (iVar28 < 0) {
                  if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
                  goto LAB_0052047c;
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: "
                               ,0x2568);
                  uVar37 = FUN_00546ea0(iVar28);
                  pcVar67 = 
                  "CPostEffect::Initialize(): m_ppOetfQuerySceneLuminance[%d]->InitializeDevice() failed (0x%x: %s).\n"
                  ;
                  goto LAB_00522420;
                }
                if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
                  FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",
                               0x256f);
                  FUN_00517ae0("CPostEffect::Initialize(): m_ppOetfQuerySceneLuminance[%d]->InitializeDevice() succeeded.\n"
                               ,uVar35 & 0xffffffff);
                }
                uVar35 = uVar35 + 1;
              } while ((long)uVar35 < (long)*(int *)(param_1 + 0x400));
              iVar28 = *(int *)(param_1 + 0x580);
            }
            if (0 < iVar28) {
              uVar35 = 0;
LAB_00520a88:
              puVar42 = *(undefined8 **)(*(long *)(param_1 + 0x578) + uVar35 * 8);
              iVar28 = (**(code **)*puVar42)(puVar42,*plVar54);
              if (-1 < iVar28) goto code_r0x00520ab8;
              if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
                FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: "
                             ,0x2590);
                uVar37 = FUN_00546ea0(iVar28);
                pcVar67 = 
                "CPostEffect::Initialize(): m_pppOetfSceneLuminanceResizeWork[%d]->InitializeDevice() failed (0x%x: %s).\n"
                ;
LAB_00522420:
                uVar35 = uVar35 & 0xffffffff;
                goto LAB_00522424;
              }
              goto LAB_0052047c;
            }
          }
LAB_00520afc:
          iVar28 = FUN_0056e400(plVar36);
          if (iVar28 < 0) {
            if ((*(int *)PTR_DAT_02713970 == 0) || (*(int *)PTR_DAT_02713980 == 0))
            goto LAB_0052047c;
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                         0x25a5);
            uVar37 = FUN_00546ea0(iVar28);
            pcVar67 = 
            "CPostEffect::Initialize(): pTexUtil->InitializeDeviceSharedTexturePool() failed (0x%x: %s).\n"
            ;
            goto LAB_00521100;
          }
          if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713978 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x25ab);
            FUN_00517ae0(
                        "CPostEffect::Initialize(): pTexUtil->InitializeDeviceSharedTexturePool() succeeded.\n"
                        );
          }
          *(undefined1 *)(plVar36 + 0x534c) = 1;
          param_1[0x1124] = '\0';
          param_1[0x1125] = '\0';
          param_1[0x1126] = '\0';
          param_1[0x1127] = '\0';
          param_1[0x1128] = '\0';
          param_1[0x1129] = '\0';
          param_1[0x112a] = '\0';
          param_1[0x112b] = '\0';
          param_1[0x111c] = '\0';
          param_1[0x111d] = '\0';
          param_1[0x111e] = '\0';
          param_1[0x111f] = '\0';
          param_1[0x1120] = '\0';
          param_1[0x1121] = '\0';
          param_1[0x1122] = '\0';
          param_1[0x1123] = '\0';
          param_1[0x1114] = '\0';
          param_1[0x1115] = '\0';
          param_1[0x1116] = '\0';
          param_1[0x1117] = '\0';
          param_1[0x1118] = '\0';
          param_1[0x1119] = '\0';
          param_1[0x111a] = '\0';
          param_1[0x111b] = '\0';
          param_1[0x110c] = '\0';
          param_1[0x110d] = '\0';
          param_1[0x110e] = '\0';
          param_1[0x110f] = '\0';
          param_1[0x1110] = '\0';
          param_1[0x1111] = '\0';
          param_1[0x1112] = '\0';
          param_1[0x1113] = '\0';
          param_1[0x1104] = '\0';
          param_1[0x1105] = '\0';
          param_1[0x1106] = '\0';
          param_1[0x1107] = '\0';
          param_1[0x1108] = '\0';
          param_1[0x1109] = '\0';
          param_1[0x110a] = '\0';
          param_1[0x110b] = '\0';
          param_1[0x10fc] = '\0';
          param_1[0x10fd] = '\0';
          param_1[0x10fe] = '\0';
          param_1[0x10ff] = '\0';
          param_1[0x1100] = '\0';
          param_1[0x1101] = '\0';
          param_1[0x1102] = '\0';
          param_1[0x1103] = '\0';
          param_1[0x10f4] = '\0';
          param_1[0x10f5] = '\0';
          param_1[0x10f6] = '\0';
          param_1[0x10f7] = '\0';
          param_1[0x10f8] = '\0';
          param_1[0x10f9] = '\0';
          param_1[0x10fa] = '\0';
          param_1[0x10fb] = '\0';
          param_1[0x10ec] = '\0';
          param_1[0x10ed] = '\0';
          param_1[0x10ee] = '\0';
          param_1[0x10ef] = '\0';
          param_1[0x10f0] = '\0';
          param_1[0x10f1] = '\0';
          param_1[0x10f2] = '\0';
          param_1[0x10f3] = '\0';
          param_1[0x10e4] = '\0';
          param_1[0x10e5] = '\0';
          param_1[0x10e6] = '\0';
          param_1[0x10e7] = '\0';
          param_1[0x10e8] = '\0';
          param_1[0x10e9] = '\0';
          param_1[0x10ea] = '\0';
          param_1[0x10eb] = '\0';
          param_1[0x112c] = '\0';
          param_1[0x112d] = '\0';
          param_1[0x112e] = '\0';
          param_1[0x112f] = '\0';
          param_1[0x1050] = '\0';
          param_1[0] = '\0';
          param_1[1] = '\0';
          param_1[8] = '\0';
          param_1[9] = '\0';
          FUN_005235a0(param_1,0);
          param_1[0xbcd] = param_1[0x1b8];
          param_1[0xc20] = '\0';
          param_1[0xc21] = '\0';
          param_1[0xc22] = '\0';
          param_1[0xc23] = '\0';
          param_1[0xc24] = -0x25;
          param_1[0xc25] = '\x0f';
          param_1[0xc26] = 'I';
          param_1[0xc27] = '@';
          param_1[0xc28] = -0x3d;
          param_1[0xc29] = -0x48;
          param_1[0xc2a] = -0x4e;
          param_1[0xc2b] = '>';
          param_1[0xc08] = '\0';
          param_1[0xc09] = '\0';
          param_1[0xc0a] = -0x80;
          param_1[0xc0b] = '?';
          param_1[0xc0c] = -0x33;
          param_1[0xc0d] = -0x34;
          param_1[0xc0e] = 'L';
          param_1[0xc0f] = '=';
          param_1[0xc18] = -0x25;
          param_1[0xc19] = '\x0f';
          param_1[0xc1a] = 'I';
          param_1[0xc1b] = '?';
          param_1[0xc1c] = -0x3d;
          param_1[0xc1d] = -0x48;
          param_1[0xc1e] = -0x4e;
          param_1[0xc1f] = '>';
          param_1[0xbe8] = '\0';
          param_1[0xbe9] = '\0';
          param_1[0xbea] = -0x80;
          param_1[0xbeb] = '?';
          param_1[0xc04] = '\x01';
          param_1[0xc05] = '\0';
          param_1[0xc06] = '\0';
          param_1[0xc07] = '\0';
          param_1[0xbec] = '\0';
          param_1[0xbf0] = '\0';
          param_1[0xbf1] = '\0';
          param_1[0xbf2] = -0x80;
          param_1[0xbf3] = '?';
          param_1[0xbf4] = '\0';
          param_1[0xbf5] = '\0';
          param_1[0xbf6] = -0x80;
          param_1[0xbf7] = '?';
          param_1[0xbf8] = '\0';
          param_1[0xbf9] = '\0';
          param_1[0xbfa] = '\0';
          param_1[0xbfb] = '\0';
          param_1[0xc10] = '\0';
          param_1[0xc11] = '\0';
          param_1[0xc12] = -0x80;
          param_1[0xc13] = '?';
          param_1[0xc14] = '\x01';
          param_1[0xc15] = '\0';
          param_1[0xc16] = '\0';
          param_1[0xc17] = '\0';
          param_1[0x8b6] = '\0';
          param_1[0x895] = '\x01';
          param_1[0x8b4] = '\0';
          param_1[0x8b5] = '\0';
          param_1[0xbe4] = '\0';
          param_1[0xbfc] = '\0';
          param_1[0xbfd] = '\0';
          param_1[0xbfe] = '\0';
          param_1[0xbff] = '?';
          param_1[0xc00] = '\0';
          param_1[0xc01] = '\0';
          param_1[0xc02] = '\0';
          param_1[0xc03] = '?';
          param_1[0xc74] = -0x30;
          param_1[0xc75] = -0x48;
          param_1[0xc76] = '\x1d';
          param_1[0xc77] = '5';
          param_1[0xc70] = '\0';
          param_1[0xc78] = '\x01';
          param_1[0xc79] = '\x01';
          param_1[0xf08] = '\0';
          param_1[0xf14] = -0x33;
          param_1[0xf15] = -0x34;
          param_1[0xf16] = 'L';
          param_1[0xf17] = '=';
          param_1[0xf18] = '\0';
          param_1[0xf19] = '\0';
          param_1[0xf1a] = '\0';
          param_1[0xf1b] = '\0';
          param_1[0xf24] = 'o';
          param_1[0xf25] = '\x12';
          param_1[0xf26] = -0x7d;
          param_1[0xf27] = ':';
          param_1[0xf28] = '\0';
          param_1[0xf29] = '\0';
          param_1[0xf2a] = '\0';
          param_1[0xf2b] = '\0';
          param_1[0xf1c] = -0x33;
          param_1[0xf1d] = -0x34;
          param_1[0xf1e] = -0x34;
          param_1[0xf1f] = '=';
          param_1[0xf20] = -0x33;
          param_1[0xf21] = -0x34;
          param_1[0xf22] = -0x34;
          param_1[0xf23] = '=';
          param_1[0xf0c] = '\x02';
          param_1[0xf0d] = '\0';
          param_1[0xf0e] = '\0';
          param_1[0xf0f] = '\0';
          param_1[0xf10] = '\0';
          param_1[0xeb8] = '\0';
          param_1[0xebc] = '\x10';
          param_1[0xebd] = '\0';
          param_1[0xebe] = '\0';
          param_1[0xebf] = '\0';
          param_1[0xec0] = '\0';
          param_1[0xec1] = '\0';
          param_1[0xec2] = -0x80;
          param_1[0xec3] = '?';
          param_1[0xecc] = '\0';
          param_1[0xecd] = '\0';
          param_1[0xece] = -0x80;
          param_1[0xecf] = '?';
          param_1[0xed0] = '\0';
          param_1[0xed1] = '\0';
          param_1[0xed2] = -0x80;
          param_1[0xed3] = '?';
          param_1[0xed4] = '\0';
          param_1[0xed5] = '\0';
          param_1[0xed6] = '\0';
          param_1[0xed7] = '\0';
          param_1[0xed8] = '\x17';
          param_1[0xed9] = -0x49;
          param_1[0xeda] = -0x2f;
          param_1[0xedb] = '8';
          param_1[0xedc] = '\0';
          param_1[0xedd] = '\0';
          param_1[0xede] = '\0';
          param_1[0xedf] = '?';
          param_1[0xee0] = '\0';
          param_1[0xee1] = '\0';
          param_1[0xee2] = '\0';
          param_1[0xee3] = '?';
          param_1[0xee4] = '\0';
          param_1[0xee5] = '\0';
          param_1[0xee6] = '\0';
          param_1[0xee7] = '?';
          param_1[0xee8] = '\0';
          param_1[0xee9] = '\0';
          param_1[0xeea] = '\0';
          param_1[0xeeb] = '?';
          param_1[0xef4] = -2;
          param_1[0xef5] = -1;
          param_1[0xef6] = -1;
          param_1[0xef7] = -1;
          param_1[0xec4] = '\0';
          param_1[0xec5] = '\0';
          param_1[0xec6] = '\0';
          param_1[0xec7] = '\0';
          param_1[0xec8] = '\0';
          param_1[0xec9] = '\0';
          param_1[0xeca] = '\0';
          param_1[0xecb] = '\0';
          param_1[0xef8] = '\0';
          param_1[0xef9] = '\0';
          param_1[0xefa] = -0x80;
          param_1[0xefb] = '?';
          param_1[0xefc] = '\0';
          param_1[0xefd] = '\0';
          param_1[0xefe] = -0x80;
          param_1[0xeff] = '?';
          param_1[0xf00] = '\0';
          param_1[0xf01] = '\0';
          param_1[0xf02] = '\0';
          param_1[0xf03] = '\0';
          param_1[0xf04] = '\0';
          param_1[0xf05] = '\0';
          param_1[0xf06] = '\0';
          param_1[0xf07] = '\0';
          param_1[0xc7a] = '\0';
          param_1[0xc84] = '\0';
          param_1[0xc85] = '\0';
          param_1[0xc86] = '\0';
          param_1[0xc87] = '\0';
          param_1[0xc88] = '\0';
          param_1[0xc89] = '\0';
          param_1[0xc8a] = '\0';
          param_1[0xc8b] = '\0';
          param_1[0xc7c] = '\0';
          param_1[0xc7d] = '\0';
          param_1[0xc7e] = '\0';
          param_1[0xc7f] = '\0';
          param_1[0xc80] = '\0';
          param_1[0xc81] = '\0';
          param_1[0xc82] = '\0';
          param_1[0xc83] = '\0';
          param_1[0xc90] = '\x01';
          param_1[0xc91] = '\x01';
          param_1[0xc94] = '\x02';
          param_1[0xc95] = '\0';
          param_1[0xc96] = '\0';
          param_1[0xc97] = '\0';
          param_1[0xc8c] = '\n';
          param_1[0xc8d] = -0x29;
          param_1[0xc8e] = -0x5d;
          param_1[0xc8f] = ';';
          param_1[0xc98] = '\0';
          param_1[0xc9c] = '\0';
          param_1[0xc9d] = '\0';
          param_1[0xc9e] = '\0';
          param_1[0xc9f] = '\0';
          param_1[0xca0] = '\0';
          param_1[0xca1] = '\0';
          param_1[0xca2] = '|';
          param_1[0xca3] = 'G';
          param_1[0xcdc] = '\0';
          param_1[0xcdd] = '\0';
          param_1[0xcde] = '\0';
          param_1[0xcdf] = '\0';
          param_1[0xce0] = '\0';
          param_1[0xce1] = '\0';
          param_1[0xce2] = '\0';
          param_1[0xce3] = '\0';
          param_1[0xcd4] = '\0';
          param_1[0xcd5] = '\0';
          param_1[0xcd6] = '\0';
          param_1[0xcd7] = '\0';
          param_1[0xcd8] = '\0';
          param_1[0xcd9] = '\0';
          param_1[0xcda] = '\0';
          param_1[0xcdb] = '\0';
          param_1[0xccc] = '\0';
          param_1[0xccd] = '\0';
          param_1[0xcce] = '\0';
          param_1[0xccf] = '\0';
          param_1[0xcd0] = '\0';
          param_1[0xcd1] = '\0';
          param_1[0xcd2] = '\0';
          param_1[0xcd3] = '\0';
          param_1[0xcc4] = '\0';
          param_1[0xcc5] = '\0';
          param_1[0xcc6] = '\0';
          param_1[0xcc7] = '\0';
          param_1[0xcc8] = '\0';
          param_1[0xcc9] = '\0';
          param_1[0xcca] = '\0';
          param_1[0xccb] = '\0';
          param_1[0xcbc] = '\0';
          param_1[0xcbd] = '\0';
          param_1[0xcbe] = '\0';
          param_1[0xcbf] = '\0';
          param_1[0xcc0] = '\0';
          param_1[0xcc1] = '\0';
          param_1[0xcc2] = '\0';
          param_1[0xcc3] = '\0';
          param_1[0xcb4] = '\0';
          param_1[0xcb5] = '\0';
          param_1[0xcb6] = '\0';
          param_1[0xcb7] = '\0';
          param_1[0xcb8] = '\0';
          param_1[0xcb9] = '\0';
          param_1[0xcba] = '\0';
          param_1[0xcbb] = '\0';
          param_1[0xcac] = '\0';
          param_1[0xcad] = '\0';
          param_1[0xcae] = '\0';
          param_1[0xcaf] = '\0';
          param_1[0xcb0] = '\0';
          param_1[0xcb1] = '\0';
          param_1[0xcb2] = '\0';
          param_1[0xcb3] = '\0';
          param_1[0xca4] = '\0';
          param_1[0xca5] = '\0';
          param_1[0xca6] = '\0';
          param_1[0xca7] = '\0';
          param_1[0xca8] = '\0';
          param_1[0xca9] = '\0';
          param_1[0xcaa] = '\0';
          param_1[0xcab] = '\0';
          param_1[0xf38] = param_1[0x1c8];
          param_1[0x895] = '\x01';
          param_1[0xf3c] = '\0';
          param_1[0xf3d] = '\0';
          param_1[0xf3e] = '\0';
          param_1[0xf3f] = '\0';
          param_1[0xf40] = '\0';
          param_1[0xf41] = '\0';
          param_1[0xf42] = '\0';
          param_1[0xf43] = '\0';
          FUN_00523900(param_1,0x80000000);
          param_1[0xf48] = -0x33;
          param_1[0xf49] = -0x34;
          param_1[0xf4a] = -0x34;
          param_1[0xf4b] = '=';
          param_1[0xf4c] = '\b';
          param_1[0xf4d] = '\0';
          param_1[0xf4e] = '\0';
          param_1[0xf4f] = '\0';
          param_1[0xf58] = '\0';
          param_1[0xf50] = '\0';
          param_1[0xf51] = '\0';
          param_1[0xf52] = '\0';
          param_1[0xf53] = '\0';
          param_1[0xf54] = '\0';
          param_1[0xf55] = '\0';
          param_1[0xf56] = '\0';
          param_1[0xf57] = '\0';
          param_1[0xf5c] = '\0';
          param_1[0xf5d] = '\0';
          param_1[0xf5e] = -0x80;
          param_1[0xf5f] = '?';
          param_1[0xf60] = '\0';
          param_1[0xf61] = '\0';
          param_1[0xf62] = -0x80;
          param_1[0xf63] = '?';
          param_1[0xc2c] = param_1[0x1cb];
          param_1[0xc30] = '\x05';
          param_1[0xc31] = '\0';
          param_1[0xc32] = '\0';
          param_1[0xc33] = '\0';
          param_1[0xf64] = '\0';
          param_1[0xf65] = '\0';
          param_1[0xf66] = -0x80;
          param_1[0xf67] = '?';
          param_1[0xc34] = '\0';
          param_1[0xc36] = '\0';
          param_1[0xc58] = '\0';
          param_1[0xc59] = '\0';
          param_1[0xc5a] = '\0';
          param_1[0xc5b] = '\0';
          param_1[0xc5c] = '\0';
          param_1[0xc5d] = '\0';
          param_1[0xc5e] = '\0';
          param_1[0xc5f] = '\0';
          param_1[0xc50] = '\0';
          param_1[0xc51] = '\0';
          param_1[0xc52] = '\0';
          param_1[0xc53] = '\0';
          param_1[0xc54] = '\0';
          param_1[0xc55] = '\0';
          param_1[0xc56] = '\0';
          param_1[0xc57] = '\0';
          param_1[0xc48] = '\0';
          param_1[0xc49] = '\0';
          param_1[0xc4a] = '\0';
          param_1[0xc4b] = '\0';
          param_1[0xc4c] = '\0';
          param_1[0xc4d] = '\0';
          param_1[0xc4e] = '\0';
          param_1[0xc4f] = '\0';
          param_1[0xc40] = '\0';
          param_1[0xc41] = '\0';
          param_1[0xc42] = '\0';
          param_1[0xc43] = '\0';
          param_1[0xc44] = '\0';
          param_1[0xc45] = '\0';
          param_1[0xc46] = '\0';
          param_1[0xc47] = '\0';
          param_1[0xc38] = '\0';
          param_1[0xc39] = '\0';
          param_1[0xc3a] = '\0';
          param_1[0xc3b] = '\0';
          param_1[0xc3c] = '\0';
          param_1[0xc3d] = '\0';
          param_1[0xc3e] = '\0';
          param_1[0xc3f] = '\0';
          param_1[0xc60] = '\0';
          param_1[0xc61] = '\0';
          param_1[0xc62] = -0x80;
          param_1[0xc63] = '?';
          param_1[0xc64] = '\0';
          param_1[0xc65] = '\0';
          param_1[0xc66] = '\0';
          param_1[0xc67] = '\0';
          param_1[0xc68] = '\0';
          param_1[0xc69] = '\0';
          param_1[0xc6a] = -0x80;
          param_1[0xc6b] = '>';
          iVar28 = *(int *)(param_1 + 0x478);
          param_1[0xc6c] = '\x01';
          iVar33 = iVar28;
          if (0 < iVar28) {
            iVar53 = 0;
            do {
              if (iVar53 <= iVar33) {
                *(int *)(param_1 + 0x860) = iVar53;
              }
              if (*(char *)(*(long *)(param_1 + 0x198) + 0x108) != '\0') {
                *(undefined1 *)
                 (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x60) = 0;
              }
              puVar42 = (undefined8 *)
                        (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68);
              *puVar42 = 0x3f8000003f800000;
              puVar42[1] = 0x3f8000003f800000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x1c) =
                   0x3f800000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x10) =
                   0x3e800000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x5c) =
                   0x3f7fbe77;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 100) = 0;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x20) =
                   0x3f800000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x14) =
                   0x3f800000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x18) =
                   0x3f800000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x24) =
                   0x3f000000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x30) =
                   0x3e860a92;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x28) =
                   0x3f000000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x2c) =
                   0x3f800000;
              lVar65 = *(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68;
              *(undefined8 *)(lVar65 + 0x34) = 0x3f8000003f800000;
              *(undefined8 *)(lVar65 + 0x3c) = 0x3f8000003f800000;
              *(undefined8 *)
               (*(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68 + 0x44) =
                   0x3f0000003f000000;
              lVar65 = *(long *)(param_1 + 0x858) + (long)*(int *)(param_1 + 0x860) * 0x68;
              *(undefined8 *)(lVar65 + 0x4c) = 0x3f8000003f800000;
              *(undefined8 *)(lVar65 + 0x54) = 0x3f8000003f800000;
              iVar33 = *(int *)(param_1 + 0x478);
              iVar53 = iVar53 + 1;
            } while (iVar28 != iVar53);
          }
          if (-1 < iVar33) {
            param_1[0x860] = '\0';
            param_1[0x861] = '\0';
            param_1[0x862] = '\0';
            param_1[0x863] = '\0';
          }
          local_698 = 0x3f800000;
          uStack_694 = 0x3f800000;
          local_690 = 0x3f800000;
          uStack_68c = 0x3f800000;
          FUN_00553550(0x3f800000,0x3f800000,0x3f000000,0x3f800000,0,
                       *(undefined8 *)(param_1 + 0x198),&local_698);
          param_1[0x874] = '\x02';
          param_1[0x875] = '\0';
          param_1[0x876] = '\0';
          param_1[0x877] = '\0';
          iVar28 = *(int *)(param_1 + 0x524);
          param_1[0x878] = '\0';
          param_1[0x879] = '\0';
          param_1[0x87a] = '\0';
          param_1[0x87b] = '\0';
          param_1[0x87c] = '\0';
          param_1[0x87d] = '\0';
          param_1[0x87e] = '\0';
          param_1[0x87f] = '\0';
          param_1[0x880] = '\0';
          param_1[0x881] = '\0';
          param_1[0x882] = '\0';
          param_1[0x883] = '\0';
          iVar33 = iVar28;
          if (0 < iVar28) {
            iVar53 = 0;
            do {
              if (iVar53 <= iVar33) {
                *(int *)(param_1 + 0x870) = iVar53;
              }
              if (*(char *)(*(long *)(param_1 + 0x198) + 0x110) != '\0') {
                *(undefined1 *)(*(long *)(param_1 + 0x868) + (long)*(int *)(param_1 + 0x870) * 0x34)
                     = 0;
              }
              lVar65 = *(long *)(param_1 + 0x868) + (long)*(int *)(param_1 + 0x870) * 0x34;
              *(undefined8 *)(lVar65 + 4) = 0x3f8000003f800000;
              *(undefined8 *)(lVar65 + 0xc) = 0x3f8000003f800000;
              *(undefined4 *)
               (*(long *)(param_1 + 0x868) + (long)*(int *)(param_1 + 0x870) * 0x34 + 0x24) = 0;
              *(undefined4 *)
               (*(long *)(param_1 + 0x868) + (long)*(int *)(param_1 + 0x870) * 0x34 + 0x28) =
                   0x3a83126f;
              *(undefined4 *)
               (*(long *)(param_1 + 0x868) + (long)*(int *)(param_1 + 0x870) * 0x34 + 0x2c) =
                   0x3f7fbe77;
              *(undefined4 *)
               (*(long *)(param_1 + 0x868) + (long)*(int *)(param_1 + 0x870) * 0x34 + 0x30) = 0;
              *(undefined8 *)
               (*(long *)(param_1 + 0x868) + (long)*(int *)(param_1 + 0x870) * 0x34 + 0x14) =
                   0x3f0000003f000000;
              *(undefined8 *)
               (*(long *)(param_1 + 0x868) + (long)*(int *)(param_1 + 0x870) * 0x34 + 0x1c) =
                   0x3f0000003f000000;
              iVar33 = *(int *)(param_1 + 0x524);
              iVar53 = iVar53 + 1;
            } while (iVar28 != iVar53);
          }
          if (-1 < iVar33) {
            param_1[0x870] = '\0';
            param_1[0x871] = '\0';
            param_1[0x872] = '\0';
            param_1[0x873] = '\0';
          }
          param_1[0x884] = '\0';
          param_1[0x885] = '\0';
          param_1[0x886] = -0x80;
          param_1[0x887] = '?';
          param_1[0x888] = -0x25;
          param_1[0x889] = '\x0f';
          param_1[0x88a] = 'I';
          param_1[0x88b] = '?';
          param_1[0x88c] = '\0';
          param_1[0x88d] = '\0';
          param_1[0x88e] = '\0';
          param_1[0x88f] = '\0';
          param_1[0x890] = '\0';
          param_1[0x891] = '\0';
          param_1[0x892] = '\0';
          param_1[0x893] = '\0';
          param_1[0x8ec] = '\0';
          param_1[0x8ed] = '\0';
          param_1[0x8ee] = '\0';
          param_1[0x8ef] = '\0';
          param_1[0x8f0] = '\0';
          param_1[0x8f1] = '\0';
          param_1[0x8f2] = '\0';
          param_1[0x8f3] = '\0';
          param_1[0x914] = '\0';
          param_1[0x895] = '\x01';
          if (param_1[0x1b8] != '\0') {
            param_1[0x8fc] = '\0';
            param_1[0x8fd] = '\0';
            param_1[0x8fe] = '\0';
            param_1[0x8ff] = '\0';
            param_1[0x900] = '\0';
            param_1[0x901] = '\0';
            param_1[0x902] = '\0';
            param_1[0x903] = '\0';
            *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x1f8) = 0xffffffffffffffff;
          }
          param_1[0x895] = '\x01';
          param_1[0xd90] = '\x01';
          param_1[0xd80] = '\0';
          param_1[0xd84] = '\0';
          param_1[0xd85] = '\0';
          param_1[0xd86] = '\0';
          param_1[0xd87] = '\0';
          param_1[0xd88] = '\0';
          param_1[0xd89] = '\0';
          param_1[0xd8a] = '\0';
          param_1[0xd8b] = '\0';
          param_1[0xd8c] = '\0';
          param_1[0xd8d] = '\0';
          param_1[0xd8e] = '\0';
          param_1[0xd8f] = '\0';
          param_1[0xd94] = '\0';
          param_1[0xd95] = '\0';
          param_1[0xd96] = -0x80;
          param_1[0xd97] = '?';
          param_1[0xd98] = '\0';
          param_1[0xd99] = '\0';
          param_1[0xd9a] = -0x80;
          param_1[0xd9b] = '?';
          param_1[0xd9c] = '\0';
          param_1[0xd9d] = '\0';
          param_1[0xd9e] = -0x80;
          param_1[0xd9f] = '?';
          param_1[0xda0] = '\0';
          param_1[0xda1] = '\0';
          param_1[0xda2] = -0x80;
          param_1[0xda3] = '?';
          param_1[0xda4] = '\0';
          param_1[0xda5] = '\0';
          param_1[0xda6] = -0x80;
          param_1[0xda7] = '?';
          param_1[0xda8] = '\0';
          param_1[0xda9] = '\0';
          param_1[0xdaa] = -0x80;
          param_1[0xdab] = '?';
          param_1[0xdac] = '\0';
          param_1[0xdad] = '\0';
          param_1[0xdae] = -0x80;
          param_1[0xdaf] = '?';
          param_1[0xdb0] = '\0';
          param_1[0xdb1] = '\0';
          param_1[0xdb2] = -0x80;
          param_1[0xdb3] = '?';
          param_1[0xdb4] = '\0';
          param_1[0xdb5] = '\0';
          param_1[0xdb6] = '\0';
          param_1[0xdb7] = '\0';
          param_1[0xdb8] = '\0';
          param_1[0xdb9] = '\0';
          param_1[0xdba] = '\0';
          param_1[0xdbb] = '\0';
          param_1[0xdbc] = '\0';
          param_1[0xdbd] = '\0';
          param_1[0xdbe] = '\0';
          param_1[0xdbf] = '\0';
          param_1[0xdc0] = '\x03';
          param_1[0xdc1] = '\0';
          param_1[0xdc2] = '\0';
          param_1[0xdc3] = '\0';
          param_1[0xdc4] = -0x33;
          param_1[0xdc5] = -0x34;
          param_1[0xdc6] = ',';
          param_1[0xdc7] = '@';
          param_1[0xdc8] = ')';
          param_1[0xdc9] = '\\';
          param_1[0xdca] = -0x71;
          param_1[0xdcb] = '>';
          param_1[0xde0] = '\0';
          param_1[0xde1] = '\0';
          param_1[0xde2] = '\0';
          param_1[0xde3] = '\0';
          param_1[0xde4] = '\0';
          param_1[0xde5] = '\0';
          param_1[0xde6] = '\0';
          param_1[0xde7] = '\0';
          if (param_1[0xde8] != '\0') {
            param_1[0x895] = '\x01';
          }
          param_1[0xdd0] = '\0';
          param_1[0xdd1] = '\0';
          param_1[0xdd2] = -0x80;
          param_1[0xdd3] = '?';
          param_1[0xdd4] = '\0';
          param_1[0xdd5] = '\0';
          param_1[0xdd6] = -0x80;
          param_1[0xdd7] = '?';
          param_1[0xdd8] = '\0';
          param_1[0xdd9] = '\0';
          param_1[0xdda] = -0x80;
          param_1[0xddb] = '?';
          param_1[0xddc] = '\0';
          param_1[0xddd] = '\0';
          param_1[0xdde] = -0x80;
          param_1[0xddf] = '?';
          param_1[0xcf0] = '\0';
          param_1[0xcf1] = '\0';
          param_1[0xcf2] = -0x80;
          param_1[0xcf3] = '?';
          param_1[0xcf4] = -0x33;
          param_1[0xcf5] = -0x34;
          param_1[0xcf6] = -0x34;
          param_1[0xcf7] = '=';
          param_1[0xd00] = '\0';
          param_1[0xd01] = '\0';
          param_1[0xd02] = -0x80;
          param_1[0xd03] = '?';
          param_1[0xde8] = '\0';
          param_1[0xdcc] = '\0';
          param_1[0xce5] = '\0';
          param_1[0xcec] = '\x01';
          param_1[0xce8] = '\x01';
          param_1[0xce9] = '\0';
          param_1[0xcea] = '\0';
          param_1[0xceb] = '\0';
          param_1[0xcf8] = -1;
          param_1[0xcf9] = -1;
          param_1[0xcfa] = -1;
          param_1[0xcfb] = -1;
          param_1[0xcfc] = -1;
          param_1[0xcfd] = -1;
          param_1[0xcfe] = -1;
          param_1[0xcff] = -1;
          param_1[0xd04] = '\0';
          param_1[0xd05] = '\0';
          param_1[0xd06] = '\0';
          param_1[0xd07] = '\0';
          param_1[0xd08] = '\0';
          param_1[0xd09] = '\0';
          param_1[0xd0a] = '\0';
          param_1[0xd0b] = '\0';
          param_1[0x895] = '\x01';
          param_1[0xd20] = -0x66;
          param_1[0xd21] = -0x67;
          param_1[0xd22] = '\x19';
          param_1[0xd23] = '>';
          param_1[0xd24] = '\n';
          param_1[0xd25] = -0x29;
          param_1[0xd26] = '#';
          param_1[0xd27] = -0x44;
          param_1[0xd0c] = '\0';
          param_1[0xd10] = '\0';
          param_1[0xd11] = '\0';
          param_1[0xd12] = '\0';
          param_1[0xd13] = '\0';
          param_1[0xd14] = '\0';
          param_1[0xd15] = '\0';
          param_1[0xd16] = '\0';
          param_1[0xd17] = '\0';
          param_1[0xd28] = '\0';
          param_1[0xd29] = '\0';
          param_1[0xd2a] = '\0';
          param_1[0xd2b] = '\0';
          if (((int)((ulong)*(uint *)(param_1 + 0x504) & 1) == 0) ||
             (*(long *)(param_1 + 0x1e0) != 0)) {
            *(ulong *)(param_1 + 0xd48) = (ulong)*(uint *)(param_1 + 0x504) & 1;
          }
          else if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",
                         0x3813);
            FUN_00517ae0(
                        "CPostEffect::SetMotionBlurVelocityDilationType(): Initialize with PFX_INITPARAM::m_uiVelocityDilationType |= PFXMBVD_GAUSSIAN.\n"
                        );
          }
          builtin_strncpy(param_1 + 0xd50,"{\x14n?{\x14n?{\x14n?{\x14n?\x01",0x12);
          param_1[0xd62] = '\0';
          param_1[0xd63] = '\0';
          if (param_1[0x1bc] == '\0') {
            uVar47 = 0xffffffff;
LAB_00521490:
            *(undefined4 *)(param_1 + 0xd2c) = uVar47;
            param_1[0xd30] = -2;
            param_1[0xd31] = -1;
            param_1[0xd32] = -1;
            param_1[0xd33] = -1;
            param_1[0xd38] = '\0';
            param_1[0xd39] = '\0';
            param_1[0xd3a] = '\0';
            param_1[0xd3b] = '\0';
            param_1[0xd3c] = '\0';
            param_1[0xd3d] = '\0';
            param_1[0xd3e] = '\0';
            param_1[0xd3f] = '\0';
            param_1[0xd40] = '\0';
            param_1[0xd18] = '\0';
            param_1[0xd19] = '\0';
            param_1[0xd1a] = -0x80;
            param_1[0xd1b] = '?';
            param_1[0xd1c] = '\0';
            param_1[0xd1d] = '\0';
            param_1[0xd1e] = -0x80;
            param_1[0xd1f] = '?';
          }
          else if (param_1[0x1bd] == '\0') {
            if (param_1[0xce5] == '\0') {
              uVar47 = 2;
              goto LAB_00521490;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x3881);
              pcVar67 = 
              "CPostEffect::SetMotionBlurVelocitySource(): Effective velocity source must be set with PFXVS_APPGEN.\n"
              ;
              goto LAB_005224b4;
            }
          }
          else {
            if (*(long *)(param_1 + 0x1d8) != 0) {
              uVar47 = 0;
              goto LAB_00521490;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x3854);
              pcVar67 = 
              "CPostEffect::SetMotionBlurVelocitySource(): Initialize() with PFXINIT_MOTIONBLUR_INTERNALVELOCITYTEXTURE flag to use PFXVS_AUTOGEN.\n"
              ;
LAB_005224b4:
              FUN_00517ae0(pcVar67);
            }
          }
          param_1[0xd18] = '\0';
          param_1[0xd19] = '\0';
          param_1[0xd1a] = -0x80;
          param_1[0xd1b] = '?';
          param_1[0xd1c] = '\0';
          param_1[0xd1d] = '\0';
          param_1[0xd1e] = -0x80;
          param_1[0xd1f] = '?';
          param_1[0xe04] = '\0';
          param_1[0xe05] = '\0';
          param_1[0xe06] = '\0';
          param_1[0xe07] = '\0';
          param_1[0xe08] = '\0';
          param_1[0xe09] = '\0';
          param_1[0xe0a] = -0x80;
          param_1[0xe0b] = '?';
          param_1[0xdf8] = '\0';
          param_1[0xdf9] = '\0';
          param_1[0xdfa] = '\0';
          param_1[0xdfb] = '\0';
          param_1[0xdfc] = '\0';
          param_1[0xdfd] = '\0';
          param_1[0xdfe] = '\0';
          param_1[0xdff] = '\0';
          param_1[0xdf0] = '\0';
          param_1[0xdf1] = '\0';
          param_1[0xdf2] = '\0';
          param_1[0xdf3] = '\0';
          param_1[0xdf4] = '\0';
          param_1[0xdf5] = '\0';
          param_1[0xdf6] = '\0';
          param_1[0xdf7] = '\0';
          param_1[0xe00] = '\0';
          param_1[0xe14] = '\0';
          param_1[0xe15] = '\0';
          param_1[0xe16] = '\0';
          param_1[0xe17] = '\0';
          param_1[0xe18] = '\0';
          param_1[0xe19] = '\0';
          param_1[0xe1a] = '\0';
          param_1[0xe1b] = '\0';
          param_1[0xe0c] = '\0';
          param_1[0xe0d] = '\0';
          param_1[0xe0e] = '\0';
          param_1[0xe0f] = '\0';
          param_1[0xe10] = '\0';
          param_1[0xe11] = '\0';
          param_1[0xe12] = '\0';
          param_1[0xe13] = '\0';
          param_1[0xe28] = '\0';
          param_1[0xe29] = '\0';
          param_1[0xe2a] = '\0';
          param_1[0xe2b] = '\0';
          param_1[0xe2c] = '\0';
          param_1[0xe2d] = '\0';
          param_1[0xe2e] = '\0';
          param_1[0xe2f] = '\0';
          param_1[0xe20] = '\0';
          param_1[0xe21] = '\0';
          param_1[0xe22] = '\0';
          param_1[0xe23] = '\0';
          param_1[0xe24] = '\0';
          param_1[0xe25] = '\0';
          param_1[0xe26] = '\0';
          param_1[0xe27] = '\0';
          param_1[0xe34] = '\0';
          param_1[0xe35] = '\0';
          param_1[0xe36] = '\0';
          param_1[0xe37] = '\0';
          param_1[0xe38] = '\0';
          param_1[0xe39] = '\0';
          param_1[0xe3a] = '\0';
          param_1[0xe3b] = '\0';
          param_1[0xe3c] = '\0';
          param_1[0xe3d] = '\0';
          param_1[0xe3e] = '\0';
          param_1[0xe3f] = '\0';
          param_1[0xe40] = '\0';
          param_1[0xe41] = '\0';
          param_1[0xe42] = '\0';
          param_1[0xe43] = '\0';
          param_1[0xe44] = '\0';
          param_1[0xe45] = '\0';
          param_1[0xe46] = -0x80;
          param_1[0xe47] = '?';
          param_1[0xe30] = '\0';
          param_1[0xe31] = '\0';
          param_1[0xe32] = -0x80;
          param_1[0xe33] = '?';
          param_1[0xe1c] = '\0';
          param_1[0xe1d] = '\0';
          param_1[0xe1e] = -0x80;
          param_1[0xe1f] = '?';
          param_1[0xe4c] = '\0';
          param_1[0xe4d] = '\0';
          param_1[0xe4e] = '\0';
          param_1[0xe4f] = '\0';
          param_1[0xe50] = '\0';
          param_1[0xe51] = '\0';
          param_1[0xe52] = '\0';
          param_1[0xe53] = '\0';
          param_1[0xe54] = '\0';
          param_1[0xe55] = '\0';
          param_1[0xe56] = '\0';
          param_1[0xe57] = '\0';
          param_1[0xe58] = '\0';
          param_1[0xe59] = '\0';
          param_1[0xe5a] = '\0';
          param_1[0xe5b] = '\0';
          param_1[0xe68] = '\0';
          param_1[0xe69] = '\0';
          param_1[0xe6a] = '\0';
          param_1[0xe6b] = '\0';
          param_1[0xe6c] = '\0';
          param_1[0xe6d] = '\0';
          param_1[0xe6e] = '\0';
          param_1[0xe6f] = '\0';
          param_1[0xe60] = '\0';
          param_1[0xe61] = '\0';
          param_1[0xe62] = '\0';
          param_1[0xe63] = '\0';
          param_1[0xe64] = '\0';
          param_1[0xe65] = '\0';
          param_1[0xe66] = '\0';
          param_1[0xe67] = '\0';
          param_1[0xe7c] = '\0';
          param_1[0xe7d] = '\0';
          param_1[0xe7e] = '\0';
          param_1[0xe7f] = '\0';
          param_1[0xe80] = '\0';
          param_1[0xe81] = '\0';
          param_1[0xe82] = '\0';
          param_1[0xe83] = '\0';
          param_1[0xe74] = '\0';
          param_1[0xe75] = '\0';
          param_1[0xe76] = '\0';
          param_1[0xe77] = '\0';
          param_1[0xe78] = '\0';
          param_1[0xe79] = '\0';
          param_1[0xe7a] = '\0';
          param_1[0xe7b] = '\0';
          param_1[0xe84] = '\0';
          param_1[0xe85] = '\0';
          param_1[0xe86] = -0x80;
          param_1[0xe87] = '?';
          param_1[0xe70] = '\0';
          param_1[0xe71] = '\0';
          param_1[0xe72] = -0x80;
          param_1[0xe73] = '?';
          param_1[0xe5c] = '\0';
          param_1[0xe5d] = '\0';
          param_1[0xe5e] = -0x80;
          param_1[0xe5f] = '?';
          param_1[0xe48] = '\0';
          param_1[0xe49] = '\0';
          param_1[0xe4a] = -0x80;
          param_1[0xe4b] = '?';
          param_1[0xe98] = '\0';
          param_1[0xe99] = '\0';
          param_1[0xe9a] = -0x80;
          param_1[0xe9b] = '?';
          param_1[0xe9c] = '\0';
          param_1[0xe9d] = '\0';
          param_1[0xe9e] = -0x80;
          param_1[0xe9f] = '?';
          param_1[0xea0] = '\0';
          param_1[0xea1] = '\0';
          param_1[0xea2] = -0x80;
          param_1[0xea3] = '?';
          param_1[0xea4] = '\0';
          param_1[0xea5] = '\0';
          param_1[0xea6] = -0x80;
          param_1[0xea7] = '?';
          param_1[0xf34] = '\0';
          param_1[0xf35] = '\0';
          param_1[0xf36] = -0x80;
          param_1[0xf37] = '?';
          param_1[0x980] = '\0';
          param_1[0x981] = '\0';
          param_1[0x982] = -0x80;
          param_1[0x983] = '?';
          param_1[0x9a4] = '\0';
          param_1[0x9a5] = '\0';
          param_1[0x9a6] = -0x80;
          param_1[0x9a7] = '?';
          param_1[0xbd4] = -1;
          param_1[0xbd5] = -1;
          param_1[0xbd6] = '\x7f';
          param_1[0xbd7] = -1;
          param_1[0x990] = -1;
          param_1[0x991] = -1;
          param_1[0x992] = '\x7f';
          param_1[0x993] = -1;
          param_1[0x994] = -1;
          param_1[0x995] = -1;
          param_1[0x996] = '\x7f';
          param_1[0x997] = -1;
          param_1[0x998] = '\x01';
          param_1[0x999] = '\x01';
          param_1[0x9a8] = '\0';
          param_1[0x9a9] = '\0';
          param_1[0x9aa] = -0x60;
          param_1[0x9ab] = 'B';
          param_1[0x99c] = '\r';
          param_1[0x99d] = '\0';
          param_1[0x99e] = '\0';
          param_1[0x99f] = '\0';
          param_1[0xe88] = '\0';
          param_1[0xe89] = '\0';
          param_1[0xe8a] = '\0';
          param_1[0xe8b] = '\0';
          param_1[0xe90] = '\0';
          param_1[0xe91] = '\0';
          param_1[0xe92] = '\0';
          param_1[0xe93] = '\0';
          param_1[0xe94] = '\0';
          param_1[0xe95] = '\0';
          param_1[0xe96] = '\0';
          param_1[0xe97] = '\0';
          param_1[0xeec] = '\0';
          param_1[0xeed] = '\0';
          param_1[0xeee] = '\0';
          param_1[0xeef] = '\0';
          param_1[0xef0] = '\0';
          param_1[0xef1] = '\0';
          param_1[0xef2] = '\0';
          param_1[0xef3] = '\0';
          param_1[0x90c] = '\0';
          param_1[0x90d] = '\0';
          param_1[0x90e] = '\0';
          param_1[0x90f] = '\0';
          param_1[0x910] = '\0';
          param_1[0x911] = '\0';
          param_1[0x912] = '\0';
          param_1[0x913] = '\0';
          param_1[0xbce] = '\0';
          param_1[0xbd0] = '\0';
          param_1[0xbd1] = '\0';
          param_1[0xbd2] = '\0';
          param_1[0xbd3] = '\0';
          param_1[0xeb0] = '\0';
          param_1[0xeb1] = '\0';
          param_1[0xeb2] = '\0';
          param_1[0xeb3] = '\0';
          param_1[0xeb4] = '\0';
          param_1[0xeb5] = '\0';
          param_1[0xeb6] = '\0';
          param_1[0xeb7] = '\0';
          param_1[0xea8] = '\0';
          param_1[0xea9] = '\0';
          param_1[0xeaa] = '\0';
          param_1[0xeab] = '\0';
          param_1[0xeac] = '\0';
          param_1[0xead] = '\0';
          param_1[0xeae] = '\0';
          param_1[0xeaf] = '\0';
          param_1[0xbd8] = '\0';
          param_1[0xbd9] = '\0';
          param_1[0xbda] = '\0';
          param_1[0xbdb] = '\0';
          param_1[0xbdc] = '\0';
          param_1[0xbdd] = '\0';
          param_1[0xbde] = '\0';
          param_1[0xbdf] = '\0';
          param_1[0xf30] = -1;
          param_1[0xf31] = -1;
          param_1[0xf32] = -1;
          param_1[0xf33] = -1;
          param_1[0x978] = '\0';
          param_1[0x979] = '\0';
          param_1[0x97a] = '\0';
          param_1[0x97b] = '\0';
          param_1[0x984] = '\0';
          param_1[0x985] = '\0';
          param_1[0x986] = '\0';
          param_1[0x987] = '\0';
          param_1[0x988] = '\0';
          param_1[0x989] = '\0';
          param_1[0x98a] = '\0';
          param_1[0x98b] = '\0';
          param_1[0x98c] = 'f';
          param_1[0x98d] = 'f';
          param_1[0x98e] = 'f';
          param_1[0x98f] = '?';
          param_1[0x9a0] = -0x66;
          param_1[0x9a1] = -0x67;
          param_1[0x9a2] = '\x19';
          param_1[0x9a3] = '@';
          param_1[0x96c] = '\0';
          param_1[0x970] = '\0';
          param_1[0x971] = '\0';
          param_1[0x972] = '\0';
          param_1[0x973] = '\0';
          if (param_1[0x1d1] == '\0') {
            param_1[0x96c] = '\0';
          }
          else {
            param_1[0x970] = '\0';
            param_1[0x971] = '\0';
            param_1[0x972] = '\0';
            param_1[0x973] = '\0';
          }
          param_1[0x974] = '\0';
          param_1[0x975] = '\0';
          param_1[0x976] = '\0';
          param_1[0x977] = '\0';
          param_1[0x97c] = -1;
          param_1[0x97d] = -1;
          param_1[0x97e] = -1;
          param_1[0x97f] = -1;
          param_1[0x1160] = '\0';
          param_1[0x1161] = '\0';
          param_1[0x1162] = '\0';
          param_1[0x1163] = '\0';
          param_1[0x1158] = '\0';
          param_1[0x1159] = '\0';
          param_1[0x115a] = '\0';
          param_1[0x115b] = '\0';
          param_1[0x115c] = '\0';
          param_1[0x115d] = '\0';
          param_1[0x115e] = '\0';
          param_1[0x115f] = '\0';
          param_1[0x1150] = '\0';
          param_1[0x1151] = '\0';
          param_1[0x1152] = '\0';
          param_1[0x1153] = '\0';
          param_1[0x1154] = '\0';
          param_1[0x1155] = '\0';
          param_1[0x1156] = '\0';
          param_1[0x1157] = '\0';
          param_1[0x1148] = '\0';
          param_1[0x1149] = '\0';
          param_1[0x114a] = '\0';
          param_1[0x114b] = '\0';
          param_1[0x114c] = '\0';
          param_1[0x114d] = '\0';
          param_1[0x114e] = '\0';
          param_1[0x114f] = '\0';
          param_1[0x1140] = '\0';
          param_1[0x1141] = '\0';
          param_1[0x1142] = '\0';
          param_1[0x1143] = '\0';
          param_1[0x1144] = '\0';
          param_1[0x1145] = '\0';
          param_1[0x1146] = '\0';
          param_1[0x1147] = '\0';
          param_1[0x1138] = '\0';
          param_1[0x1139] = '\0';
          param_1[0x113a] = '\0';
          param_1[0x113b] = '\0';
          param_1[0x113c] = '\0';
          param_1[0x113d] = '\0';
          param_1[0x113e] = '\0';
          param_1[0x113f] = '\0';
          param_1[0x1130] = '\0';
          puVar21 = PTR_DAT_027139f8;
          param_1[0x1131] = '\0';
          param_1[0x1132] = '\0';
          param_1[0x1133] = '\0';
          param_1[0x1134] = '\0';
          param_1[0x1135] = '\0';
          param_1[0x1136] = '\0';
          param_1[0x1137] = '\0';
          iVar28 = *(int *)PTR_DAT_02713970;
          iVar33 = *(int *)PTR_DAT_027139f8;
          if ((iVar28 != 0) && (iVar33 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x45d4
                        );
            FUN_00517ae0("Frame: %d, View: %d, SetTonemapBackendColorSpaceMode(eBackendColorSpaceMode: %d);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0);
            iVar28 = *(int *)PTR_DAT_02713970;
            iVar33 = *(int *)puVar21;
          }
          param_1[0x9ac] = '\0';
          param_1[0x9ad] = '\0';
          param_1[0x9ae] = '\0';
          param_1[0x9af] = '\0';
          if ((iVar28 != 0) && (iVar33 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x45e1
                        );
            FUN_00517ae0("Frame: %d, View: %d, SetTonemapBackendColorSpaceModeSdr(eBackendColorSpaceMode: %d);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0);
          }
          param_1[0x9b0] = '\0';
          param_1[0x9b1] = '\0';
          param_1[0x9b2] = '\0';
          param_1[0x9b3] = '\0';
          param_1[0x590] = '\0';
          param_1[0x591] = '\0';
          param_1[0x592] = '\0';
          param_1[0x593] = '\0';
          param_1[0x70] = '\0';
          param_1[0x71] = '\0';
          param_1[0x72] = '\0';
          param_1[0x73] = '\0';
          param_1[0x74] = '\0';
          param_1[0x75] = '\0';
          param_1[0x76] = '\0';
          param_1[0x77] = '\0';
          param_1[0x78] = '\0';
          param_1[0x79] = '\0';
          param_1[0x7a] = '\0';
          param_1[0x7b] = '\0';
          param_1[0x1168] = '\0';
          param_1[0x1169] = '\0';
          param_1[0x116a] = '\0';
          param_1[0x116b] = '\0';
          param_1[0x116c] = '\0';
          param_1[0x116d] = '\0';
          param_1[0x116e] = '\0';
          param_1[0x116f] = '\0';
          param_1[0x128] = '\0';
          param_1[0x129] = '\0';
          param_1[0x12a] = '\0';
          param_1[299] = '\0';
          param_1[300] = '\0';
          param_1[0x12d] = '\0';
          param_1[0x12e] = '\0';
          param_1[0x12f] = '\0';
          param_1[0x130] = '\0';
          param_1[0x131] = '\0';
          param_1[0x132] = '\0';
          param_1[0x133] = '\0';
          param_1[0x134] = '\0';
          param_1[0x135] = '\0';
          param_1[0x136] = '\0';
          param_1[0x137] = '\0';
          param_1[0x180] = param_1[0x1ce];
          param_1[0xb0] = '\0';
          param_1[0xb1] = '\0';
          param_1[0xb2] = '\0';
          param_1[0xb3] = '\0';
          param_1[0xb4] = '\0';
          param_1[0xb5] = '\0';
          param_1[0xb6] = '\0';
          param_1[0xb7] = '\0';
          param_1[0xb8] = '\0';
          param_1[0xb9] = '\0';
          param_1[0xba] = '\0';
          param_1[0xbb] = '\0';
          param_1[0xbc] = '\0';
          param_1[0xbd] = '\0';
          param_1[0xbe] = '\0';
          param_1[0xbf] = '\0';
          param_1[0x8c] = '\0';
          param_1[0x8d] = '\0';
          param_1[0x8e] = '\0';
          param_1[0x8f] = '\0';
          param_1[0x90] = '\x02';
          param_1[0x91] = '\0';
          param_1[0x92] = '\0';
          param_1[0x93] = '\0';
          param_1[0x898] = '\0';
          param_1[0x899] = '\0';
          param_1[0x89a] = '\0';
          param_1[0x89b] = '\0';
          param_1[0x89c] = -0x5a;
          param_1[0x89d] = -0x65;
          param_1[0x89e] = -0x3c;
          param_1[0x89f] = '<';
          param_1[0x895] = '\x01';
          param_1[0xa0] = '\0';
          param_1[0xa1] = '\0';
          param_1[0xa2] = '\0';
          param_1[0xa3] = '\0';
          param_1[0xa4] = '\0';
          param_1[0xa5] = '\0';
          param_1[0xa6] = '\0';
          param_1[0xa7] = '\0';
          param_1[0xa8] = '\0';
          param_1[0xa9] = '\0';
          param_1[0xaa] = '\0';
          param_1[0xab] = '\0';
          param_1[0xac] = '\0';
          param_1[0xad] = '\0';
          param_1[0xae] = '\0';
          param_1[0xaf] = '\0';
          param_1[0x8a0] = '\x01';
          param_1[0x8a1] = '\0';
          param_1[0x8a2] = '\0';
          param_1[0x8a3] = '\0';
          param_1[0x8a4] = '\x7f';
          param_1[0x8a5] = 'R';
          param_1[0x8a6] = -0x13;
          param_1[0x8a7] = '<';
          param_1[0x168] = '\0';
          param_1[0x169] = '\0';
          param_1[0x16a] = '\0';
          param_1[0x16b] = '\0';
          param_1[0x16c] = '\0';
          param_1[0x16d] = '\0';
          param_1[0x16e] = '\0';
          param_1[0x16f] = '\0';
          param_1[0x170] = '\0';
          param_1[0x171] = '\0';
          param_1[0x172] = '\0';
          param_1[0x173] = '\0';
          param_1[0x174] = '\0';
          param_1[0x175] = '\0';
          param_1[0x176] = '\0';
          param_1[0x177] = '\0';
          param_1[0x8a8] = '\0';
          param_1[0x8a9] = '\0';
          param_1[0x8aa] = '\0';
          param_1[0x8ab] = '\0';
          param_1[0x8ac] = -0x25;
          param_1[0x8ad] = '\x0f';
          param_1[0x8ae] = 'I';
          param_1[0x8af] = '?';
          *(undefined4 *)(param_1 + 0x5d0) = *(undefined4 *)(param_1 + 0x540);
          param_1[0x120] = '\0';
          param_1[0x121] = '\0';
          param_1[0x122] = '\0';
          param_1[0x123] = '\0';
          param_1[0x124] = '\0';
          param_1[0x125] = '\0';
          param_1[0x126] = '\0';
          param_1[0x127] = '\0';
          param_1[0xc0] = '\0';
          param_1[0xc1] = '\0';
          param_1[0xc2] = '\0';
          param_1[0xc3] = '\0';
          param_1[0x5c8] = '\0';
          param_1[0x5c9] = '\0';
          param_1[0x5ca] = '\0';
          param_1[0x5cb] = '\0';
          param_1[0x5cc] = '\0';
          param_1[0x5cd] = '\0';
          param_1[0x5ce] = '\0';
          param_1[0x5cf] = '\0';
          param_1[0x5c0] = '\0';
          param_1[0x5c1] = '\0';
          param_1[0x5c2] = '\0';
          param_1[0x5c3] = '\0';
          param_1[0x5c4] = '\0';
          param_1[0x5c5] = '\0';
          param_1[0x5c6] = '\0';
          param_1[0x5c7] = '\0';
          param_1[0x5b8] = '\0';
          param_1[0x5b9] = '\0';
          param_1[0x5ba] = '\0';
          param_1[0x5bb] = '\0';
          param_1[0x5bc] = '\0';
          param_1[0x5bd] = '\0';
          param_1[0x5be] = '\0';
          param_1[0x5bf] = '\0';
          param_1[0x5d4] = '\0';
          param_1[0x5d5] = '\0';
          param_1[0x5d6] = -0x80;
          param_1[0x5d7] = '?';
          param_1[0x178] = '\0';
          param_1[0x179] = '\0';
          param_1[0x17a] = '\0';
          param_1[0x17b] = '\0';
          param_1[0x17c] = '\0';
          param_1[0x17d] = '\0';
          param_1[0x17e] = '\0';
          param_1[0x17f] = '\0';
          param_1[0x88] = '\0';
          param_1[0x80] = '\0';
          param_1[0x81] = '\0';
          param_1[0x82] = '\0';
          param_1[0x83] = '\0';
          param_1[0x84] = '\0';
          param_1[0x85] = '\0';
          param_1[0x86] = '\0';
          param_1[0x87] = '\0';
          param_1[0x94] = '\0';
          param_1[0x95] = '\0';
          param_1[0x96] = '\0';
          param_1[0x97] = '\0';
          param_1[0x98] = '\0';
          param_1[0x99] = '\0';
          param_1[0x9a] = '\0';
          param_1[0x9b] = '\0';
          param_1[0x8b8] = '\0';
          param_1[0x8b9] = '\0';
          param_1[0x8ba] = '\0';
          param_1[0x8bb] = '\0';
          param_1[0x8bc] = '\0';
          param_1[0x8bd] = '\0';
          param_1[0x8be] = '\0';
          param_1[0x8bf] = '\0';
          param_1[0x158] = '\0';
          param_1[0x159] = '\0';
          param_1[0x15a] = '\0';
          param_1[0x15b] = '\0';
          param_1[0x15c] = '\0';
          param_1[0x15d] = '\0';
          param_1[0x15e] = '\0';
          param_1[0x15f] = '\0';
          param_1[0x160] = '\0';
          param_1[0x161] = '\0';
          param_1[0x162] = '\0';
          param_1[0x163] = '\0';
          param_1[0x164] = '\0';
          param_1[0x165] = '\0';
          param_1[0x166] = '\0';
          param_1[0x167] = '\0';
          param_1[0x148] = '\0';
          param_1[0x149] = '\0';
          param_1[0x14a] = '\0';
          param_1[0x14b] = '\0';
          param_1[0x14c] = '\0';
          param_1[0x14d] = '\0';
          param_1[0x14e] = '\0';
          param_1[0x14f] = '\0';
          param_1[0x150] = '\0';
          param_1[0x151] = '\0';
          param_1[0x152] = '\0';
          param_1[0x153] = '\0';
          param_1[0x154] = '\0';
          param_1[0x155] = '\0';
          param_1[0x156] = '\0';
          param_1[0x157] = '\0';
          param_1[0x138] = '\0';
          param_1[0x139] = '\0';
          param_1[0x13a] = '\0';
          param_1[0x13b] = '\0';
          param_1[0x13c] = '\0';
          param_1[0x13d] = '\0';
          param_1[0x13e] = '\0';
          param_1[0x13f] = '\0';
          param_1[0x140] = '\0';
          param_1[0x141] = '\0';
          param_1[0x142] = '\0';
          param_1[0x143] = '\0';
          param_1[0x144] = '\0';
          param_1[0x145] = '\0';
          param_1[0x146] = '\0';
          param_1[0x147] = '\0';
          if (param_1[0x1b8] != '\0') {
            *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x178) = 0x3dcccccd;
            *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x17c) = 0;
          }
          param_1[0x8b0] = '\0';
          param_1[0x8b1] = '\0';
          param_1[0x8b2] = -0x80;
          param_1[0x8b3] = '?';
          if (*(long *)(param_1 + 0x1a0) != 0) {
            *(undefined1 *)(*(long *)(param_1 + 0x1a0) + 0x251) = 1;
            *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x2a8) = 1;
          }
          if (*(long *)(param_1 + 0x198) != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x260) = 6;
          }
          if (*(long *)(param_1 + 0x1a0) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 1000) = 0x3f00000000000000;
          }
          if (*(long *)(param_1 + 0x198) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x198) + 600) = 0x3f00000000000000;
          }
          lVar65 = *(long *)(param_1 + 0x1a0);
          if (lVar65 == 0) {
LAB_005218d8:
            param_1[0x895] = '\x01';
LAB_005218e4:
            param_1[0x895] = '\x01';
          }
          else {
            *(undefined4 *)(lVar65 + 0x2ac) = 4;
            *(undefined8 *)(lVar65 + 0x2b0) = 0x3f0000003f800000;
            *(undefined8 *)(lVar65 + 0x2b8) = 0x3f8000003f800000;
            lVar65 = *(long *)(param_1 + 0x1a0);
            if (lVar65 == 0) goto LAB_005218d8;
            *(undefined4 *)(lVar65 + 0x3e0) = 0x40800000;
            *(undefined8 *)(lVar65 + 0x3d8) = 0x418000003dcccccd;
            lVar65 = *(long *)(param_1 + 0x1a0);
            if (lVar65 == 0) goto LAB_005218d8;
            if (*(char *)(lVar65 + 0x12d) != '\0') {
              *(undefined1 *)(lVar65 + 0x3f0) = 0;
              lVar65 = *(long *)(param_1 + 0x1a0);
              if (lVar65 == 0) goto LAB_005218d8;
            }
            *(undefined4 *)(lVar65 + 0x3f4) = 0x3f800000;
            if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_005218d8;
            *(undefined1 *)(*(long *)(param_1 + 0x1a0) + 0x3a8) = 0;
            lVar65 = *(long *)(param_1 + 0x1a0);
            param_1[0x895] = '\x01';
            if (lVar65 == 0) goto LAB_005218e4;
            *(undefined8 *)(lVar65 + 0x3b8) = 0x3f8000003f400000;
            *(undefined4 *)(lVar65 + 0x3c0) = 0x3f490fdb;
            *(undefined1 *)(lVar65 + 0x3c4) = 0;
            *(undefined8 *)(lVar65 + 0x3d0) = 0;
            *(undefined8 *)(lVar65 + 0x3c8) = 0;
            param_1[0x895] = '\x01';
            if (*(long *)(param_1 + 0x1a0) != 0) {
              *(undefined4 *)(*(long *)(param_1 + 0x1a0) + 0x3b0) = 0;
            }
          }
          uVar47 = DAT_01d4c6cc;
          param_1[0x188] = '\0';
          param_1[0x189] = '\0';
          param_1[0x18a] = '\0';
          param_1[0x18b] = '\0';
          param_1[0x18c] = '\0';
          param_1[0x18d] = '\0';
          param_1[0x18e] = '\0';
          param_1[399] = '\0';
          FUN_005241b0(0,0,0,uVar47,0x3f800000,param_1);
          param_1[0x895] = '\x01';
          param_1[0x6dc] = '\0';
          param_1[0x6dd] = '\0';
          param_1[0x6de] = -0x80;
          param_1[0x6df] = '?';
          param_1[0x6e0] = '\0';
          param_1[0x6e1] = '\0';
          param_1[0x6e2] = 'z';
          param_1[0x6e3] = 'D';
          param_1[0x6e8] = -0x33;
          fVar79 = DAT_01d4bc70;
          param_1[0x6e9] = '\x13';
          param_1[0x6ea] = -0x2c;
          param_1[0x6eb] = '>';
          param_1[0x6ec] = '\0';
          param_1[0x6ed] = '\0';
          param_1[0x6ee] = '\0';
          param_1[0x6ef] = '\0';
          param_1[0x6f0] = '\0';
          param_1[0x6f1] = '\0';
          param_1[0x6f2] = '\0';
          param_1[0x6f3] = '\0';
          atanf(fVar79);
          param_1[0x6e4] = -0x25;
          param_1[0x6e5] = '\x0f';
          param_1[0x6e6] = 'I';
          param_1[0x6e7] = '?';
          param_1[0x6f4] = '\0';
          param_1[0x6f5] = '\0';
          param_1[0x6f6] = -0x80;
          param_1[0x6f7] = '?';
          param_1[0x700] = '\0';
          param_1[0x701] = '\0';
          param_1[0x702] = '\0';
          param_1[0x703] = '\0';
          param_1[0x704] = '\0';
          param_1[0x705] = '\0';
          param_1[0x706] = '\0';
          param_1[0x707] = '\0';
          param_1[0x6f8] = '\0';
          param_1[0x6f9] = '\0';
          param_1[0x6fa] = '\0';
          param_1[0x6fb] = '\0';
          param_1[0x6fc] = '\0';
          param_1[0x6fd] = '\0';
          param_1[0x6fe] = '\0';
          param_1[0x6ff] = '\0';
          param_1[0x708] = '\0';
          param_1[0x709] = '\0';
          param_1[0x70a] = -0x80;
          param_1[0x70b] = '?';
          param_1[0x714] = '\0';
          param_1[0x715] = '\0';
          param_1[0x716] = '\0';
          param_1[0x717] = '\0';
          param_1[0x718] = '\0';
          param_1[0x719] = '\0';
          param_1[0x71a] = '\0';
          param_1[0x71b] = '\0';
          param_1[0x70c] = '\0';
          param_1[0x70d] = '\0';
          param_1[0x70e] = '\0';
          param_1[0x70f] = '\0';
          param_1[0x710] = '\0';
          param_1[0x711] = '\0';
          param_1[0x712] = '\0';
          param_1[0x713] = '\0';
          param_1[0x71c] = '\0';
          param_1[0x71d] = '\0';
          param_1[0x71e] = -0x80;
          param_1[0x71f] = '?';
          param_1[0x728] = '\0';
          param_1[0x729] = '\0';
          param_1[0x72a] = '\0';
          param_1[0x72b] = '\0';
          param_1[0x72c] = '\0';
          param_1[0x72d] = '\0';
          param_1[0x72e] = '\0';
          param_1[0x72f] = '\0';
          param_1[0x720] = '\0';
          param_1[0x721] = '\0';
          param_1[0x722] = '\0';
          param_1[0x723] = '\0';
          param_1[0x724] = '\0';
          param_1[0x725] = '\0';
          param_1[0x726] = '\0';
          param_1[0x727] = '\0';
          param_1[0x730] = '\0';
          param_1[0x731] = '\0';
          param_1[0x732] = -0x80;
          param_1[0x733] = '?';
          param_1[0x774] = '\0';
          param_1[0x775] = '\0';
          param_1[0x776] = -0x80;
          param_1[0x777] = '?';
          param_1[0x780] = '\0';
          param_1[0x781] = '\0';
          param_1[0x782] = '\0';
          param_1[0x783] = '\0';
          param_1[0x784] = '\0';
          param_1[0x785] = '\0';
          param_1[0x786] = '\0';
          param_1[0x787] = '\0';
          param_1[0x778] = '\0';
          param_1[0x779] = '\0';
          param_1[0x77a] = '\0';
          param_1[0x77b] = '\0';
          param_1[0x77c] = '\0';
          param_1[0x77d] = '\0';
          param_1[0x77e] = '\0';
          param_1[0x77f] = '\0';
          param_1[0x788] = '\0';
          param_1[0x789] = '\0';
          param_1[0x78a] = -0x80;
          param_1[0x78b] = '?';
          param_1[0x794] = '\0';
          param_1[0x795] = '\0';
          param_1[0x796] = '\0';
          param_1[0x797] = '\0';
          param_1[0x798] = '\0';
          param_1[0x799] = '\0';
          param_1[0x79a] = '\0';
          param_1[0x79b] = '\0';
          param_1[0x78c] = '\0';
          param_1[0x78d] = '\0';
          param_1[0x78e] = '\0';
          param_1[0x78f] = '\0';
          param_1[0x790] = '\0';
          param_1[0x791] = '\0';
          param_1[0x792] = '\0';
          param_1[0x793] = '\0';
          param_1[0x79c] = '\0';
          param_1[0x79d] = '\0';
          param_1[0x79e] = -0x80;
          param_1[0x79f] = '?';
          param_1[0x7a8] = '\0';
          param_1[0x7a9] = '\0';
          param_1[0x7aa] = '\0';
          param_1[0x7ab] = '\0';
          param_1[0x7ac] = '\0';
          param_1[0x7ad] = '\0';
          param_1[0x7ae] = '\0';
          param_1[0x7af] = '\0';
          param_1[0x7a0] = '\0';
          param_1[0x7a1] = '\0';
          param_1[0x7a2] = '\0';
          param_1[0x7a3] = '\0';
          param_1[0x7a4] = '\0';
          param_1[0x7a5] = '\0';
          param_1[0x7a6] = '\0';
          param_1[0x7a7] = '\0';
          param_1[0x7b0] = '\0';
          puVar22 = PTR_DAT_02713980;
          param_1[0x7b1] = '\0';
          param_1[0x7b2] = -0x80;
          param_1[0x7b3] = '?';
          if (*param_1 == '\0') {
            param_1[0x808] = '\0';
            param_1[0x809] = '\0';
            param_1[0x80a] = '\0';
            param_1[0x80b] = '\0';
            param_1[0x80c] = '\0';
            param_1[0x80d] = '\0';
            param_1[0x80e] = '\0';
            param_1[0x80f] = '\0';
            param_1[0x800] = '\0';
            param_1[0x801] = '\0';
            param_1[0x802] = -0x80;
            param_1[0x803] = '?';
            param_1[0x804] = '\0';
            param_1[0x805] = '\0';
            param_1[0x806] = -0x80;
            param_1[0x807] = '?';
            param_1[0x810] = '\0';
LAB_00521ad8:
            param_1[0x81c] = '\0';
            param_1[0x81d] = '\0';
            param_1[0x81e] = '\0';
            param_1[0x81f] = '\0';
            param_1[0x820] = '\0';
            param_1[0x821] = '\0';
            param_1[0x822] = '\0';
            param_1[0x823] = '\0';
            param_1[0x814] = '\0';
            param_1[0x815] = '\0';
            param_1[0x816] = '\0';
            param_1[0x817] = '\0';
            param_1[0x818] = '\0';
            param_1[0x819] = '\0';
            param_1[0x81a] = '\0';
            param_1[0x81b] = '\0';
LAB_00521aec:
            param_1[0x82c] = '\0';
            param_1[0x82d] = '\0';
            param_1[0x82e] = '\0';
            param_1[0x82f] = '\0';
            param_1[0x830] = '\0';
            param_1[0x831] = '\0';
            param_1[0x832] = '\0';
            param_1[0x833] = '\0';
            param_1[0x824] = '\0';
            param_1[0x825] = '\0';
            param_1[0x826] = '\0';
            param_1[0x827] = '\0';
            param_1[0x828] = '\0';
            param_1[0x829] = '\0';
            param_1[0x82a] = '\0';
            param_1[0x82b] = '\0';
LAB_00521b00:
            param_1[0x83c] = '\0';
            param_1[0x83d] = '\0';
            param_1[0x83e] = '\0';
            param_1[0x83f] = '\0';
            param_1[0x840] = '\0';
            param_1[0x841] = '\0';
            param_1[0x842] = '\0';
            param_1[0x843] = '\0';
            param_1[0x834] = '\0';
            param_1[0x835] = '\0';
            param_1[0x836] = '\0';
            param_1[0x837] = '\0';
            param_1[0x838] = '\0';
            param_1[0x839] = '\0';
            param_1[0x83a] = '\0';
            param_1[0x83b] = '\0';
          }
          else {
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x9575);
              FUN_00517ae0(
                          "CPostEffect::SetRenderSceneViewportScale(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                          );
              if (*param_1 == '\0') goto LAB_00521ad8;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)puVar22 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x95b8);
              FUN_00517ae0(
                          "CPostEffect::SetGlareModulatorSourceViewportScale(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                          );
              if (*param_1 == '\0') goto LAB_00521aec;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)puVar22 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x95d1);
              FUN_00517ae0(
                          "CPostEffect::SetEffectMaskColorSourceViewportScale(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                          );
              if (*param_1 == '\0') goto LAB_00521b00;
            }
            if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)puVar22 != 0)) {
              FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                           0x95ea);
              FUN_00517ae0(
                          "CPostEffect::SetEffectMaskAlphaSourceViewportScale(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                          );
            }
          }
          param_1[0x7fc] = '\0';
          param_1[0x7fd] = '\0';
          param_1[0x7fe] = -0x80;
          param_1[0x7ff] = '?';
          param_1[0x844] = '\0';
          param_1[0x845] = '\0';
          param_1[0x846] = '\0';
          param_1[0x847] = '\0';
          param_1[0x848] = '\0';
          param_1[0x849] = '\0';
          param_1[0x84a] = -0x80;
          param_1[0x84b] = '?';
          param_1[0xf78] = '\x01';
          param_1[0xf79] = '\0';
          param_1[0xf7a] = '\0';
          param_1[0xf7b] = '\0';
          param_1[0xf7c] = '\0';
          param_1[0xf7d] = '\0';
          param_1[0xf7e] = -0x80;
          param_1[0xf7f] = '?';
          param_1[0xf80] = '\x01';
          param_1[0xf81] = '\0';
          param_1[0xf82] = '\0';
          param_1[0xf83] = '\0';
          *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x1ac) = 0;
          FUN_005555c0(0x3f800000,0x3f800000,0x3f800000,*(undefined8 *)(param_1 + 0x198));
          local_698 = 0x3e4ccccd;
          uStack_694 = 0x3e4ccccd;
          local_690 = 0x3f800000;
          uStack_68c = 0;
          local_c8 = 0x3e4ccccd;
          local_c4 = 0x3f0000003f333333;
          local_bc = 0;
          FUN_005555e0(*(undefined8 *)(param_1 + 0x198),&local_698,&local_c8);
          param_1[0x1029] = '\0';
          param_1[0x102c] = '\0';
          param_1[0x102d] = '\0';
          param_1[0x102e] = -0x80;
          param_1[0x102f] = '?';
          param_1[0x1030] = '\0';
          param_1[0x1031] = '\0';
          param_1[0x1032] = -0x80;
          param_1[0x1033] = '?';
          param_1[0x1034] = '\0';
          param_1[0x1035] = '\0';
          param_1[0x1036] = -0x80;
          param_1[0x1037] = '?';
          param_1[0x1038] = '\0';
          param_1[0x1039] = '\0';
          param_1[0x103a] = -0x80;
          param_1[0x103b] = '?';
          param_1[0x103c] = '\0';
          param_1[0x103d] = '\0';
          param_1[0x103e] = -0x80;
          param_1[0x103f] = '?';
          param_1[0x1040] = '\0';
          param_1[0x1041] = '\0';
          param_1[0x1042] = -0x80;
          param_1[0x1043] = '?';
          param_1[0x1044] = '\0';
          param_1[0x1045] = '\0';
          param_1[0x1046] = '\0';
          param_1[0x1047] = '\0';
          param_1[0x1048] = '\0';
          param_1[0x1049] = '\0';
          param_1[0x104a] = '\0';
          param_1[0x104b] = '\0';
          param_1[200] = '\0';
          param_1[0xc9] = '\0';
          param_1[0xca] = '\0';
          param_1[0xcb] = '\0';
          param_1[0xcc] = '\0';
          param_1[0xcd] = '\0';
          param_1[0xce] = '\0';
          param_1[0xcf] = '\0';
          param_1[0x1008] = '\x01';
          param_1[0x1009] = '\0';
          param_1[0x100a] = '\0';
          param_1[0x100b] = '\0';
          param_1[0x100c] = '\0';
          param_1[0x100d] = '\0';
          param_1[0x100e] = -0x80;
          param_1[0x100f] = '?';
          param_1[0x1010] = '\0';
          param_1[0x1011] = '\0';
          param_1[0x1012] = '\0';
          param_1[0x1013] = '\0';
          FUN_00524550(0x3f800000,0x3f800000,DAT_01d4c0cc,DAT_01d4c5a8,param_1,0xffffffff);
          param_1[0xbe0] = '\0';
          param_1[0xbe1] = '\0';
          param_1[0xbe2] = '\0';
          param_1[0xbe3] = '\0';
          param_1[0x8d4] = '\0';
          param_1[0x8d5] = '\0';
          param_1[0x8d6] = '\0';
          param_1[0x8d7] = '\0';
          param_1[0x8d8] = '\0';
          param_1[0x8d9] = '\0';
          param_1[0x8da] = '\0';
          param_1[0x8db] = '\0';
          param_1[0x8dc] = '\0';
          param_1[0x8dd] = '\0';
          param_1[0x8de] = '\0';
          param_1[0x8df] = '\0';
          param_1[0x8e0] = '\0';
          param_1[0x8e1] = '\0';
          param_1[0x8e2] = -0x80;
          param_1[0x8e3] = '?';
          param_1[0x8e4] = '\0';
          param_1[0x8e5] = '\0';
          param_1[0x8e6] = '\0';
          param_1[0x8e7] = '\0';
          param_1[0x8e8] = '\0';
          param_1[0x8e9] = '\0';
          param_1[0x8ea] = '\0';
          param_1[0x8eb] = '?';
          param_1[0xb3c] = '\0';
          param_1[0xb3d] = '\0';
          param_1[0xb3e] = -0x80;
          param_1[0xb3f] = '?';
          param_1[0xb40] = '\0';
          param_1[0xb41] = '\0';
          param_1[0xb42] = '\0';
          param_1[0xb43] = '\0';
          param_1[0xb44] = '\0';
          param_1[0xb45] = '\0';
          param_1[0xb46] = '\0';
          param_1[0xb47] = '\0';
          param_1[0xb48] = '\0';
          param_1[0xb49] = '\0';
          param_1[0xb4a] = '\0';
          param_1[0xb4b] = '\0';
          param_1[0xb4c] = '\0';
          param_1[0xb4d] = '\0';
          param_1[0xb4e] = '\0';
          param_1[0xb4f] = '\0';
          param_1[0xb50] = '\0';
          param_1[0xb51] = '\0';
          param_1[0xb52] = -0x80;
          param_1[0xb53] = '?';
          param_1[0xb54] = '\0';
          param_1[0xb55] = '\0';
          param_1[0xb56] = '\0';
          param_1[0xb57] = '\0';
          param_1[0xb58] = '\0';
          param_1[0xb59] = '\0';
          param_1[0xb5a] = '\0';
          param_1[0xb5b] = '\0';
          param_1[0xb5c] = '\0';
          param_1[0xb5d] = '\0';
          param_1[0xb5e] = '\0';
          param_1[0xb5f] = '\0';
          param_1[0xb60] = '\0';
          param_1[0xb61] = '\0';
          param_1[0xb62] = '\0';
          param_1[0xb63] = '\0';
          param_1[0xb64] = '\0';
          param_1[0xb65] = '\0';
          param_1[0xb66] = -0x80;
          param_1[0xb67] = '?';
          param_1[0xb70] = '\0';
          param_1[0xb71] = '\0';
          param_1[0xb72] = '\0';
          param_1[0xb73] = '\0';
          param_1[0xb74] = '\0';
          param_1[0xb75] = '\0';
          param_1[0xb76] = '\0';
          param_1[0xb77] = '\0';
          param_1[0xb68] = '\0';
          param_1[0xb69] = '\0';
          param_1[0xb6a] = '\0';
          param_1[0xb6b] = '\0';
          param_1[0xb6c] = '\0';
          param_1[0xb6d] = '\0';
          param_1[0xb6e] = '\0';
          param_1[0xb6f] = '\0';
          param_1[0xb78] = '\0';
          param_1[0xb79] = '\0';
          param_1[0xb7a] = -0x80;
          param_1[0xb7b] = '?';
          param_1[0xb7c] = '\x19';
          param_1[0xb7d] = '\0';
          param_1[0xb7e] = '\0';
          param_1[0xb7f] = '\0';
          param_1[0xb9c] = '\0';
          param_1[0xb9d] = '\0';
          param_1[0xb9e] = '\0';
          param_1[0xb9f] = '\0';
          param_1[0xba0] = '\0';
          param_1[0xba1] = '\0';
          param_1[0xba2] = '\0';
          param_1[0xba3] = '\0';
          param_1[0xb94] = '\0';
          param_1[0xb95] = '\0';
          param_1[0xb96] = '\0';
          param_1[0xb97] = '\0';
          param_1[0xb98] = '\0';
          param_1[0xb99] = '\0';
          param_1[0xb9a] = '\0';
          param_1[0xb9b] = '\0';
          param_1[0xb8c] = '\0';
          param_1[0xb8d] = '\0';
          param_1[0xb8e] = '\0';
          param_1[0xb8f] = '\0';
          param_1[0xb90] = '\0';
          param_1[0xb91] = '\0';
          param_1[0xb92] = '\0';
          param_1[0xb93] = '\0';
          param_1[0xb84] = '\0';
          param_1[0xb85] = '\0';
          param_1[0xb86] = '\0';
          param_1[0xb87] = '\0';
          param_1[0xb88] = '\0';
          param_1[0xb89] = '\0';
          param_1[0xb8a] = '\0';
          param_1[0xb8b] = '\0';
          param_1[0xb80] = '\x19';
          param_1[0xb81] = '\0';
          param_1[0xb82] = '\0';
          param_1[0xb83] = '\0';
          param_1[0xbbc] = '\0';
          param_1[0xbbd] = '\0';
          param_1[0xbbe] = '\0';
          param_1[0xbbf] = '\0';
          param_1[0xbc0] = '\0';
          param_1[0xbc1] = '\0';
          param_1[0xbc2] = '\0';
          param_1[0xbc3] = '\0';
          param_1[0xbb4] = '\0';
          param_1[0xbb5] = '\0';
          param_1[0xbb6] = '\0';
          param_1[2999] = '\0';
          param_1[3000] = '\0';
          param_1[0xbb9] = '\0';
          param_1[0xbba] = '\0';
          param_1[0xbbb] = '\0';
          param_1[0xba4] = '\0';
          param_1[0xba5] = '\0';
          param_1[0xba6] = '\0';
          param_1[0xba7] = '\0';
          param_1[0xba8] = '\0';
          param_1[0xba9] = '\0';
          param_1[0xbaa] = '\0';
          param_1[0xbab] = '\0';
          param_1[0xbac] = '\0';
          param_1[0xbad] = '\0';
          param_1[0xbae] = '\0';
          param_1[0xbaf] = '\0';
          param_1[0xbb0] = '\0';
          param_1[0xbb1] = '\0';
          param_1[0xbb2] = '\0';
          param_1[0xbb3] = '\0';
          param_1[0xbc4] = '\0';
          param_1[0xbc5] = '\0';
          param_1[0xbc6] = '\0';
          param_1[0xbc7] = '?';
          param_1[0xbc8] = '\0';
          param_1[0xbc9] = '\0';
          param_1[0xbca] = '\0';
          param_1[0xbcb] = '?';
          param_1[0xbcc] = '\0';
          if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)puVar21 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x2ce4
                        );
            FUN_00517ae0(DAT_01cd4fd8,
                         "Frame: %d, View: %d, SetDeltaTime(fElapsedTimeInSeconds: %f);\n",
                         *(undefined4 *)
                          (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4));
          }
          param_1[0x7f4] = -0x77;
          param_1[0x7f5] = -0x78;
          param_1[0x7f6] = -0x78;
          param_1[0x7f7] = '<';
          if (*(long *)(param_1 + 0x1a0) != 0) {
            *(undefined1 *)(*(long *)(param_1 + 0x1a0) + 0x3a8) = 0;
          }
          param_1[0x918] = '\0';
          param_1[0x919] = '\0';
          param_1[0x91a] = '\0';
          param_1[0x91b] = '\0';
          if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)puVar21 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x48f6
                        );
            FUN_00517ae0("Frame: %d, View: %d, SetAutoExposureEnable(iEffectViewIndex: %d, bAutoExposureEnable: %s);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0x7fffffff,"false");
          }
          if (0 < *(int *)(param_1 + 0x400)) {
            lVar68 = 0;
            lVar65 = 0;
            do {
              *(undefined1 *)(*(long *)(param_1 + 0x2a0) + lVar68) = 0;
              lVar65 = lVar65 + 1;
              lVar68 = lVar68 + 0x78;
            } while (lVar65 < *(int *)(param_1 + 0x400));
          }
          FUN_00524960(0x3f000000,DAT_01d4c304,0x41000000,0xbf800000,0xbf800000,0xbf800000,
                       0x3f800000,param_1,0x7fffffff);
          if (*(int *)PTR_DAT_02713970 != 0 && *(int *)puVar21 != 0) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x49b7
                        );
            FUN_00517ae0(DAT_01cd4fe0,DAT_01cd5080,
                         "Frame: %d, View: %d, SetAutoExposureRange(iEffectViewIndex: %d, fMinExposure: %f, fMaxExposure: %f);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0x7fffffff);
          }
          iVar28 = *(int *)(param_1 + 0x400);
          if (0 < iVar28) {
            lVar65 = 0;
            lVar68 = 0;
            do {
              lVar59 = *(long *)(param_1 + 0x2a0) + lVar65;
              lVar65 = lVar65 + 0x78;
              *(undefined8 *)(lVar59 + 0x30) = 0x7f7fffff00800000;
              iVar28 = *(int *)(param_1 + 0x400);
              lVar68 = lVar68 + 1;
            } while (lVar68 < iVar28);
          }
          if (*(int *)PTR_DAT_02713970 != 0 && *(int *)puVar21 != 0) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x49f5
                        );
            FUN_00517ae0(DAT_01cd5468,0,
                         "Frame: %d, View: %d, SetAutoExposureMiddleGray(iEffectViewIndex: %d, fMiddleGray: %f, fInfluencedByGlare: %f);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0x7fffffff);
            iVar28 = *(int *)(param_1 + 0x400);
          }
          if (0 < iVar28) {
            lVar65 = 0;
            lVar68 = 0;
            do {
              lVar59 = *(long *)(param_1 + 0x2a0) + lVar65;
              lVar65 = lVar65 + 0x78;
              *(undefined8 *)(lVar59 + 4) = 0x3e3851ec;
              iVar28 = *(int *)(param_1 + 0x400);
              lVar68 = lVar68 + 1;
            } while (lVar68 < iVar28);
          }
          if (*(int *)PTR_DAT_02713970 != 0 && *(int *)puVar21 != 0) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4aa9
                        );
            FUN_00517ae0(0xbff0000000000000,
                         "Frame: %d, View: %d, SetAutoExposureMiddleGray(iEffectViewIndex: %d, eDelayMode: %d, fDelayTime: %f);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0x7fffffff,0);
            iVar28 = *(int *)(param_1 + 0x400);
          }
          if (0 < iVar28) {
            lVar65 = 0;
            lVar68 = 0;
            do {
              lVar59 = *(long *)(param_1 + 0x2a0) + lVar65;
              lVar65 = lVar65 + 0x78;
              *(undefined8 *)(lVar59 + 0x28) = 0xbf80000000000000;
              lVar68 = lVar68 + 1;
            } while (lVar68 < *(int *)(param_1 + 0x400));
          }
          FUN_00524ff0(0x3f800000,0x3f800000,0,0,param_1,0x7fffffff);
          if (*(int *)PTR_DAT_02713970 != 0 && *(int *)puVar21 != 0) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4bb5
                        );
            FUN_00517ae0(0,
                         "Frame: %d, View: %d, SetAutoExposureMeteringResult(iEffectViewIndex: %d, fSceneLuminance: %f);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0x7fffffff);
          }
          iVar28 = *(int *)(param_1 + 0x400);
          if (0 < iVar28) {
            lVar65 = 0;
            lVar68 = 0x24;
            do {
              *(undefined4 *)(*(long *)(param_1 + 0x2a0) + lVar68) = 0;
              iVar28 = *(int *)(param_1 + 0x400);
              lVar65 = lVar65 + 1;
              lVar68 = lVar68 + 0x78;
            } while (lVar65 < iVar28);
          }
          if (*(int *)PTR_DAT_02713970 != 0 && *(int *)puVar21 != 0) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4a81
                        );
            FUN_00517ae0(DAT_01cd4fe0,DAT_01cd5080,
                         "Frame: %d, View: %d, SetAutoExposureMeteringLuminanceRange(iEffectViewIndex: %d, fMinLuminance: %f, fMaxLuminance: %f);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0x7fffffff);
            iVar28 = *(int *)(param_1 + 0x400);
          }
          if (0 < iVar28) {
            lVar65 = 0;
            lVar68 = 0;
            do {
              lVar59 = *(long *)(param_1 + 0x2a0) + lVar65;
              lVar65 = lVar65 + 0x78;
              *(undefined8 *)(lVar59 + 0x1c) = 0x7f7fffff00800000;
              iVar28 = *(int *)(param_1 + 0x400);
              lVar68 = lVar68 + 1;
            } while (lVar68 < iVar28);
          }
          if (*(int *)PTR_DAT_02713970 != 0 && *(int *)puVar21 != 0) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX FN: ",0x4bf3
                        );
            FUN_00517ae0("Frame: %d, View: %d, SetAutoExposureMeteringColorSpace(eDynamicRangeSpace: %s);\n"
                         ,*(undefined4 *)
                           (*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4),
                         (long)*(int *)(param_1 + 0x298),0xffffffff);
            iVar28 = *(int *)(param_1 + 0x400);
          }
          param_1[0xf74] = -1;
          param_1[0xf75] = -1;
          param_1[0xf76] = -1;
          param_1[0xf77] = -1;
          if (iVar28 < 1) {
            param_1[0xf68] = '\0';
            param_1[0xf69] = '\0';
            param_1[0xf6a] = -0x80;
            param_1[0xf6b] = '?';
          }
          else {
            lVar68 = 0;
            lVar65 = 0;
            do {
              *(undefined1 *)(*(long *)(param_1 + 0x2a8) + lVar68) = 0;
              lVar65 = lVar65 + 1;
              lVar68 = lVar68 + 0x50;
            } while (lVar65 < *(int *)(param_1 + 0x400));
            param_1[0xf68] = '\0';
            param_1[0xf69] = '\0';
            param_1[0xf6a] = -0x80;
            param_1[0xf6b] = '?';
            if (0 < *(int *)(param_1 + 0x400)) {
              lVar65 = 0;
              lVar68 = 0;
              do {
                lVar59 = *(long *)(param_1 + 0x2a8) + lVar65;
                lVar65 = lVar65 + 0x50;
                *(undefined1 *)(lVar59 + 0x24) = 0;
                *(undefined4 *)(lVar59 + 0x20) = 0x3f000000;
                *(undefined4 *)(lVar59 + 0x28) = 0x3f800000;
                lVar68 = lVar68 + 1;
              } while (lVar68 < *(int *)(param_1 + 0x400));
              if (0 < *(int *)(param_1 + 0x400)) {
                lVar65 = 0;
                lVar68 = 0;
                do {
                  lVar59 = *(long *)(param_1 + 0x2a8) + lVar65;
                  lVar65 = lVar65 + 0x50;
                  *(undefined8 *)(lVar59 + 0xc) = 0x7f7fffff00800000;
                  lVar68 = lVar68 + 1;
                } while (lVar68 < *(int *)(param_1 + 0x400));
                if (0 < *(int *)(param_1 + 0x400)) {
                  lVar65 = 0;
                  lVar68 = 0;
                  do {
                    lVar59 = *(long *)(param_1 + 0x2a8) + lVar65;
                    lVar65 = lVar65 + 0x50;
                    *(undefined8 *)(lVar59 + 0x14) = 0x3f0000003f000000;
                    lVar68 = lVar68 + 1;
                  } while (lVar68 < *(int *)(param_1 + 0x400));
                  if (0 < *(int *)(param_1 + 0x400)) {
                    lVar65 = 0;
                    lVar68 = 0;
                    do {
                      lVar59 = *(long *)(param_1 + 0x2a8) + lVar65;
                      lVar65 = lVar65 + 0x50;
                      *(undefined8 *)(lVar59 + 4) = 0xbf80000000000000;
                      lVar68 = lVar68 + 1;
                    } while (lVar68 < *(int *)(param_1 + 0x400));
                    if (0 < *(int *)(param_1 + 0x400)) {
                      lVar65 = 0;
                      lVar68 = 0x1c;
                      do {
                        *(undefined4 *)(*(long *)(param_1 + 0x2a8) + lVar68) = 0;
                        lVar65 = lVar65 + 1;
                        lVar68 = lVar68 + 0x50;
                      } while (lVar65 < *(int *)(param_1 + 0x400));
                    }
                  }
                }
              }
            }
          }
          *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x1e8) = 0x3f000000;
          param_1[0x84c] = param_1[0x59c] ^ 1;
          param_1[0x1018] = '\0';
          param_1[0x1019] = '\0';
          param_1[0x101a] = '\0';
          param_1[0x101b] = '\0';
          param_1[0x101c] = '\0';
          param_1[0x101d] = '\0';
          param_1[0x101e] = -0x80;
          param_1[0x101f] = '?';
          param_1[0x1020] = '\0';
          param_1[0x1021] = '\0';
          param_1[0x1022] = -0x80;
          param_1[0x1023] = '?';
          param_1[0x1024] = '\0';
          param_1[0x1025] = '\0';
          param_1[0x1026] = -0x80;
          param_1[0x1027] = '?';
          param_1[0x850] = '\x01';
          param_1[0x851] = '\0';
          param_1[0x852] = '\0';
          param_1[0x853] = '\0';
          if (*param_1 == '\0') {
            param_1[0x6b0] = '\0';
            param_1[0x6b1] = '\0';
            param_1[0x6b2] = '\0';
            param_1[0x6b3] = '\0';
            if (param_1[0x1d3] == '\0') {
              param_1[0x6b4] = '\0';
              param_1[0x6b5] = '\0';
              param_1[0x6b6] = '\0';
              param_1[0x6b7] = '\0';
              *(undefined4 *)(*(long *)(param_1 + 400) + 0x94) = 0;
            }
            else {
              param_1[0x6b4] = '\0';
              param_1[0x6b5] = '\0';
              param_1[0x6b6] = '\0';
              param_1[0x6b7] = '\0';
            }
          }
          else if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                         0x301c);
            FUN_00517ae0(
                        "CPostEffect::SetMultisampleMode(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                        );
          }
          if ((DAT_0275cc3b & 1) == 0) {
            DAT_0275cc3b = 1;
            DAT_0275cd28 = 0;
            DAT_0275cd30 = 1;
          }
          *(undefined8 *)PTR_DAT_02713a00 = 0xffffffff;
          if ((param_1[0x59c] == '\0') || (param_1[0x59e] != '\0')) {
            param_1[0x894] = '\x01';
          }
          else {
            param_1[0x894] = '\0';
          }
          fVar84 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x30) + 0xc));
          fVar79 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x30) + 8));
          FUN_005242f0(0.0 / fVar79,0.0 / fVar84,0.0 / fVar79,0.0 / fVar84,param_1,0);
          param_1[0x5a4] = '\0';
          param_1[0x5a5] = '\0';
          param_1[0x5a6] = -0x80;
          param_1[0x5a7] = '?';
          param_1[0x5a8] = '\0';
          param_1[0x5a9] = '\0';
          param_1[0x5aa] = -0x80;
          param_1[0x5ab] = '?';
          param_1[0x5ac] = '\0';
          param_1[0x5ad] = '\0';
          param_1[0x5ae] = '\0';
          param_1[0x5af] = '\0';
          param_1[0x5b0] = '\0';
          param_1[0x5b1] = '\0';
          param_1[0x5b2] = '\0';
          param_1[0x5b3] = '\0';
          if (*param_1 == '\0') {
            param_1[10] = '\0';
          }
          else if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
            FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                         0x9f8b);
            FUN_00517ae0(
                        "CPostEffect::SetRenderSceneHeightReverse_Gcm(): Cannot be called between BeginPostEffectScene() and EndPostEffectScene().\n"
                        );
          }
          param_1[0x1014] = '\0';
          if (param_1[0x1b8] == '\0') {
            cVar46 = '\0';
          }
          else {
            *(undefined1 *)(*(long *)(param_1 + 0x1a0) + 0x240) = 0;
            cVar46 = param_1[0x1014];
          }
          uVar37 = 0x3f800000;
          if (cVar46 == '\0') {
            uVar37 = 0;
          }
          uVar41 = 0;
          if (cVar46 == '\0') {
            uVar41 = 0x3f800000;
          }
          FUN_005a6000(uVar37,uVar41,*(undefined8 *)(param_1 + 400),0x7fffffff);
          param_1[0x895] = '\x01';
          param_1[0x50] = '\0';
          param_1[0x51] = '\0';
          param_1[0x52] = '\0';
          param_1[0x53] = '\0';
          param_1[0x54] = '\0';
          param_1[0x55] = '\0';
          param_1[0x56] = '\0';
          param_1[0x57] = '\0';
          uVar47 = 3;
          if (param_1[0x548] != '\0') {
            uVar47 = 8;
          }
          *(undefined4 *)(param_1 + 0x58) = uVar47;
          *(uint *)(param_1 + 0x5c) = (uint)(param_1[0x548] == '\0') << 1;
          param_1[0x60] = '\0';
          param_1[0x61] = '\0';
          param_1[0x62] = -0x80;
          param_1[99] = '?';
          param_1[100] = '\0';
          param_1[0x65] = '\0';
          param_1[0x66] = '\0';
          param_1[0x67] = '\0';
          param_1[0x68] = '\0';
          param_1[0x69] = '\0';
          param_1[0x6a] = -0x80;
          param_1[0x6b] = '?';
          param_1[0x6c] = '\0';
          param_1[0x6d] = '\0';
          param_1[0x6e] = '\0';
          param_1[0x6f] = -0x80;
          FUN_00542d00(*(undefined8 *)(param_1 + 0x18));
          param_1[0x104c] = '\0';
          param_1[0x104d] = '\0';
          FUN_00525660(param_1,0);
          FUN_00525660(param_1,1);
          FUN_00525660(param_1,2);
          FUN_00525660(param_1,3);
          FUN_00525660(param_1,4);
          FUN_00525660(param_1,5);
          FUN_00525800(param_1);
          if ((*(code **)PTR_DAT_027139c8 != (code *)0x0) &&
             (((byte)*PTR_DAT_027139d0 >> 3 & 1) != 0)) {
            (**(code **)PTR_DAT_027139c8)(8,*(undefined8 *)PTR_DAT_027139d8);
          }
          FUN_00525d00(param_1);
          FUN_00570950(plVar36,0);
          FUN_005a6210(0x3f800000,*(undefined8 *)(param_1 + 400),0,0);
          FUN_0055ea30(*(undefined8 *)(param_1 + 0x198),0);
          if (param_1[0x1b8] != '\0') {
            FUN_005aa340(*(undefined8 *)(param_1 + 0x1a0),0);
          }
          if ((*(long **)(param_1 + 0x260) != (long *)0x0) &&
             (iVar28 = *(int *)(param_1 + 0x400), 0 < iVar28)) {
            lVar65 = 0;
            lVar68 = **(long **)(param_1 + 0x260);
            do {
              if (lVar68 == 0) {
                if ((long)iVar28 <= lVar65 + 1) break;
              }
              else {
                FUN_005a6210(0x3f800000,lVar68,0,0);
                iVar28 = *(int *)(param_1 + 0x400);
                if ((long)iVar28 <= lVar65 + 1) break;
              }
              lVar65 = lVar65 + 1;
              lVar68 = *(long *)(*(long *)(param_1 + 0x260) + lVar65 * 8);
            } while( true );
          }
          if (((*(undefined8 **)(param_1 + 0x238) != (undefined8 *)0x0) &&
              (0 < *(int *)(param_1 + 0x400))) &&
             (FUN_0059c980(**(undefined8 **)(param_1 + 0x238),0), 1 < *(int *)(param_1 + 0x400))) {
            lVar65 = 1;
            do {
              FUN_0059c980(*(undefined8 *)(*(long *)(param_1 + 0x238) + lVar65 * 8),0);
              lVar65 = lVar65 + 1;
            } while (lVar65 < *(int *)(param_1 + 0x400));
          }
          if (0 < *(int *)(param_1 + 0x558)) {
            lVar65 = 0;
            do {
              FUN_0059c980(*(undefined8 *)(*(long *)(param_1 + 0x550) + lVar65 * 8),0);
              lVar65 = lVar65 + 1;
            } while (lVar65 < *(int *)(param_1 + 0x558));
          }
          if (0 < *(int *)(param_1 + 0x568)) {
            lVar68 = 0;
            lVar65 = 0;
            do {
              FUN_0059c980(*(undefined8 *)(*(long *)(param_1 + 0x560) + lVar68),0);
              FUN_0059c980(*(undefined8 *)(*(long *)(param_1 + 0x560) + lVar68 + 8),0);
              lVar65 = lVar65 + 1;
              lVar68 = lVar68 + 0x10;
            } while (lVar65 < *(int *)(param_1 + 0x568));
          }
          FUN_00525e80(DAT_01d4bd3c,0x3f800000,param_1,0x7fffffff);
          FUN_00526120(0,param_1,0x7fffffff);
          if ((param_1[0x1be] != '\0') && (0 < *(int *)(param_1 + 0x400))) {
            lVar68 = 0;
            lVar65 = 0;
            do {
              lVar59 = lVar65 * 4;
              lVar65 = lVar65 + 1;
              *(undefined4 *)(*(long *)(param_1 + 0x240) + lVar59) = 0x3f800000;
              *(undefined4 *)(*(long *)(param_1 + 0x248) + lVar59) = 0x3f800000;
              *(undefined4 *)(*(long *)(param_1 + 0x250) + lVar59) =
                   *(undefined4 *)(param_1 + 0x7f8);
              puVar42 = (undefined8 *)(*(long *)(param_1 + 600) + lVar68);
              lVar68 = lVar68 + 0x10;
              *puVar42 = 0;
              puVar42[1] = 0;
            } while (lVar65 < *(int *)(param_1 + 0x400));
          }
          (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
                    (*(long **)(param_1 + 0x18),0,*(undefined8 *)(param_1 + 0x20),0);
          (**(code **)(**(long **)(param_1 + 0x18) + 0x40))
                    (*(long **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_00522a2c;
          iVar28 = *(int *)PTR_DAT_027139b0;
          if (iVar28 < 1) {
            plVar36 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                           "../src/GPU\\GPUClassUtil.h",0x49,0);
            FUN_0056dc10(plVar36,0);
            *(long **)PTR_DAT_027139b8 = plVar36;
            *(undefined4 *)PTR_DAT_027139b0 = 1;
            if (plVar36 == (long *)0x0) goto LAB_0052298c;
LAB_005229e8:
            uVar37 = *(undefined8 *)PTR_PTR_02713988;
            (**(code **)(*plVar36 + 0x20))(plVar36);
            FUN_005b9b10(uVar37,plVar36);
            iVar28 = 0;
            *(undefined8 *)PTR_DAT_027139b8 = 0;
          }
          else {
            *(int *)PTR_DAT_027139b0 = iVar28 + 1;
            if (iVar28 + 1 < 2) {
              plVar36 = *(long **)PTR_DAT_027139b8;
              if (plVar36 != (long *)0x0) goto LAB_005229e8;
LAB_0052298c:
              iVar28 = 0;
            }
          }
          *(int *)PTR_DAT_027139b0 = iVar28;
LAB_00522a2c:
          FUN_005262c0(param_1);
          if (*(int *)PTR_DAT_02713970 == 0) {
            return 0;
          }
          if (*(int *)PTR_DAT_02713978 == 0) {
            return 0;
          }
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x281d);
          FUN_00517ae0("==== CPostEffect::Initialize() succeeded. ====\n");
          return 0;
        }
        if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x23be)
        ;
        uVar37 = FUN_00546ea0(iVar28);
        pcVar67 = 
        "CPostEffect::Initialize(): m_pRenderBuffer->InitializeDevice() failed (0x%x: %s).\n";
      }
      else {
        uVar37 = FUN_005b9a50(*puVar42,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",
                              0x21b3,0);
        FUN_0059aa70(uVar37,"CPostEffect::m_pSmaaEdgeTexture");
        *(undefined8 *)(param_1 + 0x228) = uVar37;
        uVar37 = FUN_005b9a50(*puVar42,0x128,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",
                              0x21b4,0);
        FUN_0059aa70(uVar37,"CPostEffect::m_pSmaaBlendTexture");
        *(undefined8 *)(param_1 + 0x230) = uVar37;
        local_698 = 0;
        local_67c = 0;
        local_678 = local_678 & 0xffffff00;
        local_684 = 0;
        uStack_680 = 0;
        uStack_68c = 0x1c;
        local_688 = 1;
        uStack_694 = uVar2;
        local_690 = uVar3;
        iVar28 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x228),&local_698);
        if (iVar28 < 0) {
          if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                       0x21be);
          uVar37 = FUN_00546ea0(iVar28);
          pcVar67 = 
          "CPostEffect::Initialize(): m_pSmaaEdgeTexture->Initialize() failed (0x%x: %s).\n";
        }
        else {
          local_698 = 0;
          uStack_68c = 0x1c;
          local_688 = 1;
          local_67c = 0;
          local_678 = local_678 & 0xffffff00;
          local_684 = 0;
          uStack_680 = 0;
          uStack_694 = uVar2;
          local_690 = uVar3;
          iVar28 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x230),&local_698);
          if (-1 < iVar28) goto LAB_0051f240;
          if ((*piVar69 == 0) || (*(int *)PTR_DAT_02713980 == 0)) goto LAB_0052047c;
          FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",
                       0x21c9);
          uVar37 = FUN_00546ea0(iVar28);
          pcVar67 = 
          "CPostEffect::Initialize(): m_pSmaaBlendTexture->Initialize() failed (0x%x: %s).\n";
        }
      }
    }
  }
LAB_00520470:
  FUN_00517ae0(pcVar67,iVar28,uVar37);
LAB_0052047c:
  FUN_00519740(param_1,0);
  return iVar28;
code_r0x00520ab8:
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713978 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX: ",0x2597);
    FUN_00517ae0("CPostEffect::Initialize(): m_pppOetfSceneLuminanceResizeWork[%d]->InitializeDevice() succeeded.\n"
                 ,uVar35 & 0xffffffff);
  }
  uVar35 = uVar35 + 1;
  if ((long)*(int *)(param_1 + 0x580) <= (long)uVar35) goto LAB_00520afc;
  goto LAB_00520a88;
}


