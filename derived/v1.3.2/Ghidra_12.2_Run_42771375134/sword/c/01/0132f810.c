/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132f810; name: FUN_0132f810
 */


void FUN_0132f810(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  byte *pbVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  long local_40;
  undefined1 auStack_38 [8];
  
  puVar6 = PTR_DAT_02727778;
  if (((*PTR_DAT_02727778 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_02727778), puVar12 = PTR_DAT_02727780, iVar8 != 0)) {
    *(undefined8 *)PTR_DAT_02727780 = 0;
    FUN_001001c0(PTR_LAB_02727798,puVar12,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02727778);
    lVar10 = *(long *)PTR_DAT_02727780;
    plVar4 = (long *)PTR_DAT_02727780;
    pbVar5 = PTR_DAT_02727788;
    puVar12 = PTR_DAT_02727790;
  }
  else {
    lVar10 = *(long *)PTR_DAT_02727780;
    plVar4 = (long *)PTR_DAT_02727780;
    pbVar5 = PTR_DAT_02727788;
    puVar12 = PTR_DAT_02727790;
  }
  PTR_DAT_02727780 = (undefined *)plVar4;
  PTR_DAT_02727788 = pbVar5;
  PTR_DAT_02727790 = puVar12;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar8 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar10 + 0x58);
        if (((*pbVar5 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(pbVar5), puVar12 = PTR_DAT_02727790, iVar7 != 0)) {
          uVar9 = FUN_012c1b00();
          *(undefined8 *)PTR_DAT_02727790 = uVar9;
          __cxa_guard_release(pbVar5);
          puVar12 = PTR_DAT_02727790;
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0132f9a0;
          if (plVar13 == (long *)puVar12) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar7;
        if (iVar7 == 0) goto LAB_0132f9a0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar11 = *(long *)(lVar10 + 0x60);
        lVar10 = 0;
        if (lVar11 != 0) {
          lVar10 = lVar11 + -0x50;
        }
        *param_1 = lVar10;
        if (lVar11 != 0) {
          return;
        }
        goto LAB_0132f9a4;
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_0132f9a0:
  *param_1 = 0;
LAB_0132f9a4:
  plVar13 = (long *)FUN_01330bf0(auStack_38);
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x10))();
  }
  *param_1 = (long)plVar13;
  (**(code **)(*plVar13 + 0x10))(&local_40,plVar13);
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_02727778), iVar8 != 0)) {
    *plVar4 = 0;
    FUN_001001c0(PTR_LAB_02727798,plVar4,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02727778);
    lVar10 = *plVar4;
  }
  else {
    lVar10 = *plVar4;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
    *plVar4 = 0;
  }
  *plVar4 = local_40;
  return;
}


