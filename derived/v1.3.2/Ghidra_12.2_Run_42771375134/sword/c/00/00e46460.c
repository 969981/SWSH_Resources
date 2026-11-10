/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e46460; name: FUN_00e46460
 */


void FUN_00e46460(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  lVar8 = *(long *)(param_1 + 0x590);
  if (lVar8 == 0) {
    return;
  }
  plVar7 = (long *)(lVar8 + 0x48);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  piVar1 = (int *)(lVar8 + 0x54);
  if (*piVar1 != 0) {
    iVar2 = *piVar1;
    while (iVar9 = iVar2, iVar2 != 0) {
      while( true ) {
        plVar10 = *(long **)(lVar8 + 0x58);
        lVar5 = FUN_0156b190();
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00e464f8;
          if (plVar10 == (long *)lVar5) break;
          plVar10 = (long *)*plVar10;
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
          lVar5 = 0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar5 = *(long *)(lVar8 + 0x60) + -0x50;
          }
          goto LAB_00e464fc;
        }
        iVar9 = iVar2;
        if (iVar2 == 0) goto LAB_00e464f8;
      }
      ClearExclusiveLocal();
    }
LAB_00e464f8:
    lVar5 = 0;
LAB_00e464fc:
    uVar6 = FUN_00e455e0(lVar5 + 0x50);
    FUN_00eb1940(uVar6,param_2 & 1);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00e4653c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return;
}


