/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d3060; name: FUN_007d3060
 */


undefined8 FUN_007d3060(long param_1,short param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  
  uVar9 = FUN_007d2e20();
  puVar6 = PTR_DAT_02716ce8;
  puVar5 = PTR_DAT_02716ce0;
  if ((uVar9 & 1) == 0) {
LAB_007d3230:
    uVar10 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
      if ((*(long *)(lVar2 + 8) == 0) || (*(int *)(*(long *)(lVar2 + 8) + 0x54) == 0))
      goto LAB_007d3230;
      lVar13 = *(long *)(lVar2 + 8);
      piVar1 = (int *)(lVar13 + 0x54);
      iVar15 = *(int *)(lVar13 + 0x54);
      do {
        while( true ) {
          plVar16 = *(long **)(lVar13 + 0x58);
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            uVar10 = FUN_009b7e90();
            *(undefined8 *)puVar6 = uVar10;
            __cxa_guard_release(puVar5);
          }
          for (; plVar16 != (long *)puVar6; plVar16 = (long *)*plVar16) {
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar15) break;
          ClearExclusiveLocal();
          iVar15 = iVar8;
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar15 = iVar8;
      } while (cVar4 != '\0');
      lVar14 = *(long *)(lVar13 + 0x60);
      lVar13 = 0;
      if (lVar14 != 0) {
        lVar13 = lVar14 + -0x50;
      }
      if (*(char *)(lVar13 + 0x61) == '\0') {
        bVar7 = false;
      }
      else {
        lVar11 = *(long *)(lVar2 + 8);
        piVar1 = (int *)(lVar11 + 0x54);
        iVar15 = *(int *)(lVar11 + 0x54);
        do {
          while( true ) {
            plVar16 = *(long **)(lVar11 + 0x58);
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              uVar10 = FUN_009b7e90();
              *(undefined8 *)puVar6 = uVar10;
              __cxa_guard_release(puVar5);
            }
            for (; plVar16 != (long *)puVar6; plVar16 = (long *)*plVar16) {
            }
            iVar8 = *piVar1;
            if (iVar8 == iVar15) break;
            ClearExclusiveLocal();
            iVar15 = iVar8;
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          iVar15 = iVar8;
        } while (cVar4 != '\0');
        lVar12 = *(long *)(lVar11 + 0x60);
        lVar11 = 0;
        if (lVar12 != 0) {
          lVar11 = lVar12 + -0x50;
        }
        bVar7 = *(short *)(lVar11 + 0x8a) == param_2;
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
        }
      }
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      if (!bVar7) goto LAB_007d3230;
    }
    uVar10 = 1;
  }
  return uVar10;
}


