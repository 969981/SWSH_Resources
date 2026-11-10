/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad4c10; name: FUN_00ad4c10
 */


uint FUN_00ad4c10(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long local_30;
  long local_28;
  
  uVar7 = (**(code **)(*param_1 + 400))();
  if ((uVar7 & 1) == 0) {
    uVar6 = 1;
  }
  else {
    lVar12 = *(long *)(param_1[0x78] + 0x528);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    local_30 = param_1[0xa2];
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
    }
    FUN_00c7a630(&local_28,lVar12,&local_30);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    lVar12 = local_28;
    puVar4 = PTR_DAT_02719750;
    if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
      piVar1 = (int *)(local_28 + 0x54);
      puVar9 = PTR_DAT_02719758;
      iVar10 = *(int *)(local_28 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar12 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar9 = PTR_DAT_02719758, iVar5 != 0)) {
            uVar8 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02719758 = uVar8;
            __cxa_guard_release(puVar4);
            puVar9 = PTR_DAT_02719758;
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00ad4dc4;
            if (plVar11 == (long *)puVar9) break;
            plVar11 = (long *)*plVar11;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar5;
          if (iVar5 == 0) goto LAB_00ad4dc4;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x60);
          if (lVar12 != 0) {
            uVar6 = FUN_00c69ab0(lVar12 + -0x50);
            (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
            goto joined_r0x00ad4dbc;
          }
          break;
        }
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ad4dc4:
    uVar6 = FUN_00c69ab0(0);
joined_r0x00ad4dbc:
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return uVar6 & 1;
}


