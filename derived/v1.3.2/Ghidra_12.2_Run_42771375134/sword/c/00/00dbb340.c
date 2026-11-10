/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbb340; name: FUN_00dbb340
 */


void FUN_00dbb340(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong local_68;
  
  plVar2 = *(long **)(param_1 + 0xb0);
  plVar3 = *(long **)(param_1 + 0xb8);
  do {
    if (plVar2 == plVar3) {
      return;
    }
    uVar7 = (**(code **)(*(long *)*plVar2 + 0x88))();
    if (((uVar7 & 1) == 0) && (lVar12 = *plVar2, *param_2 == *(long *)(lVar12 + 0x1a0))) {
      lVar8 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar12 + 0xf0);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xe4));
            while (*plVar1 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00dbb3e4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00dbb3e4:
      plVar13 = *(long **)(lVar12 + 0x140);
      plVar4 = *(long **)(lVar12 + 0x148);
      if (plVar13 == plVar4) {
LAB_00dbb464:
        plVar4 = *(long **)(lVar12 + 0x118);
        for (plVar13 = *(long **)(lVar12 + 0x110); plVar13 != plVar4; plVar13 = plVar13 + 1) {
          lVar10 = *plVar13;
          puVar11 = (undefined8 *)(lVar10 + 8);
          plVar9 = (long *)(**(code **)*puVar11)(puVar11);
          lVar8 = FUN_00c781c0();
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)lVar8) {
              lVar10 = lVar10 + -0x48;
              local_68 = FUN_0069d250(lVar10,param_3);
              if ((local_68 & 0xff) != 0) {
                FUN_0069d260(lVar10,&local_68);
              }
              break;
            }
          }
        }
      }
      else {
        do {
          lVar10 = *plVar13;
          puVar11 = (undefined8 *)(lVar10 + 8);
          plVar9 = (long *)(**(code **)*puVar11)(puVar11);
          lVar8 = FUN_00c781c0();
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)lVar8) {
              lVar10 = lVar10 + -0x48;
              local_68 = FUN_0069d250(lVar10,param_3);
              if ((local_68 & 0xff) != 0) {
                FUN_0069d260(lVar10,&local_68);
              }
              break;
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar4);
        if (*(long **)(lVar12 + 0x148) == plVar4) goto LAB_00dbb464;
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xe4));
    }
    plVar2 = plVar2 + 1;
  } while( true );
}


