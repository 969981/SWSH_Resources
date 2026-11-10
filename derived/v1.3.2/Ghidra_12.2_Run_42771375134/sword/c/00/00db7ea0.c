/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db7ea0; name: FUN_00db7ea0
 */


void FUN_00db7ea0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long local_68;
  
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x2a8);
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00db7f18;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00db7f18:
  puVar7 = PTR_DAT_0271e800;
  puVar6 = PTR_DAT_0271e7f8;
  puVar5 = PTR_DAT_02710860;
  plVar12 = *(long **)(param_1 + 0x140);
  plVar2 = *(long **)(param_1 + 0x148);
  if (plVar12 != plVar2) {
    do {
      lVar9 = *plVar12;
      puVar11 = (undefined8 *)(lVar9 + 8);
      plVar10 = (long *)(**(code **)*puVar11)(puVar11);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        uVar13 = FUN_00706e40();
        *(undefined8 *)puVar7 = uVar13;
        __cxa_guard_release(puVar6);
      }
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)puVar7) {
          local_68 = lVar9 + -0x48;
          plVar10 = *(long **)(param_1 + 0x2b0);
          if (plVar10 == *(long **)(param_1 + 0x2b8)) {
            FUN_00db9580(param_1 + 0x2a8,&local_68);
          }
          else {
            uVar13 = *(undefined8 *)(param_1 + 0x2c0);
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00db81a0;
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar13;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            *plVar10 = local_68;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            *(long *)(param_1 + 0x2b0) = *(long *)(param_1 + 0x2b0) + 8;
          }
          break;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
    if (*(long **)(param_1 + 0x148) != plVar2) goto LAB_00db816c;
  }
  puVar7 = PTR_DAT_0271e800;
  puVar6 = PTR_DAT_0271e7f8;
  puVar5 = PTR_DAT_02710860;
  plVar12 = *(long **)(param_1 + 0x110);
  plVar2 = *(long **)(param_1 + 0x118);
joined_r0x00db8050:
  if (plVar12 != plVar2) {
    while( true ) {
      lVar9 = *plVar12;
      puVar11 = (undefined8 *)(lVar9 + 8);
      plVar10 = (long *)(**(code **)*puVar11)(puVar11);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        uVar13 = FUN_00706e40();
        *(undefined8 *)puVar7 = uVar13;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar10 == (long *)0x0) {
          plVar12 = plVar12 + 1;
          goto joined_r0x00db8050;
        }
        if (plVar10 == (long *)puVar7) break;
        plVar10 = (long *)*plVar10;
      }
      local_68 = lVar9 + -0x48;
      plVar10 = *(long **)(param_1 + 0x2b0);
      if (plVar10 == *(long **)(param_1 + 0x2b8)) break;
      uVar13 = *(undefined8 *)(param_1 + 0x2c0);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00db81a0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar13;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *plVar10 = local_68;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      *(long *)(param_1 + 0x2b0) = *(long *)(param_1 + 0x2b0) + 8;
      plVar12 = plVar12 + 1;
      if (plVar12 == plVar2) goto LAB_00db816c;
    }
    FUN_00db9580(param_1 + 0x2a8,&local_68);
    plVar12 = plVar12 + 1;
    goto joined_r0x00db8050;
  }
LAB_00db816c:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
}


