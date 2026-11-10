/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01087780; name: FUN_01087780
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01087780(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  bool bVar11;
  long local_38;
  long local_30;
  long local_28;
  
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_38);
  local_30 = local_38;
  local_38 = 0;
  FUN_00c7a630(&local_28,uVar9,&local_30);
  lVar10 = local_28;
  puVar3 = PTR_DAT_02719750;
  if (local_28 == 0) {
    lVar10 = 0;
    bVar11 = true;
  }
  else {
    if (*(int *)(local_28 + 0x54) != 0) {
      piVar1 = (int *)(local_28 + 0x54);
      puVar6 = PTR_DAT_02719758;
      iVar7 = *(int *)(local_28 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(lVar10 + 0x58);
          if (((*puVar3 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(puVar3), puVar6 = PTR_DAT_02719758, iVar4 != 0)) {
            uVar9 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02719758 = uVar9;
            __cxa_guard_release(puVar3);
            puVar6 = PTR_DAT_02719758;
          }
          while( true ) {
            if (plVar8 == (long *)0x0) goto LAB_010878d8;
            if (plVar8 == (long *)puVar6) break;
            plVar8 = (long *)*plVar8;
          }
          iVar4 = *piVar1;
          if (iVar4 == iVar7) break;
          ClearExclusiveLocal();
          iVar7 = iVar4;
          if (iVar4 == 0) goto LAB_010878d8;
        }
        cVar2 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar5 = *(long *)(lVar10 + 0x60);
          if (lVar5 != 0) {
            lVar10 = lVar5 + -0x50;
            (**(code **)(*(long *)(lVar5 + -8) + 0x18))();
            bVar11 = false;
            goto joined_r0x010878d0;
          }
          break;
        }
        iVar7 = iVar4;
      } while (iVar4 != 0);
    }
LAB_010878d8:
    lVar10 = 0;
    bVar11 = true;
joined_r0x010878d0:
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  local_28 = 0;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (!bVar11) {
    FUN_00c68a50(lVar10,1);
  }
  return;
}


