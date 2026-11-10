/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1c4f0; name: FUN_00a1c4f0
 */


void FUN_00a1c4f0(long param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char local_480 [8];
  undefined2 local_478;
  undefined1 uStack_476;
  undefined1 uStack_475;
  undefined7 uStack_474;
  undefined1 uStack_46d;
  undefined7 local_46c;
  undefined1 uStack_465;
  undefined7 local_464;
  undefined1 uStack_45d;
  undefined7 local_45c;
  undefined1 uStack_455;
  undefined7 local_454;
  undefined1 uStack_44d;
  undefined7 local_44c;
  undefined1 uStack_445;
  undefined7 local_444;
  undefined1 uStack_43d;
  undefined7 local_43c;
  undefined1 uStack_435;
  undefined7 local_434;
  undefined1 uStack_42d;
  undefined7 local_42c;
  undefined1 uStack_425;
  undefined7 local_424;
  undefined1 uStack_41d;
  ulong local_418;
  ulong local_410;
  ulong local_408;
  ulong local_400;
  ulong local_3f8;
  ulong local_3f0;
  ulong local_3e8;
  ulong local_3e0;
  ulong local_3d8;
  ulong local_3d0;
  ulong local_3c8;
  ulong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined2 local_358;
  undefined6 uStack_356;
  undefined2 local_350;
  undefined6 uStack_34e;
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 local_340;
  undefined6 uStack_33e;
  undefined2 uStack_338;
  undefined6 uStack_336;
  undefined2 local_330;
  undefined6 uStack_32e;
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 local_320;
  undefined6 uStack_31e;
  undefined2 uStack_318;
  undefined6 uStack_316;
  undefined2 local_310;
  undefined6 uStack_30e;
  undefined2 uStack_308;
  undefined6 uStack_306;
  undefined2 local_300;
  undefined6 uStack_2fe;
  undefined2 uStack_2f8;
  undefined4 local_2f6;
  undefined1 local_2f2;
  undefined1 uStack_2f1;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  ulong local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  long local_220;
  long local_218;
  long local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  ulong local_188;
  undefined2 local_180;
  undefined1 uStack_17e;
  undefined5 uStack_17d;
  undefined3 uStack_178;
  undefined5 uStack_175;
  undefined3 uStack_170;
  undefined5 local_16d;
  undefined3 uStack_168;
  undefined5 local_165;
  undefined3 uStack_160;
  undefined5 local_15d;
  undefined3 uStack_158;
  undefined5 local_155;
  undefined3 uStack_150;
  undefined5 local_14d;
  undefined3 uStack_148;
  undefined5 local_145;
  undefined3 uStack_140;
  undefined5 local_13d;
  undefined3 uStack_138;
  undefined5 local_135;
  undefined3 uStack_130;
  undefined5 local_12d;
  undefined4 uStack_128;
  ulong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar10 = *param_2;
  uVar8 = param_2[2];
  *(ulong *)(param_1 + 0x1d8) = param_2[1];
  *(ulong *)(param_1 + 0x1e0) = uVar8;
  *(ulong *)(param_1 + 0x1d0) = uVar10;
  uVar10 = param_2[3];
  uVar8 = param_2[4];
  lVar9 = *(long *)(param_1 + 0x10);
  uVar1 = param_2[6];
  *(ulong *)(param_1 + 0x1f8) = param_2[5];
  *(ulong *)(param_1 + 0x200) = uVar1;
  *(ulong *)(param_1 + 0x1e8) = uVar10;
  *(ulong *)(param_1 + 0x1f0) = uVar8;
  uVar10 = param_2[7];
  uVar1 = param_2[8];
  uVar8 = param_2[9];
  *(ulong *)(param_1 + 0x220) = param_2[10];
  *(ulong *)(param_1 + 0x218) = uVar8;
  *(ulong *)(param_1 + 0x210) = uVar1;
  *(ulong *)(param_1 + 0x208) = uVar10;
  uVar10 = param_2[0xb];
  uVar1 = param_2[0xc];
  uVar8 = param_2[0xd];
  *(ulong *)(param_1 + 0x240) = param_2[0xe];
  *(ulong *)(param_1 + 0x238) = uVar8;
  *(ulong *)(param_1 + 0x230) = uVar1;
  *(ulong *)(param_1 + 0x228) = uVar10;
  uVar10 = param_2[0xf];
  if (uVar10 != 0) {
    (**(code **)(*(long *)(uVar10 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x248);
  *(ulong *)(param_1 + 0x248) = uVar10;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","f_in");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)param_2,"f_in");
  }
  uVar8 = 0xcbf29ce484222645;
  uVar10 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar10 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar10 = (uVar10 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x250) = uVar10;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","pattern_DM_base");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)param_2,"pattern_DM_base");
  }
  uVar10 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar10 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar10 = (uVar10 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 600) = uVar10;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","pattern_DM_in");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)param_2,"pattern_DM_in");
  }
  uVar10 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar10 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar10 = (uVar10 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x260) = uVar10;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","pattern_DM_out");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)param_2,"pattern_DM_out");
  }
  uVar10 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar10 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar10 = (uVar10 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x268) = uVar10;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","A_name_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",(char *)param_2,"A_name_00");
  }
  local_418 = 0xcbf29ce484222645;
  if ((byte)local_120 != '\0') {
    uVar10 = local_120 & 0xff;
    local_418 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_418 = (local_418 ^ uVar10) * 0x100000001b3;
      bVar2 = *pbVar7;
      uVar10 = (ulong)bVar2;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  uVar4 = FUN_00a0e830(*(undefined8 *)(lVar9 + 0x1b0),&local_418);
  *(undefined8 *)(param_1 + 0x270) = uVar4;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","A_lv_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",(char *)param_2,"A_lv_00");
  }
  local_418 = 0xcbf29ce484222645;
  if ((byte)local_120 != '\0') {
    uVar10 = local_120 & 0xff;
    local_418 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_418 = (local_418 ^ uVar10) * 0x100000001b3;
      bVar2 = *pbVar7;
      uVar10 = (ulong)bVar2;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  uVar4 = FUN_00a0e830(*(undefined8 *)(lVar9 + 0x1b0),&local_418);
  *(undefined8 *)(param_1 + 0x278) = uVar4;
  local_12d = 0;
  local_135 = 0;
  uStack_130 = 0;
  local_13d = 0;
  uStack_138 = 0;
  local_145 = 0;
  uStack_140 = 0;
  local_14d = 0;
  uStack_148 = 0;
  local_155 = 0;
  uStack_150 = 0;
  local_15d = 0;
  uStack_158 = 0;
  local_165 = 0;
  uStack_160 = 0;
  local_16d = 0;
  uStack_168 = 0;
  uStack_175 = 0;
  uStack_170 = 0;
  uStack_17d = 0;
  uStack_178 = 0;
  local_180 = 0x7573;
  uStack_128 = 0;
  uStack_17e = 0;
  local_188._0_1_ = s_L_seibetsu_01cebd5e[0];
  local_188._1_1_ = s_L_seibetsu_01cebd5e[1];
  local_188._2_1_ = s_L_seibetsu_01cebd5e[2];
  local_188._3_1_ = s_L_seibetsu_01cebd5e[3];
  local_188._4_1_ = s_L_seibetsu_01cebd5e[4];
  local_188._5_1_ = s_L_seibetsu_01cebd5e[5];
  local_188._6_1_ = s_L_seibetsu_01cebd5e[6];
  local_188._7_1_ = s_L_seibetsu_01cebd5e[7];
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"%s",&local_188);
  }
  else {
    snprintf((char *)&local_120,100,"%s_%s",(char *)param_2,(char *)&local_188);
  }
  local_3b8 = (ulong)local_3b8._4_4_ << 0x20;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_408 = 0;
  local_400 = 0;
  local_418 = 0;
  local_410 = 0;
  snprintf((char *)&local_418,100,"%s",&local_120);
  local_b8 = local_418;
  local_98 = local_3f8;
  local_a0 = local_400;
  local_a8 = local_408;
  local_b0 = local_410;
  local_78 = local_3d8;
  local_80 = local_3e0;
  local_88 = local_3e8;
  local_90 = local_3f0;
  local_58 = (undefined4)local_3b8;
  local_60 = local_3c0;
  local_68 = local_3c8;
  local_70 = local_3d0;
  *(ulong *)(param_1 + 0x280) = local_418;
  *(ulong *)(param_1 + 0x2a0) = local_3f8;
  *(ulong *)(param_1 + 0x298) = local_400;
  *(ulong *)(param_1 + 0x290) = local_408;
  *(ulong *)(param_1 + 0x288) = local_410;
  *(ulong *)(param_1 + 0x2c0) = local_3d8;
  *(ulong *)(param_1 + 0x2b8) = local_3e0;
  *(ulong *)(param_1 + 0x2b0) = local_3e8;
  *(ulong *)(param_1 + 0x2a8) = local_3f0;
  *(ulong *)(param_1 + 0x2c8) = local_3d0;
  *(undefined4 *)(param_1 + 0x2e0) = (undefined4)local_3b8;
  *(ulong *)(param_1 + 0x2d8) = local_3c0;
  *(ulong *)(param_1 + 0x2d0) = local_3c8;
  local_360 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_418 = 0;
  local_390 = 0;
  uStack_388 = 0;
  local_35c = 0xffffffff;
  local_3a0 = 0;
  uStack_398 = 0;
  local_290 = 0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_358 = 0;
  uStack_356 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_198 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_1a0 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_1a8 = 0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_1b0 = 0;
  local_400 = 0;
  local_3f8 = 0;
  local_1b8 = 0;
  local_410 = 0;
  local_408 = 0;
  local_1c0 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_1c8 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_1d0 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_1d8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_1e0 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_248 = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_300 = 0;
  uStack_2fe = 0;
  uStack_2f8 = 0;
  local_2f6 = 0;
  local_2f2 = 0;
  uStack_2f1 = 0;
  local_310 = 0;
  uStack_30e = 0;
  uStack_308 = 0;
  uStack_306 = 0;
  local_320 = 0;
  uStack_31e = 0;
  uStack_318 = 0;
  uStack_316 = 0;
  local_330 = 0;
  uStack_32e = 0;
  uStack_328 = 0;
  uStack_326 = 0;
  local_340 = 0;
  uStack_33e = 0;
  uStack_338 = 0;
  uStack_336 = 0;
  local_350 = 0;
  uStack_34e = 0;
  uStack_348 = 0;
  uStack_346 = 0;
  local_288 = 0;
  uStack_280 = 0;
  lVar9 = *(long *)(lVar9 + 0x1b0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar10 = *(ulong *)(param_1 + 0x248);
  if (uVar10 != 0) {
    (**(code **)(*(long *)(uVar10 + 0x48) + 0x10))();
  }
  if (local_418 != 0) {
    plVar5 = (long *)(local_418 + 0x48);
    local_418 = uVar10;
    (**(code **)(*plVar5 + 0x18))();
    uVar10 = local_418;
  }
  local_418 = uVar10;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    cVar6 = '\0';
    local_410 = 0xcbf29ce484222645;
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s",(char *)param_2);
    local_410 = 0xcbf29ce484222645;
    if ((byte)local_120 != 0) {
      local_410 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&local_120 | 1);
      do {
        local_410 = (local_410 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while ((byte)local_120 != 0);
    }
    cVar6 = (char)*param_2;
  }
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if (cVar6 == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","T_pokeName_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",(char *)param_2,"T_pokeName_00");
  }
  local_408 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    local_408 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_408 = (local_408 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  local_400 = 0xe88954670b1262c3;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","T_lv_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",(char *)param_2,"T_lv_00");
  }
  local_3f8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    local_3f8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_3f8 = (local_3f8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  local_3f0 = 0x840ef7c62ee1898;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","T_lvNum_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",(char *)param_2,"T_lvNum_00");
  }
  local_3e8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    local_3e8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_3e8 = (local_3e8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  local_3e0 = 0x840f07c62ee1a4b;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","T_HPNum_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",(char *)param_2,"T_HPNum_00");
  }
  local_3d0 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    local_3d0 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_3d0 = (local_3d0 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  local_3c8 = 0xc6f033339f87daee;
  local_478 = 0x6369;
  uStack_476 = 0x6b;
  uStack_475 = 0;
  local_424 = 0;
  uStack_41d = 0;
  local_42c = 0;
  uStack_425 = 0;
  local_434 = 0;
  uStack_42d = 0;
  local_43c = 0;
  uStack_435 = 0;
  local_444 = 0;
  uStack_43d = 0;
  local_44c = 0;
  uStack_445 = 0;
  local_454 = 0;
  uStack_44d = 0;
  local_45c = 0;
  uStack_455 = 0;
  local_464 = 0;
  uStack_45d = 0;
  local_46c = 0;
  uStack_465 = 0;
  uStack_474 = 0;
  uStack_46d = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_480 = (char  [8])s_L_icon_sick_01d44945._0_8_;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"%s",local_480);
  }
  else {
    snprintf((char *)&local_120,100,"%s_%s",(char *)param_2,local_480);
  }
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  snprintf((char *)&local_b8,100,"%s",&local_120);
  local_188 = local_b8;
  uStack_168 = (undefined3)local_98;
  local_165 = (undefined5)((ulong)local_98 >> 0x18);
  uStack_170 = (undefined3)local_a0;
  local_16d = (undefined5)((ulong)local_a0 >> 0x18);
  uStack_178 = (undefined3)local_a8;
  uStack_175 = (undefined5)((ulong)local_a8 >> 0x18);
  local_180 = (undefined2)local_b0;
  uStack_17e = (undefined1)((ulong)local_b0 >> 0x10);
  uStack_17d = (undefined5)((ulong)local_b0 >> 0x18);
  uStack_148 = (undefined3)local_78;
  local_145 = (undefined5)((ulong)local_78 >> 0x18);
  uStack_150 = (undefined3)local_80;
  local_14d = (undefined5)((ulong)local_80 >> 0x18);
  uStack_158 = (undefined3)local_88;
  local_155 = (undefined5)((ulong)local_88 >> 0x18);
  uStack_160 = (undefined3)local_90;
  local_15d = (undefined5)((ulong)local_90 >> 0x18);
  uStack_128 = local_58;
  uStack_130 = (undefined3)local_60;
  local_12d = (undefined5)((ulong)local_60 >> 0x18);
  uStack_138 = (undefined3)local_68;
  local_135 = (undefined5)((ulong)local_68 >> 0x18);
  uStack_140 = (undefined3)local_70;
  local_13d = (undefined5)((ulong)local_70 >> 0x18);
  uStack_316 = (undefined6)local_78;
  local_310 = (undefined2)((ulong)local_78 >> 0x30);
  local_2f6 = local_58;
  uStack_2fe = (undefined6)local_60;
  uStack_2f8 = (undefined2)((ulong)local_60 >> 0x30);
  uStack_306 = (undefined6)local_68;
  local_300 = (undefined2)((ulong)local_68 >> 0x30);
  uStack_30e = (undefined6)local_70;
  uStack_308 = (undefined2)((ulong)local_70 >> 0x30);
  uStack_356 = (undefined6)local_b8;
  local_350 = (undefined2)(local_b8 >> 0x30);
  uStack_336 = (undefined6)local_98;
  local_330 = (undefined2)((ulong)local_98 >> 0x30);
  uStack_33e = (undefined6)local_a0;
  uStack_338 = (undefined2)((ulong)local_a0 >> 0x30);
  uStack_346 = (undefined6)local_a8;
  local_340 = (undefined2)((ulong)local_a8 >> 0x30);
  uStack_34e = (undefined6)local_b0;
  uStack_348 = (undefined2)((ulong)local_b0 >> 0x30);
  uStack_31e = (undefined6)local_80;
  uStack_318 = (undefined2)((ulong)local_80 >> 0x30);
  uStack_326 = (undefined6)local_88;
  local_320 = (undefined2)((ulong)local_88 >> 0x30);
  uStack_32e = (undefined6)local_90;
  uStack_328 = (undefined2)((ulong)local_90 >> 0x30);
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if (*(char *)(param_1 + 0x280) == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","switch");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)(param_1 + 0x280),"switch");
  }
  local_288 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    local_288 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_288 = (local_288 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  local_2f2 = 1;
  local_290 = CONCAT13(1,(undefined3)local_290);
  local_478 = 0x5048;
  uStack_41d = 0;
  uStack_425 = 0;
  local_424 = 0;
  uStack_42d = 0;
  local_42c = 0;
  uStack_435 = 0;
  local_434 = 0;
  uStack_43d = 0;
  local_43c = 0;
  uStack_445 = 0;
  local_444 = 0;
  uStack_44d = 0;
  local_44c = 0;
  uStack_455 = 0;
  local_454 = 0;
  uStack_45d = 0;
  local_45c = 0;
  uStack_465 = 0;
  local_464 = 0;
  uStack_46d = 0;
  local_46c = 0;
  uStack_475 = 0;
  uStack_474 = 0;
  uStack_476 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_480 = (char  [8])s_L_gauge_HP_01d0a77c._0_8_;
  if ((char)*param_2 == '\0') {
    snprintf((char *)&local_120,100,"%s",local_480);
  }
  else {
    snprintf((char *)&local_120,100,"%s_%s",(char *)param_2,local_480);
  }
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  snprintf((char *)&local_b8,100,"%s",&local_120);
  local_188 = local_b8;
  uStack_168 = (undefined3)local_98;
  local_165 = (undefined5)((ulong)local_98 >> 0x18);
  uStack_170 = (undefined3)local_a0;
  local_16d = (undefined5)((ulong)local_a0 >> 0x18);
  uStack_178 = (undefined3)local_a8;
  uStack_175 = (undefined5)((ulong)local_a8 >> 0x18);
  local_180 = (undefined2)local_b0;
  uStack_17e = (undefined1)((ulong)local_b0 >> 0x10);
  uStack_17d = (undefined5)((ulong)local_b0 >> 0x18);
  uStack_148 = (undefined3)local_78;
  local_145 = (undefined5)((ulong)local_78 >> 0x18);
  uStack_150 = (undefined3)local_80;
  local_14d = (undefined5)((ulong)local_80 >> 0x18);
  uStack_158 = (undefined3)local_88;
  local_155 = (undefined5)((ulong)local_88 >> 0x18);
  uStack_160 = (undefined3)local_90;
  local_15d = (undefined5)((ulong)local_90 >> 0x18);
  uStack_128 = local_58;
  uStack_130 = (undefined3)local_60;
  local_12d = (undefined5)((ulong)local_60 >> 0x18);
  uStack_138 = (undefined3)local_68;
  local_135 = (undefined5)((ulong)local_68 >> 0x18);
  uStack_140 = (undefined3)local_70;
  local_13d = (undefined5)((ulong)local_70 >> 0x18);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar3 = lVar9;
  if (local_218 != 0) {
    plVar5 = (long *)(local_218 + 0x48);
    local_218 = lVar9;
    (**(code **)(*plVar5 + 0x18))();
    lVar3 = local_218;
  }
  local_218 = lVar3;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)local_188 == '\0') {
    cVar6 = '\0';
    local_1f0 = 0xcbf29ce484222645;
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s",(char *)&local_188);
    local_1f0 = 0xcbf29ce484222645;
    if ((byte)local_120 != 0) {
      local_1f0 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&local_120 | 1);
      do {
        local_1f0 = (local_1f0 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while ((byte)local_120 != 0);
    }
    cVar6 = (char)local_188;
  }
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if (cVar6 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","gauge_scale");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"gauge_scale");
  }
  local_1e8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    local_1e8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_1e8 = (local_1e8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)local_188 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","color_green");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"color_green");
  }
  local_1e0 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    local_1e0 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_1e0 = (local_1e0 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)local_188 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","color_yellow");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"color_yellow");
  }
  local_1d8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    local_1d8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      local_1d8 = (local_1d8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_120 != 0);
  }
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if ((char)local_188 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","color_red");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"color_red");
  }
  if ((byte)local_120 != '\0') {
    uVar10 = local_120 & 0xff;
    pbVar7 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ uVar10) * 0x100000001b3;
      bVar2 = *pbVar7;
      uVar10 = (ulong)bVar2;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
  }
  local_1d0 = uVar8;
  FUN_00a0fae0(param_1,&local_418);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (local_1a8 != 0) {
    (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
    local_1a8 = 0;
  }
  if (local_210 != 0) {
    (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
    local_210 = 0;
  }
  if (local_218 != 0) {
    (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
    local_218 = 0;
  }
  if (local_220 != 0) {
    (**(code **)(*(long *)(local_220 + 0x48) + 0x18))();
    local_220 = 0;
  }
  if (local_418 != 0) {
    (**(code **)(*(long *)(local_418 + 0x48) + 0x18))();
  }
  local_418 = *param_2;
  local_410 = param_2[1];
  local_408 = param_2[2];
  local_400 = param_2[3];
  local_3f8 = param_2[4];
  local_3f0 = param_2[5];
  local_3e8 = param_2[6];
  local_3e0 = param_2[7];
  local_3d8 = param_2[8];
  local_3c0 = param_2[0xb];
  local_3d0 = param_2[9];
  local_3c8 = param_2[10];
  local_3b8 = CONCAT44(local_3b8._4_4_,(int)param_2[0xc]);
  FUN_00a0d510(param_1,&local_418);
  return;
}


