/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130e4e0; name: FUN_0130e4e0
 */


void FUN_0130e4e0(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  long *plVar11;
  
  lVar7 = *(long *)(param_2 + 0x68);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    puVar8 = PTR_DAT_02715080;
    pbVar10 = PTR_DAT_02715078;
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar7 + 0x58);
        if (((*pbVar10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_02715078), pbVar10 = PTR_DAT_02715078,
           puVar8 = PTR_DAT_02715080, iVar5 != 0)) {
          uVar6 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar6;
          __cxa_guard_release(PTR_DAT_02715078);
          pbVar10 = PTR_DAT_02715078;
          puVar8 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0130e5e0;
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_0130e5e0;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar7 + 0x60) != 0) {
          lVar2 = *(long *)(lVar7 + 0x60) + -0x50;
        }
        *param_1 = lVar2;
        return;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_0130e5e0:
  *param_1 = 0;
  return;
}


