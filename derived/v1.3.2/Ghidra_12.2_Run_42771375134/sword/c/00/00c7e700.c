/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7e700; name: FUN_00c7e700
 */


void FUN_00c7e700(undefined8 param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long local_40;
  long local_38;
  long local_28;
  
  local_38 = *param_2;
  if (local_38 == 0) {
    FUN_00c7c720(&local_28,param_1,&local_38,0);
    pbVar4 = PTR_DAT_0271c218;
    puVar8 = PTR_DAT_0271c220;
    lVar5 = local_28;
  }
  else {
    plVar10 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_00c7c720(&local_28,param_1,&local_38,0);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    local_38 = 0;
    pbVar4 = PTR_DAT_0271c218;
    puVar8 = PTR_DAT_0271c220;
    lVar5 = local_28;
  }
  if (lVar5 == 0) {
    PTR_DAT_0271c218 = pbVar4;
    PTR_DAT_0271c220 = puVar8;
    return;
  }
  PTR_DAT_0271c218 = pbVar4;
  PTR_DAT_0271c220 = puVar8;
  local_28 = lVar5;
  if (*(int *)(lVar5 + 0x54) == 0) goto LAB_00c7e8ec;
  if (lVar5 == 0) {
LAB_00c7e898:
    local_40 = *param_3;
  }
  else {
    if (*(int *)(lVar5 + 0x54) != 0) {
      piVar1 = (int *)(lVar5 + 0x54);
      iVar9 = *(int *)(lVar5 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar5 + 0x58);
          if (((*pbVar4 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(pbVar4), puVar8 = PTR_DAT_0271c220, iVar6 != 0)) {
            uVar7 = FUN_00c72b60();
            *(undefined8 *)PTR_DAT_0271c220 = uVar7;
            __cxa_guard_release(pbVar4);
            puVar8 = PTR_DAT_0271c220;
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00c7e860;
            if (plVar10 == (long *)puVar8) break;
            plVar10 = (long *)*plVar10;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar6;
          if (iVar6 == 0) goto LAB_00c7e898;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          plVar10 = (long *)0x0;
          if (*(long *)(lVar5 + 0x60) != 0) {
            plVar10 = (long *)(*(long *)(lVar5 + 0x60) + -0x50);
          }
          local_40 = *param_3;
          goto joined_r0x00c7e930;
        }
        iVar9 = iVar6;
      } while (iVar6 != 0);
      goto LAB_00c7e898;
    }
LAB_00c7e860:
    local_40 = *param_3;
  }
  plVar10 = (long *)0x0;
joined_r0x00c7e930:
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  (**(code **)(*plVar10 + 0xe0))(plVar10,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  (**(code **)(plVar10[9] + 0x18))(plVar10 + 9);
LAB_00c7e8ec:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


