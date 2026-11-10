/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d02e0; name: FUN_013d02e0
 */


void FUN_013d02e0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long local_30;
  long local_28;
  
  FUN_013a5170(&local_28);
  lVar8 = local_28;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  uVar6 = FUN_013098c0(lVar8);
  if ((((uVar6 < 2) && (uVar6 = FUN_012e4910(param_2), (uVar6 & 1) == 0)) &&
      (uVar6 = FUN_012e49d0(param_2), (uVar6 & 1) == 0)) &&
     (uVar6 = FUN_012e8ab0(param_2), (uVar6 & 1) == 0)) {
    FUN_013a5170(&local_28);
    lVar8 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    puVar4 = PTR_DAT_02715078;
    lVar8 = *(long *)(lVar8 + 0x68);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
      piVar1 = (int *)(lVar8 + 0x54);
      puVar9 = PTR_DAT_02715080;
      iVar10 = *(int *)(lVar8 + 0x54);
      do {
        plVar11 = *(long **)(lVar8 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar9 = PTR_DAT_02715080;
          if (iVar5 != 0) {
            uVar7 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar7;
            __cxa_guard_release(puVar4);
            puVar9 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_013d044c;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_30 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              local_30 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            goto LAB_013d0450;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
LAB_013d044c:
    local_30 = 0;
LAB_013d0450:
    FUN_012e71f0(param_2,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  return;
}


