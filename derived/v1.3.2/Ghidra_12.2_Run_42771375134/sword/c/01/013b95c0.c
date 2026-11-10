/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b95c0; name: FUN_013b95c0
 */


ulong FUN_013b95c0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  
  iVar5 = FUN_0132a1f0(param_1 + 0x1d0);
  puVar4 = PTR_DAT_0271df28;
  if (iVar5 < 2) {
    return 1;
  }
  lVar13 = *(long *)PTR_DAT_02727748;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
    piVar1 = (int *)(lVar13 + 0x54);
    puVar10 = PTR_DAT_02727758;
    pbVar11 = PTR_DAT_02727750;
    iVar5 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar13 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_02727750), pbVar11 = PTR_DAT_02727750,
           puVar10 = PTR_DAT_02727758, iVar6 != 0)) {
          if (((*PTR_DAT_0271df20 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar6 != 0)) {
            uVar8 = FUN_00d3ff90();
            *(undefined8 *)puVar4 = uVar8;
            __cxa_guard_release(PTR_DAT_0271df20);
          }
          puVar10 = PTR_DAT_02727758;
          *(undefined **)PTR_DAT_02727758 = puVar4;
          pbVar11 = PTR_DAT_02727750;
          __cxa_guard_release(PTR_DAT_02727750);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_013b975c;
          if (plVar12 == (long *)puVar10) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar5) break;
        ClearExclusiveLocal();
        iVar5 = iVar6;
        if (iVar6 == 0) goto LAB_013b975c;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar13 = *(long *)(lVar13 + 0x60);
        if (lVar13 != 0) {
          uVar7 = FUN_0130a600(lVar13 + -0x50);
          (**(code **)(*(long *)(lVar13 + -8) + 0x18))((long *)(lVar13 + -8));
          return (ulong)(uVar7 & 1);
        }
        break;
      }
      iVar5 = iVar6;
    } while (iVar6 != 0);
  }
LAB_013b975c:
  uVar9 = FUN_0130a600(0);
  return uVar9;
}


