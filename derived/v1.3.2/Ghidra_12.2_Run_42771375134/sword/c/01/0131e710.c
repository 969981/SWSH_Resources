/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131e710; name: FUN_0131e710
 */


void FUN_0131e710(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  if (((*(char *)(param_1 + 0x88) != '\0') && (lVar6 = *(long *)(param_1 + 8), lVar6 != 0)) &&
     (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar7 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(lVar6 + 0x58);
        lVar5 = FUN_00c781c0();
        while( true ) {
          if (plVar8 == (long *)0x0) {
            return;
          }
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
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 == 0) {
            return;
          }
          FUN_0069d120(lVar6 + -0x50,(char *)(param_1 + 0x88),param_2);
                    /* WARNING: Could not recover jumptable at 0x0131e7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
          return;
        }
        iVar7 = iVar2;
        if (iVar2 == 0) {
          return;
        }
      }
      ClearExclusiveLocal();
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


