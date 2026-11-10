/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a832d0; name: FUN_00a832d0
 */


/* WARNING: Removing unreachable block (ram,0x00a83374) */

void FUN_00a832d0(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x3f0);
  plVar4 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
  if (((*PTR_DAT_02715340 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02715340), iVar3 != 0))
  {
    if (((*PTR_DAT_02710ba0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02710ba0), iVar3 != 0)) {
      if (((*PTR_DAT_027107f0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar3 != 0)) {
        *(undefined8 *)PTR_DAT_027107f8 = 0;
        __cxa_guard_release(PTR_DAT_027107f0);
      }
      *(undefined **)PTR_DAT_02710b90 = PTR_DAT_027107f8;
      __cxa_guard_release(PTR_DAT_02710ba0);
    }
    *(undefined **)PTR_DAT_02715348 = PTR_DAT_02710b90;
    __cxa_guard_release(PTR_DAT_02715340);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (plVar4 == (long *)PTR_DAT_02715348) goto LAB_00a83334;
  }
  lVar7 = 0;
LAB_00a83334:
  lVar6 = *(long *)(param_2 + 0x170);
  lVar5 = nn::os::GetCurrentThread();
  plVar4 = (long *)(lVar6 + 0x158);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x14c));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00a83394;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00a83394:
  FUN_006d1640(lVar6,lVar7,0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x14c));
  return;
}


