/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d65930; name: FUN_00d65930
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d65930(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  byte *pbVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long local_a8;
  long local_a0;
  long local_98;
  undefined4 local_8c;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined4 local_64;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  
  if (*(char *)(param_3 + 0x40e) != '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x150);
    uVar11 = *(undefined8 *)(param_1 + 0x90);
    (**(code **)(**(long **)(param_1 + 0x158) + 0x10))(&local_58);
    local_50 = local_58;
    local_58 = 0;
    local_60 = *(undefined8 *)PTR_PTR_0271e248;
    local_64 = 0;
    FUN_00d66760(&local_48,uVar6,uVar11,&local_50,&local_60,&local_64,param_2);
    if (*(long *)(param_1 + 0x160) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x160) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
    lVar12 = local_48;
    local_48 = 0;
    *(long *)(param_1 + 0x160) = lVar12;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    puVar4 = PTR_DAT_0271ce48;
    lVar12 = *(long *)(param_1 + 0x160);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
      piVar1 = (int *)(lVar12 + 0x54);
      pbVar9 = PTR_DAT_0271ce40;
      iVar8 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar12 + 0x58);
          if (((*pbVar9 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ce40), pbVar9 = PTR_DAT_0271ce40, iVar5 != 0))
          {
            uVar6 = FUN_01455eb0();
            *(undefined8 *)puVar4 = uVar6;
            __cxa_guard_release(PTR_DAT_0271ce40);
            pbVar9 = PTR_DAT_0271ce40;
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00d65aec;
            if (plVar10 == (long *)puVar4) break;
            plVar10 = (long *)*plVar10;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar5;
          if (iVar5 == 0) goto LAB_00d65aec;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x60);
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x50) = param_1;
            (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
            goto LAB_00d65af4;
          }
          break;
        }
        iVar8 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00d65aec:
    _DAT_000000a0 = param_1;
  }
LAB_00d65af4:
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  (**(code **)(**(long **)(param_1 + 0x158) + 0x10))(&local_58);
  local_70 = local_58;
  puVar4 = PTR_PTR_0271e248;
  local_58 = 0;
  local_60 = *(undefined8 *)PTR_PTR_0271e248;
  local_64 = 1;
  FUN_00d66760(&local_48,uVar6,uVar11,&local_70,&local_60,&local_64,param_2);
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  lVar12 = local_48;
  local_48 = 0;
  *(long *)(param_1 + 0x168) = lVar12;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar12 = *(long *)(param_1 + 0x168);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    puVar7 = PTR_DAT_0271ce48;
    pbVar9 = PTR_DAT_0271ce40;
    iVar8 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar12 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ce40), pbVar9 = PTR_DAT_0271ce40,
           puVar7 = PTR_DAT_0271ce48, iVar5 != 0)) {
          uVar6 = FUN_01455eb0();
          *(undefined8 *)PTR_DAT_0271ce48 = uVar6;
          __cxa_guard_release(PTR_DAT_0271ce40);
          pbVar9 = PTR_DAT_0271ce40;
          puVar7 = PTR_DAT_0271ce48;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00d65ca8;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00d65ca8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x50) = param_1;
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
          goto LAB_00d65cb0;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00d65ca8:
  _DAT_000000a0 = param_1;
LAB_00d65cb0:
  local_64 = 2;
  if (*(char *)(param_3 + 0x40c) != '\0') {
    local_64 = 4;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  (**(code **)(**(long **)(param_1 + 0x158) + 0x10))(&local_58);
  local_78 = local_58;
  local_60 = *(undefined8 *)puVar4;
  local_58 = 0;
  FUN_00d66a00(&local_48,uVar6,uVar11,&local_78,&local_60,&local_64,param_2);
  if (*(long *)(param_1 + 0x170) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x170) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  lVar12 = local_48;
  local_48 = 0;
  *(long *)(param_1 + 0x170) = lVar12;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar12 = *(long *)(param_1 + 0x170);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    puVar7 = PTR_DAT_0271ce48;
    pbVar9 = PTR_DAT_0271ce40;
    iVar8 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar12 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ce40), pbVar9 = PTR_DAT_0271ce40,
           puVar7 = PTR_DAT_0271ce48, iVar5 != 0)) {
          uVar6 = FUN_01455eb0();
          *(undefined8 *)PTR_DAT_0271ce48 = uVar6;
          __cxa_guard_release(PTR_DAT_0271ce40);
          pbVar9 = PTR_DAT_0271ce40;
          puVar7 = PTR_DAT_0271ce48;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00d65e68;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00d65e68;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x50) = param_1;
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
          goto LAB_00d65e70;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00d65e68:
  _DAT_000000a0 = param_1;
LAB_00d65e70:
  local_64 = 5;
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  (**(code **)(**(long **)(param_1 + 0x158) + 0x10))(&local_58);
  local_80 = local_58;
  local_60 = *(undefined8 *)puVar4;
  local_58 = 0;
  FUN_00d66a00(&local_48,uVar6,uVar11,&local_80,&local_60,&local_64,param_2);
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  lVar12 = local_48;
  local_48 = 0;
  *(long *)(param_1 + 0x178) = lVar12;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar12 = *(long *)(param_1 + 0x178);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    puVar7 = PTR_DAT_0271ce48;
    pbVar9 = PTR_DAT_0271ce40;
    iVar8 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar12 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ce40), pbVar9 = PTR_DAT_0271ce40,
           puVar7 = PTR_DAT_0271ce48, iVar5 != 0)) {
          uVar6 = FUN_01455eb0();
          *(undefined8 *)PTR_DAT_0271ce48 = uVar6;
          __cxa_guard_release(PTR_DAT_0271ce40);
          pbVar9 = PTR_DAT_0271ce40;
          puVar7 = PTR_DAT_0271ce48;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00d66018;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00d66018;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x50) = param_1;
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
          goto LAB_00d66020;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00d66018:
  _DAT_000000a0 = param_1;
LAB_00d66020:
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  (**(code **)(**(long **)(param_1 + 0x158) + 0x10))(&local_58);
  local_60 = *(undefined8 *)puVar4;
  local_88 = local_58;
  local_58 = 0;
  local_8c = 1;
  FUN_00d66760(&local_48,uVar6,uVar11,&local_88,&local_60,&local_8c,param_2);
  if (*(long *)(param_1 + 0x180) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x180) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  lVar12 = local_48;
  local_48 = 0;
  *(long *)(param_1 + 0x180) = lVar12;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar12 = *(long *)(param_1 + 0x180);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    puVar7 = PTR_DAT_0271ce48;
    pbVar9 = PTR_DAT_0271ce40;
    iVar8 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar12 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ce40), pbVar9 = PTR_DAT_0271ce40,
           puVar7 = PTR_DAT_0271ce48, iVar5 != 0)) {
          uVar6 = FUN_01455eb0();
          *(undefined8 *)PTR_DAT_0271ce48 = uVar6;
          __cxa_guard_release(PTR_DAT_0271ce40);
          pbVar9 = PTR_DAT_0271ce40;
          puVar7 = PTR_DAT_0271ce48;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00d661c8;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00d661c8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x50) = param_1;
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
          goto LAB_00d661d0;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00d661c8:
  _DAT_000000a0 = param_1;
LAB_00d661d0:
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  (**(code **)(**(long **)(param_1 + 0x158) + 0x10))(&local_58);
  local_60 = *(undefined8 *)puVar4;
  local_98 = local_58;
  local_58 = 0;
  local_8c = 1;
  FUN_00d66760(&local_48,uVar6,uVar11,&local_98,&local_60,&local_8c,param_2);
  if (*(long *)(param_1 + 0x188) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  lVar12 = local_48;
  local_48 = 0;
  *(long *)(param_1 + 0x188) = lVar12;
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar12 = *(long *)(param_1 + 0x188);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    puVar7 = PTR_DAT_0271ce48;
    pbVar9 = PTR_DAT_0271ce40;
    iVar8 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar12 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ce40), pbVar9 = PTR_DAT_0271ce40,
           puVar7 = PTR_DAT_0271ce48, iVar5 != 0)) {
          uVar6 = FUN_01455eb0();
          *(undefined8 *)PTR_DAT_0271ce48 = uVar6;
          __cxa_guard_release(PTR_DAT_0271ce40);
          pbVar9 = PTR_DAT_0271ce40;
          puVar7 = PTR_DAT_0271ce48;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00d66378;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00d66378;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x50) = param_1;
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
          goto LAB_00d66380;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00d66378:
  _DAT_000000a0 = param_1;
LAB_00d66380:
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  (**(code **)(**(long **)(param_1 + 0x158) + 0x10))(&local_58);
  local_60 = *(undefined8 *)puVar4;
  local_a0 = local_58;
  local_58 = 0;
  local_8c = 1;
  FUN_00d66760(&local_48,uVar6,uVar11,&local_a0,&local_60,&local_8c,param_2);
  if (*(long *)(param_1 + 400) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 400) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 400) = 0;
  }
  lVar12 = local_48;
  local_48 = 0;
  *(long *)(param_1 + 400) = lVar12;
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar12 = *(long *)(param_1 + 400);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    puVar7 = PTR_DAT_0271ce48;
    pbVar9 = PTR_DAT_0271ce40;
    iVar8 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar12 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ce40), pbVar9 = PTR_DAT_0271ce40,
           puVar7 = PTR_DAT_0271ce48, iVar5 != 0)) {
          uVar6 = FUN_01455eb0();
          *(undefined8 *)PTR_DAT_0271ce48 = uVar6;
          __cxa_guard_release(PTR_DAT_0271ce40);
          pbVar9 = PTR_DAT_0271ce40;
          puVar7 = PTR_DAT_0271ce48;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00d66528;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00d66528;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x50) = param_1;
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
          goto LAB_00d66530;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00d66528:
  _DAT_000000a0 = param_1;
LAB_00d66530:
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  (**(code **)(**(long **)(param_1 + 0x158) + 0x10))(&local_58);
  local_60 = *(undefined8 *)puVar4;
  local_a8 = local_58;
  local_58 = 0;
  local_8c = 1;
  FUN_00d66760(&local_48,uVar6,uVar11,&local_a8,&local_60,&local_8c,param_2);
  if (*(long *)(param_1 + 0x198) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x198) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  lVar12 = local_48;
  local_48 = 0;
  *(long *)(param_1 + 0x198) = lVar12;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  puVar7 = PTR_DAT_0271ce48;
  puVar4 = PTR_DAT_0271ce40;
  lVar12 = *(long *)(param_1 + 0x198);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    iVar8 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar12 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          uVar6 = FUN_01455eb0();
          *(undefined8 *)puVar7 = uVar6;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00d666a8;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00d666a8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x50) = param_1;
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
          goto LAB_00d666b0;
        }
        break;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00d666a8:
  _DAT_000000a0 = param_1;
LAB_00d666b0:
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
  if (lVar12 == 0) {
    FUN_010673a0(&local_48,0);
  }
  else {
    plVar10 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_010673a0(&local_48,lVar12);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (local_48 != 0) {
    *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(local_48 + 0x140);
    if (*(char *)(param_3 + 0x431) != '\0') {
      *(undefined4 *)(local_48 + 0x140) = 0x49;
    }
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


