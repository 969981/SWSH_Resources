/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007da280; name: FUN_007da280
 */


undefined4 FUN_007da280(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  plVar7 = *(long **)(param_1 + 8);
  plVar10 = *(long **)(param_1 + 0x10);
  if ((plVar7 != plVar10) && (*plVar7 != *(long *)(*(long *)PTR_DAT_02716a30 + 0xf8))) {
    do {
      plVar7 = plVar7 + 2;
      if (plVar10 == plVar7) {
        return 0;
      }
    } while (*plVar7 != *(long *)(*(long *)PTR_DAT_02716a30 + 0xf8));
  }
  if ((plVar7 != plVar10) && (lVar8 = plVar7[1], lVar8 != 0)) {
    plVar7 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar9 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar8 + 0x58);
          lVar5 = FUN_007da9f0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_007da358;
            if (plVar10 == (long *)lVar5) break;
            plVar10 = (long *)*plVar10;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar9) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar5 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar5 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            goto LAB_007da35c;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto LAB_007da358;
        }
        ClearExclusiveLocal();
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
LAB_007da358:
    lVar5 = 0;
LAB_007da35c:
    (**(code **)(*plVar7 + 0x18))(plVar7);
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x61) == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(lVar5 + 0x88);
      }
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      return uVar6;
    }
  }
  return 0;
}


