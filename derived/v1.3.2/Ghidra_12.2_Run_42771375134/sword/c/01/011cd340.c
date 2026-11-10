/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cd340; name: FUN_011cd340
 */


void FUN_011cd340(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  size_t __n;
  long lVar5;
  long *__dest;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    lVar6 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar5 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar6 + 0xa0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x94));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_011cd3bc;
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
LAB_011cd3bc:
    __dest = *(long **)(lVar6 + 0x60);
    plVar2 = *(long **)(lVar6 + 0x68);
    if (__dest != plVar2) {
      if (*__dest != param_2) {
        do {
          __dest = __dest + 1;
          if (plVar2 == __dest) goto LAB_011cd418;
        } while (*__dest != param_2);
      }
      if (__dest != plVar2) {
        __n = (long)plVar2 - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(long **)(lVar6 + 0x68) = __dest + ((long)__n >> 3);
      }
    }
LAB_011cd418:
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x94));
    lVar6 = *(long *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    lVar6 = *(long *)(param_1 + 0x18);
  }
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (*(long *)(lVar6 + 0x2b0) != 0) {
      *(undefined8 *)(*(long *)(lVar6 + 0x2b0) + 0x168) = 0;
      lVar6 = *(long *)(param_1 + 0x18);
    }
    if (*(long *)(lVar6 + 0x2a8) != 0) {
      *(undefined8 *)(*(long *)(lVar6 + 0x2a8) + 0x168) = 0;
      lVar6 = *(long *)(param_1 + 0x18);
    }
    *(undefined8 *)(lVar6 + 0x2c0) = 0;
    lVar6 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x011cd494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


