/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a1c40; name: FUN_013a1c40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013a1c40(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long local_70;
  undefined8 uStack_68;
  
  lVar10 = FUN_0137c8d0();
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_1 + 0x5e8);
  *(long *)(param_1 + 0x5e8) = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  lVar10 = FUN_0137c8d0(param_1,param_2);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_1 + 0x5f8);
  *(long *)(param_1 + 0x5f8) = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
    lVar10 = *(long *)(param_1 + 0x5f8);
  }
  uStack_68 = _UNK_01d4ab08;
  local_70 = _DAT_01d4ab00;
  FUN_00794650(lVar10,&local_70);
  lVar10 = FUN_00ad95d0(&local_70,*(undefined8 *)(param_1 + 8));
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x608) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x608) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
  *(long *)(param_1 + 0x608) = lVar10;
  lVar11 = FUN_00add530(&local_70,*(undefined8 *)(lVar10 + 8),param_2);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_70 = lVar11;
  FUN_006d9640(lVar10,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(param_1 + 0x5f0);
  *(long *)(param_1 + 0x5f0) = lVar11;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
  }
  lVar11 = *(long *)(param_1 + 0x608);
  lVar10 = FUN_01380280(&local_70,*(undefined8 *)(lVar11 + 8));
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_70 = lVar10;
  FUN_006d9640(lVar11,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  uVar8 = DAT_02a71838;
  uVar7 = DAT_02a71830;
  uVar6 = uRam0000000002a717f8;
  uVar14 = _DAT_02a717f0;
  lVar10 = *(long *)(param_1 + 0x608);
  *(undefined1 *)(lVar10 + 0xc0) = 1;
  *(ulong *)(lVar10 + 0xb8) =
       CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                (float)uVar6 + (float)uVar8);
  *(ulong *)(lVar10 + 0xb0) =
       CONCAT44((float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar7 >> 0x20),
                (float)uVar14 + (float)uVar7);
  lVar11 = *(long *)(param_1 + 0x608);
  lVar10 = FUN_00add530(&local_70,*(undefined8 *)(lVar11 + 8),param_2);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_70 = lVar10;
  FUN_006d9640(lVar11,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_1 + 0x600);
  *(long *)(param_1 + 0x600) = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  FUN_010257f0(*(undefined8 *)(param_1 + 0x608),param_1 + 0x80);
  lVar11 = *(long *)(*(long *)(param_1 + 0x608) + 0x170);
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar11 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x14c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_013a1f00;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_013a1f00:
  puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar12 = (long *)(**(code **)*puVar15)(puVar15);
  puVar5 = PTR_DAT_02715078;
  puVar4 = (undefined8 *)PTR_DAT_02715080;
  if (((*PTR_DAT_02715078 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_02715078), puVar4 = (undefined8 *)PTR_DAT_02715080,
     iVar9 != 0)) {
    uVar14 = FUN_00a87090();
    *(undefined8 *)PTR_DAT_02715080 = uVar14;
    __cxa_guard_release(PTR_DAT_02715078);
    puVar4 = (undefined8 *)PTR_DAT_02715080;
  }
  for (; plVar12 != puVar4; plVar12 = (long *)*plVar12) {
  }
  PTR_DAT_02715080 = (undefined *)puVar4;
  FUN_006d1640(lVar11,puVar15[0x24],0);
  lVar16 = *(long *)(*(long *)(param_1 + 0x608) + 0x178);
  lVar10 = nn::os::GetCurrentThread();
  plVar12 = (long *)(lVar16 + 0x158);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x14c));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar10;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_013a1fa8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_013a1fa8:
  puVar15 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar13 = (long *)(**(code **)*puVar15)(puVar15);
  if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_02715078), iVar9 != 0)) {
    uVar14 = FUN_00a87090();
    *puVar4 = uVar14;
    __cxa_guard_release(PTR_DAT_02715078);
  }
  for (; plVar13 != puVar4; plVar13 = (long *)*plVar13) {
  }
  FUN_006d1640(lVar16,puVar15[0x25],0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x14c));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x14c));
  return;
}


