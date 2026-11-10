/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfa500; name: FUN_00cfa500
 */


ulong FUN_00cfa500(undefined8 param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  char local_1e0 [8];
  char acStack_1d8 [8];
  undefined2 local_1d0;
  undefined1 local_1ce;
  undefined8 local_1cd;
  undefined8 local_1c5;
  undefined8 local_1bd;
  undefined8 local_1b5;
  undefined8 local_1ad;
  undefined8 local_1a5;
  undefined8 local_19d;
  undefined8 local_195;
  undefined8 local_18d;
  undefined8 local_185;
  undefined1 local_17d;
  ulong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  ulong local_110 [12];
  undefined4 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_1d0 = 0x3430;
  local_17d = 0;
  local_185 = 0;
  local_18d = 0;
  local_195 = 0;
  local_19d = 0;
  local_1a5 = 0;
  local_1ad = 0;
  local_1b5 = 0;
  local_1bd = 0;
  local_1c5 = 0;
  local_1cd = 0;
  local_1ce = 0;
  local_b0 = 0;
  local_1e0 = (char  [8])s_L_co_top_detail_04_01d11310._0_8_;
  acStack_1d8 = (char  [8])s_L_co_top_detail_04_01d11310._8_8_;
  local_110[10] = 0;
  local_110[0xb] = 0;
  local_110[8] = 0;
  local_110[9] = 0;
  local_110[6] = 0;
  local_110[7] = 0;
  local_110[4] = 0;
  local_110[5] = 0;
  local_110[2] = 0;
  local_110[3] = 0;
  local_110[0] = 0;
  local_110[1] = 0;
  snprintf((char *)local_110,100,"%s",local_1e0);
  local_48 = 0;
  local_58 = 0;
  local_50 = 0;
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
  uVar1 = snprintf((char *)&local_a8,100,"%s",local_110);
  local_178 = local_a8;
  uVar2 = local_178;
  local_158 = local_88;
  local_160 = local_90;
  local_168 = local_98;
  local_170 = local_a0;
  local_138 = local_68;
  local_140 = local_70;
  local_148 = local_78;
  local_150 = local_80;
  local_118 = local_48;
  local_120 = local_50;
  local_128 = local_58;
  local_130 = local_60;
  local_178._0_1_ = (char)local_a8;
  local_178 = uVar2;
  if (param_2 == 1) {
    local_b0 = 0;
    local_110[10] = 0;
    local_110[0xb] = 0;
    local_110[8] = 0;
    local_110[9] = 0;
    local_110[6] = 0;
    local_110[7] = 0;
    local_110[4] = 0;
    local_110[5] = 0;
    local_110[2] = 0;
    local_110[3] = 0;
    local_110[0] = 0;
    local_110[1] = 0;
    if ((char)local_178 == '\0') {
      snprintf((char *)local_110,100,"pane_%s","T_co_detail_s_01");
    }
    else {
      snprintf((char *)local_110,100,"pane_%s_%s",(char *)&local_178,"T_co_detail_s_01");
    }
    local_a8 = 0xcbf29ce484222645;
    if ((byte)local_110[0] != 0) {
      pbVar3 = (byte *)((ulong)local_110 | 1);
      do {
        local_a8 = (local_a8 ^ (byte)local_110[0]) * 0x100000001b3;
        local_110[0]._0_1_ = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while ((byte)local_110[0] != 0);
    }
    local_110[0] = 0xe59f13b4b446;
  }
  else {
    if (param_2 != 0) {
      return (ulong)uVar1;
    }
    local_b0 = 0;
    local_110[10] = 0;
    local_110[0xb] = 0;
    local_110[8] = 0;
    local_110[9] = 0;
    local_110[6] = 0;
    local_110[7] = 0;
    local_110[4] = 0;
    local_110[5] = 0;
    local_110[2] = 0;
    local_110[3] = 0;
    local_110[0] = 0;
    local_110[1] = 0;
    if ((char)local_178 == '\0') {
      snprintf((char *)local_110,100,"pane_%s","T_co_detail_s_01");
    }
    else {
      snprintf((char *)local_110,100,"pane_%s_%s",(char *)&local_178,"T_co_detail_s_01");
    }
    local_a8 = 0xcbf29ce484222645;
    if ((byte)local_110[0] != 0) {
      pbVar3 = (byte *)((ulong)local_110 | 1);
      do {
        local_a8 = (local_a8 ^ (byte)local_110[0]) * 0x100000001b3;
        local_110[0]._0_1_ = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while ((byte)local_110[0] != 0);
    }
    local_110[0] = 0xe69f13b4b5f9;
  }
  local_110[0] = local_110[0] | 0xac50000000000000;
  uVar2 = FUN_00cf6fb0(param_1,&local_a8,local_110);
  return uVar2;
}


