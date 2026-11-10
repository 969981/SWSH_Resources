/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01469cd0; name: FUN_01469cd0
 */


void FUN_01469cd0(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_120;
  ulong local_118;
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
  
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar9 = 0xcbf29ce484222645;
  pcVar4 = (char *)FUN_0152d900(lVar8,*(undefined4 *)(param_1 + 0x838));
  local_b0 = 0;
  local_48 = 0;
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
  snprintf((char *)&local_a8,100,"pane_%s","N_contents_03");
  local_118 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    local_118 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_a8 | 1);
    bVar1 = (byte)local_a8;
    do {
      local_118 = (local_118 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
  }
  if (*pcVar4 == '\x02') {
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
      iVar3 = snprintf((char *)&local_a8,100,"pane_%s","T_contents_03_01");
    }
    else {
      iVar3 = snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)&local_110,"T_contents_03_01");
    }
    if ((byte)local_a8 != 0) {
      pbVar7 = (byte *)((ulong)&local_a8 | 1);
      do {
        uVar9 = (uVar9 ^ (byte)local_a8) * 0x100000001b3;
        local_a8._0_1_ = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while ((byte)local_a8 != 0);
    }
    local_a8 = uVar9;
    iVar3 = FUN_01457550(iVar3);
    uVar2 = (*(int *)(pcVar4 + 8) - iVar3) + (uint)(byte)pcVar4[0x18] * 0xe10;
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar6 = uVar2 / 0xe10;
    if (uVar2 % 0xe10 != 0) {
      uVar6 = uVar2 / 0xe10 + 1;
    }
    FUN_01461a30(param_1,0,uVar6,2);
    local_120 = 0x28c9af26a58e840;
    FUN_014618d0(param_1,&local_a8,&local_120,0);
    lVar10 = *(long *)(param_1 + 0x2b0);
    if (lVar10 == 0) {
      uVar9 = FUN_0167b9f0(0,&local_118);
    }
    else {
      plVar11 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      uVar9 = FUN_0167b9f0(lVar10,&local_118);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if ((uVar9 & 1) != 0) goto joined_r0x01469ff8;
    lVar10 = *(long *)(param_1 + 0x2b0);
    if (lVar10 == 0) {
      FUN_0167b9b0(0,&local_118,1);
      goto joined_r0x01469ff8;
    }
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar5 = 1;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x2b0);
    if (lVar10 == 0) {
      uVar9 = FUN_0167b9f0(0,&local_118);
    }
    else {
      plVar11 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      uVar9 = FUN_0167b9f0(lVar10,&local_118);
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if ((uVar9 & 1) == 0) goto joined_r0x01469ff8;
    lVar10 = *(long *)(param_1 + 0x2b0);
    if (lVar10 == 0) {
      FUN_0167b9b0(0,&local_118,0);
      goto joined_r0x01469ff8;
    }
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar5 = 0;
  }
  FUN_0167b9b0(lVar10,&local_118,uVar5);
  (**(code **)(*plVar11 + 0x18))(plVar11);
joined_r0x01469ff8:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


