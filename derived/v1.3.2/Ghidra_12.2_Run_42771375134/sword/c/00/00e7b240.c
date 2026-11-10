/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7b240; name: FUN_00e7b240
 */


undefined4 FUN_00e7b240(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0x54) == 0)) {
    uVar5 = 0;
  }
  else {
    lVar9 = *param_1;
    if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
      plVar8 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar7 = *(long **)(lVar9 + 0x58);
          plVar6 = (long *)FUN_0156b190();
          plVar8 = (long *)0x0;
          if (plVar7 == (long *)0x0) goto LAB_00e7b2e8;
          while (plVar7 != plVar6) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) {
              plVar8 = (long *)0x0;
              goto LAB_00e7b2e8;
            }
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar8 = (long *)0x0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              plVar8 = (long *)(*(long *)(lVar9 + 0x60) + -0x50);
            }
            goto LAB_00e7b2e8;
          }
          plVar8 = (long *)0x0;
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_00e7b2e8;
        }
        ClearExclusiveLocal();
        plVar8 = (long *)0x0;
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00e7b2e8:
    uVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,param_2,0);
    if (plVar8 != (long *)0x0) {
      (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
    }
  }
  return uVar5;
}


