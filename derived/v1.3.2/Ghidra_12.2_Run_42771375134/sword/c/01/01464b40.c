/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01464b40; name: FUN_01464b40
 */


void FUN_01464b40(long param_1,int param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
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
  undefined4 local_180;
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
  
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  local_180 = 0;
  if (0xf423e < (int)param_3) {
    param_3 = 999999;
  }
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
  snprintf((char *)&local_1e0,100,"L_icon_%02d",param_2);
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
  if ((char)local_1e0 == '\0') {
    local_118 = 0;
    local_128 = 0;
    local_120 = 0;
    bVar2 = true;
    local_138 = 0;
    local_130 = 0;
    local_148 = 0;
    local_140 = 0;
    local_158 = 0;
    local_150 = 0;
    local_168 = 0;
    local_160 = 0;
    local_178 = 0;
    local_170 = 0;
  }
  else {
    snprintf((char *)&local_110,100,"%s",&local_1e0);
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
    uVar5 = local_178;
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
    bVar2 = (char)local_178 == '\0';
    local_178 = uVar5;
  }
  FUN_01461a30(param_1,0,param_3,6);
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
  if (bVar2) {
    snprintf((char *)&local_110,100,"pane_%s","T_lv_add_00");
  }
  else {
    snprintf((char *)&local_110,100,"pane_%s_%s",(char *)&local_178,"T_lv_add_00");
  }
  uVar5 = 0xcbf29ce484222645;
  local_a8 = 0xcbf29ce484222645;
  if ((byte)local_110 != 0) {
    local_a8 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_110 | 1);
    do {
      local_a8 = (local_a8 ^ (byte)local_110) * 0x100000001b3;
      local_110._0_1_ = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while ((byte)local_110 != 0);
  }
  local_110 = 0xe2a4bea82af34d0;
  FUN_014618d0(param_1,&local_a8,&local_110,0);
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
    snprintf((char *)&local_110,100,"anime_%s","add");
  }
  else {
    snprintf((char *)&local_110,100,"anime_%s_%s",(char *)&local_178,"add");
  }
  if ((byte)local_110 != '\0') {
    uVar3 = local_110 & 0xff;
    pbVar4 = (byte *)((ulong)&local_110 | 1);
    do {
      uVar5 = (uVar5 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  local_a8 = uVar5;
  FUN_00ffd010(param_1 + 0x100,&local_a8);
  return;
}


