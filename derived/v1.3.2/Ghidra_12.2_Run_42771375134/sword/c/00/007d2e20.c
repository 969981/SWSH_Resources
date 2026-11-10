/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d2e20; name: FUN_007d2e20
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_007d2e20(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  
  puVar10 = PTR_DAT_02716cf8;
  puVar9 = PTR_DAT_02716cf0;
  if ((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 0x54) == 0)) {
    uVar12 = 0;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x38);
    piVar1 = (int *)(lVar14 + 0x54);
    iVar16 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        plVar17 = *(long **)(lVar14 + 0x58);
        if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
          uVar12 = FUN_009b7e90();
          *(undefined8 *)puVar10 = uVar12;
          __cxa_guard_release(puVar9);
        }
        for (; plVar17 != (long *)puVar10; plVar17 = (long *)*plVar17) {
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar16) break;
        ClearExclusiveLocal();
        iVar16 = iVar11;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar8 = PTR_DAT_02716ce8;
      puVar7 = PTR_DAT_02716ce0;
      iVar16 = iVar11;
    } while (cVar4 != '\0');
    lVar15 = *(long *)(lVar14 + 0x60);
    lVar14 = 0;
    if (lVar15 != 0) {
      lVar14 = lVar15 + -0x50;
    }
    if (*(char *)(lVar14 + 0x61) == '\0') {
LAB_007d301c:
      uVar12 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x10);
      for (lVar2 = *(long *)(param_1 + 8); lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
        if ((*(long *)(lVar2 + 8) == 0) || (*(int *)(*(long *)(lVar2 + 8) + 0x54) == 0))
        goto LAB_007d301c;
        lVar13 = *(long *)(lVar2 + 8);
        cVar4 = DAT_00000061;
        if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
          piVar1 = (int *)(lVar13 + 0x54);
          iVar16 = *(int *)(lVar13 + 0x54);
          do {
            while( true ) {
              plVar17 = *(long **)(lVar13 + 0x58);
              if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                uVar12 = FUN_009b7e90();
                *(undefined8 *)puVar8 = uVar12;
                __cxa_guard_release(puVar7);
              }
              while( true ) {
                cVar4 = DAT_00000061;
                if (plVar17 == (long *)0x0) goto joined_r0x007d2fec;
                if (plVar17 == (long *)puVar8) break;
                plVar17 = (long *)*plVar17;
              }
              iVar11 = *piVar1;
              if (iVar11 != iVar16) break;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar16 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              cVar4 = DAT_00000061;
              if (cVar5 == '\0') {
                lVar13 = *(long *)(lVar13 + 0x60);
                if (lVar13 != 0) {
                  cVar4 = *(char *)(lVar13 + 0x11);
                  (**(code **)(*(long *)(lVar13 + -8) + 0x18))();
                }
                goto joined_r0x007d2fec;
              }
              iVar16 = iVar11;
              if (iVar11 == 0) goto joined_r0x007d2fec;
            }
            ClearExclusiveLocal();
            iVar16 = iVar11;
          } while (iVar11 != 0);
        }
joined_r0x007d2fec:
        if (cVar4 == '\0') goto LAB_007d301c;
      }
      uVar12 = 1;
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
  }
  return uVar12;
}


