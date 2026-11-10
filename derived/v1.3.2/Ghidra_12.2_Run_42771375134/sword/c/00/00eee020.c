/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eee020; name: FUN_00eee020
 */


void FUN_00eee020(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_70;
  undefined1 auStack_68 [8];
  
  puVar6 = PTR_DAT_02720590;
  if (((*PTR_DAT_02720590 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_02720590), puVar7 = PTR_DAT_02720598, iVar8 != 0)) {
    *(undefined8 *)PTR_DAT_02720598 = 0;
    FUN_001001c0(PTR_LAB_027205a0,puVar7,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02720590);
    lVar10 = *(long *)PTR_DAT_02720598;
    plVar5 = (long *)PTR_DAT_02720598;
  }
  else {
    lVar10 = *(long *)PTR_DAT_02720598;
    plVar5 = (long *)PTR_DAT_02720598;
  }
  PTR_DAT_02720598 = (undefined *)plVar5;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar8 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar10 + 0x58);
        lVar9 = FUN_00eef170();
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00eee0cc;
          if (plVar11 == (long *)lVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar10 + 0x60);
          lVar10 = 0;
          if (lVar9 != 0) {
            lVar10 = lVar9 + -0x50;
          }
          *param_1 = lVar10;
          if (lVar9 != 0) {
            return;
          }
          goto LAB_00eee0d0;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00eee0cc;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00eee0cc:
  *param_1 = 0;
LAB_00eee0d0:
  plVar11 = (long *)FUN_00eef2a0(auStack_68,param_2,param_3,param_4);
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x10))();
  }
  *param_1 = (long)plVar11;
  (**(code **)(*plVar11 + 0x10))(&local_70,plVar11);
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_02720590), iVar8 != 0)) {
    *plVar5 = 0;
    FUN_001001c0(PTR_LAB_027205a0,plVar5,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02720590);
    lVar10 = *plVar5;
  }
  else {
    lVar10 = *plVar5;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
    *plVar5 = 0;
  }
  *plVar5 = local_70;
  return;
}


