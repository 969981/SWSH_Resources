/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f6c30; name: FUN_006f6c30
 */


void FUN_006f6c30(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_02710860;
  local_58 = param_2;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar6 == 0) || (iVar8 = *(int *)(lVar6 + 0x90), iVar8 == -1)) || (iVar8 == 3)) {
    lVar6 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x430);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x424));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_006f6cd4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_006f6cd4:
    bVar3 = true;
    iVar8 = 3;
  }
  else {
    bVar3 = false;
  }
  puVar5 = PTR_DAT_02715500;
  lVar6 = (long)iVar8;
  if (*(int *)PTR_DAT_02715500 != 0) {
    lVar10 = param_1 + lVar6 * 0x60;
    puVar9 = *(undefined8 **)(lVar10 + 0x288);
    if (puVar9 == *(undefined8 **)(lVar10 + 0x290)) {
      FUN_006f7c90(param_1 + lVar6 * 0x60 + 0x280,&local_58);
      iVar8 = *(int *)puVar5;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + lVar6 * 0x60 + 0x298);
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_006f6e50;
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *puVar9 = local_58;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      *(long *)(lVar10 + 0x288) = *(long *)(lVar10 + 0x288) + 8;
      iVar8 = *(int *)puVar5;
    }
    if (iVar8 == 1) goto joined_r0x006f6dfc;
  }
  lVar10 = param_1 + lVar6 * 0x60;
  puVar9 = *(undefined8 **)(lVar10 + 0x2b8);
  if (puVar9 == *(undefined8 **)(lVar10 + 0x2c0)) {
    FUN_006f7c90(param_1 + lVar6 * 0x60 + 0x2b0,&local_58);
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + lVar6 * 0x60 + 0x2c8);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_006f6e50:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar9 = local_58;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *(long *)(lVar10 + 0x2b8) = *(long *)(lVar10 + 0x2b8) + 8;
  }
joined_r0x006f6dfc:
  if (bVar3) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass((undefined8 *)(param_1 + 0x430),0x10);
      if (bVar3) {
        *(undefined8 *)(param_1 + 0x430) = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x424));
  }
  return;
}


