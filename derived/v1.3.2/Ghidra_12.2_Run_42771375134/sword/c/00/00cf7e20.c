/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf7e20; name: FUN_00cf7e20
 */


void FUN_00cf7e20(long param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
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
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
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
  
  local_1d0 = 0x3330;
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
  local_1e0 = (char  [8])s_L_co_top_detail_03_01d47fd6._0_8_;
  acStack_1d8 = (char  [8])s_L_co_top_detail_03_01d47fd6._8_8_;
  local_c0 = 0;
  uStack_b8 = 0;
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
  snprintf((char *)&local_110,100,"%s",local_1e0);
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
  snprintf((char *)&local_a8,100,"%s",&local_110);
  local_178 = local_a8;
  uVar2 = local_178;
  local_c0 = 0;
  uStack_b8 = 0;
  local_158 = local_88;
  local_160 = local_90;
  local_d0 = 0;
  uStack_c8 = 0;
  local_168 = local_98;
  local_170 = local_a0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_138 = local_68;
  local_140 = local_70;
  local_f0 = 0;
  uStack_e8 = 0;
  local_148 = local_78;
  local_150 = local_80;
  local_100 = 0;
  uStack_f8 = 0;
  local_118 = local_48;
  local_120 = local_50;
  local_110 = 0;
  uStack_108 = 0;
  local_128 = local_58;
  local_130 = local_60;
  local_178._0_1_ = (char)local_a8;
  local_b0 = 0;
  local_178 = uVar2;
  if ((char)local_178 == '\0') {
    snprintf((char *)&local_110,100,"anime_%s","detail_switch");
  }
  else {
    snprintf((char *)&local_110,100,"anime_%s_%s",(char *)&local_178,"detail_switch");
  }
  uVar2 = local_110 & 0xff;
  uVar4 = 0xcbf29ce484222645;
  local_a8 = 0xcbf29ce484222645;
  if ((byte)local_110 != '\0') {
    local_a8 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_110 | 1);
    do {
      local_a8 = (local_a8 ^ uVar2) * 0x100000001b3;
      bVar1 = *pbVar3;
      uVar2 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd510(0x40800000,param_1 + 0x100,&local_a8);
  local_b0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
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
  if ((char)local_178 == '\0') {
    snprintf((char *)&local_110,100,"pane_%s","T_co_detail_l_13");
  }
  else {
    snprintf((char *)&local_110,100,"pane_%s_%s",(char *)&local_178,"T_co_detail_l_13");
  }
  if ((byte)local_110 != 0) {
    pbVar3 = (byte *)((ulong)&local_110 | 1);
    do {
      uVar4 = (uVar4 ^ (byte)local_110) * 0x100000001b3;
      local_110._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_110 != 0);
  }
  local_110 = 0xac46749f13ab9fbe;
  local_a8 = uVar4;
  FUN_00cf6fb0(param_1,&local_a8,&local_110);
  return;
}


