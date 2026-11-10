/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc4a50; name: FUN_00cc4a50
 */


uint FUN_00cc4a50(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long local_28;
  
  plVar7 = *(long **)(param_1 + 0x90);
  (**(code **)plVar7[10])();
  uVar6 = FUN_00cc5070();
  if (((uVar6 & 1) == 0) || ((**(code **)(*plVar7 + 0x10))(&local_28,plVar7), local_28 == 0)) {
    uVar5 = 0;
  }
  else {
    piVar1 = (int *)(local_28 + 0x54);
    if (*piVar1 == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = *piVar1;
      while (iVar8 = iVar2, iVar2 != 0) {
        while( true ) {
          uVar6 = FUN_00cc5070(*(undefined8 *)(local_28 + 0x58));
          if ((uVar6 & 1) == 0) goto LAB_00cc4b24;
          iVar2 = *piVar1;
          if (iVar2 != iVar8) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar9 = *(long *)(local_28 + 0x60);
            if (lVar9 == 0) goto LAB_00cc4b24;
            uVar5 = FUN_00c92aa0(lVar9 + -0x50);
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
            goto LAB_00cc4b30;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00cc4b24;
        }
        ClearExclusiveLocal();
      }
LAB_00cc4b24:
      uVar5 = FUN_00c92aa0(0);
    }
LAB_00cc4b30:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
  }
  return uVar5 & 1;
}


