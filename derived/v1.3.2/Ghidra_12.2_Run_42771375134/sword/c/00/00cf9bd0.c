/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf9bd0; name: FUN_00cf9bd0
 */


void FUN_00cf9bd0(long param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
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
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
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
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  local_1e0 = 0x3330;
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
  local_58 = 0;
  local_1f0 = (char  [8])s_L_co_top_detail_03_01d47fd6._0_8_;
  acStack_1e8 = (char  [8])s_L_co_top_detail_03_01d47fd6._8_8_;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  snprintf((char *)&local_b8,100,"%s",local_1f0);
  local_c0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  snprintf((char *)&local_120,100,"%s",&local_b8);
  local_188 = local_120;
  uVar2 = local_188;
  local_68 = 0;
  uStack_60 = 0;
  local_168 = local_100;
  local_170 = local_108;
  local_78 = 0;
  uStack_70 = 0;
  local_178 = local_110;
  local_180 = local_118;
  local_88 = 0;
  uStack_80 = 0;
  local_148 = local_e0;
  local_150 = local_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_158 = local_f0;
  local_160 = local_f8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_128 = local_c0;
  local_130 = local_c8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_138 = local_d0;
  local_140 = local_d8;
  local_188._0_1_ = (char)local_120;
  local_58 = 0;
  local_188 = uVar2;
  if ((char)local_188 == '\0') {
    snprintf((char *)&local_b8,100,"anime_%s","detail_switch");
  }
  else {
    snprintf((char *)&local_b8,100,"anime_%s_%s",(char *)&local_188,"detail_switch");
  }
  uVar3 = local_b8 & 0xff;
  uVar7 = 0xcbf29ce484222645;
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_b8 != '\0') {
    uVar5 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar5 = (uVar5 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  local_b8 = uVar5;
  FUN_00ffd510(0x40400000,param_1 + 0x100,&local_b8);
  FUN_00cf6d60(param_1,0,param_2);
  if (param_3 == 1) {
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    if ((char)local_188 == '\0') {
      snprintf((char *)&local_b8,100,"pane_%s","T_co_detail_l_11");
      bVar1 = (byte)local_b8;
    }
    else {
      snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_188,"T_co_detail_l_11");
      bVar1 = (byte)local_b8;
    }
    local_b8 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      local_b8 = 0xcbf29ce484222645;
      pbVar4 = (byte *)((ulong)&local_b8 | 1);
      do {
        local_b8 = (local_b8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    local_120 = 0xac46739f13ab9e0b;
  }
  else {
    if (param_3 != 0) goto LAB_00cf9f68;
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    if ((char)local_188 == '\0') {
      snprintf((char *)&local_b8,100,"pane_%s","T_co_detail_l_11");
      bVar1 = (byte)local_b8;
    }
    else {
      snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_188,"T_co_detail_l_11");
      bVar1 = (byte)local_b8;
    }
    local_b8 = 0xcbf29ce484222645;
    if (bVar1 != 0) {
      local_b8 = 0xcbf29ce484222645;
      pbVar4 = (byte *)((ulong)&local_b8 | 1);
      do {
        local_b8 = (local_b8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    local_120 = 0xac46729f13ab9c58;
  }
  FUN_00cf6fb0(param_1,&local_b8,&local_120);
LAB_00cf9f68:
  lVar6 = *(long *)(param_1 + 0x2b0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if ((char)local_188 == '\0') {
    snprintf((char *)&local_b8,100,"pane_%s","T_co_detail_l_12");
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_188,"T_co_detail_l_12");
  }
  if ((byte)local_b8 != '\0') {
    local_b8 = local_b8 & 0xff;
    pbVar4 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar7 = (uVar7 ^ local_b8) * 0x100000001b3;
      bVar1 = *pbVar4;
      local_b8 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  local_b8 = uVar7;
  FUN_0167b9b0(lVar6,&local_b8,0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


