/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e77910; name: FUN_00e77910
 */


void FUN_00e77910(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  if ((*param_1 != 0) && (*(int *)(*param_1 + 0x54) != 0)) {
    FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
    local_38 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    local_40 = *param_1;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    FUN_00ca3840(&local_30,&local_38,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    lVar10 = local_30;
    puVar4 = PTR_DAT_0271c498;
    if (local_30 != 0) {
      if (*(int *)(local_30 + 0x54) != 0) {
        if ((local_30 != 0) && (*(int *)(local_30 + 0x54) != 0)) {
          piVar1 = (int *)(local_30 + 0x54);
          puVar7 = PTR_DAT_0271c4a0;
          iVar9 = *(int *)(local_30 + 0x54);
          do {
            while( true ) {
              plVar8 = *(long **)(lVar10 + 0x58);
              if (((*puVar4 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(puVar4), puVar7 = PTR_DAT_0271c4a0, iVar5 != 0)) {
                if (((*PTR_DAT_02719750 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_02719750), iVar5 != 0)) {
                  uVar6 = FUN_00706e40();
                  *(undefined8 *)PTR_DAT_02719758 = uVar6;
                  __cxa_guard_release(PTR_DAT_02719750);
                }
                puVar7 = PTR_DAT_0271c4a0;
                *(undefined **)PTR_DAT_0271c4a0 = PTR_DAT_02719758;
                __cxa_guard_release(puVar4);
              }
              while( true ) {
                if (plVar8 == (long *)0x0) goto LAB_00e77b30;
                if (plVar8 == (long *)puVar7) break;
                plVar8 = (long *)*plVar8;
              }
              iVar5 = *piVar1;
              if (iVar5 == iVar9) break;
              ClearExclusiveLocal();
              iVar9 = iVar5;
              if (iVar5 == 0) goto LAB_00e77b30;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar10 = *(long *)(lVar10 + 0x60);
              if (lVar10 != 0) {
                FUN_00cc4de0(lVar10 + -0x50);
                (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
                goto joined_r0x00e77b28;
              }
              break;
            }
            iVar9 = iVar5;
          } while (iVar5 != 0);
        }
LAB_00e77b30:
        FUN_00cc4de0(0);
      }
joined_r0x00e77b28:
      if (local_30 != 0) {
        (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
        local_30 = 0;
      }
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


