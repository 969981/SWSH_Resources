/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01314540; name: FUN_01314540
 */


/* WARNING: Removing unreachable block (ram,0x013145bc) */

void FUN_01314540(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long local_78;
  long local_70;
  undefined1 auStack_68 [8];
  
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != 0) {
    lVar4 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar5 + 0x4e0);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x4d4));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_013145dc;
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
LAB_013145dc:
    *(undefined1 *)(lVar5 + 0x4c8) = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x4d4));
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
  }
  local_70 = param_1;
  lVar5 = FUN_01317680(auStack_68,*(undefined8 *)(param_1 + 0x60),&local_70);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(long *)(param_1 + 0x78) = lVar5;
  local_78 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
  }
  FUN_013174f0(param_1,&local_78,param_2,param_3,1,param_4,param_5,param_6);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
  }
  return;
}


