/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00caa0b0; name: FUN_00caa0b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00caa0b0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  long local_68;
  
  puVar4 = PTR_DAT_0271c2b8;
  if (*(int *)(param_2 + 8) != 0) {
    plVar1 = (long *)(param_1 + 0x15a0);
    uVar16 = 0;
    do {
      lVar6 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1594));
            while (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_00caa138;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_00caa138:
      lVar6 = *(long *)(param_2 + 0x10);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      if ((-1 < (int)uVar16) && ((int)uVar16 < *(int *)(param_2 + 8))) {
        uVar10 = (ulong)(int)uVar16;
        if (*(ulong *)(*(long *)(param_2 + 0x38) + 0x48) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar12 = *(long *)(*(long *)(param_2 + 0x38) + 0x40);
        plVar14 = (long *)(lVar12 + uVar10 * 0x28 + 0x10);
        lVar11 = *plVar14;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        lVar6 = *(long *)(param_2 + 0x10);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar7 = *plVar14;
        *plVar14 = lVar6;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        lVar12 = lVar12 + uVar10 * 0x28;
        *(undefined1 *)(lVar12 + 0x18) = 0;
        *(undefined8 *)(lVar12 + 0x1c) = 0;
        lVar6 = lVar11;
      }
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1594));
      if (lVar6 != 0) {
        lVar12 = *(long *)(lVar6 + 0x68);
        if (lVar12 != 0) {
          plVar14 = (long *)(lVar12 + 0x48);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          if (*(int *)(lVar12 + 0x54) != 0) {
            lVar11 = *(long *)(lVar6 + 0x68);
            *(undefined8 *)(lVar6 + 0x68) = 0;
            if (lVar11 != 0) {
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
            }
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(plVar14);
            puVar15 = *(undefined8 **)(lVar12 + 0x60);
            if (puVar15 == (undefined8 *)0x0) {
LAB_00caa290:
              uVar13 = _DAT_00000070;
            }
            else {
              puVar8 = (undefined8 *)(**(code **)*puVar15)(puVar15);
              if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar5 != 0)) {
                uVar9 = FUN_00c72b60();
                *(undefined8 *)puVar4 = uVar9;
                __cxa_guard_release(PTR_DAT_0271c2b0);
              }
              if (puVar8 == (undefined8 *)0x0) goto LAB_00caa290;
              for (; puVar8 != (undefined8 *)puVar4; puVar8 = (undefined8 *)*puVar8) {
              }
              uVar13 = *(undefined4 *)(puVar15 + 4);
            }
            local_68 = lVar12;
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(plVar14);
            FUN_00ca9590(param_1,0,&local_68,uVar13);
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar14);
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))(plVar14);
          }
        }
        lVar11 = *(long *)(lVar6 + 0x70);
        if (lVar11 == 0) {
          *(undefined4 *)(lVar6 + 0x88) = 1;
        }
        else {
          plVar14 = (long *)(lVar11 + 0x48);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          if (*(int *)(lVar11 + 0x54) != 0) {
            lVar7 = *(long *)(lVar6 + 0x70);
            *(undefined8 *)(lVar6 + 0x70) = 0;
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
            }
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar14);
            puVar15 = *(undefined8 **)(lVar11 + 0x60);
            if (puVar15 == (undefined8 *)0x0) {
LAB_00caa3ac:
              uVar13 = _DAT_00000070;
            }
            else {
              puVar8 = (undefined8 *)(**(code **)*puVar15)(puVar15);
              if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar5 != 0)) {
                uVar9 = FUN_00c72b60();
                *(undefined8 *)puVar4 = uVar9;
                __cxa_guard_release(PTR_DAT_0271c2b0);
              }
              if (puVar8 == (undefined8 *)0x0) goto LAB_00caa3ac;
              for (; puVar8 != (undefined8 *)puVar4; puVar8 = (undefined8 *)*puVar8) {
              }
              uVar13 = *(undefined4 *)(puVar15 + 4);
            }
            local_68 = lVar11;
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar14);
            FUN_00ca9590(param_1,0,&local_68,uVar13);
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))(plVar14);
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))(plVar14);
          }
          *(undefined4 *)(lVar6 + 0x88) = 1;
          (**(code **)(*plVar14 + 0x18))(plVar14);
        }
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_2 + 8));
  }
  return;
}


