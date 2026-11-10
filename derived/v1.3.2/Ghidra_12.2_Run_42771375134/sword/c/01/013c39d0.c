/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c39d0; name: FUN_013c39d0
 */


uint FUN_013c39d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 1000);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3dc));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_013c3a2c;
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
LAB_013c3a2c:
  if (*(char *)(param_1 + 0x3f1) == '\0') {
    uVar4 = 1;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x418);
    if (*(long *)(lVar5 + 0x18) == 0) {
      uVar4 = 1;
    }
    else if (*(char *)(*(long *)(lVar5 + 0x18) + 0x170) == '\0') {
      uVar4 = 1;
    }
    else if (*(long *)(lVar5 + 0x128) == 0) {
      uVar4 = 1;
    }
    else if (*(char *)(*(long *)(lVar5 + 0x128) + 0x170) == '\0') {
      uVar4 = 1;
    }
    else if (*(long *)(lVar5 + 0x238) == 0) {
      uVar4 = 1;
    }
    else if (*(char *)(*(long *)(lVar5 + 0x238) + 0x170) == '\0') {
      uVar4 = 1;
    }
    else if (*(long *)(lVar5 + 0x348) == 0) {
      uVar4 = 1;
    }
    else if (*(char *)(*(long *)(lVar5 + 0x348) + 0x170) == '\0') {
      uVar4 = 1;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x438) + 0x18);
      if (lVar5 == 0) {
        uVar4 = 1;
      }
      else if (*(char *)(lVar5 + 0x170) == '\0') {
        uVar4 = 1;
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0x478) + 0x18);
        if (lVar5 == 0) {
          uVar4 = 1;
        }
        else if (*(char *)(lVar5 + 0x170) == '\0') {
          uVar4 = 1;
        }
        else {
          uVar6 = FUN_0132a070(*(undefined8 *)(param_1 + 0x4d8));
          if ((uVar6 & 1) == 0) {
            uVar4 = 1;
          }
          else {
            uVar4 = FUN_0132a070(*(undefined8 *)(param_1 + 0x4e0));
            uVar4 = uVar4 ^ 1;
          }
        }
      }
    }
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3dc));
  return uVar4 & 1;
}


