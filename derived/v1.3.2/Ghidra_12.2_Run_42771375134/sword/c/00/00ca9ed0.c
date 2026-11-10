/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca9ed0; name: FUN_00ca9ed0
 */


void FUN_00ca9ed0(long param_1,long *param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  
  if (param_3 == 5) {
    lVar8 = 0x1630;
  }
  else {
    if (param_3 != 4) {
      return;
    }
    lVar8 = 0x1610;
  }
  lVar9 = *(long *)(param_1 + lVar8);
  lVar8 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0x15a0);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1594));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00ca9f64;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00ca9f64:
  lVar8 = *param_2;
  if ((lVar8 == 0) || (*(int *)(lVar8 + 0x54) == 0)) {
LAB_00ca9fd4:
    lVar7 = 0;
  }
  else {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar11 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        lVar7 = FUN_00c72e20();
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ca9fd4;
          if (plVar12 == (long *)lVar7) break;
          plVar12 = (long *)*plVar12;
        }
        iVar4 = *piVar1;
        if (iVar4 != iVar11) break;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar7 = 0;
          if (*(long *)(lVar8 + 0x60) != 0) {
            lVar7 = *(long *)(lVar8 + 0x60) + -0x50;
          }
          goto LAB_00ca9fd8;
        }
        lVar7 = 0;
        iVar11 = iVar4;
        if (iVar4 == 0) goto LAB_00ca9fd8;
      }
      ClearExclusiveLocal();
      lVar7 = 0;
      iVar11 = iVar4;
    } while (iVar4 != 0);
  }
LAB_00ca9fd8:
  uVar3 = *(uint *)PTR_DAT_0271c508;
  if (0 < *(int *)(lVar9 + 8)) {
    uVar10 = 0;
    lVar8 = 0x10;
    do {
      if (*(ulong *)(*(long *)(lVar9 + 0x38) + 0x48) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)(*(long *)(*(long *)(lVar9 + 0x38) + 0x40) + lVar8) == lVar7) goto LAB_00caa02c;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x28;
    } while ((int)uVar10 < *(int *)(lVar9 + 8));
  }
  uVar10 = (ulong)uVar3;
LAB_00caa02c:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if ((uint)uVar10 != uVar3) {
    FUN_00cb0660(lVar9,uVar10 & 0xffffffff);
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1594));
  return;
}


