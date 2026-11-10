/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfd080; name: FUN_00cfd080
 */


void FUN_00cfd080(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_128;
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
  
  *(undefined4 *)(param_1 + 0x818) = 1;
  pcVar5 = *(code **)(param_1 + 0x608);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x610) = 0;
    *(undefined8 *)(param_1 + 0x618) = 0;
    *(undefined8 *)(param_1 + 0x600) = 0;
    *(undefined8 *)(param_1 + 0x608) = 0;
    (*pcVar5)(param_1 + 0x620);
  }
  if ((code *)param_5[2] != (code *)0x0) {
    (*(code *)param_5[2])(param_5 + 4,param_1 + 0x620);
    uVar1 = *param_5;
    uVar2 = param_5[1];
    uVar3 = param_5[3];
    *(undefined8 *)(param_1 + 0x610) = param_5[2];
    *(undefined8 *)(param_1 + 0x618) = uVar3;
    *(undefined8 *)(param_1 + 0x600) = uVar1;
    *(undefined8 *)(param_1 + 0x608) = uVar2;
  }
  pcVar5 = *(code **)(param_1 + 0x708);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x710) = 0;
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined8 *)(param_1 + 0x708) = 0;
    (*pcVar5)(param_1 + 0x720);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x720);
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[3];
    *(undefined8 *)(param_1 + 0x710) = param_4[2];
    *(undefined8 *)(param_1 + 0x718) = uVar3;
    *(undefined8 *)(param_1 + 0x700) = uVar1;
    *(undefined8 *)(param_1 + 0x708) = uVar2;
  }
  local_c0 = 0;
  local_58 = 0;
  uVar9 = 0xcbf29ce484222645;
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
  snprintf((char *)&local_b8,100,"anime_%s","switch");
  uVar6 = local_b8 & 0xff;
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_b8 != '\0') {
    uVar8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar8 = (uVar8 ^ uVar6) * 0x100000001b3;
      bVar4 = *pbVar7;
      uVar6 = (ulong)bVar4;
      pbVar7 = pbVar7 + 1;
    } while (bVar4 != 0);
  }
  local_b8 = uVar8;
  FUN_00ffd510(0x3f800000,param_1 + 0x100,&local_b8);
  FUN_00cf6ec0(param_1,param_2,param_3);
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
    snprintf((char *)&local_b8,100,"pane_%s","T_co_date_00");
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_120,"T_co_date_00");
  }
  if ((byte)local_b8 != 0) {
    pbVar7 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar9 = (uVar9 ^ (byte)local_b8) * 0x100000001b3;
      local_b8._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_b8 != 0);
  }
  local_128 = 0x55891d39e75e3606;
  local_b8 = uVar9;
  FUN_00cf6fb0(param_1,&local_b8,&local_128);
  FUN_00cfd2e0(param_1);
  return;
}


