/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01307720; name: FUN_01307720
 */


long FUN_01307720(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long local_58;
  
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
          if (cVar3 == '\0') goto LAB_0130778c;
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
LAB_0130778c:
  plVar10 = *(long **)(param_1 + 0x120);
  plVar2 = *(long **)(param_1 + 0x128);
  if (plVar10 == plVar2) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      if ((*plVar10 != 0) && (*(int *)(*plVar10 + 0x54) != 0)) {
        pcVar7 = (code *)*param_2;
        if (pcVar7 != (code *)0x0) {
          lVar8 = plVar10[1];
          if (lVar8 == 0) {
            local_58 = 0;
          }
          else {
            plVar9 = (long *)(lVar8 + 0x48);
            (**(code **)(*plVar9 + 0x10))(plVar9);
            local_58 = lVar8;
            (**(code **)(*plVar9 + 0x10))(plVar9);
            pcVar7 = (code *)*param_2;
          }
          uVar6 = (*pcVar7)(param_2 + 4,&local_58);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
          }
          if ((uVar6 & 1) == 0) goto LAB_0130783c;
        }
        lVar5 = lVar5 + 1;
      }
LAB_0130783c:
      plVar10 = plVar10 + 2;
    } while (plVar2 != plVar10);
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xdc));
  return lVar5;
}


