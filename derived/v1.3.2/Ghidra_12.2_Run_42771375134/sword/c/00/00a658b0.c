/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a658b0; name: FUN_00a658b0
 */


void FUN_00a658b0(long *param_1,long *param_2)

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
    puVar7 = PTR_DAT_02719530;
    pbVar8 = PTR_DAT_02719528;
    iVar9 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar11 + 0x58);
        if (((*pbVar8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_02719528), pbVar8 = PTR_DAT_02719528,
           puVar7 = PTR_DAT_02719530, iVar5 != 0)) {
          if (((*PTR_DAT_02719538 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02719538), iVar5 != 0)) {
            uVar6 = FUN_00a89c30();
            *(undefined8 *)PTR_DAT_02719540 = uVar6;
            __cxa_guard_release(PTR_DAT_02719538);
          }
          puVar7 = PTR_DAT_02719530;
          *(undefined **)PTR_DAT_02719530 = PTR_DAT_02719540;
          pbVar8 = PTR_DAT_02719528;
          __cxa_guard_release(PTR_DAT_02719528);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00a65a0c;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00a65a0c;
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
LAB_00a65a0c:
  *param_1 = 0;
  return;
}


