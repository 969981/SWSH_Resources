/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a38a00; name: FUN_00a38a00
 */


void FUN_00a38a00(long *param_1,ulong *param_2,char *param_3)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
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
  if (*param_3 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","T_name_00");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param_3,"T_name_00");
  }
  uVar6 = 0xcbf29ce484222645;
  uVar4 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar4 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar4 = (uVar4 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8 != 0);
  }
  *param_2 = uVar4;
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
  if (*param_3 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","T_pp_00");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param_3,"T_pp_00");
  }
  uVar4 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar4 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar4 = (uVar4 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8 != 0);
  }
  param_2[1] = uVar4;
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
  if (*param_3 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","pattern_effect");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_3,"pattern_effect");
  }
  uVar4 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar4 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar4 = (uVar4 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8 != 0);
  }
  param_2[2] = uVar4;
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
  if (*param_3 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","pattern_type");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_3,"pattern_type");
  }
  uVar4 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar4 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar4 = (uVar4 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8 != 0);
  }
  param_2[3] = uVar4;
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
  if (*param_3 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","pp");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",param_3,"pp");
  }
  uVar4 = 0xcbf29ce484222645;
  if ((byte)local_a8 != '\0') {
    uVar2 = local_a8 & 0xff;
    uVar4 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar4 = (uVar4 ^ uVar2) * 0x100000001b3;
      bVar1 = *pbVar3;
      uVar2 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  param_2[4] = uVar4;
  uVar4 = FUN_00ffda40(*param_1,param_3 + 0x68);
  param_2[5] = uVar4;
  lVar5 = *param_1;
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
  if (*param_3 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_iconType_00");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",param_3,"P_iconType_00");
  }
  if ((byte)local_a8 != '\0') {
    local_a8 = local_a8 & 0xff;
    pbVar3 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ local_a8) * 0x100000001b3;
      bVar1 = *pbVar3;
      local_a8 = (ulong)bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  local_a8 = uVar6;
  uVar4 = FUN_0103bd80(*(undefined8 *)(lVar5 + 0x1b0),&local_a8);
  param_2[6] = uVar4;
  return;
}


