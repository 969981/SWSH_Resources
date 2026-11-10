/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e43940; name: FUN_00e43940
 */


undefined8 FUN_00e43940(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  
  uVar5 = FUN_00db3570();
  if ((uVar5 & 1) == 0) {
LAB_00e43ad0:
    uVar7 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x588) != 0) && (*(int *)(*(long *)(param_1 + 0x588) + 0x54) != 0)) {
      lVar10 = *(long *)(param_1 + 0x588);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
        plVar8 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar11 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            plVar9 = *(long **)(lVar10 + 0x58);
            plVar6 = (long *)FUN_0156b190();
            plVar8 = (long *)0x0;
            if (plVar9 == (long *)0x0) goto LAB_00e439e8;
            while (plVar9 != plVar6) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) {
                plVar8 = (long *)0x0;
                goto LAB_00e439e8;
              }
            }
            iVar2 = *piVar1;
            if (iVar2 != iVar11) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar8 = (long *)0x0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                plVar8 = (long *)(*(long *)(lVar10 + 0x60) + -0x50);
              }
              goto LAB_00e439e8;
            }
            plVar8 = (long *)0x0;
            iVar11 = iVar2;
            if (iVar2 == 0) goto LAB_00e439e8;
          }
          ClearExclusiveLocal();
          plVar8 = (long *)0x0;
          iVar11 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00e439e8:
      uVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
      if (plVar8 != (long *)0x0) {
        (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
      }
      if ((uVar5 & 1) == 0) goto LAB_00e43ad0;
    }
    if ((*(long *)(param_1 + 0x590) != 0) && (*(int *)(*(long *)(param_1 + 0x590) + 0x54) != 0)) {
      lVar10 = *(long *)(param_1 + 0x590);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
        plVar8 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar11 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            plVar9 = *(long **)(lVar10 + 0x58);
            plVar6 = (long *)FUN_0156b190();
            plVar8 = (long *)0x0;
            if (plVar9 == (long *)0x0) goto LAB_00e43a9c;
            while (plVar9 != plVar6) {
              plVar9 = (long *)*plVar9;
              if (plVar9 == (long *)0x0) {
                plVar8 = (long *)0x0;
                goto LAB_00e43a9c;
              }
            }
            iVar2 = *piVar1;
            if (iVar2 != iVar11) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar8 = (long *)0x0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                plVar8 = (long *)(*(long *)(lVar10 + 0x60) + -0x50);
              }
              goto LAB_00e43a9c;
            }
            plVar8 = (long *)0x0;
            iVar11 = iVar2;
            if (iVar2 == 0) goto LAB_00e43a9c;
          }
          ClearExclusiveLocal();
          plVar8 = (long *)0x0;
          iVar11 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00e43a9c:
      uVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
      if (plVar8 != (long *)0x0) {
        (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
      }
      if ((uVar5 & 1) == 0) goto LAB_00e43ad0;
    }
    uVar7 = 1;
  }
  return uVar7;
}


