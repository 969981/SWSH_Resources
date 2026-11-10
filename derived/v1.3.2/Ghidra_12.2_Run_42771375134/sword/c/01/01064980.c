/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01064980; name: FUN_01064980
 */


void FUN_01064980(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long local_48;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_0101b530(param_1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_010528e0(&local_48,*param_2);
  lVar4 = local_48;
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar4 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 0x14c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01064a30;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01064a30:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_006d1640(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x128),
               *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x130));
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x128) + 0x298);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar9 = lVar6;
  if (*(long *)(lVar6 + 0x128) != 0) {
    lVar9 = *(long *)(lVar6 + 0x128);
  }
  plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
  if (((*PTR_DAT_027153a0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_027153a0), iVar5 != 0))
  {
    uVar8 = FUN_006ec130();
    *(undefined8 *)PTR_DAT_027153a8 = uVar8;
    __cxa_guard_release(PTR_DAT_027153a0);
  }
  do {
    if (plVar7 == (long *)0x0) {
      lVar9 = 0;
joined_r0x01064b54:
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      FUN_006d1640(lVar4,lVar9,0);
      FUN_006d1640(lVar4,0,*(undefined8 *)(*(long *)PTR_DAT_027155f8 + 0x50));
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar4 + 0x14c));
      return;
    }
    if (plVar7 == (long *)PTR_DAT_027153a8) {
      plVar7 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      goto joined_r0x01064b54;
    }
    plVar7 = (long *)*plVar7;
  } while( true );
}


