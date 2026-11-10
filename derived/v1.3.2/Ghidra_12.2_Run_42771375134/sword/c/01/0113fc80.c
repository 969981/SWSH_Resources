/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113fc80; name: FUN_0113fc80
 */


void FUN_0113fc80(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined4 local_c8;
  
  lVar3 = param_1 + 0x100;
  FUN_01141c40();
  iVar1 = *(int *)(param_1 + 0x6ac);
  if (*(char *)(param_1 + 0x6b4) == '\0') {
    if (iVar1 == 3) {
      local_160 = *(long *)(param_1 + 0x6c0);
      if (local_160 != 0) {
        (**(code **)(*(long *)(local_160 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar3,&DAT_021659e8,&local_160,&DAT_02165a28,10);
      if (local_160 != 0) {
        (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
        local_160 = 0;
      }
      local_168 = *(long *)(param_1 + 0x6c0);
      if (local_168 != 0) {
        (**(code **)(*(long *)(local_168 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar3,&DAT_021659f8,&local_168,&DAT_02165a10,10);
      if (local_168 != 0) {
        (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
        local_168 = 0;
      }
      local_170 = *(long *)(param_1 + 0x6c0);
      if (local_170 != 0) {
        (**(code **)(*(long *)(local_170 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar3,&DAT_02165a08,&local_170,&DAT_02165a20,10);
      if (local_170 != 0) {
        (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
        local_170 = 0;
      }
      lVar2 = FUN_00ffda40(lVar3,&DAT_021659c8);
      pcVar6 = *(code **)(lVar2 + 0x158);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar2 + 0x160) = 0;
        *(undefined8 *)(lVar2 + 0x168) = 0;
        *(undefined8 *)(lVar2 + 0x150) = 0;
        *(undefined8 *)(lVar2 + 0x158) = 0;
        (*pcVar6)(lVar2 + 0x170);
      }
      lVar2 = FUN_00ffda40(lVar3,&DAT_021659d0);
      pcVar6 = *(code **)(lVar2 + 0x158);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar2 + 0x160) = 0;
        *(undefined8 *)(lVar2 + 0x168) = 0;
        *(undefined8 *)(lVar2 + 0x150) = 0;
        *(undefined8 *)(lVar2 + 0x158) = 0;
        (*pcVar6)(lVar2 + 0x170);
      }
      lVar2 = FUN_00ffda40(lVar3,&DAT_021659d8);
      pcVar6 = *(code **)(lVar2 + 0x158);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar2 + 0x160) = 0;
        *(undefined8 *)(lVar2 + 0x168) = 0;
        *(undefined8 *)(lVar2 + 0x150) = 0;
        *(undefined8 *)(lVar2 + 0x158) = 0;
        (*pcVar6)(lVar2 + 0x170);
      }
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 1) {
          return;
        }
        local_138 = *(long *)(param_1 + 0x6c0);
        if (local_138 != 0) {
          (**(code **)(*(long *)(local_138 + 0x48) + 0x10))();
        }
        FUN_008c4e70(lVar3,&DAT_021659e8,&local_138,&DAT_02165a38,10);
        if (local_138 != 0) {
          (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
          local_138 = 0;
        }
        local_140 = *(long *)(param_1 + 0x6c0);
        if (local_140 != 0) {
          (**(code **)(*(long *)(local_140 + 0x48) + 0x10))();
        }
        FUN_008c4e70(lVar3,&DAT_021659f8,&local_140,&DAT_02165a20,10);
        if (local_140 != 0) {
          (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
          local_140 = 0;
        }
        lVar2 = FUN_00ffda40(lVar3,&DAT_021659c8);
        pcVar6 = *(code **)(lVar2 + 0x158);
        local_c8 = 5;
        local_e0 = FUN_01143750;
        local_f0 = &LAB_011436e0;
        local_e8 = FUN_01143740;
        local_d8 = &LAB_01143760;
        local_d0 = param_1;
        if (pcVar6 == (code *)0x0) {
LAB_011408e4:
          (*local_e0)(&local_d0,lVar2 + 0x170);
          *(undefined1 **)(lVar2 + 0x168) = local_d8;
          *(code **)(lVar2 + 0x158) = local_e8;
          *(code **)(lVar2 + 0x160) = local_e0;
          *(undefined8 *)(lVar2 + 0x150) = local_f0;
        }
        else {
          *(undefined8 *)(lVar2 + 0x160) = 0;
          *(undefined8 *)(lVar2 + 0x168) = 0;
          *(undefined8 *)(lVar2 + 0x150) = 0;
          *(undefined8 *)(lVar2 + 0x158) = 0;
          (*pcVar6)(lVar2 + 0x170);
          if (local_e0 != (code *)0x0) goto LAB_011408e4;
        }
        pcVar6 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (code *)0x0;
          local_d8 = (undefined1 *)0x0;
          local_f0 = (undefined1 *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar6)(&local_d0);
        }
        lVar2 = FUN_00ffda40(lVar3,&DAT_021659d0);
        pcVar6 = *(code **)(lVar2 + 0x158);
        local_c8 = 0;
        local_e0 = FUN_01143750;
        local_d8 = &LAB_01143760;
        local_f0 = &LAB_011436e0;
        local_e8 = FUN_01143740;
        local_d0 = param_1;
        if (pcVar6 == (code *)0x0) {
LAB_01140a30:
          (*local_e0)(&local_d0,lVar2 + 0x170);
          *(undefined1 **)(lVar2 + 0x168) = local_d8;
          *(code **)(lVar2 + 0x158) = local_e8;
          *(code **)(lVar2 + 0x160) = local_e0;
          *(undefined8 *)(lVar2 + 0x150) = local_f0;
        }
        else {
          *(undefined8 *)(lVar2 + 0x160) = 0;
          *(undefined8 *)(lVar2 + 0x168) = 0;
          *(undefined8 *)(lVar2 + 0x150) = 0;
          *(undefined8 *)(lVar2 + 0x158) = 0;
          (*pcVar6)(lVar2 + 0x170);
          if (local_e0 != (code *)0x0) goto LAB_01140a30;
        }
        pcVar6 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (code *)0x0;
          local_d8 = (undefined1 *)0x0;
          local_f0 = (undefined1 *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar6)(&local_d0);
        }
        lVar2 = FUN_00ffda40(lVar3,&DAT_021659d8);
        pcVar6 = *(code **)(lVar2 + 0x158);
        local_c8 = 0;
        puVar5 = (undefined8 *)(lVar2 + 0x150);
        if (pcVar6 == (code *)0x0) goto LAB_01140aac;
LAB_0114077c:
        local_d8 = &LAB_01143760;
        local_e0 = FUN_01143750;
        local_e8 = FUN_01143740;
        local_f0 = &LAB_011436e0;
        lVar2 = lVar2 + 0x170;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        local_d0 = param_1;
        (*pcVar6)(lVar2);
        if (local_e0 != (code *)0x0) goto LAB_01140ab8;
        goto LAB_01140ae4;
      }
      local_148 = *(long *)(param_1 + 0x6c0);
      if (local_148 != 0) {
        (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar3,&DAT_021659e8,&local_148,&DAT_02165a28,10);
      if (local_148 != 0) {
        (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
        local_148 = 0;
      }
      local_150 = *(long *)(param_1 + 0x6c0);
      if (local_150 != 0) {
        (**(code **)(*(long *)(local_150 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar3,&DAT_021659f8,&local_150,&DAT_02165a10,10);
      if (local_150 != 0) {
        (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
        local_150 = 0;
      }
      local_158 = *(long *)(param_1 + 0x6c0);
      if (local_158 != 0) {
        (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
      }
      FUN_008c4e70(lVar3,&DAT_02165a08,&local_158,&DAT_02165a20,10);
      if (local_158 != 0) {
        (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
        local_158 = 0;
      }
      lVar2 = FUN_00ffda40(lVar3,&DAT_021659c8);
      pcVar6 = *(code **)(lVar2 + 0x158);
      local_c8 = 2;
      local_e0 = FUN_01143750;
      local_f0 = &LAB_011436e0;
      local_e8 = FUN_01143740;
      local_d8 = &LAB_01143760;
      local_d0 = param_1;
      if (pcVar6 == (code *)0x0) {
LAB_01140988:
        (*local_e0)(&local_d0,lVar2 + 0x170);
        *(undefined1 **)(lVar2 + 0x168) = local_d8;
        *(code **)(lVar2 + 0x158) = local_e8;
        *(code **)(lVar2 + 0x160) = local_e0;
        *(undefined8 *)(lVar2 + 0x150) = local_f0;
      }
      else {
        *(undefined8 *)(lVar2 + 0x160) = 0;
        *(undefined8 *)(lVar2 + 0x168) = 0;
        *(undefined8 *)(lVar2 + 0x150) = 0;
        *(undefined8 *)(lVar2 + 0x158) = 0;
        (*pcVar6)(lVar2 + 0x170);
        if (local_e0 != (code *)0x0) goto LAB_01140988;
      }
      pcVar6 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (code *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined1 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar6)(&local_d0);
      }
      lVar2 = FUN_00ffda40(lVar3,&DAT_021659d0);
      pcVar6 = *(code **)(lVar2 + 0x158);
      local_e0 = FUN_01143750;
      local_c8 = 1;
      local_d8 = &LAB_01143760;
      local_f0 = &LAB_011436e0;
      local_e8 = FUN_01143740;
      local_d0 = param_1;
      if (pcVar6 == (code *)0x0) {
LAB_01140bb0:
        (*local_e0)(&local_d0,lVar2 + 0x170);
        *(undefined1 **)(lVar2 + 0x168) = local_d8;
        *(code **)(lVar2 + 0x158) = local_e8;
        *(code **)(lVar2 + 0x160) = local_e0;
        *(undefined8 *)(lVar2 + 0x150) = local_f0;
      }
      else {
        *(undefined8 *)(lVar2 + 0x160) = 0;
        *(undefined8 *)(lVar2 + 0x168) = 0;
        *(undefined8 *)(lVar2 + 0x150) = 0;
        *(undefined8 *)(lVar2 + 0x158) = 0;
        (*pcVar6)(lVar2 + 0x170);
        if (local_e0 != (code *)0x0) goto LAB_01140bb0;
      }
      pcVar6 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (code *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined1 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar6)(&local_d0);
      }
      lVar2 = FUN_00ffda40(lVar3,&DAT_021659d8);
      pcVar6 = *(code **)(lVar2 + 0x158);
      local_d8 = &LAB_01143760;
      local_c8 = 0;
      local_f0 = &LAB_011436e0;
      local_e8 = FUN_01143740;
      local_e0 = FUN_01143750;
      local_d0 = param_1;
      if (pcVar6 == (code *)0x0) {
LAB_01140c54:
        (*local_e0)(&local_d0,lVar2 + 0x170);
        *(undefined1 **)(lVar2 + 0x168) = local_d8;
        *(code **)(lVar2 + 0x158) = local_e8;
        *(code **)(lVar2 + 0x160) = local_e0;
        *(undefined8 *)(lVar2 + 0x150) = local_f0;
      }
      else {
        *(undefined8 *)(lVar2 + 0x160) = 0;
        *(undefined8 *)(lVar2 + 0x168) = 0;
        *(undefined8 *)(lVar2 + 0x150) = 0;
        *(undefined8 *)(lVar2 + 0x158) = 0;
        (*pcVar6)(lVar2 + 0x170);
        if (local_e0 != (code *)0x0) goto LAB_01140c54;
      }
      pcVar6 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (code *)0x0;
        local_d8 = (undefined1 *)0x0;
        local_f0 = (undefined1 *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar6)(&local_d0);
      }
    }
    lVar2 = FUN_00ffda40(lVar3,&DAT_021659e0);
    pcVar6 = *(code **)(lVar2 + 0x158);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      (*pcVar6)(lVar2 + 0x170);
    }
LAB_01140cc4:
    uVar4 = FUN_00ffdd70(lVar3,&DAT_02165820);
    puVar5 = &DAT_02a63b28;
    goto LAB_01140cdc;
  }
  if (iVar1 == 3) {
    local_130 = *(long *)(param_1 + 0x6c0);
    if (local_130 != 0) {
      (**(code **)(*(long *)(local_130 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar3,&DAT_021659e8,&local_130,&DAT_02165a30,10);
    if (local_130 != 0) {
      (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      local_130 = 0;
    }
    lVar2 = FUN_00ffda40(lVar3,&DAT_021659c8);
    pcVar6 = *(code **)(lVar2 + 0x158);
    local_c8 = 3;
    local_f0 = &LAB_011436e0;
    local_e8 = FUN_01143740;
    local_e0 = FUN_01143750;
    local_d8 = &LAB_01143760;
    local_d0 = param_1;
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      (*pcVar6)(lVar2 + 0x170);
      if (local_e0 == (code *)0x0) goto LAB_011405a8;
    }
    (*local_e0)(&local_d0,lVar2 + 0x170);
    *(undefined1 **)(lVar2 + 0x168) = local_d8;
    *(code **)(lVar2 + 0x158) = local_e8;
    *(code **)(lVar2 + 0x160) = local_e0;
    *(undefined8 *)(lVar2 + 0x150) = local_f0;
LAB_011405a8:
    pcVar6 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar6)(&local_d0);
    }
    lVar2 = FUN_00ffda40(lVar3,&DAT_021659d0);
    pcVar6 = *(code **)(lVar2 + 0x158);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      (*pcVar6)(lVar2 + 0x170);
    }
    lVar2 = FUN_00ffda40(lVar3,&DAT_021659d8);
    pcVar6 = *(code **)(lVar2 + 0x158);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      (*pcVar6)(lVar2 + 0x170);
    }
    lVar3 = FUN_00ffda40(lVar3,&DAT_021659e0);
    pcVar6 = *(code **)(lVar3 + 0x158);
    if (pcVar6 == (code *)0x0) {
      return;
    }
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x158) = 0;
    (*pcVar6)(lVar3 + 0x170);
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      return;
    }
    local_f8 = *(long *)(param_1 + 0x6c0);
    if (local_f8 != 0) {
      (**(code **)(*(long *)(local_f8 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar3,&DAT_021659e8,&local_f8,&DAT_021659f0,10);
    if (local_f8 != 0) {
      (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
      local_f8 = 0;
    }
    local_100 = *(long *)(param_1 + 0x6c0);
    if (local_100 != 0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar3,&DAT_021659f8,&local_100,&DAT_02165a00,10);
    if (local_100 != 0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
      local_100 = 0;
    }
    local_108 = *(long *)(param_1 + 0x6c0);
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar3,&DAT_02165a08,&local_108,&DAT_02165a10,10);
    if (local_108 != 0) {
      (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
      local_108 = 0;
    }
    local_110 = *(long *)(param_1 + 0x6c0);
    if (local_110 != 0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar3,&DAT_02165a18,&local_110,&DAT_02165a20,10);
    if (local_110 != 0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
      local_110 = 0;
    }
    lVar2 = FUN_00ffda40(lVar3,&DAT_021659c8);
    pcVar6 = *(code **)(lVar2 + 0x158);
    local_c8 = 4;
    local_e0 = FUN_01143750;
    local_f0 = &LAB_011436e0;
    local_e8 = FUN_01143740;
    local_d8 = &LAB_01143760;
    local_d0 = param_1;
    if (pcVar6 == (code *)0x0) {
LAB_011404d4:
      (*local_e0)(&local_d0,lVar2 + 0x170);
      *(undefined1 **)(lVar2 + 0x168) = local_d8;
      *(code **)(lVar2 + 0x158) = local_e8;
      *(code **)(lVar2 + 0x160) = local_e0;
      *(undefined8 *)(lVar2 + 0x150) = local_f0;
    }
    else {
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      (*pcVar6)(lVar2 + 0x170);
      if (local_e0 != (code *)0x0) goto LAB_011404d4;
    }
    pcVar6 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar6)(&local_d0);
    }
    lVar2 = FUN_00ffda40(lVar3,&DAT_021659d0);
    pcVar6 = *(code **)(lVar2 + 0x158);
    local_e0 = FUN_01143750;
    local_c8 = 3;
    local_d8 = &LAB_01143760;
    local_f0 = &LAB_011436e0;
    local_e8 = FUN_01143740;
    local_d0 = param_1;
    if (pcVar6 == (code *)0x0) {
LAB_011406fc:
      (*local_e0)(&local_d0,lVar2 + 0x170);
      *(undefined1 **)(lVar2 + 0x168) = local_d8;
      *(code **)(lVar2 + 0x158) = local_e8;
      *(code **)(lVar2 + 0x160) = local_e0;
      *(undefined8 *)(lVar2 + 0x150) = local_f0;
    }
    else {
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      (*pcVar6)(lVar2 + 0x170);
      if (local_e0 != (code *)0x0) goto LAB_011406fc;
    }
    pcVar6 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar6)(&local_d0);
    }
    lVar2 = FUN_00ffda40(lVar3,&DAT_021659d8);
    pcVar6 = *(code **)(lVar2 + 0x158);
    local_c8 = 1;
    puVar5 = (undefined8 *)(lVar2 + 0x150);
    if (pcVar6 != (code *)0x0) goto LAB_0114077c;
LAB_01140aac:
    local_d8 = &LAB_01143760;
    local_e0 = FUN_01143750;
    local_e8 = FUN_01143740;
    local_f0 = &LAB_011436e0;
    lVar2 = lVar2 + 0x170;
    local_d0 = param_1;
LAB_01140ab8:
    (*local_e0)(&local_d0,lVar2);
    puVar5[3] = local_d8;
    puVar5[1] = local_e8;
    puVar5[2] = local_e0;
    *puVar5 = local_f0;
LAB_01140ae4:
    pcVar6 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar6)(&local_d0);
    }
    lVar2 = FUN_00ffda40(lVar3,&DAT_021659e0);
    pcVar6 = *(code **)(lVar2 + 0x158);
    local_d8 = &LAB_01143760;
    local_c8 = 0;
    local_f0 = &LAB_011436e0;
    local_e8 = FUN_01143740;
    local_e0 = FUN_01143750;
    local_d0 = param_1;
    if (pcVar6 == (code *)0x0) {
LAB_01140b5c:
      (*local_e0)(&local_d0,lVar2 + 0x170);
      *(undefined1 **)(lVar2 + 0x168) = local_d8;
      *(code **)(lVar2 + 0x158) = local_e8;
      *(code **)(lVar2 + 0x160) = local_e0;
      *(undefined8 *)(lVar2 + 0x150) = local_f0;
    }
    else {
      *(undefined8 *)(lVar2 + 0x160) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x150) = 0;
      *(undefined8 *)(lVar2 + 0x158) = 0;
      (*pcVar6)(lVar2 + 0x170);
      if (local_e0 != (code *)0x0) goto LAB_01140b5c;
    }
    pcVar6 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar6)(&local_d0);
    }
    goto LAB_01140cc4;
  }
  local_118 = *(long *)(param_1 + 0x6c0);
  if (local_118 != 0) {
    (**(code **)(*(long *)(local_118 + 0x48) + 0x10))();
  }
  FUN_008c4e70(lVar3,&DAT_021659e8,&local_118,&DAT_02165a28,10);
  if (local_118 != 0) {
    (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
    local_118 = 0;
  }
  local_120 = *(long *)(param_1 + 0x6c0);
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x10))();
  }
  FUN_008c4e70(lVar3,&DAT_021659f8,&local_120,&DAT_02165a10,10);
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = 0;
  }
  local_128 = *(long *)(param_1 + 0x6c0);
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x10))();
  }
  FUN_008c4e70(lVar3,&DAT_02165a08,&local_128,&DAT_02165a20,10);
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    local_128 = 0;
  }
  lVar2 = FUN_00ffda40(lVar3,&DAT_021659c8);
  pcVar6 = *(code **)(lVar2 + 0x158);
  local_c8 = 2;
  local_e0 = FUN_01143750;
  local_f0 = &LAB_011436e0;
  local_e8 = FUN_01143740;
  local_d8 = &LAB_01143760;
  local_d0 = param_1;
  if (pcVar6 == (code *)0x0) {
LAB_01140654:
    (*local_e0)(&local_d0,lVar2 + 0x170);
    *(undefined1 **)(lVar2 + 0x168) = local_d8;
    *(code **)(lVar2 + 0x158) = local_e8;
    *(code **)(lVar2 + 0x160) = local_e0;
    *(undefined8 *)(lVar2 + 0x150) = local_f0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar6)(lVar2 + 0x170);
    if (local_e0 != (code *)0x0) goto LAB_01140654;
  }
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar6)(&local_d0);
  }
  lVar2 = FUN_00ffda40(lVar3,&DAT_021659d0);
  pcVar6 = *(code **)(lVar2 + 0x158);
  local_e0 = FUN_01143750;
  local_c8 = 1;
  local_d8 = &LAB_01143760;
  local_f0 = &LAB_011436e0;
  local_e8 = FUN_01143740;
  local_d0 = param_1;
  if (pcVar6 == (code *)0x0) {
LAB_011407a8:
    (*local_e0)(&local_d0,lVar2 + 0x170);
    *(undefined1 **)(lVar2 + 0x168) = local_d8;
    *(code **)(lVar2 + 0x158) = local_e8;
    *(code **)(lVar2 + 0x160) = local_e0;
    *(undefined8 *)(lVar2 + 0x150) = local_f0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar6)(lVar2 + 0x170);
    if (local_e0 != (code *)0x0) goto LAB_011407a8;
  }
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar6)(&local_d0);
  }
  lVar2 = FUN_00ffda40(lVar3,&DAT_021659d8);
  pcVar6 = *(code **)(lVar2 + 0x158);
  local_d8 = &LAB_01143760;
  local_c8 = 0;
  local_f0 = &LAB_011436e0;
  local_e8 = FUN_01143740;
  local_e0 = FUN_01143750;
  local_d0 = param_1;
  if (pcVar6 == (code *)0x0) {
LAB_0114084c:
    (*local_e0)(&local_d0,lVar2 + 0x170);
    *(undefined1 **)(lVar2 + 0x168) = local_d8;
    *(code **)(lVar2 + 0x158) = local_e8;
    *(code **)(lVar2 + 0x160) = local_e0;
    *(undefined8 *)(lVar2 + 0x150) = local_f0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar6)(lVar2 + 0x170);
    if (local_e0 != (code *)0x0) goto LAB_0114084c;
  }
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar6)(&local_d0);
  }
  lVar2 = FUN_00ffda40(lVar3,&DAT_021659e0);
  pcVar6 = *(code **)(lVar2 + 0x158);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar6)(lVar2 + 0x170);
  }
  uVar4 = FUN_00ffdd70(lVar3,&DAT_02165820);
  puVar5 = &DAT_02a63b38;
LAB_01140cdc:
  FUN_016b7990(uVar4,puVar5,1,0);
  return;
}


