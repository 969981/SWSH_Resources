/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c3b80; name: FUN_013c3b80
 */


void FUN_013c3b80(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3d0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_013c3bdc;
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
LAB_013c3bdc:
  lVar4 = *(long *)(param_1 + 0x418);
  *(undefined1 *)(param_1 + 0x3f1) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  if (lVar4 != 0) {
    FUN_01331890(lVar4 + 0x10);
    (**(code **)(**(long **)(param_1 + 0x420) + 0x18))
              (*(long **)(param_1 + 0x420),lVar4,*(undefined8 *)(param_1 + 0x428),
               *(undefined8 *)(param_1 + 0x430));
  }
  lVar4 = *(long *)(param_1 + 0x438);
  *(undefined8 *)(param_1 + 0x438) = 0;
  if (lVar4 != 0) {
    *(undefined **)(lVar4 + 0x10) = PTR_DAT_02715090 + 0x10;
    if (*(long *)(lVar4 + 0x18) == 0) {
      *(undefined8 *)(lVar4 + 0x18) = 0;
      pcVar6 = *(code **)(lVar4 + 0xa8);
    }
    else {
      FUN_006e2100();
      lVar5 = *(long *)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      pcVar6 = *(code **)(lVar4 + 0xa8);
    }
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0xb0) = 0;
      *(undefined8 *)(lVar4 + 0xb8) = 0;
      *(undefined8 *)(lVar4 + 0xa0) = 0;
      *(undefined8 *)(lVar4 + 0xa8) = 0;
      (*pcVar6)(lVar4 + 0xc0);
    }
    pcVar6 = *(code **)(lVar4 + 0x28);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      (*pcVar6)(lVar4 + 0x40);
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar4 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar4 + 0x18) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x440) + 0x18))
              (*(long **)(param_1 + 0x440),lVar4,*(undefined8 *)(param_1 + 0x448),
               *(undefined8 *)(param_1 + 0x450));
  }
  lVar4 = *(long *)(param_1 + 0x478);
  *(undefined8 *)(param_1 + 0x478) = 0;
  if (lVar4 != 0) {
    *(undefined **)(lVar4 + 0x10) = PTR_DAT_027164e0 + 0x10;
    if (*(long *)(lVar4 + 0x18) == 0) {
      *(undefined8 *)(lVar4 + 0x18) = 0;
      pcVar6 = *(code **)(lVar4 + 0xa8);
    }
    else {
      FUN_006e2100();
      lVar5 = *(long *)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      }
      pcVar6 = *(code **)(lVar4 + 0xa8);
    }
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0xb0) = 0;
      *(undefined8 *)(lVar4 + 0xb8) = 0;
      *(undefined8 *)(lVar4 + 0xa0) = 0;
      *(undefined8 *)(lVar4 + 0xa8) = 0;
      (*pcVar6)(lVar4 + 0xc0);
    }
    pcVar6 = *(code **)(lVar4 + 0x28);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      (*pcVar6)(lVar4 + 0x40);
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar4 + 0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar4 + 0x18) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x480) + 0x18))
              (*(long **)(param_1 + 0x480),lVar4,*(undefined8 *)(param_1 + 0x488),
               *(undefined8 *)(param_1 + 0x490));
  }
  if (*(long *)(param_1 + 0x4d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4d8) = 0;
  }
  if (*(long *)(param_1 + 0x4e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4e0) = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3c4));
  return;
}


