/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01306920; name: FUN_01306920
 */


undefined8 FUN_01306920(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xe8);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0130697c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0130697c:
  plVar2 = *(long **)(param_1 + 0xf0);
  do {
    if (plVar2 == *(long **)(param_1 + 0xf8)) {
      plVar2 = *(long **)(param_1 + 0x120);
      goto joined_r0x013069a0;
    }
    lVar5 = *plVar2;
    plVar2 = plVar2 + 1;
  } while (lVar5 == 0);
  uVar6 = 0;
LAB_013069d8:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xdc));
  return uVar6;
joined_r0x013069a0:
  if (plVar2 == *(long **)(param_1 + 0x128)) goto LAB_013069c4;
  if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x54) != 0)) {
    uVar6 = 0;
    goto LAB_013069d8;
  }
  plVar2 = plVar2 + 2;
  goto joined_r0x013069a0;
LAB_013069c4:
  uVar6 = 1;
  goto LAB_013069d8;
}


