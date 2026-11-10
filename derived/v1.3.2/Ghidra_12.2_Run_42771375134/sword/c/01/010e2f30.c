/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e2f30; name: FUN_010e2f30
 */


void FUN_010e2f30(long *param_1)

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
  
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  lVar11 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar11 != 0) {
    FUN_010e2e50(lVar11);
    (**(code **)(*(long *)param_1[0xf] + 0x18))
              ((long *)param_1[0xf],lVar11,param_1[0x10],param_1[0x11]);
  }
  if ((param_1[9] != 0) && (param_1[6] != 0)) {
    (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
    param_1[6] = 0;
  }
  param_1[6] = 0;
  param_1[7] = -0x340d631b7bddd9bb;
  param_1[8] = (long)&DAT_01d38550;
  param_1[9] = 0;
  if (param_1[10] != 0) {
    (**(code **)(*(long *)(param_1[10] + 0x48) + 0x18))();
    param_1[10] = 0;
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  puVar8 = PTR_DAT_02724648;
  *param_1 = (long)(PTR_DAT_02724660 + 0x10);
  *(undefined8 *)puVar8 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xb8))();
  }
  *param_1 = (long)(PTR_DAT_02710528 + 0x10);
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
          if (cVar4 == '\0') goto LAB_010e3080;
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
LAB_010e3080:
  puVar6 = PTR_DAT_02710530;
  lVar7 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar9 = lVar7 * 8;
  puVar3 = PTR_DAT_02710530 + lVar9;
  puVar8 = PTR_DAT_02710530;
  if (lVar9 != 0 && *(long **)PTR_DAT_02710530 != param_1) {
    puVar10 = PTR_DAT_02710530;
    do {
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) goto LAB_010e30f4;
      puVar8 = puVar10 + 8;
      puVar1 = (undefined8 *)(puVar10 + 8);
      puVar10 = puVar8;
    } while ((long *)*puVar1 != param_1);
  }
  if (puVar3 != puVar8) {
    __n = (long)puVar3 - (long)(puVar8 + 8);
    if (__n != 0) {
      memmove(puVar8,puVar8 + 8,__n);
      lVar7 = *(long *)(puVar6 + 0x800);
    }
    *(long *)(puVar6 + 0x800) = lVar7 + -1;
  }
LAB_010e30f4:
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


