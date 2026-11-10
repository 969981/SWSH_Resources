/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109e000; name: FUN_0109e000
 */


void FUN_0109e000(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  char *param3;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined6 uStack_2d0;
  undefined2 local_2ca;
  char acStack_2c8 [6];
  undefined8 local_2c2;
  undefined8 local_2ba;
  undefined8 local_2b2;
  undefined8 local_2aa;
  undefined8 local_2a2;
  undefined8 local_29a;
  undefined8 local_292;
  undefined8 local_28a;
  undefined8 local_282;
  undefined6 uStack_27a;
  undefined2 local_274;
  undefined6 uStack_272;
  ulong local_268;
  code *local_260;
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
  undefined8 local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  
  lVar11 = *(long *)(param_1 + 0x138);
  local_178 = *(undefined8 *)(lVar11 + 0x678);
  uStack_170 = *(undefined8 *)(lVar11 + 0x680);
  local_168 = *(undefined8 *)(lVar11 + 0x688);
  uStack_160 = *(undefined8 *)(lVar11 + 0x690);
  uVar13 = *(undefined8 *)(lVar11 + 0x5e0);
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  FUN_0168c890(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x128),0,0,&local_f0);
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar7)(&local_d0);
  }
  pcVar7 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    (*pcVar7)(&local_1e0);
  }
  uVar6 = FUN_0087d610(*(undefined8 *)(param_1 + 0x128),2);
  if ((uVar6 & 1) != 0) {
    lVar11 = *(long *)(lVar11 + 0x2b0);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    local_f8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    if (*(char *)(param_1 + 0x60) == '\0') {
      snprintf((char *)&local_158,100,"pane_%s","N_egg");
    }
    else {
      snprintf((char *)&local_158,100,"pane_%s_%s",(char *)(param_1 + 0x60),"N_egg");
    }
    local_f0 = 0xcbf29ce484222645;
    if ((byte)local_158 != 0) {
      pbVar10 = (byte *)((ulong)&local_158 | 1);
      bVar1 = (byte)local_158;
      do {
        local_f0 = (local_f0 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 0);
    }
    FUN_0167b9b0(lVar11,&local_f0,0);
    if (lVar11 == 0) {
      return;
    }
    plVar12 = (long *)(lVar11 + 0x48);
    pcVar7 = *(code **)(*plVar12 + 0x18);
    goto LAB_0109e764;
  }
  uVar2 = FUN_0087a5f0(*(undefined8 *)(param_1 + 0x128));
  FUN_0109e790(param_1,uVar2);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x130),&uStack_170,uVar13);
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  param3 = (char *)(param_1 + 0x60);
  if (*param3 == '\0') {
    snprintf((char *)&local_158,100,"pane_%s","T_pokeName_00");
  }
  else {
    snprintf((char *)&local_158,100,"pane_%s_%s",param3,"T_pokeName_00");
  }
  uVar6 = local_158 & 0xff;
  uVar14 = 0xcbf29ce484222645;
  local_f0 = 0xcbf29ce484222645;
  if ((byte)local_158 != '\0') {
    local_f0 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_158 | 1);
    do {
      local_f0 = (local_f0 ^ uVar6) * 0x100000001b3;
      bVar1 = *pbVar10;
      uVar6 = (ulong)bVar1;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
  }
  FUN_00a10e20(lVar11 + 0x100,&local_f0,uVar13,0,*(undefined8 *)(param_1 + 0x128));
  local_f8 = 0;
  uStack_272 = 0;
  uStack_27a = 0;
  local_274 = 0;
  local_282 = 0;
  local_28a = 0;
  local_292 = 0;
  local_29a = 0;
  local_2a2 = 0;
  local_2aa = 0;
  local_2b2 = 0;
  local_2ba = 0;
  local_2c2 = 0;
  acStack_2c8[0] = s_L_seibetsu_00_01d449c9[8];
  acStack_2c8[1] = s_L_seibetsu_00_01d449c9[9];
  acStack_2c8[2] = s_L_seibetsu_00_01d449c9[10];
  acStack_2c8[3] = s_L_seibetsu_00_01d449c9[0xb];
  acStack_2c8[4] = s_L_seibetsu_00_01d449c9[0xc];
  acStack_2c8[5] = s_L_seibetsu_00_01d449c9[0xd];
  uStack_2d0._0_1_ = s_L_seibetsu_00_01d449c9[0];
  uStack_2d0._1_1_ = s_L_seibetsu_00_01d449c9[1];
  uStack_2d0._2_1_ = s_L_seibetsu_00_01d449c9[2];
  uStack_2d0._3_1_ = s_L_seibetsu_00_01d449c9[3];
  uStack_2d0._4_1_ = s_L_seibetsu_00_01d449c9[4];
  uStack_2d0._5_1_ = s_L_seibetsu_00_01d449c9[5];
  local_2ca._0_1_ = s_L_seibetsu_00_01d449c9[6];
  local_2ca._1_1_ = s_L_seibetsu_00_01d449c9[7];
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (*(char *)(param_1 + 0x60) == '\0') {
    snprintf((char *)&local_158,100,"%s",&uStack_2d0);
  }
  else {
    snprintf((char *)&local_158,100,"%s_%s",param3,(char *)&uStack_2d0);
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
  local_268 = local_f0;
  uVar6 = local_268;
  local_108 = 0;
  uStack_100 = 0;
  local_248 = local_d0;
  local_250 = local_d8;
  local_118 = 0;
  uStack_110 = 0;
  local_258 = local_e0;
  local_260 = local_e8;
  local_128 = 0;
  uStack_120 = 0;
  local_228 = local_b0;
  local_230 = local_b8;
  local_138 = 0;
  uStack_130 = 0;
  local_238 = local_c0;
  local_240 = local_c8;
  local_148 = 0;
  uStack_140 = 0;
  local_208 = local_90;
  local_210 = local_98;
  local_158 = 0;
  uStack_150 = 0;
  local_218 = local_a0;
  local_220 = local_a8;
  local_268._0_1_ = (char)local_f0;
  local_f8 = 0;
  local_268 = uVar6;
  if ((char)local_268 == '\0') {
    snprintf((char *)&local_158,100,"anime_%s","switch");
  }
  else {
    snprintf((char *)&local_158,100,"anime_%s_%s",(char *)&local_268,"switch");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_158 != '\0') {
    uVar8 = local_158 & 0xff;
    uVar6 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_158 | 1);
    do {
      uVar6 = (uVar6 ^ uVar8) * 0x100000001b3;
      bVar1 = *pbVar10;
      uVar8 = (ulong)bVar1;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
  }
  uStack_2d0 = (undefined6)uVar6;
  local_2ca = (undefined2)(uVar6 >> 0x30);
  iVar3 = FUN_0087ccf0(*(undefined8 *)(param_1 + 0x128));
  if (iVar3 == 2) {
    uVar2 = 0x40000000;
LAB_0109e4ac:
    FUN_00ffd510(uVar2,lVar11 + 0x100,&uStack_2d0);
  }
  else {
    if (iVar3 == 1) {
      uVar2 = 0x3f800000;
      goto LAB_0109e4ac;
    }
    if (iVar3 == 0) {
      uVar2 = 0;
      goto LAB_0109e4ac;
    }
  }
  iVar3 = FUN_0087a5f0(*(undefined8 *)(param_1 + 0x128));
  if (iVar3 == 100) {
    local_f8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      snprintf((char *)&local_158,100,"anime_%s","gauge_scale");
      bVar1 = (byte)local_158;
    }
    else {
      snprintf((char *)&local_158,100,"anime_%s_%s",(char *)(param_1 + 0xc4),"gauge_scale");
      bVar1 = (byte)local_158;
    }
    local_f0 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      local_f0 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)&local_158 | 1);
      do {
        local_f0 = (local_f0 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd510(DAT_01d4c6b8,*(long *)(param_1 + 0x138) + 0x100,&local_f0);
    *(undefined4 *)(param_1 + 0x148) = 0;
    lVar11 = *(long *)(lVar11 + 0x2b0);
  }
  else {
    iVar3 = FUN_0087b3e0(*(undefined8 *)(param_1 + 0x128));
    iVar4 = FUN_0087b490(*(undefined8 *)(param_1 + 0x128));
    iVar5 = FUN_0087b350(*(undefined8 *)(param_1 + 0x128));
    lVar9 = *(long *)(param_1 + 0x138);
    local_f8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      snprintf((char *)&local_158,100,"anime_%s","gauge_scale");
      bVar1 = (byte)local_158;
    }
    else {
      snprintf((char *)&local_158,100,"anime_%s_%s",(char *)(param_1 + 0xc4),"gauge_scale");
      bVar1 = (byte)local_158;
    }
    local_f0 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      local_f0 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)&local_158 | 1);
      do {
        local_f0 = (local_f0 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 0);
    }
    iVar3 = (int)(((float)(iVar5 - iVar3) / (float)(iVar4 - iVar3)) * DAT_01d4c6b8);
    FUN_00ffd510((float)(100 - iVar3),lVar9 + 0x100,&local_f0);
    *(int *)(param_1 + 0x148) = iVar3;
    lVar11 = *(long *)(lVar11 + 0x2b0);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  if (*param3 == '\0') {
    snprintf((char *)&local_158,100,"pane_%s","P_grptxt_lvup_00");
  }
  else {
    snprintf((char *)&local_158,100,"pane_%s_%s",param3,"P_grptxt_lvup_00");
  }
  if ((byte)local_158 != '\0') {
    uVar6 = local_158 & 0xff;
    pbVar10 = (byte *)((ulong)&local_158 | 1);
    do {
      uVar14 = (uVar14 ^ uVar6) * 0x100000001b3;
      bVar1 = *pbVar10;
      uVar6 = (ulong)bVar1;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
  }
  local_f0 = uVar14;
  FUN_0167b9b0(lVar11,&local_f0,0);
  if (lVar11 == 0) {
    return;
  }
  plVar12 = (long *)(lVar11 + 0x48);
  pcVar7 = *(code **)(*plVar12 + 0x18);
LAB_0109e764:
  (*pcVar7)(plVar12);
  return;
}


