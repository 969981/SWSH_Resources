/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01316d10; name: FUN_01316d10
 */


void FUN_01316d10(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  lVar6 = *(long *)(*(long *)(param_2 + 0x58) + 0x60);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar7 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(lVar6 + 0x58);
        lVar5 = FUN_01318060();
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_01316d90;
          if (plVar8 == (long *)lVar5) break;
          plVar8 = (long *)*plVar8;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar7) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar5 = 0;
          if (*(long *)(lVar6 + 0x60) != 0) {
            lVar5 = *(long *)(lVar6 + 0x60) + -0x50;
          }
          *param_1 = lVar5;
          return;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) goto LAB_01316d90;
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_01316d90:
  *param_1 = 0;
  return;
}


