/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010312f0; name: FUN_010312f0
 */


void FUN_010312f0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0xa0);
  if (lVar6 == 0) {
LAB_010314f0:
    FUN_01031510(param_1);
    return;
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
LAB_0103132c:
  if (*(int *)(lVar6 + 0x54) != 0) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar7 = *(int *)(lVar6 + 0x54);
    do {
      plVar9 = *(long **)(lVar6 + 0x58);
      lVar5 = FUN_01031780();
      while( true ) {
        if (plVar9 == (long *)0x0) goto LAB_010314c8;
        if (plVar9 == (long *)lVar5) break;
        plVar9 = (long *)*plVar9;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0103138c;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar2;
      if (iVar2 == 0) break;
    } while( true );
  }
  goto LAB_010314c8;
LAB_0103138c:
  if (*(long *)(lVar6 + 0x60) == 0) {
LAB_010314c8:
    FUN_01031510(param_1);
                    /* WARNING: Could not recover jumptable at 0x010314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    return;
  }
  (**(code **)(*(long *)(*(long *)(lVar6 + 0x60) + -8) + 0x18))();
  iVar7 = *piVar1;
  do {
    while( true ) {
      if (iVar7 == 0) goto LAB_010313f0;
      plVar9 = *(long **)(lVar6 + 0x58);
      lVar5 = FUN_01031780();
      while( true ) {
        if (plVar9 == (long *)0x0) goto LAB_010313f0;
        if (plVar9 == (long *)lVar5) break;
        plVar9 = (long *)*plVar9;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) break;
      ClearExclusiveLocal();
      iVar7 = iVar2;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar7 = iVar2;
  } while (cVar3 != '\0');
  lVar5 = *(long *)(lVar6 + 0x60);
  if (lVar5 == 0) {
LAB_010313f0:
    FUN_010312f0(0,param_2 + 1);
  }
  else {
    FUN_010312f0(lVar5 + -0x50,param_2 + 1);
    (**(code **)(*(long *)(lVar5 + -8) + 0x18))((long *)(lVar5 + -8));
  }
  iVar7 = *piVar1;
  do {
    while( true ) {
      plVar9 = *(long **)(lVar6 + 0x58);
      lVar5 = FUN_01031780();
      for (; plVar9 != (long *)lVar5; plVar9 = (long *)*plVar9) {
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) break;
      ClearExclusiveLocal();
      iVar7 = iVar2;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar7 = iVar2;
  } while (cVar3 != '\0');
  lVar10 = *(long *)(lVar6 + 0x60);
  lVar5 = 0;
  if (lVar10 != 0) {
    lVar5 = lVar10 + -0x50;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0x60) + 0x98);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar6 = lVar8;
  if (lVar8 == 0) goto LAB_010314f0;
  goto LAB_0103132c;
}


