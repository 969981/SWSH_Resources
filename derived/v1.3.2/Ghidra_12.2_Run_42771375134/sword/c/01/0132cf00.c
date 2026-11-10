/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132cf00; name: FUN_0132cf00
 */


void FUN_0132cf00(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [104];
  long local_28;
  
  puVar4 = PTR_DAT_02727750;
  lVar8 = *(long *)PTR_DAT_02727748;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
LAB_0132d050:
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0x54);
    puVar9 = PTR_DAT_02727758;
    iVar11 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar8 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(puVar4);
          puVar9 = PTR_DAT_02727758;
          if (iVar6 != 0) {
            if (((*PTR_DAT_0271df20 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar6 != 0)) {
              uVar7 = FUN_00d3ff90();
              *(undefined8 *)PTR_DAT_0271df28 = uVar7;
              __cxa_guard_release(PTR_DAT_0271df20);
            }
            puVar9 = PTR_DAT_02727758;
            *(undefined **)PTR_DAT_02727758 = PTR_DAT_0271df28;
            __cxa_guard_release(puVar4);
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_0132d050;
          if (plVar10 == (long *)puVar9) break;
          plVar10 = (long *)*plVar10;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar11) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar12 = *(long *)(lVar8 + 0x60) + -0x50;
          }
          goto LAB_0132d054;
        }
        lVar12 = 0;
        iVar11 = iVar6;
        if (iVar6 == 0) goto LAB_0132d054;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar11 = iVar6;
    } while (iVar6 != 0);
  }
LAB_0132d054:
  local_b0 = &LAB_0132dc30;
  local_a8 = FUN_0132dca0;
  local_a0 = &LAB_0132dcb0;
  puStack_98 = &LAB_0132dcc0;
  FUN_01309760(&local_28,lVar12,&local_b0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  pcVar5 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar5)(auStack_90);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


