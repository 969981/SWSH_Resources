/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01310250; name: FUN_01310250
 */


void FUN_01310250(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x2d0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2c4));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_013102b0;
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
LAB_013102b0:
  puVar2 = (undefined8 *)(param_1 + 400);
  uVar8 = FUN_012ecf10(puVar2,4);
  if (((uVar8 & 1) == 0) || (uVar8 = FUN_012ecf10(param_1 + 0x180,0), (uVar8 & 1) == 0)) {
    uVar8 = FUN_012ecf10(puVar2,1);
    if ((uVar8 & 1) != 0) {
      puVar3 = (undefined8 *)(param_1 + 0x180);
      uVar8 = FUN_012ecf10(puVar3,0);
      if ((uVar8 & 1) == 0) {
        puVar4 = *(undefined8 **)(param_1 + 0x1a8);
        if (puVar4 == *(undefined8 **)(param_1 + 0x1b0)) {
          FUN_01310960(param_1 + 0x1a0,puVar3);
        }
        else {
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01310418;
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar9;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          uVar9 = *(undefined8 *)(param_1 + 0x188);
          *puVar4 = *puVar3;
          puVar4[1] = uVar9;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
          *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 0x10;
        }
      }
    }
    FUN_012ecfa0(puVar2,1,0);
    puVar3 = *(undefined8 **)(param_1 + 0x1a8);
    if (puVar3 == *(undefined8 **)(param_1 + 0x1b0)) {
      FUN_01310960(param_1 + 0x1a0,puVar2);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 0x1b8);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01310418:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar9;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      uVar9 = *(undefined8 *)(param_1 + 0x198);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 0x10;
    }
    *(undefined8 *)(param_1 + 400) = 0x7812cfa83cd0147f;
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2c4));
  return;
}


