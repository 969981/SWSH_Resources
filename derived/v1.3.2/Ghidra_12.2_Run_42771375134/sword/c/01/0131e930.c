/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131e930; name: FUN_0131e930
 */


void FUN_0131e930(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  
  if (((*PTR_DAT_027277a0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_027277a0), puVar7 = PTR_DAT_027277a8, iVar5 != 0)) {
    *(undefined8 *)PTR_DAT_027277a8 = 0;
    FUN_001001c0(PTR_LAB_027277c0,puVar7,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_027277a0);
    lVar10 = *(long *)PTR_DAT_027277a8;
    pbVar8 = PTR_DAT_027277b0;
    puVar7 = PTR_DAT_027277b8;
  }
  else {
    lVar10 = *(long *)PTR_DAT_027277a8;
    pbVar8 = PTR_DAT_027277b0;
    puVar7 = PTR_DAT_027277b8;
  }
  PTR_DAT_027277b0 = pbVar8;
  PTR_DAT_027277b8 = puVar7;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar5 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar10 + 0x58);
        if (((*pbVar8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_027277b0), pbVar8 = PTR_DAT_027277b0,
           puVar7 = PTR_DAT_027277b8, iVar4 != 0)) {
          uVar6 = FUN_012c1b00();
          *(undefined8 *)PTR_DAT_027277b8 = uVar6;
          __cxa_guard_release(PTR_DAT_027277b0);
          pbVar8 = PTR_DAT_027277b0;
          puVar7 = PTR_DAT_027277b8;
        }
        while( true ) {
          if (plVar9 == (long *)0x0) {
            return;
          }
          if (plVar9 == (long *)puVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar5) break;
        ClearExclusiveLocal();
        iVar5 = iVar4;
        if (iVar4 == 0) {
          return;
        }
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar10 = *(long *)(lVar10 + 0x60);
        if (lVar10 == 0) {
          return;
        }
        FUN_0131eaf0(lVar10 + -0x50);
                    /* WARNING: Could not recover jumptable at 0x0131ea78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
        return;
      }
      iVar5 = iVar4;
    } while (iVar4 != 0);
  }
  return;
}


