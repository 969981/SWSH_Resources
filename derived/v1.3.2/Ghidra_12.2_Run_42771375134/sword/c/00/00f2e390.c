/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2e390; name: FUN_00f2e390
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f2e390(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  long local_38;
  long local_28;
  
  FUN_00f2cfa0(&local_28);
  if (local_28 != 0) {
    lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN_00f2e9a0(&local_38,lVar13);
    lVar7 = local_38;
    if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
      piVar1 = (int *)(local_38 + 0x54);
      puVar8 = PTR_DAT_027209a0;
      pbVar11 = PTR_DAT_02720998;
      iVar10 = *(int *)(local_38 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar7 + 0x58);
          if (((*pbVar11 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02720998), pbVar11 = PTR_DAT_02720998,
             puVar8 = PTR_DAT_027209a0, iVar5 != 0)) {
            uVar6 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_027209a0 = uVar6;
            __cxa_guard_release(PTR_DAT_02720998);
            pbVar11 = PTR_DAT_02720998;
            puVar8 = PTR_DAT_027209a0;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00f2e508;
            if (plVar12 == (long *)puVar8) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar5;
          if (iVar5 == 0) goto LAB_00f2e508;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x40) = *param_1;
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            pbVar11 = PTR_DAT_02720998;
            puVar8 = PTR_DAT_027209a0;
            lVar7 = local_38;
            goto joined_r0x00f2e500;
          }
          break;
        }
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00f2e508:
    _DAT_00000090 = *param_1;
    pbVar11 = PTR_DAT_02720998;
    puVar8 = PTR_DAT_027209a0;
    lVar7 = local_38;
joined_r0x00f2e500:
    PTR_DAT_02720998 = pbVar11;
    PTR_DAT_027209a0 = puVar8;
    local_38 = lVar7;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar10 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar7 + 0x58);
          if (((*pbVar11 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(pbVar11), puVar8 = PTR_DAT_027209a0, iVar5 != 0)) {
            uVar6 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_027209a0 = uVar6;
            __cxa_guard_release(pbVar11);
            puVar8 = PTR_DAT_027209a0;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00f2e610;
            if (plVar12 == (long *)puVar8) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar5;
          if (iVar5 == 0) goto LAB_00f2e610;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x48) = *param_2;
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            goto LAB_00f2e61c;
          }
          break;
        }
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00f2e610:
    _DAT_00000098 = *param_2;
LAB_00f2e61c:
    lVar7 = local_38;
    puVar8 = PTR_DAT_02720998;
    uVar2 = *(undefined4 *)(*(long *)(local_28 + 0x68) + 0x4b8);
    if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
      piVar1 = (int *)(local_38 + 0x54);
      puVar9 = PTR_DAT_027209a0;
      iVar10 = *(int *)(local_38 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar7 + 0x58);
          if (((*puVar8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar8), puVar9 = PTR_DAT_027209a0, iVar5 != 0)) {
            uVar6 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_027209a0 = uVar6;
            __cxa_guard_release(puVar8);
            puVar9 = PTR_DAT_027209a0;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00f2e720;
            if (plVar12 == (long *)puVar9) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar5;
          if (iVar5 == 0) goto LAB_00f2e720;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            *(undefined4 *)(lVar7 + 0x54) = uVar2;
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            goto LAB_00f2e728;
          }
          break;
        }
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00f2e720:
    _DAT_000000a4 = uVar2;
LAB_00f2e728:
    lVar7 = local_38;
    puVar8 = PTR_DAT_02720998;
    uVar2 = *(undefined4 *)(*(long *)(local_28 + 0x68) + 0x4bc);
    if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
      piVar1 = (int *)(local_38 + 0x54);
      puVar9 = PTR_DAT_027209a0;
      iVar10 = *(int *)(local_38 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar7 + 0x58);
          if (((*puVar8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar8), puVar9 = PTR_DAT_027209a0, iVar5 != 0)) {
            uVar6 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_027209a0 = uVar6;
            __cxa_guard_release(puVar8);
            puVar9 = PTR_DAT_027209a0;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00f2e82c;
            if (plVar12 == (long *)puVar9) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar5;
          if (iVar5 == 0) goto LAB_00f2e82c;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            *(undefined4 *)(lVar7 + 0x58) = uVar2;
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            goto LAB_00f2e834;
          }
          break;
        }
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00f2e82c:
    _DAT_000000a8 = uVar2;
LAB_00f2e834:
    lVar7 = local_38;
    puVar8 = PTR_DAT_02720998;
    uVar2 = *(undefined4 *)(*(long *)(local_28 + 0x68) + 0x490);
    if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
      piVar1 = (int *)(local_38 + 0x54);
      puVar9 = PTR_DAT_027209a0;
      iVar10 = *(int *)(local_38 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar7 + 0x58);
          if (((*puVar8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar8), puVar9 = PTR_DAT_027209a0, iVar5 != 0)) {
            uVar6 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_027209a0 = uVar6;
            __cxa_guard_release(puVar8);
            puVar9 = PTR_DAT_027209a0;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto joined_r0x00f2e938;
            if (plVar12 == (long *)puVar9) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = *(long *)(lVar7 + 0x60);
            if (lVar7 != 0) {
              *(undefined4 *)(lVar7 + 0x5c) = uVar2;
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
              uVar2 = _DAT_000000ac;
            }
            goto joined_r0x00f2e938;
          }
          iVar10 = iVar5;
          if (iVar5 == 0) goto joined_r0x00f2e938;
        }
        ClearExclusiveLocal();
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
joined_r0x00f2e938:
    _DAT_000000ac = uVar2;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


