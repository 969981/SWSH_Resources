/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a02e0; name: FUN_014a02e0
 */


void FUN_014a02e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 *local_110;
  code *local_108;
  code *local_100;
  undefined1 *local_f8;
  long lStack_f0;
  undefined1 local_e8;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70 [2];
  
  lVar7 = 0;
  lVar8 = 0;
  lVar1 = param_1 + 0x100;
  do {
    puVar2 = PTR_DAT_0272a1a0 + lVar7;
    local_110 = *(undefined1 **)(puVar2 + 8);
    local_70[0] = *(undefined8 *)(PTR_DAT_0272a1a8 + lVar8 * 8);
    FUN_00ff86a0(&local_80,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),5);
    local_78 = *(long *)(local_80 + 0x60);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar1,&local_110,&local_78,local_70,10);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    lVar4 = FUN_00ffda40(lVar1,puVar2);
    pcVar5 = *(code **)(lVar4 + 0x158);
    local_110 = &LAB_014a1840;
    local_108 = FUN_014a19a0;
    local_100 = FUN_014a19b0;
    local_e8 = (undefined1)lVar8;
    local_f8 = &LAB_014a19c0;
    lStack_f0 = param_1;
    if (pcVar5 == (code *)0x0) {
LAB_014a0474:
      (*local_100)(&lStack_f0,lVar4 + 0x170);
      *(undefined1 **)(lVar4 + 0x168) = local_f8;
      *(code **)(lVar4 + 0x158) = local_108;
      *(code **)(lVar4 + 0x160) = local_100;
      *(undefined8 *)(lVar4 + 0x150) = local_110;
      if (*(char *)(param_1 + 0x5da + lVar8) != '\0') goto LAB_014a0444;
LAB_014a04a8:
      FUN_00ffd010(lVar1,puVar2 + 0x20);
      lVar4 = *(long *)(param_1 + 0x2b0);
      if (lVar4 == 0) {
        FUN_0167b9b0(0,puVar2 + 0x10,0);
        pcVar5 = local_108;
      }
      else {
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0167b9b0(lVar4,puVar2 + 0x10,0);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        pcVar5 = local_108;
      }
    }
    else {
      *(undefined8 *)(lVar4 + 0x160) = 0;
      *(undefined8 *)(lVar4 + 0x168) = 0;
      *(undefined8 *)(lVar4 + 0x150) = 0;
      *(undefined8 *)(lVar4 + 0x158) = 0;
      (*pcVar5)(lVar4 + 0x170);
      if (local_100 != (code *)0x0) goto LAB_014a0474;
      if (*(char *)(param_1 + 0x5da + lVar8) == '\0') goto LAB_014a04a8;
LAB_014a0444:
      if (*(short *)(*(long *)(param_1 + 0x5d0) + 0x42) == 0x31b) {
        FUN_00ffd010(lVar1,puVar2 + 0x20);
        pcVar5 = local_108;
      }
      else {
        FUN_00ffd010(lVar1,puVar2 + 0x18);
        pcVar5 = local_108;
      }
    }
    local_108 = pcVar5;
    if (pcVar5 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      (*pcVar5)(&lStack_f0);
    }
    lVar7 = lVar7 + 0x28;
    lVar8 = lVar8 + 1;
  } while (lVar7 != 0xf0);
  lVar7 = FUN_00ffda40(lVar1,&DAT_0216f9f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x5f8);
  *(long *)(param_1 + 0x5f8) = lVar7;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    lVar7 = *(long *)(param_1 + 0x5f8);
  }
  pcVar5 = *(code **)(lVar7 + 0x158);
  local_110 = &LAB_014a19d0;
  local_108 = FUN_014a1a00;
  local_100 = FUN_014a1a10;
  local_f8 = &LAB_014a1a20;
  lStack_f0 = param_1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x160) = 0;
    *(undefined8 *)(lVar7 + 0x168) = 0;
    *(undefined8 *)(lVar7 + 0x150) = 0;
    *(undefined8 *)(lVar7 + 0x158) = 0;
    (*pcVar5)(lVar7 + 0x170);
    if (local_100 == (code *)0x0) goto LAB_014a060c;
  }
  (*local_100)(&lStack_f0,lVar7 + 0x170);
  *(undefined1 **)(lVar7 + 0x168) = local_f8;
  *(code **)(lVar7 + 0x158) = local_108;
  *(code **)(lVar7 + 0x160) = local_100;
  *(undefined8 *)(lVar7 + 0x150) = local_110;
LAB_014a060c:
  local_70[0] = 0x14583075a9c8bb04;
  local_78 = 0x640ec4c0fe970ba0;
  FUN_00ff86a0(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),5);
  local_80 = *(long *)(local_88 + 0x60);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  FUN_008c4e70(lVar1,local_70,&local_80,&local_78,10);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  pcVar5 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar5)(&lStack_f0);
  }
  if (*(short *)(*(long *)(param_1 + 0x5d0) + 0x42) != 0x31c) {
    if ((((*(char *)(param_1 + 0x5e0) == '\0') && (*(char *)(param_1 + 0x5e1) == '\0')) &&
        (*(char *)(param_1 + 0x5e2) == '\0')) &&
       ((*(char *)(param_1 + 0x5e3) == '\0' && (*(char *)(param_1 + 0x5e4) == '\0')))) {
      bVar3 = *(char *)(param_1 + 0x5e5) != '\0';
    }
    else {
      bVar3 = true;
    }
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f8),bVar3);
    local_110 = (undefined1 *)0x600000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_110,bVar3);
  }
  return;
}


