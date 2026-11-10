/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc4de0; name: FUN_00cc4de0
 */


void FUN_00cc4de0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long local_28;
  
  plVar6 = *(long **)(param_1 + 0x90);
  (**(code **)plVar6[10])();
  uVar5 = FUN_00cc5070();
  if (((uVar5 & 1) != 0) && ((**(code **)(*plVar6 + 0x10))(&local_28,plVar6), local_28 != 0)) {
    piVar1 = (int *)(local_28 + 0x54);
    if (*piVar1 != 0) {
      iVar2 = *piVar1;
      while (iVar8 = iVar2, iVar2 != 0) {
        while( true ) {
          uVar5 = FUN_00cc5070(*(undefined8 *)(local_28 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00cc4ea0;
          iVar2 = *piVar1;
          if (iVar2 != iVar8) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = *(long *)(local_28 + 0x60);
            if (lVar7 == 0) goto LAB_00cc4ea0;
            FUN_00c92e90(lVar7 + -0x50);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
            goto LAB_00cc4ea8;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00cc4ea0;
        }
        ClearExclusiveLocal();
      }
LAB_00cc4ea0:
      FUN_00c92e90(0);
    }
LAB_00cc4ea8:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
  }
  return;
}


