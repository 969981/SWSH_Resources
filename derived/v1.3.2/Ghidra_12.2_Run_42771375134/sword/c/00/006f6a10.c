/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f6a10; name: FUN_006f6a10
 */


void FUN_006f6a10(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_02710860;
  local_58 = param_2;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar7 == 0) || (iVar9 = *(int *)(lVar7 + 0x90), iVar9 == -1)) || (iVar9 == 3)) {
    lVar7 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x418);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x40c));
          while (*plVar1 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_006f6ab4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_006f6ab4:
    bVar4 = true;
    iVar9 = 3;
  }
  else {
    bVar4 = false;
  }
  puVar6 = PTR_DAT_02715500;
  lVar7 = (long)iVar9;
  if (*(int *)PTR_DAT_02715500 != 0) {
    lVar10 = param_1 + lVar7 * 0x60;
    puVar2 = *(undefined8 **)(lVar10 + 0x108);
    if (puVar2 == *(undefined8 **)(lVar10 + 0x110)) {
      FUN_006f7ad0(param_1 + lVar7 * 0x60 + 0x100,&local_58);
      iVar9 = *(int *)puVar6;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + lVar7 * 0x60 + 0x118);
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_006f6c28;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar11;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar2 = local_58;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      *(long *)(lVar10 + 0x108) = *(long *)(lVar10 + 0x108) + 8;
      iVar9 = *(int *)puVar6;
    }
    if (iVar9 == 1) goto joined_r0x006f6bd4;
  }
  lVar10 = param_1 + lVar7 * 0x60;
  puVar2 = *(undefined8 **)(lVar10 + 0x138);
  if (puVar2 == *(undefined8 **)(lVar10 + 0x140)) {
    FUN_006f7ad0(param_1 + lVar7 * 0x60 + 0x130,&local_58);
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + lVar7 * 0x60 + 0x148);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_006f6c28:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar2 = local_58;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    *(long *)(lVar10 + 0x138) = *(long *)(lVar10 + 0x138) + 8;
  }
joined_r0x006f6bd4:
  if (bVar4) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass((undefined8 *)(param_1 + 0x418),0x10);
      if (bVar4) {
        *(undefined8 *)(param_1 + 0x418) = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x40c));
  }
  return;
}


