/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aad1c0; name: FUN_00aad1c0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00aad1c0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long local_40;
  long local_38;
  long local_28;
  
  if (*(int *)(param_1 + 0x4c0) != 2) {
    return 0;
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  local_38 = *(long *)(param_1 + 0x4b8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_28,lVar12,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  lVar12 = local_28;
  puVar4 = PTR_DAT_02719750;
  if ((local_28 == 0) || (*(int *)(local_28 + 0x54) == 0)) {
    lVar8 = 0;
  }
  else {
    piVar1 = (int *)(local_28 + 0x54);
    puVar9 = (undefined8 *)PTR_DAT_02719758;
    iVar11 = *(int *)(local_28 + 0x54);
    do {
      while( true ) {
        puVar13 = *(undefined8 **)(lVar12 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar9 = (undefined8 *)PTR_DAT_02719758;
          if (iVar5 != 0) {
            uVar7 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02719758 = uVar7;
            __cxa_guard_release(puVar4);
            puVar9 = (undefined8 *)PTR_DAT_02719758;
          }
        }
        lVar8 = 0;
        if (puVar13 == (undefined8 *)0x0) goto LAB_00aad330;
        while (puVar13 != puVar9) {
          puVar13 = (undefined8 *)*puVar13;
          if (puVar13 == (undefined8 *)0x0) {
            lVar8 = 0;
            goto LAB_00aad330;
          }
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar11) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x60);
          lVar8 = 0;
          if (lVar12 != 0) {
            lVar8 = lVar12 + -0x50;
          }
          goto LAB_00aad330;
        }
        lVar8 = 0;
        iVar11 = iVar5;
        if (iVar5 == 0) goto LAB_00aad330;
      }
      ClearExclusiveLocal();
      lVar8 = 0;
      iVar11 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00aad330:
  uVar6 = FUN_00aaefb0(lVar8 + 0x50);
  lVar12 = lVar8;
  if ((uVar6 & 1) == 0) {
    lVar12 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar12 != 0) {
    FUN_00cc51d0(&local_40,lVar12);
    lVar8 = local_40;
    puVar4 = PTR_DAT_02716148;
    if (local_40 != 0) {
      if (*(int *)(local_40 + 0x54) == 0) {
        bVar3 = false;
      }
      else {
        if (local_40 == 0) {
          lVar12 = 0;
          bVar3 = true;
          goto joined_r0x00aad46c;
        }
        if (*(int *)(local_40 + 0x54) == 0) {
LAB_00aad520:
          lVar12 = 0;
          bVar3 = true;
        }
        else {
          piVar1 = (int *)(local_40 + 0x54);
          puVar10 = PTR_DAT_02716150;
          iVar11 = *(int *)(local_40 + 0x54);
          do {
            while( true ) {
              plVar14 = *(long **)(lVar8 + 0x58);
              if ((*puVar4 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(puVar4);
                puVar10 = PTR_DAT_02716150;
                if (iVar5 != 0) {
                  uVar7 = FUN_00706e40();
                  *(undefined8 *)PTR_DAT_02716150 = uVar7;
                  __cxa_guard_release(puVar4);
                  puVar10 = PTR_DAT_02716150;
                }
              }
              while( true ) {
                if (plVar14 == (long *)0x0) goto LAB_00aad520;
                if (plVar14 == (long *)puVar10) break;
                plVar14 = (long *)*plVar14;
              }
              iVar5 = *piVar1;
              if (iVar5 == iVar11) break;
              ClearExclusiveLocal();
              lVar12 = 0;
              bVar3 = true;
              iVar11 = iVar5;
              if (iVar5 == 0) goto joined_r0x00aad518;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar8 = *(long *)(lVar8 + 0x60);
              if (lVar8 == 0) goto LAB_00aad520;
              lVar12 = lVar8 + -0x50;
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
              bVar3 = true;
              break;
            }
            lVar12 = 0;
            bVar3 = true;
            iVar11 = iVar5;
          } while (iVar5 != 0);
        }
      }
joined_r0x00aad518:
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if (bVar3) {
        bVar3 = true;
        goto joined_r0x00aad46c;
      }
    }
  }
  bVar3 = false;
joined_r0x00aad46c:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  if (!bVar3) {
    return 0;
  }
  return lVar12;
}


