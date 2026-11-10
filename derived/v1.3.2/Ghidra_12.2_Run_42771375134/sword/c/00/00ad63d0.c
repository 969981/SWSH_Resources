/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad63d0; name: FUN_00ad63d0
 */


void FUN_00ad63d0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long local_30;
  long local_28;
  
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x54) != 0)) {
    local_30 = *param_2;
    uVar10 = *(undefined8 *)*param_1;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
    }
    FUN_00c7a630(&local_28,uVar10,&local_30);
    lVar6 = local_28;
    puVar4 = PTR_DAT_02719750;
    if ((local_28 == 0) || (*(int *)(local_28 + 0x54) == 0)) {
LAB_00ad6514:
      lVar11 = 0;
    }
    else {
      piVar1 = (int *)(local_28 + 0x54);
      puVar7 = PTR_DAT_02719758;
      iVar8 = *(int *)(local_28 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar6 + 0x58);
          if ((*puVar4 & 1) == 0) {
            iVar5 = __cxa_guard_acquire(puVar4);
            puVar7 = PTR_DAT_02719758;
            if (iVar5 != 0) {
              uVar10 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_02719758 = uVar10;
              __cxa_guard_release(puVar4);
              puVar7 = PTR_DAT_02719758;
            }
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_00ad6514;
            if (plVar9 == (long *)puVar7) break;
            plVar9 = (long *)*plVar9;
          }
          iVar5 = *piVar1;
          if (iVar5 != iVar8) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar6 = *(long *)(lVar6 + 0x60);
            lVar11 = 0;
            if (lVar6 != 0) {
              lVar11 = lVar6 + -0x50;
            }
            goto LAB_00ad6518;
          }
          lVar11 = 0;
          iVar8 = iVar5;
          if (iVar5 == 0) goto LAB_00ad6518;
        }
        ClearExclusiveLocal();
        lVar11 = 0;
        iVar8 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ad6518:
    FUN_00c68c70(lVar11,*(undefined1 *)param_1[1],*(undefined4 *)param_1[2]);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  return;
}


