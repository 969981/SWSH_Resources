/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d4bc0; name: FUN_006d4bc0
 */


void FUN_006d4bc0(long *param_1,undefined8 param_2)

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
  
  puVar4 = PTR_DAT_02710ba0;
  lVar6 = param_1[0x52];
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x54) == 0) {
LAB_006d4d10:
      plVar9 = (long *)0x0;
      goto LAB_006d4d18;
    }
    piVar1 = (int *)(lVar6 + 0x54);
    puVar7 = PTR_DAT_02710b90;
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar6 + 0x58);
        if (((*puVar4 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar4), puVar7 = PTR_DAT_02710b90, iVar5 != 0)) {
          if (((*PTR_DAT_027107f0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar5 != 0)) {
            *(undefined8 *)PTR_DAT_027107f8 = 0;
            __cxa_guard_release(PTR_DAT_027107f0);
          }
          puVar7 = PTR_DAT_02710b90;
          *(undefined **)PTR_DAT_02710b90 = PTR_DAT_027107f8;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_006d4d10;
          if (plVar9 == (long *)puVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_006d4d28;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        plVar9 = (long *)0x0;
        if (*(long *)(lVar6 + 0x60) != 0) {
          plVar9 = (long *)(*(long *)(lVar6 + 0x60) + -8);
        }
        if (plVar9 == (long *)0x0) goto LAB_006d4d18;
        goto LAB_006d4d2c;
      }
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_006d4d28:
  plVar9 = (long *)0x0;
LAB_006d4d18:
  if (*(char *)((long)param_1 + 0x29c) == '\0') {
LAB_006d4d2c:
    FUN_006d2060(param_1 + 0x2d,param_2);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006d4d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x18))(plVar9);
      return;
    }
  }
  return;
}


