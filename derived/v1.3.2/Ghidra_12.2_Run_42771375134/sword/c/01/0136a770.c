/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136a770; name: FUN_0136a770
 */


undefined4 FUN_0136a770(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  
  puVar4 = PTR_DAT_0271df28;
  lVar12 = *(long *)PTR_DAT_02727748;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    puVar8 = PTR_DAT_02727758;
    pbVar10 = PTR_DAT_02727750;
    iVar9 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar12 + 0x58);
        if (((*pbVar10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_02727750), pbVar10 = PTR_DAT_02727750,
           puVar8 = PTR_DAT_02727758, iVar5 != 0)) {
          if (((*PTR_DAT_0271df20 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar5 != 0)) {
            uVar7 = FUN_00d3ff90();
            *(undefined8 *)puVar4 = uVar7;
            __cxa_guard_release(PTR_DAT_0271df20);
          }
          puVar8 = PTR_DAT_02727758;
          *(undefined **)PTR_DAT_02727758 = puVar4;
          pbVar10 = PTR_DAT_02727750;
          __cxa_guard_release(PTR_DAT_02727750);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0136a8e0;
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_0136a8e0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          uVar6 = FUN_01309330(lVar12 + -0x50);
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
          return uVar6;
        }
        break;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_0136a8e0:
  uVar6 = FUN_01309330(0);
  return uVar6;
}


