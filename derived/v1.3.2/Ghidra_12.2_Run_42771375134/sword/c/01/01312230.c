/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01312230; name: FUN_01312230
 */


void FUN_01312230(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar12 = *(undefined8 **)(*(long *)(param_2 + 0x98) + 0x60);
  plVar8 = (long *)(**(code **)*puVar12)(puVar12);
  pbVar5 = PTR_DAT_02715078;
  puVar11 = PTR_DAT_02715080;
  if (((*PTR_DAT_0271df20 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_0271df20), pbVar5 = PTR_DAT_02715078,
     puVar11 = PTR_DAT_02715080, iVar7 != 0)) {
    uVar9 = FUN_00d3ff90();
    *(undefined8 *)PTR_DAT_0271df28 = uVar9;
    __cxa_guard_release(PTR_DAT_0271df20);
    pbVar5 = PTR_DAT_02715078;
    puVar11 = PTR_DAT_02715080;
  }
  for (; plVar8 != (long *)PTR_DAT_0271df28; plVar8 = (long *)*plVar8) {
  }
  lVar10 = puVar12[3];
  PTR_DAT_02715078 = pbVar5;
  PTR_DAT_02715080 = puVar11;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar7 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(lVar10 + 0x58);
        if (((*pbVar5 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar5), puVar11 = PTR_DAT_02715080, iVar6 != 0)) {
          uVar9 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar9;
          __cxa_guard_release(pbVar5);
          puVar11 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_0131236c;
          if (plVar8 == (long *)puVar11) break;
          plVar8 = (long *)*plVar8;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar7) break;
        ClearExclusiveLocal();
        iVar7 = iVar6;
        if (iVar6 == 0) goto LAB_0131236c;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar10 + 0x60) != 0) {
          lVar2 = *(long *)(lVar10 + 0x60) + -0x50;
        }
        *param_1 = lVar2;
        return;
      }
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
LAB_0131236c:
  *param_1 = 0;
  return;
}


