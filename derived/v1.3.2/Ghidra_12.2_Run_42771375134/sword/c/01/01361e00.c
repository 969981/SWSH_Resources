/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01361e00; name: FUN_01361e00
 */


void FUN_01361e00(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if (((*PTR_DAT_027280a0 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_027280a0), puVar5 = PTR_DAT_027280a8, iVar6 != 0)) {
    *(undefined8 *)PTR_DAT_027280a8 = 0;
    FUN_001001c0(PTR_LAB_027280c0,puVar5,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_027280a0);
    lVar8 = *(long *)PTR_DAT_027280a8;
  }
  else {
    lVar8 = *(long *)PTR_DAT_027280a8;
  }
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar6 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar8 + 0x58);
        lVar7 = FUN_01361f20();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_01361e94;
          if (plVar9 == (long *)lVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar6) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = 0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar7 = *(long *)(lVar8 + 0x60) + -0x50;
          }
          *param_1 = lVar7;
          return;
        }
        iVar6 = iVar2;
        if (iVar2 == 0) goto LAB_01361e94;
      }
      ClearExclusiveLocal();
      iVar6 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01361e94:
  *param_1 = 0;
  return;
}


