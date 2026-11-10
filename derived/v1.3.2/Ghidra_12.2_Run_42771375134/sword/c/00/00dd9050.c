/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd9050; name: FUN_00dd9050
 */


/* WARNING: Removing unreachable block (ram,0x00dd90c8) */

void FUN_00dd9050(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar1 = (long *)(param_1 + 0x80);
  if (((*(byte *)(param_1 + 0x88) & 1) == 0) ||
     (lVar5 = *plVar1, lVar4 = nn::os::GetCurrentThread(), lVar4 != lVar5)) {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x74));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00dd90e8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00dd90e8:
    local_60 = *param_2;
    uStack_58 = param_2[1];
    local_50 = param_2[2];
    uStack_48 = param_2[3];
    FUN_00dd9170(param_1,&local_60);
    *(undefined1 *)(param_1 + 0x30) = 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x74));
  }
  else {
    local_60 = *param_2;
    uStack_58 = param_2[1];
    local_50 = param_2[2];
    uStack_48 = param_2[3];
    FUN_00dd9170(param_1 + 0x38,&local_60);
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}


