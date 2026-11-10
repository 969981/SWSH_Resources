/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101b020; name: FUN_0101b020
 */


/* WARNING: Removing unreachable block (ram,0x0101b1d8) */
/* WARNING: Removing unreachable block (ram,0x0101b268) */
/* WARNING: Removing unreachable block (ram,0x0101b2f8) */
/* WARNING: Removing unreachable block (ram,0x0101b388) */
/* WARNING: Removing unreachable block (ram,0x0101b418) */

void FUN_0101b020(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  local_78 = param_1;
  lVar6 = FUN_0101b8d0(auStack_70,param_2,&local_78);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(long *)(param_1 + 0x50) = lVar6;
  lVar6 = FUN_006ec260(auStack_68,param_2);
  FUN_006d1120();
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(long *)(param_1 + 0x58) = lVar6;
  lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x128);
  lVar10 = *(long *)(lVar6 + 0x298);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar1 = lVar10;
  if (*(long *)(lVar10 + 0x128) != 0) {
    lVar1 = *(long *)(lVar10 + 0x128);
  }
  puVar7 = (undefined8 *)(*(code *)**(undefined8 **)(lVar1 + 0x50))((undefined8 *)(lVar1 + 0x50));
  if (((*PTR_DAT_027153a0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_027153a0), iVar5 != 0))
  {
    uVar9 = FUN_006ec130();
    *(undefined8 *)PTR_DAT_027153a8 = uVar9;
    __cxa_guard_release(PTR_DAT_027153a0);
  }
  lVar12 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      if (puVar7 == (undefined8 *)PTR_DAT_027153a8) {
        plVar11 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        lVar12 = lVar1;
        goto LAB_0101b164;
      }
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)0x0);
    lVar12 = 0;
  }
LAB_0101b164:
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  lVar10 = *(long *)(param_1 + 0x58);
  lVar13 = *(long *)(*(long *)(param_1 + 0x60) + 0x130);
  lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x68);
  lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x70);
  uVar9 = *(undefined8 *)(*(long *)PTR_DAT_027155f8 + 0x50);
  lVar8 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar10 + 0x158);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x14c));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0101b1f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0101b1f8:
  FUN_006d1640(lVar10,lVar2,0);
  FUN_006d1640(lVar10,lVar13,0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x14c));
  lVar10 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar13 + 0x158);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x14c));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0101b288;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0101b288:
  FUN_006d1640(lVar13,lVar6,0);
  FUN_006d1640(lVar13,lVar12,0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x14c));
  lVar10 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar2 + 0x158);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x14c));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0101b318;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0101b318:
  FUN_006d1640(lVar2,lVar6,0);
  FUN_006d1640(lVar2,lVar12,0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar2 + 0x14c));
  lVar10 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar6 + 0x158);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x14c));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0101b3a8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0101b3a8:
  FUN_006d1640(lVar6,lVar1,0);
  FUN_006d1640(lVar6,0,uVar9);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x14c));
  lVar6 = nn::os::GetCurrentThread();
  plVar11 = (long *)(lVar1 + 0x158);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x14c));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0101b438;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0101b438:
  FUN_006d1640(lVar1,*(undefined8 *)(param_1 + 0x50),0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar1 + 0x14c));
  return;
}


