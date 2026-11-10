/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a4560; name: FUN_013a4560
 */


void FUN_013a4560(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte *pbVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long local_40;
  long *local_38;
  long local_28;
  
  lVar11 = param_1[0xd];
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x54) == 0)) {
LAB_013a4664:
    lVar5 = 0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0x54);
    puVar7 = PTR_DAT_02715080;
    pbVar8 = PTR_DAT_02715078;
    iVar9 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar11 + 0x58);
        if ((*pbVar8 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_02715078);
          pbVar8 = PTR_DAT_02715078;
          puVar7 = PTR_DAT_02715080;
          if (iVar4 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar6;
            __cxa_guard_release(PTR_DAT_02715078);
            pbVar8 = PTR_DAT_02715078;
            puVar7 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_013a4664;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar5 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar5 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          goto LAB_013a4668;
        }
        lVar5 = 0;
        iVar9 = iVar4;
        if (iVar4 == 0) goto LAB_013a4668;
      }
      ClearExclusiveLocal();
      lVar5 = 0;
      iVar9 = iVar4;
    } while (iVar4 != 0);
  }
LAB_013a4668:
  *(ulong *)(*(long *)(lVar5 + 0x170) + 0x130) = *(ulong *)(*(long *)(lVar5 + 0x170) + 0x130) | 2;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar11 = param_1[0xd];
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x54) == 0)) {
LAB_013a4774:
    lVar5 = 0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0x54);
    puVar7 = PTR_DAT_02715080;
    pbVar8 = PTR_DAT_02715078;
    iVar9 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar11 + 0x58);
        if ((*pbVar8 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_02715078);
          pbVar8 = PTR_DAT_02715078;
          puVar7 = PTR_DAT_02715080;
          if (iVar4 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar6;
            __cxa_guard_release(PTR_DAT_02715078);
            pbVar8 = PTR_DAT_02715078;
            puVar7 = PTR_DAT_02715080;
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_013a4774;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar5 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar5 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          goto LAB_013a4778;
        }
        lVar5 = 0;
        iVar9 = iVar4;
        if (iVar4 == 0) goto LAB_013a4778;
      }
      ClearExclusiveLocal();
      lVar5 = 0;
      iVar9 = iVar4;
    } while (iVar4 != 0);
  }
LAB_013a4778:
  *(ulong *)(*(long *)(lVar5 + 0x178) + 0x130) = *(ulong *)(*(long *)(lVar5 + 0x178) + 0x130) | 2;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar11 = param_1[0xb6];
  if (lVar11 == 0) {
    FUN_013a48b0(0,0,0);
  }
  else {
    plVar10 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_013a48b0(lVar11,0,0);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  (**(code **)(*param_1 + 0x10))(&local_28,param_1);
  local_38 = param_1 + 0xbc;
  local_40 = local_28;
  if ((local_28 != 0) && ((**(code **)(*(long *)(local_28 + 0x48) + 0x10))(), local_28 != 0)) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_007b58c0(*(undefined8 *)PTR_DAT_027104b0,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


