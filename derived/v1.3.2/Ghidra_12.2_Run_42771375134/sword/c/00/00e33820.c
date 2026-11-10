/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e33820; name: FUN_00e33820
 */


void FUN_00e33820(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  long local_b0;
  long lStack_a8;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 1) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      FUN_012b3a30(*(undefined8 *)PTR_DAT_02710870,0);
      nn::os::GetSystemTick();
      uVar14 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x70) = uVar14;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    uVar5 = FUN_01562f10(*(undefined8 *)(param_1 + 0x48));
joined_r0x00e3399c:
    if ((uVar5 & 1) == 0) {
      do {
        piVar9 = (int *)(param_1 + 0x80);
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar12 = *(long *)(*(long *)PTR_DAT_027153d8 + 0x50);
      lVar8 = FUN_00e33d30(&local_d0,*(undefined8 *)(lVar12 + 8));
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      nn::os::LockMutex((MutexType *)(lVar12 + 0x330));
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      local_b0 = param_1;
      lStack_a8 = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      local_d0 = &LAB_00e34580;
      local_c8 = FUN_00e34650;
      local_c0 = &LAB_00e34690;
      local_b8 = FUN_00e346c0;
      puVar13 = *(undefined8 **)(lVar12 + 0x308);
      if (puVar13 < *(undefined8 **)(lVar12 + 0x310)) {
        uVar14 = *(undefined8 *)(lVar12 + 0x318);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        if (local_b8 != (code *)0x0) {
          (*local_b8)(&local_b0,puVar13 + 4);
          pcVar4 = local_c8;
          puVar13[3] = local_b8;
          *puVar13 = local_d0;
          puVar13[1] = local_c8;
          puVar13[2] = local_c0;
          if (local_c8 != (code *)0x0) {
            local_c0 = (undefined1 *)0x0;
            local_b8 = (code *)0x0;
            local_d0 = (undefined1 *)0x0;
            local_c8 = (code *)0x0;
            (*pcVar4)(&local_b0);
          }
        }
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        *(long *)(lVar12 + 0x308) = *(long *)(lVar12 + 0x308) + 0x80;
        pcVar4 = local_c8;
      }
      else {
        FUN_006f7e50(lVar12 + 0x300,&local_d0);
        pcVar4 = local_c8;
      }
      local_c8 = pcVar4;
      if (pcVar4 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar4)(&local_b0);
      }
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar12 + 0x350));
      nn::os::UnlockMutex((MutexType *)(lVar12 + 0x330));
      if (lVar8 == 0) {
        return;
      }
      plVar10 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      return;
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      return;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    FUN_01028870(*(undefined8 *)PTR_DAT_02710838);
    pcVar11 = (char *)(param_1 + 0x84);
    if (*pcVar11 == '\0') {
      lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x298);
      if (lVar8 == 0) {
        FUN_015297f0(0);
        cVar2 = *pcVar11;
      }
      else {
        plVar10 = (long *)(lVar8 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_015297f0(lVar8);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        cVar2 = *pcVar11;
      }
      goto joined_r0x00e33864;
    }
  }
  else {
    if (iVar1 == 2) {
      uVar5 = FUN_01562f10(*(undefined8 *)(param_1 + 0x48));
      goto joined_r0x00e3399c;
    }
    if (iVar1 != 3) {
      return;
    }
    cVar2 = *(char *)(param_1 + 0x84);
joined_r0x00e33864:
    if (cVar2 == '\0') {
      lVar8 = *(long *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      goto joined_r0x00e33950;
    }
  }
  nn::os::GetSystemTick();
  lVar8 = nn::os::ConvertToTimeSpan();
  uVar7 = lVar8 - *(long *)(param_1 + 0x70);
  uVar5 = ((long)uVar7 >> 0x20) * 0xd7b634db + ((uVar7 & 0xffffffff) * 0xd7b634db >> 0x20);
  if ((((long)uVar7 >> 0x20) * 0x431bde82 + ((long)uVar5 >> 0x20) +
       ((long)((uVar7 & 0xffffffff) * 0x431bde82 + (uVar5 & 0xffffffff)) >> 0x20) >> 0x12) -
      ((long)uVar7 >> 0x3f) < 1000) {
    return;
  }
  FUN_012b3a50(*(undefined8 *)PTR_DAT_02710870,0);
  lVar8 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
joined_r0x00e33950:
  if (lVar8 != 0) {
    FUN_01562e20(lVar8);
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
              (*(long **)(param_1 + 0x50),lVar8,*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x60));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}


