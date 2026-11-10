/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109cc30; name: FUN_0109cc30
 */


void FUN_0109cc30(long param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
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
  undefined8 local_48;
  
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar7 + 0x2e0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar8 = 0xcbf29ce484222645;
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_48 = 0xb53599d09c76addd;
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
  FUN_014ca220(lVar6,0,*param_2,3,0,1);
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
  snprintf((char *)&local_b8,100,"pane_%s","T_ParamTotal_00");
  uVar3 = local_b8 & 0xff;
  uVar5 = 0xcbf29ce484222645;
  if ((char)local_b8 != '\0') {
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
  FUN_0109c460(param_1,&local_b8,&local_48);
  FUN_014ca220(lVar6,0,param_2[1],3,0,1);
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
    snprintf((char *)&local_b8,100,"pane_%s","T_ParamTotal_01");
    uVar3 = local_b8;
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_120,"T_ParamTotal_01");
    uVar3 = local_b8;
  }
  bVar2 = (char)local_b8 != '\0';
  local_b8 = 0xcbf29ce484222645;
  if (bVar2) {
    uVar3 = uVar3 & 0xff;
    local_b8 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_b8 | 1);
    do {
      local_b8 = (local_b8 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  FUN_0109c460(param_1,&local_b8,&local_48);
  FUN_014ca220(lVar6,0,param_2[2],3,0,1);
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
    snprintf((char *)&local_b8,100,"pane_%s","T_ParamTotal_02");
    uVar3 = local_b8;
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_120,"T_ParamTotal_02");
    uVar3 = local_b8;
  }
  bVar2 = (char)local_b8 != '\0';
  local_b8 = 0xcbf29ce484222645;
  if (bVar2) {
    uVar3 = uVar3 & 0xff;
    local_b8 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_b8 | 1);
    do {
      local_b8 = (local_b8 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  FUN_0109c460(param_1,&local_b8,&local_48);
  FUN_014ca220(lVar6,0,param_2[3],3,0,1);
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
    snprintf((char *)&local_b8,100,"pane_%s","T_ParamTotal_03");
    uVar3 = local_b8;
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_120,"T_ParamTotal_03");
    uVar3 = local_b8;
  }
  bVar2 = (char)local_b8 != '\0';
  local_b8 = 0xcbf29ce484222645;
  if (bVar2) {
    uVar3 = uVar3 & 0xff;
    local_b8 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_b8 | 1);
    do {
      local_b8 = (local_b8 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  FUN_0109c460(param_1,&local_b8,&local_48);
  FUN_014ca220(lVar6,0,param_2[4],3,0,1);
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
    snprintf((char *)&local_b8,100,"pane_%s","T_ParamTotal_04");
    uVar3 = local_b8;
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_120,"T_ParamTotal_04");
    uVar3 = local_b8;
  }
  bVar2 = (char)local_b8 != '\0';
  local_b8 = 0xcbf29ce484222645;
  if (bVar2) {
    uVar3 = uVar3 & 0xff;
    local_b8 = 0xcbf29ce484222645;
    pbVar4 = (byte *)((ulong)&local_b8 | 1);
    do {
      local_b8 = (local_b8 ^ uVar3) * 0x100000001b3;
      bVar1 = *pbVar4;
      uVar3 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  FUN_0109c460(param_1,&local_b8,&local_48);
  FUN_014ca220(lVar6,0,param_2[5],3,0,1);
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
    snprintf((char *)&local_b8,100,"pane_%s","T_ParamTotal_05");
  }
  else {
    snprintf((char *)&local_b8,100,"pane_%s_%s",(char *)&local_120,"T_ParamTotal_05");
  }
  if ((char)local_b8 != '\0') {
    local_b8 = local_b8 & 0xff;
    pbVar4 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar8 = (uVar8 ^ local_b8) * 0x100000001b3;
      bVar1 = *pbVar4;
      local_b8 = (ulong)bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
  }
  local_b8 = uVar8;
  FUN_0109c460(param_1,&local_b8,&local_48);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return;
}


