/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d14cc0; name: FUN_00d14cc0
 */


void FUN_00d14cc0(long param_1,int param_2)

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
  long *plVar10;
  int iVar11;
  long *plVar12;
  
  lVar6 = *(long *)(param_1 + 0x2b8);
  plVar10 = *(long **)(lVar6 + 0x120);
  if (plVar10 != (long *)0x0) {
    do {
      lVar6 = plVar10[3];
      if (*(long *)(lVar6 + 0x108) != 0) {
        plVar12 = *(long **)(lVar6 + 0x100);
        do {
          lVar7 = *plVar12;
          if (lVar7 == 0) {
            FUN_00d34d10(0);
          }
          else {
            plVar9 = (long *)(lVar7 + 0x48);
            (**(code **)(*plVar9 + 0x10))(plVar9);
            FUN_00d34d10(lVar7);
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
          plVar12 = plVar12 + 1;
        } while (plVar12 != (long *)(*(long *)(lVar6 + 0x100) + *(long *)(lVar6 + 0x108) * 8));
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
    lVar6 = *(long *)(param_1 + 0x2b8);
  }
  lVar7 = 0;
  do {
    lVar6 = *(long *)(lVar6 + lVar7 * 8 + 0x160);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x2b8) + lVar7 * 8 + 0x160);
      iVar8 = (int)lVar7;
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x54) == 0) {
          FUN_010312b0(0,iVar8 + param_2);
          goto LAB_00d14e54;
        }
        piVar1 = (int *)(lVar6 + 0x54);
        iVar11 = *(int *)(lVar6 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar6 + 0x58);
            lVar5 = FUN_00d16cb0();
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_00d14e34;
              if (plVar10 == (long *)lVar5) break;
              plVar10 = (long *)*plVar10;
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
              lVar5 = 0;
              if (*(long *)(lVar6 + 0x60) != 0) {
                lVar5 = *(long *)(lVar6 + 0x60) + -0x50;
              }
              FUN_010312b0(lVar5,iVar8 + param_2);
              if (lVar5 != 0) {
                (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
              }
              goto LAB_00d14e54;
            }
            iVar11 = iVar2;
            if (iVar2 == 0) goto LAB_00d14e34;
          }
          ClearExclusiveLocal();
          iVar11 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00d14e34:
      FUN_010312b0(0,iVar8 + param_2);
    }
LAB_00d14e54:
    lVar6 = *(long *)(param_1 + 0x2b8);
    lVar7 = lVar7 + 1;
    if (lVar7 == 8) {
      if (*(char *)(lVar6 + 0x78c) == '\0') {
        FUN_0074c6a0(0,*(undefined8 *)(lVar6 + 0x778));
      }
      *(undefined8 *)(param_1 + 0x2c0) = 3;
      return;
    }
  } while( true );
}


