/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136a910; name: FUN_0136a910
 */


undefined4 FUN_0136a910(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined4 *local_90 [12];
  long local_30;
  undefined4 local_24;
  
  puVar5 = PTR_DAT_02727758;
  puVar4 = PTR_DAT_02727750;
  local_24 = 0;
  lVar9 = *(long *)PTR_DAT_02727748;
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
LAB_0136aa54:
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar9 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          if (((*PTR_DAT_0271df20 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar7 != 0)) {
            uVar8 = FUN_00d3ff90();
            *(undefined8 *)PTR_DAT_0271df28 = uVar8;
            __cxa_guard_release(PTR_DAT_0271df20);
          }
          *(undefined **)puVar5 = PTR_DAT_0271df28;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0136aa54;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar7 = *piVar1;
        if (iVar7 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar12 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto LAB_0136aa58;
        }
        lVar12 = 0;
        iVar10 = iVar7;
        if (iVar7 == 0) goto LAB_0136aa58;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar10 = iVar7;
    } while (iVar7 != 0);
  }
LAB_0136aa58:
  local_90[0] = &local_24;
  local_b0 = &LAB_0136ae40;
  local_a8 = FUN_0136aeb0;
  local_a0 = &LAB_0136aec0;
  local_98 = &LAB_0136aed0;
  FUN_01309760(&local_30,lVar12,&local_b0);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  pcVar6 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar6)(local_90);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return local_24;
}


