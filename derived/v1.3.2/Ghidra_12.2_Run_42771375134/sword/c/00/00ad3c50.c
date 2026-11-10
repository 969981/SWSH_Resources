/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad3c50; name: FUN_00ad3c50
 */


void FUN_00ad3c50(long *param_1,uint param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long local_38;
  long local_28;
  
  uVar6 = (**(code **)(*param_1 + 400))();
  if ((uVar6 & 1) != 0) {
    lVar11 = *(long *)(param_1[0x78] + 0x528);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    local_38 = param_1[0xa2];
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    FUN_00c7a630(&local_28,lVar11,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    lVar11 = local_28;
    puVar4 = PTR_DAT_02719750;
    if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
      piVar1 = (int *)(local_28 + 0x54);
      puVar8 = PTR_DAT_02719758;
      iVar9 = *(int *)(local_28 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar11 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar8 = PTR_DAT_02719758, iVar5 != 0)) {
            uVar7 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02719758 = uVar7;
            __cxa_guard_release(puVar4);
            puVar8 = PTR_DAT_02719758;
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00ad3e04;
            if (plVar10 == (long *)puVar8) break;
            plVar10 = (long *)*plVar10;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar5;
          if (iVar5 == 0) goto LAB_00ad3e04;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x60);
          if (lVar11 != 0) {
            FUN_00c6a2b0(lVar11 + -0x50,param_2 & 1);
            (**(code **)(*(long *)(lVar11 + -8) + 0x18))((long *)(lVar11 + -8));
            goto joined_r0x00ad3dfc;
          }
          break;
        }
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ad3e04:
    FUN_00c6a2b0(0,param_2 & 1);
joined_r0x00ad3dfc:
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


