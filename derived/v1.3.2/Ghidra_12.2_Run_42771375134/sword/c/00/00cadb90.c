/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cadb90; name: FUN_00cadb90
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cadb90(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6,undefined8 param_7,byte param_8,undefined8 param_9
                 ,byte param_10,undefined4 param_11)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined *local_188 [4];
  long local_168;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100 [4];
  long local_e0;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  byte local_78 [4];
  byte local_74 [4];
  long local_70 [2];
  
  local_74[0] = param_8 & 1;
  local_78[0] = param_10 & 1;
  FUN_00caf000(local_100,param_7);
  FUN_00caf000(local_188,param_9);
  FUN_00caf180(local_70,param_1,param_4,0);
  lVar7 = local_70[0];
  if ((param_6 & 1) == 0) {
    lVar14 = *param_2;
    lVar4 = 0;
  }
  else {
    FUN_00caf180(local_70,param_1,param_5,0);
    lVar14 = *param_2;
    lVar4 = local_70[0];
  }
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar14 + 0x58);
        lVar8 = FUN_00c72e20();
        while( true ) {
          if (plVar12 == (long *)0x0) goto joined_r0x00cadcac;
          if (plVar12 == (long *)lVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar13 = *piVar1;
        if (iVar13 != iVar15) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar14 + 0x60) != 0) {
            lVar8 = *(long *)(lVar14 + 0x60) + -0x50;
          }
          goto joined_r0x00cadeac;
        }
        iVar15 = iVar13;
        if (iVar13 == 0) goto joined_r0x00cadcac;
      }
      ClearExclusiveLocal();
      iVar15 = iVar13;
    } while (iVar13 != 0);
  }
joined_r0x00cadcac:
  lVar8 = 0;
joined_r0x00cadeac:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(lVar8 + 0x68);
  *(long *)(lVar8 + 0x68) = lVar7;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  lVar14 = *param_2;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar14 + 0x58);
        lVar8 = FUN_00c72e20();
        while( true ) {
          if (plVar12 == (long *)0x0) goto joined_r0x00cadd5c;
          if (plVar12 == (long *)lVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar13 = *piVar1;
        if (iVar13 != iVar15) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = 0;
          if (*(long *)(lVar14 + 0x60) != 0) {
            lVar8 = *(long *)(lVar14 + 0x60) + -0x50;
          }
          goto joined_r0x00cadec4;
        }
        iVar15 = iVar13;
        if (iVar13 == 0) goto joined_r0x00cadd5c;
      }
      ClearExclusiveLocal();
      iVar15 = iVar13;
    } while (iVar13 != 0);
  }
joined_r0x00cadd5c:
  lVar8 = 0;
joined_r0x00cadec4:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(lVar8 + 0x70);
  *(long *)(lVar8 + 0x70) = lVar4;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  if ((lVar7 != 0) && (piVar1 = (int *)(lVar7 + 0x54), *piVar1 != 0)) {
    iVar15 = *piVar1;
    while (iVar13 = iVar15, iVar15 != 0) {
      while( true ) {
        uVar9 = FUN_00cb50a0(*(undefined8 *)(lVar7 + 0x58));
        if ((uVar9 & 1) == 0) goto LAB_00cade28;
        iVar15 = *piVar1;
        if (iVar15 != iVar13) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar7 + 0x60);
          if (lVar14 == 0) goto LAB_00cade28;
          *(undefined1 *)(lVar14 + 0x40) = 0;
          (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
          goto joined_r0x00cade20;
        }
        iVar13 = iVar15;
        if (iVar15 == 0) goto LAB_00cade28;
      }
      ClearExclusiveLocal();
    }
LAB_00cade28:
    DAT_00000090 = 0;
  }
joined_r0x00cade20:
  if ((lVar4 != 0) && (piVar1 = (int *)(lVar4 + 0x54), *piVar1 != 0)) {
    iVar15 = *piVar1;
    while (iVar13 = iVar15, iVar15 != 0) {
      while( true ) {
        plVar12 = *(long **)(lVar4 + 0x58);
        lVar14 = FUN_00ca0490();
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00cadef0;
          if (plVar12 == (long *)lVar14) break;
          plVar12 = (long *)*plVar12;
        }
        iVar15 = *piVar1;
        if (iVar15 != iVar13) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar4 + 0x60);
          if (lVar14 == 0) goto LAB_00cadef0;
          *(undefined1 *)(lVar14 + 0x40) = 0;
          (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
          lVar14 = *param_2;
          goto joined_r0x00cadee8;
        }
        iVar13 = iVar15;
        if (iVar15 == 0) goto LAB_00cadef0;
      }
      ClearExclusiveLocal();
    }
LAB_00cadef0:
    DAT_00000090 = 0;
  }
  lVar14 = *param_2;
joined_r0x00cadee8:
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar15 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar14 + 0x58);
        lVar8 = FUN_00c72e20();
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00cadf88;
          if (plVar12 == (long *)lVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar13 = *piVar1;
        if (iVar13 != iVar15) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            *(undefined4 *)(lVar14 + 0x38) = 2;
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
            goto joined_r0x00cadf80;
          }
          goto LAB_00cadf88;
        }
        iVar15 = iVar13;
        if (iVar13 == 0) goto LAB_00cadf88;
      }
      ClearExclusiveLocal();
      iVar15 = iVar13;
    } while (iVar13 != 0);
  }
LAB_00cadf88:
  _DAT_00000088 = 2;
joined_r0x00cadf80:
  local_190 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_198 = lVar4;
  if (lVar4 == 0) {
    FUN_00cae620(param_1,local_100,local_74,local_188,local_78,&local_190,&local_198);
  }
  else {
    plVar12 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_00cae620(param_1,local_100,local_74,local_188,local_78,&local_190,&local_198);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    local_198 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    local_190 = 0;
  }
  if (local_74[0] == 0) {
    lVar14 = local_1a8;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      local_1a8 = lVar7;
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      FUN_00c9a590(param_1,param_3 & 1,&local_1a8,0,param_11);
      lVar14 = 0;
      if (local_1a8 != 0) {
        (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
        local_1a8 = 0;
        lVar14 = local_1a8;
      }
    }
    lVar8 = 0;
    local_1a8 = lVar14;
    lVar14 = local_70[0];
  }
  else {
    FUN_00caf180(&local_1a0,param_1,local_100,0);
    lVar8 = local_1a0;
    local_70[0] = local_1a0;
    if (local_1a0 != 0) {
      (**(code **)(*(long *)(local_1a0 + 0x48) + 0x10))();
    }
    FUN_00c9a590(param_1,param_3 & 1,local_70,0,param_11);
    lVar14 = 0;
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
      lVar14 = local_70[0];
    }
  }
  local_70[0] = lVar14;
  if (local_78[0] == 0) {
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x54) != 0)) {
      local_1b0 = lVar4;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      FUN_00c9a590(param_1,param_3 & 1,&local_1b0,0,param_11);
      if (local_1b0 != 0) {
        (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
        local_1b0 = 0;
        lVar11 = *param_2;
        lVar14 = 0;
        goto joined_r0x00cae250;
      }
    }
    lVar11 = *param_2;
    lVar14 = 0;
  }
  else {
    FUN_00caf180(&local_1a0,param_1,local_188,0);
    local_70[0] = local_1a0;
    if (local_1a0 != 0) {
      (**(code **)(*(long *)(local_1a0 + 0x48) + 0x10))();
    }
    FUN_00c9a590(param_1,param_3 & 1,local_70,0,param_11);
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
    lVar11 = *param_2;
    lVar14 = local_1a0;
  }
joined_r0x00cae250:
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
    piVar1 = (int *)(lVar11 + 0x54);
    iVar15 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar11 + 0x58);
        lVar10 = FUN_00c72e20();
        while( true ) {
          if (plVar12 == (long *)0x0) goto joined_r0x00cae5d8;
          if (plVar12 == (long *)lVar10) break;
          plVar12 = (long *)*plVar12;
        }
        iVar13 = *piVar1;
        if (iVar13 != iVar15) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar10 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          goto joined_r0x00cae5fc;
        }
        iVar15 = iVar13;
        if (iVar13 == 0) goto joined_r0x00cae5d8;
      }
      ClearExclusiveLocal();
      iVar15 = iVar13;
    } while (iVar13 != 0);
  }
joined_r0x00cae5d8:
  lVar10 = 0;
joined_r0x00cae5fc:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar10 + 0x78);
  *(long *)(lVar10 + 0x78) = lVar8;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
    piVar1 = (int *)(lVar11 + 0x54);
    iVar15 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar11 + 0x58);
        lVar10 = FUN_00c72e20();
        while( true ) {
          if (plVar12 == (long *)0x0) goto joined_r0x00cae318;
          if (plVar12 == (long *)lVar10) break;
          plVar12 = (long *)*plVar12;
        }
        iVar13 = *piVar1;
        if (iVar13 != iVar15) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar10 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          goto joined_r0x00cae614;
        }
        iVar15 = iVar13;
        if (iVar13 == 0) goto joined_r0x00cae318;
      }
      ClearExclusiveLocal();
      iVar15 = iVar13;
    } while (iVar13 != 0);
  }
joined_r0x00cae318:
  lVar10 = 0;
joined_r0x00cae614:
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar10 + 0x80);
  *(long *)(lVar10 + 0x80) = lVar14;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  puVar5 = PTR_DAT_0271c258;
  local_188[0] = PTR_DAT_0271c258 + 0x10;
  if (local_108 != 0) {
    (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
    local_108 = 0;
  }
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
    local_110 = 0;
  }
  if (local_118 != 0) {
    (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
    local_118 = 0;
  }
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = 0;
  }
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    local_128 = 0;
  }
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    local_130 = 0;
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    local_140 = 0;
  }
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  puVar6 = PTR_DAT_0271c260;
  local_188[0] = PTR_DAT_0271c260 + 0x10;
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
    local_168 = 0;
  }
  local_100[0] = puVar5 + 0x10;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  local_100[0] = puVar6 + 0x10;
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  return;
}


