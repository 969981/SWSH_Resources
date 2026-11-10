/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132f350; name: FUN_0132f350
 */


void FUN_0132f350(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long *plVar5;
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
  
  puVar6 = PTR_DAT_02728088;
  if (((*PTR_DAT_02728088 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_02728088), puVar12 = PTR_DAT_02728090, iVar8 != 0)) {
    *(undefined8 *)PTR_DAT_02728090 = 0;
    FUN_001001c0(PTR_LAB_02728098,puVar12,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02728088);
    lVar10 = *(long *)PTR_DAT_02728090;
    pbVar4 = PTR_DAT_02727fe0;
    puVar12 = PTR_DAT_02727fe8;
    plVar5 = (long *)PTR_DAT_02728090;
  }
  else {
    lVar10 = *(long *)PTR_DAT_02728090;
    pbVar4 = PTR_DAT_02727fe0;
    puVar12 = PTR_DAT_02727fe8;
    plVar5 = (long *)PTR_DAT_02728090;
  }
  PTR_DAT_02727fe0 = pbVar4;
  PTR_DAT_02727fe8 = puVar12;
  PTR_DAT_02728090 = (undefined *)plVar5;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
    piVar1 = (int *)(lVar10 + 0x54);
    iVar8 = *(int *)(lVar10 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar10 + 0x58);
        if (((*pbVar4 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(pbVar4), puVar12 = PTR_DAT_02727fe8, iVar7 != 0)) {
          uVar9 = FUN_012c1b00();
          *(undefined8 *)PTR_DAT_02727fe8 = uVar9;
          __cxa_guard_release(pbVar4);
          puVar12 = PTR_DAT_02727fe8;
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0132f4e0;
          if (plVar13 == (long *)puVar12) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar7;
        if (iVar7 == 0) goto LAB_0132f4e0;
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
        goto LAB_0132f4e4;
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_0132f4e0:
  *param_1 = 0;
LAB_0132f4e4:
  plVar13 = (long *)FUN_013307c0(auStack_38);
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x10))();
  }
  *param_1 = (long)plVar13;
  (**(code **)(*plVar13 + 0x10))(&local_40,plVar13);
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_02728088), iVar8 != 0)) {
    *plVar5 = 0;
    FUN_001001c0(PTR_LAB_02728098,plVar5,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02728088);
    lVar10 = *plVar5;
  }
  else {
    lVar10 = *plVar5;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
    *plVar5 = 0;
  }
  *plVar5 = local_40;
  return;
}


