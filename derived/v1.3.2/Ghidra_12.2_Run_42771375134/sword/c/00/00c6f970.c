/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6f970; name: FUN_00c6f970
 */


long FUN_00c6f970(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long local_48;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00c6f9d8;
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
LAB_00c6f9d8:
  plVar7 = *(long **)(param_1 + 0x140);
  plVar8 = *(long **)(param_1 + 0x148);
  if (plVar8 != plVar7) {
    do {
      lVar4 = *plVar7;
      uVar5 = FUN_00a8cbe0(lVar4 + 8);
      if ((uVar5 & 1) != 0) {
        local_48 = lVar4 + -0x48;
        plVar6 = *(long **)(param_2 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_00c6fae0;
        uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_48);
        if ((uVar5 & 1) != 0) goto LAB_00c6fa2c;
      }
      plVar7 = plVar7 + 1;
    } while (plVar8 != plVar7);
    plVar7 = plVar8;
LAB_00c6fa2c:
    plVar8 = *(long **)(param_1 + 0x148);
  }
  if (plVar8 == plVar7) {
    plVar7 = *(long **)(param_1 + 0x110);
    plVar8 = *(long **)(param_1 + 0x118);
    if (plVar8 != plVar7) {
      do {
        lVar4 = *plVar7;
        uVar5 = FUN_00a8cbe0(lVar4 + 8);
        if ((uVar5 & 1) != 0) {
          local_48 = lVar4 + -0x48;
          plVar6 = *(long **)(param_2 + 0x20);
          if (plVar6 == (long *)0x0) {
LAB_00c6fae0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_48);
          if ((uVar5 & 1) != 0) goto LAB_00c6fa8c;
        }
        plVar7 = plVar7 + 1;
      } while (plVar8 != plVar7);
      plVar7 = plVar8;
LAB_00c6fa8c:
      plVar8 = *(long **)(param_1 + 0x118);
    }
    if (plVar8 == plVar7) {
      lVar4 = 0;
      goto LAB_00c6faa8;
    }
  }
  lVar4 = 0;
  if (*plVar7 != 0) {
    lVar4 = *plVar7 + -0x48;
  }
LAB_00c6faa8:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar4;
}


