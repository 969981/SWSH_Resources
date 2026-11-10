/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf9680; name: FUN_00cf9680
 */


void FUN_00cf9680(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  char local_200 [8];
  char acStack_1f8 [8];
  undefined2 local_1f0;
  undefined1 local_1ee;
  undefined8 local_1ed;
  undefined8 local_1e5;
  undefined8 local_1dd;
  undefined8 local_1d5;
  undefined8 local_1cd;
  undefined8 local_1c5;
  undefined8 local_1bd;
  undefined8 local_1b5;
  undefined8 local_1ad;
  undefined8 local_1a5;
  undefined1 local_19d;
  ulong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  local_1f0 = 0x3230;
  local_19d = 0;
  local_1a5 = 0;
  local_1ad = 0;
  local_1b5 = 0;
  local_1bd = 0;
  local_1c5 = 0;
  local_1cd = 0;
  local_1d5 = 0;
  local_1dd = 0;
  local_1e5 = 0;
  local_1ed = 0;
  local_1ee = 0;
  local_d0 = 0;
  local_200 = (char  [8])s_L_co_top_detail_02_01cf69bc._0_8_;
  acStack_1f8 = (char  [8])s_L_co_top_detail_02_01cf69bc._8_8_;
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
  local_130 = 0;
  uStack_128 = 0;
  snprintf((char *)&local_130,100,"%s",local_200);
  local_68 = 0;
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
  local_c8 = 0;
  local_c0 = 0;
  snprintf((char *)&local_c8,100,"%s",&local_130);
  local_198 = local_c8;
  uVar2 = local_198;
  local_e0 = 0;
  uStack_d8 = 0;
  local_178 = local_a8;
  local_180 = local_b0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_188 = local_b8;
  local_190 = local_c0;
  local_100 = 0;
  uStack_f8 = 0;
  local_158 = local_88;
  local_160 = local_90;
  local_110 = 0;
  uStack_108 = 0;
  local_168 = local_98;
  local_170 = local_a0;
  local_120 = 0;
  uStack_118 = 0;
  local_138 = local_68;
  local_140 = local_70;
  local_130 = 0;
  uStack_128 = 0;
  local_148 = local_78;
  local_150 = local_80;
  local_198._0_1_ = (char)local_c8;
  local_d0 = 0;
  local_198 = uVar2;
  if ((char)local_198 == '\0') {
    snprintf((char *)&local_130,100,"anime_%s","detail_switch");
  }
  else {
    snprintf((char *)&local_130,100,"anime_%s_%s",(char *)&local_198,"detail_switch");
  }
  uVar2 = local_130 & 0xff;
  uVar4 = 0xcbf29ce484222645;
  local_c8 = 0xcbf29ce484222645;
  if ((char)local_130 != '\0') {
    local_c8 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_130 | 1);
    do {
      local_c8 = (local_c8 ^ uVar2) * 0x100000001b3;
      bVar1 = *pbVar3;
      uVar2 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd510(0x3f800000,param_1 + 0x100,&local_c8);
  FUN_00cf6cb0(param_1,param_2);
  local_d0 = 0;
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
  local_130 = 0;
  uStack_128 = 0;
  if ((char)local_198 == '\0') {
    snprintf((char *)&local_130,100,"pane_%s","T_co_detail_l_03");
  }
  else {
    snprintf((char *)&local_130,100,"pane_%s_%s",(char *)&local_198,"T_co_detail_l_03");
  }
  local_c8 = 0xcbf29ce484222645;
  if ((char)local_130 != '\0') {
    local_130 = local_130 & 0xff;
    local_c8 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_130 | 1);
    do {
      local_c8 = (local_c8 ^ local_130) * 0x100000001b3;
      bVar1 = *pbVar3;
      local_130 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_130 = 0xac50ea9f13b4bcc5;
  FUN_00cf6fb0(param_1,&local_c8,&local_130);
  FUN_00cf6cb0(param_1,param_3);
  local_d0 = 0;
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
  local_130 = 0;
  uStack_128 = 0;
  if ((char)local_198 == '\0') {
    snprintf((char *)&local_130,100,"pane_%s","T_co_detail_l_05");
  }
  else {
    snprintf((char *)&local_130,100,"pane_%s_%s",(char *)&local_198,"T_co_detail_l_05");
  }
  local_c8 = 0xcbf29ce484222645;
  if ((char)local_130 != '\0') {
    local_130 = local_130 & 0xff;
    local_c8 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_130 | 1);
    do {
      local_c8 = (local_c8 ^ local_130) * 0x100000001b3;
      bVar1 = *pbVar3;
      local_130 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_130 = 0xac50e49f13b4b293;
  FUN_00cf6fb0(param_1,&local_c8,&local_130);
  FUN_00cf6cb0(param_1,param_4);
  local_d0 = 0;
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
  local_130 = 0;
  uStack_128 = 0;
  if ((char)local_198 == '\0') {
    snprintf((char *)&local_130,100,"pane_%s","T_co_detail_l_06");
  }
  else {
    snprintf((char *)&local_130,100,"pane_%s_%s",(char *)&local_198,"T_co_detail_l_06");
  }
  local_c8 = 0xcbf29ce484222645;
  if ((char)local_130 != '\0') {
    local_130 = local_130 & 0xff;
    local_c8 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_130 | 1);
    do {
      local_c8 = (local_c8 ^ local_130) * 0x100000001b3;
      bVar1 = *pbVar3;
      local_130 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_130 = 0xac50ea9f13b4bcc5;
  FUN_00cf6fb0(param_1,&local_c8,&local_130);
  FUN_00cf6cb0(param_1,param_5);
  local_d0 = 0;
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
  local_130 = 0;
  uStack_128 = 0;
  if ((char)local_198 == '\0') {
    snprintf((char *)&local_130,100,"pane_%s","T_co_detail_l_08");
  }
  else {
    snprintf((char *)&local_130,100,"pane_%s_%s",(char *)&local_198,"T_co_detail_l_08");
  }
  if ((char)local_130 != '\0') {
    local_130 = local_130 & 0xff;
    pbVar3 = (byte *)((ulong)&local_130 | 1);
    do {
      uVar4 = (uVar4 ^ local_130) * 0x100000001b3;
      bVar1 = *pbVar3;
      local_130 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_130 = 0xac50e49f13b4b293;
  local_c8 = uVar4;
  FUN_00cf6fb0(param_1,&local_c8,&local_130);
  return;
}


