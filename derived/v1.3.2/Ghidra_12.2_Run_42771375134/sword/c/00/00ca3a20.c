/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca3a20; name: FUN_00ca3a20
 */


void FUN_00ca3a20(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long local_38;
  long local_28;
  
  uVar10 = *param_1;
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_28,uVar10,&local_38);
  lVar7 = local_28;
  puVar4 = PTR_DAT_02719750;
  if ((local_28 == 0) || (*(int *)(local_28 + 0x54) == 0)) {
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(local_28 + 0x54);
    puVar8 = (undefined8 *)PTR_DAT_02719758;
    iVar9 = *(int *)(local_28 + 0x54);
    do {
      while( true ) {
        puVar11 = *(undefined8 **)(lVar7 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar8 = (undefined8 *)PTR_DAT_02719758;
          if (iVar5 != 0) {
            uVar10 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02719758 = uVar10;
            __cxa_guard_release(puVar4);
            puVar8 = (undefined8 *)PTR_DAT_02719758;
          }
        }
        lVar12 = 0;
        if (puVar11 == (undefined8 *)0x0) goto LAB_00ca3b48;
        while (puVar11 != puVar8) {
          puVar11 = (undefined8 *)*puVar11;
          if (puVar11 == (undefined8 *)0x0) {
            lVar12 = 0;
            goto LAB_00ca3b48;
          }
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          lVar12 = 0;
          if (lVar7 != 0) {
            lVar12 = lVar7 + -0x50;
          }
          goto LAB_00ca3b48;
        }
        lVar12 = 0;
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00ca3b48;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ca3b48:
  uVar6 = FUN_00c95850(lVar12 + 0x50);
  lVar7 = lVar12;
  if ((uVar6 & 1) == 0) {
    lVar7 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar7 != 0) {
    FUN_00cc4950(lVar7,param_3);
  }
  return;
}


