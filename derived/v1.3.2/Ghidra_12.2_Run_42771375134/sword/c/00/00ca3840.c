/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca3840; name: FUN_00ca3840
 */


void FUN_00ca3840(long *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long local_38;
  long local_28;
  
  *param_1 = 0;
  uVar11 = *param_2;
  local_38 = *param_3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_28,uVar11,&local_38);
  lVar8 = local_28;
  puVar5 = PTR_DAT_02719750;
  if ((local_28 == 0) || (*(int *)(local_28 + 0x54) == 0)) {
    plVar13 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(local_28 + 0x54);
    puVar9 = (undefined8 *)PTR_DAT_02719758;
    iVar10 = *(int *)(local_28 + 0x54);
    do {
      while( true ) {
        puVar12 = *(undefined8 **)(lVar8 + 0x58);
        if ((*puVar5 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar5);
          puVar9 = (undefined8 *)PTR_DAT_02719758;
          if (iVar6 != 0) {
            uVar11 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02719758 = uVar11;
            __cxa_guard_release(puVar5);
            puVar9 = (undefined8 *)PTR_DAT_02719758;
          }
        }
        plVar13 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_00ca396c;
        while (puVar12 != puVar9) {
          puVar12 = (undefined8 *)*puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            plVar13 = (long *)0x0;
            goto LAB_00ca396c;
          }
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x60);
          plVar13 = (long *)0x0;
          if (lVar8 != 0) {
            plVar13 = (long *)(lVar8 + -0x50);
          }
          goto LAB_00ca396c;
        }
        plVar13 = (long *)0x0;
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ca396c;
      }
      ClearExclusiveLocal();
      plVar13 = (long *)0x0;
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ca396c:
  uVar7 = FUN_00c95850(plVar13 + 10);
  plVar2 = plVar13;
  if ((uVar7 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(&local_28,plVar2);
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = local_28;
  }
  return;
}


