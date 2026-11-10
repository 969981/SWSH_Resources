/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffa440; name: FUN_00ffa440
 */


/* WARNING: Type propagation algorithm not settling */

int * FUN_00ffa440(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  
  plVar4 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x68) + 0x5a0) + 0x10))();
  if (((long *)plVar4[1] != (long *)*plVar4) && (lVar6 = *(long *)*plVar4, lVar6 != 0)) {
    plVar4 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    piVar8 = (int *)(lVar6 + 0x54);
    if (*piVar8 == 0) {
      bVar3 = true;
    }
    else {
      iVar1 = *piVar8;
      while (iVar9 = iVar1, iVar1 != 0) {
        while( true ) {
          plVar10 = *(long **)(lVar6 + 0x58);
          lVar5 = FUN_00ffb220();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00ffa4f4;
            if (plVar10 == (long *)lVar5) break;
            plVar10 = (long *)*plVar10;
          }
          iVar1 = *piVar8;
          if (iVar1 != iVar9) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            piVar7 = (int *)0x0;
            if (*(long *)(lVar6 + 0x60) != 0) {
              piVar7 = (int *)(*(long *)(lVar6 + 0x60) + -0x50);
            }
            goto LAB_00ffa4f8;
          }
          iVar9 = iVar1;
          if (iVar1 == 0) goto LAB_00ffa4f4;
        }
        ClearExclusiveLocal();
      }
LAB_00ffa4f4:
      piVar7 = (int *)0x0;
LAB_00ffa4f8:
      plVar10 = (long *)(*(code *)**(undefined8 **)(piVar7 + 0x14))(piVar7 + 0x14);
      lVar6 = FUN_00ffb220();
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        piVar8 = piVar7;
        if (plVar10 == (long *)lVar6) goto joined_r0x00ffa540;
      }
      piVar8 = (int *)0x0;
joined_r0x00ffa540:
      bVar3 = false;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*(long *)(piVar7 + 0x12) + 0x18))(piVar7 + 0x12);
        bVar3 = false;
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    if (!bVar3) {
      return piVar8;
    }
  }
  return (int *)0x0;
}


