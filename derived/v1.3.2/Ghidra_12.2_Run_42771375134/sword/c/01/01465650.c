/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01465650; name: FUN_01465650
 */


void FUN_01465650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_1d0;
  code *local_1c8;
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
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  ulong local_128;
  undefined8 local_120;
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
  
  local_c0 = 0;
  local_58 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uVar7 = 0xcbf29ce484222645;
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
  snprintf((char *)&local_b8,100,"anime_%s","text");
  uVar4 = local_b8 & 0xff;
  local_128 = 0xcbf29ce484222645;
  if ((char)local_b8 != '\0') {
    local_128 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_b8 | 1);
    do {
      local_128 = (local_128 ^ uVar4) * 0x100000001b3;
      bVar1 = *pbVar5;
      uVar4 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd510(0x3f800000,param_1 + 0x100,&local_128);
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
  if ((char)local_120 == '\0') {
    snprintf((char *)&local_b8,100,"pane_%s","T_title_01");
    uVar4 = local_b8;
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_120,"T_title_01");
    uVar4 = local_b8;
  }
  bVar2 = (char)local_b8 != '\0';
  local_b8 = 0xcbf29ce484222645;
  if (bVar2) {
    uVar4 = uVar4 & 0xff;
    local_b8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_b8 | 1);
    do {
      local_b8 = (local_b8 ^ uVar4) * 0x100000001b3;
      bVar1 = *pbVar5;
      uVar4 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  FUN_014618d0(param_1,&local_b8,param_2,1);
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
  if ((char)local_120 == '\0') {
    snprintf((char *)&local_b8,100,"pane_%s","T_title_02");
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_120,"T_title_02");
  }
  if ((char)local_b8 != '\0') {
    local_b8 = local_b8 & 0xff;
    pbVar5 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar7 = (uVar7 ^ local_b8) * 0x100000001b3;
      bVar1 = *pbVar5;
      local_b8 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  local_b8 = uVar7;
  FUN_014618d0(param_1,&local_b8,param_3,0);
  local_148 = *param_4;
  uVar6 = *(undefined8 *)(param_1 + 0x6e0);
  local_140 = param_4[1];
  local_138 = param_4[2];
  local_130 = param_4[3];
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x10))();
  }
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
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  FUN_0168d690(uVar6,&local_148,0,&local_1d0);
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(&local_1b0);
  }
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
  }
  return;
}


