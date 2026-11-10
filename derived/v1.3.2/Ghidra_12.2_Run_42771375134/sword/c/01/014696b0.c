/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014696b0; name: FUN_014696b0
 */


void FUN_014696b0(long param_1,int param_2)

{
  char *pcVar1;
  ulong uVar2;
  byte *pbVar3;
  int param3;
  long lVar4;
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
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
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
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
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
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  local_140 = 0;
  param3 = 0;
  local_150 = 0;
  uStack_148 = 0;
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
  do {
    local_210 = 0;
    local_220 = 0;
    uStack_218 = 0;
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
    snprintf((char *)&local_270,100,"P_star_%02d",param3);
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    if ((char)local_1a0 == '\0') {
      if ((char)local_270 != '\0') {
        pcVar1 = (char *)&local_270;
        goto LAB_014697b4;
      }
      local_1a8 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
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
      lVar4 = *(long *)(param_1 + 0x2b0);
      if (param_2 <= param3) goto LAB_01469924;
LAB_01469864:
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      uVar2 = 0xcbf29ce484222645;
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      if ((char)local_208 != '\0') {
        snprintf((char *)&local_d0,100,"pane_%s",(char *)&local_208);
        uVar2 = 0xcbf29ce484222645;
        if ((byte)local_d0 != 0) {
          uVar2 = 0xcbf29ce484222645;
          pbVar3 = (byte *)((ulong)&local_d0 | 1);
          do {
            uVar2 = (uVar2 ^ (byte)local_d0) * 0x100000001b3;
            local_d0._0_1_ = *pbVar3;
            pbVar3 = pbVar3 + 1;
          } while ((byte)local_d0 != 0);
        }
      }
      local_d0 = uVar2;
      FUN_0167b9b0(lVar4,&local_d0,1);
    }
    else {
      pcVar1 = (char *)&local_1a0;
      if ((char)local_270 == '\0') {
LAB_014697b4:
        snprintf((char *)&local_d0,100,"%s",pcVar1);
      }
      else {
        snprintf((char *)&local_d0,100,"%s_%s",(char *)&local_1a0,(char *)&local_270);
      }
      local_d8 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_108 = 0;
      local_100 = 0;
      local_118 = 0;
      local_110 = 0;
      local_128 = 0;
      local_120 = 0;
      local_138 = 0;
      local_130 = 0;
      snprintf((char *)&local_138,100,"%s",&local_d0);
      local_208 = local_138;
      local_1e8 = local_118;
      local_1f0 = local_120;
      local_1f8 = local_128;
      local_200 = local_130;
      local_1c8 = local_f8;
      local_1d0 = local_100;
      local_1d8 = local_108;
      local_1e0 = local_110;
      local_1a8 = local_d8;
      local_1b0 = local_e0;
      local_1b8 = local_e8;
      local_1c0 = local_f0;
      lVar4 = *(long *)(param_1 + 0x2b0);
      if (param3 < param_2) goto LAB_01469864;
LAB_01469924:
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      uVar2 = 0xcbf29ce484222645;
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      if ((char)local_208 != '\0') {
        snprintf((char *)&local_d0,100,"pane_%s",(char *)&local_208);
        uVar2 = 0xcbf29ce484222645;
        if ((byte)local_d0 != 0) {
          uVar2 = 0xcbf29ce484222645;
          pbVar3 = (byte *)((ulong)&local_d0 | 1);
          do {
            uVar2 = (uVar2 ^ (byte)local_d0) * 0x100000001b3;
            local_d0._0_1_ = *pbVar3;
            pbVar3 = pbVar3 + 1;
          } while ((byte)local_d0 != 0);
        }
      }
      local_d0 = uVar2;
      FUN_0167b9b0(lVar4,&local_d0,0);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    param3 = param3 + 1;
    if (param3 == 9) {
      return;
    }
  } while( true );
}


