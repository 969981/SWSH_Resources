/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f3b70; name: FUN_009f3b70
 */


void FUN_009f3b70(long param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong *param3;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  long lVar18;
  byte *pbVar19;
  long local_3d8;
  long local_3d0;
  code *local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
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
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  code *local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  ulong local_2d0;
  char acStack_2c8 [16];
  undefined7 uStack_2b8;
  undefined1 local_2b1;
  undefined7 uStack_2b0;
  undefined1 local_2a9;
  undefined7 uStack_2a8;
  undefined1 local_2a1;
  undefined7 uStack_2a0;
  undefined1 local_299;
  undefined7 uStack_298;
  undefined1 local_291;
  undefined7 uStack_290;
  undefined1 local_289;
  undefined7 uStack_288;
  undefined1 local_281;
  undefined7 uStack_280;
  undefined1 uStack_279;
  undefined4 uStack_278;
  undefined4 local_274;
  undefined4 uStack_270;
  ulong local_268;
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
  undefined8 local_210;
  undefined4 local_208;
  ulong local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined8 local_160;
  ulong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulong local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  plVar15 = *(long **)(*(long *)(param_1 + 0x5d0) + 8);
  if (plVar15 != (long *)0x0) {
    (**(code **)(plVar15[9] + 0x10))();
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_190 = 0;
    local_198 = 0;
    local_160 = 0;
    local_168 = 0;
    lVar13 = *(long *)(param_1 + 0x2b0);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    local_198 = lVar13;
    FUN_00ff86a0(&local_f0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
    lVar13 = *(long *)(local_f0 + 0x60);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    if (local_180 != 0) {
      (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    }
    local_180 = lVar13;
    if (local_f0 != 0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      local_f0 = 0;
    }
    uVar14 = 0;
    puVar17 = (undefined8 *)(param_1 + 0x5f0);
    puVar16 = &DAT_0214dec0;
    do {
      uVar6 = FUN_00884820(plVar15);
      if ((uint)uVar14 < uVar6) {
        lVar13 = (**(code **)(*plVar15 + 0x50))(plVar15,uVar14 & 0xffffffff);
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
        }
        if (local_188 != 0) {
          plVar8 = (long *)(local_188 + 0x48);
          local_188 = lVar13;
          (**(code **)(*plVar8 + 0x18))();
          lVar13 = local_188;
        }
        local_188 = lVar13;
        FUN_0146b6d0(*puVar17,&local_198,puVar16);
        lVar13 = *(long *)(param_1 + 0x2b0);
        if (lVar13 == 0) {
          FUN_0167b9b0(0,puVar16,1);
        }
        else {
          plVar8 = (long *)(lVar13 + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          FUN_0167b9b0(lVar13,puVar16,1);
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x5d8);
        uVar10 = 1;
      }
      else {
        lVar13 = *(long *)(param_1 + 0x2b0);
        if (lVar13 == 0) {
          FUN_0167b9b0(0,puVar16,0);
        }
        else {
          plVar8 = (long *)(lVar13 + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          FUN_0167b9b0(lVar13,puVar16,0);
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x5d8);
        uVar10 = 0;
      }
      local_f0 = uVar14 << 0x20;
      FUN_016b81d0(uVar9,&local_f0,uVar10);
      uVar14 = uVar14 + 1;
      puVar16 = puVar16 + 0x180;
      puVar17 = puVar17 + 4;
    } while (uVar14 != 6);
    lVar13 = *(long *)(param_1 + 0x4c8);
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    local_1c8 = 0;
    local_1d0 = 0;
    acStack_2c8[8] = s_L_pselect_temochi_00_L_01d47c24[0x10];
    acStack_2c8[9] = s_L_pselect_temochi_00_L_01d47c24[0x11];
    acStack_2c8[10] = s_L_pselect_temochi_00_L_01d47c24[0x12];
    acStack_2c8[0xb] = s_L_pselect_temochi_00_L_01d47c24[0x13];
    acStack_2c8[0xc] = s_L_pselect_temochi_00_L_01d47c24[0x14];
    acStack_2c8[0xd] = s_L_pselect_temochi_00_L_01d47c24[0x15];
    acStack_2c8[0xe] = s_L_pselect_temochi_00_L_01d47c24[0x16];
    local_1c0 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = 0;
    local_1f0 = 0;
    local_1f8 = (code *)0x0;
    local_200 = 0;
    uStack_270 = 0;
    uStack_279 = 0;
    uStack_278 = 0;
    local_274 = 0;
    local_281 = 0;
    uStack_280 = 0;
    local_289 = 0;
    uStack_288 = 0;
    local_291 = 0;
    uStack_290 = 0;
    local_299 = 0;
    uStack_298 = 0;
    local_2a1 = 0;
    uStack_2a0 = 0;
    local_2a9 = 0;
    uStack_2a8 = 0;
    local_2b1 = 0;
    uStack_2b0 = 0;
    acStack_2c8[0xf] = 0;
    uStack_2b8 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_130 = 0;
    local_138 = 0;
    local_140 = 0;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    local_2d0._0_1_ = s_L_pselect_temochi_00_L_01d47c24[0];
    local_2d0._1_1_ = s_L_pselect_temochi_00_L_01d47c24[1];
    local_2d0._2_1_ = s_L_pselect_temochi_00_L_01d47c24[2];
    local_2d0._3_1_ = s_L_pselect_temochi_00_L_01d47c24[3];
    local_2d0._4_1_ = s_L_pselect_temochi_00_L_01d47c24[4];
    local_2d0._5_1_ = s_L_pselect_temochi_00_L_01d47c24[5];
    local_2d0._6_1_ = s_L_pselect_temochi_00_L_01d47c24[6];
    local_2d0._7_1_ = s_L_pselect_temochi_00_L_01d47c24[7];
    acStack_2c8[0] = s_L_pselect_temochi_00_L_01d47c24[8];
    acStack_2c8[1] = s_L_pselect_temochi_00_L_01d47c24[9];
    acStack_2c8[2] = s_L_pselect_temochi_00_L_01d47c24[10];
    acStack_2c8[3] = s_L_pselect_temochi_00_L_01d47c24[0xb];
    acStack_2c8[4] = s_L_pselect_temochi_00_L_01d47c24[0xc];
    acStack_2c8[5] = s_L_pselect_temochi_00_L_01d47c24[0xd];
    acStack_2c8[6] = s_L_pselect_temochi_00_L_01d47c24[0xe];
    acStack_2c8[7] = s_L_pselect_temochi_00_L_01d47c24[0xf];
    snprintf((char *)&local_158,100,"%s",&local_2d0);
    local_90 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    snprintf((char *)&local_f0,100,"%s",&local_158);
    local_200 = local_f0;
    local_1e0 = local_d0;
    local_1e8 = local_d8;
    local_1f0 = local_e0;
    local_1f8 = local_e8;
    local_1c0 = local_b0;
    local_1c8 = local_b8;
    local_1d0 = local_c0;
    local_1d8 = local_c8;
    local_1a0 = local_90;
    local_1a8 = local_98;
    local_1b0 = local_a0;
    uVar14 = 0;
    local_1b8 = local_a8;
    do {
      local_208 = 0;
      local_218 = 0;
      local_210 = 0;
      local_228 = 0;
      local_220 = 0;
      local_238 = 0;
      local_230 = 0;
      local_248 = 0;
      local_240 = 0;
      local_258 = 0;
      local_250 = 0;
      local_268 = 0;
      local_260 = 0;
      snprintf((char *)&local_268,100,"pokelist_%02d",(int)uVar14);
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      if ((char)local_200 == '\0') {
        if ((char)local_268 != '\0') {
          param3 = &local_268;
          goto LAB_009f4084;
        }
        uStack_270 = 0;
        uStack_280 = 0;
        uStack_279 = 0;
        uStack_278 = 0;
        local_274 = 0;
        uStack_290 = 0;
        local_289 = 0;
        uStack_288 = 0;
        local_281 = 0;
        uStack_2a0 = 0;
        local_299 = 0;
        uStack_298 = 0;
        local_291 = 0;
        uStack_2b0 = 0;
        local_2a9 = 0;
        uStack_2a8 = 0;
        local_2a1 = 0;
        acStack_2c8[8] = '\0';
        acStack_2c8[9] = '\0';
        acStack_2c8[10] = '\0';
        acStack_2c8[0xb] = '\0';
        acStack_2c8[0xc] = '\0';
        acStack_2c8[0xd] = '\0';
        acStack_2c8[0xe] = '\0';
        acStack_2c8[0xf] = 0;
        uStack_2b8 = 0;
        local_2b1 = 0;
        local_2d0 = 0;
        acStack_2c8[0] = '\0';
        acStack_2c8[1] = '\0';
        acStack_2c8[2] = '\0';
        acStack_2c8[3] = '\0';
        acStack_2c8[4] = '\0';
        acStack_2c8[5] = '\0';
        acStack_2c8[6] = '\0';
        acStack_2c8[7] = '\0';
        uVar11 = local_268;
      }
      else {
        param3 = &local_200;
        if ((char)local_268 == '\0') {
LAB_009f4084:
          snprintf((char *)&local_158,100,"%s",param3);
        }
        else {
          snprintf((char *)&local_158,100,"%s_%s",(char *)param3,(char *)&local_268);
        }
        local_90 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        snprintf((char *)&local_f0,100,"%s",&local_158);
        local_2d0 = local_f0;
        uStack_2b0 = (undefined7)local_d0;
        local_2a9 = (undefined1)((ulong)local_d0 >> 0x38);
        uStack_2b8 = (undefined7)local_d8;
        local_2b1 = (undefined1)((ulong)local_d8 >> 0x38);
        acStack_2c8._8_7_ = SUB87(local_e0,0);
        acStack_2c8[0xf] = (char)((ulong)local_e0 >> 0x38);
        acStack_2c8._0_7_ = SUB87(local_e8,0);
        acStack_2c8[7] = (char)((ulong)local_e8 >> 0x38);
        uStack_290 = (undefined7)local_b0;
        local_289 = (undefined1)((ulong)local_b0 >> 0x38);
        uStack_298 = (undefined7)local_b8;
        local_291 = (undefined1)((ulong)local_b8 >> 0x38);
        uStack_2a0 = (undefined7)local_c0;
        local_299 = (undefined1)((ulong)local_c0 >> 0x38);
        uStack_2a8 = (undefined7)local_c8;
        local_2a1 = (undefined1)((ulong)local_c8 >> 0x38);
        uStack_270 = local_90;
        uStack_278 = (undefined4)local_98;
        local_274 = (undefined4)((ulong)local_98 >> 0x20);
        uStack_280 = (undefined7)local_a0;
        uStack_279 = (undefined1)((ulong)local_a0 >> 0x38);
        uStack_288 = (undefined7)local_a8;
        local_281 = (undefined1)((ulong)local_a8 >> 0x38);
        uVar11 = local_f0;
      }
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      if ((uVar11 & 0xff) == 0) {
        snprintf((char *)&local_158,100,"pane_%s","L_pokeIcon_00_P_pokeIcon_00");
        uVar11 = local_158;
      }
      else {
        snprintf((char *)&local_158,100,"pane_%s_%s",(char *)&local_2d0,
                 "L_pokeIcon_00_P_pokeIcon_00");
        uVar11 = local_158;
      }
      bVar2 = (byte)local_158 != '\0';
      local_158 = 0xcbf29ce484222645;
      if (bVar2) {
        uVar11 = uVar11 & 0xff;
        local_158 = 0xcbf29ce484222645;
        pbVar19 = (byte *)((ulong)&local_158 | 1);
        do {
          local_158 = (local_158 ^ uVar11) * 0x100000001b3;
          bVar1 = *pbVar19;
          uVar11 = (ulong)bVar1;
          pbVar19 = pbVar19 + 1;
        } while (bVar1 != 0);
      }
      uVar9 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_158);
      lVar18 = lVar13 + uVar14 * 0x3e0;
      FUN_0168b110(lVar18,*(undefined8 *)(param_1 + 8),uVar9,0);
      plVar8 = *(long **)(*(long *)(param_1 + 0x5d0) + 8);
      uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,uVar14 & 0xffffffff);
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_320 = 0;
      uStack_318 = 0;
      local_330 = 0;
      uStack_328 = 0;
      local_340 = 0;
      uStack_338 = 0;
      local_350 = 0;
      local_348 = (code *)0x0;
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      FUN_0168c890(lVar18,uVar9,0,0,&local_f0);
      pcVar3 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        (*pcVar3)(&local_d0);
      }
      pcVar3 = local_348;
      if (local_348 != (code *)0x0) {
        local_340 = 0;
        uStack_338 = 0;
        local_350 = 0;
        local_348 = (code *)0x0;
        (*pcVar3)(&local_330);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != 6);
    lVar13 = *(long *)(param_1 + 0x4e8);
    uVar14 = 0;
    pbVar19 = (byte *)((ulong)&local_158 | 1);
    do {
      while( true ) {
        local_90 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        snprintf((char *)&local_f0,100,"L_pselect_entry_%02d",(uint)uVar14);
        uVar6 = FUN_00884820(plVar15);
        if (uVar6 <= (uint)uVar14) break;
        (**(code **)(*plVar15 + 0x50))(plVar15,uVar14 & 0xffffffff);
        sVar4 = FUN_008787f0();
        if (sVar4 == 0) break;
        local_f8 = 0;
        local_100 = 0;
        local_108 = 0;
        local_110 = 0;
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0;
        local_140 = 0;
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        if ((char)local_f0 == '\0') {
          snprintf((char *)&local_158,100,"pane_%s","P_pselect_entry_icn_00");
        }
        else {
          snprintf((char *)&local_158,100,"pane_%s_%s",(char *)&local_f0,"P_pselect_entry_icn_00");
        }
        local_200 = 0xcbf29ce484222645;
        if ((byte)local_158 != '\0') {
          uVar11 = local_158 & 0xff;
          local_200 = 0xcbf29ce484222645;
          pbVar12 = pbVar19;
          do {
            local_200 = (local_200 ^ uVar11) * 0x100000001b3;
            bVar1 = *pbVar12;
            uVar11 = (ulong)bVar1;
            pbVar12 = pbVar12 + 1;
          } while (bVar1 != 0);
        }
        uVar9 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_200);
        lVar18 = lVar13 + uVar14 * 0x3d0;
        FUN_0168b110(lVar18,*(undefined8 *)(param_1 + 8),uVar9,0);
        (**(code **)(*plVar15 + 0x50))(plVar15,uVar14 & 0xffffffff);
        uVar7 = FUN_008787f0();
        local_360 = 0;
        uStack_358 = 0;
        local_370 = 0;
        uStack_368 = 0;
        local_380 = 0;
        uStack_378 = 0;
        local_390 = 0;
        uStack_388 = 0;
        local_3a0 = 0;
        uStack_398 = 0;
        local_3b0 = 0;
        uStack_3a8 = 0;
        local_3c0 = 0;
        uStack_3b8 = 0;
        local_3d0 = 0;
        local_3c8 = (code *)0x0;
        FUN_0168c190(lVar18,uVar7,0,&local_3d0);
        pcVar3 = local_3c8;
        if (local_3c8 != (code *)0x0) {
          local_3c0 = 0;
          uStack_3b8 = 0;
          local_3d0 = 0;
          local_3c8 = (code *)0x0;
          (*pcVar3)(&local_3b0);
        }
        local_f8 = 0;
        local_100 = 0;
        local_108 = 0;
        local_110 = 0;
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0;
        local_140 = 0;
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        if ((char)local_f0 == '\0') {
          snprintf((char *)&local_158,100,"pane_%s","T_pselect_entry_01");
          bVar1 = (byte)local_158;
        }
        else {
          snprintf((char *)&local_158,100,"pane_%s_%s",(char *)&local_f0,"T_pselect_entry_01");
          bVar1 = (byte)local_158;
        }
        local_158 = 0xcbf29ce484222645;
        if (bVar1 != 0) {
          local_158 = 0xcbf29ce484222645;
          pbVar12 = pbVar19;
          do {
            local_158 = (local_158 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar1 != 0);
        }
        FUN_00ff86a0(&local_268,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
        local_3d8 = *(long *)(local_268 + 0x60);
        if (local_3d8 != 0) {
          (**(code **)(*(long *)(local_3d8 + 0x48) + 0x10))();
        }
        local_2d0 = 0xa8980ae4a7c8d903;
        (**(code **)(*plVar15 + 0x50))(plVar15,uVar14 & 0xffffffff);
        uVar5 = FUN_008787f0();
        FUN_008cf360(param_1 + 0x100,&local_158,&local_3d8,&local_2d0,0,uVar5,1);
        if (local_3d8 != 0) {
          (**(code **)(*(long *)(local_3d8 + 0x48) + 0x18))();
          local_3d8 = 0;
        }
        if (local_268 != 0) {
          (**(code **)(*(long *)(local_268 + 0x48) + 0x18))();
          local_268 = 0;
        }
LAB_009f46bc:
        uVar14 = uVar14 + 1;
        if (uVar14 == 6) goto LAB_009f46c8;
      }
      lVar18 = *(long *)(param_1 + 0x2b0);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
      }
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      if ((char)local_f0 == '\0') {
        snprintf((char *)&local_158,100,"pane_%s","P_pselect_entry_item");
        uVar11 = local_158;
      }
      else {
        snprintf((char *)&local_158,100,"pane_%s_%s",(char *)&local_f0,"P_pselect_entry_item");
        uVar11 = local_158;
      }
      bVar2 = (byte)local_158 != '\0';
      local_158 = 0xcbf29ce484222645;
      if (bVar2) {
        uVar11 = uVar11 & 0xff;
        local_158 = 0xcbf29ce484222645;
        pbVar12 = pbVar19;
        do {
          local_158 = (local_158 ^ uVar11) * 0x100000001b3;
          bVar1 = *pbVar12;
          uVar11 = (ulong)bVar1;
          pbVar12 = pbVar12 + 1;
        } while (bVar1 != 0);
      }
      FUN_0167b9b0(lVar18,&local_158,0);
      if (lVar18 == 0) goto LAB_009f46bc;
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
      uVar14 = uVar14 + 1;
    } while (uVar14 != 6);
LAB_009f46c8:
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
      local_178 = 0;
    }
    if (local_180 != 0) {
      (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
      local_180 = 0;
    }
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
      local_188 = 0;
    }
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
    if (local_198 != 0) {
      (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
      local_198 = 0;
    }
    (**(code **)(plVar15[9] + 0x18))();
  }
  return;
}


