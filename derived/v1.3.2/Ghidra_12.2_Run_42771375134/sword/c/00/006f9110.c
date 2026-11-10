/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f9110; name: FUN_006f9110
 */


/* WARNING: Removing unreachable block (ram,0x006f9288) */

void FUN_006f9110(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_50;
  long lStack_48;
  long local_38;
  
  lVar5 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_006f9178;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_006f9178:
  local_38 = *(long *)(param_2 + 0xd8);
  lStack_48 = param_2;
  if (local_38 == 0) {
    plVar10 = *(long **)(param_1 + 0x188);
    plVar2 = *(long **)(param_1 + 400);
    if ((plVar10 == plVar2) || (*plVar10 == param_2)) {
      if (plVar10 != plVar2) goto LAB_006f91f0;
LAB_006f926c:
      if (plVar2 != plVar10) {
LAB_006f9274:
        *(long **)(param_1 + 400) = plVar10;
      }
    }
    else {
      do {
        plVar10 = plVar10 + 1;
        if (plVar2 == plVar10) goto LAB_006f9298;
      } while (*plVar10 != param_2);
      if (plVar10 == plVar2) goto LAB_006f926c;
LAB_006f91f0:
      plVar6 = plVar10 + 1;
      if (plVar6 == plVar2) goto LAB_006f926c;
      uVar7 = (long)plVar2 + (-0x10 - (long)plVar10);
      if (((uint)uVar7 >> 3 & 1) == 0) {
        plVar9 = plVar10;
        if (*plVar6 != param_2) {
          plVar9 = plVar10 + 1;
          *plVar10 = *plVar6;
        }
        plVar6 = plVar10 + 2;
        plVar10 = plVar9;
      }
      if (7 < uVar7) {
        do {
          plVar9 = plVar10;
          if (*plVar6 != param_2) {
            plVar9 = plVar10 + 1;
            *plVar10 = *plVar6;
          }
          plVar10 = plVar9;
          if (plVar6[1] != param_2) {
            plVar10 = plVar9 + 1;
            *plVar9 = plVar6[1];
          }
          plVar6 = plVar6 + 2;
        } while (plVar6 != plVar2);
      }
      if (*(long **)(param_1 + 400) != plVar10) goto LAB_006f9274;
    }
LAB_006f9298:
    puVar8 = *(undefined8 **)(param_1 + 0x100);
    if (puVar8 < *(undefined8 **)(param_1 + 0x108)) goto LAB_006f92a8;
  }
  else {
    FUN_006f9bd0(param_1 + 0x130,&local_38);
    puVar8 = *(undefined8 **)(param_1 + 0x100);
    if (puVar8 < *(undefined8 **)(param_1 + 0x108)) {
LAB_006f92a8:
      local_50 = 0;
      uVar11 = *(undefined8 *)(param_1 + 0x110);
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar8 = local_50;
      puVar8[1] = lStack_48;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 0x10;
      goto LAB_006f92f8;
    }
  }
  local_50 = 0;
  FUN_006f9e00(param_1 + 0xf8,&local_50);
LAB_006f92f8:
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


