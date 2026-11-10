/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c72160; name: FUN_00c72160
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c72160(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long local_30;
  undefined1 auStack_28 [8];
  
  if (*param_2 == 0) {
    return;
  }
  if (*(int *)(*param_2 + 0x54) == 0) {
    return;
  }
  lVar6 = *param_2;
  if (param_1[0x3a] != lVar6) {
    return;
  }
  param_1[0x3a] = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  (**(code **)(*param_1 + 0xd8))(&local_30,param_1);
  lVar6 = local_30;
  puVar9 = PTR_DAT_0271c1e8;
  if ((local_30 != 0) && (*(int *)(local_30 + 0x54) != 0)) {
    if ((local_30 != 0) && (*(int *)(local_30 + 0x54) != 0)) {
      piVar1 = (int *)(local_30 + 0x54);
      puVar8 = PTR_DAT_0271c1f0;
      iVar10 = *(int *)(local_30 + 0x54);
      do {
        plVar11 = *(long **)(lVar6 + 0x58);
        if (((*puVar9 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar9), puVar8 = PTR_DAT_0271c1f0, iVar5 != 0)) {
          uVar7 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_0271c1f0 = uVar7;
          __cxa_guard_release(puVar9);
          puVar8 = PTR_DAT_0271c1f0;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00c722e8;
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = *(long *)(lVar6 + 0x60);
            if (lVar6 != 0) {
              FUN_01061270(lVar6 + -0x50,param_2);
              (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
              lVar6 = *param_2;
              puVar8 = PTR_DAT_02715078;
              puVar9 = PTR_DAT_02715080;
              goto joined_r0x00c722e0;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00c722e8:
    FUN_01061270(0,param_2);
  }
  lVar6 = *param_2;
  puVar8 = PTR_DAT_02715078;
  puVar9 = PTR_DAT_02715080;
joined_r0x00c722e0:
  PTR_DAT_02715078 = puVar8;
  PTR_DAT_02715080 = puVar9;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x54) == 0) {
      FUN_00c756c0(0,auStack_28);
      goto LAB_00c723f0;
    }
    piVar1 = (int *)(lVar6 + 0x54);
    iVar10 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar6 + 0x58);
        if (((*puVar8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar8), puVar9 = PTR_DAT_02715080, iVar5 != 0)) {
          uVar7 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar7;
          __cxa_guard_release(puVar8);
          puVar9 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00c723d0;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar5;
        if (iVar5 == 0) goto LAB_00c723d0;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar6 + 0x60) != 0) {
          lVar2 = *(long *)(lVar6 + 0x60) + -0x50;
        }
        FUN_00c756c0(lVar2,auStack_28);
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
        }
        goto LAB_00c723f0;
      }
      iVar10 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00c723d0:
  FUN_00c756c0(0,auStack_28);
LAB_00c723f0:
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


