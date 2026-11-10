/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d9f10; name: FUN_007d9f10
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_007d9f10(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  
  lVar3 = *(long *)(param_1 + 0x10);
  for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    if (*(long *)(lVar2 + 8) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0x54) == 0) {
      return 0;
    }
    lVar11 = *(long *)(lVar2 + 8);
    cVar6 = DAT_00000061;
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
      piVar1 = (int *)(lVar11 + 0x54);
      iVar8 = *(int *)(lVar11 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar11 + 0x58);
          lVar9 = FUN_007da9f0();
          while( true ) {
            cVar6 = DAT_00000061;
            if (plVar14 == (long *)0x0) goto joined_r0x007d9fd4;
            if (plVar14 == (long *)lVar9) break;
            plVar14 = (long *)*plVar14;
          }
          iVar12 = *piVar1;
          if (iVar12 != iVar8) break;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          cVar6 = DAT_00000061;
          if (cVar5 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x60);
            if (lVar11 != 0) {
              cVar6 = *(char *)(lVar11 + 0x11);
              (**(code **)(*(long *)(lVar11 + -8) + 0x18))();
            }
            goto joined_r0x007d9fd4;
          }
          iVar8 = iVar12;
          if (iVar12 == 0) goto joined_r0x007d9fd4;
        }
        ClearExclusiveLocal();
        iVar8 = iVar12;
      } while (iVar12 != 0);
    }
joined_r0x007d9fd4:
    if (cVar6 == '\0') {
      return 0;
    }
  }
  iVar8 = FUN_007da280(param_1);
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  do {
    if (lVar2 == lVar3) {
      return 1;
    }
    if ((*(long *)(lVar2 + 8) == 0) || (*(int *)(*(long *)(lVar2 + 8) + 0x54) == 0)) {
      return 0;
    }
    lVar11 = *(long *)(lVar2 + 8);
    piVar1 = (int *)(lVar11 + 0x54);
    iVar12 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar14 = *(long **)(lVar11 + 0x58);
        lVar9 = FUN_007da9f0();
        for (; plVar14 != (long *)lVar9; plVar14 = (long *)*plVar14) {
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar4;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      iVar12 = iVar4;
    } while (cVar6 != '\0');
    lVar9 = *(long *)(lVar11 + 0x60);
    lVar11 = 0;
    if (lVar9 != 0) {
      lVar11 = lVar9 + -0x50;
    }
    if (*(char *)(lVar11 + 0x61) == '\0') {
      bVar7 = false;
    }
    else {
      lVar13 = *(long *)(lVar2 + 8);
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
        piVar1 = (int *)(lVar13 + 0x54);
        iVar12 = *(int *)(lVar13 + 0x54);
        do {
          while( true ) {
            plVar14 = *(long **)(lVar13 + 0x58);
            lVar10 = FUN_007da9f0();
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_007da134;
              if (plVar14 == (long *)lVar10) break;
              plVar14 = (long *)*plVar14;
            }
            iVar4 = *piVar1;
            if (iVar4 != iVar12) break;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar12 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              lVar13 = *(long *)(lVar13 + 0x60);
              if (lVar13 != 0) {
                bVar7 = *(int *)(lVar13 + 0x38) == iVar8;
                (**(code **)(*(long *)(lVar13 + -8) + 0x18))();
                goto joined_r0x007da12c;
              }
              goto LAB_007da134;
            }
            iVar12 = iVar4;
            if (iVar4 == 0) goto LAB_007da134;
          }
          ClearExclusiveLocal();
          iVar12 = iVar4;
        } while (iVar4 != 0);
      }
LAB_007da134:
      bVar7 = _DAT_00000088 == iVar8;
    }
joined_r0x007da12c:
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    if (!bVar7) {
      return 0;
    }
    lVar2 = lVar2 + 0x10;
  } while( true );
}


