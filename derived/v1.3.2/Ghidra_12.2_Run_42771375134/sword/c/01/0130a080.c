/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a080; name: FUN_0130a080
 */


void FUN_0130a080(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long local_70;
  long local_68;
  long local_58;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x3e0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x3d4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0130a0f4;
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
LAB_0130a0f4:
  plVar6 = *(long **)(param_2 + 0x370);
  plVar7 = *(long **)(param_2 + 0x378);
  if (plVar6 != plVar7) {
    do {
      lVar4 = *plVar6;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        FUN_0130d990(&local_68,lVar4);
        if (local_68 == 0) {
          bVar3 = false;
        }
        else {
          if (*param_3 == 0) {
LAB_0130a1a4:
            FUN_0130e4e0(param_1,local_68);
            bVar3 = true;
          }
          else {
            FUN_0130e4e0(&local_70);
            local_58 = local_70;
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
            }
            uVar5 = (*(code *)*param_3)(param_3 + 4,&local_58);
            if (local_58 != 0) {
              (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
              local_58 = 0;
            }
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
            if ((uVar5 & 1) != 0) goto LAB_0130a1a4;
            bVar3 = false;
          }
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
        }
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        if (bVar3) goto LAB_0130a20c;
      }
      plVar6 = plVar6 + 1;
    } while (plVar7 != plVar6);
  }
  *param_1 = 0;
LAB_0130a20c:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x3d4));
  return;
}


