/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142bba0; name: FUN_0142bba0
 */


undefined8 FUN_0142bba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined2 local_4c [2];
  undefined8 local_48;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x70);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0142bc0c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0142bc0c:
  lVar6 = FUN_012d5dd0(param_1,param_2);
  if (lVar6 == param_1 + 0x980) {
    uVar8 = 0;
  }
  else {
    if (((*PTR_DAT_02729b60 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02729b60), iVar5 != 0)) {
      sVar2 = *(short *)PTR_DAT_02728f10;
      *(short *)PTR_DAT_02728f10 = sVar2 + 1;
      *(short *)PTR_DAT_02729b68 = sVar2;
      __cxa_guard_release(PTR_DAT_02729b60);
    }
    local_4c[0] = *(undefined2 *)PTR_DAT_02729b68;
    local_48 = param_3;
    (**(code **)(lVar6 + 0x10))(lVar6 + 0x30,&local_48,local_4c);
    pcVar7 = *(code **)(lVar6 + 0x18);
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (*pcVar7)(lVar6 + 0x30);
    }
    uVar8 = 1;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  return uVar8;
}


