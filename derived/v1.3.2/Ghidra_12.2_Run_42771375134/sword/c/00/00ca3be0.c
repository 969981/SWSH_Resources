/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca3be0; name: FUN_00ca3be0
 */


uint FUN_00ca3be0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long local_30;
  long local_28;
  
  uVar11 = *param_1;
  local_30 = *param_2;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_28,uVar11,&local_30);
  lVar8 = local_28;
  puVar4 = PTR_DAT_02719750;
  if ((local_28 == 0) || (*(int *)(local_28 + 0x54) == 0)) {
    lVar13 = 0;
  }
  else {
    piVar1 = (int *)(local_28 + 0x54);
    puVar9 = (undefined8 *)PTR_DAT_02719758;
    iVar10 = *(int *)(local_28 + 0x54);
    do {
      while( true ) {
        puVar12 = *(undefined8 **)(lVar8 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar9 = (undefined8 *)PTR_DAT_02719758;
          if (iVar5 != 0) {
            uVar11 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02719758 = uVar11;
            __cxa_guard_release(puVar4);
            puVar9 = (undefined8 *)PTR_DAT_02719758;
          }
        }
        lVar13 = 0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_00ca3d04;
        while (puVar12 != puVar9) {
          puVar12 = (undefined8 *)*puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            lVar13 = 0;
            goto LAB_00ca3d04;
          }
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x60);
          lVar13 = 0;
          if (lVar8 != 0) {
            lVar13 = lVar8 + -0x50;
          }
          goto LAB_00ca3d04;
        }
        lVar13 = 0;
        iVar10 = iVar5;
        if (iVar5 == 0) goto LAB_00ca3d04;
      }
      ClearExclusiveLocal();
      lVar13 = 0;
      iVar10 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ca3d04:
  uVar7 = FUN_00c95850(lVar13 + 0x50);
  lVar8 = lVar13;
  if ((uVar7 & 1) == 0) {
    lVar8 = 0;
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (lVar8 == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = FUN_00cc4a50(lVar8);
  }
  return uVar6 & 1;
}


