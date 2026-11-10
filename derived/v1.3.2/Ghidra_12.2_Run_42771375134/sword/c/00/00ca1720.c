/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca1720; name: FUN_00ca1720
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ca1720(undefined8 *param_1,long *param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  uVar10 = *param_1;
  local_48 = *param_2;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_00c7a470(&local_38,uVar10,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar9 = local_38;
  puVar4 = PTR_DAT_0271c1e8;
  if ((local_38 == 0) || (*(int *)(local_38 + 0x54) == 0)) {
    uVar10 = *param_1;
    local_58 = *param_2;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    FUN_00c7a400(&local_50,uVar10,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar9 = local_50;
    puVar4 = PTR_DAT_027150a8;
    if ((local_50 != 0) && (*(int *)(local_50 + 0x54) != 0)) {
      piVar1 = (int *)(local_50 + 0x54);
      puVar6 = PTR_DAT_027150b0;
      iVar7 = *(int *)(local_50 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(lVar9 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar6 = PTR_DAT_027150b0, iVar5 != 0)) {
            uVar10 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_027150b0 = uVar10;
            __cxa_guard_release(puVar4);
            puVar6 = PTR_DAT_027150b0;
          }
          while( true ) {
            if (plVar8 == (long *)0x0) goto LAB_00ca19d0;
            if (plVar8 == (long *)puVar6) break;
            plVar8 = (long *)*plVar8;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar7) break;
          ClearExclusiveLocal();
          iVar7 = iVar5;
          if (iVar5 == 0) goto LAB_00ca19d0;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            FUN_01050450(lVar9 + -0x50,param_3,param_4 & 1);
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
            goto joined_r0x00ca19c8;
          }
          break;
        }
        iVar7 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ca19d0:
    FUN_01050450(0,param_3,param_4 & 1);
joined_r0x00ca19c8:
    lVar9 = 0;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
      lVar9 = local_50;
    }
  }
  else {
    if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
      piVar1 = (int *)(local_38 + 0x54);
      puVar6 = PTR_DAT_0271c1f0;
      iVar7 = *(int *)(local_38 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(lVar9 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar6 = PTR_DAT_0271c1f0, iVar5 != 0)) {
            uVar10 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_0271c1f0 = uVar10;
            __cxa_guard_release(puVar4);
            puVar6 = PTR_DAT_0271c1f0;
          }
          while( true ) {
            if (plVar8 == (long *)0x0) goto LAB_00ca1a5c;
            if (plVar8 == (long *)puVar6) break;
            plVar8 = (long *)*plVar8;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar7) break;
          ClearExclusiveLocal();
          iVar7 = iVar5;
          if (iVar5 == 0) goto LAB_00ca1a5c;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            FUN_01061570(lVar9 + -0x50,param_3,param_4 & 1);
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
            lVar9 = local_50;
            goto joined_r0x00ca1a54;
          }
          break;
        }
        iVar7 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ca1a5c:
    FUN_01061570(0,param_3,param_4 & 1);
    lVar9 = local_50;
  }
joined_r0x00ca1a54:
  local_50 = lVar9;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


