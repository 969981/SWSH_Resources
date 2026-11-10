/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c5dfc0; name: FUN_00c5dfc0
 */


void FUN_00c5dfc0(long *param_1)

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
  undefined *__dest;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  
  *param_1 = (long)(PTR_DAT_0271bee8 + 0x10);
  FUN_00c5e280();
  plVar11 = param_1 + 2;
  *plVar11 = (long)(PTR_DAT_0271bef0 + 0x10);
  *(undefined8 *)PTR_DAT_0271bef8 = 0;
  if (param_1[5] != 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  if (param_1[9] != 0) {
    (**(code **)(*(long *)param_1[7] + 0xb8))();
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)param_1[0xb] + 0xb8))();
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)param_1[0xf] + 0xb8))();
  }
  *plVar11 = (long)(PTR_DAT_02710528 + 0x10);
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
          if (cVar4 == '\0') goto LAB_00c5e0cc;
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
LAB_00c5e0cc:
  puVar6 = PTR_DAT_02710530;
  lVar8 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar9 = lVar8 * 8;
  puVar3 = PTR_DAT_02710530 + lVar9;
  __dest = PTR_DAT_02710530;
  if (lVar9 != 0 && *(long **)PTR_DAT_02710530 != plVar11) {
    puVar10 = PTR_DAT_02710530;
    do {
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) goto LAB_00c5e140;
      __dest = puVar10 + 8;
      puVar1 = (undefined8 *)(puVar10 + 8);
      puVar10 = __dest;
    } while ((long *)*puVar1 != plVar11);
  }
  if (puVar3 != __dest) {
    __n = (long)puVar3 - (long)(__dest + 8);
    if (__n != 0) {
      memmove(__dest,__dest + 8,__n);
      lVar8 = *(long *)(puVar6 + 0x800);
    }
    *(long *)(puVar6 + 0x800) = lVar8 + -1;
  }
LAB_00c5e140:
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


