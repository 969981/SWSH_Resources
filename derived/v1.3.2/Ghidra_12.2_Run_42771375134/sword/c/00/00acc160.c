/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acc160; name: FUN_00acc160
 */


void FUN_00acc160(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  
  lVar8 = *(long *)(param_1 + 0x78);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
    plVar7 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar9 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar6 = *(long **)(lVar8 + 0x58);
        plVar5 = (long *)FUN_00a8c390();
        plVar7 = (long *)0x0;
        if (plVar6 == (long *)0x0) goto LAB_00acc1e4;
        while (plVar6 != plVar5) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            plVar7 = (long *)0x0;
            goto LAB_00acc1e4;
          }
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar9) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar7 = (long *)0x0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            plVar7 = (long *)(*(long *)(lVar8 + 0x60) + -0x50);
          }
          goto LAB_00acc1e4;
        }
        plVar7 = (long *)0x0;
        iVar9 = iVar2;
        if (iVar2 == 0) goto LAB_00acc1e4;
      }
      ClearExclusiveLocal();
      plVar7 = (long *)0x0;
      iVar9 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00acc1e4:
  (**(code **)(*plVar7 + 0x180))(plVar7);
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00acc210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  return;
}


