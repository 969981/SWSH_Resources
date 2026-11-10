/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc9a50; name: FUN_00dc9a50
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00dc9a50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  plVar8 = (long *)(param_1 + 0x80);
  if ((*plVar8 == 0) || (*(int *)(*plVar8 + 0x54) == 0)) {
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x98);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x8c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00dc9adc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00dc9adc:
  if ((*plVar8 != 0) && (puVar9 = *(undefined8 **)(*plVar8 + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_02715280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), iVar4 != 0)) {
      uVar7 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715288 = uVar7;
      __cxa_guard_release(PTR_DAT_02715280);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_02715288) {
        FUN_006cb420(puVar9 + -10);
        FUN_006cb610(puVar9 + -10);
        break;
      }
    }
  }
  if (*(int *)(param_1 + 0x78) == 2) {
    FUN_006c7b10(*(undefined8 *)(param_1 + 0xa0),plVar8);
    lVar5 = *plVar8;
    *plVar8 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x78) == 1) {
      FUN_006c7830(*(undefined8 *)(param_1 + 0xa0),plVar8);
    }
    lVar5 = *plVar8;
    *plVar8 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x8c));
  return;
}


