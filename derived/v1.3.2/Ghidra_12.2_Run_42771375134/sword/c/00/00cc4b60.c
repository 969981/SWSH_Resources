/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc4b60; name: FUN_00cc4b60
 */


undefined8 FUN_00cc4b60(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long local_38;
  
  plVar7 = *(long **)(param_1 + 0x90);
  (**(code **)plVar7[10])();
  uVar5 = FUN_00cc5070();
  if ((uVar5 & 1) == 0) {
    local_38 = 0;
LAB_00cc4c04:
    bVar4 = true;
    lVar8 = local_38;
  }
  else {
    (**(code **)(*plVar7 + 0x10))(&local_38,plVar7);
    if (local_38 == 0) goto LAB_00cc4c04;
    piVar1 = (int *)(local_38 + 0x54);
    lVar8 = local_38;
    if (*piVar1 != 0) {
      iVar2 = *piVar1;
      while (iVar9 = iVar2, iVar2 != 0) {
        while( true ) {
          uVar5 = FUN_00cc5070(*(undefined8 *)(local_38 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00cc4c98;
          iVar2 = *piVar1;
          if (iVar2 != iVar9) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar10 = *(long *)(local_38 + 0x60);
            if (lVar10 == 0) goto LAB_00cc4c98;
            uVar6 = FUN_00c92ab0(lVar10 + -0x50);
            (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
            goto LAB_00cc4ca4;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto LAB_00cc4c98;
        }
        ClearExclusiveLocal();
      }
LAB_00cc4c98:
      uVar6 = FUN_00c92ab0(0);
      goto LAB_00cc4ca4;
    }
    bVar4 = false;
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar10 == 0) {
    uVar6 = FUN_01524df0(0);
  }
  else {
    plVar7 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar6 = FUN_01524df0(lVar10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (bVar4) {
    return uVar6;
  }
LAB_00cc4ca4:
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return uVar6;
}


