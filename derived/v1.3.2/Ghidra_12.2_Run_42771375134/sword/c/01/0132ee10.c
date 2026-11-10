/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132ee10; name: FUN_0132ee10
 */


void FUN_0132ee10(long *param_1,long *param_2,undefined8 param_3)

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
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long local_48;
  
  puVar6 = PTR_DAT_02727488;
  if (((*PTR_DAT_02727488 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_02727488), puVar11 = PTR_DAT_02727490, iVar8 != 0)) {
    *(undefined8 *)PTR_DAT_02727490 = 0;
    FUN_001001c0(PTR_LAB_027274a8,puVar11,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02727488);
    lVar13 = *(long *)PTR_DAT_02727490;
    plVar4 = (long *)PTR_DAT_02727490;
    pbVar5 = PTR_DAT_02727498;
    puVar11 = PTR_DAT_027274a0;
  }
  else {
    lVar13 = *(long *)PTR_DAT_02727490;
    plVar4 = (long *)PTR_DAT_02727490;
    pbVar5 = PTR_DAT_02727498;
    puVar11 = PTR_DAT_027274a0;
  }
  PTR_DAT_02727490 = (undefined *)plVar4;
  PTR_DAT_02727498 = pbVar5;
  PTR_DAT_027274a0 = puVar11;
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
    piVar1 = (int *)(lVar13 + 0x54);
    iVar8 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar13 + 0x58);
        if (((*pbVar5 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(pbVar5), puVar11 = PTR_DAT_027274a0, iVar7 != 0)) {
          uVar9 = FUN_012c1b00();
          *(undefined8 *)PTR_DAT_027274a0 = uVar9;
          __cxa_guard_release(pbVar5);
          puVar11 = PTR_DAT_027274a0;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_0132efa0;
          if (plVar12 == (long *)puVar11) break;
          plVar12 = (long *)*plVar12;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar7;
        if (iVar7 == 0) goto LAB_0132efa0;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar10 = *(long *)(lVar13 + 0x60);
        lVar13 = 0;
        if (lVar10 != 0) {
          lVar13 = lVar10 + -0x50;
        }
        *param_1 = lVar13;
        if (lVar10 != 0) {
          return;
        }
        goto LAB_0132efa4;
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_0132efa0:
  *param_1 = 0;
LAB_0132efa4:
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = param_2;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
  plVar12 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x188,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_012c1ec0(plVar12,param_3);
  plVar12[1] = (long)param_2;
  plVar12[2] = (long)plVar12;
  plVar12[3] = 0x188;
  plVar12[4] = 8;
  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
  if (plVar12 != (long *)0x0) {
    (**(code **)(plVar12[9] + 0x10))();
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = (long)plVar12;
  (**(code **)(*plVar12 + 0x10))(&local_48,plVar12);
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_02727488), iVar8 != 0)) {
    *plVar4 = 0;
    FUN_001001c0(PTR_LAB_027274a8,plVar4,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02727488);
    lVar13 = *plVar4;
  }
  else {
    lVar13 = *plVar4;
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
    *plVar4 = 0;
  }
  *plVar4 = local_48;
  return;
}


