/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a72ba0; name: FUN_00a72ba0
 */


void FUN_00a72ba0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  lVar7 = *(long *)(param_1 + 0x5c0);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x108) != 0)) {
    plVar8 = *(long **)(lVar7 + 0x100);
    plVar2 = plVar8 + *(long *)(lVar7 + 0x108);
    do {
      uVar6 = (**(code **)(*(long *)*plVar8 + 0x40))();
      if ((uVar6 & 1) == 0) {
        lVar9 = *plVar8;
        lVar7 = nn::os::GetCurrentThread();
        plVar1 = (long *)(lVar9 + 0xf0);
        do {
          if (*plVar1 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xe4));
              while (*plVar1 == 0) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar5) {
                  *plVar1 = lVar7;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00a72c30;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00a72c30:
        plVar10 = *(long **)(lVar9 + 0x140);
        plVar3 = *(long **)(lVar9 + 0x148);
        if (plVar10 == plVar3) {
LAB_00a72c74:
          plVar3 = *(long **)(lVar9 + 0x118);
          for (plVar10 = *(long **)(lVar9 + 0x110); plVar10 != plVar3; plVar10 = plVar10 + 1) {
            lVar7 = *plVar10;
            uVar6 = FUN_00a8cbe0(lVar7 + 8);
            if ((uVar6 & 1) != 0) {
              FUN_00727800(lVar7 + -0x48,0);
            }
          }
        }
        else {
          do {
            lVar7 = *plVar10;
            uVar6 = FUN_00a8cbe0(lVar7 + 8);
            if ((uVar6 & 1) != 0) {
              FUN_00727800(lVar7 + -0x48,0);
            }
            plVar10 = plVar10 + 1;
          } while (plVar3 != plVar10);
          if (*(long **)(lVar9 + 0x148) == plVar3) goto LAB_00a72c74;
        }
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xe4));
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
  }
  return;
}


