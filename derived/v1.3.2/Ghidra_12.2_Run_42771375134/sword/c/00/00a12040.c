/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a12040; name: FUN_00a12040
 */


int FUN_00a12040(long param_1,char *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar8 = *(long *)(param_1 + 0x10);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar9 = 0xcbf29ce484222645;
  local_78 = 0;
  uStack_70 = 0;
  uVar6 = 0xcbf29ce484222645;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  if (*param_2 != '\0') {
    snprintf((char *)&local_a8,100,"pane_%s",param_2);
    uVar6 = 0xcbf29ce484222645;
    if ((byte)local_a8 != 0) {
      uVar6 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&local_a8 | 1);
      do {
        uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
        local_a8._0_1_ = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while ((byte)local_a8 != 0);
    }
  }
  local_a8 = uVar6;
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar8 + 0x1b0),&local_a8);
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  if (*(int *)(param_2 + 100) != -1) {
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
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
    if (*param_2 == '\0') {
      snprintf((char *)&local_a8,100,"pane_%s","P_pokeIcon_00");
      uVar6 = local_a8;
    }
    else {
      snprintf((char *)&local_a8,100,"pane_%s_%s",param_2,"P_pokeIcon_00");
      uVar6 = local_a8;
    }
    bVar2 = (byte)local_a8 != '\0';
    local_a8 = 0xcbf29ce484222645;
    if (bVar2) {
      uVar6 = uVar6 & 0xff;
      local_a8 = 0xcbf29ce484222645;
      pbVar7 = (byte *)((ulong)&local_a8 | 1);
      do {
        local_a8 = (local_a8 ^ uVar6) * 0x100000001b3;
        bVar1 = *pbVar7;
        uVar6 = (ulong)bVar1;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
    }
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar8 + 0x1b0),&local_a8);
    lVar8 = *(long *)(lVar8 + 0x3c8) + (ulong)*(uint *)(param_2 + 100) * 0x3e0;
    *(long *)(param_1 + 0x88) = lVar8;
    uVar5 = FUN_00ff93d0(param_1);
    FUN_0168b110(lVar8,uVar5,uVar4,0);
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","HP_max");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"HP_max");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x90) = uVar6;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","HP_half");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"HP_half");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x98) = uVar6;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","HP_low");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"HP_low");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0xa0) = uVar6;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","HP_zero");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"HP_zero");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0xa8) = uVar6;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","HP_sick");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"HP_sick");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0xb0) = uVar6;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","color_normal");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"color_normal");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0xb8) = uVar6;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","color_inactive");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"color_inactive");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0xc0) = uVar6;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","color_g");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"color_g");
  }
  uVar6 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 200) = uVar6;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
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
  if (*param_2 == '\0') {
    iVar3 = snprintf((char *)&local_a8,100,"anime_%s","color_c");
  }
  else {
    iVar3 = snprintf((char *)&local_a8,100,"anime_%s_%s",param_2,"color_c");
  }
  if ((byte)local_a8 != 0) {
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar9 = (uVar9 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0xd0) = uVar9;
  return iVar3;
}


