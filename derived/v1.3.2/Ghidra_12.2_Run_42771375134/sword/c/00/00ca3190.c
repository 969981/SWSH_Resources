/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca3190; name: FUN_00ca3190
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ca3190(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  uVar11 = *param_1;
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a470(&local_28,uVar11,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar10 = local_28;
  puVar4 = PTR_DAT_0271c1e8;
  if ((local_28 == 0) || (*(int *)(local_28 + 0x54) == 0)) {
    uVar11 = *param_1;
    local_48 = *param_2;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00c7a400(&local_40,uVar11,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    lVar10 = local_40;
    puVar4 = PTR_DAT_027150a8;
    lVar5 = 0;
    if (local_40 != 0) {
      if (*(int *)(local_40 + 0x54) != 0) {
        if ((local_40 != 0) && (*(int *)(local_40 + 0x54) != 0)) {
          piVar1 = (int *)(local_40 + 0x54);
          puVar7 = PTR_DAT_027150b0;
          iVar8 = *(int *)(local_40 + 0x54);
          do {
            while( true ) {
              plVar9 = *(long **)(lVar10 + 0x58);
              if (((*puVar4 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(puVar4), puVar7 = PTR_DAT_027150b0, iVar6 != 0)) {
                uVar11 = FUN_00706e40();
                *(undefined8 *)PTR_DAT_027150b0 = uVar11;
                __cxa_guard_release(puVar4);
                puVar7 = PTR_DAT_027150b0;
              }
              while( true ) {
                if (plVar9 == (long *)0x0) goto LAB_00ca3480;
                if (plVar9 == (long *)puVar7) break;
                plVar9 = (long *)*plVar9;
              }
              iVar6 = *piVar1;
              if (iVar6 == iVar8) break;
              ClearExclusiveLocal();
              iVar8 = iVar6;
              if (iVar6 == 0) goto LAB_00ca3480;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar10 = *(long *)(lVar10 + 0x60);
              if (lVar10 != 0) {
                FUN_0069c750(lVar10 + -0x50);
                (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
                goto joined_r0x00ca3478;
              }
              break;
            }
            iVar8 = iVar6;
          } while (iVar6 != 0);
        }
LAB_00ca3480:
        FUN_0069c750(0);
      }
joined_r0x00ca3478:
      lVar5 = 0;
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
        lVar5 = local_40;
      }
    }
  }
  else {
    if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
      piVar1 = (int *)(local_28 + 0x54);
      puVar7 = PTR_DAT_0271c1f0;
      iVar8 = *(int *)(local_28 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar10 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(puVar4), puVar7 = PTR_DAT_0271c1f0, iVar6 != 0)) {
            uVar11 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_0271c1f0 = uVar11;
            __cxa_guard_release(puVar4);
            puVar7 = PTR_DAT_0271c1f0;
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_00ca3440;
            if (plVar9 == (long *)puVar7) break;
            plVar9 = (long *)*plVar9;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar6;
          if (iVar6 == 0) goto LAB_00ca3440;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x60);
          if (lVar10 != 0) {
            FUN_01061a40(lVar10 + -0x50);
            (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
            lVar5 = local_40;
            goto joined_r0x00ca3438;
          }
          break;
        }
        iVar8 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00ca3440:
    FUN_01061a40(0);
    lVar5 = local_40;
  }
joined_r0x00ca3438:
  local_40 = lVar5;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


