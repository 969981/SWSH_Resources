/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca2d70; name: FUN_00ca2d70
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ca2d70(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  uVar13 = *param_2;
  local_50 = *param_3;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN_00c7a470(&local_48,uVar13,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar12 = local_48;
  puVar5 = PTR_DAT_0271c1f0;
  puVar4 = PTR_DAT_0271c1e8;
  if ((local_48 == 0) || (*(int *)(local_48 + 0x54) == 0)) {
    uVar13 = *param_2;
    local_60 = *param_3;
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    FUN_00c7a400(&local_58,uVar13,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    lVar12 = local_58;
    puVar5 = PTR_DAT_027150b0;
    puVar4 = PTR_DAT_027150a8;
    lVar6 = 0;
    if (local_58 != 0) {
      if (*(int *)(local_58 + 0x54) != 0) {
        if ((local_58 != 0) && (*(int *)(local_58 + 0x54) != 0)) {
          piVar1 = (int *)(local_58 + 0x54);
          iVar8 = *(int *)(local_58 + 0x54);
          do {
            while( true ) {
              plVar10 = *(long **)(lVar12 + 0x58);
              if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
                uVar13 = FUN_00706e40();
                *(undefined8 *)puVar5 = uVar13;
                __cxa_guard_release(puVar4);
              }
              while( true ) {
                if (plVar10 == (long *)0x0) goto LAB_00ca3014;
                if (plVar10 == (long *)puVar5) break;
                plVar10 = (long *)*plVar10;
              }
              iVar7 = *piVar1;
              if (iVar7 == iVar8) break;
              ClearExclusiveLocal();
              iVar8 = iVar7;
              if (iVar7 == 0) goto LAB_00ca3014;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = *(long *)(lVar12 + 0x60);
              if (lVar12 != 0) {
                iVar8 = FUN_0069c6d0(lVar12 + -0x50);
                (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
                puVar4 = PTR_DAT_027150a8;
                puVar5 = PTR_DAT_027150b0;
                goto joined_r0x00ca300c;
              }
              break;
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
LAB_00ca3014:
        iVar8 = FUN_0069c6d0(0);
        puVar4 = PTR_DAT_027150a8;
        puVar5 = PTR_DAT_027150b0;
joined_r0x00ca300c:
        PTR_DAT_027150a8 = puVar4;
        PTR_DAT_027150b0 = puVar5;
        if (iVar8 != 0) {
          iVar7 = 0;
          do {
            lVar12 = local_58;
            if ((local_58 != 0) && (*(int *)(local_58 + 0x54) != 0)) {
              piVar1 = (int *)(local_58 + 0x54);
              iVar11 = *(int *)(local_58 + 0x54);
              do {
                while( true ) {
                  plVar10 = *(long **)(lVar12 + 0x58);
                  if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
                    uVar13 = FUN_00706e40();
                    *(undefined8 *)puVar5 = uVar13;
                    __cxa_guard_release(puVar4);
                  }
                  while( true ) {
                    if (plVar10 == (long *)0x0) goto LAB_00ca3124;
                    if (plVar10 == (long *)puVar5) break;
                    plVar10 = (long *)*plVar10;
                  }
                  iVar9 = *piVar1;
                  if (iVar9 == iVar11) break;
                  ClearExclusiveLocal();
                  iVar11 = iVar9;
                  if (iVar9 == 0) goto LAB_00ca3124;
                }
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar12 = *(long *)(lVar12 + 0x60);
                  if (lVar12 != 0) {
                    FUN_0069c730(param_1,lVar12 + -0x50,iVar7);
                    (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
                    goto joined_r0x00ca311c;
                  }
                  break;
                }
                iVar11 = iVar9;
              } while (iVar9 != 0);
            }
LAB_00ca3124:
            FUN_0069c730(param_1,0,iVar7);
joined_r0x00ca311c:
            iVar7 = iVar7 + 1;
          } while (iVar7 != iVar8);
        }
      }
      lVar6 = 0;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
        lVar6 = local_58;
      }
    }
  }
  else {
    if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
      piVar1 = (int *)(local_48 + 0x54);
      iVar8 = *(int *)(local_48 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar12 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar13 = FUN_00706e40();
            *(undefined8 *)puVar5 = uVar13;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00ca2fd0;
            if (plVar10 == (long *)puVar5) break;
            plVar10 = (long *)*plVar10;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar7;
          if (iVar7 == 0) goto LAB_00ca2fd0;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x60);
          if (lVar12 != 0) {
            FUN_01061930(param_1,lVar12 + -0x50);
            (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
            lVar6 = local_58;
            goto joined_r0x00ca2fc8;
          }
          break;
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_00ca2fd0:
    FUN_01061930(param_1,0);
    lVar6 = local_58;
  }
joined_r0x00ca2fc8:
  local_58 = lVar6;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


