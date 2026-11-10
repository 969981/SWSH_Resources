/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca9c30; name: FUN_00ca9c30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ca9c30(long param_1,long param_2)

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
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long local_68;
  
  puVar4 = PTR_DAT_0271c2b8;
  if (*(int *)(param_2 + 8) != 0) {
    plVar1 = (long *)(param_1 + 0x15a0);
    uVar15 = 0;
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
              if (cVar2 == '\0') goto LAB_00ca9cb8;
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
LAB_00ca9cb8:
      lVar6 = *(long *)(param_2 + 0x10);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)(param_2 + 8))) {
        uVar13 = (ulong)(int)uVar15;
        if (*(ulong *)(*(long *)(param_2 + 0x38) + 0x48) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar16 = *(long *)(*(long *)(param_2 + 0x38) + 0x40);
        plVar10 = (long *)(lVar16 + uVar13 * 0x28 + 0x10);
        lVar11 = *plVar10;
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
        lVar7 = *plVar10;
        *plVar10 = lVar6;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
        lVar16 = lVar16 + uVar13 * 0x28;
        *(undefined1 *)(lVar16 + 0x18) = 0;
        *(undefined8 *)(lVar16 + 0x1c) = 0;
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
        plVar10 = (long *)(lVar6 + 0x48);
        if (*(int *)(lVar6 + 0x54) != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(plVar10);
          puVar14 = *(undefined8 **)(lVar6 + 0x60);
          if (puVar14 == (undefined8 *)0x0) {
LAB_00ca9de0:
            uVar12 = _DAT_00000070;
          }
          else {
            puVar8 = (undefined8 *)(**(code **)*puVar14)(puVar14);
            if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar5 != 0)) {
              uVar9 = FUN_00c72b60();
              *(undefined8 *)puVar4 = uVar9;
              __cxa_guard_release(PTR_DAT_0271c2b0);
            }
            if (puVar8 == (undefined8 *)0x0) goto LAB_00ca9de0;
            for (; puVar8 != (undefined8 *)puVar4; puVar8 = (undefined8 *)*puVar8) {
            }
            uVar12 = *(undefined4 *)(puVar14 + 4);
          }
          local_68 = lVar6;
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(plVar10);
          FUN_00ca9590(param_1,0,&local_68,uVar12);
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar10);
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))(plVar10);
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_2 + 8));
  }
  return;
}


