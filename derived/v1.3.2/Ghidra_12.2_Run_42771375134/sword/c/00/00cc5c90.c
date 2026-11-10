/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc5c90; name: FUN_00cc5c90
 */


void FUN_00cc5c90(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte *pbVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
    piVar1 = (int *)(lVar11 + 0x54);
    puVar7 = PTR_DAT_0271c6a8;
    pbVar8 = PTR_DAT_0271c6a0;
    iVar9 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar11 + 0x58);
        if (((*pbVar8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0271c6a0), pbVar8 = PTR_DAT_0271c6a0,
           puVar7 = PTR_DAT_0271c6a8, iVar5 != 0)) {
          if (((*PTR_DAT_02717528 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02717528), iVar5 != 0)) {
            uVar6 = FUN_00b8c810();
            *(undefined8 *)PTR_DAT_02717530 = uVar6;
            __cxa_guard_release(PTR_DAT_02717528);
          }
          puVar7 = PTR_DAT_0271c6a8;
          *(undefined **)PTR_DAT_0271c6a8 = PTR_DAT_02717530;
          pbVar8 = PTR_DAT_0271c6a0;
          __cxa_guard_release(PTR_DAT_0271c6a0);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00cc5dec;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00cc5dec;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar11 + 0x60) != 0) {
          lVar2 = *(long *)(lVar11 + 0x60) + -0x50;
        }
        *param_1 = lVar2;
        return;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00cc5dec:
  *param_1 = 0;
  return;
}


