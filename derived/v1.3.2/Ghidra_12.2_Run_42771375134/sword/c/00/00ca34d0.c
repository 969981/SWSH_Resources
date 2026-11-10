/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca34d0; name: FUN_00ca34d0
 */


void FUN_00ca34d0(undefined8 *param_1,long *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long local_30;
  long local_28;
  
  uVar9 = *param_1;
  local_30 = *param_2;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_28,uVar9,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  lVar10 = local_28;
  puVar4 = PTR_DAT_02719750;
  if (local_28 != 0) {
    if (*(int *)(local_28 + 0x54) != 0) {
      if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
        piVar1 = (int *)(local_28 + 0x54);
        puVar6 = PTR_DAT_02719758;
        iVar7 = *(int *)(local_28 + 0x54);
        do {
          while( true ) {
            plVar8 = *(long **)(lVar10 + 0x58);
            if (((*puVar4 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(puVar4), puVar6 = PTR_DAT_02719758, iVar5 != 0)) {
              uVar9 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_02719758 = uVar9;
              __cxa_guard_release(puVar4);
              puVar6 = PTR_DAT_02719758;
            }
            while( true ) {
              if (plVar8 == (long *)0x0) goto LAB_00ca3654;
              if (plVar8 == (long *)puVar6) break;
              plVar8 = (long *)*plVar8;
            }
            iVar5 = *piVar1;
            if (iVar5 == iVar7) break;
            ClearExclusiveLocal();
            iVar7 = iVar5;
            if (iVar5 == 0) goto LAB_00ca3654;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x60);
            if (lVar10 != 0) {
              FUN_00c68a50(lVar10 + -0x50,param_3 & 1);
              (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
              goto joined_r0x00ca364c;
            }
            break;
          }
          iVar7 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00ca3654:
      FUN_00c68a50(0,param_3 & 1);
    }
joined_r0x00ca364c:
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


