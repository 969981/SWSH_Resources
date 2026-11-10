/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe5a90; name: FUN_00fe5a90
 */


void FUN_00fe5a90(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  size_t __n;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  puVar10 = PTR_DAT_02723200;
  *param_1 = (long)(PTR_DAT_02723200 + 0x10);
  puVar4 = PTR_DAT_02723208;
  param_1[9] = (long)(puVar10 + 0xf0);
  param_1[10] = (long)(puVar10 + 0x130);
  param_1[0xaa] = (long)(puVar4 + 0x10);
  param_1[0xaf] = (long)(PTR_DAT_02723210 + 0x10);
  *(undefined8 *)PTR_DAT_02723218 = 0;
  plVar2 = param_1 + 0xaf;
  if (param_1[0xb2] != 0) {
    (**(code **)(*(long *)param_1[0xb0] + 0xb8))();
  }
  *plVar2 = (long)(PTR_DAT_02710528 + 0x10);
  lVar8 = FUN_007606c0();
  lVar9 = nn::os::GetCurrentThread();
  plVar3 = (long *)(lVar8 + 0x10);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 4));
        while (*plVar3 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00fe5b6c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00fe5b6c:
  puVar7 = PTR_DAT_02710530;
  lVar9 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar11 = lVar9 * 8;
  puVar4 = PTR_DAT_02710530 + lVar11;
  puVar10 = PTR_DAT_02710530;
  if (lVar11 != 0 && *(long **)PTR_DAT_02710530 != plVar2) {
    puVar12 = PTR_DAT_02710530;
    do {
      lVar11 = lVar11 + -8;
      if (lVar11 == 0) goto LAB_00fe5be0;
      puVar10 = puVar12 + 8;
      puVar1 = (undefined8 *)(puVar12 + 8);
      puVar12 = puVar10;
    } while ((long *)*puVar1 != plVar2);
  }
  if (puVar4 != puVar10) {
    __n = (long)puVar4 - (long)(puVar10 + 8);
    if (__n != 0) {
      memmove(puVar10,puVar10 + 8,__n);
      lVar9 = *(long *)(puVar7 + 0x800);
    }
    *(long *)(puVar7 + 0x800) = lVar9 + -1;
  }
LAB_00fe5be0:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
  param_1[0xaa] = (long)(PTR_DAT_02717510 + 0x10);
  FUN_00ff65e0(param_1);
  return;
}


