/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013140f0; name: FUN_013140f0
 */


/* WARNING: Removing unreachable block (ram,0x01314158) */
/* WARNING: Removing unreachable block (ram,0x013141e8) */

void FUN_013140f0(long param_1,byte param_2)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  *(byte *)(param_1 + 0x3e0) = param_2 & 1;
  if (((param_2 & 1) == 0) && (lVar6 = *(long *)(param_1 + 0x78), lVar6 != 0)) {
    lVar5 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar6 + 0x4e0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x4d4));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01314178;
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
LAB_01314178:
    cVar3 = *(char *)(lVar6 + 0x4c8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x4d4));
    if (cVar3 != '\0') {
      lVar5 = *(long *)(param_1 + 0x78);
      lVar6 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar5 + 0x4e0);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x4d4));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01314208;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01314208:
      *(undefined1 *)(lVar5 + 0x4c8) = 0;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x4d4));
      return;
    }
  }
  return;
}


