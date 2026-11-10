/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131e480; name: FUN_0131e480
 */


void FUN_0131e480(long param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  uVar2 = *(undefined4 *)(param_1 + (long)param_2 * 8 + 0x10);
  if (((*(char *)(param_1 + 0x80) != '\0') && (lVar7 = *(long *)(param_1 + 8), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar8 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar7 + 0x58);
        lVar6 = FUN_00c781c0();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_0131e544;
          if (plVar9 == (long *)lVar6) break;
          plVar9 = (long *)*plVar9;
        }
        iVar3 = *piVar1;
        if (iVar3 != iVar8) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            FUN_0069d120(lVar7 + -0x50,(char *)(param_1 + 0x80),uVar2);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
          }
          goto LAB_0131e544;
        }
        iVar8 = iVar3;
        if (iVar3 == 0) goto LAB_0131e544;
      }
      ClearExclusiveLocal();
      iVar8 = iVar3;
    } while (iVar3 != 0);
  }
LAB_0131e544:
  uVar2 = *(undefined4 *)(param_1 + (long)param_2 * 8 + 0x14);
  if (((*(char *)(param_1 + 0x88) != '\0') && (lVar7 = *(long *)(param_1 + 8), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar8 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar7 + 0x58);
        lVar6 = FUN_00c781c0();
        while( true ) {
          if (plVar9 == (long *)0x0) {
            return;
          }
          if (plVar9 == (long *)lVar6) break;
          plVar9 = (long *)*plVar9;
        }
        iVar3 = *piVar1;
        if (iVar3 != iVar8) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 == 0) {
            return;
          }
          FUN_0069d120(lVar7 + -0x50,(char *)(param_1 + 0x88),uVar2);
                    /* WARNING: Could not recover jumptable at 0x0131e5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
          return;
        }
        iVar8 = iVar3;
        if (iVar3 == 0) {
          return;
        }
      }
      ClearExclusiveLocal();
      iVar8 = iVar3;
    } while (iVar3 != 0);
  }
  return;
}


