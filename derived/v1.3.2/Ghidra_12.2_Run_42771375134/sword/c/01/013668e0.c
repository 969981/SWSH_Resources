/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013668e0; name: FUN_013668e0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_013668e0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  uVar8 = param_2[1];
  puVar9 = (undefined8 *)(param_1 + 0x80);
  *puVar9 = *param_2;
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  plVar15 = *(long **)(param_1 + 0xb8);
  plVar16 = *(long **)(param_1 + 0xc0);
  if (plVar15 != plVar16) {
LAB_01366974:
    lVar12 = *plVar15;
    if (lVar12 != 0) {
      plVar11 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar14 = plVar15[1];
      if (*(int *)(lVar12 + 0x54) != 0) {
        piVar1 = (int *)(lVar12 + 0x54);
        iVar6 = *(int *)(lVar12 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar12 + 0x58);
            if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
              uVar8 = FUN_00a87090();
              *(undefined8 *)puVar5 = uVar8;
              __cxa_guard_release(puVar4);
            }
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_01366a90;
              if (plVar10 == (long *)puVar5) break;
              plVar10 = (long *)*plVar10;
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar6) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = *(long *)(lVar12 + 0x60);
              if (lVar12 != 0) {
                puVar13 = (undefined8 *)0x0;
                if (*(long *)(lVar14 + 0x68) == 0) goto LAB_01366a64;
                puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x68) + 0x60);
                if (puVar13 == (undefined8 *)0x0) goto LAB_01366a60;
                plVar10 = (long *)(**(code **)*puVar13)(puVar13);
                if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
                  uVar8 = FUN_00a87090();
                  *(undefined8 *)puVar5 = uVar8;
                  __cxa_guard_release(puVar4);
                }
                goto joined_r0x0136696c;
              }
              goto LAB_01366a90;
            }
            iVar6 = iVar7;
            if (iVar7 == 0) goto LAB_01366a90;
          }
          ClearExclusiveLocal();
          iVar6 = iVar7;
        } while (iVar7 != 0);
      }
      goto LAB_01366a90;
    }
    goto LAB_01366aa0;
  }
LAB_01366aac:
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  plVar15 = *(long **)(param_1 + 0xe8);
  plVar16 = *(long **)(param_1 + 0xf0);
joined_r0x01366ab8:
  if (plVar15 == plVar16) {
    return;
  }
  lVar12 = *plVar15;
  if (lVar12 != 0) {
    plVar11 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar14 = plVar15[1];
    if (*(int *)(lVar12 + 0x54) != 0) {
      piVar1 = (int *)(lVar12 + 0x54);
      iVar6 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar12 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)puVar5 = uVar8;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_01366c1c;
            if (plVar10 == (long *)puVar5) break;
            plVar10 = (long *)*plVar10;
          }
          iVar7 = *piVar1;
          if (iVar7 != iVar6) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = *(long *)(lVar12 + 0x60);
            if (lVar12 != 0) {
              puVar13 = (undefined8 *)0x0;
              if (*(long *)(lVar14 + 0x68) == 0) goto LAB_01366bf0;
              puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x68) + 0x60);
              if (puVar13 == (undefined8 *)0x0) goto LAB_01366bec;
              plVar10 = (long *)(**(code **)*puVar13)(puVar13);
              if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
                uVar8 = FUN_00a87090();
                *(undefined8 *)puVar5 = uVar8;
                __cxa_guard_release(puVar4);
              }
              goto joined_r0x01366af4;
            }
            goto LAB_01366c1c;
          }
          iVar6 = iVar7;
          if (iVar7 == 0) goto LAB_01366c1c;
        }
        ClearExclusiveLocal();
        iVar6 = iVar7;
      } while (iVar7 != 0);
    }
    goto LAB_01366c1c;
  }
  goto LAB_01366c2c;
joined_r0x0136696c:
  if (plVar10 == (long *)0x0) goto LAB_01366a60;
  if (plVar10 == (long *)puVar5) {
    puVar13 = puVar13 + -10;
    goto LAB_01366a64;
  }
  plVar10 = (long *)*plVar10;
  goto joined_r0x0136696c;
LAB_01366a60:
  puVar13 = (undefined8 *)0x0;
LAB_01366a64:
  puVar13[0x17] = *(undefined8 *)(param_1 + 0x88);
  puVar13[0x16] = *puVar9;
  *(undefined1 *)(puVar13 + 0x18) = 1;
  plVar10 = (long *)(lVar12 + -8);
  (**(code **)(*plVar10 + 0x18))(plVar10);
LAB_01366a90:
  (**(code **)(*plVar11 + 0x18))(plVar11);
LAB_01366aa0:
  plVar15 = plVar15 + 2;
  if (plVar15 == plVar16) goto LAB_01366aac;
  goto LAB_01366974;
joined_r0x01366af4:
  if (plVar10 == (long *)0x0) goto LAB_01366bec;
  if (plVar10 == (long *)puVar5) {
    puVar13 = puVar13 + -10;
    goto LAB_01366bf0;
  }
  plVar10 = (long *)*plVar10;
  goto joined_r0x01366af4;
LAB_01366bec:
  puVar13 = (undefined8 *)0x0;
LAB_01366bf0:
  puVar13[0x17] = *(undefined8 *)(param_1 + 0x88);
  puVar13[0x16] = *puVar9;
  *(undefined1 *)(puVar13 + 0x18) = 1;
  plVar10 = (long *)(lVar12 + -8);
  (**(code **)(*plVar10 + 0x18))(plVar10);
LAB_01366c1c:
  (**(code **)(*plVar11 + 0x18))(plVar11);
LAB_01366c2c:
  plVar15 = plVar15 + 2;
  goto joined_r0x01366ab8;
}


