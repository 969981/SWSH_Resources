/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c7b10; name: FUN_006c7b10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006c7b10(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  puVar5 = PTR_DAT_02715288;
  puVar4 = PTR_DAT_02715280;
  if (*(long *)(*(long *)(param_1 + 0xe8) + 0x48) != 0) {
    plVar13 = *(long **)(*(long *)(param_1 + 0xe8) + 0x40);
    do {
      lVar9 = *plVar13;
      if (lVar9 == 0) {
LAB_006c7c14:
        lVar9 = *param_2;
      }
      else {
        if (*(int *)(lVar9 + 0x54) != 0) {
          piVar1 = (int *)(lVar9 + 0x54);
          iVar10 = *(int *)(lVar9 + 0x54);
          do {
            while( true ) {
              plVar12 = *(long **)(lVar9 + 0x58);
              if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                uVar8 = FUN_01590a70();
                *(undefined8 *)puVar5 = uVar8;
                __cxa_guard_release(puVar4);
              }
              while( true ) {
                if (plVar12 == (long *)0x0) goto LAB_006c7c14;
                if (plVar12 == (long *)puVar5) break;
                plVar12 = (long *)*plVar12;
              }
              iVar7 = *piVar1;
              if (iVar7 == iVar10) break;
              ClearExclusiveLocal();
              iVar10 = iVar7;
              if (iVar7 == 0) goto LAB_006c7c14;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar11 = 0;
              if (*(long *)(lVar9 + 0x60) != 0) {
                lVar11 = *(long *)(lVar9 + 0x60) + -0x50;
              }
              lVar9 = *param_2;
              goto joined_r0x006c7d30;
            }
            iVar10 = iVar7;
          } while (iVar7 != 0);
          goto LAB_006c7c14;
        }
        lVar9 = *param_2;
      }
      lVar11 = 0;
joined_r0x006c7d30:
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
        piVar1 = (int *)(lVar9 + 0x54);
        iVar10 = *(int *)(lVar9 + 0x54);
        do {
          while( true ) {
            plVar12 = *(long **)(lVar9 + 0x58);
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
              uVar8 = FUN_01590a70();
              *(undefined8 *)puVar5 = uVar8;
              __cxa_guard_release(puVar4);
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_006c7ce0;
              if (plVar12 == (long *)puVar5) break;
              plVar12 = (long *)*plVar12;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar7;
            if (iVar7 == 0) goto LAB_006c7ce0;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x60);
            if (lVar9 != 0) {
              uVar6 = lVar11 == lVar9 + -0x50;
              (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
              goto joined_r0x006c7d58;
            }
            break;
          }
          iVar10 = iVar7;
        } while (iVar7 != 0);
      }
LAB_006c7ce0:
      uVar6 = lVar11 == 0;
joined_r0x006c7d58:
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      if ((bool)uVar6) {
        lVar11 = *(long *)(param_1 + 0xe8);
        lVar9 = *(long *)(lVar11 + 0x48);
        plVar12 = (long *)(*(long *)(lVar11 + 0x40) + lVar9 * 8);
        plVar13 = plVar13 + 1;
        if (plVar13 != plVar12) {
          do {
            if (plVar13[-1] != 0) {
              (**(code **)(*(long *)(plVar13[-1] + 0x48) + 0x18))();
              plVar13[-1] = 0;
            }
            plVar13[-1] = *plVar13;
            *plVar13 = 0;
            plVar13 = plVar13 + 1;
          } while (plVar12 != plVar13);
          lVar9 = *(long *)(lVar11 + 0x48);
          plVar13 = (long *)(*(long *)(lVar11 + 0x40) + lVar9 * 8);
        }
        if (plVar13[-1] != 0) {
          (**(code **)(*(long *)(plVar13[-1] + 0x48) + 0x18))();
          plVar13[-1] = 0;
          lVar9 = *(long *)(lVar11 + 0x48);
        }
        *(long *)(lVar11 + 0x48) = lVar9 + -1;
        return;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 !=
             (long *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x40) +
                     *(long *)(*(long *)(param_1 + 0xe8) + 0x48) * 8));
  }
  return;
}


