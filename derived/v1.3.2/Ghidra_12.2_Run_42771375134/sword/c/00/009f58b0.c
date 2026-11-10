/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f58b0; name: FUN_009f58b0
 */


/* WARNING: Removing unreachable block (ram,0x009f62b4) */

void FUN_009f58b0(long param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  char *param3;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int param3_00;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong local_290;
  code *local_288;
  undefined8 local_280;
  undefined8 local_278;
  long local_270;
  ulong local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  char local_1c0 [8];
  char acStack_1b8 [8];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulong local_f0;
  code *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  puVar14 = PTR_DAT_02710860;
  uVar7 = 0;
  puVar15 = (undefined8 *)(param_1 + 0x6d0);
  do {
    plVar9 = *(long **)(param_1 + 8);
    uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,0x218,8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar14);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    FUN_0146b4f0(uVar4,param_1);
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    lVar5 = puVar15[-3];
    puVar15[-3] = uVar4;
    if (lVar5 == 0) {
      puVar12 = puVar15 + -2;
      puVar22 = puVar15 + -1;
      puVar20 = puVar15;
    }
    else {
      FUN_008c9ec0(lVar5);
      lVar10 = param_1 + uVar7 * 0x20;
      puVar12 = (undefined8 *)(lVar10 + 0x6c0);
      puVar22 = (undefined8 *)(lVar10 + 0x6c8);
      (**(code **)(*(long *)puVar15[-2] + 0x18))((long *)puVar15[-2],lVar5,puVar15[-1],*puVar15);
      puVar20 = (undefined8 *)(lVar10 + 0x6d0);
    }
    *puVar12 = plVar9;
    *puVar22 = 0x218;
    uVar7 = uVar7 + 1;
    *puVar20 = 8;
    puVar15 = puVar15 + 4;
  } while (uVar7 < 6);
  local_160 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0[0] = s_L_enemy_team_00_01d06dfc[0];
  local_1c0[1] = s_L_enemy_team_00_01d06dfc[1];
  local_1c0[2] = s_L_enemy_team_00_01d06dfc[2];
  local_1c0[3] = s_L_enemy_team_00_01d06dfc[3];
  local_1c0[4] = s_L_enemy_team_00_01d06dfc[4];
  local_1c0[5] = s_L_enemy_team_00_01d06dfc[5];
  local_1c0[6] = s_L_enemy_team_00_01d06dfc[6];
  local_1c0[7] = s_L_enemy_team_00_01d06dfc[7];
  acStack_1b8[0] = s_L_enemy_team_00_01d06dfc[8];
  acStack_1b8[1] = s_L_enemy_team_00_01d06dfc[9];
  acStack_1b8[2] = s_L_enemy_team_00_01d06dfc[10];
  acStack_1b8[3] = s_L_enemy_team_00_01d06dfc[0xb];
  acStack_1b8[4] = s_L_enemy_team_00_01d06dfc[0xc];
  acStack_1b8[5] = s_L_enemy_team_00_01d06dfc[0xd];
  acStack_1b8[6] = s_L_enemy_team_00_01d06dfc[0xe];
  acStack_1b8[7] = s_L_enemy_team_00_01d06dfc[0xf];
  lVar5 = *(long *)(param_1 + 0x5d0);
  plVar9 = *(long **)(lVar5 + 0x20);
  if (plVar9 != (long *)0x0) {
    (**(code **)(plVar9[9] + 0x10))();
    lVar5 = *(long *)(param_1 + 0x5d0);
  }
  lVar5 = *(long *)(lVar5 + 0x28);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(param_1 + 0x2b0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  snprintf((char *)&local_158,100,"pane_%s",local_1c0);
  uVar7 = local_158 & 0xff;
  local_f0 = 0xcbf29ce484222645;
  if ((byte)local_158 != '\0') {
    local_f0 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_158 | 1);
    do {
      local_f0 = (local_f0 ^ uVar7) * 0x100000001b3;
      bVar1 = *pbVar6;
      uVar7 = (ulong)bVar1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  FUN_0167b9b0(lVar10,&local_f0,1);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  lVar10 = param_1 + 0x100;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (local_1c0[0] == '\0') {
    snprintf((char *)&local_158,100,"anime_%s","team_bg_color");
  }
  else {
    snprintf((char *)&local_158,100,"anime_%s_%s",local_1c0,"team_bg_color");
  }
  uVar7 = local_158 & 0xff;
  local_f0 = 0xcbf29ce484222645;
  if ((byte)local_158 != '\0') {
    local_f0 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_158 | 1);
    do {
      local_f0 = (local_f0 ^ uVar7) * 0x100000001b3;
      bVar1 = *pbVar6;
      uVar7 = (ulong)bVar1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd510(0x3f800000,lVar10,&local_f0);
  lVar11 = *(long *)(param_1 + 0x2b0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (local_1c0[0] == '\0') {
    snprintf((char *)&local_158,100,"pane_%s","N_btlteam_standby");
  }
  else {
    snprintf((char *)&local_158,100,"pane_%s_%s",local_1c0,"N_btlteam_standby");
  }
  uVar7 = local_158 & 0xff;
  local_f0 = 0xcbf29ce484222645;
  if ((byte)local_158 != '\0') {
    local_f0 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_158 | 1);
    do {
      local_f0 = (local_f0 ^ uVar7) * 0x100000001b3;
      bVar1 = *pbVar6;
      uVar7 = (ulong)bVar1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  FUN_0167b9b0(lVar11,&local_f0,1);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar11 = *(long *)(param_1 + 0x2b0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (local_1c0[0] == '\0') {
    snprintf((char *)&local_158,100,"pane_%s","N_team_standby_icon");
  }
  else {
    snprintf((char *)&local_158,100,"pane_%s_%s",local_1c0,"N_team_standby_icon");
  }
  uVar7 = local_158 & 0xff;
  local_f0 = 0xcbf29ce484222645;
  if ((byte)local_158 != '\0') {
    local_f0 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_158 | 1);
    do {
      local_f0 = (local_f0 ^ uVar7) * 0x100000001b3;
      bVar1 = *pbVar6;
      uVar7 = (ulong)bVar1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  FUN_0167b9b0(lVar11,&local_f0,1);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar11 = *(long *)(param_1 + 0x2b0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (local_1c0[0] == '\0') {
    snprintf((char *)&local_158,100,"pane_%s","P_btlteam_bg_07");
  }
  else {
    snprintf((char *)&local_158,100,"pane_%s_%s",local_1c0,"P_btlteam_bg_07");
  }
  uVar7 = local_158 & 0xff;
  local_f0 = 0xcbf29ce484222645;
  if ((byte)local_158 != '\0') {
    local_f0 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_158 | 1);
    do {
      local_f0 = (local_f0 ^ uVar7) * 0x100000001b3;
      bVar1 = *pbVar6;
      uVar7 = (ulong)bVar1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  FUN_0167b9b0(lVar11,&local_f0,1);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar11 = *(long *)(param_1 + 0x2b0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (local_1c0[0] == '\0') {
    snprintf((char *)&local_158,100,"pane_%s","N_team_standby_icon");
  }
  else {
    snprintf((char *)&local_158,100,"pane_%s_%s",local_1c0,"N_team_standby_icon");
  }
  uVar7 = local_158 & 0xff;
  local_f0 = 0xcbf29ce484222645;
  if ((byte)local_158 != '\0') {
    local_f0 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_158 | 1);
    do {
      local_f0 = (local_f0 ^ uVar7) * 0x100000001b3;
      bVar1 = *pbVar6;
      uVar7 = (ulong)bVar1;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
  }
  FUN_0167b9b0(lVar11,&local_f0,0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  param3_00 = 0;
  do {
    local_1c8 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_228 = 0;
    uStack_220 = 0;
    snprintf((char *)&local_228,100,"L_btlteam_pokelist_%02d",param3_00);
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    if (local_1c0[0] == '\0') {
      if ((char)local_228 != '\0') {
        param3 = (char *)&local_228;
        goto LAB_009f6058;
      }
      local_230 = 0;
      local_240 = 0;
      local_238 = 0;
      local_250 = 0;
      local_248 = 0;
      local_260 = 0;
      local_258 = 0;
      local_270 = 0;
      local_268 = 0;
      local_280 = 0;
      local_278 = 0;
      local_290 = 0;
      local_288 = (code *)0x0;
      lVar11 = *(long *)(param_1 + 0x2b0);
    }
    else {
      param3 = local_1c0;
      if ((char)local_228 == '\0') {
LAB_009f6058:
        snprintf((char *)&local_158,100,"%s",param3);
      }
      else {
        snprintf((char *)&local_158,100,"%s_%s",param3,(char *)&local_228);
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
      lVar11 = *(long *)(param_1 + 0x2b0);
      local_230 = local_90;
      local_240 = local_a0;
      local_238 = local_98;
      local_250 = local_b0;
      local_248 = local_a8;
      local_260 = local_c0;
      local_258 = local_b8;
      local_270 = local_d0;
      local_268 = local_c8;
      local_280 = local_e0;
      local_278 = local_d8;
      local_290 = local_f0;
      local_288 = local_e8;
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    if ((char)local_290 == '\0') {
      snprintf((char *)&local_158,100,"pane_%s","P_team_pokelist_icon_03");
    }
    else {
      snprintf((char *)&local_158,100,"pane_%s_%s",(char *)&local_290,"P_team_pokelist_icon_03");
    }
    uVar7 = local_158 & 0xff;
    local_f0 = 0xcbf29ce484222645;
    if ((byte)local_158 != '\0') {
      local_f0 = 0xcbf29ce484222645;
      pbVar6 = (byte *)((ulong)&local_158 | 1);
      do {
        local_f0 = (local_f0 ^ uVar7) * 0x100000001b3;
        bVar1 = *pbVar6;
        uVar7 = (ulong)bVar1;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
    }
    FUN_0167b9b0(lVar11,&local_f0,0);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    param3_00 = param3_00 + 1;
  } while (param3_00 != 6);
  uVar7 = 0;
  puVar14 = &DAT_0214e7c0;
  puVar18 = &DAT_0214e7f0;
  puVar21 = &DAT_0214e820;
  lVar11 = *(long *)(param_1 + 0x4c8) + 0x1740;
  do {
    uVar4 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),puVar14);
    FUN_0168b110(lVar11,*(undefined8 *)(param_1 + 8),uVar4,0);
    uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar7 & 0xffffffff);
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    FUN_0168c890(lVar11,uVar4,0,0,&local_f0);
    pcVar2 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar2)(&local_d0);
    }
    lVar8 = *(long *)(param_1 + 0x2b0);
    if (lVar8 == 0) {
      FUN_0167b9b0(0,puVar18,0);
      lVar8 = *(long *)(param_1 + 0x2b0);
      if (lVar8 != 0) goto LAB_009f630c;
LAB_009f635c:
      FUN_0167b9b0(0,puVar21,0);
    }
    else {
      plVar23 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar23 + 0x10))(plVar23);
      FUN_0167b9b0(lVar8,puVar18,0);
      (**(code **)(*plVar23 + 0x18))(plVar23);
      lVar8 = *(long *)(param_1 + 0x2b0);
      if (lVar8 == 0) goto LAB_009f635c;
LAB_009f630c:
      plVar23 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar23 + 0x10))(plVar23);
      FUN_0167b9b0(lVar8,puVar21,0);
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    uVar7 = uVar7 + 1;
    puVar14 = puVar14 + 8;
    puVar18 = puVar18 + 8;
    puVar21 = puVar21 + 8;
    lVar11 = lVar11 + 0x3e0;
  } while (uVar7 != 6);
  local_c8 = local_c8 & 0xffffffffffffff00;
  local_d8 = 0;
  local_d0 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_e0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uVar7 = *(ulong *)(param_1 + 0x2b0);
  if ((uVar7 != 0) && ((**(code **)(*(long *)(uVar7 + 0x48) + 0x10))(), local_f0 != 0)) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
  }
  local_f0 = uVar7;
  FUN_00ff86a0(&local_158,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar11 = *(long *)(local_158 + 0x60);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
  }
  local_d8 = lVar11;
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    local_158 = 0;
  }
  uVar7 = 0;
  puVar15 = (undefined8 *)(param_1 + 0x6b8);
  puVar14 = &DAT_0214e850;
  do {
    uVar3 = FUN_00884820(plVar9);
    if ((uint)uVar7 < uVar3) {
      lVar11 = (**(code **)(*plVar9 + 0x50))(plVar9,uVar7 & 0xffffffff);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (local_e0 != 0) {
        plVar23 = (long *)(local_e0 + 0x48);
        local_e0 = lVar11;
        (**(code **)(*plVar23 + 0x18))();
        lVar11 = local_e0;
      }
      local_e0 = lVar11;
      FUN_0146b6d0(*puVar15,&local_f0,puVar14);
      lVar11 = *(long *)(param_1 + 0x2b0);
      if (lVar11 == 0) {
        uVar4 = 1;
        goto LAB_009f6538;
      }
      plVar23 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar23 + 0x10))(plVar23);
      uVar4 = 1;
LAB_009f6504:
      FUN_0167b9b0(lVar11,puVar14,uVar4);
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    else {
      lVar11 = *(long *)(param_1 + 0x2b0);
      if (lVar11 != 0) {
        plVar23 = (long *)(lVar11 + 0x48);
        (**(code **)(*plVar23 + 0x10))(plVar23);
        uVar4 = 0;
        goto LAB_009f6504;
      }
      uVar4 = 0;
LAB_009f6538:
      FUN_0167b9b0(0,puVar14,uVar4);
    }
    uVar7 = uVar7 + 1;
    puVar14 = puVar14 + 0x180;
    puVar15 = puVar15 + 4;
    if (uVar7 == 6) {
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        local_d0 = 0;
      }
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
        local_d8 = 0;
      }
      if (local_e0 != 0) {
        (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
        local_e0 = 0;
      }
      if (local_e8 != (code *)0x0) {
        (**(code **)(*(long *)((long)local_e8 + 0x48) + 0x18))();
        local_e8 = (code *)0x0;
      }
      if (local_f0 != 0) {
        (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
        local_f0 = 0;
      }
      lVar11 = *(long *)(param_1 + 0x2b0);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(lVar11 + 0x2e0);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      FUN_014c9030(lVar8,0,lVar5);
      local_f0 = 0xf2140bff1b7ad54c;
      FUN_00ff86a0(&local_158,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
      lVar11 = *(long *)(local_158 + 0x60);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (local_158 != 0) {
        (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
        local_158 = 0;
      }
      lVar16 = *(long *)(param_1 + 0x2b0);
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar13 = *(long *)(lVar16 + 0x2e8);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      lVar16 = *(long *)(param_1 + 0x2b0);
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar17 = *(long *)(lVar16 + 0x2e0);
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      FUN_0077eb10(lVar11,&local_f0,lVar13);
      lVar16 = *(long *)(param_1 + 0x2b0);
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar19 = *(long *)(lVar16 + 0x2f0);
      if (lVar19 == 0) {
        FUN_014c62d0(lVar17,0,lVar13);
      }
      else {
        plVar23 = (long *)(lVar19 + 0x48);
        (**(code **)(*plVar23 + 0x10))(plVar23);
        FUN_014c62d0(lVar17,lVar19,lVar13);
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
      }
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      local_f8 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      if (local_1c0[0] == '\0') {
        snprintf((char *)&local_158,100,"pane_%s","T_btlteam_00");
      }
      else {
        snprintf((char *)&local_158,100,"pane_%s_%s",local_1c0,"T_btlteam_00");
      }
      local_f0 = 0xcbf29ce484222645;
      if ((byte)local_158 != 0) {
        pbVar6 = (byte *)((ulong)&local_158 | 1);
        bVar1 = (byte)local_158;
        do {
          local_f0 = (local_f0 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
      }
      lVar11 = *(long *)(param_1 + 0x2b0);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar16 = *(long *)(lVar11 + 0x2f0);
      if (lVar16 == 0) {
        uVar4 = FUN_0077d470(0);
        FUN_00ffd700(lVar10,&local_f0,uVar4,10);
      }
      else {
        plVar23 = (long *)(lVar16 + 0x48);
        (**(code **)(*plVar23 + 0x10))(plVar23);
        uVar4 = FUN_0077d470(lVar16);
        FUN_00ffd700(lVar10,&local_f0,uVar4,10);
        (**(code **)(*plVar23 + 0x18))(plVar23);
      }
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      if (plVar9 != (long *)0x0) {
        (**(code **)(plVar9[9] + 0x18))(plVar9 + 9);
      }
      return;
    }
  } while( true );
}


