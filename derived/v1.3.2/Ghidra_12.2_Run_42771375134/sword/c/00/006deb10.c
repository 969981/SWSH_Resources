/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006deb10; name: FUN_006deb10
 */


void FUN_006deb10(long *param_1)

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
  
  *param_1 = (long)(PTR_DAT_027154b0 + 0x10);
  FUN_006d38c0();
  puVar8 = PTR_DAT_02715188;
  lVar11 = *(long *)PTR_DAT_02715188;
  (**(code **)**(undefined8 **)(lVar11 + 0x28))();
  *(undefined8 *)(lVar11 + 0x28) = 0;
  (**(code **)(**(long **)(lVar11 + 0x30) + 0x18))
            (*(long **)(lVar11 + 0x30),*(undefined8 *)(lVar11 + 0x38),*(undefined8 *)(lVar11 + 0x40)
             ,8);
  *(undefined8 *)(lVar11 + 0x38) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  lVar11 = *(long *)puVar8;
  (**(code **)**(undefined8 **)(lVar11 + 8))();
  *(undefined8 *)(lVar11 + 8) = 0;
  (**(code **)(**(long **)(lVar11 + 0x10) + 0x18))
            (*(long **)(lVar11 + 0x10),*(undefined8 *)(lVar11 + 0x18),*(undefined8 *)(lVar11 + 0x20)
             ,8);
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(undefined8 *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  if (param_1[0x2c] != 0) {
    (**(code **)(*(long *)(param_1[0x2c] + 0x48) + 0x18))();
    param_1[0x2c] = 0;
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  if (param_1[0x2a] != 0) {
    (**(code **)(*(long *)(param_1[0x2a] + 0x48) + 0x18))();
    param_1[0x2a] = 0;
  }
  lVar11 = param_1[0x1e];
  param_1[0x1e] = 0;
  if (lVar11 != 0) {
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],lVar11,param_1[0x20],param_1[0x21]);
  }
  plVar12 = param_1 + 0x14;
  *plVar12 = (long)(PTR_DAT_027154b8 + 0x10);
  *(undefined8 *)puVar8 = 0;
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)param_1[0x15] + 0xb8))();
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)param_1[0x19] + 0xb8))();
  }
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
          if (cVar4 == '\0') goto LAB_006decc4;
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
LAB_006decc4:
  puVar6 = PTR_DAT_02710530;
  lVar7 = *(long *)(PTR_DAT_02710530 + 0x800);
  lVar9 = lVar7 * 8;
  puVar3 = PTR_DAT_02710530 + lVar9;
  puVar8 = PTR_DAT_02710530;
  if (lVar9 != 0 && *(long **)PTR_DAT_02710530 != plVar12) {
    puVar10 = PTR_DAT_02710530;
    do {
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) goto LAB_006ded38;
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
LAB_006ded38:
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


