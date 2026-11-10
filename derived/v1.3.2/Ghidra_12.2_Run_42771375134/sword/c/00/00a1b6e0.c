/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1b6e0; name: FUN_00a1b6e0
 */


void FUN_00a1b6e0(long param_1,long *param_2)

{
  long *param3;
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  ulong local_480;
  undefined8 local_478;
  undefined8 local_470;
  long local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  long local_288;
  long local_280;
  long local_278;
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
  undefined8 local_220;
  undefined8 local_218;
  long local_210;
  undefined8 local_208;
  undefined8 local_200;
  char local_1f0 [8];
  char local_1e8 [8];
  undefined1 local_1e0;
  undefined8 local_1df;
  undefined8 local_1d7;
  undefined8 local_1cf;
  undefined8 local_1c7;
  undefined8 local_1bf;
  undefined8 local_1b7;
  undefined8 local_1af;
  undefined8 local_1a7;
  undefined8 local_19f;
  undefined8 local_197;
  undefined2 local_18f;
  undefined1 local_18d;
  undefined6 uStack_188;
  undefined2 local_182;
  undefined6 uStack_180;
  undefined2 local_17a;
  undefined6 uStack_178;
  undefined2 local_172;
  undefined6 uStack_170;
  undefined2 local_16a;
  undefined6 uStack_168;
  undefined2 local_162;
  undefined6 uStack_160;
  undefined2 local_15a;
  undefined6 uStack_158;
  undefined2 local_152;
  undefined6 uStack_150;
  undefined2 local_14a;
  undefined6 uStack_148;
  undefined2 local_142;
  undefined6 uStack_140;
  undefined2 local_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined4 uStack_130;
  undefined2 local_12c;
  undefined2 uStack_12a;
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
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar10 = *(long *)(param_1 + 0x10);
  pcVar6 = *(code **)(param_1 + 0x28);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    (*pcVar6)(param_1 + 0x40);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x40);
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_2[3];
    *(long *)(param_1 + 0x30) = param_2[2];
    *(long *)(param_1 + 0x38) = lVar3;
    *(long *)(param_1 + 0x20) = lVar1;
    *(long *)(param_1 + 0x28) = lVar2;
  }
  param3 = param_2 + 0x10;
  memcpy((void *)(param_1 + 0xa0),param3,0xcc);
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  uVar9 = 0xcbf29ce484222645;
  local_d8 = 0;
  local_e0 = 0;
  local_480 = 0xcbf29ce484222645;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  if (*(char *)((long)param_2 + 0xe4) != '\0') {
    snprintf((char *)&local_120,100,"pane_%s",(char *)((long)param_2 + 0xe4));
    local_480 = 0xcbf29ce484222645;
    if ((byte)local_120 != 0) {
      local_480 = 0xcbf29ce484222645;
      pbVar8 = (byte *)((ulong)&local_120 | 1);
      bVar4 = (byte)local_120;
      do {
        local_480 = (local_480 ^ bVar4) * 0x100000001b3;
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar4 != 0);
    }
  }
  uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),&local_480);
  *(undefined8 *)(param_1 + 0x1b8) = uVar5;
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
  if ((char)*param3 == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","L_icon_sick00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",(char *)param3,"L_icon_sick00");
  }
  local_480 = 0xcbf29ce484222645;
  if ((byte)local_120 != '\0') {
    uVar7 = local_120 & 0xff;
    local_480 = 0xcbf29ce484222645;
    pbVar8 = (byte *)((ulong)&local_120 | 1);
    do {
      local_480 = (local_480 ^ uVar7) * 0x100000001b3;
      bVar4 = *pbVar8;
      uVar7 = (ulong)bVar4;
      pbVar8 = pbVar8 + 1;
    } while (bVar4 != 0);
  }
  uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),&local_480);
  *(undefined8 *)(param_1 + 0x1c0) = uVar5;
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
  if ((char)*param3 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","color");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)param3,"color");
  }
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar7 = 0xcbf29ce484222645;
    pbVar8 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar7 = (uVar7 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x1d0) = uVar7;
  uStack_12a = 0;
  uStack_128 = 0;
  uStack_132 = 0;
  uStack_130 = 0;
  local_12c = 0;
  local_13a = 0;
  uStack_138 = 0;
  local_142 = 0;
  uStack_140 = 0;
  local_14a = 0;
  uStack_148 = 0;
  local_152 = 0;
  uStack_150 = 0;
  local_15a = 0;
  uStack_158 = 0;
  local_162 = 0;
  uStack_160 = 0;
  local_16a = 0;
  uStack_168 = 0;
  local_172 = 0;
  uStack_170 = 0;
  local_17a = 0;
  uStack_178 = 0;
  uStack_180._0_1_ = s_L_icon_sick00_01d3a4e2[8];
  uStack_180._1_1_ = s_L_icon_sick00_01d3a4e2[9];
  uStack_180._2_1_ = s_L_icon_sick00_01d3a4e2[10];
  uStack_180._3_1_ = s_L_icon_sick00_01d3a4e2[0xb];
  uStack_180._4_1_ = s_L_icon_sick00_01d3a4e2[0xc];
  uStack_180._5_1_ = s_L_icon_sick00_01d3a4e2[0xd];
  uStack_188._0_1_ = s_L_icon_sick00_01d3a4e2[0];
  uStack_188._1_1_ = s_L_icon_sick00_01d3a4e2[1];
  uStack_188._2_1_ = s_L_icon_sick00_01d3a4e2[2];
  uStack_188._3_1_ = s_L_icon_sick00_01d3a4e2[3];
  uStack_188._4_1_ = s_L_icon_sick00_01d3a4e2[4];
  uStack_188._5_1_ = s_L_icon_sick00_01d3a4e2[5];
  local_182._0_1_ = s_L_icon_sick00_01d3a4e2[6];
  local_182._1_1_ = s_L_icon_sick00_01d3a4e2[7];
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
  if ((char)*param3 == '\0') {
    snprintf((char *)&local_120,100,"%s",&uStack_188);
  }
  else {
    snprintf((char *)&local_120,100,"%s_%s",(char *)param3,(char *)&uStack_188);
  }
  local_420 = (ulong)local_420._4_4_ << 0x20;
  local_430 = 0;
  local_428 = 0;
  local_440 = 0;
  local_438 = 0;
  local_450 = 0;
  local_448 = 0;
  local_460 = 0;
  local_458 = 0;
  local_470 = 0;
  local_468 = 0;
  local_480 = 0;
  local_478 = 0;
  snprintf((char *)&local_480,100,"%s",&local_120);
  local_b8 = local_480;
  uVar7 = local_b8;
  local_98 = local_460;
  local_a0 = local_468;
  local_a8 = local_470;
  local_b0 = local_478;
  local_78 = local_440;
  local_80 = local_448;
  local_88 = local_450;
  local_90 = local_458;
  local_58 = (undefined4)local_420;
  local_60 = local_428;
  local_68 = local_430;
  local_70 = local_438;
  local_b8._0_1_ = (char)local_480;
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
  local_b8 = uVar7;
  if ((char)local_b8 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","sick");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_b8,"sick");
  }
  if ((byte)local_120 != 0) {
    pbVar8 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar9 = (uVar9 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x1d8) = uVar9;
  local_420 = 0xffffffff00000000;
  local_18d = 0;
  local_18f = 0;
  local_430 = 0;
  local_428 = 0;
  local_197 = 0;
  local_19f = 0;
  local_1a7 = 0;
  local_1af = 0;
  local_1b7 = 0;
  local_1bf = 0;
  local_1c7 = 0;
  local_1cf = 0;
  local_1d7 = 0;
  local_1df = 0;
  local_1e0 = 0;
  local_1e8[0] = s_L_icon_pokemon00_01d14c5a[8];
  local_1e8[1] = s_L_icon_pokemon00_01d14c5a[9];
  local_1e8[2] = s_L_icon_pokemon00_01d14c5a[10];
  local_1e8[3] = s_L_icon_pokemon00_01d14c5a[0xb];
  local_1e8[4] = s_L_icon_pokemon00_01d14c5a[0xc];
  local_1e8[5] = s_L_icon_pokemon00_01d14c5a[0xd];
  local_1e8[6] = s_L_icon_pokemon00_01d14c5a[0xe];
  local_1e8[7] = s_L_icon_pokemon00_01d14c5a[0xf];
  local_1f0[0] = s_L_icon_pokemon00_01d14c5a[0];
  local_1f0[1] = s_L_icon_pokemon00_01d14c5a[1];
  local_1f0[2] = s_L_icon_pokemon00_01d14c5a[2];
  local_1f0[3] = s_L_icon_pokemon00_01d14c5a[3];
  local_1f0[4] = s_L_icon_pokemon00_01d14c5a[4];
  local_1f0[5] = s_L_icon_pokemon00_01d14c5a[5];
  local_1f0[6] = s_L_icon_pokemon00_01d14c5a[6];
  local_1f0[7] = s_L_icon_pokemon00_01d14c5a[7];
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
  local_440 = 0;
  local_438 = 0;
  local_450 = 0;
  local_448 = 0;
  local_460 = 0;
  local_458 = 0;
  local_470 = 0;
  local_468 = 0;
  local_480 = 0;
  local_478 = 0;
  if ((char)*param3 == '\0') {
    snprintf((char *)&local_120,100,"%s",local_1f0);
  }
  else {
    snprintf((char *)&local_120,100,"%s_%s",(char *)param3,local_1f0);
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
  uStack_188 = (undefined6)local_b8;
  local_182 = (undefined2)(local_b8 >> 0x30);
  uStack_168 = (undefined6)local_98;
  local_162 = (undefined2)((ulong)local_98 >> 0x30);
  uStack_170 = (undefined6)local_a0;
  local_16a = (undefined2)((ulong)local_a0 >> 0x30);
  uStack_178 = (undefined6)local_a8;
  local_172 = (undefined2)((ulong)local_a8 >> 0x30);
  uStack_180 = (undefined6)local_b0;
  local_17a = (undefined2)((ulong)local_b0 >> 0x30);
  uStack_148 = (undefined6)local_78;
  local_142 = (undefined2)((ulong)local_78 >> 0x30);
  uStack_150 = (undefined6)local_80;
  local_14a = (undefined2)((ulong)local_80 >> 0x30);
  uStack_158 = (undefined6)local_88;
  local_152 = (undefined2)((ulong)local_88 >> 0x30);
  uStack_160 = (undefined6)local_90;
  local_15a = (undefined2)((ulong)local_90 >> 0x30);
  uStack_128 = local_58;
  uStack_130 = (undefined4)local_60;
  local_12c = (undefined2)((ulong)local_60 >> 0x20);
  uStack_12a = (undefined2)((ulong)local_60 >> 0x30);
  uStack_138 = (undefined6)local_68;
  uStack_132 = (undefined2)((ulong)local_68 >> 0x30);
  uStack_140 = (undefined6)local_70;
  local_13a = (undefined2)((ulong)local_70 >> 0x30);
  local_480 = local_b8;
  local_460 = local_98;
  local_468 = local_a0;
  local_470 = local_a8;
  local_478 = local_b0;
  local_440 = local_78;
  local_448 = local_80;
  local_450 = local_88;
  local_458 = local_90;
  local_428 = local_60;
  local_430 = local_68;
  local_438 = local_70;
  local_420 = CONCAT44(*(undefined4 *)(param_1 + 0x168),local_58);
  FUN_00a12040(*(undefined8 *)(param_1 + 0x170),&local_480);
  local_3c4 = 0xffffffff;
  local_3c8 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_480 = 0;
  local_2f8 = 0;
  local_3c0 = 0;
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
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_428 = 0;
  local_420 = 0;
  local_438 = 0;
  local_430 = 0;
  local_448 = 0;
  local_440 = 0;
  local_458 = 0;
  local_450 = 0;
  local_468 = 0;
  local_460 = 0;
  local_478 = 0;
  local_470 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_288 = 0;
  local_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_006cf0a0(&local_b8,&DAT_0262d2f0);
  uVar5 = FUN_00ff93b0(param_1);
  FUN_00ff8620(&local_120,uVar5,&local_b8,10);
  uVar9 = *(ulong *)(local_120 + 0x60);
  if (uVar9 != 0) {
    (**(code **)(*(long *)(uVar9 + 0x48) + 0x10))();
  }
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = 0;
  }
  if (local_480 != 0) {
    (**(code **)(*(long *)(local_480 + 0x48) + 0x18))();
  }
  local_480 = uVar9;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  FUN_00a0fae0(*(undefined8 *)(param_1 + 400),&local_480);
  if (local_210 != 0) {
    (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
    local_210 = 0;
  }
  if (local_278 != 0) {
    (**(code **)(*(long *)(local_278 + 0x48) + 0x18))();
    local_278 = 0;
  }
  if (local_280 != 0) {
    (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
    local_280 = 0;
  }
  if (local_288 != 0) {
    (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
    local_288 = 0;
  }
  if (local_480 != 0) {
    (**(code **)(*(long *)(local_480 + 0x48) + 0x18))();
  }
  return;
}


