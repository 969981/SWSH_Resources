/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c5a220; name: FUN_00c5a220
 */


void FUN_00c5a220(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
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
  long local_50;
  long lStack_48;
  
  *param_1 = (long)(PTR_DAT_0271bfa8 + 0x10);
  puVar8 = PTR_DAT_0271bfd0;
  if ((char)param_1[1] != '\0') {
    lVar11 = 0;
    plVar12 = param_1 + 0x73;
    do {
      lVar7 = *(long *)puVar8 + lVar11;
      if (*(undefined8 **)(lVar7 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar7 + 8))();
        *(undefined8 *)(lVar7 + 8) = 0;
        (**(code **)(**(long **)(lVar7 + 0x10) + 0x18))
                  (*(long **)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),
                   *(undefined8 *)(lVar7 + 0x20),8);
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined8 *)(lVar7 + 0x10) = 0;
      }
      FUN_008d4290(&local_50);
      lVar11 = lVar11 + 0x20;
      *plVar12 = local_50;
      plVar12[1] = lStack_48;
      plVar12 = plVar12 + 2;
    } while (lVar11 != 0x380);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  lVar11 = 0;
  plVar12 = param_1 + 2;
  *plVar12 = (long)(PTR_DAT_0271bfc8 + 0x10);
  *(undefined8 *)PTR_DAT_0271bfd0 = 0;
  do {
    if (*(long *)((long)param_1 + lVar11 + 0x28) != 0) {
      (**(code **)(**(long **)((long)param_1 + lVar11 + 0x18) + 0xb8))();
    }
    lVar11 = lVar11 + 0x20;
  } while (lVar11 != 0x380);
  *plVar12 = (long)(PTR_DAT_02710528 + 0x10);
  lVar11 = FUN_007606c0();
  lVar7 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar11 + 0x10);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c5a370;
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
LAB_00c5a370:
  puVar6 = PTR_DAT_02710530;
  lVar7 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar9 = lVar7 * 8;
  puVar3 = PTR_DAT_02710530 + lVar9;
  puVar8 = PTR_DAT_02710530;
  if (lVar9 != 0 && *(long **)PTR_DAT_02710530 != plVar12) {
    puVar10 = PTR_DAT_02710530;
    do {
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) goto LAB_00c5a3e4;
      puVar8 = puVar10 + 8;
      puVar1 = (undefined8 *)(puVar10 + 8);
      puVar10 = puVar8;
    } while ((long *)*puVar1 != plVar12);
  }
  if (puVar3 != puVar8) {
    __n = (long)puVar3 - (long)(puVar8 + 8);
    if (__n != 0) {
      memmove(puVar8,puVar8 + 8,__n);
      lVar7 = *(long *)(puVar6 + 0x800);
    }
    *(long *)(puVar6 + 0x800) = lVar7 + -1;
  }
LAB_00c5a3e4:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 4));
  return;
}


