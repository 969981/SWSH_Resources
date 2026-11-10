/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4d3c0; name: FUN_00a4d3c0
 */


void FUN_00a4d3c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  size_t sVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  long lVar11;
  char *param3;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  char acStack_258 [6];
  char local_252 [2];
  char acStack_250 [6];
  undefined8 local_24a;
  undefined8 local_242;
  undefined8 local_23a;
  undefined8 local_232;
  undefined8 local_22a;
  undefined8 local_222;
  undefined8 local_21a;
  undefined8 local_212;
  undefined8 local_20a;
  undefined6 uStack_202;
  undefined2 local_1fc;
  undefined6 uStack_1fa;
  ulong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined6 uStack_188;
  undefined2 local_182;
  undefined2 uStack_180;
  undefined4 uStack_17e;
  undefined2 local_17a;
  undefined3 uStack_178;
  undefined3 uStack_175;
  undefined2 local_172;
  undefined3 uStack_170;
  undefined3 uStack_16d;
  undefined2 local_16a;
  undefined3 uStack_168;
  undefined3 uStack_165;
  undefined2 local_162;
  undefined3 uStack_160;
  undefined3 uStack_15d;
  undefined2 local_15a;
  undefined3 uStack_158;
  undefined3 uStack_155;
  undefined2 local_152;
  undefined3 uStack_150;
  undefined3 uStack_14d;
  undefined2 local_14a;
  undefined3 uStack_148;
  undefined3 uStack_145;
  undefined2 local_142;
  undefined3 uStack_140;
  undefined3 uStack_13d;
  undefined2 local_13a;
  undefined3 uStack_138;
  undefined3 uStack_135;
  undefined2 uStack_132;
  undefined4 uStack_130;
  undefined2 local_12c;
  undefined2 uStack_12a;
  undefined4 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  
  uVar5 = param_2[1];
  lVar14 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  uVar5 = param_2[2];
  uVar1 = param_2[3];
  uVar10 = param_2[5];
  *(undefined8 *)(param_1 + 0x38) = param_2[4];
  *(undefined8 *)(param_1 + 0x40) = uVar10;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar5 = param_2[6];
  uVar1 = param_2[7];
  uVar10 = param_2[9];
  *(undefined8 *)(param_1 + 0x58) = param_2[8];
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar10 = param_2[0xc];
  uVar5 = param_2[10];
  uVar1 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0xd);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  lVar11 = param_2[0xe];
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar11;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  uVar5 = param_2[0xf];
  uVar1 = param_2[0x10];
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x11);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  param3 = (char *)(param_1 + 0x20);
  if (*param3 == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","P_plus_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",param3,"P_plus_00");
  }
  uVar8 = local_120 & 0xff;
  uVar13 = 0xcbf29ce484222645;
  local_1f0 = 0xcbf29ce484222645;
  if ((byte)local_120 != '\0') {
    local_1f0 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      local_1f0 = (local_1f0 ^ uVar8) * 0x100000001b3;
      bVar2 = *pbVar9;
      uVar8 = (ulong)bVar2;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
  }
  uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0),&local_1f0);
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","L_cursor00");
    bVar2 = (byte)local_120;
    uVar8 = local_1f0;
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",param3,"L_cursor00");
    bVar2 = (byte)local_120;
    uVar8 = local_1f0;
  }
  if (bVar2 != 0) {
    local_1f0 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      local_1f0 = (local_1f0 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
    if (local_1f0 != 0xcbf29ce484222645 && local_1f0 != 0) {
      uVar5 = FUN_011431a0(*(undefined8 *)(lVar14 + 0x1b0),&local_1f0);
      goto LAB_00a4d5e0;
    }
  }
  uVar5 = 0;
  local_1f0 = uVar8;
LAB_00a4d5e0:
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","T_poke_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",param3,"T_poke_00");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0xb8) = uVar8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"pane_%s","T_player_00");
  }
  else {
    snprintf((char *)&local_120,100,"pane_%s_%s",param3,"T_player_00");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0xc0) = uVar8;
  uStack_12a = 0;
  uStack_128 = 0;
  uStack_132 = 0;
  uStack_130 = 0;
  local_12c = 0;
  local_13a = 0;
  uStack_138 = 0;
  uStack_135 = 0;
  local_142 = 0;
  uStack_140 = 0;
  uStack_13d = 0;
  local_14a = 0;
  uStack_148 = 0;
  uStack_145 = 0;
  local_152 = 0;
  uStack_150 = 0;
  uStack_14d = 0;
  local_15a = 0;
  uStack_158 = 0;
  uStack_155 = 0;
  local_162 = 0;
  uStack_160 = 0;
  uStack_15d = 0;
  local_16a = 0;
  uStack_168 = 0;
  uStack_165 = 0;
  local_172 = 0;
  uStack_170 = 0;
  uStack_16d = 0;
  local_17a = 0;
  uStack_178 = 0;
  uStack_175 = 0;
  uStack_180 = s_L_seibetsu_00_01d449c9._8_2_;
  uStack_17e = s_L_seibetsu_00_01d449c9._10_4_;
  uStack_188._0_1_ = s_L_seibetsu_00_01d449c9[0];
  uStack_188._1_1_ = s_L_seibetsu_00_01d449c9[1];
  uStack_188._2_1_ = s_L_seibetsu_00_01d449c9[2];
  uStack_188._3_1_ = s_L_seibetsu_00_01d449c9[3];
  uStack_188._4_1_ = s_L_seibetsu_00_01d449c9[4];
  uStack_188._5_1_ = s_L_seibetsu_00_01d449c9[5];
  local_182._0_1_ = s_L_seibetsu_00_01d449c9[6];
  local_182._1_1_ = s_L_seibetsu_00_01d449c9[7];
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"%s",&uStack_188);
  }
  else {
    snprintf((char *)&local_120,100,"%s_%s",param3,(char *)&uStack_188);
  }
  local_190 = (ulong)local_190._4_4_ << 0x20;
  local_1a0 = 0;
  local_198 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  snprintf((char *)&local_1f0,100,"%s",&local_120);
  local_b8 = local_1f0;
  local_98 = local_1d0;
  local_a0 = local_1d8;
  local_a8 = local_1e0;
  local_b0 = local_1e8;
  local_78 = local_1b0;
  local_80 = local_1b8;
  local_88 = local_1c0;
  local_90 = local_1c8;
  local_58 = (undefined4)local_190;
  local_60 = local_198;
  local_68 = local_1a0;
  local_70 = local_1a8;
  *(ulong *)(param_1 + 200) = local_1f0;
  *(undefined8 *)(param_1 + 0xe0) = local_1d8;
  *(undefined8 *)(param_1 + 0xe8) = local_1d0;
  *(undefined8 *)(param_1 + 0xd0) = local_1e8;
  *(undefined8 *)(param_1 + 0xd8) = local_1e0;
  *(undefined8 *)(param_1 + 0x100) = local_1b8;
  *(undefined8 *)(param_1 + 0x108) = local_1b0;
  *(undefined8 *)(param_1 + 0xf0) = local_1c8;
  *(undefined8 *)(param_1 + 0xf8) = local_1c0;
  *(undefined8 *)(param_1 + 0x110) = local_1a8;
  *(undefined4 *)(param_1 + 0x128) = (undefined4)local_190;
  *(undefined8 *)(param_1 + 0x118) = local_1a0;
  *(undefined8 *)(param_1 + 0x120) = local_198;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","me");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",param3,"me");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x130) = uVar8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","pattern_effect");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",param3,"pattern_effect");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x138) = uVar8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","player");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",param3,"player");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x140) = uVar8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","hinshi");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",param3,"hinshi");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x158) = uVar8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","select");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",param3,"select");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x160) = uVar8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","unselect");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",param3,"unselect");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x168) = uVar8;
  local_12c = 0;
  uStack_12a = 0;
  uStack_135 = 0;
  uStack_132 = 0;
  uStack_130 = 0;
  uStack_13d = 0;
  local_13a = 0;
  uStack_138 = 0;
  uStack_145 = 0;
  local_142 = 0;
  uStack_140 = 0;
  uStack_14d = 0;
  local_14a = 0;
  uStack_148 = 0;
  uStack_155 = 0;
  local_152 = 0;
  uStack_150 = 0;
  uStack_15d = 0;
  local_15a = 0;
  uStack_158 = 0;
  uStack_165 = 0;
  local_162 = 0;
  uStack_160 = 0;
  uStack_16d = 0;
  local_16a = 0;
  uStack_168 = 0;
  uStack_175 = 0;
  local_172 = 0;
  uStack_170 = 0;
  local_17a = 0;
  uStack_178 = 0;
  uStack_180 = 0x3030;
  uStack_128 = 0;
  uStack_17e = 0;
  uStack_188 = s_L_cursor00_01d3dfc9._0_6_;
  local_182 = s_L_cursor00_01d3dfc9._6_2_;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    snprintf((char *)&local_120,100,"%s",&uStack_188);
  }
  else {
    snprintf((char *)&local_120,100,"%s_%s",param3,(char *)&uStack_188);
  }
  local_190 = local_190 & 0xffffffff00000000;
  local_1a0 = 0;
  local_198 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  snprintf((char *)&local_1f0,100,"%s",&local_120);
  local_b8 = local_1f0;
  uVar8 = local_b8;
  local_d0 = 0;
  uStack_c8 = 0;
  local_98 = local_1d0;
  local_a0 = local_1d8;
  local_e0 = 0;
  uStack_d8 = 0;
  local_a8 = local_1e0;
  local_b0 = local_1e8;
  local_f0 = 0;
  uStack_e8 = 0;
  local_78 = local_1b0;
  local_80 = local_1b8;
  local_100 = 0;
  uStack_f8 = 0;
  local_88 = local_1c0;
  local_90 = local_1c8;
  local_110 = 0;
  uStack_108 = 0;
  local_58 = (undefined4)local_190;
  local_60 = local_198;
  local_120 = 0;
  uStack_118 = 0;
  local_68 = local_1a0;
  local_70 = local_1a8;
  local_b8._0_1_ = (char)local_1f0;
  local_c0 = 0;
  local_b8 = uVar8;
  if ((char)local_b8 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","keep");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_b8,"keep");
  }
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_120 != 0) {
    uVar8 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_120) * 0x100000001b3;
      local_120._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_120 != 0);
  }
  *(ulong *)(param_1 + 0x148) = uVar8;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if ((char)local_b8 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","select");
    bVar2 = (byte)local_120;
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_b8,"select");
    bVar2 = (byte)local_120;
  }
  if (bVar2 != 0) {
    pbVar9 = (byte *)((ulong)&local_120 | 1);
    do {
      uVar13 = (uVar13 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
  }
  *(ulong *)(param_1 + 0x150) = uVar13;
  lVar11 = *(long *)(param_1 + 400);
  if (lVar11 != 0) {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    if ((*(ulong *)(param_1 + 0x90) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
      local_1f0 = *(ulong *)(param_1 + 0x90);
      FUN_0077eb10(*(long *)(param_1 + 0x88),&local_1f0,lVar11);
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  lVar11 = *(long *)(param_1 + 0x198);
  if (lVar11 != 0) {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    if ((*(ulong *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
      local_1f0 = *(ulong *)(param_1 + 0x98);
      FUN_0077eb10(*(long *)(param_1 + 0x88),&local_1f0,lVar11);
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  local_190 = 0xffffffff00000000;
  local_1a0 = 0;
  local_198 = 0;
  uStack_1fa = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_202 = 0;
  local_1fc = 0;
  local_20a = 0;
  local_212 = 0;
  local_21a = 0;
  local_222 = 0;
  local_22a = 0;
  local_232 = 0;
  local_23a = 0;
  local_242 = 0;
  local_24a = 0;
  acStack_250[0] = s_L_pokeicon_00_01d33c94[8];
  acStack_250[1] = s_L_pokeicon_00_01d33c94[9];
  acStack_250[2] = s_L_pokeicon_00_01d33c94[10];
  acStack_250[3] = s_L_pokeicon_00_01d33c94[0xb];
  acStack_250[4] = s_L_pokeicon_00_01d33c94[0xc];
  acStack_250[5] = s_L_pokeicon_00_01d33c94[0xd];
  acStack_258[0] = s_L_pokeicon_00_01d33c94[0];
  acStack_258[1] = s_L_pokeicon_00_01d33c94[1];
  acStack_258[2] = s_L_pokeicon_00_01d33c94[2];
  acStack_258[3] = s_L_pokeicon_00_01d33c94[3];
  acStack_258[4] = s_L_pokeicon_00_01d33c94[4];
  acStack_258[5] = s_L_pokeicon_00_01d33c94[5];
  local_252[0] = s_L_pokeicon_00_01d33c94[6];
  local_252[1] = s_L_pokeicon_00_01d33c94[7];
  local_c0 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  if (*(char *)(param_2 + 1) == '\0') {
    snprintf((char *)&local_120,100,"%s",acStack_258);
  }
  else {
    snprintf((char *)&local_120,100,"%s_%s",(char *)(param_2 + 1),acStack_258);
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
  uStack_168 = (undefined3)local_98;
  uStack_165 = (undefined3)((ulong)local_98 >> 0x18);
  local_162 = (undefined2)((ulong)local_98 >> 0x30);
  uStack_170 = (undefined3)local_a0;
  uStack_16d = (undefined3)((ulong)local_a0 >> 0x18);
  local_16a = (undefined2)((ulong)local_a0 >> 0x30);
  uStack_178 = (undefined3)local_a8;
  uStack_175 = (undefined3)((ulong)local_a8 >> 0x18);
  local_172 = (undefined2)((ulong)local_a8 >> 0x30);
  uStack_180 = (undefined2)local_b0;
  uStack_17e = (undefined4)((ulong)local_b0 >> 0x10);
  local_17a = (undefined2)((ulong)local_b0 >> 0x30);
  uStack_148 = (undefined3)local_78;
  uStack_145 = (undefined3)((ulong)local_78 >> 0x18);
  local_142 = (undefined2)((ulong)local_78 >> 0x30);
  uStack_150 = (undefined3)local_80;
  uStack_14d = (undefined3)((ulong)local_80 >> 0x18);
  local_14a = (undefined2)((ulong)local_80 >> 0x30);
  uStack_158 = (undefined3)local_88;
  uStack_155 = (undefined3)((ulong)local_88 >> 0x18);
  local_152 = (undefined2)((ulong)local_88 >> 0x30);
  uStack_160 = (undefined3)local_90;
  uStack_15d = (undefined3)((ulong)local_90 >> 0x18);
  local_15a = (undefined2)((ulong)local_90 >> 0x30);
  uStack_128 = local_58;
  uStack_130 = (undefined4)local_60;
  local_12c = (undefined2)((ulong)local_60 >> 0x20);
  uStack_12a = (undefined2)((ulong)local_60 >> 0x30);
  uStack_138 = (undefined3)local_68;
  uStack_135 = (undefined3)((ulong)local_68 >> 0x18);
  uStack_132 = (undefined2)((ulong)local_68 >> 0x30);
  uStack_140 = (undefined3)local_70;
  uStack_13d = (undefined3)((ulong)local_70 >> 0x18);
  local_13a = (undefined2)((ulong)local_70 >> 0x30);
  local_1f0 = local_b8;
  local_1d0 = local_98;
  local_1d8 = local_a0;
  local_1e0 = local_a8;
  local_1e8 = local_b0;
  local_1b0 = local_78;
  local_1b8 = local_80;
  local_1c0 = local_88;
  local_1c8 = local_90;
  local_198 = local_60;
  local_1a0 = local_68;
  local_1a8 = local_70;
  local_190 = CONCAT44(*(undefined4 *)(param_2 + 0x11),local_58);
  sVar6 = strlen((char *)&local_1f0);
  if (sVar6 != 0) {
    plVar12 = (long *)FUN_00ff93d0(param_1);
    plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0xd8,8);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    lVar14 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    plVar7[0xc] = 0;
    plVar7[0xd] = 0;
    puVar3 = PTR_DAT_02718e98;
    plVar7[10] = 0;
    plVar7[0xb] = 0;
    plVar7[0x10] = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[2] = lVar4;
    plVar7[3] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x17] = 0;
    plVar7[0x18] = 0;
    plVar7[0x15] = 0;
    plVar7[0x16] = 0;
    plVar7[0x13] = 0;
    plVar7[0x14] = 0;
    *plVar7 = (long)(puVar3 + 0x10);
    plVar7[1] = lVar14;
    plVar7[0xe] = 0;
    plVar7[0xf] = -0x100000000;
    plVar7[0x11] = 0;
    plVar7[0x12] = 0;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    FUN_00a12030(plVar7);
    lVar11 = *(long *)(param_1 + 0x170);
    *(long **)(param_1 + 0x170) = plVar7;
    if (lVar11 != 0) {
      (**(code **)(**(long **)(param_1 + 0x178) + 0x18))
                (*(long **)(param_1 + 0x178),lVar11,*(undefined8 *)(param_1 + 0x180),
                 *(undefined8 *)(param_1 + 0x188));
      plVar7 = *(long **)(param_1 + 0x170);
    }
    *(long **)(param_1 + 0x178) = plVar12;
    *(undefined8 *)(param_1 + 0x180) = 0xd8;
    *(undefined8 *)(param_1 + 0x188) = 8;
    FUN_00a12040(plVar7,&local_1f0);
  }
  return;
}


