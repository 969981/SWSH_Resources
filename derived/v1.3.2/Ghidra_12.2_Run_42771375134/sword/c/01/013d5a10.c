/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d5a10; name: FUN_013d5a10
 */


void FUN_013d5a10(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long local_48;
  long local_38;
  
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  lVar8 = FUN_0132d9a0();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  lVar8 = puVar11[0x61];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  FUN_01306130(&local_38,lVar8,1);
  lVar13 = *(long *)PTR_DAT_02710798;
  if (((*PTR_DAT_02727638 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_02727638), puVar10 = PTR_DAT_02727640, iVar6 != 0)) {
    *(undefined8 *)PTR_DAT_02727640 = 0;
    FUN_001001c0(PTR_LAB_02727658,puVar10,&PTR_LOOP_025db000);
    __cxa_guard_release(PTR_DAT_02727638);
    lVar12 = *(long *)PTR_DAT_02727640;
    pbVar4 = PTR_DAT_02727648;
    puVar10 = PTR_DAT_02727650;
  }
  else {
    lVar12 = *(long *)PTR_DAT_02727640;
    pbVar4 = PTR_DAT_02727648;
    puVar10 = PTR_DAT_02727650;
  }
  PTR_DAT_02727648 = pbVar4;
  PTR_DAT_02727650 = puVar10;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    iVar6 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar7 = *(long **)(lVar12 + 0x58);
        if (((*pbVar4 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(pbVar4), puVar10 = PTR_DAT_02727650, iVar5 != 0)) {
          uVar9 = FUN_012c1b00();
          *(undefined8 *)PTR_DAT_02727650 = uVar9;
          __cxa_guard_release(pbVar4);
          puVar10 = PTR_DAT_02727650;
        }
        while( true ) {
          if (plVar7 == (long *)0x0) goto LAB_013d5c18;
          if (plVar7 == (long *)puVar10) break;
          plVar7 = (long *)*plVar7;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar6) break;
        ClearExclusiveLocal();
        iVar6 = iVar5;
        if (iVar5 == 0) goto LAB_013d5c18;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          uVar9 = FUN_012c8f90(1);
          plVar7 = (long *)(lVar12 + -8);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          local_48 = *(long *)(lVar13 + 0x1e8);
          lVar13 = local_38;
          goto joined_r0x013d5bc4;
        }
        break;
      }
      iVar6 = iVar5;
    } while (iVar5 != 0);
  }
LAB_013d5c18:
  uVar9 = FUN_012c8f90(1);
  local_48 = *(long *)(lVar13 + 0x1e8);
  lVar13 = local_38;
joined_r0x013d5bc4:
  local_38 = lVar13;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  lVar13 = FUN_013db560(lVar13,uVar9,&local_48);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(param_1 + 0x4c0);
  *(long *)(param_1 + 0x4c0) = lVar13;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x4c0);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  lVar13 = FUN_0132d9a0();
  for (; plVar7 != (long *)lVar13; plVar7 = (long *)*plVar7) {
  }
  local_48 = puVar11[0x65];
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_012debc0(uVar9,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_013db660(param_1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


