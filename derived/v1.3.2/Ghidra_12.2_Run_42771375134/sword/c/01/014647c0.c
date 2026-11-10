/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014647c0; name: FUN_014647c0
 */


void FUN_014647c0(long param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
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
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  ulong local_168;
  undefined8 local_160;
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
  undefined4 local_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_170 = 0;
  local_180 = 0;
  uStack_178 = 0;
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
  snprintf((char *)&local_1d0,100,"L_icon_%02d",param_2);
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
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
  if ((char)local_1d0 == '\0') {
    local_108 = 0;
    local_118 = 0;
    local_110 = 0;
    bVar2 = true;
    local_128 = 0;
    local_120 = 0;
    local_138 = 0;
    local_130 = 0;
    local_148 = 0;
    local_140 = 0;
    local_158 = 0;
    local_150 = 0;
    local_168 = 0;
    local_160 = 0;
  }
  else {
    snprintf((char *)&local_100,100,"%s",&local_1d0);
    local_38 = 0;
    local_48 = 0;
    local_40 = 0;
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
    snprintf((char *)&local_98,100,"%s",&local_100);
    local_168 = local_98;
    uVar3 = local_168;
    local_148 = local_78;
    local_150 = local_80;
    local_158 = local_88;
    local_160 = local_90;
    local_128 = local_58;
    local_130 = local_60;
    local_138 = local_68;
    local_140 = local_70;
    local_108 = local_38;
    local_110 = local_40;
    local_118 = local_48;
    local_120 = local_50;
    local_168._0_1_ = (char)local_98;
    bVar2 = (char)local_168 == '\0';
    local_168 = uVar3;
  }
  param_1 = param_1 + 0x100;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
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
  if (bVar2) {
    snprintf((char *)&local_100,100,"anime_%s","emotion_off");
  }
  else {
    snprintf((char *)&local_100,100,"anime_%s_%s",(char *)&local_168,"emotion_off");
  }
  uVar3 = local_100 & 0xff;
  uVar5 = 0xcbf29ce484222645;
  local_98 = 0xcbf29ce484222645;
  if ((char)local_100 != '\0') {
    local_98 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_100 | 1);
    do {
      local_98 = (local_98 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd430(param_1,&local_98);
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
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
  if ((char)local_168 == '\0') {
    snprintf((char *)&local_100,100,"anime_%s","emotion");
  }
  else {
    snprintf((char *)&local_100,100,"anime_%s_%s",(char *)&local_168,"emotion");
  }
  local_98 = 0xcbf29ce484222645;
  if ((char)local_100 != '\0') {
    uVar3 = local_100 & 0xff;
    local_98 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_100 | 1);
    do {
      local_98 = (local_98 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd510(0,param_1,&local_98);
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
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
  if ((char)local_168 == '\0') {
    snprintf((char *)&local_100,100,"anime_%s","emotion");
  }
  else {
    snprintf((char *)&local_100,100,"anime_%s_%s",(char *)&local_168,"emotion");
  }
  if ((char)local_100 != '\0') {
    uVar3 = local_100 & 0xff;
    pbVar4 = (byte *)((ulong)&local_100 | 1);
    do {
      uVar5 = (uVar5 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  local_98 = uVar5;
  FUN_00ffd010(param_1,&local_98);
  return;
}


