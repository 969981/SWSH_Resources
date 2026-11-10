/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca7630; name: FUN_00ca7630
 */


void FUN_00ca7630(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x15a0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1594));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00ca7694;
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
LAB_00ca7694:
  puVar5 = PTR_DAT_0271bfe0;
  puVar4 = PTR_DAT_0271bfd0;
  lVar8 = *(long *)(param_1 + 0x15d0);
  lVar6 = 0;
  uVar7 = 0;
  lVar10 = 8;
  do {
    if ((long)uVar7 < (long)*(int *)(lVar8 + 8)) {
      lVar11 = *(long *)(lVar8 + 0x38);
      if (*(ulong *)(lVar11 + 0x48) <= uVar7) goto LAB_00ca784c;
      puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x40) + lVar6);
      uVar12 = *(undefined8 *)(*(long *)puVar5 + lVar10);
      *puVar9 = *(undefined8 *)(*(long *)puVar4 + lVar10);
      puVar9[1] = uVar12;
    }
    uVar7 = uVar7 + 1;
    lVar6 = lVar6 + 0x28;
    lVar10 = lVar10 + 0x20;
  } while (uVar7 < 0x1c);
  FUN_00ca8990(*(undefined8 *)(param_1 + 0x15f0));
  puVar5 = PTR_DAT_0271c000;
  puVar4 = PTR_DAT_0271bff0;
  lVar8 = *(long *)(param_1 + 0x1610);
  lVar6 = 0;
  uVar7 = 0;
  lVar10 = 8;
  do {
    if ((long)uVar7 < (long)*(int *)(lVar8 + 8)) {
      lVar11 = *(long *)(lVar8 + 0x38);
      if (*(ulong *)(lVar11 + 0x48) <= uVar7) goto LAB_00ca784c;
      puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x40) + lVar6);
      uVar12 = *(undefined8 *)(*(long *)puVar5 + lVar10);
      *puVar9 = *(undefined8 *)(*(long *)puVar4 + lVar10);
      puVar9[1] = uVar12;
    }
    uVar7 = uVar7 + 1;
    lVar6 = lVar6 + 0x28;
    lVar10 = lVar10 + 0x20;
  } while (uVar7 < 0x1c);
  FUN_00ca8b20(*(undefined8 *)(param_1 + 0x1630));
  FUN_00ca8c80(*(undefined8 *)(param_1 + 0x1650));
  puVar5 = PTR_DAT_0271bf28;
  puVar4 = PTR_DAT_0271bf10;
  lVar6 = *(long *)(param_1 + 0x1670);
  if (0 < *(int *)(lVar6 + 8)) {
    if (*(long *)(*(long *)(lVar6 + 0x38) + 0x48) == 0) {
LAB_00ca784c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar12 = *(undefined8 *)(*(long *)PTR_DAT_0271bf28 + 8);
    puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0x38) + 0x40);
    *puVar9 = *(undefined8 *)(*(long *)PTR_DAT_0271bf10 + 8);
    puVar9[1] = uVar12;
    if (1 < *(int *)(lVar6 + 8)) {
      if (*(ulong *)(*(long *)(lVar6 + 0x38) + 0x48) < 2) goto LAB_00ca784c;
      lVar10 = *(long *)puVar4;
      lVar8 = *(long *)puVar5;
      uVar12 = *(undefined8 *)(lVar8 + 0x28);
      lVar11 = *(long *)(*(long *)(lVar6 + 0x38) + 0x40);
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar11 + 0x30) = uVar12;
      if (2 < *(int *)(lVar6 + 8)) {
        if (*(ulong *)(*(long *)(lVar6 + 0x38) + 0x48) < 3) goto LAB_00ca784c;
        uVar12 = *(undefined8 *)(lVar8 + 0x48);
        lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x40);
        *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(lVar10 + 0x48);
        *(undefined8 *)(lVar6 + 0x58) = uVar12;
      }
    }
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1594));
  return;
}


