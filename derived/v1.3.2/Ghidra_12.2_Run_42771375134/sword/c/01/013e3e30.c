/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e3e30; name: FUN_013e3e30
 */


void FUN_013e3e30(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  
  lVar11 = param_1[0x44];
  puVar8 = PTR_DAT_02727860 + 0x80;
  *param_1 = (long)(PTR_DAT_02727860 + 0x10);
  param_1[9] = (long)puVar8;
  param_1[0x44] = 0;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0xd0) != 0) {
      lVar7 = *(long *)(lVar11 + 0xc0);
      plVar12 = *(long **)(lVar11 + 200);
      *(undefined8 *)(*plVar12 + 8) = *(undefined8 *)(lVar7 + 8);
      **(long **)(lVar7 + 8) = *plVar12;
      *(undefined8 *)(lVar11 + 0xd0) = 0;
      while (plVar12 != (long *)(lVar11 + 0xc0)) {
        plVar3 = (long *)plVar12[1];
        if (plVar12[2] != 0) {
          (**(code **)(*(long *)(plVar12[2] + 0x48) + 0x18))();
          plVar12[2] = 0;
        }
        (**(code **)(**(long **)(lVar11 + 0xd8) + 0x18))(*(long **)(lVar11 + 0xd8),plVar12,0x18,8);
        plVar12 = plVar3;
      }
    }
    FUN_013e4470(lVar11 + 0x60);
    FUN_013e4470(lVar11);
    (**(code **)(*(long *)param_1[0x45] + 0x18))
              ((long *)param_1[0x45],lVar11,param_1[0x46],param_1[0x47]);
  }
  puVar8 = PTR_DAT_02727868;
  plVar12 = param_1 + 0x12;
  *plVar12 = (long)(PTR_DAT_02727870 + 0x10);
  puVar2 = PTR_DAT_02727878;
  param_1[0xd] = (long)(puVar8 + 0x10);
  *(undefined8 *)puVar2 = 0;
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)param_1[0x13] + 0xb8))();
  }
  *plVar12 = (long)(PTR_DAT_02710528 + 0x10);
  lVar11 = FUN_007606c0();
  lVar7 = nn::os::GetCurrentThread();
  plVar3 = (long *)(lVar11 + 0x10);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 4));
        while (*plVar3 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_013e3fb4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_013e3fb4:
  puVar6 = PTR_DAT_02710530;
  lVar7 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar9 = lVar7 * 8;
  puVar2 = PTR_DAT_02710530 + lVar9;
  puVar8 = PTR_DAT_02710530;
  if (lVar9 != 0 && *(long **)PTR_DAT_02710530 != plVar12) {
    puVar10 = PTR_DAT_02710530;
    do {
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) goto LAB_013e4028;
      puVar8 = puVar10 + 8;
      puVar1 = (undefined8 *)(puVar10 + 8);
      puVar10 = puVar8;
    } while ((long *)*puVar1 != plVar12);
  }
  if (puVar2 != puVar8) {
    __n = (long)puVar2 - (long)(puVar8 + 8);
    if (__n != 0) {
      memmove(puVar8,puVar8 + 8,__n);
      lVar7 = *(long *)(puVar6 + 0x800);
    }
    *(long *)(puVar6 + 0x800) = lVar7 + -1;
  }
LAB_013e4028:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar5) {
      *plVar3 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 4));
  puVar2 = PTR_DAT_02727880;
  puVar8 = PTR_DAT_02727880 + 0x10;
  param_1[0xd] = (long)(PTR_DAT_02717510 + 0x10);
  *param_1 = (long)puVar8;
  param_1[9] = (long)(puVar2 + 0x80);
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


