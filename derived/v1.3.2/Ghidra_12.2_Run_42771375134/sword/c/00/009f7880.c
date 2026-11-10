/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f7880; name: FUN_009f7880
 */


void FUN_009f7880(long param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
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
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
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
  
  local_b0 = 0;
  iVar3 = 0;
  if (*(char *)(param_1 + 0xa58) != '\0') {
    iVar3 = 2;
  }
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
  snprintf((char *)&local_110,100,"L_netbtl_standby_team_%02d",iVar3 + param_2 & 0xff);
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
  if ((char)local_110 == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","team_bg_color");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)&local_110,"team_bg_color");
  }
  uVar4 = local_a8 & 0xff;
  uVar8 = 0xcbf29ce484222645;
  uVar6 = 0xcbf29ce484222645;
  if ((char)local_a8 != '\0') {
    uVar6 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ uVar4) * 0x100000001b3;
      bVar1 = *pbVar5;
      uVar4 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  local_a8 = uVar6;
  FUN_00ffd510((float)param_3,param_1 + 0x100,&local_a8);
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
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
  if ((char)local_110 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","N_btlteam_standby");
    uVar4 = local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)&local_110,"N_btlteam_standby");
    uVar4 = local_a8;
  }
  bVar2 = (char)local_a8 != '\0';
  local_a8 = 0xcbf29ce484222645;
  if (bVar2) {
    uVar4 = uVar4 & 0xff;
    local_a8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      local_a8 = (local_a8 ^ uVar4) * 0x100000001b3;
      bVar1 = *pbVar5;
      uVar4 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  FUN_0167b9b0(lVar7,&local_a8,1);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
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
  if ((char)local_110 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","N_team_standby_icon");
    uVar4 = local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)&local_110,"N_team_standby_icon");
    uVar4 = local_a8;
  }
  bVar2 = (char)local_a8 != '\0';
  local_a8 = 0xcbf29ce484222645;
  if (bVar2) {
    uVar4 = uVar4 & 0xff;
    local_a8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      local_a8 = (local_a8 ^ uVar4) * 0x100000001b3;
      bVar1 = *pbVar5;
      uVar4 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  FUN_0167b9b0(lVar7,&local_a8,1);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
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
  if ((char)local_110 == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_btlteam_bg_07");
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)&local_110,"P_btlteam_bg_07");
  }
  if ((char)local_a8 != '\0') {
    local_a8 = local_a8 & 0xff;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar8 = (uVar8 ^ local_a8) * 0x100000001b3;
      bVar1 = *pbVar5;
      local_a8 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  local_a8 = uVar8;
  FUN_0167b9b0(lVar7,&local_a8,1);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


