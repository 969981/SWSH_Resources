/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ba510; name: FUN_012ba510
 */


void FUN_012ba510(long *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  byte *pbVar10;
  long *plVar11;
  
  if (((*PTR_DAT_027274b0 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_027274b0), puVar9 = PTR_DAT_027274b8, iVar6 != 0)) {
    *(undefined8 *)PTR_DAT_027274b8 = 0;
    FUN_001001c0(PTR_LAB_027274d0,puVar9,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_027274b0);
    lVar8 = *(long *)PTR_DAT_027274b8;
    pbVar10 = PTR_DAT_027274c0;
    puVar9 = PTR_DAT_027274c8;
  }
  else {
    lVar8 = *(long *)PTR_DAT_027274b8;
    pbVar10 = PTR_DAT_027274c0;
    puVar9 = PTR_DAT_027274c8;
  }
  PTR_DAT_027274c0 = pbVar10;
  PTR_DAT_027274c8 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar6 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar8 + 0x58);
        if (((*pbVar10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_027274c0), pbVar10 = PTR_DAT_027274c0,
           puVar9 = PTR_DAT_027274c8, iVar5 != 0)) {
          uVar7 = FUN_012c1b00();
          *(undefined8 *)PTR_DAT_027274c8 = uVar7;
          __cxa_guard_release(PTR_DAT_027274c0);
          pbVar10 = PTR_DAT_027274c0;
          puVar9 = PTR_DAT_027274c8;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_012ba6a4;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar6) break;
        ClearExclusiveLocal();
        iVar6 = iVar5;
        if (iVar5 == 0) goto LAB_012ba6a4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar8 + 0x60) != 0) {
          lVar2 = *(long *)(lVar8 + 0x60) + -0x50;
        }
        *param_1 = lVar2;
        return;
      }
      iVar6 = iVar5;
    } while (iVar5 != 0);
  }
LAB_012ba6a4:
  *param_1 = 0;
  return;
}


