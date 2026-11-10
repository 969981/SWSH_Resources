/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072b810; name: FUN_0072b810
 */


void FUN_0072b810(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 local_260 [125];
  uint local_6c [3];
  
  local_6c[0] = param_4;
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x68);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0072b888;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0072b888:
  uVar7 = (ulong)local_6c[0];
  lVar5 = param_1 + uVar7 * 0x120;
  if (-1 < *(int *)(lVar5 + 0x1a8)) {
    lVar8 = *(long *)(param_1 + 0x750);
    lVar6 = *(long *)(param_1 + 0x758);
    if (lVar6 == lVar8) {
LAB_0072b8d8:
      if (lVar8 != lVar6) {
        FUN_006fc0c0(local_260,param_3,*(undefined4 *)(lVar8 + 0x1d8),*(undefined4 *)(lVar8 + 0x1dc)
                     ,param_2);
        FUN_007185f0(lVar8,local_260);
        FUN_00784490(local_260);
        goto LAB_0072b9bc;
      }
    }
    else {
      do {
        if ((*(long *)(lVar8 + 0x20) == *param_2) && (*(uint *)(lVar8 + 0x1d8) == local_6c[0]))
        goto LAB_0072b8d8;
        lVar8 = lVar8 + 0x1f0;
      } while (lVar6 != lVar8);
    }
    uVar4 = FUN_0072a0b0(lVar5 + 0x90,uVar7,2,param_2[1]);
    uVar9 = *(ulong *)(param_1 + 0x758);
    local_260[0] = uVar4;
    if (uVar9 < *(ulong *)(param_1 + 0x760)) {
      uVar10 = *(undefined8 *)(param_1 + 0x768);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      FUN_006fc0c0(uVar9,param_3,uVar7,uVar4,param_2);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      *(long *)(param_1 + 0x758) = *(long *)(param_1 + 0x758) + 0x1f0;
    }
    else {
      FUN_0072ba00(param_1 + 0x750,param_3,local_6c,local_260,param_2);
    }
  }
LAB_0072b9bc:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x5c));
  return;
}


