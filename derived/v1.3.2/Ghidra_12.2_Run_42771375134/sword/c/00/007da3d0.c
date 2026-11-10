/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007da3d0; name: FUN_007da3d0
 */


undefined8 FUN_007da3d0(long param_1,undefined8 param_2)

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
  
  plVar6 = *(long **)(param_1 + 8);
  plVar9 = *(long **)(param_1 + 0x10);
  if ((plVar6 != plVar9) && (*plVar6 != *(long *)(*(long *)PTR_DAT_02716a30 + 0xf0))) {
    do {
      plVar6 = plVar6 + 2;
      if (plVar9 == plVar6) {
        return 0;
      }
    } while (*plVar6 != *(long *)(*(long *)PTR_DAT_02716a30 + 0xf0));
  }
  if ((plVar6 != plVar9) && (lVar7 = plVar6[1], lVar7 != 0)) {
    plVar6 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (*(int *)(lVar7 + 0x54) != 0) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar8 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar7 + 0x58);
          lVar5 = FUN_007da9f0();
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_007da4ac;
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
            lVar5 = 0;
            if (*(long *)(lVar7 + 0x60) != 0) {
              lVar5 = *(long *)(lVar7 + 0x60) + -0x50;
            }
            goto LAB_007da4b0;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_007da4ac;
        }
        ClearExclusiveLocal();
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
LAB_007da4ac:
    lVar5 = 0;
LAB_007da4b0:
    (**(code **)(*plVar6 + 0x18))(plVar6);
    if (lVar5 != 0) {
      FUN_007da520(lVar5,param_2);
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      return 1;
    }
  }
  return 0;
}


