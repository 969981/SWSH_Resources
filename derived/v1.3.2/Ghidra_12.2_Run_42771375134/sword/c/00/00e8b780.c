/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8b780; name: FUN_00e8b780
 */


void FUN_00e8b780(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_1 + 0x70);
  lVar6 = *(long *)(lVar7 + 0x298);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x80) != 0)) &&
     (*(int *)(*(long *)(lVar6 + 0x80) + 0x54) != 0)) {
    lVar6 = *(long *)(lVar6 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar8 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar6 + 0x58);
          lVar5 = FUN_006cbb10();
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_00e8b848;
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
            lVar6 = *(long *)(lVar6 + 0x60);
            if (lVar6 != 0) {
              *(undefined1 *)(lVar6 + 0x10) = 1;
              (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
              lVar6 = *(long *)(param_1 + 0x90);
              goto joined_r0x00e8b840;
            }
            goto LAB_00e8b848;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00e8b848;
        }
        ClearExclusiveLocal();
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00e8b848:
    DAT_00000060 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x90);
joined_r0x00e8b840:
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar6 + 0x58);
        lVar5 = FUN_00c781c0();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00e8b8e4;
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
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            FUN_0069c580(lVar6 + -0x50,1);
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
            goto LAB_00e8b8f0;
          }
          goto LAB_00e8b8e4;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00e8b8e4;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00e8b8e4:
  FUN_0069c580(0,1);
LAB_00e8b8f0:
  FUN_00db6d40(lVar7,*(undefined1 *)(param_1 + 0xb4));
  *(undefined1 *)(param_1 + 0x69) = 1;
  return;
}


