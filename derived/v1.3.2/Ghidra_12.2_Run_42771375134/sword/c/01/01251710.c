/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01251710; name: FUN_01251710
 */


void FUN_01251710(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  
  puVar5 = PTR_DAT_02710b90;
  if (*(int *)(param_2 + 0x54) != 0) {
    piVar1 = (int *)(param_2 + 0x54);
    pbVar7 = PTR_DAT_027263e8;
    puVar8 = PTR_DAT_027263f0;
    iVar9 = *(int *)(param_2 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(param_2 + 0x58);
        if (((*pbVar7 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_027263e8), pbVar7 = PTR_DAT_027263e8,
           puVar8 = PTR_DAT_027263f0, iVar6 != 0)) {
          if (((*PTR_DAT_02710ba0 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_02710ba0), iVar6 != 0)) {
            if (((*PTR_DAT_027107f0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_027107f0), iVar6 != 0)) {
              *(undefined8 *)PTR_DAT_027107f8 = 0;
              __cxa_guard_release(PTR_DAT_027107f0);
            }
            *(undefined **)puVar5 = PTR_DAT_027107f8;
            __cxa_guard_release(PTR_DAT_02710ba0);
          }
          puVar8 = PTR_DAT_027263f0;
          *(undefined **)PTR_DAT_027263f0 = puVar5;
          pbVar7 = PTR_DAT_027263e8;
          __cxa_guard_release(PTR_DAT_027263e8);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_012518a4;
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar6;
        if (iVar6 == 0) goto LAB_012518a4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(param_2 + 0x60) != 0) {
          lVar2 = *(long *)(param_2 + 0x60) + -0x50;
        }
        *param_1 = lVar2;
        return;
      }
      iVar9 = iVar6;
    } while (iVar6 != 0);
  }
LAB_012518a4:
  *param_1 = 0;
  return;
}


