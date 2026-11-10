/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb1940; name: FUN_00eb1940
 */


void FUN_00eb1940(long param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  param_2 = param_2 & 1;
  *(byte *)(param_1 + 0x568) = param_2;
  *(byte *)(param_1 + 0x218) = param_2;
  if ((*(long *)(param_1 + 0x360) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x360) + 0x80), lVar7 == 0)) {
    return;
  }
  plVar6 = (long *)(lVar7 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  piVar1 = (int *)(lVar7 + 0x54);
  if (*piVar1 != 0) {
    iVar2 = *piVar1;
    while (iVar8 = iVar2, iVar2 != 0) {
      while( true ) {
        plVar9 = *(long **)(lVar7 + 0x58);
        lVar5 = FUN_006cb2c0();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00eb1a1c;
          if (plVar9 == (long *)lVar5) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 == 0) goto LAB_00eb1a1c;
          *(byte *)(lVar7 + 0x10) = param_2;
          (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
          goto LAB_00eb1a24;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00eb1a1c;
      }
      ClearExclusiveLocal();
    }
LAB_00eb1a1c:
    DAT_00000060 = param_2;
  }
LAB_00eb1a24:
                    /* WARNING: Could not recover jumptable at 0x00eb1a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6);
  return;
}


