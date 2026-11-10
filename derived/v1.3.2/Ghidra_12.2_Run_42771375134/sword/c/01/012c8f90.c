/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c8f90; name: FUN_012c8f90
 */


undefined8 FUN_012c8f90(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if (((*PTR_DAT_02727638 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_02727638), puVar5 = PTR_DAT_02727640, iVar7 != 0)) {
    *(undefined8 *)PTR_DAT_02727640 = 0;
    FUN_001001c0(PTR_LAB_02727658,puVar5,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02727638);
    lVar9 = *(long *)PTR_DAT_02727640;
    pbVar8 = PTR_DAT_02727648;
    puVar4 = (undefined8 *)PTR_DAT_02727650;
  }
  else {
    lVar9 = *(long *)PTR_DAT_02727640;
    pbVar8 = PTR_DAT_02727648;
    puVar4 = (undefined8 *)PTR_DAT_02727650;
  }
  PTR_DAT_02727648 = pbVar8;
  PTR_DAT_02727650 = (undefined *)puVar4;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar7 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar9 + 0x58);
        if (((*pbVar8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar8), pbVar8 = PTR_DAT_02727648, iVar6 != 0)) {
          uVar11 = FUN_012c1b00();
          *puVar4 = uVar11;
          __cxa_guard_release(PTR_DAT_02727648);
          pbVar8 = PTR_DAT_02727648;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) {
            return 0;
          }
          if (plVar10 == puVar4) break;
          plVar10 = (long *)*plVar10;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar7) break;
        ClearExclusiveLocal();
        iVar7 = iVar6;
        if (iVar6 == 0) {
          return 0;
        }
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 == 0) {
          return 0;
        }
        uVar11 = *(undefined8 *)(lVar9 + (long)param_1 * 8 + 0x70);
        (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
        return uVar11;
      }
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
  return 0;
}


