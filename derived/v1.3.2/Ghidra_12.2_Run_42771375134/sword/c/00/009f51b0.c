/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f51b0; name: FUN_009f51b0
 */


void FUN_009f51b0(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  int param3;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_180;
  undefined8 local_178 [6];
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
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
  
  local_148 = *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x84);
  uStack_140 = *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x8c);
  param3 = 0;
  do {
    lVar8 = *(long *)(param_1 + 0x2b0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
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
    snprintf((char *)&local_d0,100,"L_pselect_entry_%02d",param3);
    local_d8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
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
    if ((char)local_d0 == '\0') {
      snprintf((char *)&local_138,100,"pane_%s","P_pselect_entry_no");
    }
    else {
      snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_d0,"P_pselect_entry_no");
    }
    local_d0 = 0xcbf29ce484222645;
    if ((byte)local_138 != '\0') {
      uVar4 = local_138 & 0xff;
      local_d0 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)&local_138 | 1);
      do {
        local_d0 = (local_d0 ^ uVar4) * 0x100000001b3;
        bVar3 = *pbVar5;
        uVar4 = (ulong)bVar3;
        pbVar5 = pbVar5 + 1;
      } while (bVar3 != 0);
    }
    FUN_0167b9b0(lVar8,&local_d0,0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    param3 = param3 + 1;
  } while (param3 != 6);
  FUN_00ff86a0(&local_d0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar8 = *(long *)(local_d0 + 0x60);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  local_178[0] = 0xf2ed93c140bc8dcb;
  local_178[1] = 0xf2ed92c140bc8c18;
  local_178[2] = 0xf2ed95c140bc9131;
  local_178[3] = 0xf2ed94c140bc8f7e;
  lVar6 = 0;
  local_178[4] = 0xf2ed97c140bc9497;
  local_178[5] = 0xf2ed96c140bc92e4;
  plVar1 = (long *)(lVar8 + 0x48);
  do {
    bVar3 = *(byte *)((long)&local_148 + lVar6);
    if (bVar3 != 0xff) {
      lVar7 = *(long *)(param_1 + 0x2b0);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
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
      snprintf((char *)&local_d0,100,"L_pselect_entry_%02d",(uint)bVar3);
      local_d8 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
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
      if ((char)local_d0 == '\0') {
        snprintf((char *)&local_138,100,"pane_%s","P_pselect_entry_no");
      }
      else {
        snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_d0,"P_pselect_entry_no");
      }
      local_d0 = 0xcbf29ce484222645;
      if ((byte)local_138 != '\0') {
        uVar4 = local_138 & 0xff;
        local_d0 = 0xcbf29ce484222645;
        pbVar5 = (byte *)((ulong)&local_138 | 1);
        do {
          local_d0 = (local_d0 ^ uVar4) * 0x100000001b3;
          bVar2 = *pbVar5;
          uVar4 = (ulong)bVar2;
          pbVar5 = pbVar5 + 1;
        } while (bVar2 != 0);
      }
      FUN_0167b9b0(lVar7,&local_d0,1);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
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
      snprintf((char *)&local_d0,100,"L_pselect_entry_%02d",(uint)bVar3);
      local_d8 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
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
      if ((char)local_d0 == '\0') {
        snprintf((char *)&local_138,100,"pane_%s","T_pselect_entry_00");
        bVar3 = (byte)local_138;
      }
      else {
        snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_d0,"T_pselect_entry_00");
        bVar3 = (byte)local_138;
      }
      local_d0 = 0xcbf29ce484222645;
      if (bVar3 != 0) {
        local_d0 = 0xcbf29ce484222645;
        pbVar5 = (byte *)((ulong)&local_138 | 1);
        do {
          local_d0 = (local_d0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar5;
          pbVar5 = pbVar5 + 1;
        } while (bVar3 != 0);
      }
      local_180 = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      FUN_008c4e70(param_1 + 0x100,&local_d0,&local_180,local_178 + lVar6,10);
      if (local_180 != 0) {
        (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
        local_180 = 0;
      }
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 6);
  if (lVar8 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}


