/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131eaf0; name: FUN_0131eaf0
 */


void FUN_0131eaf0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xa0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x94));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0131eb54;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0131eb54:
  lVar7 = *(long *)(param_1 + 0x60);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if ((ulong)((long)puVar2 - lVar7) < (ulong)((long)*(undefined8 **)(param_1 + 0x70) - lVar7)) {
    if (puVar2 == *(undefined8 **)(param_1 + 0x70)) {
      FUN_012c74e0((long *)(param_1 + 0x60),param_2);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar8;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      if ((code *)param_2[2] != (code *)0x0) {
        (*(code *)param_2[2])(param_2 + 4,puVar2 + 4);
        uVar8 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[3];
        puVar2[2] = param_2[2];
        puVar2[3] = uVar4;
        *puVar2 = uVar8;
        puVar2[1] = uVar3;
      }
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 0x80;
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x94));
  return;
}


