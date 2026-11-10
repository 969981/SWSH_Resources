/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a2c7b0; name: FUN_00a2c7b0
 */


void FUN_00a2c7b0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  size_t __n;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  puVar10 = PTR_DAT_02718f70 + 0xf0;
  puVar2 = PTR_DAT_02718f70 + 0x130;
  *param_1 = (long)(PTR_DAT_02718f70 + 0x10);
  param_1[9] = (long)puVar10;
  param_1[10] = (long)puVar2;
  if (param_1[0xe4] != 0) {
    (**(code **)(*(long *)(param_1[0xe4] + 0x48) + 0x18))();
    param_1[0xe4] = 0;
  }
  param_1[0xaa] = (long)(PTR_DAT_02718f78 + 0x10);
  puVar10 = PTR_DAT_02718e40;
  plVar3 = param_1 + 0xaf;
  param_1[0xaf] = (long)(PTR_DAT_02718f80 + 0x10);
  *(undefined8 *)puVar10 = 0;
  if (param_1[0xb2] != 0) {
    (**(code **)(*(long *)param_1[0xb0] + 0xb8))();
  }
  if (param_1[0xb6] != 0) {
    (**(code **)(*(long *)param_1[0xb4] + 0xb8))();
  }
  *plVar3 = (long)(PTR_DAT_02710528 + 0x10);
  lVar8 = FUN_007606c0();
  lVar9 = nn::os::GetCurrentThread();
  plVar4 = (long *)(lVar8 + 0x10);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 4));
        while (*plVar4 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00a2c8bc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *plVar4 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00a2c8bc:
  puVar7 = PTR_DAT_02710530;
  lVar9 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar11 = lVar9 * 8;
  puVar2 = PTR_DAT_02710530 + lVar11;
  puVar10 = PTR_DAT_02710530;
  if (lVar11 != 0 && *(long **)PTR_DAT_02710530 != plVar3) {
    puVar12 = PTR_DAT_02710530;
    do {
      lVar11 = lVar11 + -8;
      if (lVar11 == 0) goto LAB_00a2c930;
      puVar10 = puVar12 + 8;
      puVar1 = (undefined8 *)(puVar12 + 8);
      puVar12 = puVar10;
    } while ((long *)*puVar1 != plVar3);
  }
  if (puVar2 != puVar10) {
    __n = (long)puVar2 - (long)(puVar10 + 8);
    if (__n != 0) {
      memmove(puVar10,puVar10 + 8,__n);
      lVar9 = *(long *)(puVar7 + 0x800);
    }
    *(long *)(puVar7 + 0x800) = lVar9 + -1;
  }
LAB_00a2c930:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar6) {
      *plVar4 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
  param_1[0xaa] = (long)(PTR_DAT_02717510 + 0x10);
  FUN_00ff65e0(param_1);
  return;
}


