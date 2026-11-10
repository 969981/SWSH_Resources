/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcc750; name: FUN_00dcc750
 */


void FUN_00dcc750(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
  
  uVar6 = FUN_00753d80();
  lVar7 = FUN_00753db0(uVar6,param_4);
  lVar7 = *(long *)(lVar7 + 0x20);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    puVar8 = PTR_DAT_02715b88;
    pbVar10 = PTR_DAT_02715b80;
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar7 + 0x58);
        if (((*pbVar10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_02715b80), pbVar10 = PTR_DAT_02715b80,
           puVar8 = PTR_DAT_02715b88, iVar5 != 0)) {
          if (((*PTR_DAT_02715b90 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02715b90), iVar5 != 0)) {
            uVar6 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02715b98 = uVar6;
            __cxa_guard_release(PTR_DAT_02715b90);
          }
          puVar8 = PTR_DAT_02715b88;
          *(undefined **)PTR_DAT_02715b88 = PTR_DAT_02715b98;
          pbVar10 = PTR_DAT_02715b80;
          __cxa_guard_release(PTR_DAT_02715b80);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00dcc8b8;
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00dcc8b8;
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
LAB_00dcc8b8:
  *param_1 = 0;
  return;
}


