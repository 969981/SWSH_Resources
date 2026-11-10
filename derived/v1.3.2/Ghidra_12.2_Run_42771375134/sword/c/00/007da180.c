/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007da180; name: FUN_007da180
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_007da180(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  do {
    if (lVar2 == lVar3) {
      return 1;
    }
    if ((*(long *)(lVar2 + 8) == 0) || (*(int *)(*(long *)(lVar2 + 8) + 0x54) == 0)) {
      return 0;
    }
    lVar9 = *(long *)(lVar2 + 8);
    cVar4 = DAT_00000061;
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar10 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar9 + 0x58);
          lVar8 = FUN_007da9f0();
          while( true ) {
            cVar4 = DAT_00000061;
            if (plVar11 == (long *)0x0) goto joined_r0x007da23c;
            if (plVar11 == (long *)lVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar5 = *piVar1;
          if (iVar5 != iVar10) break;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          cVar4 = DAT_00000061;
          if (cVar6 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x60);
            if (lVar9 != 0) {
              cVar4 = *(char *)(lVar9 + 0x11);
              (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            }
            goto joined_r0x007da23c;
          }
          iVar10 = iVar5;
          if (iVar5 == 0) goto joined_r0x007da23c;
        }
        ClearExclusiveLocal();
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
joined_r0x007da23c:
    if (cVar4 == '\0') {
      return 0;
    }
    lVar2 = lVar2 + 0x10;
  } while( true );
}


