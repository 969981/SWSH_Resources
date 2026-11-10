/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007abcb0; name: FUN_007abcb0
 */


void FUN_007abcb0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  
  puVar9 = PTR_DAT_027167b8 + 0x40;
  *param_1 = (long)(PTR_DAT_027167b8 + 0x10);
  param_1[9] = (long)puVar9;
  FUN_007abef0();
  if (param_1[0x2f] != 0) {
    (**(code **)(*(long *)(param_1[0x2f] + 0x48) + 0x18))();
    param_1[0x2f] = 0;
  }
  if (param_1[0x2d] != 0) {
    (**(code **)(*(long *)(param_1[0x2d] + 0x48) + 0x18))();
    param_1[0x2d] = 0;
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*(long *)(param_1[0x29] + 0x48) + 0x18))();
    param_1[0x29] = 0;
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
    param_1[0x27] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    (**(code **)(*(long *)(param_1[0x1d] + 0x48) + 0x18))();
    param_1[0x1d] = 0;
  }
  plVar12 = param_1 + 10;
  *plVar12 = (long)(PTR_DAT_027167c0 + 0x10);
  *(undefined8 *)PTR_DAT_027167c8 = 0;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)param_1[0xb] + 0xb8))();
  }
  *plVar12 = (long)(PTR_DAT_02710528 + 0x10);
  lVar7 = FUN_007606c0();
  lVar8 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar7 + 0x10);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_007abe44;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_007abe44:
  puVar6 = PTR_DAT_02710530;
  lVar8 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar10 = lVar8 * 8;
  puVar3 = PTR_DAT_02710530 + lVar10;
  puVar9 = PTR_DAT_02710530;
  if (lVar10 != 0 && *(long **)PTR_DAT_02710530 != plVar12) {
    puVar11 = PTR_DAT_02710530;
    do {
      lVar10 = lVar10 + -8;
      if (lVar10 == 0) goto LAB_007abeb8;
      puVar9 = puVar11 + 8;
      puVar1 = (undefined8 *)(puVar11 + 8);
      puVar11 = puVar9;
    } while ((long *)*puVar1 != plVar12);
  }
  if (puVar3 != puVar9) {
    __n = (long)puVar3 - (long)(puVar9 + 8);
    if (__n != 0) {
      memmove(puVar9,puVar9 + 8,__n);
      lVar8 = *(long *)(puVar6 + 0x800);
    }
    *(long *)(puVar6 + 0x800) = lVar8 + -1;
  }
LAB_007abeb8:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
  return;
}


