/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e892d0; name: FUN_00e892d0
 */


void FUN_00e892d0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  
  lVar8 = *(long *)(param_1 + 0x70);
  if ((((*(char *)(param_1 + 0xac) == '\0') && (lVar7 = *(long *)(lVar8 + 0x298), lVar7 != 0)) &&
      (*(long *)(lVar7 + 0x80) != 0)) && (*(int *)(*(long *)(lVar7 + 0x80) + 0x54) != 0)) {
    lVar7 = *(long *)(lVar7 + 0x80);
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar10 = *(int *)(lVar7 + 0x54);
      do {
        plVar12 = *(long **)(lVar7 + 0x58);
        lVar5 = FUN_006cbb10();
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00e893e8;
          if (plVar12 == (long *)lVar5) break;
          plVar12 = (long *)*plVar12;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = *(long *)(lVar7 + 0x60);
            if (lVar7 != 0) {
              *(undefined1 *)(lVar7 + 0x10) = 1;
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
              lVar7 = *(long *)(param_1 + 0xc0);
              goto joined_r0x00e894bc;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00e893e8:
    DAT_00000060 = 1;
    lVar7 = *(long *)(param_1 + 0xc0);
  }
  else {
    lVar7 = *(long *)(param_1 + 0xc0);
  }
joined_r0x00e894bc:
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    lVar7 = *(long *)(param_1 + 0xc0);
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar10 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar7 + 0x58);
          lVar5 = FUN_00c781c0();
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00e89434;
            if (plVar12 == (long *)lVar5) break;
            plVar12 = (long *)*plVar12;
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
            lVar7 = *(long *)(lVar7 + 0x60);
            if (lVar7 != 0) {
              FUN_0069c580(lVar7 + -0x50,1);
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
              plVar12 = *(long **)(lVar8 + 0x1e8);
              plVar11 = *(long **)(lVar8 + 0x1f0);
              if (plVar12 != plVar11) goto LAB_00e8944c;
              goto LAB_00e89474;
            }
            goto LAB_00e89434;
          }
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_00e89434;
        }
        ClearExclusiveLocal();
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00e89434:
    FUN_0069c580(0,1);
  }
  plVar11 = *(long **)(lVar8 + 0x1f0);
  plVar12 = *(long **)(lVar8 + 0x1e8);
  if (*(long **)(lVar8 + 0x1e8) != plVar11) {
LAB_00e8944c:
    do {
      plVar9 = plVar12 + 1;
      lVar7 = *plVar12;
      uVar6 = FUN_00df2e00(lVar7 + 0x50);
      if ((uVar6 & 1) != 0) {
        FUN_00df0870(lVar7);
        break;
      }
      plVar12 = plVar9;
    } while (plVar11 != plVar9);
  }
LAB_00e89474:
  FUN_00db6d40(lVar8,*(undefined1 *)(param_1 + 0x120));
  *(undefined1 *)(param_1 + 0x69) = 1;
  return;
}


