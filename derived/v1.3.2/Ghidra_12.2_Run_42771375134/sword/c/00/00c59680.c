/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c59680; name: FUN_00c59680
 */


void FUN_00c59680(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  undefined *puVar6;
  long lVar7;
  undefined *__dest;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long local_50;
  long lStack_48;
  
  *param_1 = (long)(PTR_DAT_0271be30 + 0x10);
  if ((char)param_1[1] != '\0') {
    lVar10 = *(long *)PTR_DAT_0271be40;
    if (*(undefined8 **)(lVar10 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar10 + 8))();
      *(undefined8 *)(lVar10 + 8) = 0;
      (**(code **)(**(long **)(lVar10 + 0x10) + 0x18))
                (*(long **)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18),
                 *(undefined8 *)(lVar10 + 0x20),8);
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
    }
    FUN_008d4290(&local_50);
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[7] = local_50;
    param_1[8] = lStack_48;
  }
  plVar11 = param_1 + 2;
  *plVar11 = (long)(PTR_DAT_0271be38 + 0x10);
  *(undefined8 *)PTR_DAT_0271be40 = 0;
  if (param_1[5] != 0) {
    (**(code **)(*(long *)param_1[3] + 0xb8))();
  }
  *plVar11 = (long)(PTR_DAT_02710528 + 0x10);
  lVar10 = FUN_007606c0();
  lVar7 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar10 + 0x10);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c597a4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c597a4:
  puVar6 = PTR_DAT_02710530;
  lVar7 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar8 = lVar7 * 8;
  puVar3 = PTR_DAT_02710530 + lVar8;
  __dest = PTR_DAT_02710530;
  if (lVar8 != 0 && *(long **)PTR_DAT_02710530 != plVar11) {
    puVar9 = PTR_DAT_02710530;
    do {
      lVar8 = lVar8 + -8;
      if (lVar8 == 0) goto LAB_00c59818;
      __dest = puVar9 + 8;
      puVar1 = (undefined8 *)(puVar9 + 8);
      puVar9 = __dest;
    } while ((long *)*puVar1 != plVar11);
  }
  if (puVar3 != __dest) {
    __n = (long)puVar3 - (long)(__dest + 8);
    if (__n != 0) {
      memmove(__dest,__dest + 8,__n);
      lVar7 = *(long *)(puVar6 + 0x800);
    }
    *(long *)(puVar6 + 0x800) = lVar7 + -1;
  }
LAB_00c59818:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 4));
  return;
}


