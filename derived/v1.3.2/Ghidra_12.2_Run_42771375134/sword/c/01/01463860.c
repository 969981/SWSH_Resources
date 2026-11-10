/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01463860; name: FUN_01463860
 */


void FUN_01463860(long param_1)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  byte *pbVar4;
  int param3;
  byte *pbVar5;
  ulong local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  ulong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  ulong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  param3 = 0;
  local_150 = 0;
  param_1 = param_1 + 0x100;
  pbVar5 = (byte *)((ulong)&local_148 | 1);
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  do {
    local_220 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_280 = 0;
    uStack_278 = 0;
    snprintf((char *)&local_280,100,"L_icon_%02d",param3);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_1b0 == '\0') {
      if ((char)local_280 != '\0') {
        puVar2 = &local_280;
        goto LAB_014639a8;
      }
      local_1b8 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_208 = 0;
      local_200 = 0;
      local_218 = 0;
      local_210 = 0;
      uVar3 = local_280;
    }
    else {
      puVar2 = &local_1b0;
      if ((char)local_280 == '\0') {
LAB_014639a8:
        snprintf((char *)&local_148,100,"%s",puVar2);
      }
      else {
        snprintf((char *)&local_148,100,"%s_%s",(char *)&local_1b0,(char *)&local_280);
      }
      local_80 = 0;
      local_90 = 0;
      local_88 = 0;
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
      snprintf((char *)&local_e0,100,"%s",&local_148);
      local_218 = local_e0;
      local_1f8 = local_c0;
      local_200 = local_c8;
      local_208 = local_d0;
      local_210 = local_d8;
      local_1d8 = local_a0;
      local_1e0 = local_a8;
      local_1e8 = local_b0;
      local_1f0 = local_b8;
      local_1b8 = local_80;
      local_1c0 = local_88;
      local_1c8 = local_90;
      local_1d0 = local_98;
      uVar3 = local_e0;
    }
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((uVar3 & 0xff) == 0) {
      snprintf((char *)&local_148,100,"anime_%s","lvup");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"lvup");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd510(0,param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","lvup");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"lvup");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd430(param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","add");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"add");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd510(0,param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","add");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"add");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd430(param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","add_effort");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"add_effort");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd510(0,param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","add_effort");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"add_effort");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd430(param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","effort");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"effort");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd510(0,param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","effort");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"effort");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd430(param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","emotion");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"emotion");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd430(param_1,&local_e0);
    local_e8 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
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
    if ((char)local_218 == '\0') {
      snprintf((char *)&local_148,100,"anime_%s","emotion_off");
    }
    else {
      snprintf((char *)&local_148,100,"anime_%s_%s",(char *)&local_218,"emotion_off");
    }
    local_e0 = 0xcbf29ce484222645;
    if ((char)local_148 != '\0') {
      uVar3 = local_148 & 0xff;
      local_e0 = 0xcbf29ce484222645;
      pbVar4 = pbVar5;
      do {
        local_e0 = (local_e0 ^ uVar3) * 0x100000001b3;
        bVar1 = *pbVar4;
        uVar3 = (ulong)bVar1;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
    }
    FUN_00ffd010(param_1,&local_e0);
    param3 = param3 + 1;
    if (param3 == 0x1e) {
      return;
    }
  } while( true );
}


