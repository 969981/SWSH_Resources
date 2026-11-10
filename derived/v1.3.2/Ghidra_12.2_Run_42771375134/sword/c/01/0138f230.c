/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138f230; name: FUN_0138f230
 */


void FUN_0138f230(long param_1,undefined8 param_2)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long local_68;
  
  puVar6 = PTR_DAT_02715080;
  puVar5 = PTR_DAT_02715078;
  plVar13 = *(long **)(param_1 + 0x3c8);
  plVar14 = *(long **)(param_1 + 0x3d0);
  if (plVar13 != plVar14) {
    do {
      lVar10 = *plVar13;
      if (lVar10 == 0) {
LAB_0138f338:
        local_68 = 0;
      }
      else {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
        if (*(int *)(lVar10 + 0x54) == 0) goto LAB_0138f338;
        piVar1 = (int *)(lVar10 + 0x54);
        iVar15 = *(int *)(lVar10 + 0x54);
        lVar11 = local_68;
        do {
          while( true ) {
            local_68 = lVar11;
            plVar17 = *(long **)(lVar10 + 0x58);
            lVar11 = local_68;
            if ((*puVar5 & 1) == 0) {
              iVar7 = __cxa_guard_acquire(puVar5);
              lVar11 = local_68;
              if (iVar7 != 0) {
                uVar8 = FUN_00a87090();
                *(undefined8 *)puVar6 = uVar8;
                __cxa_guard_release(puVar5);
                lVar11 = local_68;
              }
            }
            while( true ) {
              if (plVar17 == (long *)0x0) goto LAB_0138f338;
              if (plVar17 == (long *)puVar6) break;
              plVar17 = (long *)*plVar17;
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar15) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              local_68 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                local_68 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              goto LAB_0138f33c;
            }
            local_68 = 0;
            iVar15 = iVar7;
            if (iVar7 == 0) goto LAB_0138f33c;
          }
          ClearExclusiveLocal();
          local_68 = 0;
          iVar15 = iVar7;
        } while (iVar7 != 0);
      }
LAB_0138f33c:
      FUN_01025970(&local_68,param_2);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar14);
    plVar14 = *(long **)(param_1 + 0x3d0);
    plVar13 = *(long **)(param_1 + 0x3c8);
  }
  puVar5 = PTR_DAT_02715080;
  if ((long)plVar14 - (long)plVar13 != 8) {
    uVar16 = 0;
    do {
      uVar2 = uVar16 + 1;
      lVar10 = plVar13[uVar2];
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
LAB_0138f4a0:
        lVar11 = 0;
      }
      else {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar15 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            plVar13 = *(long **)(lVar10 + 0x58);
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_02715078), iVar7 != 0)) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)puVar5 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            while( true ) {
              if (plVar13 == (long *)0x0) goto LAB_0138f4a0;
              if (plVar13 == (long *)puVar5) break;
              plVar13 = (long *)*plVar13;
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar15) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar11 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                lVar11 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              goto LAB_0138f4a4;
            }
            lVar11 = 0;
            iVar15 = iVar7;
            if (iVar7 == 0) goto LAB_0138f4a4;
          }
          ClearExclusiveLocal();
          lVar11 = 0;
          iVar15 = iVar7;
        } while (iVar7 != 0);
      }
LAB_0138f4a4:
      lVar9 = *(long *)(lVar11 + 0x170);
      lVar10 = nn::os::GetCurrentThread();
      plVar13 = (long *)(lVar9 + 0x158);
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x14c));
            while (*plVar13 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0138f4f0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0138f4f0:
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x3c8) + uVar16 * 8);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
        lVar11 = 0;
      }
      else {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar15 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            puVar12 = *(undefined8 **)(lVar10 + 0x58);
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_02715078), iVar7 != 0)) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)puVar5 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            lVar11 = 0;
            if (puVar12 == (undefined8 *)0x0) goto LAB_0138f5b4;
            while (puVar12 != (undefined8 *)puVar5) {
              puVar12 = (undefined8 *)*puVar12;
              if (puVar12 == (undefined8 *)0x0) {
                lVar11 = 0;
                goto LAB_0138f5b4;
              }
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar15) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar11 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                lVar11 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              goto LAB_0138f5b4;
            }
            lVar11 = 0;
            iVar15 = iVar7;
            if (iVar7 == 0) goto LAB_0138f5b4;
          }
          ClearExclusiveLocal();
          lVar11 = 0;
          iVar15 = iVar7;
        } while (iVar7 != 0);
      }
LAB_0138f5b4:
      FUN_006d1640(lVar9,*(undefined8 *)(lVar11 + 0x170),0);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x14c));
      lVar10 = *(long *)(*(long *)(param_1 + 0x3c8) + uVar2 * 8);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
        lVar11 = 0;
      }
      else {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar15 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            puVar12 = *(undefined8 **)(lVar10 + 0x58);
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_02715078), iVar7 != 0)) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)puVar5 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            lVar11 = 0;
            if (puVar12 == (undefined8 *)0x0) goto LAB_0138f69c;
            while (puVar12 != (undefined8 *)puVar5) {
              puVar12 = (undefined8 *)*puVar12;
              if (puVar12 == (undefined8 *)0x0) {
                lVar11 = 0;
                goto LAB_0138f69c;
              }
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar15) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar11 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                lVar11 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              goto LAB_0138f69c;
            }
            lVar11 = 0;
            iVar15 = iVar7;
            if (iVar7 == 0) goto LAB_0138f69c;
          }
          ClearExclusiveLocal();
          lVar11 = 0;
          iVar15 = iVar7;
        } while (iVar7 != 0);
      }
LAB_0138f69c:
      lVar9 = *(long *)(lVar11 + 0x178);
      lVar10 = nn::os::GetCurrentThread();
      plVar13 = (long *)(lVar9 + 0x158);
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x14c));
            while (*plVar13 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0138f6e8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0138f6e8:
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x3c8) + uVar16 * 8);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
        lVar11 = 0;
      }
      else {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar15 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            puVar12 = *(undefined8 **)(lVar10 + 0x58);
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_02715078), iVar7 != 0)) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)puVar5 = uVar8;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            lVar11 = 0;
            if (puVar12 == (undefined8 *)0x0) goto LAB_0138f7ac;
            while (puVar12 != (undefined8 *)puVar5) {
              puVar12 = (undefined8 *)*puVar12;
              if (puVar12 == (undefined8 *)0x0) {
                lVar11 = 0;
                goto LAB_0138f7ac;
              }
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar15) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar15 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar11 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                lVar11 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              goto LAB_0138f7ac;
            }
            lVar11 = 0;
            iVar15 = iVar7;
            if (iVar7 == 0) goto LAB_0138f7ac;
          }
          ClearExclusiveLocal();
          lVar11 = 0;
          iVar15 = iVar7;
        } while (iVar7 != 0);
      }
LAB_0138f7ac:
      FUN_006d1640(lVar9,*(undefined8 *)(lVar11 + 0x178),0);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x14c));
      plVar13 = *(long **)(param_1 + 0x3c8);
      uVar16 = uVar2;
    } while (uVar2 < (*(long *)(param_1 + 0x3d0) - (long)plVar13 >> 3) - 1U);
  }
  return;
}


