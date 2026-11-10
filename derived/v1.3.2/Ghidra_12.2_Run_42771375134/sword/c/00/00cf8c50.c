/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf8c50; name: FUN_00cf8c50
 */


void FUN_00cf8c50(long param_1,int param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  char local_1f0 [8];
  char acStack_1e8 [8];
  undefined2 local_1e0;
  undefined1 local_1de;
  undefined8 local_1dd;
  undefined8 local_1d5;
  undefined8 local_1cd;
  undefined8 local_1c5;
  undefined8 local_1bd;
  undefined8 local_1b5;
  undefined8 local_1ad;
  undefined8 local_1a5;
  undefined8 local_19d;
  undefined8 local_195;
  undefined1 local_18d;
  ulong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
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
  
  local_1e0 = 0x3130;
  local_18d = 0;
  local_195 = 0;
  local_19d = 0;
  local_1a5 = 0;
  local_1ad = 0;
  local_1b5 = 0;
  local_1bd = 0;
  local_1c5 = 0;
  local_1cd = 0;
  local_1d5 = 0;
  local_1dd = 0;
  local_1de = 0;
  local_c0 = 0;
  local_1f0 = (char  [8])s_L_co_top_detail_01_01d28f90._0_8_;
  acStack_1e8 = (char  [8])s_L_co_top_detail_01_01d28f90._8_8_;
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
  snprintf((char *)&local_120,100,"%s",local_1f0);
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
  uVar2 = local_188;
  local_d0 = 0;
  uStack_c8 = 0;
  local_168 = local_98;
  local_170 = local_a0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_178 = local_a8;
  local_180 = local_b0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_148 = local_78;
  local_150 = local_80;
  local_100 = 0;
  uStack_f8 = 0;
  local_158 = local_88;
  local_160 = local_90;
  local_110 = 0;
  uStack_108 = 0;
  local_128 = local_58;
  local_130 = local_60;
  local_120 = 0;
  uStack_118 = 0;
  local_138 = local_68;
  local_140 = local_70;
  local_188._0_1_ = (char)local_b8;
  local_c0 = 0;
  local_188 = uVar2;
  if ((char)local_188 == '\0') {
    snprintf((char *)&local_120,100,"anime_%s","detail_switch");
  }
  else {
    snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"detail_switch");
  }
  uVar2 = local_120 & 0xff;
  uVar4 = 0xcbf29ce484222645;
  local_b8 = 0xcbf29ce484222645;
  if ((byte)local_120 != '\0') {
    local_b8 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_120 | 1);
    do {
      local_b8 = (local_b8 ^ uVar2) * 0x100000001b3;
      bVar1 = *pbVar3;
      uVar2 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd510(0,param_1 + 0x100,&local_b8);
  if (param_2 == 1) {
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
    if ((char)local_188 == '\0') {
      snprintf((char *)&local_120,100,"pane_%s","T_co_detail_l_01");
    }
    else {
      snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_detail_l_01");
    }
    local_b8 = 0xcbf29ce484222645;
    if ((byte)local_120 != 0) {
      local_b8 = 0xcbf29ce484222645;
      pbVar3 = (byte *)((ulong)&local_120 | 1);
      do {
        local_b8 = (local_b8 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while ((byte)local_120 != 0);
    }
    local_120 = 0xac4d649f13b1a33c;
  }
  else {
    if (param_2 != 0) goto LAB_00cf8fd8;
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
    if ((char)local_188 == '\0') {
      snprintf((char *)&local_120,100,"pane_%s","T_co_detail_l_01");
    }
    else {
      snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_detail_l_01");
    }
    local_b8 = 0xcbf29ce484222645;
    if ((byte)local_120 != 0) {
      local_b8 = 0xcbf29ce484222645;
      pbVar3 = (byte *)((ulong)&local_120 | 1);
      do {
        local_b8 = (local_b8 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while ((byte)local_120 != 0);
    }
    local_120 = 0xac4d679f13b1a855;
  }
  FUN_00cf6fb0(param_1,&local_b8,&local_120);
LAB_00cf8fd8:
  if (param_3 == 2) {
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
    if ((char)local_188 == '\0') {
      snprintf((char *)&local_120,100,"pane_%s","T_co_detail_l_02");
    }
    else {
      snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_detail_l_02");
    }
    if ((byte)local_120 != 0) {
      pbVar3 = (byte *)((ulong)&local_120 | 1);
      do {
        uVar4 = (uVar4 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while ((byte)local_120 != 0);
    }
    local_120 = 0xac4d6b9f13b1af21;
    local_b8 = uVar4;
  }
  else {
    if (param_3 == 1) {
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
      if ((char)local_188 == '\0') {
        snprintf((char *)&local_120,100,"pane_%s","T_co_detail_l_02");
      }
      else {
        snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_detail_l_02");
      }
      if ((byte)local_120 != 0) {
        pbVar3 = (byte *)((ulong)&local_120 | 1);
        do {
          uVar4 = (uVar4 ^ (byte)local_120) * 0x100000001b3;
          local_120._0_1_ = *pbVar3;
          pbVar3 = pbVar3 + 1;
        } while ((byte)local_120 != 0);
      }
      local_120 = 0x6a9f13b1ad6e;
      local_b8 = uVar4;
    }
    else {
      if (param_3 != 0) {
        return;
      }
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
      if ((char)local_188 == '\0') {
        snprintf((char *)&local_120,100,"pane_%s","T_co_detail_l_02");
      }
      else {
        snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_detail_l_02");
      }
      if ((byte)local_120 != 0) {
        pbVar3 = (byte *)((ulong)&local_120 | 1);
        do {
          uVar4 = (uVar4 ^ (byte)local_120) * 0x100000001b3;
          local_120._0_1_ = *pbVar3;
          pbVar3 = pbVar3 + 1;
        } while ((byte)local_120 != 0);
      }
      local_120 = 0x659f13b1a4ef;
      local_b8 = uVar4;
    }
    local_120 = local_120 | 0xac4d000000000000;
  }
  FUN_00cf6fb0(param_1,&local_b8,&local_120);
  return;
}


