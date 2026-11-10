/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01345710; name: FUN_01345710
 */


void FUN_01345710(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 local_40 [16];
  
  puVar4 = PTR_DAT_02727750;
  lVar13 = *(long *)PTR_DAT_02727748;
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
LAB_0134585c:
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0x54);
    puVar10 = PTR_DAT_02727758;
    iVar6 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar13 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar10 = PTR_DAT_02727758;
          if (iVar5 != 0) {
            if (((*PTR_DAT_0271df20 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar5 != 0)) {
              uVar8 = FUN_00d3ff90();
              *(undefined8 *)PTR_DAT_0271df28 = uVar8;
              __cxa_guard_release(PTR_DAT_0271df20);
            }
            puVar10 = PTR_DAT_02727758;
            *(undefined **)PTR_DAT_02727758 = PTR_DAT_0271df28;
            __cxa_guard_release(puVar4);
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0134585c;
          if (plVar11 == (long *)puVar10) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar6) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            lVar12 = *(long *)(lVar13 + 0x60) + -0x50;
          }
          goto LAB_01345860;
        }
        lVar12 = 0;
        iVar6 = iVar5;
        if (iVar5 == 0) goto LAB_01345860;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar6 = iVar5;
    } while (iVar5 != 0);
  }
LAB_01345860:
  puVar7 = (undefined8 *)FUN_013471e0(param_1);
  iVar6 = FUN_012b6590(*puVar7);
  uVar8 = FUN_01346f50(param_1);
  if (iVar6 == 0) {
    uVar9 = FUN_012dcaa0(lVar12);
    FUN_0131fb30(uVar8,uVar9);
  }
  else {
    local_40 = FUN_0130a450();
    FUN_0131fb30(uVar8,local_40);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


