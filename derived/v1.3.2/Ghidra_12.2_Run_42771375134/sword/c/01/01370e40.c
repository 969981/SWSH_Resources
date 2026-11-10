/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01370e40; name: FUN_01370e40
 */


undefined8 FUN_01370e40(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_01370e98:
    iVar1 = *(int *)(param_1 + 0x88);
  }
  else {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar9 != (undefined8 *)0x0) {
      plVar4 = (long *)(**(code **)*puVar9)(puVar9);
      plVar5 = (long *)FUN_0132d9a0();
      if (plVar4 != (long *)0x0) {
        do {
          if (plVar4 == plVar5) {
            puVar9 = puVar9 + -10;
            iVar1 = *(int *)(param_1 + 0x88);
            goto joined_r0x01370fa8;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
        goto LAB_01370e98;
      }
    }
    iVar1 = *(int *)(param_1 + 0x88);
  }
  puVar9 = (undefined8 *)0x0;
joined_r0x01370fa8:
  if (iVar1 == 1) {
LAB_01370f68:
    uVar7 = 1;
  }
  else {
    if (iVar1 == 0) {
      lVar10 = puVar9[0xc];
      lVar6 = nn::os::GetCurrentThread();
      plVar4 = (long *)(lVar10 + 0x70);
      do {
        if (*plVar4 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 100));
            while (*plVar4 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01370f08;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01370f08:
      lVar6 = FUN_012d5dd0(lVar10,0x798cca603d6e6730);
      if (lVar6 != lVar10 + 0x980) {
        pcVar8 = *(code **)(lVar6 + 0x18);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar6 + 0x20) = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (*pcVar8)(lVar6 + 0x30);
        }
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(lVar10 + 100));
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
        goto LAB_01370f68;
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 100));
    }
    uVar7 = 0;
  }
  return uVar7;
}


