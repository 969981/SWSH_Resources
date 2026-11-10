/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00790e80; name: FUN_00790e80
 */


void FUN_00790e80(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x780);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x774));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00790ee4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00790ee4:
  puVar7 = *(undefined8 **)(param_1 + 0x748);
  if (puVar7 == *(undefined8 **)(param_1 + 0x750)) {
    FUN_00792c50(param_1 + 0x740,param_2);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x758);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,puVar7 + 4);
      uVar8 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[3];
      puVar7[2] = param_2[2];
      puVar7[3] = uVar3;
      *puVar7 = uVar8;
      puVar7[1] = uVar2;
    }
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *(long *)(param_1 + 0x748) = *(long *)(param_1 + 0x748) + 0x80;
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x774));
  return;
}


