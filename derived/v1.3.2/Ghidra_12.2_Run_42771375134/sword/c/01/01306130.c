/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01306130; name: FUN_01306130
 */


void FUN_01306130(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_58;
  long local_50;
  long lStack_48;
  
  lVar4 = FUN_00ad95d0(&local_50,*(undefined8 *)(param_2 + 0x60));
  *param_1 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_2 + (long)param_3 * 0x10 + 0x88);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_2 + (long)param_3 * 0x10 + 0x90);
  if (lVar7 != 0) {
    plVar5 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  local_58 = lVar4;
  local_50 = lVar6;
  lStack_48 = lVar7;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
  }
  FUN_01025970(&local_58,&local_50);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar5 = (long *)(param_2 + 0xe8);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xdc));
        while (*plVar5 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01306268;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01306268:
  plVar1 = *(long **)(param_2 + 0xf0);
  do {
    if (plVar1 == *(long **)(param_2 + 0xf8)) {
LAB_013062c4:
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xdc));
      return;
    }
    if (*plVar1 == 0) {
      lVar4 = *param_1;
      if (lVar4 == 0) {
        *plVar1 = 0;
      }
      else {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        lVar6 = *plVar1;
        *plVar1 = lVar4;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        }
      }
      goto LAB_013062c4;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


