/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfeb10; name: FUN_00cfeb10
 */


ulong FUN_00cfeb10(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte *pbVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
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
  undefined4 local_190;
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
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x5e0) + 0xe0);
  param_2 = param_2 & 0xffffffff;
  local_190 = 0;
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
  local_1f0 = 0;
  uStack_1e8 = 0;
  uVar3 = snprintf((char *)&local_1f0,100,"L_co_date_button_%02d",param_3);
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
  if ((char)local_1f0 == '\0') {
    local_128 = 0;
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
    local_188 = 0;
    local_180 = 0;
  }
  else {
    snprintf((char *)&local_120,100,"%s",&local_1f0);
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
    uVar3 = snprintf((char *)&local_b8,100,"%s",&local_120);
    local_188 = local_b8;
    local_168 = local_98;
    local_170 = local_a0;
    local_178 = local_a8;
    local_180 = local_b0;
    local_148 = local_78;
    local_150 = local_80;
    local_158 = local_88;
    local_160 = local_90;
    local_128 = local_58;
    local_130 = local_60;
    local_138 = local_68;
    local_140 = local_70;
  }
  uVar4 = (ulong)uVar3;
  switch(*(undefined4 *)(lVar8 + param_2 * 0x1c)) {
  case 0:
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
      snprintf((char *)&local_120,100,"anime_%s","switch");
    }
    else {
      snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"switch");
    }
    uVar4 = local_120 & 0xff;
    uVar7 = 0xcbf29ce484222645;
    local_b8 = 0xcbf29ce484222645;
    if ((byte)local_120 != '\0') {
      local_b8 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        local_b8 = (local_b8 ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    FUN_00ffd510(0,param_1 + 0x100,&local_b8);
    FUN_00cf6da0(param_1,lVar8 + param_2 * 0x1c + 4);
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
      snprintf((char *)&local_120,100,"pane_%s","T_co_b_d_00");
    }
    else {
      snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_b_d_00");
    }
    if ((byte)local_120 != 0) {
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        uVar7 = (uVar7 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while ((byte)local_120 != 0);
    }
    local_120 = 0x55891f39e75e396c;
    local_b8 = uVar7;
    break;
  case 1:
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
      snprintf((char *)&local_120,100,"anime_%s","switch");
    }
    else {
      snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"switch");
    }
    uVar4 = local_120 & 0xff;
    uVar7 = 0xcbf29ce484222645;
    local_b8 = 0xcbf29ce484222645;
    if ((byte)local_120 != '\0') {
      local_b8 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        local_b8 = (local_b8 ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    FUN_00ffd510(0,param_1 + 0x100,&local_b8);
    FUN_00cf6e10(param_1,lVar8 + param_2 * 0x1c + 4);
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
      snprintf((char *)&local_120,100,"pane_%s","T_co_b_d_00");
    }
    else {
      snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_b_d_00");
    }
    if ((byte)local_120 != 0) {
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        uVar7 = (uVar7 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while ((byte)local_120 != 0);
    }
    local_120 = 0x55892039e75e3b1f;
    local_b8 = uVar7;
    break;
  case 2:
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
      snprintf((char *)&local_120,100,"anime_%s","switch");
    }
    else {
      snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"switch");
    }
    uVar4 = local_120 & 0xff;
    uVar7 = 0xcbf29ce484222645;
    local_b8 = 0xcbf29ce484222645;
    if ((byte)local_120 != '\0') {
      local_b8 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        local_b8 = (local_b8 ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    FUN_00ffd510(0,param_1 + 0x100,&local_b8);
    FUN_00cf6e10(param_1,lVar8 + param_2 * 0x1c + 4);
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
      snprintf((char *)&local_120,100,"pane_%s","T_co_b_d_00");
    }
    else {
      snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_b_d_00");
    }
    if ((byte)local_120 != 0) {
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        uVar7 = (uVar7 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while ((byte)local_120 != 0);
    }
    local_120 = 0x55892139e75e3cd2;
    local_b8 = uVar7;
    break;
  case 3:
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
      snprintf((char *)&local_120,100,"anime_%s","switch");
    }
    else {
      snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"switch");
    }
    uVar4 = local_120 & 0xff;
    uVar7 = 0xcbf29ce484222645;
    local_b8 = 0xcbf29ce484222645;
    if ((byte)local_120 != '\0') {
      local_b8 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        local_b8 = (local_b8 ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    FUN_00ffd510(0x3f800000,param_1 + 0x100,&local_b8);
    if (*(int *)(lVar8 + param_2 * 0x1c + 0x10) == 0) {
      FUN_00cf6d60(param_1,0,*(undefined4 *)(lVar8 + param_2 * 0x1c + 0x14));
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
        snprintf((char *)&local_120,100,"pane_%s","T_co_b_d_01");
      }
      else {
        snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_b_d_01");
      }
      if ((byte)local_120 != 0) {
        pbVar5 = (byte *)((ulong)&local_120 | 1);
        do {
          uVar7 = (uVar7 ^ (byte)local_120) * 0x100000001b3;
          local_120._0_1_ = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while ((byte)local_120 != 0);
      }
      local_120 = 0xa0ff7a5a056c;
      local_b8 = uVar7;
    }
    else {
      piVar6 = (int *)(lVar8 + param_2 * 0x1c + 0x14);
      iVar1 = *piVar6;
      FUN_00cf6d60(param_1,0);
      if (iVar1 != 0) {
        FUN_00cf6d60(param_1,1,*piVar6);
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
          snprintf((char *)&local_120,100,"pane_%s","T_co_b_d_01");
        }
        else {
          snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_b_d_01");
        }
        if ((byte)local_120 != 0) {
          pbVar5 = (byte *)((ulong)&local_120 | 1);
          do {
            uVar7 = (uVar7 ^ (byte)local_120) * 0x100000001b3;
            local_120._0_1_ = *pbVar5;
            pbVar5 = pbVar5 + 1;
          } while ((byte)local_120 != 0);
        }
        local_120 = 0xa3b9a2ff7a5a08d2;
        local_b8 = uVar7;
        break;
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
        snprintf((char *)&local_120,100,"pane_%s","T_co_b_d_01");
      }
      else {
        snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_b_d_01");
      }
      if ((byte)local_120 != 0) {
        pbVar5 = (byte *)((ulong)&local_120 | 1);
        do {
          uVar7 = (uVar7 ^ (byte)local_120) * 0x100000001b3;
          local_120._0_1_ = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while ((byte)local_120 != 0);
      }
      local_120 = 0xa3ff7a5a0a85;
      local_b8 = uVar7;
    }
    local_120 = local_120 | 0xa3b9000000000000;
    break;
  case 4:
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
      snprintf((char *)&local_120,100,"anime_%s","switch");
    }
    else {
      snprintf((char *)&local_120,100,"anime_%s_%s",(char *)&local_188,"switch");
    }
    uVar4 = local_120 & 0xff;
    uVar7 = 0xcbf29ce484222645;
    local_b8 = 0xcbf29ce484222645;
    if ((byte)local_120 != '\0') {
      local_b8 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        local_b8 = (local_b8 ^ uVar4) * 0x100000001b3;
        bVar2 = *pbVar5;
        uVar4 = (ulong)bVar2;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    FUN_00ffd510(0,param_1 + 0x100,&local_b8);
    FUN_00cf6d80(param_1,0,*(undefined4 *)(lVar8 + param_2 * 0x1c + 0xc));
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
      snprintf((char *)&local_120,100,"pane_%s","T_co_b_d_00");
    }
    else {
      snprintf((char *)&local_120,100,"pane_%s_%s",(char *)&local_188,"T_co_b_d_00");
    }
    if ((byte)local_120 != 0) {
      pbVar5 = (byte *)((ulong)&local_120 | 1);
      do {
        uVar7 = (uVar7 ^ (byte)local_120) * 0x100000001b3;
        local_120._0_1_ = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while ((byte)local_120 != 0);
    }
    local_120 = 0x1c73f394e8af907a;
    local_b8 = uVar7;
    break;
  default:
    goto switchD_00cfec90_default;
  }
  uVar4 = FUN_00cf6fb0(param_1,&local_b8,&local_120);
switchD_00cfec90_default:
  return uVar4;
}


