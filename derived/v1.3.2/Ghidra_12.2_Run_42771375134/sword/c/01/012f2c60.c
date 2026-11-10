/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f2c60; name: FUN_012f2c60
 */


bool FUN_012f2c60(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  
  lVar8 = *(long *)(param_1 + 0x60);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar9 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar7 = *(long **)(lVar8 + 0x58);
        lVar5 = FUN_012f4940();
        while( true ) {
          if (plVar7 == (long *)0x0) goto joined_r0x012f2cf0;
          if (plVar7 == (long *)lVar5) break;
          plVar7 = (long *)*plVar7;
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
          cVar3 = *(char *)(lVar5 + 0x91);
          goto joined_r0x012f2dac;
        }
        iVar9 = iVar2;
        if (iVar2 == 0) goto joined_r0x012f2cf0;
      }
      ClearExclusiveLocal();
      iVar9 = iVar2;
    } while (iVar2 != 0);
  }
joined_r0x012f2cf0:
  lVar5 = 0;
  cVar3 = cRam0000000000000091;
joined_r0x012f2dac:
  if (cVar3 == '\0') {
    lVar8 = *(long *)(param_1 + 0x60);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar9 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          plVar7 = *(long **)(lVar8 + 0x58);
          lVar6 = FUN_012f4940();
          while( true ) {
            if (plVar7 == (long *)0x0) goto LAB_012f2ddc;
            if (plVar7 == (long *)lVar6) break;
            plVar7 = (long *)*plVar7;
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
            lVar8 = *(long *)(lVar8 + 0x60);
            if (lVar8 != 0) {
              bVar4 = *(char *)(lVar8 + 0x40) == '\0';
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
              goto joined_r0x012f2dd4;
            }
            goto LAB_012f2ddc;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto LAB_012f2ddc;
        }
        ClearExclusiveLocal();
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
LAB_012f2ddc:
    bVar4 = DAT_00000090 == '\0';
  }
  else {
    bVar4 = true;
  }
joined_r0x012f2dd4:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return bVar4;
}


