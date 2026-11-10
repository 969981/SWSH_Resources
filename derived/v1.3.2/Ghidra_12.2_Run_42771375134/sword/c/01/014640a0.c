/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014640a0; name: FUN_014640a0
 */


/* WARNING: Removing unreachable block (ram,0x01464624) */

void FUN_014640a0(long param_1,long param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  undefined6 uVar3;
  undefined2 uVar4;
  undefined6 uVar5;
  undefined6 uVar6;
  code *pcVar7;
  ulong *param3;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  char acStack_360 [6];
  char local_35a [2];
  char acStack_358 [6];
  undefined8 local_352;
  undefined8 uStack_34a;
  undefined8 local_342;
  undefined8 uStack_33a;
  undefined8 local_332;
  undefined8 uStack_32a;
  undefined8 local_322;
  undefined8 uStack_31a;
  undefined8 local_312;
  undefined6 uStack_30a;
  undefined2 local_304;
  undefined6 uStack_302;
  ulong local_2f8;
  undefined8 uStack_2f0;
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
  undefined4 local_298;
  ulong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  ulong local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
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
  
  uVar12 = 0xcbf29ce484222645;
  FUN_01463860();
  uVar5 = s_L_pokeicon_00_01d33c94._8_6_;
  uVar3._0_1_ = s_L_pokeicon_00_01d33c94[0];
  uVar3._1_1_ = s_L_pokeicon_00_01d33c94[1];
  uVar3._2_1_ = s_L_pokeicon_00_01d33c94[2];
  uVar3._3_1_ = s_L_pokeicon_00_01d33c94[3];
  uVar3._4_1_ = s_L_pokeicon_00_01d33c94[4];
  uVar3._5_1_ = s_L_pokeicon_00_01d33c94[5];
  uVar4._0_1_ = s_L_pokeicon_00_01d33c94[6];
  uVar4._1_1_ = s_L_pokeicon_00_01d33c94[7];
  lVar10 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  do {
    local_298 = 0;
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
    local_2f8 = 0;
    uStack_2f0 = 0;
    snprintf((char *)&local_2f8,100,"L_icon_%02d",(int)lVar10);
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
    if ((char)local_1c0 == '\0') {
      if ((char)local_2f8 != '\0') {
        param3 = &local_2f8;
        goto LAB_014642f4;
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
      local_288 = 0;
      uVar8 = local_2f8;
    }
    else {
      param3 = &local_1c0;
      if ((char)local_2f8 == '\0') {
LAB_014642f4:
        snprintf((char *)&local_158,100,"%s",param3);
      }
      else {
        snprintf((char *)&local_158,100,"%s_%s",(char *)param3,(char *)&local_2f8);
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
      local_290 = local_f0;
      local_270 = local_d0;
      local_278 = local_d8;
      local_280 = local_e0;
      local_288 = local_e8;
      local_250 = local_b0;
      local_258 = local_b8;
      local_260 = local_c0;
      local_268 = local_c8;
      local_230 = local_90;
      local_238 = local_98;
      local_240 = local_a0;
      local_248 = local_a8;
      uVar8 = local_f0;
    }
    uVar6 = s_L_pokeicon_00_01d33c94._8_6_;
    uStack_302 = 0;
    local_312 = 0;
    uStack_30a = 0;
    local_304 = 0;
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
    local_322 = 0;
    uStack_31a = 0;
    local_332 = 0;
    uStack_32a = 0;
    local_342 = 0;
    uStack_33a = 0;
    local_352 = 0;
    uStack_34a = 0;
    s_L_pokeicon_00_01d33c94[8] = (char)uVar5;
    s_L_pokeicon_00_01d33c94[9] = SUB61(uVar5,1);
    s_L_pokeicon_00_01d33c94[10] = SUB61(uVar5,2);
    s_L_pokeicon_00_01d33c94[0xb] = SUB61(uVar5,3);
    s_L_pokeicon_00_01d33c94[0xc] = SUB61(uVar5,4);
    s_L_pokeicon_00_01d33c94[0xd] = SUB61(uVar5,5);
    acStack_358[0] = s_L_pokeicon_00_01d33c94[8];
    acStack_358[1] = s_L_pokeicon_00_01d33c94[9];
    acStack_358[2] = s_L_pokeicon_00_01d33c94[10];
    acStack_358[3] = s_L_pokeicon_00_01d33c94[0xb];
    acStack_358[4] = s_L_pokeicon_00_01d33c94[0xc];
    acStack_358[5] = s_L_pokeicon_00_01d33c94[0xd];
    s_L_pokeicon_00_01d33c94._8_6_ = uVar6;
    acStack_360 = (char  [6])uVar3;
    local_35a = (char  [2])uVar4;
    if ((uVar8 & 0xff) == 0) {
      snprintf((char *)&local_158,100,"%s",acStack_360);
    }
    else {
      snprintf((char *)&local_158,100,"%s_%s",(char *)&local_290,acStack_360);
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
    local_228 = local_f0;
    local_208 = local_d0;
    local_210 = local_d8;
    local_218 = local_e0;
    local_220 = local_e8;
    local_1e8 = local_b0;
    local_1f0 = local_b8;
    local_1f8 = local_c0;
    local_200 = local_c8;
    local_1c8 = local_90;
    local_1d0 = local_98;
    local_1d8 = local_a0;
    local_1e0 = local_a8;
    if (lVar10 < param_3) {
      lVar13 = *(long *)(param_2 + lVar10 * 8);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar11 = *(long *)(param_1 + 0x2b0);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      uVar8 = 0xcbf29ce484222645;
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
      if ((char)local_228 != '\0') {
        snprintf((char *)&local_158,100,"pane_%s",(char *)&local_228);
        uVar8 = 0xcbf29ce484222645;
        if ((byte)local_158 != 0) {
          uVar8 = 0xcbf29ce484222645;
          pbVar9 = (byte *)((ulong)&local_158 | 1);
          bVar2 = (byte)local_158;
          do {
            uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar2 != 0);
        }
      }
      local_f0 = uVar8;
      FUN_0167b9b0(lVar11,&local_f0,1);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      FUN_0168c890(*(long *)(param_1 + 0x4c8) + lVar10 * 0x3e0,lVar13,0,0,&local_f0);
      pcVar7 = local_e8;
      bVar1 = local_e8 != (code *)0x0;
      local_e8 = (code *)0x0;
      if (bVar1) {
        local_e0 = 0;
        local_d8 = 0;
        local_f0 = 0;
        local_e8 = (code *)0x0;
        (*pcVar7)(&local_d0);
      }
    }
    else {
      lVar13 = *(long *)(param_1 + 0x2b0);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      uVar8 = 0xcbf29ce484222645;
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
      if ((char)local_228 != '\0') {
        snprintf((char *)&local_158,100,"pane_%s",(char *)&local_228);
        uVar8 = 0xcbf29ce484222645;
        if ((byte)local_158 != 0) {
          uVar8 = 0xcbf29ce484222645;
          pbVar9 = (byte *)((ulong)&local_158 | 1);
          bVar2 = (byte)local_158;
          do {
            uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar2 != 0);
        }
      }
      local_f0 = uVar8;
      FUN_0167b9b0(lVar13,&local_f0,0);
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    lVar10 = lVar10 + 1;
    if (lVar10 == 0x1e) {
      if (param_3 < 2) {
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
        snprintf((char *)&local_158,100,"pane_%s","T_title_00");
        if ((byte)local_158 != 0) {
          pbVar9 = (byte *)((ulong)&local_158 | 1);
          do {
            uVar12 = (uVar12 ^ (byte)local_158) * 0x100000001b3;
            local_158._0_1_ = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while ((byte)local_158 != 0);
        }
        local_158 = 0xc140e7cb6966b763;
        local_f0 = uVar12;
      }
      else {
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
        snprintf((char *)&local_158,100,"pane_%s","T_title_00");
        if ((byte)local_158 != 0) {
          pbVar9 = (byte *)((ulong)&local_158 | 1);
          do {
            uVar12 = (uVar12 ^ (byte)local_158) * 0x100000001b3;
            local_158._0_1_ = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while ((byte)local_158 != 0);
        }
        local_158 = 0x633acbd76464d365;
        local_f0 = uVar12;
      }
      FUN_014618d0(param_1,&local_f0,&local_158,0);
      return;
    }
  } while( true );
}


